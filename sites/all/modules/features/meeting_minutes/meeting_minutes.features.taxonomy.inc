<?php
/**
 * @file
 * meeting_minutes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function meeting_minutes_taxonomy_default_vocabularies() {
  return array(
    'projects' => array(
      'name' => 'Projects',
      'machine_name' => 'projects',
      'description' => 'LIst of projects',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
