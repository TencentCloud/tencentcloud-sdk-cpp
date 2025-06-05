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

#ifndef TENCENTCLOUD_CHC_V20230418_CHCCLIENT_H_
#define TENCENTCLOUD_CHC_V20230418_CHCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/chc/v20230418/model/ConfirmCommonServiceWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/ConfirmCommonServiceWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateCommonServiceWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateCommonServiceWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateModelEvaluationWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateModelEvaluationWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateMovingWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateMovingWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateNetDeviceModelRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateNetDeviceModelResponse.h>
#include <tencentcloud/chc/v20230418/model/CreatePersonnelVisitWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreatePersonnelVisitWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreatePowerOffWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreatePowerOffWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreatePowerOnWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreatePowerOnWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateQuitWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateQuitWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateRackOffWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateRackOffWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateRackOnWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateRackOnWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateReceivingWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateReceivingWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateServerModelRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateServerModelResponse.h>
#include <tencentcloud/chc/v20230418/model/CreateSpeciallyQuitWorkOrderRequest.h>
#include <tencentcloud/chc/v20230418/model/CreateSpeciallyQuitWorkOrderResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeAvailableModelListRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeAvailableModelListResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeCampusListRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeCampusListResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeCommonServiceWorkOrderDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeCommonServiceWorkOrderDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeCustomerInfoRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeCustomerInfoResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeDeviceListRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeDeviceListResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeDeviceWorkOrderDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeDeviceWorkOrderDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcUnitAssetDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcUnitAssetDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcUnitDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcUnitDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcsRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeIdcsResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelEvaluationWorkOrderDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelEvaluationWorkOrderDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelTemplateRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelTemplateResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelVersionListRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeModelVersionListResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribePersonnelVisitWorkOrderDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribePersonnelVisitWorkOrderDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribePositionStatusSummaryRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribePositionStatusSummaryResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribePositionsRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribePositionsResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeRacksRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeRacksResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeRacksDistributionRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeRacksDistributionResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeResourceUsageRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderListRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderListResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderStatisticsRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderStatisticsResponse.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderTypesRequest.h>
#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderTypesResponse.h>
#include <tencentcloud/chc/v20230418/model/ExportCustomerWorkOrderDetailRequest.h>
#include <tencentcloud/chc/v20230418/model/ExportCustomerWorkOrderDetailResponse.h>
#include <tencentcloud/chc/v20230418/model/ModifyWorkOrderTypeCollectFlagRequest.h>
#include <tencentcloud/chc/v20230418/model/ModifyWorkOrderTypeCollectFlagResponse.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            class ChcClient : public AbstractClient
            {
            public:
                ChcClient(const Credential &credential, const std::string &region);
                ChcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ConfirmCommonServiceWorkOrderResponse> ConfirmCommonServiceWorkOrderOutcome;
                typedef std::future<ConfirmCommonServiceWorkOrderOutcome> ConfirmCommonServiceWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::ConfirmCommonServiceWorkOrderRequest&, ConfirmCommonServiceWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmCommonServiceWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCommonServiceWorkOrderResponse> CreateCommonServiceWorkOrderOutcome;
                typedef std::future<CreateCommonServiceWorkOrderOutcome> CreateCommonServiceWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateCommonServiceWorkOrderRequest&, CreateCommonServiceWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonServiceWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelEvaluationWorkOrderResponse> CreateModelEvaluationWorkOrderOutcome;
                typedef std::future<CreateModelEvaluationWorkOrderOutcome> CreateModelEvaluationWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateModelEvaluationWorkOrderRequest&, CreateModelEvaluationWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelEvaluationWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMovingWorkOrderResponse> CreateMovingWorkOrderOutcome;
                typedef std::future<CreateMovingWorkOrderOutcome> CreateMovingWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateMovingWorkOrderRequest&, CreateMovingWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMovingWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetDeviceModelResponse> CreateNetDeviceModelOutcome;
                typedef std::future<CreateNetDeviceModelOutcome> CreateNetDeviceModelOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateNetDeviceModelRequest&, CreateNetDeviceModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetDeviceModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonnelVisitWorkOrderResponse> CreatePersonnelVisitWorkOrderOutcome;
                typedef std::future<CreatePersonnelVisitWorkOrderOutcome> CreatePersonnelVisitWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreatePersonnelVisitWorkOrderRequest&, CreatePersonnelVisitWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonnelVisitWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePowerOffWorkOrderResponse> CreatePowerOffWorkOrderOutcome;
                typedef std::future<CreatePowerOffWorkOrderOutcome> CreatePowerOffWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreatePowerOffWorkOrderRequest&, CreatePowerOffWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePowerOffWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePowerOnWorkOrderResponse> CreatePowerOnWorkOrderOutcome;
                typedef std::future<CreatePowerOnWorkOrderOutcome> CreatePowerOnWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreatePowerOnWorkOrderRequest&, CreatePowerOnWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePowerOnWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQuitWorkOrderResponse> CreateQuitWorkOrderOutcome;
                typedef std::future<CreateQuitWorkOrderOutcome> CreateQuitWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateQuitWorkOrderRequest&, CreateQuitWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQuitWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRackOffWorkOrderResponse> CreateRackOffWorkOrderOutcome;
                typedef std::future<CreateRackOffWorkOrderOutcome> CreateRackOffWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateRackOffWorkOrderRequest&, CreateRackOffWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRackOffWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRackOnWorkOrderResponse> CreateRackOnWorkOrderOutcome;
                typedef std::future<CreateRackOnWorkOrderOutcome> CreateRackOnWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateRackOnWorkOrderRequest&, CreateRackOnWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRackOnWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceivingWorkOrderResponse> CreateReceivingWorkOrderOutcome;
                typedef std::future<CreateReceivingWorkOrderOutcome> CreateReceivingWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateReceivingWorkOrderRequest&, CreateReceivingWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceivingWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerModelResponse> CreateServerModelOutcome;
                typedef std::future<CreateServerModelOutcome> CreateServerModelOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateServerModelRequest&, CreateServerModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSpeciallyQuitWorkOrderResponse> CreateSpeciallyQuitWorkOrderOutcome;
                typedef std::future<CreateSpeciallyQuitWorkOrderOutcome> CreateSpeciallyQuitWorkOrderOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::CreateSpeciallyQuitWorkOrderRequest&, CreateSpeciallyQuitWorkOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpeciallyQuitWorkOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableModelListResponse> DescribeAvailableModelListOutcome;
                typedef std::future<DescribeAvailableModelListOutcome> DescribeAvailableModelListOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeAvailableModelListRequest&, DescribeAvailableModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCampusListResponse> DescribeCampusListOutcome;
                typedef std::future<DescribeCampusListOutcome> DescribeCampusListOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeCampusListRequest&, DescribeCampusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCampusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCommonServiceWorkOrderDetailResponse> DescribeCommonServiceWorkOrderDetailOutcome;
                typedef std::future<DescribeCommonServiceWorkOrderDetailOutcome> DescribeCommonServiceWorkOrderDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeCommonServiceWorkOrderDetailRequest&, DescribeCommonServiceWorkOrderDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonServiceWorkOrderDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerInfoResponse> DescribeCustomerInfoOutcome;
                typedef std::future<DescribeCustomerInfoOutcome> DescribeCustomerInfoOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeCustomerInfoRequest&, DescribeCustomerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceListResponse> DescribeDeviceListOutcome;
                typedef std::future<DescribeDeviceListOutcome> DescribeDeviceListOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeDeviceListRequest&, DescribeDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceWorkOrderDetailResponse> DescribeDeviceWorkOrderDetailOutcome;
                typedef std::future<DescribeDeviceWorkOrderDetailOutcome> DescribeDeviceWorkOrderDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeDeviceWorkOrderDetailRequest&, DescribeDeviceWorkOrderDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceWorkOrderDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdcUnitAssetDetailResponse> DescribeIdcUnitAssetDetailOutcome;
                typedef std::future<DescribeIdcUnitAssetDetailOutcome> DescribeIdcUnitAssetDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeIdcUnitAssetDetailRequest&, DescribeIdcUnitAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdcUnitAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdcUnitDetailResponse> DescribeIdcUnitDetailOutcome;
                typedef std::future<DescribeIdcUnitDetailOutcome> DescribeIdcUnitDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeIdcUnitDetailRequest&, DescribeIdcUnitDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdcUnitDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdcsResponse> DescribeIdcsOutcome;
                typedef std::future<DescribeIdcsOutcome> DescribeIdcsOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeIdcsRequest&, DescribeIdcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelResponse> DescribeModelOutcome;
                typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeModelRequest&, DescribeModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelEvaluationWorkOrderDetailResponse> DescribeModelEvaluationWorkOrderDetailOutcome;
                typedef std::future<DescribeModelEvaluationWorkOrderDetailOutcome> DescribeModelEvaluationWorkOrderDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeModelEvaluationWorkOrderDetailRequest&, DescribeModelEvaluationWorkOrderDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelEvaluationWorkOrderDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelTemplateResponse> DescribeModelTemplateOutcome;
                typedef std::future<DescribeModelTemplateOutcome> DescribeModelTemplateOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeModelTemplateRequest&, DescribeModelTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelVersionListResponse> DescribeModelVersionListOutcome;
                typedef std::future<DescribeModelVersionListOutcome> DescribeModelVersionListOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeModelVersionListRequest&, DescribeModelVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonnelVisitWorkOrderDetailResponse> DescribePersonnelVisitWorkOrderDetailOutcome;
                typedef std::future<DescribePersonnelVisitWorkOrderDetailOutcome> DescribePersonnelVisitWorkOrderDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribePersonnelVisitWorkOrderDetailRequest&, DescribePersonnelVisitWorkOrderDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonnelVisitWorkOrderDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePositionStatusSummaryResponse> DescribePositionStatusSummaryOutcome;
                typedef std::future<DescribePositionStatusSummaryOutcome> DescribePositionStatusSummaryOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribePositionStatusSummaryRequest&, DescribePositionStatusSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePositionStatusSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePositionsResponse> DescribePositionsOutcome;
                typedef std::future<DescribePositionsOutcome> DescribePositionsOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribePositionsRequest&, DescribePositionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePositionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRacksResponse> DescribeRacksOutcome;
                typedef std::future<DescribeRacksOutcome> DescribeRacksOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeRacksRequest&, DescribeRacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRacksDistributionResponse> DescribeRacksDistributionOutcome;
                typedef std::future<DescribeRacksDistributionOutcome> DescribeRacksDistributionOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeRacksDistributionRequest&, DescribeRacksDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRacksDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageResponse> DescribeResourceUsageOutcome;
                typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeResourceUsageRequest&, DescribeResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkOrderListResponse> DescribeWorkOrderListOutcome;
                typedef std::future<DescribeWorkOrderListOutcome> DescribeWorkOrderListOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeWorkOrderListRequest&, DescribeWorkOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkOrderStatisticsResponse> DescribeWorkOrderStatisticsOutcome;
                typedef std::future<DescribeWorkOrderStatisticsOutcome> DescribeWorkOrderStatisticsOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeWorkOrderStatisticsRequest&, DescribeWorkOrderStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkOrderStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkOrderTypesResponse> DescribeWorkOrderTypesOutcome;
                typedef std::future<DescribeWorkOrderTypesOutcome> DescribeWorkOrderTypesOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::DescribeWorkOrderTypesRequest&, DescribeWorkOrderTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkOrderTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportCustomerWorkOrderDetailResponse> ExportCustomerWorkOrderDetailOutcome;
                typedef std::future<ExportCustomerWorkOrderDetailOutcome> ExportCustomerWorkOrderDetailOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::ExportCustomerWorkOrderDetailRequest&, ExportCustomerWorkOrderDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportCustomerWorkOrderDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkOrderTypeCollectFlagResponse> ModifyWorkOrderTypeCollectFlagOutcome;
                typedef std::future<ModifyWorkOrderTypeCollectFlagOutcome> ModifyWorkOrderTypeCollectFlagOutcomeCallable;
                typedef std::function<void(const ChcClient*, const Model::ModifyWorkOrderTypeCollectFlagRequest&, ModifyWorkOrderTypeCollectFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkOrderTypeCollectFlagAsyncHandler;



                /**
                 *确认通用服务工单
                 * @param req ConfirmCommonServiceWorkOrderRequest
                 * @return ConfirmCommonServiceWorkOrderOutcome
                 */
                ConfirmCommonServiceWorkOrderOutcome ConfirmCommonServiceWorkOrder(const Model::ConfirmCommonServiceWorkOrderRequest &request);
                void ConfirmCommonServiceWorkOrderAsync(const Model::ConfirmCommonServiceWorkOrderRequest& request, const ConfirmCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmCommonServiceWorkOrderOutcomeCallable ConfirmCommonServiceWorkOrderCallable(const Model::ConfirmCommonServiceWorkOrderRequest& request);

                /**
                 *创建通用工单
                 * @param req CreateCommonServiceWorkOrderRequest
                 * @return CreateCommonServiceWorkOrderOutcome
                 */
                CreateCommonServiceWorkOrderOutcome CreateCommonServiceWorkOrder(const Model::CreateCommonServiceWorkOrderRequest &request);
                void CreateCommonServiceWorkOrderAsync(const Model::CreateCommonServiceWorkOrderRequest& request, const CreateCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommonServiceWorkOrderOutcomeCallable CreateCommonServiceWorkOrderCallable(const Model::CreateCommonServiceWorkOrderRequest& request);

                /**
                 *创建设备型号评估工单
                 * @param req CreateModelEvaluationWorkOrderRequest
                 * @return CreateModelEvaluationWorkOrderOutcome
                 */
                CreateModelEvaluationWorkOrderOutcome CreateModelEvaluationWorkOrder(const Model::CreateModelEvaluationWorkOrderRequest &request);
                void CreateModelEvaluationWorkOrderAsync(const Model::CreateModelEvaluationWorkOrderRequest& request, const CreateModelEvaluationWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelEvaluationWorkOrderOutcomeCallable CreateModelEvaluationWorkOrderCallable(const Model::CreateModelEvaluationWorkOrderRequest& request);

                /**
                 *创建设备搬迁工单
                 * @param req CreateMovingWorkOrderRequest
                 * @return CreateMovingWorkOrderOutcome
                 */
                CreateMovingWorkOrderOutcome CreateMovingWorkOrder(const Model::CreateMovingWorkOrderRequest &request);
                void CreateMovingWorkOrderAsync(const Model::CreateMovingWorkOrderRequest& request, const CreateMovingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMovingWorkOrderOutcomeCallable CreateMovingWorkOrderCallable(const Model::CreateMovingWorkOrderRequest& request);

                /**
                 *创建新的网络设备型号
                 * @param req CreateNetDeviceModelRequest
                 * @return CreateNetDeviceModelOutcome
                 */
                CreateNetDeviceModelOutcome CreateNetDeviceModel(const Model::CreateNetDeviceModelRequest &request);
                void CreateNetDeviceModelAsync(const Model::CreateNetDeviceModelRequest& request, const CreateNetDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetDeviceModelOutcomeCallable CreateNetDeviceModelCallable(const Model::CreateNetDeviceModelRequest& request);

                /**
                 *创建人员到访工单
                 * @param req CreatePersonnelVisitWorkOrderRequest
                 * @return CreatePersonnelVisitWorkOrderOutcome
                 */
                CreatePersonnelVisitWorkOrderOutcome CreatePersonnelVisitWorkOrder(const Model::CreatePersonnelVisitWorkOrderRequest &request);
                void CreatePersonnelVisitWorkOrderAsync(const Model::CreatePersonnelVisitWorkOrderRequest& request, const CreatePersonnelVisitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonnelVisitWorkOrderOutcomeCallable CreatePersonnelVisitWorkOrderCallable(const Model::CreatePersonnelVisitWorkOrderRequest& request);

                /**
                 *创建设备关电工单
                 * @param req CreatePowerOffWorkOrderRequest
                 * @return CreatePowerOffWorkOrderOutcome
                 */
                CreatePowerOffWorkOrderOutcome CreatePowerOffWorkOrder(const Model::CreatePowerOffWorkOrderRequest &request);
                void CreatePowerOffWorkOrderAsync(const Model::CreatePowerOffWorkOrderRequest& request, const CreatePowerOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePowerOffWorkOrderOutcomeCallable CreatePowerOffWorkOrderCallable(const Model::CreatePowerOffWorkOrderRequest& request);

                /**
                 *创建设备开电工单
                 * @param req CreatePowerOnWorkOrderRequest
                 * @return CreatePowerOnWorkOrderOutcome
                 */
                CreatePowerOnWorkOrderOutcome CreatePowerOnWorkOrder(const Model::CreatePowerOnWorkOrderRequest &request);
                void CreatePowerOnWorkOrderAsync(const Model::CreatePowerOnWorkOrderRequest& request, const CreatePowerOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePowerOnWorkOrderOutcomeCallable CreatePowerOnWorkOrderCallable(const Model::CreatePowerOnWorkOrderRequest& request);

                /**
                 *创建设备退出工单
                 * @param req CreateQuitWorkOrderRequest
                 * @return CreateQuitWorkOrderOutcome
                 */
                CreateQuitWorkOrderOutcome CreateQuitWorkOrder(const Model::CreateQuitWorkOrderRequest &request);
                void CreateQuitWorkOrderAsync(const Model::CreateQuitWorkOrderRequest& request, const CreateQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQuitWorkOrderOutcomeCallable CreateQuitWorkOrderCallable(const Model::CreateQuitWorkOrderRequest& request);

                /**
                 *创建设备下架工单
                 * @param req CreateRackOffWorkOrderRequest
                 * @return CreateRackOffWorkOrderOutcome
                 */
                CreateRackOffWorkOrderOutcome CreateRackOffWorkOrder(const Model::CreateRackOffWorkOrderRequest &request);
                void CreateRackOffWorkOrderAsync(const Model::CreateRackOffWorkOrderRequest& request, const CreateRackOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRackOffWorkOrderOutcomeCallable CreateRackOffWorkOrderCallable(const Model::CreateRackOffWorkOrderRequest& request);

                /**
                 *创建设备上架工单
                 * @param req CreateRackOnWorkOrderRequest
                 * @return CreateRackOnWorkOrderOutcome
                 */
                CreateRackOnWorkOrderOutcome CreateRackOnWorkOrder(const Model::CreateRackOnWorkOrderRequest &request);
                void CreateRackOnWorkOrderAsync(const Model::CreateRackOnWorkOrderRequest& request, const CreateRackOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRackOnWorkOrderOutcomeCallable CreateRackOnWorkOrderCallable(const Model::CreateRackOnWorkOrderRequest& request);

                /**
                 *创建设备收货工单
                 * @param req CreateReceivingWorkOrderRequest
                 * @return CreateReceivingWorkOrderOutcome
                 */
                CreateReceivingWorkOrderOutcome CreateReceivingWorkOrder(const Model::CreateReceivingWorkOrderRequest &request);
                void CreateReceivingWorkOrderAsync(const Model::CreateReceivingWorkOrderRequest& request, const CreateReceivingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceivingWorkOrderOutcomeCallable CreateReceivingWorkOrderCallable(const Model::CreateReceivingWorkOrderRequest& request);

                /**
                 *新增服务器设备型号
                 * @param req CreateServerModelRequest
                 * @return CreateServerModelOutcome
                 */
                CreateServerModelOutcome CreateServerModel(const Model::CreateServerModelRequest &request);
                void CreateServerModelAsync(const Model::CreateServerModelRequest& request, const CreateServerModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerModelOutcomeCallable CreateServerModelCallable(const Model::CreateServerModelRequest& request);

                /**
                 *创建临时设备退出工单
                 * @param req CreateSpeciallyQuitWorkOrderRequest
                 * @return CreateSpeciallyQuitWorkOrderOutcome
                 */
                CreateSpeciallyQuitWorkOrderOutcome CreateSpeciallyQuitWorkOrder(const Model::CreateSpeciallyQuitWorkOrderRequest &request);
                void CreateSpeciallyQuitWorkOrderAsync(const Model::CreateSpeciallyQuitWorkOrderRequest& request, const CreateSpeciallyQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSpeciallyQuitWorkOrderOutcomeCallable CreateSpeciallyQuitWorkOrderCallable(const Model::CreateSpeciallyQuitWorkOrderRequest& request);

                /**
                 *获取机房内可用的型号列表
                 * @param req DescribeAvailableModelListRequest
                 * @return DescribeAvailableModelListOutcome
                 */
                DescribeAvailableModelListOutcome DescribeAvailableModelList(const Model::DescribeAvailableModelListRequest &request);
                void DescribeAvailableModelListAsync(const Model::DescribeAvailableModelListRequest& request, const DescribeAvailableModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableModelListOutcomeCallable DescribeAvailableModelListCallable(const Model::DescribeAvailableModelListRequest& request);

                /**
                 *获取用户可操作的园区列表
                 * @param req DescribeCampusListRequest
                 * @return DescribeCampusListOutcome
                 */
                DescribeCampusListOutcome DescribeCampusList(const Model::DescribeCampusListRequest &request);
                void DescribeCampusListAsync(const Model::DescribeCampusListRequest& request, const DescribeCampusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCampusListOutcomeCallable DescribeCampusListCallable(const Model::DescribeCampusListRequest& request);

                /**
                 *查询通用服务工单详情
                 * @param req DescribeCommonServiceWorkOrderDetailRequest
                 * @return DescribeCommonServiceWorkOrderDetailOutcome
                 */
                DescribeCommonServiceWorkOrderDetailOutcome DescribeCommonServiceWorkOrderDetail(const Model::DescribeCommonServiceWorkOrderDetailRequest &request);
                void DescribeCommonServiceWorkOrderDetailAsync(const Model::DescribeCommonServiceWorkOrderDetailRequest& request, const DescribeCommonServiceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommonServiceWorkOrderDetailOutcomeCallable DescribeCommonServiceWorkOrderDetailCallable(const Model::DescribeCommonServiceWorkOrderDetailRequest& request);

                /**
                 *查询客户信息
                 * @param req DescribeCustomerInfoRequest
                 * @return DescribeCustomerInfoOutcome
                 */
                DescribeCustomerInfoOutcome DescribeCustomerInfo(const Model::DescribeCustomerInfoRequest &request);
                void DescribeCustomerInfoAsync(const Model::DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerInfoOutcomeCallable DescribeCustomerInfoCallable(const Model::DescribeCustomerInfoRequest& request);

                /**
                 *获取设备列表
                 * @param req DescribeDeviceListRequest
                 * @return DescribeDeviceListOutcome
                 */
                DescribeDeviceListOutcome DescribeDeviceList(const Model::DescribeDeviceListRequest &request);
                void DescribeDeviceListAsync(const Model::DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceListOutcomeCallable DescribeDeviceListCallable(const Model::DescribeDeviceListRequest& request);

                /**
                 *用于查询设备类工单的工单详情，如：'receiving', 'rackOn', 'powerOn', 'powerOff', 'rackOff', 'quit'
                 * @param req DescribeDeviceWorkOrderDetailRequest
                 * @return DescribeDeviceWorkOrderDetailOutcome
                 */
                DescribeDeviceWorkOrderDetailOutcome DescribeDeviceWorkOrderDetail(const Model::DescribeDeviceWorkOrderDetailRequest &request);
                void DescribeDeviceWorkOrderDetailAsync(const Model::DescribeDeviceWorkOrderDetailRequest& request, const DescribeDeviceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceWorkOrderDetailOutcomeCallable DescribeDeviceWorkOrderDetailCallable(const Model::DescribeDeviceWorkOrderDetailRequest& request);

                /**
                 *查询机房管理单元资产详情
                 * @param req DescribeIdcUnitAssetDetailRequest
                 * @return DescribeIdcUnitAssetDetailOutcome
                 */
                DescribeIdcUnitAssetDetailOutcome DescribeIdcUnitAssetDetail(const Model::DescribeIdcUnitAssetDetailRequest &request);
                void DescribeIdcUnitAssetDetailAsync(const Model::DescribeIdcUnitAssetDetailRequest& request, const DescribeIdcUnitAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdcUnitAssetDetailOutcomeCallable DescribeIdcUnitAssetDetailCallable(const Model::DescribeIdcUnitAssetDetailRequest& request);

                /**
                 *查询机房管理单元详情
                 * @param req DescribeIdcUnitDetailRequest
                 * @return DescribeIdcUnitDetailOutcome
                 */
                DescribeIdcUnitDetailOutcome DescribeIdcUnitDetail(const Model::DescribeIdcUnitDetailRequest &request);
                void DescribeIdcUnitDetailAsync(const Model::DescribeIdcUnitDetailRequest& request, const DescribeIdcUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdcUnitDetailOutcomeCallable DescribeIdcUnitDetailCallable(const Model::DescribeIdcUnitDetailRequest& request);

                /**
                 *获取机房和机房管理单元信息
                 * @param req DescribeIdcsRequest
                 * @return DescribeIdcsOutcome
                 */
                DescribeIdcsOutcome DescribeIdcs(const Model::DescribeIdcsRequest &request);
                void DescribeIdcsAsync(const Model::DescribeIdcsRequest& request, const DescribeIdcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdcsOutcomeCallable DescribeIdcsCallable(const Model::DescribeIdcsRequest& request);

                /**
                 *查询设备型号详情
                 * @param req DescribeModelRequest
                 * @return DescribeModelOutcome
                 */
                DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest &request);
                void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request);

                /**
                 *查询设备型号评估工单详情
                 * @param req DescribeModelEvaluationWorkOrderDetailRequest
                 * @return DescribeModelEvaluationWorkOrderDetailOutcome
                 */
                DescribeModelEvaluationWorkOrderDetailOutcome DescribeModelEvaluationWorkOrderDetail(const Model::DescribeModelEvaluationWorkOrderDetailRequest &request);
                void DescribeModelEvaluationWorkOrderDetailAsync(const Model::DescribeModelEvaluationWorkOrderDetailRequest& request, const DescribeModelEvaluationWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelEvaluationWorkOrderDetailOutcomeCallable DescribeModelEvaluationWorkOrderDetailCallable(const Model::DescribeModelEvaluationWorkOrderDetailRequest& request);

                /**
                 *获取型号的填写模板
                 * @param req DescribeModelTemplateRequest
                 * @return DescribeModelTemplateOutcome
                 */
                DescribeModelTemplateOutcome DescribeModelTemplate(const Model::DescribeModelTemplateRequest &request);
                void DescribeModelTemplateAsync(const Model::DescribeModelTemplateRequest& request, const DescribeModelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelTemplateOutcomeCallable DescribeModelTemplateCallable(const Model::DescribeModelTemplateRequest& request);

                /**
                 *获取用户的型号和对应的版本数量
                 * @param req DescribeModelVersionListRequest
                 * @return DescribeModelVersionListOutcome
                 */
                DescribeModelVersionListOutcome DescribeModelVersionList(const Model::DescribeModelVersionListRequest &request);
                void DescribeModelVersionListAsync(const Model::DescribeModelVersionListRequest& request, const DescribeModelVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelVersionListOutcomeCallable DescribeModelVersionListCallable(const Model::DescribeModelVersionListRequest& request);

                /**
                 *查询人员到访工单详情
                 * @param req DescribePersonnelVisitWorkOrderDetailRequest
                 * @return DescribePersonnelVisitWorkOrderDetailOutcome
                 */
                DescribePersonnelVisitWorkOrderDetailOutcome DescribePersonnelVisitWorkOrderDetail(const Model::DescribePersonnelVisitWorkOrderDetailRequest &request);
                void DescribePersonnelVisitWorkOrderDetailAsync(const Model::DescribePersonnelVisitWorkOrderDetailRequest& request, const DescribePersonnelVisitWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonnelVisitWorkOrderDetailOutcomeCallable DescribePersonnelVisitWorkOrderDetailCallable(const Model::DescribePersonnelVisitWorkOrderDetailRequest& request);

                /**
                 *获取机架总数及各状态对应的数量汇总
                 * @param req DescribePositionStatusSummaryRequest
                 * @return DescribePositionStatusSummaryOutcome
                 */
                DescribePositionStatusSummaryOutcome DescribePositionStatusSummary(const Model::DescribePositionStatusSummaryRequest &request);
                void DescribePositionStatusSummaryAsync(const Model::DescribePositionStatusSummaryRequest& request, const DescribePositionStatusSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePositionStatusSummaryOutcomeCallable DescribePositionStatusSummaryCallable(const Model::DescribePositionStatusSummaryRequest& request);

                /**
                 *获取机位列表
                 * @param req DescribePositionsRequest
                 * @return DescribePositionsOutcome
                 */
                DescribePositionsOutcome DescribePositions(const Model::DescribePositionsRequest &request);
                void DescribePositionsAsync(const Model::DescribePositionsRequest& request, const DescribePositionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePositionsOutcomeCallable DescribePositionsCallable(const Model::DescribePositionsRequest& request);

                /**
                 *获取机架列表
                 * @param req DescribeRacksRequest
                 * @return DescribeRacksOutcome
                 */
                DescribeRacksOutcome DescribeRacks(const Model::DescribeRacksRequest &request);
                void DescribeRacksAsync(const Model::DescribeRacksRequest& request, const DescribeRacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRacksOutcomeCallable DescribeRacksCallable(const Model::DescribeRacksRequest& request);

                /**
                 *获取机房管理单元的机位分布
                 * @param req DescribeRacksDistributionRequest
                 * @return DescribeRacksDistributionOutcome
                 */
                DescribeRacksDistributionOutcome DescribeRacksDistribution(const Model::DescribeRacksDistributionRequest &request);
                void DescribeRacksDistributionAsync(const Model::DescribeRacksDistributionRequest& request, const DescribeRacksDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRacksDistributionOutcomeCallable DescribeRacksDistributionCallable(const Model::DescribeRacksDistributionRequest& request);

                /**
                 *查询资源汇总
                 * @param req DescribeResourceUsageRequest
                 * @return DescribeResourceUsageOutcome
                 */
                DescribeResourceUsageOutcome DescribeResourceUsage(const Model::DescribeResourceUsageRequest &request);
                void DescribeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageOutcomeCallable DescribeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request);

                /**
                 *查询工单列表
                 * @param req DescribeWorkOrderListRequest
                 * @return DescribeWorkOrderListOutcome
                 */
                DescribeWorkOrderListOutcome DescribeWorkOrderList(const Model::DescribeWorkOrderListRequest &request);
                void DescribeWorkOrderListAsync(const Model::DescribeWorkOrderListRequest& request, const DescribeWorkOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkOrderListOutcomeCallable DescribeWorkOrderListCallable(const Model::DescribeWorkOrderListRequest& request);

                /**
                 *工单统计数据查询
                 * @param req DescribeWorkOrderStatisticsRequest
                 * @return DescribeWorkOrderStatisticsOutcome
                 */
                DescribeWorkOrderStatisticsOutcome DescribeWorkOrderStatistics(const Model::DescribeWorkOrderStatisticsRequest &request);
                void DescribeWorkOrderStatisticsAsync(const Model::DescribeWorkOrderStatisticsRequest& request, const DescribeWorkOrderStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkOrderStatisticsOutcomeCallable DescribeWorkOrderStatisticsCallable(const Model::DescribeWorkOrderStatisticsRequest& request);

                /**
                 *获取用户可用的工单类型
                 * @param req DescribeWorkOrderTypesRequest
                 * @return DescribeWorkOrderTypesOutcome
                 */
                DescribeWorkOrderTypesOutcome DescribeWorkOrderTypes(const Model::DescribeWorkOrderTypesRequest &request);
                void DescribeWorkOrderTypesAsync(const Model::DescribeWorkOrderTypesRequest& request, const DescribeWorkOrderTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkOrderTypesOutcomeCallable DescribeWorkOrderTypesCallable(const Model::DescribeWorkOrderTypesRequest& request);

                /**
                 *导出工单详情
                 * @param req ExportCustomerWorkOrderDetailRequest
                 * @return ExportCustomerWorkOrderDetailOutcome
                 */
                ExportCustomerWorkOrderDetailOutcome ExportCustomerWorkOrderDetail(const Model::ExportCustomerWorkOrderDetailRequest &request);
                void ExportCustomerWorkOrderDetailAsync(const Model::ExportCustomerWorkOrderDetailRequest& request, const ExportCustomerWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportCustomerWorkOrderDetailOutcomeCallable ExportCustomerWorkOrderDetailCallable(const Model::ExportCustomerWorkOrderDetailRequest& request);

                /**
                 *如果当前该工单类型是收藏状态，调用接口后变成未收藏状态，如果是未收藏状态，调用该接口变为收藏状态
                 * @param req ModifyWorkOrderTypeCollectFlagRequest
                 * @return ModifyWorkOrderTypeCollectFlagOutcome
                 */
                ModifyWorkOrderTypeCollectFlagOutcome ModifyWorkOrderTypeCollectFlag(const Model::ModifyWorkOrderTypeCollectFlagRequest &request);
                void ModifyWorkOrderTypeCollectFlagAsync(const Model::ModifyWorkOrderTypeCollectFlagRequest& request, const ModifyWorkOrderTypeCollectFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkOrderTypeCollectFlagOutcomeCallable ModifyWorkOrderTypeCollectFlagCallable(const Model::ModifyWorkOrderTypeCollectFlagRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_CHCCLIENT_H_
