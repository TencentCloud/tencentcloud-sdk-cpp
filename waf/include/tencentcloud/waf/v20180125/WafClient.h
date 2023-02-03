/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
#define TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddDomainWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddDomainWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateAccessExportRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateAccessExportResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAccessExportRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAccessExportResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteDownloadRecordRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteDownloadRecordResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessExportsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessExportsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessIndexRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessIndexResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAutoDenyIPRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAutoDenyIPResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpHitItemsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpHitItemsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAccessPeriodRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAccessPeriodResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceResponse.h>
#include <tencentcloud/waf/v20180125/model/PostAttackDownloadTaskRequest.h>
#include <tencentcloud/waf/v20180125/model/PostAttackDownloadTaskResponse.h>
#include <tencentcloud/waf/v20180125/model/SearchAccessLogRequest.h>
#include <tencentcloud/waf/v20180125/model/SearchAccessLogResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertIpAccessControlResponse.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            class WafClient : public AbstractClient
            {
            public:
                WafClient(const Credential &credential, const std::string &region);
                WafClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCustomRuleResponse> AddCustomRuleOutcome;
                typedef std::future<AddCustomRuleOutcome> AddCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomRuleRequest&, AddCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDomainWhiteRuleResponse> AddDomainWhiteRuleOutcome;
                typedef std::future<AddDomainWhiteRuleOutcome> AddDomainWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddDomainWhiteRuleRequest&, AddDomainWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddSpartaProtectionResponse> AddSpartaProtectionOutcome;
                typedef std::future<AddSpartaProtectionOutcome> AddSpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddSpartaProtectionRequest&, AddSpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessExportResponse> CreateAccessExportOutcome;
                typedef std::future<CreateAccessExportOutcome> CreateAccessExportOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateAccessExportRequest&, CreateAccessExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessExportResponse> DeleteAccessExportOutcome;
                typedef std::future<DeleteAccessExportOutcome> DeleteAccessExportOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAccessExportRequest&, DeleteAccessExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttackDownloadRecordResponse> DeleteAttackDownloadRecordOutcome;
                typedef std::future<DeleteAttackDownloadRecordOutcome> DeleteAttackDownloadRecordOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAttackDownloadRecordRequest&, DeleteAttackDownloadRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackDownloadRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainWhiteRulesResponse> DeleteDomainWhiteRulesOutcome;
                typedef std::future<DeleteDomainWhiteRulesOutcome> DeleteDomainWhiteRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteDomainWhiteRulesRequest&, DeleteDomainWhiteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainWhiteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDownloadRecordResponse> DeleteDownloadRecordOutcome;
                typedef std::future<DeleteDownloadRecordOutcome> DeleteDownloadRecordOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteDownloadRecordRequest&, DeleteDownloadRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDownloadRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIpAccessControlResponse> DeleteIpAccessControlOutcome;
                typedef std::future<DeleteIpAccessControlOutcome> DeleteIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteIpAccessControlRequest&, DeleteIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSessionResponse> DeleteSessionOutcome;
                typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSessionRequest&, DeleteSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessExportsResponse> DescribeAccessExportsOutcome;
                typedef std::future<DescribeAccessExportsOutcome> DescribeAccessExportsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessExportsRequest&, DescribeAccessExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessFastAnalysisResponse> DescribeAccessFastAnalysisOutcome;
                typedef std::future<DescribeAccessFastAnalysisOutcome> DescribeAccessFastAnalysisOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessFastAnalysisRequest&, DescribeAccessFastAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessFastAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessIndexResponse> DescribeAccessIndexOutcome;
                typedef std::future<DescribeAccessIndexOutcome> DescribeAccessIndexOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessIndexRequest&, DescribeAccessIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoDenyIPResponse> DescribeAutoDenyIPOutcome;
                typedef std::future<DescribeAutoDenyIPOutcome> DescribeAutoDenyIPOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAutoDenyIPRequest&, DescribeAutoDenyIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDenyIPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainDetailsSaasResponse> DescribeDomainDetailsSaasOutcome;
                typedef std::future<DescribeDomainDetailsSaasOutcome> DescribeDomainDetailsSaasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainDetailsSaasRequest&, DescribeDomainDetailsSaasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailsSaasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainWhiteRulesResponse> DescribeDomainWhiteRulesOutcome;
                typedef std::future<DescribeDomainWhiteRulesOutcome> DescribeDomainWhiteRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainWhiteRulesRequest&, DescribeDomainWhiteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainWhiteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowTrendResponse> DescribeFlowTrendOutcome;
                typedef std::future<DescribeFlowTrendOutcome> DescribeFlowTrendOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeFlowTrendRequest&, DescribeFlowTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpAccessControlResponse> DescribeIpAccessControlOutcome;
                typedef std::future<DescribeIpAccessControlOutcome> DescribeIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeIpAccessControlRequest&, DescribeIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpHitItemsResponse> DescribeIpHitItemsOutcome;
                typedef std::future<DescribeIpHitItemsOutcome> DescribeIpHitItemsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeIpHitItemsRequest&, DescribeIpHitItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpHitItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCdcClbWafRegionsResponse> DescribeUserCdcClbWafRegionsOutcome;
                typedef std::future<DescribeUserCdcClbWafRegionsOutcome> DescribeUserCdcClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserCdcClbWafRegionsRequest&, DescribeUserCdcClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCdcClbWafRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserClbWafRegionsResponse> DescribeUserClbWafRegionsOutcome;
                typedef std::future<DescribeUserClbWafRegionsOutcome> DescribeUserClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserClbWafRegionsRequest&, DescribeUserClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClbWafRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafAutoDenyRulesResponse> DescribeWafAutoDenyRulesOutcome;
                typedef std::future<DescribeWafAutoDenyRulesOutcome> DescribeWafAutoDenyRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafAutoDenyRulesRequest&, DescribeWafAutoDenyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafAutoDenyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafAutoDenyStatusResponse> DescribeWafAutoDenyStatusOutcome;
                typedef std::future<DescribeWafAutoDenyStatusOutcome> DescribeWafAutoDenyStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafAutoDenyStatusRequest&, DescribeWafAutoDenyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafAutoDenyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafThreatenIntelligenceResponse> DescribeWafThreatenIntelligenceOutcome;
                typedef std::future<DescribeWafThreatenIntelligenceOutcome> DescribeWafThreatenIntelligenceOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafThreatenIntelligenceRequest&, DescribeWafThreatenIntelligenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafThreatenIntelligenceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackDownloadRecordsResponse> GetAttackDownloadRecordsOutcome;
                typedef std::future<GetAttackDownloadRecordsOutcome> GetAttackDownloadRecordsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackDownloadRecordsRequest&, GetAttackDownloadRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackDownloadRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessPeriodResponse> ModifyAccessPeriodOutcome;
                typedef std::future<ModifyAccessPeriodOutcome> ModifyAccessPeriodOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAccessPeriodRequest&, ModifyAccessPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomRuleStatusResponse> ModifyCustomRuleStatusOutcome;
                typedef std::future<ModifyCustomRuleStatusOutcome> ModifyCustomRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleStatusRequest&, ModifyCustomRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainWhiteRuleResponse> ModifyDomainWhiteRuleOutcome;
                typedef std::future<ModifyDomainWhiteRuleOutcome> ModifyDomainWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainWhiteRuleRequest&, ModifyDomainWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWafAutoDenyRulesResponse> ModifyWafAutoDenyRulesOutcome;
                typedef std::future<ModifyWafAutoDenyRulesOutcome> ModifyWafAutoDenyRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWafAutoDenyRulesRequest&, ModifyWafAutoDenyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWafAutoDenyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWafAutoDenyStatusResponse> ModifyWafAutoDenyStatusOutcome;
                typedef std::future<ModifyWafAutoDenyStatusOutcome> ModifyWafAutoDenyStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWafAutoDenyStatusRequest&, ModifyWafAutoDenyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWafAutoDenyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWafThreatenIntelligenceResponse> ModifyWafThreatenIntelligenceOutcome;
                typedef std::future<ModifyWafThreatenIntelligenceOutcome> ModifyWafThreatenIntelligenceOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWafThreatenIntelligenceRequest&, ModifyWafThreatenIntelligenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWafThreatenIntelligenceAsyncHandler;
                typedef Outcome<Core::Error, Model::PostAttackDownloadTaskResponse> PostAttackDownloadTaskOutcome;
                typedef std::future<PostAttackDownloadTaskOutcome> PostAttackDownloadTaskOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::PostAttackDownloadTaskRequest&, PostAttackDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PostAttackDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAccessLogResponse> SearchAccessLogOutcome;
                typedef std::future<SearchAccessLogOutcome> SearchAccessLogOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SearchAccessLogRequest&, SearchAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertIpAccessControlResponse> UpsertIpAccessControlOutcome;
                typedef std::future<UpsertIpAccessControlOutcome> UpsertIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertIpAccessControlRequest&, UpsertIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertIpAccessControlAsyncHandler;



                /**
                 *增加访问控制（自定义策略）
                 * @param req AddCustomRuleRequest
                 * @return AddCustomRuleOutcome
                 */
                AddCustomRuleOutcome AddCustomRule(const Model::AddCustomRuleRequest &request);
                void AddCustomRuleAsync(const Model::AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomRuleOutcomeCallable AddCustomRuleCallable(const Model::AddCustomRuleRequest& request);

                /**
                 *增加域名规则白名单
                 * @param req AddDomainWhiteRuleRequest
                 * @return AddDomainWhiteRuleOutcome
                 */
                AddDomainWhiteRuleOutcome AddDomainWhiteRule(const Model::AddDomainWhiteRuleRequest &request);
                void AddDomainWhiteRuleAsync(const Model::AddDomainWhiteRuleRequest& request, const AddDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDomainWhiteRuleOutcomeCallable AddDomainWhiteRuleCallable(const Model::AddDomainWhiteRuleRequest& request);

                /**
                 *添加Spart防护域名
                 * @param req AddSpartaProtectionRequest
                 * @return AddSpartaProtectionOutcome
                 */
                AddSpartaProtectionOutcome AddSpartaProtection(const Model::AddSpartaProtectionRequest &request);
                void AddSpartaProtectionAsync(const Model::AddSpartaProtectionRequest& request, const AddSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSpartaProtectionOutcomeCallable AddSpartaProtectionCallable(const Model::AddSpartaProtectionRequest& request);

                /**
                 *本接口用于创建访问日志导出
                 * @param req CreateAccessExportRequest
                 * @return CreateAccessExportOutcome
                 */
                CreateAccessExportOutcome CreateAccessExport(const Model::CreateAccessExportRequest &request);
                void CreateAccessExportAsync(const Model::CreateAccessExportRequest& request, const CreateAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessExportOutcomeCallable CreateAccessExportCallable(const Model::CreateAccessExportRequest& request);

                /**
                 *本接口用于删除访问日志导出
                 * @param req DeleteAccessExportRequest
                 * @return DeleteAccessExportOutcome
                 */
                DeleteAccessExportOutcome DeleteAccessExport(const Model::DeleteAccessExportRequest &request);
                void DeleteAccessExportAsync(const Model::DeleteAccessExportRequest& request, const DeleteAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessExportOutcomeCallable DeleteAccessExportCallable(const Model::DeleteAccessExportRequest& request);

                /**
                 *删除攻击日志下载任务记录
                 * @param req DeleteAttackDownloadRecordRequest
                 * @return DeleteAttackDownloadRecordOutcome
                 */
                DeleteAttackDownloadRecordOutcome DeleteAttackDownloadRecord(const Model::DeleteAttackDownloadRecordRequest &request);
                void DeleteAttackDownloadRecordAsync(const Model::DeleteAttackDownloadRecordRequest& request, const DeleteAttackDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackDownloadRecordOutcomeCallable DeleteAttackDownloadRecordCallable(const Model::DeleteAttackDownloadRecordRequest& request);

                /**
                 *删除域名规则白名单


                 * @param req DeleteDomainWhiteRulesRequest
                 * @return DeleteDomainWhiteRulesOutcome
                 */
                DeleteDomainWhiteRulesOutcome DeleteDomainWhiteRules(const Model::DeleteDomainWhiteRulesRequest &request);
                void DeleteDomainWhiteRulesAsync(const Model::DeleteDomainWhiteRulesRequest& request, const DeleteDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainWhiteRulesOutcomeCallable DeleteDomainWhiteRulesCallable(const Model::DeleteDomainWhiteRulesRequest& request);

                /**
                 *删除访问日志下载记录
                 * @param req DeleteDownloadRecordRequest
                 * @return DeleteDownloadRecordOutcome
                 */
                DeleteDownloadRecordOutcome DeleteDownloadRecord(const Model::DeleteDownloadRecordRequest &request);
                void DeleteDownloadRecordAsync(const Model::DeleteDownloadRecordRequest& request, const DeleteDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDownloadRecordOutcomeCallable DeleteDownloadRecordCallable(const Model::DeleteDownloadRecordRequest& request);

                /**
                 *Waf IP黑白名单Delete接口
                 * @param req DeleteIpAccessControlRequest
                 * @return DeleteIpAccessControlOutcome
                 */
                DeleteIpAccessControlOutcome DeleteIpAccessControl(const Model::DeleteIpAccessControlRequest &request);
                void DeleteIpAccessControlAsync(const Model::DeleteIpAccessControlRequest& request, const DeleteIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIpAccessControlOutcomeCallable DeleteIpAccessControlCallable(const Model::DeleteIpAccessControlRequest& request);

                /**
                 *删除CC攻击的session设置
                 * @param req DeleteSessionRequest
                 * @return DeleteSessionOutcome
                 */
                DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest &request);
                void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request);

                /**
                 *本接口用于获取访问日志导出列表
                 * @param req DescribeAccessExportsRequest
                 * @return DescribeAccessExportsOutcome
                 */
                DescribeAccessExportsOutcome DescribeAccessExports(const Model::DescribeAccessExportsRequest &request);
                void DescribeAccessExportsAsync(const Model::DescribeAccessExportsRequest& request, const DescribeAccessExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessExportsOutcomeCallable DescribeAccessExportsCallable(const Model::DescribeAccessExportsRequest& request);

                /**
                 *本接口用于访问日志的快速分析
                 * @param req DescribeAccessFastAnalysisRequest
                 * @return DescribeAccessFastAnalysisOutcome
                 */
                DescribeAccessFastAnalysisOutcome DescribeAccessFastAnalysis(const Model::DescribeAccessFastAnalysisRequest &request);
                void DescribeAccessFastAnalysisAsync(const Model::DescribeAccessFastAnalysisRequest& request, const DescribeAccessFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessFastAnalysisOutcomeCallable DescribeAccessFastAnalysisCallable(const Model::DescribeAccessFastAnalysisRequest& request);

                /**
                 *本接口用于获取访问日志索引配置信息
                 * @param req DescribeAccessIndexRequest
                 * @return DescribeAccessIndexOutcome
                 */
                DescribeAccessIndexOutcome DescribeAccessIndex(const Model::DescribeAccessIndexRequest &request);
                void DescribeAccessIndexAsync(const Model::DescribeAccessIndexRequest& request, const DescribeAccessIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessIndexOutcomeCallable DescribeAccessIndexCallable(const Model::DescribeAccessIndexRequest& request);

                /**
                 *描述WAF自动封禁IP详情,对齐自动封堵状态
                 * @param req DescribeAutoDenyIPRequest
                 * @return DescribeAutoDenyIPOutcome
                 */
                DescribeAutoDenyIPOutcome DescribeAutoDenyIP(const Model::DescribeAutoDenyIPRequest &request);
                void DescribeAutoDenyIPAsync(const Model::DescribeAutoDenyIPRequest& request, const DescribeAutoDenyIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoDenyIPOutcomeCallable DescribeAutoDenyIPCallable(const Model::DescribeAutoDenyIPRequest& request);

                /**
                 *查询单个saas域名详情
                 * @param req DescribeDomainDetailsSaasRequest
                 * @return DescribeDomainDetailsSaasOutcome
                 */
                DescribeDomainDetailsSaasOutcome DescribeDomainDetailsSaas(const Model::DescribeDomainDetailsSaasRequest &request);
                void DescribeDomainDetailsSaasAsync(const Model::DescribeDomainDetailsSaasRequest& request, const DescribeDomainDetailsSaasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainDetailsSaasOutcomeCallable DescribeDomainDetailsSaasCallable(const Model::DescribeDomainDetailsSaasRequest& request);

                /**
                 *获取域名的规则白名单
                 * @param req DescribeDomainWhiteRulesRequest
                 * @return DescribeDomainWhiteRulesOutcome
                 */
                DescribeDomainWhiteRulesOutcome DescribeDomainWhiteRules(const Model::DescribeDomainWhiteRulesRequest &request);
                void DescribeDomainWhiteRulesAsync(const Model::DescribeDomainWhiteRulesRequest& request, const DescribeDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainWhiteRulesOutcomeCallable DescribeDomainWhiteRulesCallable(const Model::DescribeDomainWhiteRulesRequest& request);

                /**
                 *查询用户所有域名的详细信息
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *获取waf流量访问趋势
                 * @param req DescribeFlowTrendRequest
                 * @return DescribeFlowTrendOutcome
                 */
                DescribeFlowTrendOutcome DescribeFlowTrend(const Model::DescribeFlowTrendRequest &request);
                void DescribeFlowTrendAsync(const Model::DescribeFlowTrendRequest& request, const DescribeFlowTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTrendOutcomeCallable DescribeFlowTrendCallable(const Model::DescribeFlowTrendRequest& request);

                /**
                 *查询用户所有实例的详细信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *Waf ip黑白名单查询
                 * @param req DescribeIpAccessControlRequest
                 * @return DescribeIpAccessControlOutcome
                 */
                DescribeIpAccessControlOutcome DescribeIpAccessControl(const Model::DescribeIpAccessControlRequest &request);
                void DescribeIpAccessControlAsync(const Model::DescribeIpAccessControlRequest& request, const DescribeIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpAccessControlOutcomeCallable DescribeIpAccessControlCallable(const Model::DescribeIpAccessControlRequest& request);

                /**
                 *Waf  IP封堵状态查询
                 * @param req DescribeIpHitItemsRequest
                 * @return DescribeIpHitItemsOutcome
                 */
                DescribeIpHitItemsOutcome DescribeIpHitItems(const Model::DescribeIpHitItemsRequest &request);
                void DescribeIpHitItemsAsync(const Model::DescribeIpHitItemsRequest& request, const DescribeIpHitItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpHitItemsOutcomeCallable DescribeIpHitItemsCallable(const Model::DescribeIpHitItemsRequest& request);

                /**
                 *在CDC场景下，负载均衡型WAF的添加、编辑域名配置的时候，需要展示CDC负载均衡型WAF（cdc-clb-waf)支持的地域列表，通过DescribeUserCdcClbWafRegions既可以获得当前对客户已经开放的地域列表
                 * @param req DescribeUserCdcClbWafRegionsRequest
                 * @return DescribeUserCdcClbWafRegionsOutcome
                 */
                DescribeUserCdcClbWafRegionsOutcome DescribeUserCdcClbWafRegions(const Model::DescribeUserCdcClbWafRegionsRequest &request);
                void DescribeUserCdcClbWafRegionsAsync(const Model::DescribeUserCdcClbWafRegionsRequest& request, const DescribeUserCdcClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCdcClbWafRegionsOutcomeCallable DescribeUserCdcClbWafRegionsCallable(const Model::DescribeUserCdcClbWafRegionsRequest& request);

                /**
                 *在负载均衡型WAF的添加、编辑域名配置的时候，需要展示负载均衡型WAF（clb-waf)支持的地域列表，通过DescribeUserClbWafRegions既可以获得当前对客户已经开放的地域列表
                 * @param req DescribeUserClbWafRegionsRequest
                 * @return DescribeUserClbWafRegionsOutcome
                 */
                DescribeUserClbWafRegionsOutcome DescribeUserClbWafRegions(const Model::DescribeUserClbWafRegionsRequest &request);
                void DescribeUserClbWafRegionsAsync(const Model::DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserClbWafRegionsOutcomeCallable DescribeUserClbWafRegionsCallable(const Model::DescribeUserClbWafRegionsRequest& request);

                /**
                 *返回ip惩罚规则详细信息
                 * @param req DescribeWafAutoDenyRulesRequest
                 * @return DescribeWafAutoDenyRulesOutcome
                 */
                DescribeWafAutoDenyRulesOutcome DescribeWafAutoDenyRules(const Model::DescribeWafAutoDenyRulesRequest &request);
                void DescribeWafAutoDenyRulesAsync(const Model::DescribeWafAutoDenyRulesRequest& request, const DescribeWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafAutoDenyRulesOutcomeCallable DescribeWafAutoDenyRulesCallable(const Model::DescribeWafAutoDenyRulesRequest& request);

                /**
                 *描述WAF自动封禁模块详情
                 * @param req DescribeWafAutoDenyStatusRequest
                 * @return DescribeWafAutoDenyStatusOutcome
                 */
                DescribeWafAutoDenyStatusOutcome DescribeWafAutoDenyStatus(const Model::DescribeWafAutoDenyStatusRequest &request);
                void DescribeWafAutoDenyStatusAsync(const Model::DescribeWafAutoDenyStatusRequest& request, const DescribeWafAutoDenyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafAutoDenyStatusOutcomeCallable DescribeWafAutoDenyStatusCallable(const Model::DescribeWafAutoDenyStatusRequest& request);

                /**
                 *描述WAF威胁情报封禁模块配置详情
                 * @param req DescribeWafThreatenIntelligenceRequest
                 * @return DescribeWafThreatenIntelligenceOutcome
                 */
                DescribeWafThreatenIntelligenceOutcome DescribeWafThreatenIntelligence(const Model::DescribeWafThreatenIntelligenceRequest &request);
                void DescribeWafThreatenIntelligenceAsync(const Model::DescribeWafThreatenIntelligenceRequest& request, const DescribeWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafThreatenIntelligenceOutcomeCallable DescribeWafThreatenIntelligenceCallable(const Model::DescribeWafThreatenIntelligenceRequest& request);

                /**
                 *查询下载攻击日志任务记录列表
                 * @param req GetAttackDownloadRecordsRequest
                 * @return GetAttackDownloadRecordsOutcome
                 */
                GetAttackDownloadRecordsOutcome GetAttackDownloadRecords(const Model::GetAttackDownloadRecordsRequest &request);
                void GetAttackDownloadRecordsAsync(const Model::GetAttackDownloadRecordsRequest& request, const GetAttackDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackDownloadRecordsOutcomeCallable GetAttackDownloadRecordsCallable(const Model::GetAttackDownloadRecordsRequest& request);

                /**
                 *本接口用于修改访问日志保存期限
                 * @param req ModifyAccessPeriodRequest
                 * @return ModifyAccessPeriodOutcome
                 */
                ModifyAccessPeriodOutcome ModifyAccessPeriod(const Model::ModifyAccessPeriodRequest &request);
                void ModifyAccessPeriodAsync(const Model::ModifyAccessPeriodRequest& request, const ModifyAccessPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessPeriodOutcomeCallable ModifyAccessPeriodCallable(const Model::ModifyAccessPeriodRequest& request);

                /**
                 *开启或禁用访问控制（自定义策略）
                 * @param req ModifyCustomRuleStatusRequest
                 * @return ModifyCustomRuleStatusOutcome
                 */
                ModifyCustomRuleStatusOutcome ModifyCustomRuleStatus(const Model::ModifyCustomRuleStatusRequest &request);
                void ModifyCustomRuleStatusAsync(const Model::ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleStatusOutcomeCallable ModifyCustomRuleStatusCallable(const Model::ModifyCustomRuleStatusRequest& request);

                /**
                 *更改某一条规则
                 * @param req ModifyDomainWhiteRuleRequest
                 * @return ModifyDomainWhiteRuleOutcome
                 */
                ModifyDomainWhiteRuleOutcome ModifyDomainWhiteRule(const Model::ModifyDomainWhiteRuleRequest &request);
                void ModifyDomainWhiteRuleAsync(const Model::ModifyDomainWhiteRuleRequest& request, const ModifyDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainWhiteRuleOutcomeCallable ModifyDomainWhiteRuleCallable(const Model::ModifyDomainWhiteRuleRequest& request);

                /**
                 *修改ip惩罚规则
                 * @param req ModifyWafAutoDenyRulesRequest
                 * @return ModifyWafAutoDenyRulesOutcome
                 */
                ModifyWafAutoDenyRulesOutcome ModifyWafAutoDenyRules(const Model::ModifyWafAutoDenyRulesRequest &request);
                void ModifyWafAutoDenyRulesAsync(const Model::ModifyWafAutoDenyRulesRequest& request, const ModifyWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWafAutoDenyRulesOutcomeCallable ModifyWafAutoDenyRulesCallable(const Model::ModifyWafAutoDenyRulesRequest& request);

                /**
                 *配置WAF自动封禁模块状态
                 * @param req ModifyWafAutoDenyStatusRequest
                 * @return ModifyWafAutoDenyStatusOutcome
                 */
                ModifyWafAutoDenyStatusOutcome ModifyWafAutoDenyStatus(const Model::ModifyWafAutoDenyStatusRequest &request);
                void ModifyWafAutoDenyStatusAsync(const Model::ModifyWafAutoDenyStatusRequest& request, const ModifyWafAutoDenyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWafAutoDenyStatusOutcomeCallable ModifyWafAutoDenyStatusCallable(const Model::ModifyWafAutoDenyStatusRequest& request);

                /**
                 *配置WAF威胁情报封禁模块详情
                 * @param req ModifyWafThreatenIntelligenceRequest
                 * @return ModifyWafThreatenIntelligenceOutcome
                 */
                ModifyWafThreatenIntelligenceOutcome ModifyWafThreatenIntelligence(const Model::ModifyWafThreatenIntelligenceRequest &request);
                void ModifyWafThreatenIntelligenceAsync(const Model::ModifyWafThreatenIntelligenceRequest& request, const ModifyWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWafThreatenIntelligenceOutcomeCallable ModifyWafThreatenIntelligenceCallable(const Model::ModifyWafThreatenIntelligenceRequest& request);

                /**
                 *创建搜索下载攻击日志任务，使用CLS新版本的搜索下载getlog接口
                 * @param req PostAttackDownloadTaskRequest
                 * @return PostAttackDownloadTaskOutcome
                 */
                PostAttackDownloadTaskOutcome PostAttackDownloadTask(const Model::PostAttackDownloadTaskRequest &request);
                void PostAttackDownloadTaskAsync(const Model::PostAttackDownloadTaskRequest& request, const PostAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PostAttackDownloadTaskOutcomeCallable PostAttackDownloadTaskCallable(const Model::PostAttackDownloadTaskRequest& request);

                /**
                 *本接口用于搜索WAF访问日志
                 * @param req SearchAccessLogRequest
                 * @return SearchAccessLogOutcome
                 */
                SearchAccessLogOutcome SearchAccessLog(const Model::SearchAccessLogRequest &request);
                void SearchAccessLogAsync(const Model::SearchAccessLogRequest& request, const SearchAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAccessLogOutcomeCallable SearchAccessLogCallable(const Model::SearchAccessLogRequest& request);

                /**
                 *Waf IP黑白名单Upsert接口
                 * @param req UpsertIpAccessControlRequest
                 * @return UpsertIpAccessControlOutcome
                 */
                UpsertIpAccessControlOutcome UpsertIpAccessControl(const Model::UpsertIpAccessControlRequest &request);
                void UpsertIpAccessControlAsync(const Model::UpsertIpAccessControlRequest& request, const UpsertIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertIpAccessControlOutcomeCallable UpsertIpAccessControlCallable(const Model::UpsertIpAccessControlRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
