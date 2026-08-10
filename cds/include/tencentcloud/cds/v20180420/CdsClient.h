/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDS_V20180420_CDSCLIENT_H_
#define TENCENTCLOUD_CDS_V20180420_CDSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cds/v20180420/model/CreateReportPdfRequest.h>
#include <tencentcloud/cds/v20180420/model/CreateReportPdfResponse.h>
#include <tencentcloud/cds/v20180420/model/CreateTimerReportRequest.h>
#include <tencentcloud/cds/v20180420/model/CreateTimerReportResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeAssetsListRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeAssetsListResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditInstanceTypeRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditInstanceTypeResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditInstancesRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditInstancesResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditUsedRegionsRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeDbauditUsedRegionsResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeReportListRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeReportListResponse.h>
#include <tencentcloud/cds/v20180420/model/DescribeReportMissionListRequest.h>
#include <tencentcloud/cds/v20180420/model/DescribeReportMissionListResponse.h>
#include <tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceRequest.h>
#include <tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceResponse.h>
#include <tencentcloud/cds/v20180420/model/ModifyDbauditInstancesRenewFlagRequest.h>
#include <tencentcloud/cds/v20180420/model/ModifyDbauditInstancesRenewFlagResponse.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            class CdsClient : public AbstractClient
            {
            public:
                CdsClient(const Credential &credential, const std::string &region);
                CdsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateReportPdfResponse> CreateReportPdfOutcome;
                typedef std::future<CreateReportPdfOutcome> CreateReportPdfOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::CreateReportPdfRequest&, CreateReportPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReportPdfAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTimerReportResponse> CreateTimerReportOutcome;
                typedef std::future<CreateTimerReportOutcome> CreateTimerReportOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::CreateTimerReportRequest&, CreateTimerReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTimerReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetsListResponse> DescribeAssetsListOutcome;
                typedef std::future<DescribeAssetsListOutcome> DescribeAssetsListOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeAssetsListRequest&, DescribeAssetsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbauditInstanceTypeResponse> DescribeDbauditInstanceTypeOutcome;
                typedef std::future<DescribeDbauditInstanceTypeOutcome> DescribeDbauditInstanceTypeOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeDbauditInstanceTypeRequest&, DescribeDbauditInstanceTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbauditInstanceTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbauditInstancesResponse> DescribeDbauditInstancesOutcome;
                typedef std::future<DescribeDbauditInstancesOutcome> DescribeDbauditInstancesOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeDbauditInstancesRequest&, DescribeDbauditInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbauditInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbauditUsedRegionsResponse> DescribeDbauditUsedRegionsOutcome;
                typedef std::future<DescribeDbauditUsedRegionsOutcome> DescribeDbauditUsedRegionsOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeDbauditUsedRegionsRequest&, DescribeDbauditUsedRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbauditUsedRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportListResponse> DescribeReportListOutcome;
                typedef std::future<DescribeReportListOutcome> DescribeReportListOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeReportListRequest&, DescribeReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportMissionListResponse> DescribeReportMissionListOutcome;
                typedef std::future<DescribeReportMissionListOutcome> DescribeReportMissionListOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::DescribeReportMissionListRequest&, DescribeReportMissionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportMissionListAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceDbauditInstanceResponse> InquiryPriceDbauditInstanceOutcome;
                typedef std::future<InquiryPriceDbauditInstanceOutcome> InquiryPriceDbauditInstanceOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::InquiryPriceDbauditInstanceRequest&, InquiryPriceDbauditInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceDbauditInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDbauditInstancesRenewFlagResponse> ModifyDbauditInstancesRenewFlagOutcome;
                typedef std::future<ModifyDbauditInstancesRenewFlagOutcome> ModifyDbauditInstancesRenewFlagOutcomeCallable;
                typedef std::function<void(const CdsClient*, const Model::ModifyDbauditInstancesRenewFlagRequest&, ModifyDbauditInstancesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDbauditInstancesRenewFlagAsyncHandler;



                /**
                 *下载报表PDF
                 * @param req CreateReportPdfRequest
                 * @return CreateReportPdfOutcome
                 */
                CreateReportPdfOutcome CreateReportPdf(const Model::CreateReportPdfRequest &request);
                void CreateReportPdfAsync(const Model::CreateReportPdfRequest& request, const CreateReportPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReportPdfOutcomeCallable CreateReportPdfCallable(const Model::CreateReportPdfRequest& request);

                /**
                 *新建报表任务
                 * @param req CreateTimerReportRequest
                 * @return CreateTimerReportOutcome
                 */
                CreateTimerReportOutcome CreateTimerReport(const Model::CreateTimerReportRequest &request);
                void CreateTimerReportAsync(const Model::CreateTimerReportRequest& request, const CreateTimerReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTimerReportOutcomeCallable CreateTimerReportCallable(const Model::CreateTimerReportRequest& request);

                /**
                 *查询资产列表
                 * @param req DescribeAssetsListRequest
                 * @return DescribeAssetsListOutcome
                 */
                DescribeAssetsListOutcome DescribeAssetsList(const Model::DescribeAssetsListRequest &request);
                void DescribeAssetsListAsync(const Model::DescribeAssetsListRequest& request, const DescribeAssetsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetsListOutcomeCallable DescribeAssetsListCallable(const Model::DescribeAssetsListRequest& request);

                /**
                 *本接口 (DescribeDbauditInstanceType) 用于查询可售卖的产品规格列表。
                 * @param req DescribeDbauditInstanceTypeRequest
                 * @return DescribeDbauditInstanceTypeOutcome
                 */
                DescribeDbauditInstanceTypeOutcome DescribeDbauditInstanceType(const Model::DescribeDbauditInstanceTypeRequest &request);
                void DescribeDbauditInstanceTypeAsync(const Model::DescribeDbauditInstanceTypeRequest& request, const DescribeDbauditInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbauditInstanceTypeOutcomeCallable DescribeDbauditInstanceTypeCallable(const Model::DescribeDbauditInstanceTypeRequest& request);

                /**
                 *本接口 (DescribeDbauditInstances) 用于查询数据安全审计实例列表
                 * @param req DescribeDbauditInstancesRequest
                 * @return DescribeDbauditInstancesOutcome
                 */
                DescribeDbauditInstancesOutcome DescribeDbauditInstances(const Model::DescribeDbauditInstancesRequest &request);
                void DescribeDbauditInstancesAsync(const Model::DescribeDbauditInstancesRequest& request, const DescribeDbauditInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbauditInstancesOutcomeCallable DescribeDbauditInstancesCallable(const Model::DescribeDbauditInstancesRequest& request);

                /**
                 *本接口 (DescribeDbauditUsedRegions) 用于查询可售卖地域列表。
                 * @param req DescribeDbauditUsedRegionsRequest
                 * @return DescribeDbauditUsedRegionsOutcome
                 */
                DescribeDbauditUsedRegionsOutcome DescribeDbauditUsedRegions(const Model::DescribeDbauditUsedRegionsRequest &request);
                void DescribeDbauditUsedRegionsAsync(const Model::DescribeDbauditUsedRegionsRequest& request, const DescribeDbauditUsedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbauditUsedRegionsOutcomeCallable DescribeDbauditUsedRegionsCallable(const Model::DescribeDbauditUsedRegionsRequest& request);

                /**
                 *查询报表列表
                 * @param req DescribeReportListRequest
                 * @return DescribeReportListOutcome
                 */
                DescribeReportListOutcome DescribeReportList(const Model::DescribeReportListRequest &request);
                void DescribeReportListAsync(const Model::DescribeReportListRequest& request, const DescribeReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportListOutcomeCallable DescribeReportListCallable(const Model::DescribeReportListRequest& request);

                /**
                 *查询报表任务列表
                 * @param req DescribeReportMissionListRequest
                 * @return DescribeReportMissionListOutcome
                 */
                DescribeReportMissionListOutcome DescribeReportMissionList(const Model::DescribeReportMissionListRequest &request);
                void DescribeReportMissionListAsync(const Model::DescribeReportMissionListRequest& request, const DescribeReportMissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportMissionListOutcomeCallable DescribeReportMissionListCallable(const Model::DescribeReportMissionListRequest& request);

                /**
                 *用于查询数据安全审计产品实例价格
                 * @param req InquiryPriceDbauditInstanceRequest
                 * @return InquiryPriceDbauditInstanceOutcome
                 */
                InquiryPriceDbauditInstanceOutcome InquiryPriceDbauditInstance(const Model::InquiryPriceDbauditInstanceRequest &request);
                void InquiryPriceDbauditInstanceAsync(const Model::InquiryPriceDbauditInstanceRequest& request, const InquiryPriceDbauditInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceDbauditInstanceOutcomeCallable InquiryPriceDbauditInstanceCallable(const Model::InquiryPriceDbauditInstanceRequest& request);

                /**
                 *本接口 (ModifyDbauditInstancesRenewFlag) 用于修改数据安全审计产品实例续费标识
                 * @param req ModifyDbauditInstancesRenewFlagRequest
                 * @return ModifyDbauditInstancesRenewFlagOutcome
                 */
                ModifyDbauditInstancesRenewFlagOutcome ModifyDbauditInstancesRenewFlag(const Model::ModifyDbauditInstancesRenewFlagRequest &request);
                void ModifyDbauditInstancesRenewFlagAsync(const Model::ModifyDbauditInstancesRenewFlagRequest& request, const ModifyDbauditInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDbauditInstancesRenewFlagOutcomeCallable ModifyDbauditInstancesRenewFlagCallable(const Model::ModifyDbauditInstancesRenewFlagRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_CDSCLIENT_H_
