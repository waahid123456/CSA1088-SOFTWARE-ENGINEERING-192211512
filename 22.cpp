<!DOCTYPE html>
<!-- saved from url=(0065)https://github.com/Tharakeswar9515/software-engineering-192211770 -->
<html lang="en" data-color-mode="auto" data-light-theme="light" data-dark-theme="dark" data-a11y-animated-images="system" data-a11y-link-underlines="true" data-turbo-loaded=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style type="text/css">.turbo-progress-bar {
  position: fixed;
  display: block;
  top: 0;
  left: 0;
  height: 3px;
  background: #0076ff;
  z-index: 2147483647;
  transition:
    width 300ms ease-out,
    opacity 150ms 150ms ease-in;
  transform: translate3d(0, 0, 0);
}
</style>
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">
  <link rel="preconnect" href="https://github.githubassets.com/" crossorigin="">
  <link rel="preconnect" href="https://avatars.githubusercontent.com/">

  

  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/light-b92e9647318f.css"><link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/dark-5d486a4ede8e.css"><link data-color-theme="dark_dimmed" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed-27c8d635e4e5.css"><link data-color-theme="dark_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_high_contrast-8438e75afd36.css"><link data-color-theme="dark_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind-bf5665b96628.css"><link data-color-theme="light_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind-c414b5ba1dce.css"><link data-color-theme="light_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_high_contrast-e5868b7374db.css"><link data-color-theme="light_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia-299ac9c64ec0.css"><link data-color-theme="dark_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia-3a26e78ad0ff.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/primer-primitives-363ec1831c26.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/primer-0cdc607a5517.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/global-b2298340fd5b.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/github-f2eafb2a55aa.css">
  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./22_files/code-71ecd5638fbf.css">

  
      <meta name="optimizely-datafile" content="{&quot;groups&quot;: [], &quot;environmentKey&quot;: &quot;production&quot;, &quot;rollouts&quot;: [], &quot;typedAudiences&quot;: [], &quot;projectId&quot;: &quot;16737760170&quot;, &quot;variables&quot;: [], &quot;featureFlags&quot;: [], &quot;experiments&quot;: [], &quot;version&quot;: &quot;4&quot;, &quot;audiences&quot;: [{&quot;conditions&quot;: &quot;[\&quot;or\&quot;, {\&quot;match\&quot;: \&quot;exact\&quot;, \&quot;name\&quot;: \&quot;$opt_dummy_attribute\&quot;, \&quot;type\&quot;: \&quot;custom_attribute\&quot;, \&quot;value\&quot;: \&quot;$opt_dummy_value\&quot;}]&quot;, &quot;id&quot;: &quot;$opt_dummy_audience&quot;, &quot;name&quot;: &quot;Optimizely-Generated Audience for Backwards Compatibility&quot;}], &quot;anonymizeIP&quot;: true, &quot;sdkKey&quot;: &quot;WTc6awnGuYDdG98CYRban&quot;, &quot;attributes&quot;: [{&quot;id&quot;: &quot;16822470375&quot;, &quot;key&quot;: &quot;user_id&quot;}, {&quot;id&quot;: &quot;17143601254&quot;, &quot;key&quot;: &quot;spammy&quot;}, {&quot;id&quot;: &quot;18175660309&quot;, &quot;key&quot;: &quot;organization_plan&quot;}, {&quot;id&quot;: &quot;18813001570&quot;, &quot;key&quot;: &quot;is_logged_in&quot;}, {&quot;id&quot;: &quot;19073851829&quot;, &quot;key&quot;: &quot;geo&quot;}, {&quot;id&quot;: &quot;20175462351&quot;, &quot;key&quot;: &quot;requestedCurrency&quot;}, {&quot;id&quot;: &quot;20785470195&quot;, &quot;key&quot;: &quot;country_code&quot;}, {&quot;id&quot;: &quot;21656311196&quot;, &quot;key&quot;: &quot;opened_downgrade_dialog&quot;}], &quot;botFiltering&quot;: false, &quot;accountId&quot;: &quot;16737760170&quot;, &quot;events&quot;: [{&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;17911811441&quot;, &quot;key&quot;: &quot;hydro_click.dashboard.teacher_toolbox_cta&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18124116703&quot;, &quot;key&quot;: &quot;submit.organizations.complete_sign_up&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18145892387&quot;, &quot;key&quot;: &quot;no_metric.tracked_outside_of_optimizely&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18178755568&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.add_repo&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18180553241&quot;, &quot;key&quot;: &quot;submit.repository_imports.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18186103728&quot;, &quot;key&quot;: &quot;click.help.learn_more_about_repository_creation&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18188530140&quot;, &quot;key&quot;: &quot;test_event&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18191963644&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.transfer_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18195612788&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.import_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18210945499&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.invite_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18211063248&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.create_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18215721889&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.update_profile&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18224360785&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.dismiss&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18234832286&quot;, &quot;key&quot;: &quot;submit.organization_activation.complete&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18252392383&quot;, &quot;key&quot;: &quot;submit.org_repository.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18257551537&quot;, &quot;key&quot;: &quot;submit.org_member_invitation.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18259522260&quot;, &quot;key&quot;: &quot;submit.organization_profile.update&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18564603625&quot;, &quot;key&quot;: &quot;view.classroom_select_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18568612016&quot;, &quot;key&quot;: &quot;click.classroom_sign_in_click&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18572592540&quot;, &quot;key&quot;: &quot;view.classroom_name&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18574203855&quot;, &quot;key&quot;: &quot;click.classroom_create_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18582053415&quot;, &quot;key&quot;: &quot;click.classroom_select_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18589463420&quot;, &quot;key&quot;: &quot;click.classroom_create_classroom&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18591323364&quot;, &quot;key&quot;: &quot;click.classroom_create_first_classroom&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18591652321&quot;, &quot;key&quot;: &quot;click.classroom_grant_access&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18607131425&quot;, &quot;key&quot;: &quot;view.classroom_creation&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18831680583&quot;, &quot;key&quot;: &quot;upgrade_account_plan&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19064064515&quot;, &quot;key&quot;: &quot;click.signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19075373687&quot;, &quot;key&quot;: &quot;click.view_account_billing_page&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19077355841&quot;, &quot;key&quot;: &quot;click.dismiss_signup_prompt&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19079713938&quot;, &quot;key&quot;: &quot;click.contact_sales&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19120963070&quot;, &quot;key&quot;: &quot;click.compare_account_plans&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19151690317&quot;, &quot;key&quot;: &quot;click.upgrade_account_cta&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19424193129&quot;, &quot;key&quot;: &quot;click.open_account_switcher&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19520330825&quot;, &quot;key&quot;: &quot;click.visit_account_profile&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19540970635&quot;, &quot;key&quot;: &quot;click.switch_account_context&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19730198868&quot;, &quot;key&quot;: &quot;submit.homepage_signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19820830627&quot;, &quot;key&quot;: &quot;click.homepage_signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19988571001&quot;, &quot;key&quot;: &quot;click.create_enterprise_trial&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20036538294&quot;, &quot;key&quot;: &quot;click.create_organization_team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20040653299&quot;, &quot;key&quot;: &quot;click.input_enterprise_trial_form&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20062030003&quot;, &quot;key&quot;: &quot;click.continue_with_team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20068947153&quot;, &quot;key&quot;: &quot;click.create_organization_free&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20086636658&quot;, &quot;key&quot;: &quot;click.signup_continue.username&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20091648988&quot;, &quot;key&quot;: &quot;click.signup_continue.create_account&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20103637615&quot;, &quot;key&quot;: &quot;click.signup_continue.email&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20111574253&quot;, &quot;key&quot;: &quot;click.signup_continue.password&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20120044111&quot;, &quot;key&quot;: &quot;view.pricing_page&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20152062109&quot;, &quot;key&quot;: &quot;submit.create_account&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20165800992&quot;, &quot;key&quot;: &quot;submit.upgrade_payment_form&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20171520319&quot;, &quot;key&quot;: &quot;submit.create_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20222645674&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.discuss_your_needs&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20227443657&quot;, &quot;key&quot;: &quot;submit.verify_primary_user_email&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20234607160&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.try_enterprise&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20238175784&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20239847212&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.continue_free&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20251097193&quot;, &quot;key&quot;: &quot;recommended_plan&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20438619534&quot;, &quot;key&quot;: &quot;click.pricing_calculator.1_member&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20456699683&quot;, &quot;key&quot;: &quot;click.pricing_calculator.15_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20467868331&quot;, &quot;key&quot;: &quot;click.pricing_calculator.10_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20476267432&quot;, &quot;key&quot;: &quot;click.trial_days_remaining&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20476357660&quot;, &quot;key&quot;: &quot;click.discover_feature&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20479287901&quot;, &quot;key&quot;: &quot;click.pricing_calculator.custom_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20481107083&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.apply_teacher_benefits&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20483089392&quot;, &quot;key&quot;: &quot;click.pricing_calculator.5_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20484283944&quot;, &quot;key&quot;: &quot;click.onboarding_task&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20484996281&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.apply_student_benefits&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20486713726&quot;, &quot;key&quot;: &quot;click.onboarding_task_breadcrumb&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20490791319&quot;, &quot;key&quot;: &quot;click.upgrade_to_enterprise&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20491786766&quot;, &quot;key&quot;: &quot;click.talk_to_us&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20494144087&quot;, &quot;key&quot;: &quot;click.dismiss_enterprise_trial&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20499722759&quot;, &quot;key&quot;: &quot;completed_all_tasks&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20500710104&quot;, &quot;key&quot;: &quot;completed_onboarding_tasks&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20513160672&quot;, &quot;key&quot;: &quot;click.read_doc&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20516196762&quot;, &quot;key&quot;: &quot;actions_enabled&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20518980986&quot;, &quot;key&quot;: &quot;click.dismiss_trial_banner&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20535446721&quot;, &quot;key&quot;: &quot;click.issue_actions_prompt.dismiss_prompt&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20557002247&quot;, &quot;key&quot;: &quot;click.issue_actions_prompt.setup_workflow&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20595070227&quot;, &quot;key&quot;: &quot;click.pull_request_setup_workflow&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20626600314&quot;, &quot;key&quot;: &quot;click.seats_input&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20642310305&quot;, &quot;key&quot;: &quot;click.decrease_seats_number&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20662990045&quot;, &quot;key&quot;: &quot;click.increase_seats_number&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20679620969&quot;, &quot;key&quot;: &quot;click.public_product_roadmap&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20761240940&quot;, &quot;key&quot;: &quot;click.dismiss_survey_banner&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20767210721&quot;, &quot;key&quot;: &quot;click.take_survey&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20795281201&quot;, &quot;key&quot;: &quot;click.archive_list&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20966790249&quot;, &quot;key&quot;: &quot;contact_sales.submit&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20996500333&quot;, &quot;key&quot;: &quot;contact_sales.existing_customer&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20996890162&quot;, &quot;key&quot;: &quot;contact_sales.blank_message_field&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21000470317&quot;, &quot;key&quot;: &quot;contact_sales.personal_email&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21002790172&quot;, &quot;key&quot;: &quot;contact_sales.blank_phone_field&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21354412592&quot;, &quot;key&quot;: &quot;click.dismiss_create_readme&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21366102546&quot;, &quot;key&quot;: &quot;click.dismiss_zero_user_content&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21370252505&quot;, &quot;key&quot;: &quot;account_did_downgrade&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21370840408&quot;, &quot;key&quot;: &quot;click.cta_create_readme&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21375451068&quot;, &quot;key&quot;: &quot;click.cta_create_new_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21385390948&quot;, &quot;key&quot;: &quot;click.zero_user_content&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21467712175&quot;, &quot;key&quot;: &quot;click.downgrade_keep&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21484112202&quot;, &quot;key&quot;: &quot;click.downgrade&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21495292213&quot;, &quot;key&quot;: &quot;click.downgrade_survey_exit&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21508241468&quot;, &quot;key&quot;: &quot;click.downgrade_survey_submit&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21512030356&quot;, &quot;key&quot;: &quot;click.downgrade_support&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21539090022&quot;, &quot;key&quot;: &quot;click.downgrade_exit&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21543640644&quot;, &quot;key&quot;: &quot;click_fetch_upstream&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21646510300&quot;, &quot;key&quot;: &quot;click.move_your_work&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21656151116&quot;, &quot;key&quot;: &quot;click.add_branch_protection_rule&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21663860599&quot;, &quot;key&quot;: &quot;click.downgrade_dialog_open&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21687860483&quot;, &quot;key&quot;: &quot;click.learn_about_protected_branches&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21689050333&quot;, &quot;key&quot;: &quot;click.dismiss_protect_this_branch&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;21864370109&quot;, &quot;key&quot;: &quot;click.sign_in&quot;}], &quot;revision&quot;: &quot;1372&quot;}">


  <script type="application/json" id="client-env">{"locale":"en","featureFlags":["copilot_conversational_ux_streaming","failbot_handle_non_errors","geojson_azure_maps","image_metric_tracking","repository_suggester_elastic_search","turbo_experiment_risky","sample_network_conn_type","upload_manifest_status"]}</script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/wp-runtime-7c1de7f01e6a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_dompurify_dist_purify_js-6890e890956f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_stacktrace-parser_dist_stack-trace-parser_esm_js-node_modules_github_bro-a4c183-79f9611c275b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/ui_packages_soft-nav_soft-nav_ts-6a5fadd2ef71.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/environment-569829d98e9a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_selector-observer_dist_index_esm_js-9f960d9b217c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_primer_behaviors_dist_esm_focus-zone_js-d9ce45da2851.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_relative-time-element_dist_index_js-c6fd49e3fd28.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_fzy_js_index_js-node_modules_github_combobox-nav_dist_index_js-node_modu-344bff-421f7a8c1008.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_details-dialog-elemen-29dc30-a2a71f11a507.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_filter-input-element_dist_index_js-node_modules_github_remote-inp-59c459-e74bf552c5b7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_file-attachment-element_dist_index_js-node_modules_primer_view-co-2c6968-3cbb53b1c985.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/github-elements-ba6b32e5a9a8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/element-registry-1cabc2253887.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_catalyst_lib_index_js-node_modules_github_hydro-analytics-client_-978abc0-15861e0630b6.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_lit-html_lit-html_js-5b376145beff.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_github_alive-client_dist-bf5aa2-1b562c29ab8e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_morphdom_dist_morphdom-esm_js-5bff297a06de.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_turbo_dist_turbo_es2017-esm_js-ec51a0f6e881.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_color-convert_index_js-72c9fbde5ad4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_primer_behaviors_dist_esm_dimensions_js-node_modules_github_hotkey_dist_-8755d2-0ac4a16a6cca.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_session-resume_dist_index_js-node_modules_primer_behaviors_dist_e-ac74c6-637fd908cfc1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_paste-markdown_dist_index_esm_js-node_modules_github_quote-select-854ff4-201063b8cc44.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/ui_packages_details-dialog_details-dialog_ts-ui_packages_fetch-utils_fetch-utils_ts-78f25ba16cd9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_updatable-content_ts-ui_packages_hydro-analytics_hydro-analytics_ts-6ab1a34074c8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_behaviors_task-list_ts-app_assets_modules_github_onfocus_ts-app_ass-079b43-84f860f8b7d6.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_sticky-scroll-into-view_ts-f982282c5c39.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_behaviors_ajax-error_ts-app_assets_modules_github_behaviors_include-2e2258-178d980b559e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_behaviors_commenting_edit_ts-app_assets_modules_github_behaviors_ht-83c235-b85e9f4f1304.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/behaviors-5782ed9d273e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_catalyst_lib_index_js-d0256ebff5cd.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/notifications-global-99d196517b1b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_optimizely_optimizely-sdk_dist_optimizely_browser_es_min_js-node_modules-089adc-7321fd61724b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/optimizely-6bf89993d998.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_virtualized-list_es_index_js-node_modules_github_template-parts_lib_index_js-878844713bc9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_delegated-events_dist_inde-c537341-ed60a312d370.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/app_assets_modules_github_ref-selector_ts-3f80db3eb077.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/codespaces-69ac03a77366.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_filter-input-element_dist_index_js-node_modules_github_mini-throt-08ab15-5c0a626f08d8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_file-attachment-element_dist_index_js-node_modules_github_mini-th-55cf52-722965edbad0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/repositories-627b85e16d0f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_delegated-events_dist_inde-0e9dbe-2a3d291c8bfe.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/topic-suggestions-45fe49071a12.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/code-menu-9ea38b1fd5ad.js.download"></script>
  

  <title>Tharakeswar9515/software-engineering-192211770</title>



  <meta name="route-pattern" content="/:user_id/:repository">

    
  <meta name="current-catalog-service-hash" content="82c569b93da5c18ed649ebd4c2c79437db4611a6a1373e805a3cb001c64130b7">


  <meta name="request-id" content="E036:34DEA:28B047:313320:6545E60A" data-turbo-transient="true"><meta name="html-safe-nonce" content="eb4d8dc150f9852ace008708ee19a5053baa522466a3ad2cf48d80b4fbf2e46b" data-turbo-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS8iLCJyZXF1ZXN0X2lkIjoiRTAzNjozNERFQToyOEIwNDc6MzEzMzIwOjY1NDVFNjBBIiwidmlzaXRvcl9pZCI6IjE3NTA0NjYxODQzNDU4Mzc3MDciLCJyZWdpb25fZWRnZSI6ImNlbnRyYWxpbmRpYSIsInJlZ2lvbl9yZW5kZXIiOiJpYWQifQ==" data-turbo-transient="true"><meta name="visitor-hmac" content="2126531ff2dc003de32ab3a25d0d32c17b21d6756a07ed643e02d23ccafe422f" data-turbo-transient="true">


    <meta name="hovercard-subject-tag" content="repository:713689438" data-turbo-transient="">


  <meta name="github-keyboard-shortcuts" content="repository" data-turbo-transient="true">
  

  <meta name="selected-link" value="repo_source" data-turbo-transient="">
  <link rel="assets" href="https://github.githubassets.com/">

    <meta name="google-site-verification" content="c1kuD-K2HIVF635lypcsWPoD4kilo5-jA_wBFyT4uMY">
  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">
  <meta name="google-site-verification" content="Apib7-x98H0j5cPqHWwSMm6dNU4GmODRoqxLiDzdx9I">

<meta name="octolytics-url" content="https://collector.github.com/github/collect"><meta name="octolytics-actor-id" content="122510255"><meta name="octolytics-actor-login" content="Tharakeswar9515"><meta name="octolytics-actor-hash" content="f52233e88b6f1e45a15cb3ece9b6336b39359f34a0bafcc1f13bd5487f0641a8">

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;" data-turbo-transient="true">

  




  

    <meta name="user-login" content="Tharakeswar9515">

  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

    <meta name="viewport" content="width=device-width">
    
      <meta name="description" content="Contribute to Tharakeswar9515/software-engineering-192211770 development by creating an account on GitHub.">
      <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <meta property="fb:app_id" content="1401488693436528">
    <meta name="apple-itunes-app" content="app-id=1477376905, app-argument=https://github.com/Tharakeswar9515/software-engineering-192211770">
      <meta name="twitter:image:src" content="https://opengraph.githubassets.com/1dfbb4f5647a2796fca9809563d31472a0ca5008750eecd3d42ce6331d464636/Tharakeswar9515/software-engineering-192211770"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary_large_image"><meta name="twitter:title" content="Tharakeswar9515/software-engineering-192211770"><meta name="twitter:description" content="Contribute to Tharakeswar9515/software-engineering-192211770 development by creating an account on GitHub.">
      <meta property="og:image" content="https://opengraph.githubassets.com/1dfbb4f5647a2796fca9809563d31472a0ca5008750eecd3d42ce6331d464636/Tharakeswar9515/software-engineering-192211770"><meta property="og:image:alt" content="Contribute to Tharakeswar9515/software-engineering-192211770 development by creating an account on GitHub."><meta property="og:image:width" content="1200"><meta property="og:image:height" content="600"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="Tharakeswar9515/software-engineering-192211770"><meta property="og:url" content="https://github.com/Tharakeswar9515/software-engineering-192211770"><meta property="og:description" content="Contribute to Tharakeswar9515/software-engineering-192211770 development by creating an account on GitHub.">
      

      <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/122510255/ws?session=eyJ2IjoiVjMiLCJ1IjoxMjI1MTAyNTUsInMiOjEyMzkwMjE1MDgsImMiOjEzNTY1MDM2NTQsInQiOjE2OTkwNzk2OTB9--2072391f5e788ed17eefaec9086e65ae006f2c0408deb023cc8419d465b5cd2b" data-refresh-url="/_alive" data-session-id="37eb418c2505dee59121eaadd1232b835a63d87d65676f1bd36e6b449caea54f">
      <link rel="shared-web-socket-src" href="https://github.com/assets-cdn/worker/socket-worker-9cc1149b224c.js">


        <meta name="hostname" content="github.com">


      <meta name="keyboard-shortcuts-preference" content="all">

        <meta name="expected-hostname" content="github.com">


  <meta http-equiv="x-pjax-version" content="66f3f271d7c6ff9125f4478e57132a0e7548b56b33b3cb569c625518a86ece4f" data-turbo-track="reload">
  <meta http-equiv="x-pjax-csp-version" content="844211eb90296c990bf8ba3a110ab9d26a666217a44ebe51523691fb4a4bf6cd" data-turbo-track="reload">
  <meta http-equiv="x-pjax-css-version" content="d5f77973e7859cb2b7f07c315f43b0dd4221dc13f655123b96aa973b1761e760" data-turbo-track="reload">
  <meta http-equiv="x-pjax-js-version" content="7990f0840dbd972b4faaaafee8b711be17d4982c64cd688c1ac9d89cac641929" data-turbo-track="reload">

  <meta name="turbo-cache-control" content="no-preview" data-turbo-transient="">

      <meta data-hydrostats="publish">

  <meta name="go-import" content="github.com/Tharakeswar9515/software-engineering-192211770 git https://github.com/Tharakeswar9515/software-engineering-192211770.git">

  <meta name="octolytics-dimension-user_id" content="122510255"><meta name="octolytics-dimension-user_login" content="Tharakeswar9515"><meta name="octolytics-dimension-repository_id" content="713689438"><meta name="octolytics-dimension-repository_nwo" content="Tharakeswar9515/software-engineering-192211770"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="713689438"><meta name="octolytics-dimension-repository_network_root_nwo" content="Tharakeswar9515/software-engineering-192211770">



    <link rel="canonical" href="https://github.com/Tharakeswar9515/software-engineering-192211770" data-turbo-transient="">
  <meta name="turbo-body-classes" content="logged-in env-production page-responsive">


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <meta name="browser-optimizely-client-errors-url" content="https://api.github.com/_private/browser/optimizely_client/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/assets/pinned-octocat-093da3e6fa40.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon.svg">

<meta name="theme-color" content="#1e2327">
<meta name="color-scheme" content="light dark">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  </head>

  <body class="logged-in env-production page-responsive" style="word-wrap: break-word;">
    <div data-turbo-body="" class="logged-in env-production page-responsive" style="word-wrap: break-word;">
      


    <div class="position-relative js-header-wrapper ">
      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770#start-of-content" class="p-3 color-bg-accent-emphasis color-fg-on-emphasis show-on-focus js-skip-to-content">Skip to content</a>
      <span data-view-component="true" class="progress-pjax-loader Progress position-fixed width-full">
    <span style="width: 0%;" data-view-component="true" class="Progress-item progress-pjax-loader-bar left-0 top-0 color-bg-accent-emphasis"></span>
</span>      
      


      

        
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/vendors-node_modules_github_clipboard-copy-element_dist_index_esm_js-node_modules_delegated-e-b37f7d-0e1d32d8fafa.js.download"></script>

<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./22_files/command-palette-9a87d4661fe9.js.download"></script>

            <header class="AppHeader">
    

    <div class="AppHeader-globalBar pb-2 js-global-bar">
      <div class="AppHeader-globalBar-start">
          <deferred-side-panel data-url="/_side-panels/global" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
      
  <button aria-label="Open global navigation menu" data-action="click:deferred-side-panel#loadPanel click:deferred-side-panel#panelOpened" data-show-dialog-id="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8" id="dialog-show-dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-bg-transparent p-0 color-fg-muted">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-three-bars Button-visual">
    <path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75Zm0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75ZM1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5Z"></path>
</svg>
</button>  

<div class="Overlay--hidden Overlay-backdrop--side Overlay-backdrop--placement-left" data-modal-dialog-overlay="">
  <modal-dialog data-target="deferred-side-panel.panel" role="dialog" id="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8" aria-modal="true" aria-disabled="true" aria-labelledby="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8-title" aria-describedby="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-small-portrait Overlay--motion-scaleFade SidePanel">
    <div styles="flex-direction: row;" data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title sr-only" id="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8-title">
        Global navigation
      </h1>
            <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="AppHeader-logo position-relative">
        <svg aria-hidden="true" height="24" viewBox="0 0 16 16" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M8 0c4.42 0 8 3.58 8 8a8.013 8.013 0 0 1-5.45 7.59c-.4.08-.55-.17-.55-.38 0-.27.01-1.13.01-2.2 0-.75-.25-1.23-.54-1.48 1.78-.2 3.65-.88 3.65-3.95 0-.88-.31-1.59-.82-2.15.08-.2.36-1.02-.08-2.12 0 0-.67-.22-2.2.82-.64-.18-1.32-.27-2-.27-.68 0-1.36.09-2 .27-1.53-1.03-2.2-.82-2.2-.82-.44 1.1-.16 1.92-.08 2.12-.51.56-.82 1.28-.82 2.15 0 3.06 1.86 3.75 3.64 3.95-.23.2-.44.55-.51 1.07-.46.21-1.61.55-2.33-.66-.15-.24-.6-.83-1.23-.82-.67.01-.27.38.01.53.34.19.73.9.82 1.13.16.45.68 1.31 2.69.94 0 .67.01 1.3.01 1.49 0 .21-.15.45-.55.38A7.995 7.995 0 0 1 0 8c0-4.42 3.58-8 8-8Z"></path>
</svg>
</div></div>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="dialog-594d784a-c9eb-4bb2-9da5-13c429e350c8" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
</div>
      <div data-view-component="true" class="Overlay-body d-flex flex-column px-2">    <div data-view-component="true" class="d-flex flex-column mb-3">
        <nav aria-label="Site navigation" data-view-component="true" class="ActionList">
  
  <nav-list data-catalyst="">
    <ul data-view-component="true" class="ActionListWrap">
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-hotkey="g d" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;HOME&quot;,&quot;label&quot;:null}" id="item-92182e86-2f97-480a-a259-abf40707d9a2" href="https://github.com/dashboard" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-home">
    <path d="M6.906.664a1.749 1.749 0 0 1 2.187 0l5.25 4.2c.415.332.657.835.657 1.367v7.019A1.75 1.75 0 0 1 13.25 15h-3.5a.75.75 0 0 1-.75-.75V9H7v5.25a.75.75 0 0 1-.75.75h-3.5A1.75 1.75 0 0 1 1 13.25V6.23c0-.531.242-1.034.657-1.366l5.25-4.2Zm1.25 1.171a.25.25 0 0 0-.312 0l-5.25 4.2a.25.25 0 0 0-.094.196v7.019c0 .138.112.25.25.25H5.5V8.25a.75.75 0 0 1 .75-.75h3.5a.75.75 0 0 1 .75.75v5.25h2.75a.25.25 0 0 0 .25-.25V6.23a.25.25 0 0 0-.094-.195Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Home
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES&quot;,&quot;label&quot;:null}" id="item-c2390728-1e12-48f8-a15f-34cc9af000a4" href="https://github.com/issues" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS&quot;,&quot;label&quot;:null}" id="item-1ef63b88-a5c8-45b4-9208-5f2714d8317e" href="https://github.com/pulls" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;DISCUSSIONS&quot;,&quot;label&quot;:null}" id="item-a8e10791-8981-40db-96e8-b95022831d21" href="https://github.com/discussions" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-comment-discussion">
    <path d="M1.75 1h8.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 10.25 10H7.061l-2.574 2.573A1.458 1.458 0 0 1 2 11.543V10h-.25A1.75 1.75 0 0 1 0 8.25v-5.5C0 1.784.784 1 1.75 1ZM1.5 2.75v5.5c0 .138.112.25.25.25h1a.75.75 0 0 1 .75.75v2.19l2.72-2.72a.749.749 0 0 1 .53-.22h3.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25Zm13 2a.25.25 0 0 0-.25-.25h-.5a.75.75 0 0 1 0-1.5h.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 14.25 12H14v1.543a1.458 1.458 0 0 1-2.487 1.03L9.22 12.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.22 2.22v-2.19a.75.75 0 0 1 .75-.75h1a.25.25 0 0 0 .25-.25Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Discussions
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;CODESPACES&quot;,&quot;label&quot;:null}" id="item-ae14647b-07de-40a3-b176-df19aec39203" href="https://github.com/codespaces" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-codespaces">
    <path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Codespaces
</span></a>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;EXPLORE&quot;,&quot;label&quot;:null}" id="item-1921df82-6216-49f4-922a-d66c30f50801" href="https://github.com/explore" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-telescope">
    <path d="M14.184 1.143v-.001l1.422 2.464a1.75 1.75 0 0 1-.757 2.451L3.104 11.713a1.75 1.75 0 0 1-2.275-.702l-.447-.775a1.75 1.75 0 0 1 .53-2.32L11.682.573a1.748 1.748 0 0 1 2.502.57Zm-4.709 9.32h-.001l2.644 3.863a.75.75 0 1 1-1.238.848l-1.881-2.75v2.826a.75.75 0 0 1-1.5 0v-2.826l-1.881 2.75a.75.75 0 1 1-1.238-.848l2.049-2.992a.746.746 0 0 1 .293-.253l1.809-.87a.749.749 0 0 1 .944.252ZM9.436 3.92h-.001l-4.97 3.39.942 1.63 5.42-2.61Zm3.091-2.108h.001l-1.85 1.26 1.505 2.605 2.016-.97a.247.247 0 0 0 .13-.151.247.247 0 0 0-.022-.199l-1.422-2.464a.253.253 0 0 0-.161-.119.254.254 0 0 0-.197.038ZM1.756 9.157a.25.25 0 0 0-.075.33l.447.775a.25.25 0 0 0 .325.1l1.598-.769-.83-1.436-1.465 1Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Explore
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;MARKETPLACE&quot;,&quot;label&quot;:null}" id="item-beef56d9-416b-478d-b655-71dae174b6b4" href="https://github.com/marketplace" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gift">
    <path d="M2 2.75A2.75 2.75 0 0 1 4.75 0c.983 0 1.873.42 2.57 1.232.268.318.497.668.68 1.042.183-.375.411-.725.68-1.044C9.376.42 10.266 0 11.25 0a2.75 2.75 0 0 1 2.45 4h.55c.966 0 1.75.784 1.75 1.75v2c0 .698-.409 1.301-1 1.582v4.918A1.75 1.75 0 0 1 13.25 16H2.75A1.75 1.75 0 0 1 1 14.25V9.332C.409 9.05 0 8.448 0 7.75v-2C0 4.784.784 4 1.75 4h.55c-.192-.375-.3-.8-.3-1.25ZM7.25 9.5H2.5v4.75c0 .138.112.25.25.25h4.5Zm1.5 0v5h4.5a.25.25 0 0 0 .25-.25V9.5Zm0-4V8h5.5a.25.25 0 0 0 .25-.25v-2a.25.25 0 0 0-.25-.25Zm-7 0a.25.25 0 0 0-.25.25v2c0 .138.112.25.25.25h5.5V5.5h-5.5Zm3-4a1.25 1.25 0 0 0 0 2.5h2.309c-.233-.818-.542-1.401-.878-1.793-.43-.502-.915-.707-1.431-.707ZM8.941 4h2.309a1.25 1.25 0 0 0 0-2.5c-.516 0-1 .205-1.43.707-.337.392-.646.975-.879 1.793Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Marketplace
</span></a>
  
  
</li>

</ul>  </nav-list>
</nav>

        <div data-view-component="true" class="my-3 d-flex flex-justify-center height-full">
          <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</div>
</div>
      <div data-view-component="true" class="flex-1"></div>


      <div data-view-component="true" class="px-2">      <p class="color-fg-subtle text-small text-light">© 2023 GitHub, Inc.</p>

      <div data-view-component="true" class="d-flex text-small text-light">
          <a target="_blank" href="https://github.com/about" data-view-component="true" class="Link mr-2">About</a>
          <a target="_blank" href="https://github.blog/" data-view-component="true" class="Link mr-2">Blog</a>
          <a target="_blank" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link mr-2">Terms</a>
          <a target="_blank" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link mr-2">Privacy</a>
          <a target="_blank" href="https://github.com/security" data-view-component="true" class="Link mr-2">Security</a>
        <a target="_blank" href="https://www.githubstatus.com/" data-view-component="true" class="Link mr-3">Status</a>
</div></div>
</div>
      
</modal-dialog></div>

  </include-fragment>
</deferred-side-panel>

        <a class="AppHeader-logo ml-2" href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-turbo="false" data-analytics-event="{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;}">
          <svg height="32" aria-hidden="true" viewBox="0 0 16 16" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle color-fg-default">
    <path d="M8 0c4.42 0 8 3.58 8 8a8.013 8.013 0 0 1-5.45 7.59c-.4.08-.55-.17-.55-.38 0-.27.01-1.13.01-2.2 0-.75-.25-1.23-.54-1.48 1.78-.2 3.65-.88 3.65-3.95 0-.88-.31-1.59-.82-2.15.08-.2.36-1.02-.08-2.12 0 0-.67-.22-2.2.82-.64-.18-1.32-.27-2-.27-.68 0-1.36.09-2 .27-1.53-1.03-2.2-.82-2.2-.82-.44 1.1-.16 1.92-.08 2.12-.51.56-.82 1.28-.82 2.15 0 3.06 1.86 3.75 3.64 3.95-.23.2-.44.55-.51 1.07-.46.21-1.61.55-2.33-.66-.15-.24-.6-.83-1.23-.82-.67.01-.27.38.01.53.34.19.73.9.82 1.13.16.45.68 1.31 2.69.94 0 .67.01 1.3.01 1.49 0 .21-.15.45-.55.38A7.995 7.995 0 0 1 0 8c0-4.42 3.58-8 8-8Z"></path>
</svg>
        </a>

          <div class="AppHeader-context">
  <div class="AppHeader-context-compact">
        <button aria-expanded="false" aria-haspopup="dialog" aria-label="Page context: Tharakeswar9515 / software-engineering-192211770" id="dialog-show-context-region-dialog" data-show-dialog-id="context-region-dialog" type="button" data-view-component="true" class="AppHeader-context-compact-trigger Truncate Button--secondary Button--medium Button box-shadow-none">    <span class="Button-content">
      <span class="Button-label"><span class="AppHeader-context-compact-lead">
                <span class="AppHeader-context-compact-parentItem">Tharakeswar9515</span>
                <span class="no-wrap">&nbsp;/</span>

            </span>

            <strong class="AppHeader-context-compact-mainItem d-flex flex-items-center Truncate">
  <span class="Truncate-text ">software-engineering-192211770</span>

</strong></span>
    </span>
</button>  

<div class="Overlay--hidden Overlay-backdrop--center" data-modal-dialog-overlay="">
  <modal-dialog role="dialog" id="context-region-dialog" aria-modal="true" aria-disabled="true" aria-labelledby="context-region-dialog-title" aria-describedby="context-region-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="context-region-dialog-title">
        Navigate back to
      </h1>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="context-region-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
</div>
      <div data-view-component="true" class="Overlay-body">          <ul role="list" class="list-style-none">
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;Tharakeswar9515&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/Tharakeswar9515" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-person mr-1">
    <path d="M10.561 8.073a6.005 6.005 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6.004 6.004 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0ZM10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0Z"></path>
</svg>

          Tharakeswar9515
        </span>

</a>
    </li>
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;software-engineering-192211770&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/Tharakeswar9515/software-engineering-192211770" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-repo mr-1">
    <path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.495 2.495 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.486 2.486 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.249.249 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"></path>
</svg>

          software-engineering-192211770
        </span>

</a>
    </li>
</ul>

</div>
      
</modal-dialog></div>
  </div>

  <div class="AppHeader-context-full">
    <nav role="navigation" aria-label="Page context">
      <ul role="list" class="list-style-none">
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;Tharakeswar9515&quot;,&quot;screen_size&quot;:&quot;full&quot;}" data-hovercard-type="user" data-hovercard-url="/users/Tharakeswar9515/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/Tharakeswar9515" data-view-component="true" class="AppHeader-context-item">
        <span class="AppHeader-context-item-label  ">

          Tharakeswar9515
        </span>

</a>
        <span class="AppHeader-context-item-separator">/</span>
    </li>
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;software-engineering-192211770&quot;,&quot;screen_size&quot;:&quot;full&quot;}" href="https://github.com/Tharakeswar9515/software-engineering-192211770" data-view-component="true" class="AppHeader-context-item">
        <span class="AppHeader-context-item-label  ">

          software-engineering-192211770
        </span>

</a>
    </li>
</ul>

    </nav>
  </div>
</div>

      </div>
      <div class="AppHeader-globalBar-end">
          <div class="AppHeader-search">
              


<qbsearch-input class="search-input" data-scope="repo:Tharakeswar9515/software-engineering-192211770" data-custom-scopes-path="/search/custom_scopes" data-delete-custom-scopes-csrf="a83_O7JDceP5BNwdLrxfVgqttipKEfvQ2-ik-oiTpim3fFXFHvvw0XiHp53enBdIMG_i7vTqNV8o7ovu0ZjRIw" data-max-custom-scopes="10" data-header-redesign-enabled="true" data-initial-value="" data-blackbird-suggestions-path="/search/suggestions" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" data-current-repository="Tharakeswar9515/software-engineering-192211770" data-current-org="" data-current-owner="Tharakeswar9515" data-logged-in="true" data-catalyst="">
  <div class="search-input-container search-with-dialog position-relative d-flex flex-row flex-items-center height-auto color-bg-transparent border-0 color-fg-subtle mx-0" data-action="click:qbsearch-input#searchInputContainerClicked">
      
            <button type="button" data-action="click:qbsearch-input#handleExpand" class="AppHeader-button AppHeader-search-whenNarrow" aria-label="Search or jump to…" aria-expanded="false" aria-haspopup="dialog">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </button>


<div class="AppHeader-search-whenRegular">
  <div class="AppHeader-search-wrap AppHeader-search-wrap--hasTrailing">
    <div class="AppHeader-search-control">
      <label for="AppHeader-searchInput" aria-label="Search or jump to…" class="AppHeader-search-visual--leading">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
      </label>

                <button type="button" data-target="qbsearch-input.inputButton" data-action="click:qbsearch-input#handleExpand" class="AppHeader-searchButton form-control input-contrast text-left color-fg-subtle no-wrap placeholder" data-hotkey="s,/" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;SEARCH&quot;,&quot;label&quot;:null}">
            <div class="overflow-hidden">
              <span id="qb-input-query" data-target="qbsearch-input.inputButtonText">
                  Type <kbd class="AppHeader-search-kbd">/</kbd> to search
              </span>
            </div>
          </button>

    </div>


      <button type="button" id="AppHeader-commandPalette-button" class="AppHeader-search-action--trailing js-activate-command-palette" data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;command_palette&quot;,&quot;label&quot;:&quot;open command palette&quot;}" aria-labelledby="tooltip-c9e02c2b-0b8f-4dd8-8ecd-646e9d035060">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-command-palette">
    <path d="m6.354 8.04-4.773 4.773a.75.75 0 1 0 1.061 1.06L7.945 8.57a.75.75 0 0 0 0-1.06L2.642 2.206a.75.75 0 0 0-1.06 1.061L6.353 8.04ZM8.75 11.5a.75.75 0 0 0 0 1.5h5.5a.75.75 0 0 0 0-1.5h-5.5Z"></path>
</svg>
      </button>

      <tool-tip id="tooltip-c9e02c2b-0b8f-4dd8-8ecd-646e9d035060" for="AppHeader-commandPalette-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Command palette</tool-tip>
  </div>
</div>

    <input type="hidden" name="type" class="js-site-search-type-field">

    
<div class="Overlay--hidden " data-modal-dialog-overlay="">
  <modal-dialog data-action="close:qbsearch-input#handleClose cancel:qbsearch-input#handleClose" data-target="qbsearch-input.searchSuggestionsDialog" role="dialog" id="search-suggestions-dialog" aria-modal="true" aria-labelledby="search-suggestions-dialog-header" data-view-component="true" class="Overlay Overlay--width-medium Overlay--height-auto">
      <h1 id="search-suggestions-dialog-header" class="sr-only">Search code, repositories, users, issues, pull requests...</h1>
    <div class="Overlay-body Overlay-body--paddingNone">
      
          <div data-view-component="true">        <div class="search-suggestions position-absolute width-full color-shadow-large border color-fg-default color-bg-default overflow-hidden d-flex flex-column query-builder-container" style="border-radius: 12px;" data-target="qbsearch-input.queryBuilderContainer" hidden="">
          <!-- '"` --><!-- </textarea></xmp> --><form id="query-builder-test-form" action="https://github.com/Tharakeswar9515/software-engineering-192211770" accept-charset="UTF-8" method="get">
  <query-builder data-target="qbsearch-input.queryBuilder" id="query-builder-query-builder-test" data-filter-key=":" data-view-component="true" class="QueryBuilder search-query-builder" data-catalyst="">
    <div class="FormControl FormControl--fullWidth">
      <label id="query-builder-test-label" for="query-builder-test" class="FormControl-label sr-only">
        Search
      </label>
      <div class="QueryBuilder-StyledInput width-fit " data-target="query-builder.styledInput">
          <span id="query-builder-test-leadingvisual-wrap" class="FormControl-input-leadingVisualWrap QueryBuilder-leadingVisualWrap">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search FormControl-input-leadingVisual">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </span>
        <div data-target="query-builder.styledInputContainer" class="QueryBuilder-StyledInputContainer">
          <div aria-hidden="true" class="QueryBuilder-StyledInputContent" data-target="query-builder.styledInputContent"></div>
          <div class="QueryBuilder-InputWrapper">
            <div aria-hidden="true" class="QueryBuilder-Sizer" data-target="query-builder.sizer"><span></span></div>
            <input id="query-builder-test" name="query-builder-test" value="" autocomplete="off" type="text" role="combobox" spellcheck="false" aria-expanded="false" aria-describedby="validation-fce2974c-13f3-4cd3-9598-e9380ff43115" data-target="query-builder.input" data-action="
          input:query-builder#inputChange
          blur:query-builder#inputBlur
          keydown:query-builder#inputKeydown
          focus:query-builder#inputFocus
        " data-view-component="true" class="FormControl-input QueryBuilder-Input FormControl-medium" aria-controls="query-builder-test-results" aria-autocomplete="list" aria-haspopup="listbox">
          </div>
        </div>
          <span class="sr-only" id="query-builder-test-clear">Clear</span>
          
  <button role="button" id="query-builder-test-clear-button" aria-labelledby="query-builder-test-clear query-builder-test-label" data-target="query-builder.clearButton" data-action="
                click:query-builder#clear
                focus:query-builder#clearButtonFocus
                blur:query-builder#clearButtonBlur
              " variant="small" hidden="" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium mr-1 px-2 py-0 d-flex flex-items-center rounded-1 color-fg-muted">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x-circle-fill Button-visual">
    <path d="M2.343 13.657A8 8 0 1 1 13.658 2.343 8 8 0 0 1 2.343 13.657ZM6.03 4.97a.751.751 0 0 0-1.042.018.751.751 0 0 0-.018 1.042L6.94 8 4.97 9.97a.749.749 0 0 0 .326 1.275.749.749 0 0 0 .734-.215L8 9.06l1.97 1.97a.749.749 0 0 0 1.275-.326.749.749 0 0 0-.215-.734L9.06 8l1.97-1.97a.749.749 0 0 0-.326-1.275.749.749 0 0 0-.734.215L8 6.94Z"></path>
</svg>
</button>  

      </div>
      <template id="search-icon"></template>

<template id="code-icon"></template>

<template id="file-code-icon"></template>

<template id="history-icon"></template>

<template id="repo-icon"></template>

<template id="bookmark-icon"></template>

<template id="plus-circle-icon"></template>

<template id="circle-icon"></template>

<template id="trash-icon"></template>

<template id="team-icon"></template>

<template id="project-icon"></template>

<template id="pencil-icon"></template>

        <div class="position-relative">
                <ul role="listbox" class="ActionListWrap QueryBuilder-ListWrap" aria-label="Suggestions" data-action="
                    combobox-commit:query-builder#comboboxCommit
                    mousedown:query-builder#resultsMousedown
                  " data-target="query-builder.resultsList" data-persist-list="false" id="query-builder-test-results"></ul>
        </div>
      <div class="FormControl-inlineValidation" id="validation-fce2974c-13f3-4cd3-9598-e9380ff43115" hidden="hidden">
        <span class="FormControl-inlineValidation--visual">
          <svg aria-hidden="true" height="12" viewBox="0 0 12 12" version="1.1" width="12" data-view-component="true" class="octicon octicon-alert-fill">
    <path d="M4.855.708c.5-.896 1.79-.896 2.29 0l4.675 8.351a1.312 1.312 0 0 1-1.146 1.954H1.33A1.313 1.313 0 0 1 .183 9.058ZM7 7V3H5v4Zm-1 3a1 1 0 1 0 0-2 1 1 0 0 0 0 2Z"></path>
</svg>
        </span>
        <span></span>
</div>    </div>
    <div data-target="query-builder.screenReaderFeedback" aria-live="polite" aria-atomic="true" class="sr-only">0 suggestions.</div>
</query-builder></form>
          <div class="d-flex flex-row color-fg-muted px-3 text-small color-bg-default search-feedback-prompt">
            <a target="_blank" href="https://docs.github.com/en/search-github/github-code-search/understanding-github-code-search-syntax" data-view-component="true" class="Link color-fg-accent text-normal ml-2">
              Search syntax tips
</a>            <div class="d-flex flex-1"></div>
                <button data-action="click:qbsearch-input#showFeedbackDialog" type="button" data-view-component="true" class="Button--link Button--medium Button color-fg-accent text-normal ml-2">    <span class="Button-content">
      <span class="Button-label">Give feedback</span>
    </span>
</button>  
          </div>
        </div>
</div>

    </div>
</modal-dialog></div>
  </div>
  <div data-action="click:qbsearch-input#retract" class="dark-backdrop position-fixed" hidden="" data-target="qbsearch-input.darkBackdrop"></div>
  <div class="color-fg-default">
    
<div class="Overlay--hidden Overlay-backdrop--center" data-modal-dialog-overlay="">
  <modal-dialog data-target="qbsearch-input.feedbackDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" role="dialog" id="feedback-dialog" aria-modal="true" aria-disabled="true" aria-labelledby="feedback-dialog-title" aria-describedby="feedback-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="feedback-dialog-title">
        Provide feedback
      </h1>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="feedback-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
</div>
      <div data-view-component="true" class="Overlay-body">        <!-- '"` --><!-- </textarea></xmp> --><form id="code-search-feedback-form" data-turbo="false" action="https://github.com/search/feedback" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="hiu9RQMMAcHCj01sK5GSeA2KHkcCIwEqVy9IAaRX_rgJA9yoXIF2Isf2BVeC09vDg_7OPzgxcLw7v9O884pZyg">
          <p>We read every piece of feedback, and take your input very seriously.</p>
          <textarea name="feedback" class="form-control width-full mb-2" style="height: 120px" id="feedback"></textarea>
          <input name="include_email" id="include_email" aria-label="Include my email address so I can be contacted" class="form-control mr-2" type="checkbox">
          <label for="include_email" style="font-weight: normal">Include my email address so I can be contacted</label>
</form></div>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd">          <button data-close-dialog-id="feedback-dialog" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="code-search-feedback-form" data-action="click:qbsearch-input#submitFeedback" type="submit" data-view-component="true" class="btn-primary btn">    Submit feedback
</button>
</div>
</modal-dialog></div>

    <custom-scopes data-target="qbsearch-input.customScopesManager" data-catalyst="">
    
<div class="Overlay--hidden Overlay-backdrop--center" data-modal-dialog-overlay="">
  <modal-dialog data-target="custom-scopes.customScopesModalDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" role="dialog" id="custom-scopes-dialog" aria-modal="true" aria-disabled="true" aria-labelledby="custom-scopes-dialog-title" aria-describedby="custom-scopes-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header Overlay-header--divided">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="custom-scopes-dialog-title">
        Saved searches
      </h1>
        <h2 id="custom-scopes-dialog-description" class="Overlay-description">Use saved searches to filter your results more quickly</h2>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="custom-scopes-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
</div>
      <div data-view-component="true" class="Overlay-body">        <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

        <div hidden="" class="create-custom-scope-form" data-target="custom-scopes.createCustomScopeForm">
        <!-- '"` --><!-- </textarea></xmp> --><form id="custom-scopes-dialog-form" data-turbo="false" action="https://github.com/search/custom_scopes" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="NBL1CA4QZQjuYGW8kTm3Mr7XXgWFgWOYp0qFGuccFkE7BE_eHTUNSufmBSwK1oyGqumffsDxFQUL_W9FyhWcpw">
          <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

          <input type="hidden" id="custom_scope_id" name="custom_scope_id" data-target="custom-scopes.customScopesIdField">

          <div class="form-group">
            <label for="custom_scope_name">Name</label>
            <auto-check src="/search/custom_scopes/check_name" required="">
              <input type="text" name="custom_scope_name" id="custom_scope_name" data-target="custom-scopes.customScopesNameField" class="form-control" autocomplete="off" placeholder="github-ruby" required="" maxlength="50" spellcheck="false">
              <input type="hidden" value="SVdnq-QyZnboBELoGMVhHfJQZvrr7qwe47bDENVJF9mBjhj0IzZ23LN0uvtA6wMQRdFo2d-XiEKCXbvzbVz7HQ" data-csrf="true">
            </auto-check>
          </div>

          <div class="form-group">
            <label for="custom_scope_query">Query</label>
            <input type="text" name="custom_scope_query" id="custom_scope_query" data-target="custom-scopes.customScopesQueryField" class="form-control" autocomplete="off" placeholder="(repo:mona/a OR repo:mona/b) AND lang:python" required="" maxlength="500">
          </div>

          <p class="text-small color-fg-muted">
            To see all available qualifiers, see our <a class="Link--inTextBlock" href="https://docs.github.com/en/search-github/github-code-search/understanding-github-code-search-syntax">documentation</a>.
          </p>
</form>        </div>

        <div data-target="custom-scopes.manageCustomScopesForm">
          <div data-target="custom-scopes.list"></div>
        </div>

</div>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd Overlay-footer--divided">          <button data-action="click:custom-scopes#customScopesCancel" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="custom-scopes-dialog-form" data-action="click:custom-scopes#customScopesSubmit" data-target="custom-scopes.customScopesSubmitButton" type="submit" data-view-component="true" class="btn-primary btn">    Create saved search
</button>
</div>
</modal-dialog></div>
    </custom-scopes>
  </div>
</qbsearch-input><input type="hidden" value="m1OM_48p6-ispPVL4CR-AcRGJfhCnxH_FljpcQnatZwkfgOqWMfw2qPFH7mVIbOqMJhS3mXuXO_lc1jbe76Gbg" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">

          </div>

        <div class="AppHeader-actions position-relative">
          <action-menu data-select-variant="none" data-view-component="true" data-catalyst="">
  <focus-group direction="vertical" mnemonics="" retain="">
    <div data-view-component="true" class="Button-withTooltip">  <button id="global-create-menu-button" popovertarget="global-create-menu-overlay" aria-label="Create something new" aria-controls="global-create-menu-list" aria-haspopup="true" type="button" data-view-component="true" class="AppHeader-button Button--secondary Button--small Button width-auto color-fg-muted" aria-describedby="tooltip-99cfa5b2-b32a-49e6-ac1b-a5c27cfe9ffa">    <span class="Button-content">
        <span class="Button-visual Button-leadingVisual">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-plus">
    <path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path>
</svg>
        </span>
      <span class="Button-label"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg></span>
    </span>
</button>  <tool-tip id="tooltip-99cfa5b2-b32a-49e6-ac1b-a5c27cfe9ffa" for="global-create-menu-button" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Create new...</tool-tip>
</div>

<anchored-position id="global-create-menu-overlay" anchor="global-create-menu-button" align="end" side="outside-bottom" anchor-offset="normal" popover="auto" data-view-component="true" style="inset: 36px auto auto 71px;">
  <div data-view-component="true" class="Overlay Overlay--size-auto">
    
      
        <div data-view-component="true">
  <ul aria-labelledby="global-create-menu-button" id="global-create-menu-list" role="menu" data-view-component="true" class="ActionListWrap--inset ActionListWrap">
      <li data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;add_dropdown&quot;,&quot;label&quot;:&quot;new repository&quot;}" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    <a href="https://github.com/new" tabindex="-1" id="item-983519b3-ee4d-4b50-b32d-6f7879b9fabe" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo">
    <path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.495 2.495 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.486 2.486 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.249.249 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
              New repository

</span></a>
  
  
</li>
      <li data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;add_dropdown&quot;,&quot;label&quot;:&quot;import repository&quot;}" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    <a href="https://github.com/new/import" tabindex="-1" id="item-9319ae63-c0a5-4136-9895-47fc71580568" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-push">
    <path d="M1 2.5A2.5 2.5 0 0 1 3.5 0h8.75a.75.75 0 0 1 .75.75v3.5a.75.75 0 0 1-1.5 0V1.5h-8a1 1 0 0 0-1 1v6.708A2.493 2.493 0 0 1 3.5 9h3.25a.75.75 0 0 1 0 1.5H3.5a1 1 0 0 0 0 2h5.75a.75.75 0 0 1 0 1.5H3.5A2.5 2.5 0 0 1 1 11.5Zm13.23 7.79h-.001l-1.224-1.224v6.184a.75.75 0 0 1-1.5 0V9.066L10.28 10.29a.75.75 0 0 1-1.06-1.061l2.505-2.504a.75.75 0 0 1 1.06 0L15.29 9.23a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
                Import repository

</span></a>
  
  
</li>
      <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
      <li data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;add_dropdown&quot;,&quot;label&quot;:&quot;new codespace&quot;}" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    <a href="https://github.com/codespaces/new" tabindex="-1" id="item-9588a568-0472-4f32-b102-d9f724e99ce5" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-codespaces">
    <path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
                New codespace

</span></a>
  
  
</li>
      <li data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;add_dropdown&quot;,&quot;label&quot;:&quot;new gist&quot;}" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    <a href="https://gist.github.com/" tabindex="-1" id="item-7ba92560-9c7e-4e2f-a15f-3f08aff60cc0" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
                New gist

</span></a>
  
  
</li>
      <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
      <li data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    <a href="https://github.com/account/organizations/new" tabindex="-1" data-dont-follow-via-test="true" data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;add_dropdown&quot;,&quot;label&quot;:&quot;new organization&quot;}" id="item-93ec6229-f965-4dfc-bfbf-70678e7587a7" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-organization">
    <path d="M1.75 16A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0h8.5C11.216 0 12 .784 12 1.75v12.5c0 .085-.006.168-.018.25h2.268a.25.25 0 0 0 .25-.25V8.285a.25.25 0 0 0-.111-.208l-1.055-.703a.749.749 0 1 1 .832-1.248l1.055.703c.487.325.779.871.779 1.456v5.965A1.75 1.75 0 0 1 14.25 16h-3.5a.766.766 0 0 1-.197-.026c-.099.017-.2.026-.303.026h-3a.75.75 0 0 1-.75-.75V14h-1v1.25a.75.75 0 0 1-.75.75Zm-.25-1.75c0 .138.112.25.25.25H4v-1.25a.75.75 0 0 1 .75-.75h2.5a.75.75 0 0 1 .75.75v1.25h2.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25ZM3.75 6h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5ZM3 3.75A.75.75 0 0 1 3.75 3h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 3 3.75Zm4 3A.75.75 0 0 1 7.75 6h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 7 6.75ZM7.75 3h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5ZM3 9.75A.75.75 0 0 1 3.75 9h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 3 9.75ZM7.75 9h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
                New organization

</span></a>
  
  
</li>
</ul>  
</div>

</div></anchored-position>  </focus-group>
</action-menu>

          <div data-view-component="true" class="Button-withTooltip">
  <a href="https://github.com/issues" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-6fd26af0-c3e3-4181-ab45-aa3b5c4718af" aria-labelledby="tooltip-65c4676a-f424-4fd2-8fea-8767cad93f93" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened Button-visual">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
</a>  <tool-tip id="tooltip-65c4676a-f424-4fd2-8fea-8767cad93f93" for="icon-button-6fd26af0-c3e3-4181-ab45-aa3b5c4718af" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Issues</tool-tip>
</div>
          <div data-view-component="true" class="Button-withTooltip">
  <a href="https://github.com/pulls" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-68ac4127-5814-4f14-b1ab-70eb6c162461" aria-labelledby="tooltip-b3c57e47-7aa2-43a5-a6ab-9e653f2bbfb1" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request Button-visual">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
</a>  <tool-tip id="tooltip-b3c57e47-7aa2-43a5-a6ab-9e653f2bbfb1" for="icon-button-68ac4127-5814-4f14-b1ab-70eb6c162461" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Pull requests</tool-tip>
</div>

        </div>

        

<notification-indicator data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTIyNTEwMjU1IiwidCI6MTY5OTA3OTY5MX0=--d4fb2af2d7a24f8655d8fc4a56d9f774784dffd033e5f571845e1da23fbc498d" data-indicator-mode="none" data-tooltip-global="You have unread notifications" data-tooltip-unavailable="Notifications are unavailable at the moment." data-tooltip-none="You have no unread notifications" data-header-redesign-enabled="true" data-fetch-indicator-src="/notifications/indicator" data-fetch-indicator-enabled="true" data-view-component="true" class="js-socket-channel" data-fetch-retry-delay-time="500" data-catalyst="">
  <a id="AppHeader-notifications-button" href="https://github.com/notifications" class="AppHeader-button Button--secondary" style="width:32px;height:32px;" data-hotkey="g n" data-target="notification-indicator.link" aria-label="Notifications" data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;notifications&quot;,&quot;label&quot;:&quot;icon:read&quot;}" aria-describedby="tooltip-699e21d0-3ef0-4915-8c29-aafc97ac0aa5">

    <span data-target="notification-indicator.badge" class="mail-status unread d-none" hidden="">
    </span>

      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-inbox color-fg-muted mr-0">
    <path d="M2.8 2.06A1.75 1.75 0 0 1 4.41 1h7.18c.7 0 1.333.417 1.61 1.06l2.74 6.395c.04.093.06.194.06.295v4.5A1.75 1.75 0 0 1 14.25 15H1.75A1.75 1.75 0 0 1 0 13.25v-4.5c0-.101.02-.202.06-.295Zm1.61.44a.25.25 0 0 0-.23.152L1.887 8H4.75a.75.75 0 0 1 .6.3L6.625 10h2.75l1.275-1.7a.75.75 0 0 1 .6-.3h2.863L11.82 2.652a.25.25 0 0 0-.23-.152Zm10.09 7h-2.875l-1.275 1.7a.75.75 0 0 1-.6.3h-3.5a.75.75 0 0 1-.6-.3L4.375 9.5H1.5v3.75c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25Z"></path>
</svg>
  </a>

    <tool-tip data-target="notification-indicator.tooltip" id="tooltip-699e21d0-3ef0-4915-8c29-aafc97ac0aa5" for="AppHeader-notifications-button" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>You have no unread notifications</tool-tip>
</notification-indicator>

        

        <div class="AppHeader-user">
          <deferred-side-panel data-url="/_side-panels/user?memex_enabled=true&amp;repository=software-engineering-192211770&amp;user=Tharakeswar9515&amp;user_can_create_organizations=true&amp;user_id=122510255" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
      <user-drawer-side-panel data-catalyst="">
      <button aria-label="Open user account menu" data-action="click:deferred-side-panel#loadPanel click:deferred-side-panel#panelOpened" data-show-dialog-id="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9" id="dialog-show-dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9" type="button" data-view-component="true" class="AppHeader-logo Button--invisible Button--medium Button Button--invisible-noVisuals color-bg-transparent p-0">    <span class="Button-content">
      <span class="Button-label"><img src="./22_files/122510255" alt="" size="32" height="32" width="32" data-view-component="true" class="avatar circle"></span>
    </span>
</button>  

<div class="Overlay--hidden Overlay-backdrop--side Overlay-backdrop--placement-right" data-modal-dialog-overlay="">
  <modal-dialog data-target="deferred-side-panel.panel" role="dialog" id="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9" aria-modal="true" aria-disabled="true" aria-labelledby="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9-title" aria-describedby="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-small-portrait Overlay--motion-scaleFade SidePanel">
    <div styles="flex-direction: row;" data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title sr-only" id="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9-title">
        Account menu
      </h1>
            <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="AppHeader-logo position-relative">
        <img src="./22_files/122510255" alt="" size="32" height="32" width="32" data-view-component="true" class="avatar circle">
</div>        <div data-view-component="true" class="overflow-hidden d-flex width-full">        <div data-view-component="true" class="lh-condensed overflow-hidden d-flex flex-column flex-justify-center ml-2 f5 mr-auto width-full">
          <span data-view-component="true" class="Truncate text-bold">
    <span data-view-component="true" class="Truncate-text">
            Tharakeswar9515
</span>
</span>          <span data-view-component="true" class="Truncate color-fg-subtle">
    <span data-view-component="true" class="Truncate-text">
            Tharak
</span>
</span></div>
</div>
</div>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="dialog-a7c423d0-b6d4-401b-adc0-7c0042f3bab9" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
</div>
      <div data-view-component="true" class="Overlay-body d-flex flex-column px-2">    <div data-view-component="true" class="d-flex flex-column mb-3">
        <nav aria-label="User navigation" data-view-component="true" class="ActionList">
  
  <nav-list data-catalyst="">
    <ul data-view-component="true" class="ActionListWrap">
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-7ca89460-9f26-4ceb-8012-a1a216e97879" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PROFILE&quot;,&quot;label&quot;:null}" id="item-478567ac-e9dc-4eaf-bcdf-30bcc92b3d2c" href="https://github.com/Tharakeswar9515" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-person">
    <path d="M10.561 8.073a6.005 6.005 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6.004 6.004 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0ZM10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your profile
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-a23aba74-9a18-4632-9f79-a25f2a6fe4c1" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;YOUR_REPOSITORIES&quot;,&quot;label&quot;:null}" id="item-8e96c92c-4c28-44a9-8139-58f903cfd95e" href="https://github.com/Tharakeswar9515?tab=repositories" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo">
    <path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.495 2.495 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.486 2.486 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.249.249 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your repositories
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;YOUR_PROJECTS&quot;,&quot;label&quot;:null}" id="item-62716c1e-53e3-4819-be04-abfdc064e226" href="https://github.com/Tharakeswar9515?tab=projects" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project">
    <path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0ZM1.5 1.75v12.5c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H1.75a.25.25 0 0 0-.25.25ZM11.75 3a.75.75 0 0 1 .75.75v7.5a.75.75 0 0 1-1.5 0v-7.5a.75.75 0 0 1 .75-.75Zm-8.25.75a.75.75 0 0 1 1.5 0v5.5a.75.75 0 0 1-1.5 0ZM8 3a.75.75 0 0 1 .75.75v3.5a.75.75 0 0 1-1.5 0v-3.5A.75.75 0 0 1 8 3Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your projects
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-9a18c451-754c-4cb1-b4f4-7cf5a7831fb4" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;YOUR_STARS&quot;,&quot;label&quot;:null}" id="item-4eb16f5d-79da-4e13-9b90-32ea6495a15b" href="https://github.com/Tharakeswar9515?tab=stars" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your stars
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;SPONSORS&quot;,&quot;label&quot;:null}" id="item-57df09ea-4248-480c-b905-00e5f54c25f4" href="https://github.com/sponsors/accounts" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-heart">
    <path d="m8 14.25.345.666a.75.75 0 0 1-.69 0l-.008-.004-.018-.01a7.152 7.152 0 0 1-.31-.17 22.055 22.055 0 0 1-3.434-2.414C2.045 10.731 0 8.35 0 5.5 0 2.836 2.086 1 4.25 1 5.797 1 7.153 1.802 8 3.02 8.847 1.802 10.203 1 11.75 1 13.914 1 16 2.836 16 5.5c0 2.85-2.045 5.231-3.885 6.818a22.066 22.066 0 0 1-3.744 2.584l-.018.01-.006.003h-.002ZM4.25 2.5c-1.336 0-2.75 1.164-2.75 3 0 2.15 1.58 4.144 3.365 5.682A20.58 20.58 0 0 0 8 13.393a20.58 20.58 0 0 0 3.135-2.211C12.92 9.644 14.5 7.65 14.5 5.5c0-1.836-1.414-3-2.75-3-1.373 0-2.609.986-3.029 2.456a.749.749 0 0 1-1.442 0C6.859 3.486 5.623 2.5 4.25 2.5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your sponsors
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;YOUR_GISTS&quot;,&quot;label&quot;:null}" id="item-990e5ec3-61f4-4025-8661-a358e5e65e46" href="https://gist.github.com/mine" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code-square">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25Zm7.47 3.97a.75.75 0 0 1 1.06 0l2 2a.75.75 0 0 1 0 1.06l-2 2a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L10.69 8 9.22 6.53a.75.75 0 0 1 0-1.06ZM6.78 6.53 5.31 8l1.47 1.47a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215l-2-2a.75.75 0 0 1 0-1.06l2-2a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Your gists
</span></a>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-d0370b07-5bca-484b-9dc0-870dbdea592c" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-58a46f60-1781-4c60-93f3-7dc21300c2da" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <button id="item-d6f0e126-4584-45ac-a2a0-aff3404ea269" type="button" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <span data-view-component="true" class="d-flex flex-items-center">    <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          

  <span class="color-fg-muted">
    Loading...
  </span>

</span></button>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;SETTINGS&quot;,&quot;label&quot;:null}" id="item-88b1595d-56d9-46e2-86dd-59e232d916f9" href="https://github.com/settings/profile" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gear">
    <path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Settings
</span></a>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;DOCS&quot;,&quot;label&quot;:null}" id="item-232b556b-f0fe-4dc7-8ab5-8efc7835afa1" href="https://docs.github.com/" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-book">
    <path d="M0 1.75A.75.75 0 0 1 .75 1h4.253c1.227 0 2.317.59 3 1.501A3.743 3.743 0 0 1 11.006 1h4.245a.75.75 0 0 1 .75.75v10.5a.75.75 0 0 1-.75.75h-4.507a2.25 2.25 0 0 0-1.591.659l-.622.621a.75.75 0 0 1-1.06 0l-.622-.621A2.25 2.25 0 0 0 5.258 13H.75a.75.75 0 0 1-.75-.75Zm7.251 10.324.004-5.073-.002-2.253A2.25 2.25 0 0 0 5.003 2.5H1.5v9h3.757a3.75 3.75 0 0 1 1.994.574ZM8.755 4.75l-.004 7.322a3.752 3.752 0 0 1 1.992-.572H14.5v-9h-3.495a2.25 2.25 0 0 0-2.25 2.25Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          GitHub Docs
</span></a>
  
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;SUPPORT&quot;,&quot;label&quot;:null}" id="item-2799c2ad-7c25-4eef-b125-39f76df61993" href="https://support.github.com/" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-people">
    <path d="M2 5.5a3.5 3.5 0 1 1 5.898 2.549 5.508 5.508 0 0 1 3.034 4.084.75.75 0 1 1-1.482.235 4 4 0 0 0-7.9 0 .75.75 0 0 1-1.482-.236A5.507 5.507 0 0 1 3.102 8.05 3.493 3.493 0 0 1 2 5.5ZM11 4a3.001 3.001 0 0 1 2.22 5.018 5.01 5.01 0 0 1 2.56 3.012.749.749 0 0 1-.885.954.752.752 0 0 1-.549-.514 3.507 3.507 0 0 0-2.522-2.372.75.75 0 0 1-.574-.73v-.352a.75.75 0 0 1 .416-.672A1.5 1.5 0 0 0 11 5.5.75.75 0 0 1 11 4Zm-5.5-.5a2 2 0 1 0-.001 3.999A2 2 0 0 0 5.5 3.5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          GitHub Support
</span></a>
  
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;LOGOUT&quot;,&quot;label&quot;:null}" id="item-e109a724-ad56-4a2d-ba34-d5715da41d2c" href="https://github.com/logout" data-view-component="true" class="ActionListContent">
      
        <span data-view-component="true" class="ActionListItem-label">
          Sign out
</span></a>
  
  
</li>

</ul>  </nav-list>
</nav>


</div>
</div>
      
</modal-dialog></div>
  </user-drawer-side-panel>

  </include-fragment>
</deferred-side-panel>
          
        </div>

        <div class="position-absolute mt-2">
            
<site-header-logged-in-user-menu data-catalyst="">

</site-header-logged-in-user-menu>

        </div>
      </div>
    </div>


      <div class="AppHeader-localBar">
        <nav data-pjax="#js-repo-pjax-container" aria-label="Repository" data-view-component="true" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav">

  <ul data-view-component="true" class="UnderlineNav-body list-style-none">
      <li data-view-component="true" class="d-inline-flex">
  <a id="code-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770" data-tab-item="i0code-tab" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments repo_attestations /Tharakeswar9515/software-engineering-192211770" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g c" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Code&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" aria-current="page" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item selected">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        <span data-content="Code">Code</span>
          <span id="code-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="issues-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/issues" data-tab-item="i1issues-tab" data-selected-links="repo_issues repo_labels repo_milestones /Tharakeswar9515/software-engineering-192211770/issues" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Issues&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        <span data-content="Issues">Issues</span>
          <span id="issues-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="pull-requests-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/pulls" data-tab-item="i2pull-requests-tab" data-selected-links="repo_pulls checks /Tharakeswar9515/software-engineering-192211770/pulls" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Pull requests&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        <span data-content="Pull requests">Pull requests</span>
          <span id="pull-requests-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="actions-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/actions" data-tab-item="i3actions-tab" data-selected-links="repo_actions /Tharakeswar9515/software-engineering-192211770/actions" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g a" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Actions&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Zm4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215Z"></path>
</svg>
        <span data-content="Actions">Actions</span>
          <span id="actions-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="projects-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/projects" data-tab-item="i4projects-tab" data-selected-links="repo_projects new_repo_project repo_project /Tharakeswar9515/software-engineering-192211770/projects" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g b" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Projects&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table UnderlineNav-octicon d-none d-sm-inline">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        <span data-content="Projects">Projects</span>
          <span id="projects-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="wiki-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/wiki" data-tab-item="i5wiki-tab" data-selected-links="repo_wiki /Tharakeswar9515/software-engineering-192211770/wiki" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g w" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Wiki&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-book UnderlineNav-octicon d-none d-sm-inline">
    <path d="M0 1.75A.75.75 0 0 1 .75 1h4.253c1.227 0 2.317.59 3 1.501A3.743 3.743 0 0 1 11.006 1h4.245a.75.75 0 0 1 .75.75v10.5a.75.75 0 0 1-.75.75h-4.507a2.25 2.25 0 0 0-1.591.659l-.622.621a.75.75 0 0 1-1.06 0l-.622-.621A2.25 2.25 0 0 0 5.258 13H.75a.75.75 0 0 1-.75-.75Zm7.251 10.324.004-5.073-.002-2.253A2.25 2.25 0 0 0 5.003 2.5H1.5v9h3.757a3.75 3.75 0 0 1 1.994.574ZM8.755 4.75l-.004 7.322a3.752 3.752 0 0 1 1.992-.572H14.5v-9h-3.495a2.25 2.25 0 0 0-2.25 2.25Z"></path>
</svg>
        <span data-content="Wiki">Wiki</span>
          <span id="wiki-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="security-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/security" data-tab-item="i6security-tab" data-selected-links="security overview alerts policy token_scanning code_scanning /Tharakeswar9515/software-engineering-192211770/security" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g s" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Security&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline">
    <path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span data-content="Security">Security</span>
          

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="insights-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/pulse" data-tab-item="i7insights-tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /Tharakeswar9515/software-engineering-192211770/pulse" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Insights&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 1.75V13.5h13.75a.75.75 0 0 1 0 1.5H.75a.75.75 0 0 1-.75-.75V1.75a.75.75 0 0 1 1.5 0Zm14.28 2.53-5.25 5.25a.75.75 0 0 1-1.06 0L7 7.06 4.28 9.78a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l3.25-3.25a.75.75 0 0 1 1.06 0L10 7.94l4.72-4.72a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        <span data-content="Insights">Insights</span>
          <span id="insights-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="settings-tab" href="https://github.com/Tharakeswar9515/software-engineering-192211770/settings" data-tab-item="i8settings-tab" data-selected-links="code_review_limits codespaces_repository_settings collaborators custom_tabs hooks integration_installations interaction_limits issue_template_editor key_links_settings notifications repo_actions_settings repo_announcements repo_branch_settings repo_keys_settings repo_pages_settings repo_rule_insights repo_rulesets repo_protected_tags_settings repo_settings reported_content repo_custom_properties repository_actions_settings_add_new_runner repository_actions_settings_general repository_actions_settings_runners repository_environments role_details secrets secrets_settings_actions secrets_settings_codespaces secrets_settings_dependabot security_analysis /Tharakeswar9515/software-engineering-192211770/settings" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Settings&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gear UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path>
</svg>
        <span data-content="Settings">Settings</span>
          <span id="settings-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
</ul>
    <div style="visibility:hidden;" data-view-component="true" class="UnderlineNav-actions js-responsive-underlinenav-overflow position-absolute pr-3 pr-md-4 pr-lg-5 right-0">        <details data-view-component="true" class="details-overlay details-reset position-relative">
    <summary role="button" data-view-component="true" aria-haspopup="menu">          <div class="UnderlineNav-item mr-0 border-0">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path>
</svg>
            <span class="sr-only">More</span>
          </div>
</summary>
    <details-menu role="menu" data-view-component="true" class="dropdown-menu dropdown-menu-sw" data-focus-trap="suspended"><span class="sentinel" tabindex="0" aria-hidden="true"></span>
          <ul>
              <li data-menu-item="i0code-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item selected dropdown-item" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments repo_attestations /Tharakeswar9515/software-engineering-192211770" href="https://github.com/Tharakeswar9515/software-engineering-192211770">
                  Code
</a>              </li>
              <li data-menu-item="i1issues-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_issues repo_labels repo_milestones /Tharakeswar9515/software-engineering-192211770/issues" href="https://github.com/Tharakeswar9515/software-engineering-192211770/issues">
                  Issues
</a>              </li>
              <li data-menu-item="i2pull-requests-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_pulls checks /Tharakeswar9515/software-engineering-192211770/pulls" href="https://github.com/Tharakeswar9515/software-engineering-192211770/pulls">
                  Pull requests
</a>              </li>
              <li data-menu-item="i3actions-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_actions /Tharakeswar9515/software-engineering-192211770/actions" href="https://github.com/Tharakeswar9515/software-engineering-192211770/actions">
                  Actions
</a>              </li>
              <li data-menu-item="i4projects-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_projects new_repo_project repo_project /Tharakeswar9515/software-engineering-192211770/projects" href="https://github.com/Tharakeswar9515/software-engineering-192211770/projects">
                  Projects
</a>              </li>
              <li data-menu-item="i5wiki-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_wiki /Tharakeswar9515/software-engineering-192211770/wiki" href="https://github.com/Tharakeswar9515/software-engineering-192211770/wiki">
                  Wiki
</a>              </li>
              <li data-menu-item="i6security-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="security overview alerts policy token_scanning code_scanning /Tharakeswar9515/software-engineering-192211770/security" href="https://github.com/Tharakeswar9515/software-engineering-192211770/security">
                  Security
</a>              </li>
              <li data-menu-item="i7insights-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /Tharakeswar9515/software-engineering-192211770/pulse" href="https://github.com/Tharakeswar9515/software-engineering-192211770/pulse">
                  Insights
</a>              </li>
              <li data-menu-item="i8settings-tab" hidden="">
                <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="code_review_limits codespaces_repository_settings collaborators custom_tabs hooks integration_installations interaction_limits issue_template_editor key_links_settings notifications repo_actions_settings repo_announcements repo_branch_settings repo_keys_settings repo_pages_settings repo_rule_insights repo_rulesets repo_protected_tags_settings repo_settings reported_content repo_custom_properties repository_actions_settings_add_new_runner repository_actions_settings_general repository_actions_settings_runners repository_environments role_details secrets secrets_settings_actions secrets_settings_codespaces secrets_settings_dependabot security_analysis /Tharakeswar9515/software-engineering-192211770/settings" href="https://github.com/Tharakeswar9515/software-engineering-192211770/settings">
                  Settings
</a>              </li>
          </ul>
<span class="sentinel" tabindex="0" aria-hidden="true"></span></details-menu>
</details></div>
</nav>
      </div>
</header>


      <div hidden="hidden" data-view-component="true" class="js-stale-session-flash stale-session-flash flash flash-warn mb-3">
  
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a class="Link--inTextBlock" href="https://github.com/Tharakeswar9515/software-engineering-192211770">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a class="Link--inTextBlock" href="https://github.com/Tharakeswar9515/software-engineering-192211770">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-switched" hidden="">You switched accounts on another tab or window. <a class="Link--inTextBlock" href="https://github.com/Tharakeswar9515/software-engineering-192211770">Reload</a> to refresh your session.</span>

    <div data-view-component="true" class="flash-close">
  <button id="icon-button-ffb7daca-2f78-4e40-be19-a5944200636e" aria-labelledby="tooltip-75ddee6f-9328-48e3-8ecc-6c1cc91f09f3" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium js-flash-close">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x Button-visual">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
</button>  <tool-tip id="tooltip-75ddee6f-9328-48e3-8ecc-6c1cc91f09f3" for="icon-button-ffb7daca-2f78-4e40-be19-a5944200636e" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Dismiss alert</tool-tip>
</div>

  
</div>
          
    </div>

  <div id="start-of-content" class="show-on-focus"></div>








    <div id="js-flash-container" data-turbo-replace="">





  <template class="js-flash-template"></template>
</div>


    
    <notification-shelf-watcher data-base-url="https://github.com/notifications/beta/shelf" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTIyNTEwMjU1IiwidCI6MTY5OTA3OTY5MX0=--d4fb2af2d7a24f8655d8fc4a56d9f774784dffd033e5f571845e1da23fbc498d" data-view-component="true" class="js-socket-channel" data-refresh-delay="500" data-catalyst=""></notification-shelf-watcher>
  <div hidden="" data-initial="" data-target="notification-shelf-watcher.placeholder"></div>






      <details class="details-reset details-overlay details-overlay-dark js-command-palette-dialog" id="command-palette-pjax-container" data-turbo-replace="">
  <summary aria-label="Command palette trigger" tabindex="-1" role="button"></summary>
  <details-dialog class="command-palette-details-dialog d-flex flex-column flex-justify-center height-fit" aria-label="Command palette" role="dialog" aria-modal="true">
    <command-palette class="command-palette color-bg-default rounded-3 border color-shadow-small" return-to="/Tharakeswar9515/software-engineering-192211770" user-id="122510255" activation-hotkey="Mod+k,Mod+Alt+k" command-mode-hotkey="Mod+Shift+k" data-action="
        command-palette-input-ready:command-palette#inputReady
        command-palette-page-stack-updated:command-palette#updateInputScope
        itemsUpdated:command-palette#itemsUpdated
        keydown:command-palette#onKeydown
        loadingStateChanged:command-palette#loadingStateChanged
        selectedItemChanged:command-palette#selectedItemChanged
        pageFetchError:command-palette#pageFetchError
      " data-catalyst="">

        <command-palette-mode data-char="#" data-scope-types="[&quot;&quot;]" data-placeholder="Search issues and pull requests" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="#" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-placeholder="Search issues, pull requests, discussions, and projects" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="!" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-placeholder="Search projects" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="@" data-scope-types="[&quot;&quot;]" data-placeholder="Search or jump to a user, organization, or repository" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="@" data-scope-types="[&quot;owner&quot;]" data-placeholder="Search or jump to a repository" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="/" data-scope-types="[&quot;repository&quot;]" data-placeholder="Search files" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="?" data-placeholder="" data-catalyst="" data-scope-types=""></command-palette-mode>
        <command-palette-mode data-char="&gt;" data-placeholder="Run a command" data-scope-types="" data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="" data-scope-types="[&quot;&quot;]" data-placeholder="Search or jump to..." data-catalyst=""></command-palette-mode>
        <command-palette-mode data-char="" data-scope-types="[&quot;owner&quot;]" data-placeholder="Search or jump to..." data-catalyst=""></command-palette-mode>
      <command-palette-mode class="js-command-palette-default-mode" data-char="" data-placeholder="Search or jump to..." data-scope-types="" data-catalyst=""></command-palette-mode>

      <command-palette-input placeholder="Search or jump to..." data-action="
          command-palette-input:command-palette#onInput
          command-palette-select:command-palette#onSelect
          command-palette-descope:command-palette#onDescope
          command-palette-cleared:command-palette#onInputClear
        " data-catalyst="" class="d-flex flex-items-center flex-nowrap py-1 pl-3 pr-2 border-bottom">
        <div class="js-search-icon d-flex flex-items-center mr-2" style="height: 26px">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search color-fg-muted">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
        </div>
        <div class="js-spinner d-flex flex-items-center mr-2 color-fg-muted" hidden="">
          <svg aria-label="Loading" class="anim-rotate" viewBox="0 0 16 16" fill="none" width="16" height="16">
            <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
            <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
          </svg>
        </div>
        <command-palette-scope data-catalyst="" class="d-inline-flex">
          <div data-target="command-palette-scope.placeholder" hidden="" class="color-fg-subtle">/&nbsp;&nbsp;<span class="text-semibold color-fg-default">...</span>&nbsp;&nbsp;/&nbsp;&nbsp;</div>
              <command-palette-token data-text="Tharakeswar9515" data-id="U_kgDOB01brw" data-type="owner" data-value="Tharakeswar9515" data-targets="command-palette-scope.tokens" class="color-fg-default text-semibold" style="white-space:nowrap;line-height:20px;" id="" data-catalyst="">Tharakeswar9515<span class="color-fg-subtle text-normal">&nbsp;&nbsp;/&nbsp;&nbsp;</span></command-palette-token>
              <command-palette-token data-text="software-engineering-192211770" data-id="R_kgDOKooJXg" data-type="repository" data-value="software-engineering-192211770" data-targets="command-palette-scope.tokens" class="color-fg-default text-semibold" style="white-space:nowrap;line-height:20px;" id="" data-catalyst="">software-engineer...<span class="color-fg-subtle text-normal">&nbsp;&nbsp;/&nbsp;&nbsp;</span></command-palette-token>
        </command-palette-scope>
        <div class="command-palette-input-group flex-1 form-control border-0 box-shadow-none" style="z-index: 0">
          <div class="command-palette-typeahead position-absolute d-flex flex-items-center Truncate">
            <span class="typeahead-segment input-mirror" data-target="command-palette-input.mirror"></span>
            <span class="Truncate-text" data-target="command-palette-input.typeaheadText"></span>
            <span class="typeahead-segment" data-target="command-palette-input.typeaheadPlaceholder"></span>
          </div>
          <input class="js-overlay-input typeahead-input d-none" disabled="" tabindex="-1" aria-label="Hidden input for typeahead">
          <input type="text" autocomplete="off" autocorrect="off" autocapitalize="off" spellcheck="false" class="js-input typeahead-input form-control border-0 box-shadow-none input-block width-full no-focus-indicator" aria-label="Command palette input" aria-haspopup="listbox" aria-expanded="false" aria-autocomplete="list" aria-controls="command-palette-page-stack" role="combobox" data-action="
              input:command-palette-input#onInput
              keydown:command-palette-input#onKeydown
            " placeholder="Search or jump to...">
        </div>
          <div data-view-component="true" class="position-relative d-inline-block">
    <button aria-keyshortcuts="Control+Backspace" data-action="click:command-palette-input#onClear keypress:command-palette-input#onClear" data-target="command-palette-input.clearButton" id="command-palette-clear-button" hidden="hidden" type="button" data-view-component="true" class="btn-octicon command-palette-input-clear-button" aria-labelledby="tooltip-e1285369-f71e-407a-bedb-dc97b0e45f80">      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x-circle-fill">
    <path d="M2.343 13.657A8 8 0 1 1 13.658 2.343 8 8 0 0 1 2.343 13.657ZM6.03 4.97a.751.751 0 0 0-1.042.018.751.751 0 0 0-.018 1.042L6.94 8 4.97 9.97a.749.749 0 0 0 .326 1.275.749.749 0 0 0 .734-.215L8 9.06l1.97 1.97a.749.749 0 0 0 1.275-.326.749.749 0 0 0-.215-.734L9.06 8l1.97-1.97a.749.749 0 0 0-.326-1.275.749.749 0 0 0-.734.215L8 6.94Z"></path>
</svg>
</button>    <tool-tip id="tooltip-e1285369-f71e-407a-bedb-dc97b0e45f80" for="command-palette-clear-button" popover="manual" data-direction="w" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Clear Command Palette</tool-tip>
</div>
      </command-palette-input>

      <command-palette-page-stack data-default-scope-id="R_kgDOKooJXg" data-default-scope-type="Repository" data-action="command-palette-page-octicons-cached:command-palette-page-stack#cacheOcticons" data-current-mode="" data-catalyst="" data-target="command-palette.pageStack" data-current-query-text="">
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">#</kbd> to search pull requests
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">#</kbd> to search issues
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">#</kbd> to search discussions
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">!</kbd> to search projects
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;owner&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">@</kbd> to search teams
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">@</kbd> to search people and organizations
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type <kbd class="hx_kbd">&gt;</kbd> to activate command mode
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Go to your accessibility settings to change your keyboard shortcuts
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="#" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type author:@me to search your content
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="#" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type is:pr to filter to pull requests
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="#" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type is:issue to filter to issues
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-mode="#" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type is:project to filter to projects
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
          <command-palette-tip class="color-fg-muted f6 px-3 py-1 my-2" data-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-mode="#" data-value="" data-match-mode="" data-catalyst="" hidden="">
            <div class="d-flex flex-items-start flex-justify-between">
              <div>
                <span class="text-bold">Tip:</span>
                  Type is:open to filter to open content
              </div>
              <div class="ml-2 flex-shrink-0">
                Type <kbd class="hx_kbd">?</kbd> for help and tips
              </div>
            </div>
          </command-palette-tip>
        <command-palette-tip class="mx-3 my-2 flash flash-error d-flex flex-items-center" data-scope-types="*" data-on-error="" data-mode="*" data-catalyst="" hidden="" data-match-mode="" data-value="*">
          <div>
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
          </div>
          <div class="px-2">
            We’ve encountered an error and some results aren't available at this time. Type a new search or try again later.
          </div>
        </command-palette-tip>
        <command-palette-tip class="h4 color-fg-default pl-3 pb-2 pt-3" data-on-empty="" data-scope-types="*" data-match-mode="[^?]|^$" data-mode="*" data-catalyst="" hidden="" data-value="*">
          No results matched your search
        </command-palette-tip>

        <div hidden="">

            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="arrow-right-color-fg-muted">
              <svg height="16" class="octicon octicon-arrow-right color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8.22 2.97a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l2.97-2.97H3.75a.75.75 0 0 1 0-1.5h7.44L8.22 4.03a.75.75 0 0 1 0-1.06Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="arrow-right-color-fg-default">
              <svg height="16" class="octicon octicon-arrow-right color-fg-default" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8.22 2.97a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l2.97-2.97H3.75a.75.75 0 0 1 0-1.5h7.44L8.22 4.03a.75.75 0 0 1 0-1.06Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="codespaces-color-fg-muted">
              <svg height="16" class="octicon octicon-codespaces color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="copy-color-fg-muted">
              <svg height="16" class="octicon octicon-copy color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="dash-color-fg-muted">
              <svg height="16" class="octicon octicon-dash color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M2 7.75A.75.75 0 0 1 2.75 7h10a.75.75 0 0 1 0 1.5h-10A.75.75 0 0 1 2 7.75Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="file-color-fg-muted">
              <svg height="16" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="gear-color-fg-muted">
              <svg height="16" class="octicon octicon-gear color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="lock-color-fg-muted">
              <svg height="16" class="octicon octicon-lock color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M4 4a4 4 0 0 1 8 0v2h.25c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 12.25 15h-8.5A1.75 1.75 0 0 1 2 13.25v-5.5C2 6.784 2.784 6 3.75 6H4Zm8.25 3.5h-8.5a.25.25 0 0 0-.25.25v5.5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25ZM10.5 6V4a2.5 2.5 0 1 0-5 0v2Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="moon-color-fg-muted">
              <svg height="16" class="octicon octicon-moon color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M9.598 1.591a.749.749 0 0 1 .785-.175 7.001 7.001 0 1 1-8.967 8.967.75.75 0 0 1 .961-.96 5.5 5.5 0 0 0 7.046-7.046.75.75 0 0 1 .175-.786Zm1.616 1.945a7 7 0 0 1-7.678 7.678 5.499 5.499 0 1 0 7.678-7.678Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="person-color-fg-muted">
              <svg height="16" class="octicon octicon-person color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M10.561 8.073a6.005 6.005 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6.004 6.004 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0ZM10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="pencil-color-fg-muted">
              <svg height="16" class="octicon octicon-pencil color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="issue-opened-open">
              <svg height="16" class="octicon octicon-issue-opened open" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="git-pull-request-draft-color-fg-muted">
              <svg height="16" class="octicon octicon-git-pull-request-draft color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M3.25 1A2.25 2.25 0 0 1 4 5.372v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.251 2.251 0 0 1 3.25 1Zm9.5 14a2.25 2.25 0 1 1 0-4.5 2.25 2.25 0 0 1 0 4.5ZM2.5 3.25a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0ZM3.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm9.5 0a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM14 7.5a1.25 1.25 0 1 1-2.5 0 1.25 1.25 0 0 1 2.5 0Zm0-4.25a1.25 1.25 0 1 1-2.5 0 1.25 1.25 0 0 1 2.5 0Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="search-color-fg-muted">
              <svg height="16" class="octicon octicon-search color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="sun-color-fg-muted">
              <svg height="16" class="octicon octicon-sun color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8 12a4 4 0 1 1 0-8 4 4 0 0 1 0 8Zm0-1.5a2.5 2.5 0 1 0 0-5 2.5 2.5 0 0 0 0 5Zm5.657-8.157a.75.75 0 0 1 0 1.061l-1.061 1.06a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734l1.06-1.06a.75.75 0 0 1 1.06 0Zm-9.193 9.193a.75.75 0 0 1 0 1.06l-1.06 1.061a.75.75 0 1 1-1.061-1.06l1.06-1.061a.75.75 0 0 1 1.061 0ZM8 0a.75.75 0 0 1 .75.75v1.5a.75.75 0 0 1-1.5 0V.75A.75.75 0 0 1 8 0ZM3 8a.75.75 0 0 1-.75.75H.75a.75.75 0 0 1 0-1.5h1.5A.75.75 0 0 1 3 8Zm13 0a.75.75 0 0 1-.75.75h-1.5a.75.75 0 0 1 0-1.5h1.5A.75.75 0 0 1 16 8Zm-8 5a.75.75 0 0 1 .75.75v1.5a.75.75 0 0 1-1.5 0v-1.5A.75.75 0 0 1 8 13Zm3.536-1.464a.75.75 0 0 1 1.06 0l1.061 1.06a.75.75 0 0 1-1.06 1.061l-1.061-1.06a.75.75 0 0 1 0-1.061ZM2.343 2.343a.75.75 0 0 1 1.061 0l1.06 1.061a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018l-1.06-1.06a.75.75 0 0 1 0-1.06Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="sync-color-fg-muted">
              <svg height="16" class="octicon octicon-sync color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="trash-color-fg-muted">
              <svg height="16" class="octicon octicon-trash color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M11 1.75V3h2.25a.75.75 0 0 1 0 1.5H2.75a.75.75 0 0 1 0-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75ZM4.496 6.675l.66 6.6a.25.25 0 0 0 .249.225h5.19a.25.25 0 0 0 .249-.225l.66-6.6a.75.75 0 0 1 1.492.149l-.66 6.6A1.748 1.748 0 0 1 10.595 15h-5.19a1.75 1.75 0 0 1-1.741-1.575l-.66-6.6a.75.75 0 1 1 1.492-.15ZM6.5 1.75V3h3V1.75a.25.25 0 0 0-.25-.25h-2.5a.25.25 0 0 0-.25.25Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="key-color-fg-muted">
              <svg height="16" class="octicon octicon-key color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M10.5 0a5.499 5.499 0 1 1-1.288 10.848l-.932.932a.749.749 0 0 1-.53.22H7v.75a.749.749 0 0 1-.22.53l-.5.5a.749.749 0 0 1-.53.22H5v.75a.749.749 0 0 1-.22.53l-.5.5a.749.749 0 0 1-.53.22h-2A1.75 1.75 0 0 1 0 14.25v-2c0-.199.079-.389.22-.53l4.932-4.932A5.5 5.5 0 0 1 10.5 0Zm-4 5.5c-.001.431.069.86.205 1.269a.75.75 0 0 1-.181.768L1.5 12.56v1.69c0 .138.112.25.25.25h1.69l.06-.06v-1.19a.75.75 0 0 1 .75-.75h1.19l.06-.06v-1.19a.75.75 0 0 1 .75-.75h1.19l1.023-1.025a.75.75 0 0 1 .768-.18A4 4 0 1 0 6.5 5.5ZM11 6a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="comment-discussion-color-fg-muted">
              <svg height="16" class="octicon octicon-comment-discussion color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M1.75 1h8.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 10.25 10H7.061l-2.574 2.573A1.458 1.458 0 0 1 2 11.543V10h-.25A1.75 1.75 0 0 1 0 8.25v-5.5C0 1.784.784 1 1.75 1ZM1.5 2.75v5.5c0 .138.112.25.25.25h1a.75.75 0 0 1 .75.75v2.19l2.72-2.72a.749.749 0 0 1 .53-.22h3.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25Zm13 2a.25.25 0 0 0-.25-.25h-.5a.75.75 0 0 1 0-1.5h.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 14.25 12H14v1.543a1.458 1.458 0 0 1-2.487 1.03L9.22 12.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.22 2.22v-2.19a.75.75 0 0 1 .75-.75h1a.25.25 0 0 0 .25-.25Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="bell-color-fg-muted">
              <svg height="16" class="octicon octicon-bell color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M8 16a2 2 0 0 0 1.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 0 0 8 16ZM3 5a5 5 0 0 1 10 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.519 1.519 0 0 1 13.482 13H2.518a1.516 1.516 0 0 1-1.263-2.36l1.703-2.554A.255.255 0 0 0 3 7.947Zm5-3.5A3.5 3.5 0 0 0 4.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.017.017 0 0 0-.003.01l.001.006c0 .002.002.004.004.006l.006.004.007.001h10.964l.007-.001.006-.004.004-.006.001-.007a.017.017 0 0 0-.003-.01l-1.703-2.554a1.745 1.745 0 0 1-.294-.97V5A3.5 3.5 0 0 0 8 1.5Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="bell-slash-color-fg-muted">
              <svg height="16" class="octicon octicon-bell-slash color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="m4.182 4.31.016.011 10.104 7.316.013.01 1.375.996a.75.75 0 1 1-.88 1.214L13.626 13H2.518a1.516 1.516 0 0 1-1.263-2.36l1.703-2.554A.255.255 0 0 0 3 7.947V5.305L.31 3.357a.75.75 0 1 1 .88-1.214Zm7.373 7.19L4.5 6.391v1.556c0 .346-.102.683-.294.97l-1.703 2.556a.017.017 0 0 0-.003.01c0 .005.002.009.005.012l.006.004.007.001ZM8 1.5c-.997 0-1.895.416-2.534 1.086A.75.75 0 1 1 4.38 1.55 5 5 0 0 1 13 5v2.373a.75.75 0 0 1-1.5 0V5A3.5 3.5 0 0 0 8 1.5ZM8 16a2 2 0 0 1-1.985-1.75c-.017-.137.097-.25.235-.25h3.5c.138 0 .252.113.235.25A2 2 0 0 1 8 16Z"></path></svg>
            </div>
            <div data-targets="command-palette-page-stack.localOcticons" data-octicon-id="paintbrush-color-fg-muted">
              <svg height="16" class="octicon octicon-paintbrush color-fg-muted" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path d="M11.134 1.535c.7-.509 1.416-.942 2.076-1.155.649-.21 1.463-.267 2.069.34.603.601.568 1.411.368 2.07-.202.668-.624 1.39-1.125 2.096-1.011 1.424-2.496 2.987-3.775 4.249-1.098 1.084-2.132 1.839-3.04 2.3a3.744 3.744 0 0 1-1.055 3.217c-.431.431-1.065.691-1.657.861-.614.177-1.294.287-1.914.357A21.151 21.151 0 0 1 .797 16H.743l.007-.75H.749L.742 16a.75.75 0 0 1-.743-.742l.743-.008-.742.007v-.054a21.25 21.25 0 0 1 .13-2.284c.067-.647.187-1.287.358-1.914.17-.591.43-1.226.86-1.657a3.746 3.746 0 0 1 3.227-1.054c.466-.893 1.225-1.907 2.314-2.982 1.271-1.255 2.833-2.75 4.245-3.777ZM1.62 13.089c-.051.464-.086.929-.104 1.395.466-.018.932-.053 1.396-.104a10.511 10.511 0 0 0 1.668-.309c.526-.151.856-.325 1.011-.48a2.25 2.25 0 1 0-3.182-3.182c-.155.155-.329.485-.48 1.01a10.515 10.515 0 0 0-.309 1.67Zm10.396-10.34c-1.224.89-2.605 2.189-3.822 3.384l1.718 1.718c1.21-1.205 2.51-2.597 3.387-3.833.47-.662.78-1.227.912-1.662.134-.444.032-.551.009-.575h-.001V1.78c-.014-.014-.113-.113-.548.027-.432.14-.995.462-1.655.942Zm-4.832 7.266-.001.001a9.859 9.859 0 0 0 1.63-1.142L7.155 7.216a9.7 9.7 0 0 0-1.161 1.607c.482.302.889.71 1.19 1.192Z"></path></svg>
            </div>

            <command-palette-item-group data-group-id="top" data-group-title="Top result" data-group-hint="" data-group-limits="{}" data-default-priority="0" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Top result
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Top result results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="commands" data-group-title="Commands" data-group-hint="Type &gt; to filter" data-group-limits="{&quot;static_items_page&quot;:50,&quot;issue&quot;:50,&quot;pull_request&quot;:50,&quot;discussion&quot;:50}" data-default-priority="1" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Commands
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              Type &gt; to filter
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Commands results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="global_commands" data-group-title="Global Commands" data-group-hint="Type &gt; to filter" data-group-limits="{&quot;issue&quot;:0,&quot;pull_request&quot;:0,&quot;discussion&quot;:0}" data-default-priority="2" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Global Commands
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              Type &gt; to filter
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Global Commands results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="this_page" data-group-title="This Page" data-group-hint="" data-group-limits="{}" data-default-priority="3" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              This Page
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="This Page results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="files" data-group-title="Files" data-group-hint="" data-group-limits="{}" data-default-priority="4" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Files
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Files results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="default" data-group-title="Default" data-group-hint="" data-group-limits="{&quot;static_items_page&quot;:50}" data-default-priority="5" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Default results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="pages" data-group-title="Pages" data-group-hint="" data-group-limits="{&quot;repository&quot;:10}" data-default-priority="6" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Pages
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Pages results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="access_policies" data-group-title="Access Policies" data-group-hint="" data-group-limits="{}" data-default-priority="7" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Access Policies
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Access Policies results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="organizations" data-group-title="Organizations" data-group-hint="" data-group-limits="{}" data-default-priority="8" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Organizations
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Organizations results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="repositories" data-group-title="Repositories" data-group-hint="" data-group-limits="{}" data-default-priority="9" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Repositories
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Repositories results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="references" data-group-title="Issues, pull requests, and discussions" data-group-hint="Type # to filter" data-group-limits="{}" data-default-priority="10" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Issues, pull requests, and discussions
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              Type # to filter
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Issues, pull requests, and discussions results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="teams" data-group-title="Teams" data-group-hint="" data-group-limits="{}" data-default-priority="11" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Teams
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Teams results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="users" data-group-title="Users" data-group-hint="" data-group-limits="{}" data-default-priority="12" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Users
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Users results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="memex_projects" data-group-title="Projects" data-group-hint="" data-group-limits="{}" data-default-priority="13" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Projects
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Projects results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="projects" data-group-title="Projects (classic)" data-group-hint="" data-group-limits="{}" data-default-priority="14" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Projects (classic)
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Projects (classic) results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="footer" data-group-title="Footer" data-group-hint="" data-group-limits="{}" data-default-priority="15" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Footer results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="modes_help" data-group-title="Modes" data-group-hint="" data-group-limits="{}" data-default-priority="16" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Modes
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Modes results"></div>
        </command-palette-item-group>
            <command-palette-item-group data-group-id="filters_help" data-group-title="Use filters in issues, pull requests, discussions, and projects" data-group-hint="" data-group-limits="{}" data-default-priority="17" data-catalyst="" class="py-2 border-top" hidden="true" data-skip-template="">
            
          <div class="d-flex flex-justify-between my-2 px-3">
            <span data-target="command-palette-item-group.header" class="color-fg-muted text-bold f6 text-normal">
              Use filters in issues, pull requests, discussions, and projects
            </span>
            <span data-target="command-palette-item-group.header" class="color-fg-muted f6 text-normal">
              
            </span>
          </div>
          <div role="listbox" class="list-style-none" data-target="command-palette-item-group.list" aria-label="Use filters in issues, pull requests, discussions, and projects results"></div>
        </command-palette-item-group>

            <command-palette-page data-page-title="Tharakeswar9515" data-scope-id="U_kgDOB01brw" data-scope-type="owner" data-targets="command-palette-page-stack.defaultPages" hidden="" data-catalyst="" class="rounded-bottom-2 page-stack-transition-height" style="max-height:400px;">
            </command-palette-page>
            <command-palette-page data-page-title="software-engineering-192211770" data-scope-id="R_kgDOKooJXg" data-scope-type="repository" data-targets="command-palette-page-stack.defaultPages" hidden="" data-catalyst="" class="rounded-bottom-2 page-stack-transition-height" style="max-height:400px;">
            </command-palette-page>
        </div>

        <command-palette-page data-is-root="" hidden="" data-page-title="" data-catalyst="" class="rounded-bottom-2 page-stack-transition-height" data-targets="command-palette-page-stack.pages" style="max-height:400px;" data-scope-id="" data-scope-type="">
        </command-palette-page>
          <command-palette-page data-page-title="Tharakeswar9515" data-scope-id="U_kgDOB01brw" data-scope-type="owner" hidden="" data-catalyst="" class="rounded-bottom-2 page-stack-transition-height" data-targets="command-palette-page-stack.pages" style="max-height:400px;">
          </command-palette-page>
          <command-palette-page data-page-title="software-engineering-192211770" data-scope-id="R_kgDOKooJXg" data-scope-type="repository" hidden="" data-catalyst="" class="rounded-bottom-2 page-stack-transition-height" data-targets="command-palette-page-stack.pages" style="max-height:400px;">
          </command-palette-page>
      </command-palette-page-stack>

      <server-defined-provider data-type="search-links" data-targets="command-palette.serverDefinedProviderElements" data-supported-modes="" data-catalyst="" data-fetch-debounce="" data-supported-scope-types="" data-src="" data-supports-commands=""></server-defined-provider>
      <server-defined-provider data-type="help" data-targets="command-palette.serverDefinedProviderElements" data-supported-modes="" data-catalyst="" data-fetch-debounce="" data-supported-scope-types="" data-src="" data-supports-commands="">
          <command-palette-help data-group="modes_help" data-prefix="#" data-scope-types="[&quot;&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search for <strong>issues</strong> and <strong>pull requests</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">#</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="modes_help" data-prefix="#" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search for <strong>issues, pull requests, discussions,</strong> and <strong>projects</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">#</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="modes_help" data-prefix="@" data-scope-types="[&quot;&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search for <strong>organizations, repositories,</strong> and <strong>users</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">@</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="modes_help" data-prefix="!" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search for <strong>projects</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">!</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="modes_help" data-prefix="/" data-scope-types="[&quot;repository&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search for <strong>files</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">/</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="modes_help" data-prefix="&gt;" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Activate <strong>command mode</strong></span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd">&gt;</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# author:@me" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search your issues, pull requests, and discussions</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># author:@me</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# author:@me" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Search your issues, pull requests, and discussions</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># author:@me</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# is:pr" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Filter to pull requests</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># is:pr</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# is:issue" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Filter to issues</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># is:issue</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# is:discussion" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Filter to discussions</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># is:discussion</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# is:project" data-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Filter to projects</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># is:project</kbd>
              </span>
          </command-palette-help>
          <command-palette-help data-group="filters_help" data-prefix="# is:open" data-scope-types="" data-catalyst="" hidden="">
            <span data-target="command-palette-help.titleElement">Filter to open issues, pull requests, and discussions</span>
              <span data-target="command-palette-help.hintElement">
                <kbd class="hx_kbd"># is:open</kbd>
              </span>
          </command-palette-help>
      </server-defined-provider>

        <server-defined-provider data-type="commands" data-fetch-debounce="0" data-src="/command_palette/commands" data-supported-modes="[]" data-supports-commands="" data-targets="command-palette.serverDefinedProviderElements" data-supported-scope-types="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="prefetched" data-fetch-debounce="0" data-src="/command_palette/jump_to_page_navigation" data-supported-modes="[&quot;&quot;]" data-supported-scope-types="[&quot;&quot;,&quot;owner&quot;,&quot;repository&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/issues" data-supported-modes="[&quot;#&quot;,&quot;#&quot;]" data-supported-scope-types="[&quot;owner&quot;,&quot;repository&quot;,&quot;&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/jump_to" data-supported-modes="[&quot;@&quot;,&quot;@&quot;]" data-supported-scope-types="[&quot;&quot;,&quot;owner&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/jump_to_members_only" data-supported-modes="[&quot;@&quot;,&quot;@&quot;,&quot;&quot;,&quot;&quot;]" data-supported-scope-types="[&quot;&quot;,&quot;owner&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="prefetched" data-fetch-debounce="0" data-src="/command_palette/jump_to_members_only_prefetched" data-supported-modes="[&quot;@&quot;,&quot;@&quot;,&quot;&quot;,&quot;&quot;]" data-supported-scope-types="[&quot;&quot;,&quot;owner&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="files" data-fetch-debounce="0" data-src="/command_palette/files" data-supported-modes="[&quot;/&quot;]" data-supported-scope-types="[&quot;repository&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/discussions" data-supported-modes="[&quot;#&quot;]" data-supported-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/projects" data-supported-modes="[&quot;#&quot;,&quot;!&quot;]" data-supported-scope-types="[&quot;owner&quot;,&quot;repository&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="prefetched" data-fetch-debounce="0" data-src="/command_palette/recent_issues" data-supported-modes="[&quot;#&quot;,&quot;#&quot;]" data-supported-scope-types="[&quot;owner&quot;,&quot;repository&quot;,&quot;&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/teams" data-supported-modes="[&quot;@&quot;,&quot;&quot;]" data-supported-scope-types="[&quot;owner&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
        <server-defined-provider data-type="remote" data-fetch-debounce="200" data-src="/command_palette/name_with_owner_repository" data-supported-modes="[&quot;@&quot;,&quot;@&quot;,&quot;&quot;,&quot;&quot;]" data-supported-scope-types="[&quot;&quot;,&quot;owner&quot;]" data-targets="command-palette.serverDefinedProviderElements" data-supports-commands="" data-catalyst=""></server-defined-provider>
    <client-defined-provider data-catalyst="" data-provider-id="main-window-commands-provider" data-targets="command-palette.clientDefinedProviderElements"></client-defined-provider></command-palette>
  </details-dialog>
</details>

<div class="position-fixed bottom-0 left-0 ml-5 mb-5 js-command-palette-toasts" style="z-index: 1000">
  <div hidden="" class="Toast Toast--loading">
    <span class="Toast-icon">
      <svg class="Toast--spinner" viewBox="0 0 32 32" width="18" height="18" aria-hidden="true">
        <path fill="#959da5" d="M16 0 A16 16 0 0 0 16 32 A16 16 0 0 0 16 0 M16 4 A12 12 0 0 1 16 28 A12 12 0 0 1 16 4"></path>
        <path fill="#ffffff" d="M16 0 A16 16 0 0 1 32 16 L28 16 A12 12 0 0 0 16 4z"></path>
      </svg>
    </span>
    <span class="Toast-content"></span>
  </div>

  <div hidden="" class="anim-fade-in fast Toast Toast--error">
    <span class="Toast-icon">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-stop">
    <path d="M4.47.22A.749.749 0 0 1 5 0h6c.199 0 .389.079.53.22l4.25 4.25c.141.14.22.331.22.53v6a.749.749 0 0 1-.22.53l-4.25 4.25A.749.749 0 0 1 11 16H5a.749.749 0 0 1-.53-.22L.22 11.53A.749.749 0 0 1 0 11V5c0-.199.079-.389.22-.53Zm.84 1.28L1.5 5.31v5.38l3.81 3.81h5.38l3.81-3.81V5.31L10.69 1.5ZM8 4a.75.75 0 0 1 .75.75v3.5a.75.75 0 0 1-1.5 0v-3.5A.75.75 0 0 1 8 4Zm0 8a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path>
</svg>
    </span>
    <span class="Toast-content"></span>
  </div>

  <div hidden="" class="anim-fade-in fast Toast Toast--warning">
    <span class="Toast-icon">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    </span>
    <span class="Toast-content"></span>
  </div>


  <div hidden="" class="anim-fade-in fast Toast Toast--success">
    <span class="Toast-icon">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
    </span>
    <span class="Toast-content"></span>
  </div>

  <div hidden="" class="anim-fade-in fast Toast">
    <span class="Toast-icon">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-info">
    <path d="M0 8a8 8 0 1 1 16 0A8 8 0 0 1 0 8Zm8-6.5a6.5 6.5 0 1 0 0 13 6.5 6.5 0 0 0 0-13ZM6.5 7.75A.75.75 0 0 1 7.25 7h1a.75.75 0 0 1 .75.75v2.75h.25a.75.75 0 0 1 0 1.5h-2a.75.75 0 0 1 0-1.5h.25v-2h-.25a.75.75 0 0 1-.75-.75ZM8 6a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path>
</svg>
    </span>
    <span class="Toast-content"></span>
  </div>
</div>


  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container">
      
      
  


<template class="js-user-list-create-dialog-template" data-label="Create list"></template>



    






      

  <div id="repository-container-header" class="pt-3 hide-full-screen" data-turbo-replace="">

      <div class="d-flex flex-wrap flex-justify-end mb-3  container-xl  px-3 px-md-4 px-lg-5" style="gap: 1rem;">

        <div class="flex-auto min-width-0 width-fit mr-3">
              <div class=" d-flex flex-wrap flex-items-center wb-break-word f3 text-normal">
    <img class="avatar mr-2 d-none d-md-block avatar-user" alt="Owner avatar" src="./22_files/122510255(1)" width="24" height="24">
  

  <strong itemprop="name" class="mr-2 flex-self-stretch d-none d-md-block">
    <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" class="color-fg-default" href="https://github.com/Tharakeswar9515/software-engineering-192211770">software-engineering-192211770</a>
  </strong>

  <span></span><span class="Label Label--secondary v-align-middle mr-1 d-none d-md-block">Public</span>
</div>

<div class="d-none d-md-block">
</div>


        </div>

        <div id="repository-details-container" data-turbo-replace="">
            <ul class="pagehead-actions flex-shrink-0 d-none d-md-inline" style="padding: 2px 0;">
    
      <li>
  <div class="float-left">
    <!-- '"` --><!-- </textarea></xmp> --><form data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/profile_pin" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="sgg9o1EHY-ua68nbaOnqCsMkqzhJQj6D7xYSCGBdf50sXrzYb9UgReo4RLveFICzyPDogbqYh8RAxOphyj7YBw" autocomplete="off">
        <button title="Pin this repository to your profile" type="submit" data-view-component="true" class="btn-sm btn">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pin mr-2">
    <path d="m11.294.984 3.722 3.722a1.75 1.75 0 0 1-.504 2.826l-1.327.613a3.089 3.089 0 0 0-1.707 2.084l-.584 2.454c-.317 1.332-1.972 1.8-2.94.832L5.75 11.311 1.78 15.28a.749.749 0 1 1-1.06-1.06l3.969-3.97-2.204-2.204c-.968-.968-.5-2.623.832-2.94l2.454-.584a3.08 3.08 0 0 0 2.084-1.707l.613-1.327a1.75 1.75 0 0 1 2.826-.504ZM6.283 9.723l2.732 2.731a.25.25 0 0 0 .42-.119l.584-2.454a4.586 4.586 0 0 1 2.537-3.098l1.328-.613a.25.25 0 0 0 .072-.404l-3.722-3.722a.25.25 0 0 0-.404.072l-.613 1.328a4.584 4.584 0 0 1-3.098 2.537l-2.454.584a.25.25 0 0 0-.119.42l2.731 2.732Z"></path>
</svg>Pin
</button></form>  </div>
</li>


  <li>
                <notifications-list-subscription-form data-action="notifications-dialog-label-toggled:notifications-list-subscription-form#handleDialogLabelToggle" class="f5 position-relative" data-catalyst="">
          <details class="details-reset details-overlay f5 position-relative" data-target="notifications-list-subscription-form.details" data-action="toggle:notifications-list-subscription-form#detailsToggled">

            <summary data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/notifications/713689438/watch_subscription?aria_id_prefix=repository-details&amp;button_block=false&amp;show_count=true&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="6b49640aca32a6bee06eb697de14e7000d871a4b1aa315dd60a426c98ffce14e" data-ga-click="Repository, click Watch settings, action:notifications#watch_subscription" aria-label="Tharakeswar9515/software-engineering-192211770 repository watch options" id="repository-details-watch-button" data-view-component="true" class="btn-sm btn" aria-haspopup="menu" role="button">    <span data-menu-button="">
                <span data-target="notifications-list-subscription-form.unwatchButtonCopy">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
                  Unwatch
                </span>
                <span hidden="" data-target="notifications-list-subscription-form.stopIgnoringButtonCopy">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-bell-slash">
    <path d="m4.182 4.31.016.011 10.104 7.316.013.01 1.375.996a.75.75 0 1 1-.88 1.214L13.626 13H2.518a1.516 1.516 0 0 1-1.263-2.36l1.703-2.554A.255.255 0 0 0 3 7.947V5.305L.31 3.357a.75.75 0 1 1 .88-1.214Zm7.373 7.19L4.5 6.391v1.556c0 .346-.102.683-.294.97l-1.703 2.556a.017.017 0 0 0-.003.01c0 .005.002.009.005.012l.006.004.007.001ZM8 1.5c-.997 0-1.895.416-2.534 1.086A.75.75 0 1 1 4.38 1.55 5 5 0 0 1 13 5v2.373a.75.75 0 0 1-1.5 0V5A3.5 3.5 0 0 0 8 1.5ZM8 16a2 2 0 0 1-1.985-1.75c-.017-.137.097-.25.235-.25h3.5c.138 0 .252.113.235.25A2 2 0 0 1 8 16Z"></path>
</svg>
                  Stop ignoring
                </span>
                <span hidden="" data-target="notifications-list-subscription-form.watchButtonCopy">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
                  Watch
                </span>
              </span>
                <span id="repo-notifications-counter" data-target="notifications-list-subscription-form.socialCount" data-pjax-replace="true" data-turbo-replace="true" title="1" data-view-component="true" class="Counter">1</span>
              <span class="dropdown-caret"></span>
</summary>
            <details-menu class="SelectMenu  " role="menu" data-target="notifications-list-subscription-form.menu" data-focus-trap="active"><span class="sentinel" tabindex="0" aria-hidden="true"></span>
              <div class="SelectMenu-modal notifications-component-menu-modal">
                <header class="SelectMenu-header">
                  <h3 class="SelectMenu-title">Notifications</h3>
                  <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-action="click:notifications-list-subscription-form#closeMenu">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
                  </button>
                </header>

                <div class="SelectMenu-list">
                  <!-- '"` --><!-- </textarea></xmp> --><form data-target="notifications-list-subscription-form.form" data-action="submit:notifications-list-subscription-form#submitForm" data-turbo="false" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="cAH3RegJ2mG7XRACcqlJC-SmCXIVDZp9NxLgYqGuEGc6UeDcCjt9uijPuzvxG_kKf5lRUGgks2zGq9f4VWevBQ" autocomplete="off">

                    <input type="hidden" name="repository_id" value="713689438">

                    <button type="submit" name="do" value="included" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                      <span class="f5">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                      </span>
                      <div>
                        <div class="f5 text-bold">
                          Participating and @mentions
                        </div>
                        <div class="text-small color-fg-muted text-normal pb-1">
                          Only receive notifications from this repository when participating or @mentioned.
                        </div>
                      </div>
                    </button>

                    <button type="submit" name="do" value="subscribed" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="true" data-targets="notifications-list-subscription-form.subscriptionButtons">
                      <span class="f5">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                      </span>
                      <div>
                        <div class="f5 text-bold">
                          All Activity
                        </div>
                        <div class="text-small color-fg-muted text-normal pb-1">
                          Notified of all notifications on this repository.
                        </div>
                      </div>
                    </button>

                    <button type="submit" name="do" value="ignore" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                      <span class="f5">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                      </span>
                      <div>
                        <div class="f5 text-bold">
                          Ignore
                        </div>
                        <div class="text-small color-fg-muted text-normal pb-1">
                          Never be notified.
                        </div>
                      </div>
                    </button>
</form>                  <button class="SelectMenu-item flex-items-start pr-3" type="button" role="menuitemradio" data-target="notifications-list-subscription-form.customButton" data-action="click:notifications-list-subscription-form#openCustomDialog" aria-haspopup="true" aria-checked="false">
                    <span class="f5">
                      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                    </span>
                    <div>
                      <div class="d-flex flex-items-start flex-justify-between">
                        <div class="f5 text-bold">Custom</div>
                        <div class="f5 pr-1">
                          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-right">
    <path d="M8.22 2.97a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l2.97-2.97H3.75a.75.75 0 0 1 0-1.5h7.44L8.22 4.03a.75.75 0 0 1 0-1.06Z"></path>
</svg>
                        </div>
                      </div>
                      <div class="text-small color-fg-muted text-normal pb-1">
                        Select events you want to be notified of in addition to participating and @mentions.
                      </div>
                    </div>
                  </button>

                    <div class="px-3 py-2 d-flex color-bg-subtle flex-items-center">
                      <span class="f5">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-device-mobile SelectMenu-icon SelectMenu-icon--device-mobile">
    <path d="M3.75 0h8.5C13.216 0 14 .784 14 1.75v12.5A1.75 1.75 0 0 1 12.25 16h-8.5A1.75 1.75 0 0 1 2 14.25V1.75C2 .784 2.784 0 3.75 0ZM3.5 1.75v12.5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25ZM8 13a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path>
</svg>
                      </span>
                      <span classname="text-small color-fg-muted text-normal pb-1">
                        Get push notifications on <a target="_blank" rel="noopener noreferrer" href="https://apps.apple.com/app/apple-store/id1477376905?ct=watch-dropdown&amp;mt=8&amp;pt=524675">iOS</a> or <a target="_blank" rel="noopener noreferrer" href="https://play.google.com/store/apps/details?id=com.github.android&amp;referrer=utm_campaign%3Dwatch-dropdown%26utm_medium%3Dweb%26utm_source%3Dgithub">Android</a>.
                      </span>
                    </div>
                </div>
              </div>
            <span class="sentinel" tabindex="0" aria-hidden="true"></span></details-menu>

            <details-dialog class="notifications-component-dialog " data-target="notifications-list-subscription-form.customDialog" aria-label="Custom dialog" hidden="" role="dialog" aria-modal="true">
              <div class="SelectMenu-modal notifications-component-dialog-modal overflow-visible">
                <!-- '"` --><!-- </textarea></xmp> --><form data-target="notifications-list-subscription-form.customform" data-action="submit:notifications-list-subscription-form#submitCustomForm" data-turbo="false" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="SPgiqMV5bPcm2XzTEuDc0qrB7E1aGJUa1Urt3U78ulQCqDUxJ0vLLLVL1-qRUmzTMf60bycxvAsk89pHujUFNg" autocomplete="off">

                  <input type="hidden" name="repository_id" value="713689438">

                  <header class="d-sm-none SelectMenu-header pb-0 border-bottom-0 px-2 px-sm-3">
                    <h1 class="f3 SelectMenu-title d-inline-flex">
                      <button class="color-bg-default border-0 px-2 py-0 m-0 Link--secondary f5" aria-label="Return to menu" type="button" data-action="click:notifications-list-subscription-form#closeCustomDialog">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-left">
    <path d="M7.78 12.53a.75.75 0 0 1-1.06 0L2.47 8.28a.75.75 0 0 1 0-1.06l4.25-4.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L4.81 7h7.44a.75.75 0 0 1 0 1.5H4.81l2.97 2.97a.75.75 0 0 1 0 1.06Z"></path>
</svg>
                      </button>
                      Custom
                    </h1>
                  </header>

                  <header class="d-none d-sm-flex flex-items-start pt-1">
                    <button class="border-0 px-2 pt-1 m-0 Link--secondary f5" style="background-color: transparent;" aria-label="Return to menu" type="button" data-action="click:notifications-list-subscription-form#closeCustomDialog">
                      <svg style="position: relative; left: 2px; top: 1px" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-left">
    <path d="M7.78 12.53a.75.75 0 0 1-1.06 0L2.47 8.28a.75.75 0 0 1 0-1.06l4.25-4.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L4.81 7h7.44a.75.75 0 0 1 0 1.5H4.81l2.97 2.97a.75.75 0 0 1 0 1.06Z"></path>
</svg>
                    </button>

                    <h1 class="pt-1 pr-4 pb-0 pl-0 f5 text-bold">
                      Custom
                    </h1>
                  </header>
                  <fieldset>
                    <legend>
                      <div class="text-small color-fg-muted pt-0 pr-3 pb-3 pl-6 pl-sm-5 border-bottom mb-3">
                        Select events you want to be notified of in addition to participating and @mentions.
                      </div>
                    </legend>
                    <div data-target="notifications-list-subscription-form.labelInputs">
                    </div>
                      <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                        <label class="f5 text-normal">
                          <input type="checkbox" name="thread_types[]" value="Issue" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                          Issues
                        </label>

                      </div>
                      <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                        <label class="f5 text-normal">
                          <input type="checkbox" name="thread_types[]" value="PullRequest" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                          Pull requests
                        </label>

                      </div>
                      <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                        <label class="f5 text-normal">
                          <input type="checkbox" name="thread_types[]" value="Release" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                          Releases
                        </label>

                      </div>
                      <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                        <label class="f5 text-normal">
                          <input type="checkbox" name="thread_types[]" value="Discussion" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated" aria-describedby="Discussion-disabled" aria-disabled="true">
                          Discussions
                        </label>

                          <div id="Discussion-repository-details-disabled" class="color-fg-muted">
                            Discussions are not enabled for this repository
                          </div>
                      </div>
                      <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                        <label class="f5 text-normal">
                          <input type="checkbox" name="thread_types[]" value="SecurityAlert" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                          Security alerts
                        </label>

                      </div>
                  </fieldset>
                  <div class="pt-2 pb-3 px-3 d-flex flex-justify-start flex-row-reverse">
                      <button name="do" value="custom" data-target="notifications-list-subscription-form.customSubmit" type="submit" disabled="disabled" data-view-component="true" class="btn-primary btn-sm btn ml-2">    Apply
</button>
                      <button data-action="click:notifications-list-subscription-form#resetForm" data-close-dialog="" type="button" data-view-component="true" class="btn-sm btn">    Cancel
</button>
                  </div>
</form>              </div>
            </details-dialog>


            <div class="notifications-component-dialog-overlay"></div>
          </details>
        </notifications-list-subscription-form>



  </li>

  <li>
        <div data-view-component="true" class="d-flex">
        <div data-view-component="true" class="position-relative d-inline-block">
    <button icon="repo-forked" id="fork-button" aria-disabled="true" type="button" data-view-component="true" class="btn-sm btn BtnGroup-item border-right-0" aria-describedby="tooltip-1f968089-02fc-4eb4-a7f7-13e4f80736e3">      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-2">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>Fork
        <span id="repo-network-counter" data-pjax-replace="true" data-turbo-replace="true" title="0" data-view-component="true" class="Counter">0</span>
</button>    <tool-tip id="tooltip-1f968089-02fc-4eb4-a7f7-13e4f80736e3" for="fork-button" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Cannot fork because you own this repository and are not a member of any organizations.</tool-tip>
</div>
      <details group_item="true" id="my-forks-menu-713689438" data-view-component="true" class="details-reset details-overlay BtnGroup-parent d-inline-block position-relative">
              <summary aria-label="See your forks of this repository" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/Tharakeswar9515/software-engineering-192211770/my_forks_menu_content?can_fork=false" role="menu" data-focus-trap="suspended"><span class="sentinel" tabindex="0" aria-hidden="true"></span>
    <div class="SelectMenu-modal">
        <button class="SelectMenu-closeButton position-absolute right-0 m-2" type="button" aria-label="Close menu" data-toggle-for="my-forks-menu-713689438">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </button>
      <div id="filter-menu-c5d749" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment class="SelectMenu-loading" aria-label="Loading"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
              <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
            </include-fragment>
        </div>
        
      </div>
    </div>
  <span class="sentinel" tabindex="0" aria-hidden="true"></span></details-menu>
</details></div>
  </li>

  <li>
        <template class="js-unstar-confirmation-dialog-template"></template>

  <div data-view-component="true" class="js-toggler-container js-social-container starring-container d-flex">
    <div data-view-component="true" class="starred BtnGroup flex-1 ml-0">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-social-form BtnGroup-parent flex-auto js-deferred-toggler-target" data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="YbZlDZVg47dzKQdWfdm4blMD5zZJFqaDBwcHKL8pEbblnc1BBpN4Ke7Ih8AngTDyPkPLrVmAVubqp7ZaKn79uw" autocomplete="off">
          <input type="hidden" value="6CBQl9HTIkz-THuuZl33JkWwc_8zJeFQ4GTVabIYVHtsC_jbQiC50mOt-zg8BX-6KPBfZCOzETUNxGQbJ0-4dg" data-csrf="true" class="js-confirm-csrf-token">
        <input type="hidden" name="context" value="repository">
          <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="e6163c2a6d04f6d39a46f75596eccf83ae60d6bef7f6e44f4b93c668f8152b1d" data-ga-click="Repository, click unstar button, action:files#disambiguate; text:Unstar" aria-label="Unstar this repository (0)" type="submit" data-view-component="true" class="rounded-left-2 btn-sm btn BtnGroup-item">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star-fill starred-button-icon d-inline-block mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Z"></path>
</svg><span data-view-component="true" class="d-inline">
              Starred
</span>              <span id="repo-stars-counter-unstar" aria-label="0 users starred this repository" data-singular-suffix="user starred this repository" data-plural-suffix="users starred this repository" data-turbo-replace="true" title="0" data-view-component="true" class="Counter js-social-count">0</span>
</button></form>        <details id="details-user-list-713689438-starred" data-view-component="true" class="details-reset details-overlay BtnGroup-parent js-user-list-menu d-inline-block position-relative">
        <summary aria-label="Add this repository to a list" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/Tharakeswar9515/software-engineering-192211770/lists" role="menu" data-focus-trap="suspended"><span class="sentinel" tabindex="0" aria-hidden="true"></span>
    <div class="SelectMenu-modal">
        <header class="SelectMenu-header">
                <h4 class="SelectMenu-title f5" id="user-lists-menu">Lists</h4>

          <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-toggle-for="details-user-list-713689438-starred">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
          </button>
        </header>
      <div id="filter-menu-8c00fe" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment class="SelectMenu-loading" aria-label="Loading"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
              <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
            </include-fragment>
        </div>
        
      </div>
    </div>
  <span class="sentinel" tabindex="0" aria-hidden="true"></span></details-menu>
</details>
</div>
    <div data-view-component="true" class="unstarred BtnGroup ml-0 flex-1">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-social-form BtnGroup-parent flex-auto" data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="lWcS0ldBcEfPvFBOAS7Pc2f0NAaFncOauIMN-KZjBtW3nQv6VxuyTBSut6VTicJv1Xk0QQnRvOUrRsMIWMzZlw" autocomplete="off">
        <input type="hidden" name="context" value="repository">
          <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="1a7dada3f60c5345293ea6ec986c8d4d816b4f82db9c2e6ba4ef84ed320d590d" data-ga-click="Repository, click star button, action:files#disambiguate; text:Star" aria-label="Star this repository (0)" type="submit" data-view-component="true" class="js-toggler-target rounded-left-2 btn-sm btn BtnGroup-item">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star d-inline-block mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg><span data-view-component="true" class="d-inline">
              Star
</span>              <span id="repo-stars-counter-star" aria-label="0 users starred this repository" data-singular-suffix="user starred this repository" data-plural-suffix="users starred this repository" data-turbo-replace="true" title="0" data-view-component="true" class="Counter js-social-count">0</span>
</button></form>        <details id="details-user-list-713689438-unstarred" data-view-component="true" class="details-reset details-overlay BtnGroup-parent js-user-list-menu d-inline-block position-relative">
        <summary aria-label="Add this repository to a list" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/Tharakeswar9515/software-engineering-192211770/lists" role="menu" data-focus-trap="suspended"><span class="sentinel" tabindex="0" aria-hidden="true"></span>
    <div class="SelectMenu-modal">
        <header class="SelectMenu-header">
                <h4 class="SelectMenu-title f5" id="user-lists-menu">Lists</h4>

          <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-toggle-for="details-user-list-713689438-unstarred">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
          </button>
        </header>
      <div id="filter-menu-b1cbda" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment class="SelectMenu-loading" aria-label="Loading"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
              <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
            </include-fragment>
        </div>
        
      </div>
    </div>
  <span class="sentinel" tabindex="0" aria-hidden="true"></span></details-menu>
</details>
</div></div>
  </li>

</ul>

        </div>
      </div>

        <div class=" container-xl ">
          <div id="responsive-meta-container" data-turbo-replace="">
      <div class="d-block d-md-none mb-2 px-3 px-md-4 px-lg-5">
        <div class="d-flex gap-2 mt-n3 mb-3 flex-wrap">
          <div class="d-flex flex-row gap-2">
                <notifications-list-subscription-form data-action="notifications-dialog-label-toggled:notifications-list-subscription-form#handleDialogLabelToggle" data-catalyst="">
      <details class="details-reset details-overlay details-overlay-dark" data-target="notifications-list-subscription-form.details" data-action="toggle:notifications-list-subscription-form#detailsToggled">
          <summary id="notifications-button" aria-label="Notifications" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="5b62b14a6536ad36a0e0c6bdc8ecc9d8055cea9855d36c57700ebeb4aab8cb7d" data-ga-click="Repository, click Watch settings, action:files#disambiguate" data-view-component="true" class="Button--iconOnly Button--secondary Button--medium Button p-0" aria-describedby="tooltip-429457aa-6756-46d0-b63f-dd12cf047438" role="button">    <span class="Button-content">
      <span class="Button-label"><span data-menu-button="">
            <span data-target="notifications-list-subscription-form.unwatchButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
            </span>
            <span hidden="" data-target="notifications-list-subscription-form.stopIgnoringButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-bell-slash">
    <path d="m4.182 4.31.016.011 10.104 7.316.013.01 1.375.996a.75.75 0 1 1-.88 1.214L13.626 13H2.518a1.516 1.516 0 0 1-1.263-2.36l1.703-2.554A.255.255 0 0 0 3 7.947V5.305L.31 3.357a.75.75 0 1 1 .88-1.214Zm7.373 7.19L4.5 6.391v1.556c0 .346-.102.683-.294.97l-1.703 2.556a.017.017 0 0 0-.003.01c0 .005.002.009.005.012l.006.004.007.001ZM8 1.5c-.997 0-1.895.416-2.534 1.086A.75.75 0 1 1 4.38 1.55 5 5 0 0 1 13 5v2.373a.75.75 0 0 1-1.5 0V5A3.5 3.5 0 0 0 8 1.5ZM8 16a2 2 0 0 1-1.985-1.75c-.017-.137.097-.25.235-.25h3.5c.138 0 .252.113.235.25A2 2 0 0 1 8 16Z"></path>
</svg>
            </span>
            <span hidden="" data-target="notifications-list-subscription-form.watchButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
            </span>
          </span></span>
    </span>
</summary>  

        <details-dialog aria-label="Notification settings" class="anim-fade-in fast Box Box--overlay" role="dialog" aria-modal="true">
          <div data-target="notifications-list-subscription-form.menu">
            <div class="Box-header">
              <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog="" data-action="click:notifications-list-subscription-form#closeMenu">
                <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
              </button>
              <h3 class="Box-title">
                Notifications
              </h3>
            </div>

            <div class="SelectMenu-list mb-0" role="menu">
              <!-- '"` --><!-- </textarea></xmp> --><form data-target="notifications-list-subscription-form.form" data-action="submit:notifications-list-subscription-form#submitForm" data-turbo="false" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="chsXmD_ax3RooaOHJGfzxfangFqjcKzMN1NyILKWXJM4SwAB3ehgr_szCL6n1UPEbZjYeN5Zhd3G6kW6Rl_j8Q" autocomplete="off">

                <input type="hidden" name="repository_id" value="713689438">

                <button type="submit" name="do" value="included" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      Participating and @mentions
                    </div>
                    <div class="text-small color-fg-muted text-normal pb-1">
                      Only receive notifications from this repository when participating or @mentioned.
                    </div>
                  </div>
                </button>

                <button type="submit" name="do" value="subscribed" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="true" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      All Activity
                    </div>
                    <div class="text-small color-fg-muted text-normal pb-1">
                      Notified of all notifications on this repository.
                    </div>
                  </div>
                </button>

                <button type="submit" name="do" value="ignore" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      Ignore
                    </div>
                    <div class="text-small color-fg-muted text-normal pb-1">
                      Never be notified.
                    </div>
                  </div>
                </button>
</form>
              <button class="SelectMenu-item flex-items-start pr-3" type="button" role="menuitemradio" data-target="notifications-list-subscription-form.customButton" data-action="click:notifications-list-subscription-form#openCustomDialog" aria-haspopup="true" aria-checked="false">
                <span class="f5">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
                </span>
                <div>
                  <div class="d-flex flex-items-start flex-justify-between">
                    <div class="f5 text-bold">Custom</div>
                    <div class="f5 pr-1">
                      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-right">
    <path d="M8.22 2.97a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l2.97-2.97H3.75a.75.75 0 0 1 0-1.5h7.44L8.22 4.03a.75.75 0 0 1 0-1.06Z"></path>
</svg>
                    </div>
                  </div>
                  <div class="text-small color-fg-muted text-normal pb-1">
                    Select events you want to be notified of in addition to participating and @mentions.
                  </div>
                </div>
              </button>

                <div class="px-3 py-2 d-flex color-bg-subtle flex-items-center">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-device-mobile SelectMenu-icon SelectMenu-icon--device-mobile">
    <path d="M3.75 0h8.5C13.216 0 14 .784 14 1.75v12.5A1.75 1.75 0 0 1 12.25 16h-8.5A1.75 1.75 0 0 1 2 14.25V1.75C2 .784 2.784 0 3.75 0ZM3.5 1.75v12.5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25ZM8 13a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path>
</svg>
                  </span>
                  <span classname="text-small color-fg-muted text-normal pb-1">
                    Get push notifications on <a target="_blank" rel="noopener noreferrer" href="https://apps.apple.com/app/apple-store/id1477376905?ct=watch-dropdown&amp;mt=8&amp;pt=524675">iOS</a> or <a target="_blank" rel="noopener noreferrer" href="https://play.google.com/store/apps/details?id=com.github.android&amp;referrer=utm_campaign%3Dwatch-dropdown%26utm_medium%3Dweb%26utm_source%3Dgithub">Android</a>.
                  </span>
                </div>
            </div>
          </div>

          <div data-target="notifications-list-subscription-form.customDialog" hidden="">
            <header class="SelectMenu-header pb-0 border-bottom-0 px-2 px-sm-3">
              <h1 class="f3 SelectMenu-title d-inline-flex">
                <button class="color-bg-default border-0 px-2 py-0 m-0 Link--secondary f5" aria-label="Return to menu" type="button" data-action="click:notifications-list-subscription-form#closeCustomDialog">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-left">
    <path d="M7.78 12.53a.75.75 0 0 1-1.06 0L2.47 8.28a.75.75 0 0 1 0-1.06l4.25-4.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L4.81 7h7.44a.75.75 0 0 1 0 1.5H4.81l2.97 2.97a.75.75 0 0 1 0 1.06Z"></path>
</svg>
                </button>
                Custom
                </h1>
            </header>
            <div class="overflow-visible">
              <!-- '"` --><!-- </textarea></xmp> --><form data-target="notifications-list-subscription-form.customform" data-action="submit:notifications-list-subscription-form#submitCustomForm" data-turbo="false" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="xKQxqHvFMISMonKweYM6pUOvF9iVfkPgROyqW51U6-CO9CYxmfeXXx8w2Yn6MYqk2JBP-uhXavG1VZ3BaZ1Ugg" autocomplete="off">

                <input type="hidden" name="repository_id" value="713689438">

                <fieldset>
                  <legend>
                    <div class="text-small color-fg-muted pt-0 pr-3 pb-3 pl-6 pl-sm-5 border-bottom mb-3">
                      Select events you want to be notified of in addition to participating and @mentions.
                    </div>
                  </legend>
                  <div data-target="notifications-list-subscription-form.labelInputs">
                  </div>
                    <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                      <label class="f5 text-normal">
                        <input type="checkbox" name="thread_types[]" value="Issue" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                        Issues
                      </label>

                    </div>
                    <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                      <label class="f5 text-normal">
                        <input type="checkbox" name="thread_types[]" value="PullRequest" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                        Pull requests
                      </label>

                    </div>
                    <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                      <label class="f5 text-normal">
                        <input type="checkbox" name="thread_types[]" value="Release" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                        Releases
                      </label>

                    </div>
                    <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                      <label class="f5 text-normal">
                        <input type="checkbox" name="thread_types[]" value="Discussion" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated" aria-describedby="Discussion-disabled" aria-disabled="true">
                        Discussions
                      </label>

                        <div id="Discussion-disabled" class="color-fg-muted">&gt;
                          Discussions are not enabled for this repository
                        </div>
                    </div>
                    <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                      <label class="f5 text-normal">
                        <input type="checkbox" name="thread_types[]" value="SecurityAlert" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                        Security alerts
                      </label>

                    </div>
                </fieldset>
                <div class="pt-2 pb-3 px-3 d-flex flex-justify-start flex-row-reverse">
                    <button name="do" value="custom" data-target="notifications-list-subscription-form.customSubmit" type="submit" disabled="disabled" data-view-component="true" class="Button--primary Button--medium Button ml-2">    <span class="Button-content">
      <span class="Button-label">Apply</span>
    </span>
</button>  


                    <button data-action="click:notifications-list-subscription-form#resetForm" data-close-dialog="" type="button" data-view-component="true" class="Button--secondary Button--medium Button">    <span class="Button-content">
      <span class="Button-label">Cancel</span>
    </span>
</button>  

                </div>
</form>            </div>
          </div>
        </details-dialog>

      </details>
      <tool-tip id="tooltip-429457aa-6756-46d0-b63f-dd12cf047438" for="notifications-button" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Notification settings</tool-tip>
    </notifications-list-subscription-form>



              <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="Button-withTooltip">
  <a id="fork-icon-button" variant="small" group_item="true" href="https://github.com/Tharakeswar9515/software-engineering-192211770/fork" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="4d1981bfe9417594773ee395ce9ad0e0ef91b410079f8ef9b412633a59e9f4c7" data-ga-click="Repository, show fork modal, action:files#disambiguate; text:Fork" aria-labelledby="tooltip-7ed5b844-2a36-408f-b784-0143bbf996a0" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium border-right-0">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked Button-visual">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
</a>  <tool-tip id="tooltip-7ed5b844-2a36-408f-b784-0143bbf996a0" for="fork-icon-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Fork your own copy of Tharakeswar9515/software-engineering-192211770</tool-tip>
</div>
</div>
              <div data-view-component="true" class="js-toggler-container starring-container">
    <!-- '"` --><!-- </textarea></xmp> --><form class="starred js-social-form" data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="hTUcakUmnWGIM4BUs9zzB8ckE4fe1AcgKTGcJl25gBgBHrQm1tUG_xXSAMLphHubqmQ_HM5C90XEkS1UyO5sFQ" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <div data-view-component="true" class="Button-withTooltip">
  <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="e6163c2a6d04f6d39a46f75596eccf83ae60d6bef7f6e44f4b93c668f8152b1d" data-ga-click="Repository, click unstar button, action:files#disambiguate; text:Unstar" id="icon-button-2cef9a78-14d2-4dfd-b20c-bdd4ce1e4c1a" aria-labelledby="tooltip-beb7873d-e9af-4949-a138-edf3a2d12bb6" type="submit" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium js-toggler-target starred-button-icon">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star-fill Button-visual">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Z"></path>
</svg>
</button>  <tool-tip id="tooltip-beb7873d-e9af-4949-a138-edf3a2d12bb6" for="icon-button-2cef9a78-14d2-4dfd-b20c-bdd4ce1e4c1a" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Unstar this repository</tool-tip>
</div>
</form>
    <!-- '"` --><!-- </textarea></xmp> --><form class="unstarred js-social-form" data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="QYk50VpzhICaxA7b33KYR4voVJ3U6WSsYavQmgXh-G5jcyD5WilGi0HW6TCN1ZVbOWVU2lilG9Pybh5q-04nLA" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <div data-view-component="true" class="Button-withTooltip">
  <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="1a7dada3f60c5345293ea6ec986c8d4d816b4f82db9c2e6ba4ef84ed320d590d" data-ga-click="Repository, click star button, action:files#disambiguate; text:Star" id="icon-button-21b7bf61-9b94-42c6-8aba-e174c8a90eac" aria-labelledby="tooltip-d871bdfe-d5d5-4040-9435-a07e2ca4dd48" type="submit" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium js-toggler-target">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star Button-visual">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
</button>  <tool-tip id="tooltip-d871bdfe-d5d5-4040-9435-a07e2ca4dd48" for="icon-button-21b7bf61-9b94-42c6-8aba-e174c8a90eac" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--fgColor-onEmphasis, var(--color-fg-on-emphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tool-tip-position-top, 0) auto auto var(--tool-tip-position-left, 0) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host:before{
        position: absolute;
        z-index: 1000001;
        color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
        content: "";
        border: 6px solid transparent;
        opacity: 0;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: 12px;
        content: "";
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open),
      :host(.\:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
        animation-delay: .4s;
      }

      :host(.tooltip-s):before,
      :host(.tooltip-n):before {
        right: 50%;
        margin-right: -6px;
      }
      :host(.tooltip-s):before,
      :host(.tooltip-se):before,
      :host(.tooltip-sw):before {
        bottom: 100%;
        border-bottom-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }
      :host(.tooltip-n):before,
      :host(.tooltip-ne):before,
      :host(.tooltip-nw):before {
        top: 100%;
        border-top-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }
      :host(.tooltip-se):before,
      :host(.tooltip-ne):before {
        left: 0;
        margin-left: 6px;
      }
      :host(.tooltip-sw):before,
      :host(.tooltip-nw):before {
        right: 0;
        margin-right: 6px;
      }
      :host(.tooltip-w):before {
        top: 50%;
        bottom: 50%;
        left: 100%;
        margin-top: -6px;
        border-left-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
      :host(.tooltip-e):before {
        top: 50%;
        right: 100%;
        bottom: 50%;
        margin-top: -6px;
        border-right-color: var(--bgColor-emphasis, var(--color-neutral-emphasis-plus));
      }
    </style><slot></slot></template>Star this repository</tool-tip>
</div>
</form></div>
          </div>
        </div>

    

    <div class="mb-3">
        

<ul class="d-flex flex-wrap mb-2 gap-2" aria-label="Repository details">
  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="https://github.com/Tharakeswar9515/software-engineering-192211770/stargazers">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star mr-1">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
    <span class="text-bold color-fg-default">0</span>
    stars
</a>  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="https://github.com/Tharakeswar9515/software-engineering-192211770/forks">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-1">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
    <span class="text-bold color-fg-default">0</span>
    forks
</a>  <div class="color-fg-muted mr-2" role="listitem">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye mr-1">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
    <span class="text-bold color-fg-default">1</span>
    watching
  </div>
  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="https://github.com/Tharakeswar9515/software-engineering-192211770/activity">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pulse mr-1">
    <path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.751.751 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.751.751 0 0 1 6 2Z"></path>
</svg>
    <span>Activity</span>
</a>
</ul>

<div class="mb-2 d-flex color-fg-muted">
  <div class="d-flex flex-items-center" style="height: 21px">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-globe flex-shrink-0 mr-2">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM5.78 8.75a9.64 9.64 0 0 0 1.363 4.177c.255.426.542.832.857 1.215.245-.296.551-.705.857-1.215A9.64 9.64 0 0 0 10.22 8.75Zm4.44-1.5a9.64 9.64 0 0 0-1.363-4.177c-.307-.51-.612-.919-.857-1.215a9.927 9.927 0 0 0-.857 1.215A9.64 9.64 0 0 0 5.78 7.25Zm-5.944 1.5H1.543a6.507 6.507 0 0 0 4.666 5.5c-.123-.181-.24-.365-.352-.552-.715-1.192-1.437-2.874-1.581-4.948Zm-2.733-1.5h2.733c.144-2.074.866-3.756 1.58-4.948.12-.197.237-.381.353-.552a6.507 6.507 0 0 0-4.666 5.5Zm10.181 1.5c-.144 2.074-.866 3.756-1.58 4.948-.12.197-.237.381-.353.552a6.507 6.507 0 0 0 4.666-5.5Zm2.733-1.5a6.507 6.507 0 0 0-4.666-5.5c.123.181.24.365.353.552.714 1.192 1.436 2.874 1.58 4.948Z"></path>
</svg>
  </div>
  <span class="flex-auto min-width-0 width-fit">
    Public repository
  </span>
</div>

    </div>

  </div>

</div>

          <div class="border-bottom  mx-xl-5 "></div>
        </div>

  </div>




<turbo-frame id="repo-content-turbo-frame" target="_top" data-turbo-action="advance" class="">
    <div id="repo-content-pjax-container" class="repository-content ">
      <a href="https://github.dev/" class="d-none js-github-dev-shortcut" data-hotkey=".,Alt+Meta+≥,Control+Alt+.">Open in github.dev</a>
  <a href="https://github.dev/" class="d-none js-github-dev-new-tab-shortcut" data-hotkey="Shift+.,Shift+&gt;,&gt;" target="_blank" rel="noopener noreferrer">Open in a new github.dev tab</a>
    <a class="d-none" data-hotkey=",,Alt+Meta+≤,Control+Alt+," target="_blank" href="https://github.com/codespaces/new/Tharakeswar9515/software-engineering-192211770?resume=1">Open in codespace</a>



    
      
  <h1 class="sr-only">Tharakeswar9515/software-engineering-192211770</h1>
  <div class="clearfix container-xl px-md-4 px-lg-5 px-3 mt-4">
    <div>
  


  <div id="spoof-warning" class="mt-0 pb-3" hidden="" aria-hidden="">
  <div data-view-component="true" class="flash flash-warn mt-0 clearfix">
  
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert float-left mt-1">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>

      <div class="overflow-hidden">This commit does not belong to any branch on this repository, and may belong to a fork outside of the repository.</div>


  
</div></div>

  



  <div style="max-width: 100%" data-view-component="true" class="Layout Layout--flowRow-until-md Layout--sidebarPosition-end Layout--sidebarPosition-flowRow-end">
  <div data-view-component="true" class="Layout-main">        
        
              <div class="js-socket-channel js-updatable-content" data-channel="eyJjIjoicmVwbzo3MTM2ODk0Mzg6cG9zdC1yZWNlaXZlOjEyMjUxMDI1NSIsInQiOjE2OTkwNzk2OTF9--756ce850bc856a36e958a5150b7dd018e9bfaa0359e1aff16b354f1ad496f127" data-url="/Tharakeswar9515/software-engineering-192211770/show_partial?partial=tree%2Frecently_touched_branches_list">
    </div>

        <div class="file-navigation mb-3 d-flex flex-items-start">
  
<div class="position-relative">
  <details class="js-branch-select-menu details-reset details-overlay mr-0 mb-0 " id="branch-select-menu" data-hydro-click-payload="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;REFS_SELECTOR_MENU&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="ace17442de86b6d04951dc1777520a0ff08e51937641d50844ea81be3698f76f">
    <summary class="btn css-truncate" data-hotkey="w" title="Switch branches or tags">
      <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-branch">
    <path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path>
</svg>
      <span class="css-truncate-target" data-menu-button="">main</span>
      <span class="dropdown-caret"></span>
    </summary>

    
<div class="SelectMenu">
  <div class="SelectMenu-modal">
    <header class="SelectMenu-header">
      <span class="SelectMenu-title">Switch branches/tags</span>
      <button class="SelectMenu-closeButton" type="button" data-toggle-for="branch-select-menu"><svg aria-label="Close menu" aria-hidden="false" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </header>

    <input-demux data-action="tab-container-change:input-demux#storeInput tab-container-changed:input-demux#updateInput" data-catalyst="">
      <tab-container class="d-flex flex-column js-branches-tags-tabs" style="min-height: 0;">
        <div class="SelectMenu-filter">
          <input data-target="input-demux.source" id="context-commitish-filter-field" class="SelectMenu-input form-control" aria-owns="ref-list-branches" data-controls-ref-menu-id="ref-list-branches" autofocus="" autocomplete="off" aria-label="Find or create a branch…" placeholder="Find or create a branch…" type="text">
        </div>

        <div class="SelectMenu-tabs" role="tablist" data-target="input-demux.control">
          <button class="SelectMenu-tab" type="button" role="tab" aria-selected="true" tabindex="0">Branches</button>
          <button class="SelectMenu-tab" type="button" role="tab" aria-selected="false" tabindex="-1">Tags</button>
        </div>

        <div role="tabpanel" id="ref-list-branches" data-filter-placeholder="Find or create a branch…" tabindex="" class="d-flex flex-column flex-auto overflow-auto">
          <ref-selector type="branch" data-targets="input-demux.sinks" data-action="
              input-entered:ref-selector#inputEntered
              tab-selected:ref-selector#tabSelected
              focus-list:ref-selector#focusFirstListMember
            " query-endpoint="/Tharakeswar9515/software-engineering-192211770/refs" can-create="" cache-key="v0:1698999211.0" current-committish="bWFpbg==" default-branch="bWFpbg==" name-with-owner="VGhhcmFrZXN3YXI5NTE1L3NvZnR3YXJlLWVuZ2luZWVyaW5nLTE5MjIxMTc3MA==" prefetch-on-mouseover="" data-catalyst="">

            <template data-target="ref-selector.fetchFailedTemplate"></template>

              <template data-target="ref-selector.noMatchTemplate"></template>


            <div data-target="ref-selector.listContainer" role="menu" class="SelectMenu-list " data-turbo-frame="repo-content-turbo-frame">
              <div class="SelectMenu-loading pt-3 pb-0 overflow-hidden" aria-label="Menu is loading">
                <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
              </div>
            </div>

              

<template data-target="ref-selector.itemTemplate"></template>


              <footer class="SelectMenu-footer"><a href="https://github.com/Tharakeswar9515/software-engineering-192211770/branches">View all branches</a></footer>
          </ref-selector>

        </div>

        <div role="tabpanel" id="tags-menu" data-filter-placeholder="Find a tag" tabindex="" hidden="" class="d-flex flex-column flex-auto overflow-auto">
          <ref-selector type="tag" data-action="
              input-entered:ref-selector#inputEntered
              tab-selected:ref-selector#tabSelected
              focus-list:ref-selector#focusFirstListMember
            " data-targets="input-demux.sinks" query-endpoint="/Tharakeswar9515/software-engineering-192211770/refs" cache-key="v0:1698999211.0" current-committish="bWFpbg==" default-branch="bWFpbg==" name-with-owner="VGhhcmFrZXN3YXI5NTE1L3NvZnR3YXJlLWVuZ2luZWVyaW5nLTE5MjIxMTc3MA==" data-catalyst="">

            <template data-target="ref-selector.fetchFailedTemplate"></template>

            <template data-target="ref-selector.noMatchTemplate"></template>

              

<template data-target="ref-selector.itemTemplate"></template>


            <div data-target="ref-selector.listContainer" role="menu" class="SelectMenu-list" data-turbo-frame="repo-content-turbo-frame">
              <div class="SelectMenu-loading pt-3 pb-0 overflow-hidden" aria-label="Menu is loading">
                <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
              </div>
            </div>
              <footer class="SelectMenu-footer"><a href="https://github.com/Tharakeswar9515/software-engineering-192211770/tags">View all tags</a></footer>
          </ref-selector>
        </div>
      </tab-container>
    </input-demux>
  </div>
</div>

  </details>

</div>


<div class="Overlay--hidden Overlay-backdrop--center" data-modal-dialog-overlay="">
  <modal-dialog role="dialog" id="warn-tag-match-create-branch-dialog" aria-modal="true" aria-labelledby="warn-tag-match-create-branch-dialog-header" data-view-component="true" class="Overlay Overlay--width-large Overlay--height-auto Overlay--motion-scaleFade">
      <header class="Overlay-header Overlay-header--large Overlay-header--divided">
        <div class="Overlay-headerContentWrap">
          <div class="Overlay-titleWrap">
            <h1 id="warn-tag-match-create-branch-dialog-header" class="Overlay-title">Name already in use</h1>
          </div>
          <div class="Overlay-actionWrap">
            <button data-close-dialog-id="warn-tag-match-create-branch-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
          </div>
        </div>
      </header>
    <div class="Overlay-body ">
      
          <div data-view-component="true">      A tag already exists with the provided branch name. Many Git commands accept both tag and branch names, so creating this branch may cause unexpected behavior. Are you sure you want to create this branch?
</div>

    </div>
      <footer class="Overlay-footer Overlay-footer--alignEnd">
            <button data-close-dialog-id="warn-tag-match-create-branch-dialog" type="button" data-view-component="true" class="btn">    Cancel
</button>
            <button data-submit-dialog-id="warn-tag-match-create-branch-dialog" type="button" data-view-component="true" class="btn-danger btn">    Create
</button>
      </footer>
</modal-dialog></div>



  <div class="flex-self-center flex-self-stretch d-none flex-items-center lh-condensed-ultra d-lg-flex">
    <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/branches" class="ml-3 Link--primary no-underline">
          <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-branch">
    <path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path>
</svg>
          <strong>1</strong>
          <span class="color-fg-muted">branch</span>
    </a>
    <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/tags" class="ml-3 Link--primary no-underline">
      <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-tag">
    <path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path>
</svg>
        <strong>0</strong>
        <span class="color-fg-muted">tags</span>
    </a>
  </div>

  <div class="flex-auto"></div>

  <a class="btn ml-2 d-none d-md-block" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FIND_FILE_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770/overview_actions/main&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="2bb39a623a939b5adcd7bdfabbd7aa69d69ae9cbe2f03ea951bf9ac6c7dc012b" data-ga-click="Repository, find file, location:repo overview" data-hotkey="t" href="https://github.com/Tharakeswar9515/software-engineering-192211770?search=1">
  Go to file
</a>
    <details data-view-component="true" class="details-overlay details-reset position-relative d-block">
      <summary role="button" data-view-component="true" class="btn ml-2">    <span class="d-none d-md-flex flex-items-center">
        Add file
        <span class="dropdown-caret ml-1"></span>
      </span>
      <span class="d-inline-block d-md-none">
        <svg aria-label="More options" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path>
</svg>
      </span>
</summary>
    <div data-view-component="true">      <ul class="dropdown-menu dropdown-menu-sw">
        <li class="d-block d-md-none">
          <a class="dropdown-item" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FIND_FILE_BUTTON&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770/overview_actions/main&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="2bb39a623a939b5adcd7bdfabbd7aa69d69ae9cbe2f03ea951bf9ac6c7dc012b" data-ga-click="Repository, find file, location:repo overview" data-hotkey="t" href="https://github.com/Tharakeswar9515/software-engineering-192211770?search=1">
            Go to file
</a>        </li>
          <li class="d-block d-md-none dropdown-divider" role="none"></li>
          <li><!-- '"` --><!-- </textarea></xmp> --><form data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/new/main" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="NYtKFSQ4qPJm4gn7CDhMXR-kIz1ualdMFsiIkp7dsa2Ytpg9nzgswfE1lktKMy42dOD7La0mKhZzS9xn_wvodQ">
    <button type="submit" data-view-component="true" class="dropdown-item btn-link">    Create new file
</button></form></li>

          <li><a href="https://github.com/Tharakeswar9515/software-engineering-192211770/upload/main" class="dropdown-item">
  Upload files
</a></li>

      </ul>
</div>
</details>


    <span class="d-none d-md-flex ml-2">
        
<get-repo class="" data-catalyst="">
  <details class="position-relative details-overlay details-reset js-codespaces-details-container hx_dropdown-fullscreen" data-action="
              toggle:get-repo#onDetailsToggle
              keydown:get-repo#onDetailsKeydown">
      <summary data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;repository_id&quot;:713689438,&quot;target&quot;:&quot;CLONE_OR_DOWNLOAD_BUTTON&quot;,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="776c75d3d842f622bd14b6c6d33369bcabc915dd7c7e5811d6ec28845e6510bc" data-view-component="true" class="Button--primary Button--medium Button flex-1 d-inline-flex">    <span class="Button-content">
        <span class="Button-visual Button-leadingVisual">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </span>
      <span class="Button-label">Code</span>
    </span>
      <span class="Button-visual Button-trailingAction">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
      </span>
</summary>  
    <div class="position-relative">
      <div class="dropdown-menu dropdown-menu-sw p-0" style="top:6px;width:400px;max-width: calc(100vw - 320px);">
        <div data-target="get-repo.modal">
    <tab-container data-view-component="true">
  <div with_panel="true" data-view-component="true" class="tabnav hx_tabnav-in-dropdown color-bg-subtle m-0">
    
    <ul role="tablist" aria-label="Choose where to access your code" data-view-component="true" class="tabnav-tabs d-flex">
        <li role="presentation" data-view-component="true" class="hx_tabnav-in-dropdown-wrapper flex-1 d-inline-flex">
  <button data-tab="local" data-action="click:get-repo#localTabSelected focusin:get-repo#localTabSelected" id="local-tab" type="button" role="tab" aria-controls="local-panel" aria-selected="true" data-view-component="true" class="tabnav-tab flex-1" tabindex="0">
    
      <span data-view-component="true">Local</span>
    
</button></li>
        <li role="presentation" data-view-component="true" class="hx_tabnav-in-dropdown-wrapper flex-1 d-inline-flex">
  <button data-tab="cloud" data-action="click:get-repo#cloudTabSelected focusin:get-repo#cloudTabSelected" id="cloud-tab" type="button" role="tab" aria-controls="cloud-panel" data-view-component="true" class="tabnav-tab flex-1" aria-selected="false" tabindex="-1">
    
      <span data-view-component="true">          <span>Codespaces</span>
</span>
    
</button></li>
</ul>    
</div>    <div id="local-panel" role="tabpanel" tabindex="0" aria-labelledby="local-tab" data-view-component="true">          <ul class="list-style-none">
              <li class="Box-row p-3">
  <a class="Link--muted float-right tooltipped tooltipped-w" href="https://docs.github.com/articles/which-remote-url-should-i-use" rel="noopener" target="_blank" aria-label="Which remote URL should I use?">
  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-question">
    <path d="M0 8a8 8 0 1 1 16 0A8 8 0 0 1 0 8Zm8-6.5a6.5 6.5 0 1 0 0 13 6.5 6.5 0 0 0 0-13ZM6.92 6.085h.001a.749.749 0 1 1-1.342-.67c.169-.339.436-.701.849-.977C6.845 4.16 7.369 4 8 4a2.756 2.756 0 0 1 1.637.525c.503.377.863.965.863 1.725 0 .448-.115.83-.329 1.15-.205.307-.47.513-.692.662-.109.072-.22.138-.313.195l-.006.004a6.24 6.24 0 0 0-.26.16.952.952 0 0 0-.276.245.75.75 0 0 1-1.248-.832c.184-.264.42-.489.692-.661.103-.067.207-.132.313-.195l.007-.004c.1-.061.182-.11.258-.161a.969.969 0 0 0 .277-.245C8.96 6.514 9 6.427 9 6.25a.612.612 0 0 0-.262-.525A1.27 1.27 0 0 0 8 5.5c-.369 0-.595.09-.74.187a1.01 1.01 0 0 0-.34.398ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
</a>

<div class="text-bold">
  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-terminal mr-2">
    <path d="M0 2.75C0 1.784.784 1 1.75 1h12.5c.966 0 1.75.784 1.75 1.75v10.5A1.75 1.75 0 0 1 14.25 15H1.75A1.75 1.75 0 0 1 0 13.25Zm1.75-.25a.25.25 0 0 0-.25.25v10.5c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25V2.75a.25.25 0 0 0-.25-.25ZM7.25 8a.749.749 0 0 1-.22.53l-2.25 2.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L5.44 8 3.72 6.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.25 2.25c.141.14.22.331.22.53Zm1.5 1.5h3a.75.75 0 0 1 0 1.5h-3a.75.75 0 0 1 0-1.5Z"></path>
</svg>
  Clone
</div>

<tab-container>
    <!-- '"` --><!-- </textarea></xmp> --><form class="js-new-badge-autodismiss" data-turbo="false" action="https://github.com/settings/dismiss-notice/gh_cli_new" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="aJavE78CsjooQ4vRgeO8uS9GgaqGt1UaKnwyXPPXxvzg_NGh-4nGCH9oEFc2dcx9gmXoqAh1ZpD-6XEYIIW79g">
</form>
  <div class="UnderlineNav my-2 box-shadow-none">
    <div class="UnderlineNav-body" role="tablist">
          <!-- '"` --><!-- </textarea></xmp> --><form data-remote="true" data-turbo="false" action="https://github.com/users/set_protocol?protocol_type=push" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="iK62LBJAmpOpNI7YkpAo4eTtD9PttiXiomSO5XM8LpO3mjOWYDEyE8fck1i6mxajYkvJrhcwOBFGvYd2FrFiTA">
            <button name="protocol_selector" type="submit" role="tab" class="UnderlineNav-item" aria-selected="true" value="http" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;USE_HTTPS&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="5b68a987394d93a75cc0cbbe729bc873bbec253c4fcba48b51e2cad77a43bca2" tabindex="0">
              HTTPS
</button></form>          <!-- '"` --><!-- </textarea></xmp> --><form data-remote="true" data-turbo="false" action="https://github.com/users/set_protocol?protocol_type=push" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="fOoz_iawR_iA6brPXEcQXb1PJwS9aSOhUPleJ4wkOC9D3rZEVMHveO4Bp090TC4fO-nheUfvPlK0IFe06al08A">
            <button name="protocol_selector" type="submit" role="tab" class="UnderlineNav-item" value="ssh" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;USE_SSH&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="d8ad46d30d7a259503bcc1ef2cbb9295825178d3bf3e5ea9349569435c101dc1" aria-selected="false" tabindex="-1">
              SSH
</button></form>          <!-- '"` --><!-- </textarea></xmp> --><form data-remote="true" data-turbo="false" action="https://github.com/users/set_protocol?protocol_type=push" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="duZwT9acsA4Qoetc1ej3_c8HEQ4FoeBdl84L6rGruhlJ0vX1pO0Yjn5J9tz948m_SaHXc_8n_a5zFwJ51Cb2xg">
            <button name="protocol_selector" type="submit" role="tab" class="UnderlineNav-item" value="gh_cli" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;USE_GH_CLI&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="e8b2ef47eb5a61e3751ca441034df9d7553b6f813668d4b6cd5d9f976b51534b" aria-selected="false" tabindex="-1">
              GitHub CLI
                <span data-view-component="true" class="Label lh-condensed Label--success Label--inline ml-2 px-1">New</span>
</button></form>    </div>
  </div>

  <div role="tabpanel">
    <div class="input-group">
  <input type="text" class="form-control input-monospace input-sm color-bg-subtle" data-autoselect="" value="https://github.com/Tharakeswar9515/software-engineering-192211770.git" aria-label="https://github.com/Tharakeswar9515/software-engineering-192211770.git" readonly="">
  <div class="input-group-button">
    <clipboard-copy value="https://github.com/Tharakeswar9515/software-engineering-192211770.git" aria-label="Copy to clipboard" class="btn btn-sm js-clipboard-copy tooltipped-no-delay ClipboardButton js-clone-url-http" data-copy-feedback="Copied!" data-tooltip-direction="n" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;COPY_URL&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="6d282f763d51b648a35e0c1e065814709973047135fe9285e87d7887d3d94f91" tabindex="0" role="button"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon d-inline-block">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-inline-block d-sm-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg></clipboard-copy>
  </div>
</div>

    <p class="mt-2 mb-0 f6 color-fg-muted">
        Use Git or checkout with SVN using the web URL.
    </p>
  </div>

  <div role="tabpanel" hidden="">
      <div data-view-component="true" class="f6 flash flash-warn mt-2 mb-3 p-3">
  
        You don't have any public SSH keys in your GitHub account.
        You can <a class="Link--inTextBlock" href="https://github.com/settings/ssh/new">add a new public key</a>, or try cloning this repository via HTTPS.


  
</div>
    <div class="input-group">
  <input type="text" class="form-control input-monospace input-sm color-bg-subtle" data-autoselect="" value="git@github.com:Tharakeswar9515/software-engineering-192211770.git" aria-label="git@github.com:Tharakeswar9515/software-engineering-192211770.git" readonly="">
  <div class="input-group-button">
    <clipboard-copy value="git@github.com:Tharakeswar9515/software-engineering-192211770.git" aria-label="Copy to clipboard" class="btn btn-sm js-clipboard-copy tooltipped-no-delay ClipboardButton js-clone-url-ssh" data-copy-feedback="Copied!" data-tooltip-direction="n" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;COPY_URL&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="6d282f763d51b648a35e0c1e065814709973047135fe9285e87d7887d3d94f91" tabindex="0" role="button"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon d-inline-block">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-inline-block d-sm-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg></clipboard-copy>
  </div>
</div>

    <p class="mt-2 mb-0 f6 color-fg-muted">
        Use a password-protected SSH key.
    </p>
  </div>

  <div role="tabpanel" hidden="">
    <div class="input-group">
  <input type="text" class="form-control input-monospace input-sm color-bg-subtle" data-autoselect="" value="gh repo clone Tharakeswar9515/software-engineering-192211770" aria-label="gh repo clone Tharakeswar9515/software-engineering-192211770" readonly="">
  <div class="input-group-button">
    <clipboard-copy value="gh repo clone Tharakeswar9515/software-engineering-192211770" aria-label="Copy to clipboard" class="btn btn-sm js-clipboard-copy tooltipped-no-delay ClipboardButton js-clone-url-gh-cli" data-copy-feedback="Copied!" data-tooltip-direction="n" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;COPY_URL&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="6d282f763d51b648a35e0c1e065814709973047135fe9285e87d7887d3d94f91" tabindex="0" role="button"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon d-inline-block">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-inline-block d-sm-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg></clipboard-copy>
  </div>
</div>

    <p class="mt-2 mb-0 f6 color-fg-muted">
      Work fast with our official CLI.
      <a class="Link--inTextBlock" href="https://cli.github.com/" target="_blank">Learn more about the CLI</a>.
    </p>
  </div>
</tab-container>

</li>
<li data-platforms="windows,mac" class="Box-row Box-row--hover-gray p-3 mt-0 f5 rounded-0 js-remove-unless-platform">
  <a class="d-flex flex-items-center color-fg-default text-bold no-underline" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;OPEN_IN_DESKTOP&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="5fb215dda14b2fcb05009c643f1e8c62ce824ee9b684dece6f4affc20c0bfad7" data-action="click:get-repo#showDownloadMessage" href="https://desktop.github.com/">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-desktop-download mr-2">
    <path d="m4.927 5.427 2.896 2.896a.25.25 0 0 0 .354 0l2.896-2.896A.25.25 0 0 0 10.896 5H8.75V.75a.75.75 0 1 0-1.5 0V5H5.104a.25.25 0 0 0-.177.427Z"></path><path d="M1.573 2.573a.25.25 0 0 0-.073.177v7.5a.25.25 0 0 0 .25.25h12.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25h-3a.75.75 0 1 1 0-1.5h3A1.75 1.75 0 0 1 16 2.75v7.5A1.75 1.75 0 0 1 14.25 12h-3.727c.099 1.041.52 1.872 1.292 2.757A.75.75 0 0 1 11.25 16h-6.5a.75.75 0 0 1-.565-1.243c.772-.885 1.192-1.716 1.292-2.757H1.75A1.75 1.75 0 0 1 0 10.25v-7.5A1.75 1.75 0 0 1 1.75 1h3a.75.75 0 0 1 0 1.5h-3a.25.25 0 0 0-.177.073ZM6.982 12a5.72 5.72 0 0 1-.765 2.5h3.566a5.72 5.72 0 0 1-.765-2.5H6.982Z"></path>
</svg>
    Open with GitHub Desktop
</a></li>
<li class="Box-row Box-row--hover-gray p-3 mt-0 f5">
  <a class="d-flex flex-items-center color-fg-default text-bold no-underline" rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;DOWNLOAD_ZIP&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:713689438,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="09aa2ab9c3d4592f2a74b235e7622f5fe71de517b96ee9c295b8c598acfff7df" data-ga-click="Repository, download zip, location:repo overview" data-open-app="link" data-turbo="false" href="https://github.com/Tharakeswar9515/software-engineering-192211770/archive/refs/heads/main.zip">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file-zip mr-2">
    <path d="M3.5 1.75v11.5c0 .09.048.173.126.217a.75.75 0 0 1-.752 1.298A1.748 1.748 0 0 1 2 13.25V1.75C2 .784 2.784 0 3.75 0h5.586c.464 0 .909.185 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v8.586A1.75 1.75 0 0 1 12.25 15h-.5a.75.75 0 0 1 0-1.5h.5a.25.25 0 0 0 .25-.25V4.664a.25.25 0 0 0-.073-.177L9.513 1.573a.25.25 0 0 0-.177-.073H7.25a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5h-3a.25.25 0 0 0-.25.25Zm3.75 8.75h.5c.966 0 1.75.784 1.75 1.75v3a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1-.75-.75v-3c0-.966.784-1.75 1.75-1.75ZM6 5.25a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 6 5.25Zm.75 2.25h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5ZM8 6.75A.75.75 0 0 1 8.75 6h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 8 6.75ZM8.75 3h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1 0-1.5ZM8 9.75A.75.75 0 0 1 8.75 9h.5a.75.75 0 0 1 0 1.5h-.5A.75.75 0 0 1 8 9.75Zm-1 2.5v2.25h1v-2.25a.25.25 0 0 0-.25-.25h-.5a.25.25 0 0 0-.25.25Z"></path>
</svg>
    Download ZIP
</a></li>

          </ul>
</div>
    <div id="cloud-panel" role="tabpanel" tabindex="0" hidden="hidden" aria-labelledby="cloud-tab" data-view-component="true" class="cloud-panel">              <div class="js-socket-channel js-updatable-content" data-channel="eyJjIjoicmVwb3NpdG9yeV9jb2Rlc3BhY2VzOjcxMzY4OTQzODoxMjI1MTAyNTUiLCJ0IjoxNjk5MDc5NjkwfQ==--0ab56ec650adbfe4244c27aa9f37414a1581bc9a8841215a1e6e0eff191c0504" data-url="/Tharakeswar9515/software-engineering-192211770/codespaces/code_menu_contents?name=main" data-gid="R_kgDOKooJXg">
  <ul class="list-style-none">
    <li class="Box-row p-0 mt-0">
      <include-fragment id="lazyLoadedCodespacesList" data-target="get-repo.codespaceList" data-src="/codespaces?codespace%5Bref%5D=main&amp;current_branch=main&amp;event_target=REPO_PAGE&amp;repo=713689438" data-action="include-fragment-replace:get-repo#hideSpinner"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
        <div class="d-flex flex-items-center" data-target="get-repo.codespaceLoadingMenu">
          <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="my-3 flex-1 anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
        </div>
      </include-fragment>
    </li>
  </ul>
</div>

</div>
</tab-container>    <div class="js-notice">
  <div data-view-component="true" class="p-0"></div>
  <div data-target="get-repo.copilotTip" data-hydro-view="{&quot;event_type&quot;:&quot;view_rendered&quot;,&quot;payload&quot;:{&quot;name&quot;:&quot;repo_code_dialog/copilot&quot;,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-view-hmac="c2b446f742cd63cd41a6e1f3ac21ea86a316b439f8eacde1016746e8a504048d" data-view-component="true" class="Box-row p-3 mt-0 border-top color-bg-subtle d-flex">
    <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="mr-2">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copilot">
    <path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path>
</svg>
</div>      <div data-view-component="true" class="text-bold">
        Code 55% faster with AI pair programming.
        <div data-view-component="true" class="d-flex mt-2">
              <a href="https://github.com/github-copilot/signup" data-analytics-event="{&quot;category&quot;:&quot;repo_code_dialog_copilot&quot;,&quot;action&quot;:&quot;click_to_try_copilot&quot;,&quot;label&quot;:&quot;ref_cta:start_my_free_trial;ref_loc:repo_code_dialog&quot;}" data-view-component="true" class="Button--secondary Button--medium Button">    <span class="Button-content">
      <span class="Button-label">Start my free trial</span>
    </span>
</a>  
          <!-- '"` --><!-- </textarea></xmp> --><form class="js-notice-dismiss d-inline-flex" data-turbo="false" action="https://github.com/settings/dismiss-notice/code_view_copilot_popover" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="6Qt3L20MyU3OxW7rNHtGWooYzvs9wE24_Q1BWxOOeDjWSq_5UXZe9aO3MfWATr9oVxXwhTXoExnLGpCq-UVwJA" autocomplete="off">
              <button aria-label="Don&#39;t show this again" data-analytics-event="{&quot;category&quot;:&quot;repo_code_dialog_copilot&quot;,&quot;action&quot;:&quot;click_to_dismiss&quot;,&quot;label&quot;:&quot;ref_cta:dont_show_again;ref_loc:repo_code_dialog&quot;}" type="submit" data-view-component="true" class="Button--invisible Button--medium Button Button--invisible-noVisuals">    <span class="Button-content">
      <span class="Button-label">Don't show again</span>
    </span>
</button>  

</form></div></div></div></div></div>

</div>


<div class="p-3" data-targets="get-repo.platforms" data-platform="mac" hidden="">
  <h4 class="lh-condensed mb-3">Launching GitHub Desktop<span class="AnimatedEllipsis"></span></h4>
  <p class="color-fg-muted">
    If nothing happens, <a class="Link--inTextBlock" href="https://desktop.github.com/">download GitHub Desktop</a> and try again.
  </p>
    <button data-action="click:get-repo#onDetailsToggle" type="button" data-view-component="true" class="btn-link">
</button>
</div>
<div class="p-3" data-targets="get-repo.platforms" data-platform="windows" hidden="">
  <h4 class="lh-condensed mb-3">Launching GitHub Desktop<span class="AnimatedEllipsis"></span></h4>
  <p class="color-fg-muted">
    If nothing happens, <a class="Link--inTextBlock" href="https://desktop.github.com/">download GitHub Desktop</a> and try again.
  </p>
    <button data-action="click:get-repo#onDetailsToggle" type="button" data-view-component="true" class="btn-link">
</button>
</div>
<div class="p-3" data-targets="get-repo.platforms" data-platform="xcode" hidden="">
  <h4 class="lh-condensed mb-3">Launching Xcode<span class="AnimatedEllipsis"></span></h4>
  <p class="color-fg-muted">
    If nothing happens, <a class="Link--inTextBlock" href="https://developer.apple.com/xcode/">download Xcode</a> and try again.
  </p>
    <button data-action="click:get-repo#onDetailsToggle" type="button" data-view-component="true" class="btn-link">
</button>
</div>
<div class="p-3 " data-targets="get-repo.platforms" data-target="new-codespace.loadingVscode create-button.loadingVscode" data-platform="vscode" hidden="">
  <poll-include-fragment data-target="get-repo.vscodePoller new-codespace.vscodePoller create-button.vscodePoller" data-catalyst=""><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
    <h4 class="lh-condensed mb-3">Launching Visual Studio Code<span class="AnimatedEllipsis" data-hide-on-error=""></span></h4>
    <p class="color-fg-muted" data-hide-on-error="">Your codespace will open once ready.</p>
    <p class="color-fg-muted" data-show-on-error="" hidden="">There was a problem preparing your codespace, please try again.</p>
  </poll-include-fragment>
</div>


      </div>
    </div>
  </details>
</get-repo>

    </span>

    <span class="d-none d-lg-flex">
      

    </span>
</div>


          <div class="d-flex d-lg-none mb-3">
            <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/branches" class="Link--primary no-underline mr-3">
              <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-branch">
    <path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path>
</svg>
              <span class="color-fg-muted">Branches</span>
            </a>
            <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/tags" class="Link--primary no-underline">
              <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-tag">
    <path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path>
</svg>
              <span class="color-fg-muted">Tags</span>
            </a>
          </div>


        


<div class="Box mb-3">
  <div class="Box-header position-relative">
    <h2 class="sr-only">Latest commit</h2>
    <div class="js-details-container Details d-flex rounded-top-2 flex-items-center flex-wrap" data-issue-and-pr-hovercards-enabled="">
      

  <div class="flex-shrink-0 ml-n1 mr-n1 mt-n1 mb-n1 hx_avatar_stack_commit">
    
<div class="AvatarStack flex-self-start  ">
  <div class="AvatarStack-body">
      <a class="avatar avatar-user" style="width:24px;height:24px;" data-test-selector="commits-avatar-stack-avatar-link" data-hovercard-type="user" data-hovercard-url="/users/Tharakeswar9515/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/Tharakeswar9515">
        <img data-test-selector="commits-avatar-stack-avatar-image" src="./22_files/122510255(1)" width="24" height="24" alt="@Tharakeswar9515" class=" avatar-user">
</a>  </div>
</div>

  </div>
  <div class="flex-1 d-flex flex-items-center ml-3 min-width-0">
    <div class="css-truncate css-truncate-overflow color-fg-muted">
          <a class="commit-author user-mention" title="View all commits by Tharakeswar9515" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commits?author=Tharakeswar9515">Tharakeswar9515</a>
    
  

        <span class="d-none d-sm-inline">
          <a data-pjax="true" data-test-selector="commit-tease-commit-message" title="Add files via upload" class="Link--primary markdown-title" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
        </span>
    </div>
    <span class="hidden-text-expander ml-2 d-inline-block d-inline-block d-lg-none">
      <button type="button" class="color-fg-default ellipsis-expander js-details-target" aria-expanded="false">
        …
      </button>
    </span>
    <div class="d-flex flex-auto flex-justify-end ml-3 flex-items-baseline">
        
      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f" class="f6 Link--secondary text-mono ml-2 d-none d-lg-inline" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame">
        5810601
      </a>
      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f" class="Link--secondary ml-2" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame">
        <relative-time datetime="2023-11-03T08:13:33Z" class="no-wrap" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>Nov 3, 2023</relative-time>
      </a>
    </div>
  </div>
  <div class="pl-0 pl-md-5 flex-order-1 width-full Details-content--hidden">
      <div class="mt-2">
        <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-test-selector="commit-tease-commit-message" class="Link--primary text-bold" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
      </div>
    <div class="d-flex flex-items-center">
      <code class="border d-lg-none mt-2 px-1 rounded-2">5810601</code>
    </div>
  </div>
      <div class="flex-shrink-0">
        <h2 class="sr-only">Git stats</h2>
        <ul class="list-style-none d-flex">
          <li class="ml-0 ml-md-3">
            <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commits/main" class="pl-3 pr-3 py-3 p-md-0 mt-n3 mb-n3 mr-n3 m-md-0 Link--primary no-underline no-wrap">
              <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-history">
    <path d="m.427 1.927 1.215 1.215a8.002 8.002 0 1 1-1.6 5.685.75.75 0 1 1 1.493-.154 6.5 6.5 0 1 0 1.18-4.458l1.358 1.358A.25.25 0 0 1 3.896 6H.25A.25.25 0 0 1 0 5.75V2.104a.25.25 0 0 1 .427-.177ZM7.75 4a.75.75 0 0 1 .75.75v2.992l2.028.812a.75.75 0 0 1-.557 1.392l-2.5-1A.751.751 0 0 1 7 8.25v-3.5A.75.75 0 0 1 7.75 4Z"></path>
</svg>
              <span class="d-none d-sm-inline">
                    <strong>5</strong>
                    <span aria-label="Commits on main" class="color-fg-muted d-none d-lg-inline">
                      commits
                    </span>
              </span>
            </a>
          </li>
        </ul>
      </div>
    </div>
  </div>
    <h2 id="files" class="sr-only">Files</h2>
    


  


      <a class="d-none js-permalink-shortcut" data-hotkey="y" href="https://github.com/Tharakeswar9515/software-engineering-192211770/tree/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Permalink</a>
  <div data-view-component="true" class="include-fragment-error flash flash-error flash-full py-2">
  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    Failed to load latest commit information.


  
</div>  <div class="js-details-container Details" data-hpc="">
    <div role="grid" aria-labelledby="files" class="Details-content--hidden-not-important js-navigation-container js-active-navigation-container d-md-block">
      <div class="sr-only" role="row">
        <div role="columnheader">Type</div>
        <div role="columnheader">Name</div>
        <div role="columnheader" class="d-none d-md-block">Latest commit message</div>
        <div role="columnheader">Commit time</div>
      </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="1.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/1.png">1.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/688e5d5ab2cee6f077a696d8350bb3f9abc8f0d3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T09:05:03+05:30" data-view-component="true" title="Nov 3, 2023, 9:05 AM GMT+5:30"><template shadowrootmode="open">yesterday</template>November 3, 2023 09:05</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="1.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/1.xmi">1.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/688e5d5ab2cee6f077a696d8350bb3f9abc8f0d3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T09:05:03+05:30" data-view-component="true" title="Nov 3, 2023, 9:05 AM GMT+5:30"><template shadowrootmode="open">yesterday</template>November 3, 2023 09:05</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="10.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/10.png">10.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="10.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/10.xmi">10.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="11.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/11.png">11.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="11.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/11.xmi">11.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="12.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/12.png">12.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="12.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/12.xmi">12.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="13.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/13.png">13.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="13.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/13.xmi">13.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="14.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/14.png">14.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="14.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/14.xmi">14.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="15.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/15.png">15.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="15.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/15.xmi">15.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="16.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/16.png">16.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="16.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/16.xmi">16.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="17.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/17.png">17.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="17.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/17.xmi">17.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="18.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/18.png">18.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="18.rap" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/18.rap">18.rap</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="19.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/19.png">19.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="19.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/19.xmi">19.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="2 - Copy.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/2%20-%20Copy.png">2 - Copy.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="2" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/a738ae5e8cc4485601ee0519975d24eaecc11b57">2</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:25:14+05:30" data-view-component="true" title="Nov 3, 2023, 1:25 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:25</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="2.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/2.xmi">2.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="20.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/20.png">20.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="20.rap" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/20.rap">20.rap</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="21.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/21.png">21.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="21.rap" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/21.rap">21.rap</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="22.cpp" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/22.cpp">22.cpp</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item navigation-focus">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="22.exe" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/22.exe">22.exe</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="23.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/23.png">23.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="23.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/23.xmi">23.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="24.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/24.png">24.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="24.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/24.xmi">24.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="25.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/25.png">25.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="25.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/25.xmi">25.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="26.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/26.png">26.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="26.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/26.xmi">26.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="27.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/27.png">27.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="27.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/27.xmi">27.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/5810601e0f3a725d0dc66825b7f1dfd33c07392f">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:43:33+05:30" data-view-component="true" title="Nov 3, 2023, 1:43 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:43</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="3.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/3.png">3.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="3.rap" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/3.rap">3.rap</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="4.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/4.png">4.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="4.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/4.xmi">4.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="5.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/5.png">5.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="5.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/5.xmi">5.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="6.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/6.png">6.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="6.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/6.xmi">6.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/0bf429e1e55c50a41dc282f448a1474784b982a9">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:28:19+05:30" data-view-component="true" title="Nov 3, 2023, 1:28 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:28</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="7.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/7.xmi">7.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="9.png" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/9.png">9.png</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
          <div role="row" class="Box-row Box-row--focus-gray py-2 d-flex position-relative js-navigation-item ">
            <div role="gridcell" class="mr-3 flex-shrink-0" style="width: 16px;">
                <svg aria-label="File" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path>
</svg>
            </div>

            <div role="rowheader" class="flex-auto min-width-0 col-md-2 mr-3">
              <span class="css-truncate css-truncate-target d-block width-fit"><a class="js-navigation-open Link--primary" title="9.xmi" data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/blob/main/9.xmi">9.xmi</a></span>
            </div>

            <div role="gridcell" class="flex-auto min-width-0 d-none d-md-block col-5 mr-3">
                <span class="css-truncate css-truncate-target d-block width-fit markdown-title">
                      <a data-pjax="true" title="Add files via upload" class="Link--secondary" href="https://github.com/Tharakeswar9515/software-engineering-192211770/commit/3cda5be9b8118d38601cf3ae9bd722af424295a3">Add files via upload</a>
                </span>
            </div>

            <div role="gridcell" class="color-fg-muted text-right" style="width:100px;">
                <relative-time tense="past" datetime="2023-11-03T13:36:15+05:30" data-view-component="true" title="Nov 3, 2023, 1:36 PM GMT+5:30"><template shadowrootmode="open">20 hours ago</template>November 3, 2023 13:36</relative-time>
            </div>

          </div>
    </div>
    <div class="Details-content--shown Box-footer d-md-none p-0">
        <button aria-expanded="false" type="button" data-view-component="true" class="js-details-target btn-link d-block width-full px-3 py-2">    View code
</button>    </div>
  </div>


  <div class="repo-file-upload-tree-target js-document-dropzone js-upload-manifest-tree-view" data-drop-url="/Tharakeswar9515/software-engineering-192211770/upload/main">
    <div class="repo-file-upload-outline">
      <div class="repo-file-upload-slate">
          <svg height="32" aria-hidden="true" viewBox="0 0 24 24" version="1.1" width="32" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M3 3a2 2 0 0 1 2-2h9.982a2 2 0 0 1 1.414.586l4.018 4.018A2 2 0 0 1 21 7.018V21a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2Zm2-.5a.5.5 0 0 0-.5.5v18a.5.5 0 0 0 .5.5h14a.5.5 0 0 0 .5-.5V8.5h-4a2 2 0 0 1-2-2v-4Zm10 0v4a.5.5 0 0 0 .5.5h4a.5.5 0 0 0-.146-.336l-4.018-4.018A.5.5 0 0 0 15 2.5Z"></path>
</svg>
          <h2>Drop to upload your files</h2>
      </div>
    </div>
  </div>


  <div class="repo-file-upload-tree-target js-document-dropzone js-upload-manifest-tree-view" data-drop-url="/Tharakeswar9515/software-engineering-192211770/upload/main">
    <div class="repo-file-upload-outline">
      <div class="repo-file-upload-slate">
          <svg height="32" aria-hidden="true" viewBox="0 0 24 24" version="1.1" width="32" data-view-component="true" class="octicon octicon-file color-fg-muted">
    <path d="M3 3a2 2 0 0 1 2-2h9.982a2 2 0 0 1 1.414.586l4.018 4.018A2 2 0 0 1 21 7.018V21a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2Zm2-.5a.5.5 0 0 0-.5.5v18a.5.5 0 0 0 .5.5h14a.5.5 0 0 0 .5-.5V8.5h-4a2 2 0 0 1-2-2v-4Zm10 0v4a.5.5 0 0 0 .5.5h4a.5.5 0 0 0-.146-.336l-4.018-4.018A.5.5 0 0 0 15 2.5Z"></path>
</svg>
          <h2>Drop to upload your files</h2>
      </div>
    </div>
  </div>


</div>

    <div data-view-component="true" class="flash mb-4">
  
    <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/new/main?readme=1" class="btn btn-sm btn-primary flash-action">
      Add a README
    </a>
      Help people interested in this repository understand your project by adding a README.


  
</div>

</div>
  <div data-view-component="true" class="Layout-sidebar">      

      <div class="BorderGrid BorderGrid--spacious" data-pjax="">
        <div class="BorderGrid-row hide-sm hide-md">
          <div class="BorderGrid-cell">
              <details class="details-reset details-overlay details-overlay-dark ">
          <summary class="float-right" role="button">
        <div class="Link--secondary pt-1 pl-2">
          <svg aria-label="Edit repository metadata" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gear float-right">
    <path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path>
</svg>
        </div>
      </summary>

  <details-dialog class="Box d-flex flex-column anim-fade-in fast Box-overlay--wide overflow-x-hidden" aria-label="Edit repository details" role="dialog" aria-modal="true">
    <div class="Box-header">
      <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog="">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
      </button>
        <h1 class="Box-title">Edit repository details</h1>
    </div>
      <div class="Box-body overflow-auto">
              <div class="js-topic-form-area">
        <!-- '"` --><!-- </textarea></xmp> --><form id="repo_metadata_form" data-turbo="false" action="https://github.com/Tharakeswar9515/software-engineering-192211770/settings/update_meta" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="put" autocomplete="off"><input type="hidden" name="authenticity_token" value="CfGOEBCwKUuIjZIktf0dJnl8z5MaHJyI1-DfyFxcC9025FzFcis1oxmQ9nCwE3GNCgmoMszSHh4hP1sCehQ25w">
          <div class="form-group mt-0 mb-3 js-length-limited-input-container">
            <div class="mb-2">
              <label for="repo_description">Description</label>
            </div>
            <input type="text" id="repo_description" class="form-control input-contrast width-full js-length-limited-input" name="repo_description" placeholder="Short description of this repository" autofocus="" value="" data-input-max-length="350" data-warning-length="50" data-warning-text="{{remaining}} characters remaining">
            <div class="d-none mt-1 js-length-limited-input-warning text-right color-fg-danger"></div>
          </div>
          <div class="form-group my-3">
            <div class="mb-2">
              <label for="repo_homepage">Website</label>
            </div>
             <input type="url" id="repo_homepage" class="color-bg-default form-control input-contrast width-full" name="repo_homepage" value="" placeholder="Enter a valid URL">
          </div>
          <div class="width-full tag-input-container topic-input-container d-inline-block js-tag-input-container">
            <div class="js-tag-input-wrapper">
              <div class="form-group my-0">
                <div class="mb-2">
                  <label for="repo_topics" class="d-block">Topics <span class="text-normal color-fg-muted">(separate with spaces)</span></label>
                </div>
                <div class="tag-input form-control d-inline-block color-bg-default py-0 position-relative">
                  <ul class="js-tag-input-selected-tags d-inline">
                    <li class="d-none topic-tag-action my-1 mr-1 f6 float-left js-tag-input-tag js-template">
                      <span class="js-placeholder-tag-name"></span>
                      <button type="button" class="delete-topic-button f5 no-underline ml-1 js-remove" tabindex="-1">
                        <svg aria-label="Remove topic" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
                      </button>
                      <input type="hidden" name="repo_topics[]" class="js-topic-input" value="">
                    </li>

                  </ul>

                  <auto-complete src="/Tharakeswar9515/software-engineering-192211770/topic_autocomplete" for="repo-topic-popup">
                    <input type="text" id="repo_topics" class="tag-input-inner form-control color-bg-default short d-inline-block p-0 my-1 border-0" autocomplete="off" autofocus="" role="combobox" aria-controls="repo-topic-popup" aria-expanded="false" aria-autocomplete="list" aria-haspopup="listbox" spellcheck="false">
                    <ul class="suggester border width-full color-bg-default left-0" id="repo-topic-popup" style="top: 100%;" hidden="" aria-label="results" role="listbox"></ul>
                  </auto-complete>
                </div>
              </div>
            </div>
          </div>

            <div class="js-topic-suggestions-container" data-url="/Tharakeswar9515/software-engineering-192211770/topic_suggestions?async_topics=false">
              
            </div>

          <div class="form-group mt-3 mb-0" role="group" aria-labelledby="hidden_sidebar_options">
            <div class="text-bold mb-2" id="hidden_sidebar_options">Include in the home page</div>
            <label class="d-block mb-2 text-normal">
              <input name="repo_sections[releases]" type="hidden" value="0" autocomplete="off"><input class="mr-1" type="checkbox" value="1" checked="checked" name="repo_sections[releases]" id="repo_sections_releases"> Releases
            </label>
            <label class="d-block mb-2 text-normal">
              <input name="repo_sections[packages]" type="hidden" value="0" autocomplete="off"><input class="mr-1" type="checkbox" value="1" checked="checked" name="repo_sections[packages]" id="repo_sections_packages"> Packages
            </label>

              <label class="d-block text-normal">
                <input name="repo_sections[deployments]" type="hidden" value="0" autocomplete="off"><input class="mr-1" type="checkbox" value="1" checked="checked" name="repo_sections[deployments]" id="repo_sections_deployments"> Deployments
              </label>
          </div>
</form>


      </div>

      </div>
        <div class="Box-footer">
                <div class="form-actions">
        <button type="submit" class="btn btn-primary" form="repo_metadata_form">Save changes</button>
        <button type="reset" class="btn" data-close-dialog="" form="repo_metadata_form">Cancel</button>
      </div>

        </div>
  </details-dialog>
</details>
<h2 class="mb-3 h4">About</h2>

    <div class="f4 my-3 color-fg-muted text-italic">
      No description, website, or topics provided.
    </div>







<include-fragment src="/Tharakeswar9515/software-engineering-192211770/hovercards/citation/sidebar_partial?tree_name=main" class="is-error"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
</include-fragment>



<div class="mt-2">
  <a data-turbo-frame="repo-content-turbo-frame" href="https://github.com/Tharakeswar9515/software-engineering-192211770/activity" data-view-component="true" class="Link Link--muted">
    <svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pulse mr-2">
    <path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.751.751 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.751.751 0 0 1 6 2Z"></path>
</svg>
    <span class="color-fg-muted">Activity</span>
</a></div>


<h3 class="sr-only">Stars</h3>
<div class="mt-2">
  <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/stargazers" data-view-component="true" class="Link Link--muted">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
    <strong>0</strong>
    stars
</a></div>

<h3 class="sr-only">Watchers</h3>
<div class="mt-2">
  <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/watchers" data-view-component="true" class="Link Link--muted">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye mr-2">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
    <strong>1</strong>
    watching
</a></div>

<h3 class="sr-only">Forks</h3>
<div class="mt-2">
  <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/forks" data-view-component="true" class="Link Link--muted">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-2">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
    <strong>0</strong>
    forks
</a></div>


          </div>
        </div>

        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame">
  <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/releases" data-view-component="true" class="Link--primary no-underline Link" data-turbo-frame="repo-content-turbo-frame">
    Releases
</a></h2>

    <div class="text-small color-fg-muted">No releases published</div>
    <div class=" text-small"><a class="Link--inTextBlock" href="https://github.com/Tharakeswar9515/software-engineering-192211770/releases/new">Create a new release</a></div>

              </div>
            </div>

        
        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3">
  <a href="https://github.com/users/Tharakeswar9515/packages?repo_name=software-engineering-192211770" data-view-component="true" class="Link--primary no-underline Link d-flex flex-items-center">
    Packages
      <span title="0" hidden="hidden" data-view-component="true" class="Counter ml-1">0</span>
</a></h2>


      <div class="text-small color-fg-muted">
        No packages published <br>
          <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/packages">Publish your first package</a>
      </div>



              </div>
            </div>

        
            <div class="BorderGrid-row" hidden="">
              <div class="BorderGrid-cell">
                <include-fragment src="/Tharakeswar9515/software-engineering-192211770/used_by_list" accept="text/fragment+html" class="is-error"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
</include-fragment>
              </div>
            </div>

        
        
        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3">Languages</h2>
<div class="mb-2">
  <span data-view-component="true" class="Progress">
    <span style="background-color:#f34b7d !important;;width: 100.0%;" itemprop="keywords" aria-label="C++ 100.0" data-view-component="true" class="Progress-item color-bg-success-emphasis"></span>
</span></div>
<ul class="list-style-none">
    <li class="d-inline">
        <a class="d-inline-flex flex-items-center flex-nowrap Link--secondary no-underline text-small mr-3" href="https://github.com/Tharakeswar9515/software-engineering-192211770/search?l=c%2B%2B" data-ga-click="Repository, language stats search click, location:repo overview">
          <svg style="color:#f34b7d;" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-dot-fill mr-2">
    <path d="M8 4a4 4 0 1 1 0 8 4 4 0 0 1 0-8Z"></path>
</svg>
          <span class="color-fg-default text-bold mr-1">C++</span>
          <span>100.0%</span>
        </a>
    </li>
</ul>

              </div>
            </div>

        
              <div class="BorderGrid-row js-notice">
  <div class="BorderGrid-cell">
    <div data-view-component="true" class="Subhead border-bottom-0 mb-2">
  <h2 data-view-component="true" class="h4 Subhead-heading">        Suggested Workflows
</h2>
  <div data-view-component="true" class="Subhead-description">        Based on your tech stack
</div>
  
</div>    <ol class="list-style-none">
        <li class="list-style-none">
          <div data-view-component="true" class="mb-2 p-3 border rounded-2">
  <div data-view-component="true" class="d-flex flex-items-stretch">
    <div aria-hidden="true" style="color: #555555 !important; background-color: var(--color-scale-white) !important; width: 32px !important; height: 32px !important; min-width: 32px !important;" data-view-component="true" class="CircleBadge">
      <img class="CircleBadge-icon" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+CjwhLS0gQ3JlYXRlZCB3aXRoIElua3NjYXBlIChodHRwOi8vd3d3Lmlua3NjYXBlLm9yZy8pIC0tPgoKPHN2ZwogICB4bWxuczpkYz0iaHR0cDovL3B1cmwub3JnL2RjL2VsZW1lbnRzLzEuMS8iCiAgIHhtbG5zOmNjPSJodHRwOi8vY3JlYXRpdmVjb21tb25zLm9yZy9ucyMiCiAgIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyIKICAgeG1sbnM6c3ZnPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIKICAgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIgogICB4bWxuczp4bGluaz0iaHR0cDovL3d3dy53My5vcmcvMTk5OS94bGluayIKICAgeG1sbnM6c29kaXBvZGk9Imh0dHA6Ly9zb2RpcG9kaS5zb3VyY2Vmb3JnZS5uZXQvRFREL3NvZGlwb2RpLTAuZHRkIgogICB4bWxuczppbmtzY2FwZT0iaHR0cDovL3d3dy5pbmtzY2FwZS5vcmcvbmFtZXNwYWNlcy9pbmtzY2FwZSIKICAgaWQ9InN2ZzI4MTYiCiAgIHZlcnNpb249IjEuMSIKICAgaW5rc2NhcGU6dmVyc2lvbj0iMC40NyByMjI1ODMiCiAgIHdpZHRoPSIyMDcyIgogICBoZWlnaHQ9IjIwNzIiCiAgIHNvZGlwb2RpOmRvY25hbWU9IkNtYWtlLnN2ZyI+CiAgPG1ldGFkYXRhCiAgICAgaWQ9Im1ldGFkYXRhMjgyMiI+CiAgICA8cmRmOlJERj4KICAgICAgPGNjOldvcmsKICAgICAgICAgcmRmOmFib3V0PSIiPgogICAgICAgIDxkYzpmb3JtYXQ+aW1hZ2Uvc3ZnK3htbDwvZGM6Zm9ybWF0PgogICAgICAgIDxkYzp0eXBlCiAgICAgICAgICAgcmRmOnJlc291cmNlPSJodHRwOi8vcHVybC5vcmcvZGMvZGNtaXR5cGUvU3RpbGxJbWFnZSIgLz4KICAgICAgICA8ZGM6dGl0bGUgLz4KICAgICAgPC9jYzpXb3JrPgogICAgPC9yZGY6UkRGPgogIDwvbWV0YWRhdGE+CiAgPGRlZnMKICAgICBpZD0iZGVmczI4MjAiPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0Mjc2Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyNjkxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQyNzgiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDI4MCIKICAgICAgICAgb2Zmc2V0PSIwLjAyMDEyMjA3IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMDFkMjAwO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQyODIiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MjI3Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ViZWJlYztzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQyMjkiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDIzMSIKICAgICAgICAgb2Zmc2V0PSIwLjAwNTE4MjkyIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZDNkM2QzO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQyMzMiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MTI5Ij4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3A0MTMxIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNjYmY1OTU7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMwMWRhMDA7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMTgyNjkyOSIKICAgICAgICAgaWQ9InN0b3A0MTMzIiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDQxMzUiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDM5Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyMWUxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQwNDEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDA0MyIKICAgICAgICAgb2Zmc2V0PSIwLjAxNTQ2NzI5IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQwNDUiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTkwIj4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyMWUxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM5OTIiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzk5NCIKICAgICAgICAgb2Zmc2V0PSIwLjAyMDEyMjA3IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNWE1YmQ3O3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM5OTYiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTQxIj4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3AzOTQzIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNmNmIxYjI7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNjNTFmMWY7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMjgyMTYyNCIKICAgICAgICAgaWQ9InN0b3AzOTQ1IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM5NDciCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODUxIj4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3AzODUzIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMzMjFlMWQ7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiM1NTU1NDg7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMjAxMjIwNyIKICAgICAgICAgaWQ9InN0b3AzODU1IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTciCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODAwIj4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2NiY2FmMjtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM4MDIiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzgwOCIKICAgICAgICAgb2Zmc2V0PSIwLjAyNjM2NzUzIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NWQyO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM4MDQiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNzE1Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6Izg0ODQ4NDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM3MTciIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNkMmQyZDI7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgaWQ9InN0b3AzNzE5IiAvPgogICAgPC9saW5lYXJHcmFkaWVudD4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50MzY2OSI+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMwMWEzMDA7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMCIKICAgICAgICAgaWQ9InN0b3AzNjcxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMDFkZjAwO3N0b3Atb3BhY2l0eToxIgogICAgICAgICBvZmZzZXQ9IjEiCiAgICAgICAgIGlkPSJzdG9wMzY3MyIgLz4KICAgIDwvbGluZWFyR3JhZGllbnQ+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM2NTMiPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojYjQwZTBlO3N0b3Atb3BhY2l0eToxIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIGlkPSJzdG9wMzY1NSIgLz4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmNTk1OTtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM2NTciIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjQ1Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzEwMTFhMTtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM2NDciIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiM2OTY5ZTE7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgaWQ9InN0b3AzNjQ5IiAvPgogICAgPC9saW5lYXJHcmFkaWVudD4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzY0NSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM2NTEiCiAgICAgICB4MT0iLTE1MjcuMzUwNyIKICAgICAgIHkxPSIxMzg3LjUyMDYiCiAgICAgICB4Mj0iLTEwODYuMTE2MSIKICAgICAgIHkyPSI0NTQuMTM5NjgiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJ0cmFuc2xhdGUoMjEwNCw0OCkiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM2NTMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjU5IgogICAgICAgeDE9Ii05MzMuMzgwOTIiCiAgICAgICB5MT0iNjgwLjQxMzg4IgogICAgICAgeDI9Ii0zMTYuNzgzODQiCiAgICAgICB5Mj0iMTcyMS4yNzUiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJ0cmFuc2xhdGUoMjEwNCw0OCkiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM2NjkiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjc1IgogICAgICAgeDE9Ii02NzguODIyNTEiCiAgICAgICB5MT0iMTc5NC44MTQxIgogICAgICAgeDI9Ii0xNTQ5Ljk3OCIKICAgICAgIHkyPSIxNzIxLjI3NSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09InRyYW5zbGF0ZSgyMTA0LDQ4KSIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzcxNSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM3MjEiCiAgICAgICB4MT0iLTk4NC4yOTI2IgogICAgICAgeTE9IjE0NzIuMzczNSIKICAgICAgIHgyPSItOTk1LjYwNjMyIgogICAgICAgeTI9IjEwOTMuMzY0MyIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09InRyYW5zbGF0ZSgyMTA0LDQ4KSIgLz4KICAgIDxmaWx0ZXIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIGlkPSJmaWx0ZXIzNzc3Ij4KICAgICAgPGZlR2F1c3NpYW5CbHVyCiAgICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgICAgc3RkRGV2aWF0aW9uPSI5LjA3NjY1ODgiCiAgICAgICAgIGlkPSJmZUdhdXNzaWFuQmx1cjM3NzkiIC8+CiAgICA8L2ZpbHRlcj4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzgwMCIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4MDYiCiAgICAgICB4MT0iLTEyMzguMDQ2NSIKICAgICAgIHkxPSI5MTkuNzE0NDgiCiAgICAgICB4Mj0iLTU1NS44MjM3OSIKICAgICAgIHkyPSI5MTcuNTEyODIiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMS45MTg4OTM5LDAuOTgzNDkzODUsLTAuNDU2MTEzMDgsMC44ODk5MjE4MywzNDc2LjA0MTgsMTI4NS4yNjYpIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTEzLjQwNTgyIgogICAgICAgeDI9Ii01NTIuODQwMzkiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KC0xLjk0MDcwMjMsMC45Mzk3Mjc4MSwtMC40MzU4MTU4MiwtMC45MDAwMzU4OCwtNDEyLjIxNTExLDMxNjguNjUwNikiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4MjgiCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQzODUxIgogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODUxLTYiPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTMtMiIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMzIxZTFkO3N0b3Atb3BhY2l0eToxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIgogICAgICAgICBvZmZzZXQ9IjAuMDIwMTIyMDciCiAgICAgICAgIGlkPSJzdG9wMzg1NS00IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTctNSIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIgLz4KICAgIDwvbGluZWFyR3JhZGllbnQ+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTUuMzAwMDUiCiAgICAgICB4Mj0iLTU1NS44MzcyOCIKICAgICAgIHkxPSI5MTkuNzE0NDgiCiAgICAgICB4MT0iLTEyMzguMDQ2NSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMC4wMjcwMDI5NSwtMi4xNTYwNjA4LDAuOTAzNjg3NDUsMC4wMTMxNDUwNywxMTQuMzcwMzksLTc1NS40MjkwNykiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4NzciCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQzODUxLTYiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuNjE4MSIKICAgICAgIHgyPSItNTU0Ljg5NzQ2IgogICAgICAgeTE9IjkxOS43MTQ0OCIKICAgICAgIHgxPSItMTIzOC4wNDY1IgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgzLjEzNjI1MTMsMC4wMDI2MTgwOSwwLjA2NDMxMDczLDAuNzYwMTUxMSw0OTM2LjEzNTYsNjguMTMzMjg2KSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50MzkxOCIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM5NDEiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuNTEyODIiCiAgICAgICB4Mj0iLTU1NS44MjM3OSIKICAgICAgIHkxPSI5MTguNDQzNzkiCiAgICAgICB4MT0iLTEyMjkuMzI3IgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgtMi4xNTEwMjE1LC0wLjA3MDI1Nzk3LC0wLjAzODIxMTg4LC0wLjQ4MjEwNjg3LC0xNDk4LjQ2OSwxMDU4LjAxMDQpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTY3IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50Mzk5MCIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgeTI9IjkxNy41MTI4MiIKICAgICAgIHgyPSItNTU1LjgyMzc5IgogICAgICAgeTE9IjkyMC40MTc5NyIKICAgICAgIHgxPSItMTIzNy4xMTEyIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgtMS4zNzk4MTY0LC0xLjY1Njk2MTIsMC43Njg0NDU4LC0wLjYzOTkxNDg5LC0yMTk1LjYzNjcsNDEzLjg5MzUpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDE2IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50NDAzOSIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50Mzg1MS02MiI+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzg1My0zOCIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMzIxZTFkO3N0b3Atb3BhY2l0eToxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIgogICAgICAgICBvZmZzZXQ9IjAuMDE3MzkyNzEiCiAgICAgICAgIGlkPSJzdG9wMzg1NS0yIiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTctNjIiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTEwLjY0NjE4IgogICAgICAgeDI9Ii01NTEuMTI1NDkiCiAgICAgICB5MT0iOTE1LjczNjQ1IgogICAgICAgeDE9Ii0xMjQyLjIzMzQiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KDAuODUzMTIwNDQsLTEuOTgwMzAyOSwwLjkxODQwMTM1LDAuMzk1NjUwMDYsMjE4Mi4yOTE4LC04ODUuOTM0NTgpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDY1IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50Mzg1MS02MiIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgeTI9IjkxNS40ODAxIgogICAgICAgeDI9Ii01NTUuODY2ODIiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KDEuMzgyOTkwNCwxLjY1NDMxMywtMC43NjcyMTc2LDAuNjQxMzg2OSwyNTI5LjgzODksMzQzMi44NzE5KSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50NDEwNiIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDQxMjkiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuMTg2NjUiCiAgICAgICB4Mj0iLTg2Ni44NjgwNCIKICAgICAgIHkxPSI5MTguMDk4NzUiCiAgICAgICB4MT0iLTEyNDIuNTU4MiIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMS4zODI5OTA0LDEuNjU0MzEzLC0wLjc2NzIxNzYsMC42NDEzODY5LDI5MzAuNTM1LDMwOTYuOTM3NikiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDQxOTYiCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQ0MjI3IgogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTE3LjUxMjgyIgogICAgICAgeDI9Ii01NTUuODIzNzkiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KC0wLjgzMTc5MTgzLDEuOTg5MzM0LC0wLjgzMzEyMjIxLC0wLjM1MDMzMDExLDE0NDcuNTc1Miw0NjAzLjY4MzYpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MjUzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50NDI3NiIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICA8L2RlZnM+CiAgPHNvZGlwb2RpOm5hbWVkdmlldwogICAgIHBhZ2Vjb2xvcj0iI2ZmZmZmZiIKICAgICBib3JkZXJjb2xvcj0iIzY2NjY2NiIKICAgICBib3JkZXJvcGFjaXR5PSIxIgogICAgIG9iamVjdHRvbGVyYW5jZT0iMTAiCiAgICAgZ3JpZHRvbGVyYW5jZT0iMTAiCiAgICAgZ3VpZGV0b2xlcmFuY2U9IjEwIgogICAgIGlua3NjYXBlOnBhZ2VvcGFjaXR5PSIwIgogICAgIGlua3NjYXBlOnBhZ2VzaGFkb3c9IjIiCiAgICAgaW5rc2NhcGU6d2luZG93LXdpZHRoPSIxMjgwIgogICAgIGlua3NjYXBlOndpbmRvdy1oZWlnaHQ9Ijc1MCIKICAgICBpZD0ibmFtZWR2aWV3MjgxOCIKICAgICBzaG93Z3JpZD0iZmFsc2UiCiAgICAgaW5rc2NhcGU6em9vbT0iMC4yNSIKICAgICBpbmtzY2FwZTpjeD0iNjY4LjQ1NTQ1IgogICAgIGlua3NjYXBlOmN5PSI3NjkuMjYzNDEiCiAgICAgaW5rc2NhcGU6d2luZG93LXg9Ii04IgogICAgIGlua3NjYXBlOndpbmRvdy15PSItOCIKICAgICBpbmtzY2FwZTp3aW5kb3ctbWF4aW1pemVkPSIxIgogICAgIGlua3NjYXBlOmN1cnJlbnQtbGF5ZXI9InN2ZzI4MTYiCiAgICAgc2hvd2d1aWRlcz0idHJ1ZSIKICAgICBpbmtzY2FwZTpndWlkZS1iYm94PSJ0cnVlIiAvPgogIDxnCiAgICAgaWQ9ImczNjY4Ij4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjY2MiCiAgICAgICBpZD0icGF0aDI4MzEtMSIKICAgICAgIGQ9Im0gMTk3MS41NTc1LDE5MzkuOTEzNyAtMTc5Ny4wODY5MSwtMC4xMjU4IGMgLTExLjAyOTEsLTEuMjIyMSAtOC41NDAzLC02LjcxMyAtNS45OTU4LC0xMi4yMjE1IEwgMTA2OS4zNTQ2LDEyOC4wODA4IGMgMy4zMTM5LC01LjI3NzIgNi4yODgzLC00LjQzNzIgOS4wODYxLC0wLjQxMDggbCA5MDAuODU2MSwxNzk5LjQzNjMgYyA0LjU3ODEsOS4xNjY3IDEuNTgxMSwxMy4xNTAzIC03LjczOTMsMTIuODA3NCB6IgogICAgICAgc3R5bGU9ImZpbGw6bm9uZTtzdHJva2U6IzNhMzkzYjtzdHJva2Utd2lkdGg6MjIuNTAwMDAwMDAwMDAwMDAwMDA7c3Ryb2tlLW1pdGVybGltaXQ6NDtzdHJva2Utb3BhY2l0eToxO3N0cm9rZS1kYXNoYXJyYXk6bm9uZTtzdHJva2UtZGFzaG9mZnNldDowO2ZpbHRlcjp1cmwoI2ZpbHRlcjM3NzcpO29wYWNpdHk6MC41Mzk3NDg5NSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2MiCiAgICAgICBpZD0icGF0aDI4MjgiCiAgICAgICBkPSJNIDExNDMuMzA4MywxMDg0LjMyMTcgMTU4LjY5MTE5LDE5MjYuMDYxOCAxMDYwLjUxMDcsMTI0LjEwMjE0IDExNDMuMzA4MywxMDg0LjMyMTcgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNjUxKTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEiCiAgICAgICBkPSJtIDEwNjAuNTYzNywxMjUuNjE5NTkgYyAxMy40MTUyLDgwLjcxNTkxIDExLjk0LDk0Ljc5MDMxIC0xOC4wMzQ5LDE0MC4wNzMxNiBMIDI0NS45MjAyOSwxODQ0LjgzMiAxNjEuMzE3MzksMTkyMS43NTg4IDEwNjAuNTYzNywxMjUuNjE5NTkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzODA2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS0wLTkiCiAgICAgICBkPSJtIDExNDcuMTg4LDEwODMuMTUzNiAtNTAuMTY3MSw0MC4wNTM3IC01Mi43ODg3LC04ODguNzI2MSBjIC00LjA1MzMsLTQ3LjQzNDEgLTYuMjQxNiwtNDMuMTcwNzYgLTYuNTQ5MiwtNjguMTcwMDQgbCAyNS4xMDA0LC00OC45NTIwOCA4NC40MDQ2LDk2NS43OTQ1MiB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDM5NjcpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjYyIKICAgICAgIGlkPSJwYXRoMjgyOC00IgogICAgICAgZD0iTSAxMTg4LjkzNjIsMTYwOS45OTM5IDEwNjAuOTc4OCwxMjMuOTQwMjEgMTk2My45NTI5LDE5MjYuMjI2MSAxMTg4LjkzNjIsMTYwOS45OTM5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50MzY1OSk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOiMwMDAwMDA7c3Ryb2tlLW9wYWNpdHk6MSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTkiCiAgICAgICBkPSJtIDEwNjAuOTA3MSwxMjAuMDc3MzEgYyAyNC4xNzQ5LDMwLjA0NTU4IDM5LjYwOCw3NS45Mzk5MSA0OC45NjU0LDExMi4xNzg0MyBsIDE3OS4zNzQyLDE0MTUuMTA0MzYgLTk4LjQyNzYsLTM4LjQzOTEgLTEyOS45MTIsLTE0ODguODQzNjkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzOTE4KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2MiCiAgICAgICBpZD0icGF0aDI4MjgtMSIKICAgICAgIGQ9Ik0gNzQzLjQwOTI5LDE0MjMuODM0OSAxOTY0Ljg3OTQsMTkyNi4wMDg1IDE1OC45Mjc5OSwxOTI1LjgxIDc0My40MDkyOSwxNDIzLjgzNDkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNjc1KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAiCiAgICAgICBkPSJtIDE5NjMuNjg5MSwxOTI2LjUyNzcgLTU2LjcxMzksLTI0LjYxNjkgLTc5NS45ODU0LC0xNjAzLjA1MjE3IGMgLTIxLjk0NzIsLTI0LjM3ODQ1IC0zNC4zNDQ5LC0zOS42MjMwNiAtNDEuMjE5MiwtNTEuOTUxOTIgLTEuMTI2NCwtMzIuMzE4OCAtMi45NDMsLTYxLjA4MTMgLTkuOTEzOCwtMTI2LjI2MjYgbCA5MDMuODMyMywxODA1Ljg4MzU5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50MzgyOCk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjIgogICAgICAgaWQ9InBhdGgyODI4LTQtNyIKICAgICAgIGQ9Im0gNzQ1LjI2NjA5LDE0MjUuMDQ3NSAzOTcuNDIyODEsLTMzOS4wMzgxIDU1LjMyOTgsNTIzLjU3MTYgLTQ1Mi43NTI2MSwtMTg0LjUzMzUgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNzIxKTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utd2lkdGg6NDtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLWRhc2hhcnJheTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iNjI0Ljg1OSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iNzU4LjEyMzU1IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEtOCIKICAgICAgIGQ9Im0gNzQyLjcyODI5LDE0MjYuMjU1NCBjIDE3LjQ4MjEsNi43NTA0IDIwLjg0MTksOC4yODI3IDM1LjgwNiwxNC40MjA1IC0xNi4xNTkzLDEzLjgzMDUgLTY5Ljg4LDg2LjQ4ODUgLTkxLjQyODEsMTAzLjg0OTkgbCAtNDI4LjQwNzIsMzYyLjY5OTIgLTk4LjgxOTUsMTguMzg4MyA1ODIuODQ4OCwtNDk5LjM1NzkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQ0MTA2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBpbmtzY2FwZTp0cmFuc2Zvcm0tY2VudGVyLXk9IjM0Ny4yMjA3NSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iLTgyMS4yMjA3OSIKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAtOC02IgogICAgICAgZD0ibSAxOTYyLjg2NzYsMTkyNS40NTk0IC02OC4wNjQzLC0xLjA0ODYgLTExNzQuODY2ODEsLTQ3OS42MzMyIDIzLjUwNDgsLTE4LjcxNjcgNDcwLjc2MjQxLDE5MS45NDE2IDc0OC42NjM5LDMwNy40NTY5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50NDI1Myk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS0wLTgiCiAgICAgICBkPSJtIDE1OS45ODI1OSwxOTI1LjQ0MDUgNTAuMjk1OCwtNDIuODg2NCAxNjQzLjAwODMxLDAuMTUzMSAxMTAuMzI3Niw0Mi43MjcgLTE4MDMuNjMxNzEsMC4wMSB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDM4NzcpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iMzY5Ljk2NzI1IgogICAgICAgaW5rc2NhcGU6dHJhbnNmb3JtLWNlbnRlci14PSItODg3LjUxNTQ0IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAtNyIKICAgICAgIGQ9Im0gMTE5OS44NDY5LDE2MTAuOTg3NCAtMi4xNjA4LC0yMi4zMzg2IDYxMC41ODg0LDIzNS4xNjc4IGMgMzkuNDU1NSwxOC43NjYxIDY5LjEwNTgsMjcuMjk5MyA4OC44MjQ5LDQzLjMyNyAxMi42OTQ3LDUuMjA4MSAzNC43MjQxLDEyLjYzNDUgNDYuMTEzNSwxNi40NzM2IDEzLjkyNjQsOS4yMjE5IDExLjUwNjUsMjMuOTU4MyAyMC4zMTc3LDQxLjU0MzEgbCAtNzYzLjY4MzcsLTMxNC4xNzI5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50NDA2NSk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2NjIgogICAgICAgaWQ9InBhdGgyODMxIgogICAgICAgZD0ibSAxOTU4LjU4NjgsMTkzMS44MDcgLTE3OTcuMDg2OTEsLTAuMTI1OCBjIC0xMS4wMjkxLC0xLjIyMjEgLTguNTQwMywtNi43MTMgLTUuOTk1OCwtMTIuMjIxNSBMIDEwNTYuMzgzOSwxMTkuOTc0MDggYyAzLjMxMzksLTUuMjc3MTggNi4yODgzLC00LjQzNzIxIDkuMDg2MSwtMC40MTA4IGwgOTAwLjg1NjEsMTc5OS40MzYzMiBjIDQuNTc4MSw5LjE2NjcgMS41ODExLDEzLjE1MDMgLTcuNzM5MywxMi44MDc0IHoiCiAgICAgICBzdHlsZT0iZmlsbDpub25lO3N0cm9rZTojMDAwMDAwO3N0cm9rZS13aWR0aDoxMi4xOTk5OTk4MTtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLWRhc2hhcnJheTpub25lO3N0cm9rZS1kYXNob2Zmc2V0OjAiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEtMC05OCIKICAgICAgIGQ9Im0gMTYwLjA5MDU5LDE5MjQuMTUwNSAyNS41MjQ4LC01NC41MzIyIDUyLjA2ODEsLTM4LjU2OTEgODk5LjMyNjQxLC03ODAuODc0OSBjIDQuNzk5OCwxOC41MTggMS44ODAzLDYuOTMzNiA2LjEzMTUsMzMuOTg5IGwgLTk4My4wNTA4MSw4MzkuOTg3MiB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDQwMTYpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iNjI0Ljg1OSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iNzU4LjEyMzU1IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS04LTIiCiAgICAgICBkPSJtIDExNDEuMDQ5NCwxMDkwLjU3MSBjIC03Ljg5MjIsODYuNjA3NSAtMTcuNzE1OCw4MS41NDQzIC01My4yNDcxLDExOC4wMjA1IGwgLTI2My40MDcyMSwyNDQuNjk5MiAtNzQuOTQ0NSwtMjkuMjM2NyAzOTEuNTk4ODEsLTMzMy40ODMgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQ0MTk2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICA8L2c+Cjwvc3ZnPgo=" alt="CMake based, single-platform projects logo">
</div>
    <div data-view-component="true" class="d-flex flex-column">
      <span data-view-component="true" class="f5 text-bold ml-2">CMake based, single-platform projects</span>
      <span data-view-component="true" class="color-fg-muted ml-2 text-small"></span>
</div>      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/new/main?filename=.github%2Fworkflows%2Fcmake-single-platform.yml&amp;workflow_template=ci%2Fcmake-single-platform" data-hydro-click="{&quot;event_type&quot;:&quot;actions.onboarding_setup_workflow_click&quot;,&quot;payload&quot;:{&quot;repository_id&quot;:713689438,&quot;workflow_template&quot;:&quot;ci/cmake-single-platform&quot;,&quot;view_section&quot;:&quot;repository_sidebar&quot;,&quot;view_rank&quot;:1,&quot;templates_count&quot;:3,&quot;template_creator&quot;:null,&quot;new_with_filter_view&quot;:false,&quot;correlation_id&quot;:&quot;E036:34DEA:28B047:313320:6545E60A&quot;,&quot;category&quot;:&quot;Continuous integration&quot;,&quot;search_query&quot;:null,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="0d0339182a8309ea7a20c6c38722931b8275c446f01d7c519c443fe269551b3f" style="min-width: 80px" aria-describedby="cmake-based-single-platform-projects-description" data-view-component="true" class="Button--secondary Button--small Button ml-auto">    <span class="Button-content">
      <span class="Button-label">Configure<span class="sr-only">&nbsp;CMake based, single-platform projects</span></span>
    </span>
</a>  
</div>  <span id="cmake-based-single-platform-projects-description" aria-hidden="true" data-view-component="true" class="d-flex color-fg-muted f6 ml-5 mt-1 pl-2">Build and test a CMake based project on a single-platform.</span>
</div>
        </li>
        <li class="list-style-none">
          <div data-view-component="true" class="mb-2 p-3 border rounded-2">
  <div data-view-component="true" class="d-flex flex-items-stretch">
    <div aria-hidden="true" style="color: #555555 !important; background-color: var(--color-scale-white) !important; width: 32px !important; height: 32px !important; min-width: 32px !important;" data-view-component="true" class="CircleBadge">
      <img class="CircleBadge-icon" src="data:image/svg+xml;base64,PHN2ZyBmaWxsPSJub25lIiBoZWlnaHQ9IjQ4IiB3aWR0aD0iNDgiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+PHBhdGggZD0iTTQ0LjQ1MyAzNmMuMzM3LS41OC41NDctMS4yMzMuNTQ3LTEuODJWMTMuODJjMC0uNTg3LS4yMS0xLjI0LS41NDctMS44MkwyMy41IDI0eiIgZmlsbD0iIzAwNTk5YyIvPjxwYXRoIGQ9Ik0yNS4zNjIgNDcuNTZsMTcuNzc2LTEwLjE4Yy41MTItLjI5NC45NzgtLjggMS4zMTUtMS4zOEwyMy41IDI0IDIuNTQ3IDM2Yy4zMzguNTguODAzIDEuMDg2IDEuMzE1IDEuMzhsMTcuNzc2IDEwLjE4YzEuMDI0LjU4NyAyLjcuNTg3IDMuNzI0IDB6IiBmaWxsPSIjMDA0NDgyIi8+PHBhdGggZD0iTTQ0LjQ1MyAxMmMtLjMzNy0uNTgtLjgwMy0xLjA4Ni0xLjMxNS0xLjM4TDI1LjM2Mi40NGMtMS4wMjQtLjU4Ny0yLjctLjU4Ny0zLjcyNCAwTDMuODYyIDEwLjYyQzIuODM4IDExLjIwNyAyIDEyLjY0NyAyIDEzLjgydjIwLjM2YzAgLjU4Ny4yMSAxLjI0LjU0NyAxLjgyTDIzLjUgMjR6IiBmaWxsPSIjNjU5YWQyIi8+PGcgZmlsbD0iI2ZmZiI+PHBhdGggZD0iTTIzLjUgMzguMjE4QzE1LjU5NyAzOC4yMTggOS4xNjcgMzEuODQgOS4xNjcgMjRTMTUuNTk3IDkuNzgyIDIzLjUgOS43ODJjNS4xIDAgOS44NTYgMi43MjIgMTIuNDEzIDcuMTA1bC02LjIwNCAzLjU2YTcuMjA4IDcuMjA4IDAgMDAtNi4yMS0zLjU1NmMtMy45NSAwLTcuMTY2IDMuMTg5LTcuMTY2IDcuMTA5czMuMjE1IDcuMTEgNy4xNjcgNy4xMWMyLjU1IDAgNC45My0xLjM2NCA2LjIxLTMuNTU3bDYuMjAzIDMuNTZjLTIuNTU2IDQuMzgzLTcuMzEzIDcuMTA1LTEyLjQxMyA3LjEwNXoiLz48cGF0aCBkPSJNMzcuODMzIDIzLjIxaC0xLjU5MnYtMS41OGgtMS41OTN2MS41OGgtMS41OTJ2MS41OGgxLjU5MnYxLjU4aDEuNTkzdi0xLjU4aDEuNTkyek00My44MDYgMjMuMjFoLTEuNTkzdi0xLjU4SDQwLjYydjEuNThoLTEuNTkydjEuNThoMS41OTJ2MS41OGgxLjU5M3YtMS41OGgxLjU5M3oiLz48L2c+PC9zdmc+" alt="MSBuild based projects logo">
</div>
    <div data-view-component="true" class="d-flex flex-column">
      <span data-view-component="true" class="f5 text-bold ml-2">MSBuild based projects</span>
      <span data-view-component="true" class="color-fg-muted ml-2 text-small"></span>
</div>      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/new/main?filename=.github%2Fworkflows%2Fmsbuild.yml&amp;workflow_template=ci%2Fmsbuild" data-hydro-click="{&quot;event_type&quot;:&quot;actions.onboarding_setup_workflow_click&quot;,&quot;payload&quot;:{&quot;repository_id&quot;:713689438,&quot;workflow_template&quot;:&quot;ci/msbuild&quot;,&quot;view_section&quot;:&quot;repository_sidebar&quot;,&quot;view_rank&quot;:2,&quot;templates_count&quot;:3,&quot;template_creator&quot;:null,&quot;new_with_filter_view&quot;:false,&quot;correlation_id&quot;:&quot;E036:34DEA:28B047:313320:6545E60A&quot;,&quot;category&quot;:&quot;Continuous integration&quot;,&quot;search_query&quot;:null,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="d04b9ad9f7f79e8e87ea7e693c205d9e0d0bdf009cc3c33e9c50ccf13ac2500d" style="min-width: 80px" aria-describedby="msbuild-based-projects-description" data-view-component="true" class="Button--secondary Button--small Button ml-auto">    <span class="Button-content">
      <span class="Button-label">Configure<span class="sr-only">&nbsp;MSBuild based projects</span></span>
    </span>
</a>  
</div>  <span id="msbuild-based-projects-description" aria-hidden="true" data-view-component="true" class="d-flex color-fg-muted f6 ml-5 mt-1 pl-2">Build a MSBuild based project.</span>
</div>
        </li>
        <li class="list-style-none">
          <div data-view-component="true" class="mb-2 p-3 border rounded-2">
  <div data-view-component="true" class="d-flex flex-items-stretch">
    <div aria-hidden="true" style="color: #555555 !important; background-color: var(--color-scale-white) !important; width: 32px !important; height: 32px !important; min-width: 32px !important;" data-view-component="true" class="CircleBadge">
      <img class="CircleBadge-icon" src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiIHN0YW5kYWxvbmU9Im5vIj8+CjwhLS0gQ3JlYXRlZCB3aXRoIElua3NjYXBlIChodHRwOi8vd3d3Lmlua3NjYXBlLm9yZy8pIC0tPgoKPHN2ZwogICB4bWxuczpkYz0iaHR0cDovL3B1cmwub3JnL2RjL2VsZW1lbnRzLzEuMS8iCiAgIHhtbG5zOmNjPSJodHRwOi8vY3JlYXRpdmVjb21tb25zLm9yZy9ucyMiCiAgIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyIKICAgeG1sbnM6c3ZnPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIKICAgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIgogICB4bWxuczp4bGluaz0iaHR0cDovL3d3dy53My5vcmcvMTk5OS94bGluayIKICAgeG1sbnM6c29kaXBvZGk9Imh0dHA6Ly9zb2RpcG9kaS5zb3VyY2Vmb3JnZS5uZXQvRFREL3NvZGlwb2RpLTAuZHRkIgogICB4bWxuczppbmtzY2FwZT0iaHR0cDovL3d3dy5pbmtzY2FwZS5vcmcvbmFtZXNwYWNlcy9pbmtzY2FwZSIKICAgaWQ9InN2ZzI4MTYiCiAgIHZlcnNpb249IjEuMSIKICAgaW5rc2NhcGU6dmVyc2lvbj0iMC40NyByMjI1ODMiCiAgIHdpZHRoPSIyMDcyIgogICBoZWlnaHQ9IjIwNzIiCiAgIHNvZGlwb2RpOmRvY25hbWU9IkNtYWtlLnN2ZyI+CiAgPG1ldGFkYXRhCiAgICAgaWQ9Im1ldGFkYXRhMjgyMiI+CiAgICA8cmRmOlJERj4KICAgICAgPGNjOldvcmsKICAgICAgICAgcmRmOmFib3V0PSIiPgogICAgICAgIDxkYzpmb3JtYXQ+aW1hZ2Uvc3ZnK3htbDwvZGM6Zm9ybWF0PgogICAgICAgIDxkYzp0eXBlCiAgICAgICAgICAgcmRmOnJlc291cmNlPSJodHRwOi8vcHVybC5vcmcvZGMvZGNtaXR5cGUvU3RpbGxJbWFnZSIgLz4KICAgICAgICA8ZGM6dGl0bGUgLz4KICAgICAgPC9jYzpXb3JrPgogICAgPC9yZGY6UkRGPgogIDwvbWV0YWRhdGE+CiAgPGRlZnMKICAgICBpZD0iZGVmczI4MjAiPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0Mjc2Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyNjkxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQyNzgiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDI4MCIKICAgICAgICAgb2Zmc2V0PSIwLjAyMDEyMjA3IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMDFkMjAwO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQyODIiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MjI3Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ViZWJlYztzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQyMjkiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDIzMSIKICAgICAgICAgb2Zmc2V0PSIwLjAwNTE4MjkyIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZDNkM2QzO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQyMzMiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MTI5Ij4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3A0MTMxIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNjYmY1OTU7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMwMWRhMDA7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMTgyNjkyOSIKICAgICAgICAgaWQ9InN0b3A0MTMzIiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDQxMzUiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDM5Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyMWUxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDQwNDEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wNDA0MyIKICAgICAgICAgb2Zmc2V0PSIwLjAxNTQ2NzI5IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDQwNDUiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTkwIj4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzMyMWUxZDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM5OTIiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzk5NCIKICAgICAgICAgb2Zmc2V0PSIwLjAyMDEyMjA3IgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNWE1YmQ3O3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM5OTYiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTQxIj4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3AzOTQzIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNmNmIxYjI7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNjNTFmMWY7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMjgyMTYyNCIKICAgICAgICAgaWQ9InN0b3AzOTQ1IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM5NDciCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODUxIj4KICAgICAgPHN0b3AKICAgICAgICAgaWQ9InN0b3AzODUzIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMzMjFlMWQ7c3RvcC1vcGFjaXR5OjEiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiM1NTU1NDg7c3RvcC1vcGFjaXR5OjAiCiAgICAgICAgIG9mZnNldD0iMC4wMjAxMjIwNyIKICAgICAgICAgaWQ9InN0b3AzODU1IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTciCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODAwIj4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2NiY2FmMjtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM4MDIiIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzgwOCIKICAgICAgICAgb2Zmc2V0PSIwLjAyNjM2NzUzIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NWQyO3N0b3Atb3BhY2l0eTowIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM4MDQiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNzE1Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6Izg0ODQ4NDtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM3MTciIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiNkMmQyZDI7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgaWQ9InN0b3AzNzE5IiAvPgogICAgPC9saW5lYXJHcmFkaWVudD4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50MzY2OSI+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiMwMWEzMDA7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMCIKICAgICAgICAgaWQ9InN0b3AzNjcxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMDFkZjAwO3N0b3Atb3BhY2l0eToxIgogICAgICAgICBvZmZzZXQ9IjEiCiAgICAgICAgIGlkPSJzdG9wMzY3MyIgLz4KICAgIDwvbGluZWFyR3JhZGllbnQ+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM2NTMiPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojYjQwZTBlO3N0b3Atb3BhY2l0eToxIgogICAgICAgICBvZmZzZXQ9IjAiCiAgICAgICAgIGlkPSJzdG9wMzY1NSIgLz4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmNTk1OTtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBpZD0ic3RvcDM2NTciIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjQ1Ij4KICAgICAgPHN0b3AKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6IzEwMTFhMTtzdG9wLW9wYWNpdHk6MSIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBpZD0ic3RvcDM2NDciIC8+CiAgICAgIDxzdG9wCiAgICAgICAgIHN0eWxlPSJzdG9wLWNvbG9yOiM2OTY5ZTE7c3RvcC1vcGFjaXR5OjEiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgaWQ9InN0b3AzNjQ5IiAvPgogICAgPC9saW5lYXJHcmFkaWVudD4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzY0NSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM2NTEiCiAgICAgICB4MT0iLTE1MjcuMzUwNyIKICAgICAgIHkxPSIxMzg3LjUyMDYiCiAgICAgICB4Mj0iLTEwODYuMTE2MSIKICAgICAgIHkyPSI0NTQuMTM5NjgiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJ0cmFuc2xhdGUoMjEwNCw0OCkiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM2NTMiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjU5IgogICAgICAgeDE9Ii05MzMuMzgwOTIiCiAgICAgICB5MT0iNjgwLjQxMzg4IgogICAgICAgeDI9Ii0zMTYuNzgzODQiCiAgICAgICB5Mj0iMTcyMS4yNzUiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJ0cmFuc2xhdGUoMjEwNCw0OCkiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM2NjkiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzNjc1IgogICAgICAgeDE9Ii02NzguODIyNTEiCiAgICAgICB5MT0iMTc5NC44MTQxIgogICAgICAgeDI9Ii0xNTQ5Ljk3OCIKICAgICAgIHkyPSIxNzIxLjI3NSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09InRyYW5zbGF0ZSgyMTA0LDQ4KSIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzcxNSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM3MjEiCiAgICAgICB4MT0iLTk4NC4yOTI2IgogICAgICAgeTE9IjE0NzIuMzczNSIKICAgICAgIHgyPSItOTk1LjYwNjMyIgogICAgICAgeTI9IjEwOTMuMzY0MyIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09InRyYW5zbGF0ZSgyMTA0LDQ4KSIgLz4KICAgIDxmaWx0ZXIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgIGlkPSJmaWx0ZXIzNzc3Ij4KICAgICAgPGZlR2F1c3NpYW5CbHVyCiAgICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIKICAgICAgICAgc3RkRGV2aWF0aW9uPSI5LjA3NjY1ODgiCiAgICAgICAgIGlkPSJmZUdhdXNzaWFuQmx1cjM3NzkiIC8+CiAgICA8L2ZpbHRlcj4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50MzgwMCIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4MDYiCiAgICAgICB4MT0iLTEyMzguMDQ2NSIKICAgICAgIHkxPSI5MTkuNzE0NDgiCiAgICAgICB4Mj0iLTU1NS44MjM3OSIKICAgICAgIHkyPSI5MTcuNTEyODIiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMS45MTg4OTM5LDAuOTgzNDkzODUsLTAuNDU2MTEzMDgsMC44ODk5MjE4MywzNDc2LjA0MTgsMTI4NS4yNjYpIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTEzLjQwNTgyIgogICAgICAgeDI9Ii01NTIuODQwMzkiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KC0xLjk0MDcwMjMsMC45Mzk3Mjc4MSwtMC40MzU4MTU4MiwtMC45MDAwMzU4OCwtNDEyLjIxNTExLDMxNjguNjUwNikiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4MjgiCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQzODUxIgogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzODUxLTYiPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTMtMiIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMzIxZTFkO3N0b3Atb3BhY2l0eToxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIgogICAgICAgICBvZmZzZXQ9IjAuMDIwMTIyMDciCiAgICAgICAgIGlkPSJzdG9wMzg1NS00IiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTctNSIKICAgICAgICAgb2Zmc2V0PSIxIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojZmZmZmZmO3N0b3Atb3BhY2l0eTowOyIgLz4KICAgIDwvbGluZWFyR3JhZGllbnQ+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTUuMzAwMDUiCiAgICAgICB4Mj0iLTU1NS44MzcyOCIKICAgICAgIHkxPSI5MTkuNzE0NDgiCiAgICAgICB4MT0iLTEyMzguMDQ2NSIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMC4wMjcwMDI5NSwtMi4xNTYwNjA4LDAuOTAzNjg3NDUsMC4wMTMxNDUwNywxMTQuMzcwMzksLTc1NS40MjkwNykiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDM4NzciCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQzODUxLTYiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuNjE4MSIKICAgICAgIHgyPSItNTU0Ljg5NzQ2IgogICAgICAgeTE9IjkxOS43MTQ0OCIKICAgICAgIHgxPSItMTIzOC4wNDY1IgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgzLjEzNjI1MTMsMC4wMDI2MTgwOSwwLjA2NDMxMDczLDAuNzYwMTUxMSw0OTM2LjEzNTYsNjguMTMzMjg2KSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50MzkxOCIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDM5NDEiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuNTEyODIiCiAgICAgICB4Mj0iLTU1NS44MjM3OSIKICAgICAgIHkxPSI5MTguNDQzNzkiCiAgICAgICB4MT0iLTEyMjkuMzI3IgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgtMi4xNTEwMjE1LC0wLjA3MDI1Nzk3LC0wLjAzODIxMTg4LC0wLjQ4MjEwNjg3LC0xNDk4LjQ2OSwxMDU4LjAxMDQpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQzOTY3IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50Mzk5MCIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgeTI9IjkxNy41MTI4MiIKICAgICAgIHgyPSItNTU1LjgyMzc5IgogICAgICAgeTE9IjkyMC40MTc5NyIKICAgICAgIHgxPSItMTIzNy4xMTEyIgogICAgICAgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgtMS4zNzk4MTY0LC0xLjY1Njk2MTIsMC43Njg0NDU4LC0wLjYzOTkxNDg5LC0yMTk1LjYzNjcsNDEzLjg5MzUpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDE2IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50NDAzOSIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50Mzg1MS02MiI+CiAgICAgIDxzdG9wCiAgICAgICAgIGlkPSJzdG9wMzg1My0zOCIKICAgICAgICAgb2Zmc2V0PSIwIgogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojMzIxZTFkO3N0b3Atb3BhY2l0eToxIiAvPgogICAgICA8c3RvcAogICAgICAgICBzdHlsZT0ic3RvcC1jb2xvcjojNTU1NTQ4O3N0b3Atb3BhY2l0eTowIgogICAgICAgICBvZmZzZXQ9IjAuMDE3MzkyNzEiCiAgICAgICAgIGlkPSJzdG9wMzg1NS0yIiAvPgogICAgICA8c3RvcAogICAgICAgICBpZD0ic3RvcDM4NTctNjIiCiAgICAgICAgIG9mZnNldD0iMSIKICAgICAgICAgc3R5bGU9InN0b3AtY29sb3I6I2ZmZmZmZjtzdG9wLW9wYWNpdHk6MDsiIC8+CiAgICA8L2xpbmVhckdyYWRpZW50PgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTEwLjY0NjE4IgogICAgICAgeDI9Ii01NTEuMTI1NDkiCiAgICAgICB5MT0iOTE1LjczNjQ1IgogICAgICAgeDE9Ii0xMjQyLjIzMzQiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KDAuODUzMTIwNDQsLTEuOTgwMzAyOSwwLjkxODQwMTM1LDAuMzk1NjUwMDYsMjE4Mi4yOTE4LC04ODUuOTM0NTgpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MDY1IgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50Mzg1MS02MiIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICAgIDxsaW5lYXJHcmFkaWVudAogICAgICAgeTI9IjkxNS40ODAxIgogICAgICAgeDI9Ii01NTUuODY2ODIiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KDEuMzgyOTkwNCwxLjY1NDMxMywtMC43NjcyMTc2LDAuNjQxMzg2OSwyNTI5LjgzODksMzQzMi44NzE5KSIKICAgICAgIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIgogICAgICAgaWQ9ImxpbmVhckdyYWRpZW50NDEwNiIKICAgICAgIHhsaW5rOmhyZWY9IiNsaW5lYXJHcmFkaWVudDQxMjkiCiAgICAgICBpbmtzY2FwZTpjb2xsZWN0PSJhbHdheXMiIC8+CiAgICA8bGluZWFyR3JhZGllbnQKICAgICAgIHkyPSI5MTcuMTg2NjUiCiAgICAgICB4Mj0iLTg2Ni44NjgwNCIKICAgICAgIHkxPSI5MTguMDk4NzUiCiAgICAgICB4MT0iLTEyNDIuNTU4MiIKICAgICAgIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMS4zODI5OTA0LDEuNjU0MzEzLC0wLjc2NzIxNzYsMC42NDEzODY5LDI5MzAuNTM1LDMwOTYuOTM3NikiCiAgICAgICBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIKICAgICAgIGlkPSJsaW5lYXJHcmFkaWVudDQxOTYiCiAgICAgICB4bGluazpocmVmPSIjbGluZWFyR3JhZGllbnQ0MjI3IgogICAgICAgaW5rc2NhcGU6Y29sbGVjdD0iYWx3YXlzIiAvPgogICAgPGxpbmVhckdyYWRpZW50CiAgICAgICB5Mj0iOTE3LjUxMjgyIgogICAgICAgeDI9Ii01NTUuODIzNzkiCiAgICAgICB5MT0iOTE5LjcxNDQ4IgogICAgICAgeDE9Ii0xMjM4LjA0NjUiCiAgICAgICBncmFkaWVudFRyYW5zZm9ybT0ibWF0cml4KC0wLjgzMTc5MTgzLDEuOTg5MzM0LC0wLjgzMzEyMjIxLC0wLjM1MDMzMDExLDE0NDcuNTc1Miw0NjAzLjY4MzYpIgogICAgICAgZ3JhZGllbnRVbml0cz0idXNlclNwYWNlT25Vc2UiCiAgICAgICBpZD0ibGluZWFyR3JhZGllbnQ0MjUzIgogICAgICAgeGxpbms6aHJlZj0iI2xpbmVhckdyYWRpZW50NDI3NiIKICAgICAgIGlua3NjYXBlOmNvbGxlY3Q9ImFsd2F5cyIgLz4KICA8L2RlZnM+CiAgPHNvZGlwb2RpOm5hbWVkdmlldwogICAgIHBhZ2Vjb2xvcj0iI2ZmZmZmZiIKICAgICBib3JkZXJjb2xvcj0iIzY2NjY2NiIKICAgICBib3JkZXJvcGFjaXR5PSIxIgogICAgIG9iamVjdHRvbGVyYW5jZT0iMTAiCiAgICAgZ3JpZHRvbGVyYW5jZT0iMTAiCiAgICAgZ3VpZGV0b2xlcmFuY2U9IjEwIgogICAgIGlua3NjYXBlOnBhZ2VvcGFjaXR5PSIwIgogICAgIGlua3NjYXBlOnBhZ2VzaGFkb3c9IjIiCiAgICAgaW5rc2NhcGU6d2luZG93LXdpZHRoPSIxMjgwIgogICAgIGlua3NjYXBlOndpbmRvdy1oZWlnaHQ9Ijc1MCIKICAgICBpZD0ibmFtZWR2aWV3MjgxOCIKICAgICBzaG93Z3JpZD0iZmFsc2UiCiAgICAgaW5rc2NhcGU6em9vbT0iMC4yNSIKICAgICBpbmtzY2FwZTpjeD0iNjY4LjQ1NTQ1IgogICAgIGlua3NjYXBlOmN5PSI3NjkuMjYzNDEiCiAgICAgaW5rc2NhcGU6d2luZG93LXg9Ii04IgogICAgIGlua3NjYXBlOndpbmRvdy15PSItOCIKICAgICBpbmtzY2FwZTp3aW5kb3ctbWF4aW1pemVkPSIxIgogICAgIGlua3NjYXBlOmN1cnJlbnQtbGF5ZXI9InN2ZzI4MTYiCiAgICAgc2hvd2d1aWRlcz0idHJ1ZSIKICAgICBpbmtzY2FwZTpndWlkZS1iYm94PSJ0cnVlIiAvPgogIDxnCiAgICAgaWQ9ImczNjY4Ij4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjY2MiCiAgICAgICBpZD0icGF0aDI4MzEtMSIKICAgICAgIGQ9Im0gMTk3MS41NTc1LDE5MzkuOTEzNyAtMTc5Ny4wODY5MSwtMC4xMjU4IGMgLTExLjAyOTEsLTEuMjIyMSAtOC41NDAzLC02LjcxMyAtNS45OTU4LC0xMi4yMjE1IEwgMTA2OS4zNTQ2LDEyOC4wODA4IGMgMy4zMTM5LC01LjI3NzIgNi4yODgzLC00LjQzNzIgOS4wODYxLC0wLjQxMDggbCA5MDAuODU2MSwxNzk5LjQzNjMgYyA0LjU3ODEsOS4xNjY3IDEuNTgxMSwxMy4xNTAzIC03LjczOTMsMTIuODA3NCB6IgogICAgICAgc3R5bGU9ImZpbGw6bm9uZTtzdHJva2U6IzNhMzkzYjtzdHJva2Utd2lkdGg6MjIuNTAwMDAwMDAwMDAwMDAwMDA7c3Ryb2tlLW1pdGVybGltaXQ6NDtzdHJva2Utb3BhY2l0eToxO3N0cm9rZS1kYXNoYXJyYXk6bm9uZTtzdHJva2UtZGFzaG9mZnNldDowO2ZpbHRlcjp1cmwoI2ZpbHRlcjM3NzcpO29wYWNpdHk6MC41Mzk3NDg5NSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2MiCiAgICAgICBpZD0icGF0aDI4MjgiCiAgICAgICBkPSJNIDExNDMuMzA4MywxMDg0LjMyMTcgMTU4LjY5MTE5LDE5MjYuMDYxOCAxMDYwLjUxMDcsMTI0LjEwMjE0IDExNDMuMzA4MywxMDg0LjMyMTcgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNjUxKTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEiCiAgICAgICBkPSJtIDEwNjAuNTYzNywxMjUuNjE5NTkgYyAxMy40MTUyLDgwLjcxNTkxIDExLjk0LDk0Ljc5MDMxIC0xOC4wMzQ5LDE0MC4wNzMxNiBMIDI0NS45MjAyOSwxODQ0LjgzMiAxNjEuMzE3MzksMTkyMS43NTg4IDEwNjAuNTYzNywxMjUuNjE5NTkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzODA2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS0wLTkiCiAgICAgICBkPSJtIDExNDcuMTg4LDEwODMuMTUzNiAtNTAuMTY3MSw0MC4wNTM3IC01Mi43ODg3LC04ODguNzI2MSBjIC00LjA1MzMsLTQ3LjQzNDEgLTYuMjQxNiwtNDMuMTcwNzYgLTYuNTQ5MiwtNjguMTcwMDQgbCAyNS4xMDA0LC00OC45NTIwOCA4NC40MDQ2LDk2NS43OTQ1MiB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDM5NjcpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjYyIKICAgICAgIGlkPSJwYXRoMjgyOC00IgogICAgICAgZD0iTSAxMTg4LjkzNjIsMTYwOS45OTM5IDEwNjAuOTc4OCwxMjMuOTQwMjEgMTk2My45NTI5LDE5MjYuMjI2MSAxMTg4LjkzNjIsMTYwOS45OTM5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50MzY1OSk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOiMwMDAwMDA7c3Ryb2tlLW9wYWNpdHk6MSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTkiCiAgICAgICBkPSJtIDEwNjAuOTA3MSwxMjAuMDc3MzEgYyAyNC4xNzQ5LDMwLjA0NTU4IDM5LjYwOCw3NS45Mzk5MSA0OC45NjU0LDExMi4xNzg0MyBsIDE3OS4zNzQyLDE0MTUuMTA0MzYgLTk4LjQyNzYsLTM4LjQzOTEgLTEyOS45MTIsLTE0ODguODQzNjkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzOTE4KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBzb2RpcG9kaTpub2RldHlwZXM9ImNjY2MiCiAgICAgICBpZD0icGF0aDI4MjgtMSIKICAgICAgIGQ9Ik0gNzQzLjQwOTI5LDE0MjMuODM0OSAxOTY0Ljg3OTQsMTkyNi4wMDg1IDE1OC45Mjc5OSwxOTI1LjgxIDc0My40MDkyOSwxNDIzLjgzNDkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNjc1KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utb3BhY2l0eToxIiAvPgogICAgPHBhdGgKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAiCiAgICAgICBkPSJtIDE5NjMuNjg5MSwxOTI2LjUyNzcgLTU2LjcxMzksLTI0LjYxNjkgLTc5NS45ODU0LC0xNjAzLjA1MjE3IGMgLTIxLjk0NzIsLTI0LjM3ODQ1IC0zNC4zNDQ5LC0zOS42MjMwNiAtNDEuMjE5MiwtNTEuOTUxOTIgLTEuMTI2NCwtMzIuMzE4OCAtMi45NDMsLTYxLjA4MTMgLTkuOTEzOCwtMTI2LjI2MjYgbCA5MDMuODMyMywxODA1Ljg4MzU5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50MzgyOCk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjIgogICAgICAgaWQ9InBhdGgyODI4LTQtNyIKICAgICAgIGQ9Im0gNzQ1LjI2NjA5LDE0MjUuMDQ3NSAzOTcuNDIyODEsLTMzOS4wMzgxIDU1LjMyOTgsNTIzLjU3MTYgLTQ1Mi43NTI2MSwtMTg0LjUzMzUgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQzNzIxKTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6IzAwMDAwMDtzdHJva2Utd2lkdGg6NDtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLWRhc2hhcnJheTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iNjI0Ljg1OSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iNzU4LjEyMzU1IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEtOCIKICAgICAgIGQ9Im0gNzQyLjcyODI5LDE0MjYuMjU1NCBjIDE3LjQ4MjEsNi43NTA0IDIwLjg0MTksOC4yODI3IDM1LjgwNiwxNC40MjA1IC0xNi4xNTkzLDEzLjgzMDUgLTY5Ljg4LDg2LjQ4ODUgLTkxLjQyODEsMTAzLjg0OTkgbCAtNDI4LjQwNzIsMzYyLjY5OTIgLTk4LjgxOTUsMTguMzg4MyA1ODIuODQ4OCwtNDk5LjM1NzkgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQ0MTA2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICAgIDxwYXRoCiAgICAgICBpbmtzY2FwZTp0cmFuc2Zvcm0tY2VudGVyLXk9IjM0Ny4yMjA3NSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iLTgyMS4yMjA3OSIKICAgICAgIHNvZGlwb2RpOm5vZGV0eXBlcz0iY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAtOC02IgogICAgICAgZD0ibSAxOTYyLjg2NzYsMTkyNS40NTk0IC02OC4wNjQzLC0xLjA0ODYgLTExNzQuODY2ODEsLTQ3OS42MzMyIDIzLjUwNDgsLTE4LjcxNjcgNDcwLjc2MjQxLDE5MS45NDE2IDc0OC42NjM5LDMwNy40NTY5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50NDI1Myk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS0wLTgiCiAgICAgICBkPSJtIDE1OS45ODI1OSwxOTI1LjQ0MDUgNTAuMjk1OCwtNDIuODg2NCAxNjQzLjAwODMxLDAuMTUzMSAxMTAuMzI3Niw0Mi43MjcgLTE4MDMuNjMxNzEsMC4wMSB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDM4NzcpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iMzY5Ljk2NzI1IgogICAgICAgaW5rc2NhcGU6dHJhbnNmb3JtLWNlbnRlci14PSItODg3LjUxNTQ0IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2NjIgogICAgICAgaWQ9InJlY3QzNzgxLTAtNyIKICAgICAgIGQ9Im0gMTE5OS44NDY5LDE2MTAuOTg3NCAtMi4xNjA4LC0yMi4zMzg2IDYxMC41ODg0LDIzNS4xNjc4IGMgMzkuNDU1NSwxOC43NjYxIDY5LjEwNTgsMjcuMjk5MyA4OC44MjQ5LDQzLjMyNyAxMi42OTQ3LDUuMjA4MSAzNC43MjQxLDEyLjYzNDUgNDYuMTEzNSwxNi40NzM2IDEzLjkyNjQsOS4yMjE5IDExLjUwNjUsMjMuOTU4MyAyMC4zMTc3LDQxLjU0MzEgbCAtNzYzLjY4MzcsLTMxNC4xNzI5IHoiCiAgICAgICBzdHlsZT0iZmlsbDp1cmwoI2xpbmVhckdyYWRpZW50NDA2NSk7ZmlsbC1vcGFjaXR5OjE7ZmlsbC1ydWxlOm5vbnplcm87c3Ryb2tlOm5vbmUiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2NjIgogICAgICAgaWQ9InBhdGgyODMxIgogICAgICAgZD0ibSAxOTU4LjU4NjgsMTkzMS44MDcgLTE3OTcuMDg2OTEsLTAuMTI1OCBjIC0xMS4wMjkxLC0xLjIyMjEgLTguNTQwMywtNi43MTMgLTUuOTk1OCwtMTIuMjIxNSBMIDEwNTYuMzgzOSwxMTkuOTc0MDggYyAzLjMxMzksLTUuMjc3MTggNi4yODgzLC00LjQzNzIxIDkuMDg2MSwtMC40MTA4IGwgOTAwLjg1NjEsMTc5OS40MzYzMiBjIDQuNTc4MSw5LjE2NjcgMS41ODExLDEzLjE1MDMgLTcuNzM5MywxMi44MDc0IHoiCiAgICAgICBzdHlsZT0iZmlsbDpub25lO3N0cm9rZTojMDAwMDAwO3N0cm9rZS13aWR0aDoxMi4xOTk5OTk4MTtzdHJva2UtbWl0ZXJsaW1pdDo0O3N0cm9rZS1vcGFjaXR5OjE7c3Ryb2tlLWRhc2hhcnJheTpub25lO3N0cm9rZS1kYXNob2Zmc2V0OjAiIC8+CiAgICA8cGF0aAogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjY2MiCiAgICAgICBpZD0icmVjdDM3ODEtMC05OCIKICAgICAgIGQ9Im0gMTYwLjA5MDU5LDE5MjQuMTUwNSAyNS41MjQ4LC01NC41MzIyIDUyLjA2ODEsLTM4LjU2OTEgODk5LjMyNjQxLC03ODAuODc0OSBjIDQuNzk5OCwxOC41MTggMS44ODAzLDYuOTMzNiA2LjEzMTUsMzMuOTg5IGwgLTk4My4wNTA4MSw4MzkuOTg3MiB6IgogICAgICAgc3R5bGU9ImZpbGw6dXJsKCNsaW5lYXJHcmFkaWVudDQwMTYpO2ZpbGwtb3BhY2l0eToxO2ZpbGwtcnVsZTpub256ZXJvO3N0cm9rZTpub25lIiAvPgogICAgPHBhdGgKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteT0iNjI0Ljg1OSIKICAgICAgIGlua3NjYXBlOnRyYW5zZm9ybS1jZW50ZXIteD0iNzU4LjEyMzU1IgogICAgICAgc29kaXBvZGk6bm9kZXR5cGVzPSJjY2NjYyIKICAgICAgIGlkPSJyZWN0Mzc4MS04LTIiCiAgICAgICBkPSJtIDExNDEuMDQ5NCwxMDkwLjU3MSBjIC03Ljg5MjIsODYuNjA3NSAtMTcuNzE1OCw4MS41NDQzIC01My4yNDcxLDExOC4wMjA1IGwgLTI2My40MDcyMSwyNDQuNjk5MiAtNzQuOTQ0NSwtMjkuMjM2NyAzOTEuNTk4ODEsLTMzMy40ODMgeiIKICAgICAgIHN0eWxlPSJmaWxsOnVybCgjbGluZWFyR3JhZGllbnQ0MTk2KTtmaWxsLW9wYWNpdHk6MTtmaWxsLXJ1bGU6bm9uemVybztzdHJva2U6bm9uZSIgLz4KICA8L2c+Cjwvc3ZnPgo=" alt="CMake based, multi-platform projects logo">
</div>
    <div data-view-component="true" class="d-flex flex-column">
      <span data-view-component="true" class="f5 text-bold ml-2">CMake based, multi-platform projects</span>
      <span data-view-component="true" class="color-fg-muted ml-2 text-small"></span>
</div>      <a href="https://github.com/Tharakeswar9515/software-engineering-192211770/new/main?filename=.github%2Fworkflows%2Fcmake-multi-platform.yml&amp;workflow_template=ci%2Fcmake-multi-platform" data-hydro-click="{&quot;event_type&quot;:&quot;actions.onboarding_setup_workflow_click&quot;,&quot;payload&quot;:{&quot;repository_id&quot;:713689438,&quot;workflow_template&quot;:&quot;ci/cmake-multi-platform&quot;,&quot;view_section&quot;:&quot;repository_sidebar&quot;,&quot;view_rank&quot;:3,&quot;templates_count&quot;:3,&quot;template_creator&quot;:null,&quot;new_with_filter_view&quot;:false,&quot;correlation_id&quot;:&quot;E036:34DEA:28B047:313320:6545E60A&quot;,&quot;category&quot;:&quot;Continuous integration&quot;,&quot;search_query&quot;:null,&quot;originating_url&quot;:&quot;https://github.com/Tharakeswar9515/software-engineering-192211770&quot;,&quot;user_id&quot;:122510255}}" data-hydro-click-hmac="9606ca078165021c32ffc45513f155a98561482f106d5d8a83d380d08dfb5cf3" style="min-width: 80px" aria-describedby="cmake-based-multi-platform-projects-description" data-view-component="true" class="Button--secondary Button--small Button ml-auto">    <span class="Button-content">
      <span class="Button-label">Configure<span class="sr-only">&nbsp;CMake based, multi-platform projects</span></span>
    </span>
</a>  
</div>  <span id="cmake-based-multi-platform-projects-description" aria-hidden="true" data-view-component="true" class="d-flex color-fg-muted f6 ml-5 mt-1 pl-2">Build and test a CMake based project on multiple platforms.</span>
</div>
        </li>
    </ol>
    <div data-view-component="true" class="d-flex flex-justify-between">
      <a data-analytics-event="{&quot;category&quot;:&quot;suggested_workflows_in_repository_sidebar&quot;,&quot;action&quot;:&quot;clicked_on_see_more_button&quot;,&quot;label&quot;:&quot;owner:122510255;ref_cta:configure;ref_loc:respository_sidebar&quot;}" href="https://github.com/Tharakeswar9515/software-engineering-192211770/actions/new" data-view-component="true" class="Link">More workflows</a>
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-notice-dismiss" data-turbo="false" action="https://github.com/users/Tharakeswar9515/dismiss_repository_notice" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="delete" autocomplete="off"><input type="hidden" name="authenticity_token" value="v21vpasqyhyt15h1kEpxW5KM8YodUNv7tW8jRiCAq1aw63n5UvoRCxGLqSdu_g6XEnPqFDgnUVGmXozA6Yb7qg" autocomplete="off">
        <input type="hidden" name="notice_name" value="repo_suggested_workflows">
        <input type="hidden" name="repository_id" value="713689438">
          <button data-analytics-event="{&quot;category&quot;:&quot;suggested_workflows_in_repository_sidebar&quot;,&quot;action&quot;:&quot;dismissed_component&quot;,&quot;label&quot;:&quot;owner:122510255;ref_cta:configure;ref_loc:respository_sidebar&quot;}" type="submit" data-view-component="true" class="Button--link Button--medium Button text-small color-fg-muted text-normal">    <span class="Button-content">
      <span class="Button-label">Dismiss suggestions</span>
    </span>
</button>  

</form></div>  </div>
</div>

      </div>
</div>
  
</div></div>

  </div>


  </div>

</turbo-frame>


    </main>
  </div>

  </div>

          <footer class="footer width-full container-xl p-responsive" role="contentinfo">
  <h2 class="sr-only">Footer</h2>

  <div class="position-relative d-flex flex-items-center pb-2 f6 color-fg-muted border-top color-border-muted flex-column-reverse flex-lg-row flex-wrap flex-lg-nowrap mt-6 pt-6">
    <div class="list-style-none d-flex flex-wrap col-0 col-lg-2 flex-justify-start flex-lg-justify-between mb-2 mb-lg-0">
      <div class="mt-2 mt-lg-0 d-flex flex-items-center">
        <a aria-label="Homepage" title="GitHub" class="footer-octicon mr-2" href="https://github.com/">
          <svg aria-hidden="true" height="24" viewBox="0 0 16 16" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M8 0c4.42 0 8 3.58 8 8a8.013 8.013 0 0 1-5.45 7.59c-.4.08-.55-.17-.55-.38 0-.27.01-1.13.01-2.2 0-.75-.25-1.23-.54-1.48 1.78-.2 3.65-.88 3.65-3.95 0-.88-.31-1.59-.82-2.15.08-.2.36-1.02-.08-2.12 0 0-.67-.22-2.2.82-.64-.18-1.32-.27-2-.27-.68 0-1.36.09-2 .27-1.53-1.03-2.2-.82-2.2-.82-.44 1.1-.16 1.92-.08 2.12-.51.56-.82 1.28-.82 2.15 0 3.06 1.86 3.75 3.64 3.95-.23.2-.44.55-.51 1.07-.46.21-1.61.55-2.33-.66-.15-.24-.6-.83-1.23-.82-.67.01-.27.38.01.53.34.19.73.9.82 1.13.16.45.68 1.31 2.69.94 0 .67.01 1.3.01 1.49 0 .21-.15.45-.55.38A7.995 7.995 0 0 1 0 8c0-4.42 3.58-8 8-8Z"></path>
</svg>
</a>        <span>
        © 2023 GitHub, Inc.
        </span>
      </div>
    </div>

    <nav aria-label="Footer" class="col-12 col-lg-8">
      <h3 class="sr-only" id="sr-footer-heading">Footer navigation</h3>
      <ul class="list-style-none d-flex flex-wrap col-12 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0" aria-labelledby="sr-footer-heading">
          <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to terms&quot;,&quot;label&quot;:&quot;text:terms&quot;}">Terms</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to privacy&quot;,&quot;label&quot;:&quot;text:privacy&quot;}">Privacy</a></li>
          <li class="mr-3 mr-lg-0"><a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to security&quot;,&quot;label&quot;:&quot;text:security&quot;}" href="https://github.com/security">Security</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://www.githubstatus.com/" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to status&quot;,&quot;label&quot;:&quot;text:status&quot;}">Status</a></li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to help, text:Docs" href="https://docs.github.com/">Docs</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://support.github.com/?tags=dotcom-footer" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to contact&quot;,&quot;label&quot;:&quot;text:contact&quot;}">Contact GitHub</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://github.com/pricing" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to Pricing&quot;,&quot;label&quot;:&quot;text:Pricing&quot;}">Pricing</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to api&quot;,&quot;label&quot;:&quot;text:api&quot;}">API</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://services.github.com/" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to training&quot;,&quot;label&quot;:&quot;text:training&quot;}">Training</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://github.blog/" data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to blog&quot;,&quot;label&quot;:&quot;text:blog&quot;}">Blog</a></li>
          <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>
      </ul>
    </nav>
  </div>

  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 color-fg-muted"></span>
  </div>
</footer>




  <div id="ajax-error-message" class="ajax-error-message flash flash-error" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
    </button>
    You can’t perform that action at this time.
  </div>

    <template id="site-details-dialog"></template>

    <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box color-shadow-large" style="width:360px;"></div>
</div>

    <template id="snippet-clipboard-copy-button"></template>
<template id="snippet-clipboard-copy-button-unpositioned"></template>


    <style>
      .user-mention[href$="/Tharakeswar9515"] {
        color: var(--color-user-mention-fg);
        background-color: var(--color-user-mention-bg);
        border-radius: 2px;
        margin-left: -2px;
        margin-right: -2px;
        padding: 0 2px;
      }
    </style>


    </div>

    <div id="js-global-screen-reader-notice" class="sr-only" aria-live="polite"></div>
    <div id="js-global-screen-reader-notice-assertive" class="sr-only" aria-live="assertive"></div>
  


</body></html>