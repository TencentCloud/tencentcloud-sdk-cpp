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

#ifndef TENCENTCLOUD_CWS_V20180312_CWSCLIENT_H_
#define TENCENTCLOUD_CWS_V20180312_CWSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cws/v20180312/model/CreateMonitorsRequest.h>
#include <tencentcloud/cws/v20180312/model/CreateMonitorsResponse.h>
#include <tencentcloud/cws/v20180312/model/CreateSitesRequest.h>
#include <tencentcloud/cws/v20180312/model/CreateSitesResponse.h>
#include <tencentcloud/cws/v20180312/model/CreateSitesScansRequest.h>
#include <tencentcloud/cws/v20180312/model/CreateSitesScansResponse.h>
#include <tencentcloud/cws/v20180312/model/CreateVulsMisinformationRequest.h>
#include <tencentcloud/cws/v20180312/model/CreateVulsMisinformationResponse.h>
#include <tencentcloud/cws/v20180312/model/CreateVulsReportRequest.h>
#include <tencentcloud/cws/v20180312/model/CreateVulsReportResponse.h>
#include <tencentcloud/cws/v20180312/model/DeleteMonitorsRequest.h>
#include <tencentcloud/cws/v20180312/model/DeleteMonitorsResponse.h>
#include <tencentcloud/cws/v20180312/model/DeleteSitesRequest.h>
#include <tencentcloud/cws/v20180312/model/DeleteSitesResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeConfigRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeConfigResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeMonitorsRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeMonitorsResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeSiteQuotaRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeSiteQuotaResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeSitesRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeSitesResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeSitesVerificationRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeSitesVerificationResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsNumberRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsNumberResponse.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsNumberTimelineRequest.h>
#include <tencentcloud/cws/v20180312/model/DescribeVulsNumberTimelineResponse.h>
#include <tencentcloud/cws/v20180312/model/ModifyConfigAttributeRequest.h>
#include <tencentcloud/cws/v20180312/model/ModifyConfigAttributeResponse.h>
#include <tencentcloud/cws/v20180312/model/ModifyMonitorAttributeRequest.h>
#include <tencentcloud/cws/v20180312/model/ModifyMonitorAttributeResponse.h>
#include <tencentcloud/cws/v20180312/model/ModifySiteAttributeRequest.h>
#include <tencentcloud/cws/v20180312/model/ModifySiteAttributeResponse.h>
#include <tencentcloud/cws/v20180312/model/VerifySitesRequest.h>
#include <tencentcloud/cws/v20180312/model/VerifySitesResponse.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            class CwsClient : public AbstractClient
            {
            public:
                CwsClient(const Credential &credential, const std::string &region);
                CwsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateMonitorsResponse> CreateMonitorsOutcome;
                typedef std::future<CreateMonitorsOutcome> CreateMonitorsOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::CreateMonitorsRequest&, CreateMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSitesResponse> CreateSitesOutcome;
                typedef std::future<CreateSitesOutcome> CreateSitesOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::CreateSitesRequest&, CreateSitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSitesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSitesScansResponse> CreateSitesScansOutcome;
                typedef std::future<CreateSitesScansOutcome> CreateSitesScansOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::CreateSitesScansRequest&, CreateSitesScansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSitesScansAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulsMisinformationResponse> CreateVulsMisinformationOutcome;
                typedef std::future<CreateVulsMisinformationOutcome> CreateVulsMisinformationOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::CreateVulsMisinformationRequest&, CreateVulsMisinformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulsMisinformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulsReportResponse> CreateVulsReportOutcome;
                typedef std::future<CreateVulsReportOutcome> CreateVulsReportOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::CreateVulsReportRequest&, CreateVulsReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulsReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMonitorsResponse> DeleteMonitorsOutcome;
                typedef std::future<DeleteMonitorsOutcome> DeleteMonitorsOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DeleteMonitorsRequest&, DeleteMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSitesResponse> DeleteSitesOutcome;
                typedef std::future<DeleteSitesOutcome> DeleteSitesOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DeleteSitesRequest&, DeleteSitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSitesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorsResponse> DescribeMonitorsOutcome;
                typedef std::future<DescribeMonitorsOutcome> DescribeMonitorsOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeMonitorsRequest&, DescribeMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSiteQuotaResponse> DescribeSiteQuotaOutcome;
                typedef std::future<DescribeSiteQuotaOutcome> DescribeSiteQuotaOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeSiteQuotaRequest&, DescribeSiteQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSitesResponse> DescribeSitesOutcome;
                typedef std::future<DescribeSitesOutcome> DescribeSitesOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeSitesRequest&, DescribeSitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSitesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSitesVerificationResponse> DescribeSitesVerificationOutcome;
                typedef std::future<DescribeSitesVerificationOutcome> DescribeSitesVerificationOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeSitesVerificationRequest&, DescribeSitesVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSitesVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulsResponse> DescribeVulsOutcome;
                typedef std::future<DescribeVulsOutcome> DescribeVulsOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeVulsRequest&, DescribeVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulsNumberResponse> DescribeVulsNumberOutcome;
                typedef std::future<DescribeVulsNumberOutcome> DescribeVulsNumberOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeVulsNumberRequest&, DescribeVulsNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulsNumberTimelineResponse> DescribeVulsNumberTimelineOutcome;
                typedef std::future<DescribeVulsNumberTimelineOutcome> DescribeVulsNumberTimelineOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::DescribeVulsNumberTimelineRequest&, DescribeVulsNumberTimelineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsNumberTimelineAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigAttributeResponse> ModifyConfigAttributeOutcome;
                typedef std::future<ModifyConfigAttributeOutcome> ModifyConfigAttributeOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::ModifyConfigAttributeRequest&, ModifyConfigAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMonitorAttributeResponse> ModifyMonitorAttributeOutcome;
                typedef std::future<ModifyMonitorAttributeOutcome> ModifyMonitorAttributeOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::ModifyMonitorAttributeRequest&, ModifyMonitorAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySiteAttributeResponse> ModifySiteAttributeOutcome;
                typedef std::future<ModifySiteAttributeOutcome> ModifySiteAttributeOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::ModifySiteAttributeRequest&, ModifySiteAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySiteAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifySitesResponse> VerifySitesOutcome;
                typedef std::future<VerifySitesOutcome> VerifySitesOutcomeCallable;
                typedef std::function<void(const CwsClient*, const Model::VerifySitesRequest&, VerifySitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifySitesAsyncHandler;



                /**
                 *本接口（CreateMonitors）用于新增一个或多个站点的监测任务。
                 * @param req CreateMonitorsRequest
                 * @return CreateMonitorsOutcome
                 */
                CreateMonitorsOutcome CreateMonitors(const Model::CreateMonitorsRequest &request);
                void CreateMonitorsAsync(const Model::CreateMonitorsRequest& request, const CreateMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMonitorsOutcomeCallable CreateMonitorsCallable(const Model::CreateMonitorsRequest& request);

                /**
                 *本接口（CreateSites）用于新增一个或多个站点。
                 * @param req CreateSitesRequest
                 * @return CreateSitesOutcome
                 */
                CreateSitesOutcome CreateSites(const Model::CreateSitesRequest &request);
                void CreateSitesAsync(const Model::CreateSitesRequest& request, const CreateSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSitesOutcomeCallable CreateSitesCallable(const Model::CreateSitesRequest& request);

                /**
                 *本接口（CreateSitesScans）用于新增一个或多个站点的单次扫描任务。
                 * @param req CreateSitesScansRequest
                 * @return CreateSitesScansOutcome
                 */
                CreateSitesScansOutcome CreateSitesScans(const Model::CreateSitesScansRequest &request);
                void CreateSitesScansAsync(const Model::CreateSitesScansRequest& request, const CreateSitesScansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSitesScansOutcomeCallable CreateSitesScansCallable(const Model::CreateSitesScansRequest& request);

                /**
                 *本接口（CreateVulsMisinformation）可以用于新增一个或多个漏洞误报信息。
                 * @param req CreateVulsMisinformationRequest
                 * @return CreateVulsMisinformationOutcome
                 */
                CreateVulsMisinformationOutcome CreateVulsMisinformation(const Model::CreateVulsMisinformationRequest &request);
                void CreateVulsMisinformationAsync(const Model::CreateVulsMisinformationRequest& request, const CreateVulsMisinformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulsMisinformationOutcomeCallable CreateVulsMisinformationCallable(const Model::CreateVulsMisinformationRequest& request);

                /**
                 *本接口 (CreateVulsReport) 用于生成漏洞报告并返回下载链接。
                 * @param req CreateVulsReportRequest
                 * @return CreateVulsReportOutcome
                 */
                CreateVulsReportOutcome CreateVulsReport(const Model::CreateVulsReportRequest &request);
                void CreateVulsReportAsync(const Model::CreateVulsReportRequest& request, const CreateVulsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulsReportOutcomeCallable CreateVulsReportCallable(const Model::CreateVulsReportRequest& request);

                /**
                 *本接口 (DeleteMonitors) 用于删除用户监控任务。
                 * @param req DeleteMonitorsRequest
                 * @return DeleteMonitorsOutcome
                 */
                DeleteMonitorsOutcome DeleteMonitors(const Model::DeleteMonitorsRequest &request);
                void DeleteMonitorsAsync(const Model::DeleteMonitorsRequest& request, const DeleteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMonitorsOutcomeCallable DeleteMonitorsCallable(const Model::DeleteMonitorsRequest& request);

                /**
                 *本接口 (DeleteSites) 用于删除站点。
                 * @param req DeleteSitesRequest
                 * @return DeleteSitesOutcome
                 */
                DeleteSitesOutcome DeleteSites(const Model::DeleteSitesRequest &request);
                void DeleteSitesAsync(const Model::DeleteSitesRequest& request, const DeleteSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSitesOutcomeCallable DeleteSitesCallable(const Model::DeleteSitesRequest& request);

                /**
                 *本接口 (DescribeConfig) 用于查询用户配置的详细信息。
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *本接口 (DescribeMonitors) 用于查询一个或多个监控任务的详细信息。
                 * @param req DescribeMonitorsRequest
                 * @return DescribeMonitorsOutcome
                 */
                DescribeMonitorsOutcome DescribeMonitors(const Model::DescribeMonitorsRequest &request);
                void DescribeMonitorsAsync(const Model::DescribeMonitorsRequest& request, const DescribeMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorsOutcomeCallable DescribeMonitorsCallable(const Model::DescribeMonitorsRequest& request);

                /**
                 *本接口 (DescribeSiteQuota) 用于查询用户购买的扫描次数总数和已使用数。
                 * @param req DescribeSiteQuotaRequest
                 * @return DescribeSiteQuotaOutcome
                 */
                DescribeSiteQuotaOutcome DescribeSiteQuota(const Model::DescribeSiteQuotaRequest &request);
                void DescribeSiteQuotaAsync(const Model::DescribeSiteQuotaRequest& request, const DescribeSiteQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSiteQuotaOutcomeCallable DescribeSiteQuotaCallable(const Model::DescribeSiteQuotaRequest& request);

                /**
                 *本接口 (DescribeSites) 用于查询一个或多个站点的详细信息。
                 * @param req DescribeSitesRequest
                 * @return DescribeSitesOutcome
                 */
                DescribeSitesOutcome DescribeSites(const Model::DescribeSitesRequest &request);
                void DescribeSitesAsync(const Model::DescribeSitesRequest& request, const DescribeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSitesOutcomeCallable DescribeSitesCallable(const Model::DescribeSitesRequest& request);

                /**
                 *本接口 (DescribeSitesVerification) 用于查询一个或多个待验证站点的验证信息。
                 * @param req DescribeSitesVerificationRequest
                 * @return DescribeSitesVerificationOutcome
                 */
                DescribeSitesVerificationOutcome DescribeSitesVerification(const Model::DescribeSitesVerificationRequest &request);
                void DescribeSitesVerificationAsync(const Model::DescribeSitesVerificationRequest& request, const DescribeSitesVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSitesVerificationOutcomeCallable DescribeSitesVerificationCallable(const Model::DescribeSitesVerificationRequest& request);

                /**
                 *本接口 (DescribeVuls) 用于查询一个或多个漏洞的详细信息。
                 * @param req DescribeVulsRequest
                 * @return DescribeVulsOutcome
                 */
                DescribeVulsOutcome DescribeVuls(const Model::DescribeVulsRequest &request);
                void DescribeVulsAsync(const Model::DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsOutcomeCallable DescribeVulsCallable(const Model::DescribeVulsRequest& request);

                /**
                 *本接口 (DescribeVulsNumber) 用于查询用户网站的漏洞总计数量。
                 * @param req DescribeVulsNumberRequest
                 * @return DescribeVulsNumberOutcome
                 */
                DescribeVulsNumberOutcome DescribeVulsNumber(const Model::DescribeVulsNumberRequest &request);
                void DescribeVulsNumberAsync(const Model::DescribeVulsNumberRequest& request, const DescribeVulsNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsNumberOutcomeCallable DescribeVulsNumberCallable(const Model::DescribeVulsNumberRequest& request);

                /**
                 *本接口 (DescribeVulsNumberTimeline) 用于查询漏洞数随时间变化统计信息。
                 * @param req DescribeVulsNumberTimelineRequest
                 * @return DescribeVulsNumberTimelineOutcome
                 */
                DescribeVulsNumberTimelineOutcome DescribeVulsNumberTimeline(const Model::DescribeVulsNumberTimelineRequest &request);
                void DescribeVulsNumberTimelineAsync(const Model::DescribeVulsNumberTimelineRequest& request, const DescribeVulsNumberTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsNumberTimelineOutcomeCallable DescribeVulsNumberTimelineCallable(const Model::DescribeVulsNumberTimelineRequest& request);

                /**
                 *本接口 (ModifyConfigAttribute) 用于修改用户配置的属性。
                 * @param req ModifyConfigAttributeRequest
                 * @return ModifyConfigAttributeOutcome
                 */
                ModifyConfigAttributeOutcome ModifyConfigAttribute(const Model::ModifyConfigAttributeRequest &request);
                void ModifyConfigAttributeAsync(const Model::ModifyConfigAttributeRequest& request, const ModifyConfigAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigAttributeOutcomeCallable ModifyConfigAttributeCallable(const Model::ModifyConfigAttributeRequest& request);

                /**
                 *本接口 (ModifyMonitorAttribute) 用于修改监测任务的属性。
                 * @param req ModifyMonitorAttributeRequest
                 * @return ModifyMonitorAttributeOutcome
                 */
                ModifyMonitorAttributeOutcome ModifyMonitorAttribute(const Model::ModifyMonitorAttributeRequest &request);
                void ModifyMonitorAttributeAsync(const Model::ModifyMonitorAttributeRequest& request, const ModifyMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMonitorAttributeOutcomeCallable ModifyMonitorAttributeCallable(const Model::ModifyMonitorAttributeRequest& request);

                /**
                 *本接口 (ModifySiteAttribute) 用于修改站点的属性。
                 * @param req ModifySiteAttributeRequest
                 * @return ModifySiteAttributeOutcome
                 */
                ModifySiteAttributeOutcome ModifySiteAttribute(const Model::ModifySiteAttributeRequest &request);
                void ModifySiteAttributeAsync(const Model::ModifySiteAttributeRequest& request, const ModifySiteAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySiteAttributeOutcomeCallable ModifySiteAttributeCallable(const Model::ModifySiteAttributeRequest& request);

                /**
                 *本接口 (VerifySites) 用于验证一个或多个待验证站点。
                 * @param req VerifySitesRequest
                 * @return VerifySitesOutcome
                 */
                VerifySitesOutcome VerifySites(const Model::VerifySitesRequest &request);
                void VerifySitesAsync(const Model::VerifySitesRequest& request, const VerifySitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifySitesOutcomeCallable VerifySitesCallable(const Model::VerifySitesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_CWSCLIENT_H_
