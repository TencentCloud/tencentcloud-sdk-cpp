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

#ifndef TENCENTCLOUD_IGTM_V20231024_IGTMCLIENT_H_
#define TENCENTCLOUD_IGTM_V20231024_IGTMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/igtm/v20231024/model/CreateAddressPoolRequest.h>
#include <tencentcloud/igtm/v20231024/model/CreateAddressPoolResponse.h>
#include <tencentcloud/igtm/v20231024/model/CreateInstanceRequest.h>
#include <tencentcloud/igtm/v20231024/model/CreateInstanceResponse.h>
#include <tencentcloud/igtm/v20231024/model/CreateMonitorRequest.h>
#include <tencentcloud/igtm/v20231024/model/CreateMonitorResponse.h>
#include <tencentcloud/igtm/v20231024/model/CreatePackageAndPayRequest.h>
#include <tencentcloud/igtm/v20231024/model/CreatePackageAndPayResponse.h>
#include <tencentcloud/igtm/v20231024/model/CreateStrategyRequest.h>
#include <tencentcloud/igtm/v20231024/model/CreateStrategyResponse.h>
#include <tencentcloud/igtm/v20231024/model/DeleteAddressPoolRequest.h>
#include <tencentcloud/igtm/v20231024/model/DeleteAddressPoolResponse.h>
#include <tencentcloud/igtm/v20231024/model/DeleteMonitorRequest.h>
#include <tencentcloud/igtm/v20231024/model/DeleteMonitorResponse.h>
#include <tencentcloud/igtm/v20231024/model/DeleteStrategyRequest.h>
#include <tencentcloud/igtm/v20231024/model/DeleteStrategyResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressLocationRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressLocationResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressPoolDetailRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressPoolDetailResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressPoolListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeAddressPoolListResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectPackageDetailRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectPackageDetailResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectTaskPackageListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectTaskPackageListResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectorsRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDetectorsResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDnsLineListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeDnsLineListResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstanceDetailRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstanceListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstanceListResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstancePackageListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeInstancePackageListResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeMonitorDetailRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeMonitorDetailResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeMonitorsRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeMonitorsResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeQuotasRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeQuotasResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeStrategyDetailRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeStrategyDetailResponse.h>
#include <tencentcloud/igtm/v20231024/model/DescribeStrategyListRequest.h>
#include <tencentcloud/igtm/v20231024/model/DescribeStrategyListResponse.h>
#include <tencentcloud/igtm/v20231024/model/ModifyAddressPoolRequest.h>
#include <tencentcloud/igtm/v20231024/model/ModifyAddressPoolResponse.h>
#include <tencentcloud/igtm/v20231024/model/ModifyInstanceConfigRequest.h>
#include <tencentcloud/igtm/v20231024/model/ModifyInstanceConfigResponse.h>
#include <tencentcloud/igtm/v20231024/model/ModifyMonitorRequest.h>
#include <tencentcloud/igtm/v20231024/model/ModifyMonitorResponse.h>
#include <tencentcloud/igtm/v20231024/model/ModifyPackageAutoRenewRequest.h>
#include <tencentcloud/igtm/v20231024/model/ModifyPackageAutoRenewResponse.h>
#include <tencentcloud/igtm/v20231024/model/ModifyStrategyRequest.h>
#include <tencentcloud/igtm/v20231024/model/ModifyStrategyResponse.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            class IgtmClient : public AbstractClient
            {
            public:
                IgtmClient(const Credential &credential, const std::string &region);
                IgtmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAddressPoolResponse> CreateAddressPoolOutcome;
                typedef std::future<CreateAddressPoolOutcome> CreateAddressPoolOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::CreateAddressPoolRequest&, CreateAddressPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressPoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMonitorResponse> CreateMonitorOutcome;
                typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::CreateMonitorRequest&, CreateMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePackageAndPayResponse> CreatePackageAndPayOutcome;
                typedef std::future<CreatePackageAndPayOutcome> CreatePackageAndPayOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::CreatePackageAndPayRequest&, CreatePackageAndPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePackageAndPayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStrategyResponse> CreateStrategyOutcome;
                typedef std::future<CreateStrategyOutcome> CreateStrategyOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::CreateStrategyRequest&, CreateStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressPoolResponse> DeleteAddressPoolOutcome;
                typedef std::future<DeleteAddressPoolOutcome> DeleteAddressPoolOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DeleteAddressPoolRequest&, DeleteAddressPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressPoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMonitorResponse> DeleteMonitorOutcome;
                typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DeleteMonitorRequest&, DeleteMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStrategyResponse> DeleteStrategyOutcome;
                typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DeleteStrategyRequest&, DeleteStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressLocationResponse> DescribeAddressLocationOutcome;
                typedef std::future<DescribeAddressLocationOutcome> DescribeAddressLocationOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeAddressLocationRequest&, DescribeAddressLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressPoolDetailResponse> DescribeAddressPoolDetailOutcome;
                typedef std::future<DescribeAddressPoolDetailOutcome> DescribeAddressPoolDetailOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeAddressPoolDetailRequest&, DescribeAddressPoolDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressPoolDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressPoolListResponse> DescribeAddressPoolListOutcome;
                typedef std::future<DescribeAddressPoolListOutcome> DescribeAddressPoolListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeAddressPoolListRequest&, DescribeAddressPoolListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressPoolListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetectPackageDetailResponse> DescribeDetectPackageDetailOutcome;
                typedef std::future<DescribeDetectPackageDetailOutcome> DescribeDetectPackageDetailOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeDetectPackageDetailRequest&, DescribeDetectPackageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetectPackageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetectTaskPackageListResponse> DescribeDetectTaskPackageListOutcome;
                typedef std::future<DescribeDetectTaskPackageListOutcome> DescribeDetectTaskPackageListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeDetectTaskPackageListRequest&, DescribeDetectTaskPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetectTaskPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetectorsResponse> DescribeDetectorsOutcome;
                typedef std::future<DescribeDetectorsOutcome> DescribeDetectorsOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeDetectorsRequest&, DescribeDetectorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetectorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsLineListResponse> DescribeDnsLineListOutcome;
                typedef std::future<DescribeDnsLineListOutcome> DescribeDnsLineListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeDnsLineListRequest&, DescribeDnsLineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsLineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailResponse> DescribeInstanceDetailOutcome;
                typedef std::future<DescribeInstanceDetailOutcome> DescribeInstanceDetailOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeInstanceDetailRequest&, DescribeInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancePackageListResponse> DescribeInstancePackageListOutcome;
                typedef std::future<DescribeInstancePackageListOutcome> DescribeInstancePackageListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeInstancePackageListRequest&, DescribeInstancePackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorDetailResponse> DescribeMonitorDetailOutcome;
                typedef std::future<DescribeMonitorDetailOutcome> DescribeMonitorDetailOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeMonitorDetailRequest&, DescribeMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorsResponse> DescribeMonitorsOutcome;
                typedef std::future<DescribeMonitorsOutcome> DescribeMonitorsOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeMonitorsRequest&, DescribeMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotasResponse> DescribeQuotasOutcome;
                typedef std::future<DescribeQuotasOutcome> DescribeQuotasOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeQuotasRequest&, DescribeQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyDetailResponse> DescribeStrategyDetailOutcome;
                typedef std::future<DescribeStrategyDetailOutcome> DescribeStrategyDetailOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeStrategyDetailRequest&, DescribeStrategyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyListResponse> DescribeStrategyListOutcome;
                typedef std::future<DescribeStrategyListOutcome> DescribeStrategyListOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::DescribeStrategyListRequest&, DescribeStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressPoolResponse> ModifyAddressPoolOutcome;
                typedef std::future<ModifyAddressPoolOutcome> ModifyAddressPoolOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::ModifyAddressPoolRequest&, ModifyAddressPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressPoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceConfigResponse> ModifyInstanceConfigOutcome;
                typedef std::future<ModifyInstanceConfigOutcome> ModifyInstanceConfigOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::ModifyInstanceConfigRequest&, ModifyInstanceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMonitorResponse> ModifyMonitorOutcome;
                typedef std::future<ModifyMonitorOutcome> ModifyMonitorOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::ModifyMonitorRequest&, ModifyMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPackageAutoRenewResponse> ModifyPackageAutoRenewOutcome;
                typedef std::future<ModifyPackageAutoRenewOutcome> ModifyPackageAutoRenewOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::ModifyPackageAutoRenewRequest&, ModifyPackageAutoRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPackageAutoRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStrategyResponse> ModifyStrategyOutcome;
                typedef std::future<ModifyStrategyOutcome> ModifyStrategyOutcomeCallable;
                typedef std::function<void(const IgtmClient*, const Model::ModifyStrategyRequest&, ModifyStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyAsyncHandler;



                /**
                 *创建地址池
                 * @param req CreateAddressPoolRequest
                 * @return CreateAddressPoolOutcome
                 */
                CreateAddressPoolOutcome CreateAddressPool(const Model::CreateAddressPoolRequest &request);
                void CreateAddressPoolAsync(const Model::CreateAddressPoolRequest& request, const CreateAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressPoolOutcomeCallable CreateAddressPoolCallable(const Model::CreateAddressPoolRequest& request);

                /**
                 *创建实例接口，仅供免费实例使用
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *新增监控器
                 * @param req CreateMonitorRequest
                 * @return CreateMonitorOutcome
                 */
                CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest &request);
                void CreateMonitorAsync(const Model::CreateMonitorRequest& request, const CreateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMonitorOutcomeCallable CreateMonitorCallable(const Model::CreateMonitorRequest& request);

                /**
                 *购买套餐并支付，此接口会在余额扣费，谨慎调用
                 * @param req CreatePackageAndPayRequest
                 * @return CreatePackageAndPayOutcome
                 */
                CreatePackageAndPayOutcome CreatePackageAndPay(const Model::CreatePackageAndPayRequest &request);
                void CreatePackageAndPayAsync(const Model::CreatePackageAndPayRequest& request, const CreatePackageAndPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePackageAndPayOutcomeCallable CreatePackageAndPayCallable(const Model::CreatePackageAndPayRequest& request);

                /**
                 *新建策略接口
                 * @param req CreateStrategyRequest
                 * @return CreateStrategyOutcome
                 */
                CreateStrategyOutcome CreateStrategy(const Model::CreateStrategyRequest &request);
                void CreateStrategyAsync(const Model::CreateStrategyRequest& request, const CreateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStrategyOutcomeCallable CreateStrategyCallable(const Model::CreateStrategyRequest& request);

                /**
                 *删除地址池
                 * @param req DeleteAddressPoolRequest
                 * @return DeleteAddressPoolOutcome
                 */
                DeleteAddressPoolOutcome DeleteAddressPool(const Model::DeleteAddressPoolRequest &request);
                void DeleteAddressPoolAsync(const Model::DeleteAddressPoolRequest& request, const DeleteAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressPoolOutcomeCallable DeleteAddressPoolCallable(const Model::DeleteAddressPoolRequest& request);

                /**
                 *删除监控器
                 * @param req DeleteMonitorRequest
                 * @return DeleteMonitorOutcome
                 */
                DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest &request);
                void DeleteMonitorAsync(const Model::DeleteMonitorRequest& request, const DeleteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMonitorOutcomeCallable DeleteMonitorCallable(const Model::DeleteMonitorRequest& request);

                /**
                 *删除策略接口
                 * @param req DeleteStrategyRequest
                 * @return DeleteStrategyOutcome
                 */
                DeleteStrategyOutcome DeleteStrategy(const Model::DeleteStrategyRequest &request);
                void DeleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStrategyOutcomeCallable DeleteStrategyCallable(const Model::DeleteStrategyRequest& request);

                /**
                 *获取地址所属地域
                 * @param req DescribeAddressLocationRequest
                 * @return DescribeAddressLocationOutcome
                 */
                DescribeAddressLocationOutcome DescribeAddressLocation(const Model::DescribeAddressLocationRequest &request);
                void DescribeAddressLocationAsync(const Model::DescribeAddressLocationRequest& request, const DescribeAddressLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressLocationOutcomeCallable DescribeAddressLocationCallable(const Model::DescribeAddressLocationRequest& request);

                /**
                 *地址池详情
                 * @param req DescribeAddressPoolDetailRequest
                 * @return DescribeAddressPoolDetailOutcome
                 */
                DescribeAddressPoolDetailOutcome DescribeAddressPoolDetail(const Model::DescribeAddressPoolDetailRequest &request);
                void DescribeAddressPoolDetailAsync(const Model::DescribeAddressPoolDetailRequest& request, const DescribeAddressPoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressPoolDetailOutcomeCallable DescribeAddressPoolDetailCallable(const Model::DescribeAddressPoolDetailRequest& request);

                /**
                 *地址池列表
                 * @param req DescribeAddressPoolListRequest
                 * @return DescribeAddressPoolListOutcome
                 */
                DescribeAddressPoolListOutcome DescribeAddressPoolList(const Model::DescribeAddressPoolListRequest &request);
                void DescribeAddressPoolListAsync(const Model::DescribeAddressPoolListRequest& request, const DescribeAddressPoolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressPoolListOutcomeCallable DescribeAddressPoolListCallable(const Model::DescribeAddressPoolListRequest& request);

                /**
                 *探测任务包详情
                 * @param req DescribeDetectPackageDetailRequest
                 * @return DescribeDetectPackageDetailOutcome
                 */
                DescribeDetectPackageDetailOutcome DescribeDetectPackageDetail(const Model::DescribeDetectPackageDetailRequest &request);
                void DescribeDetectPackageDetailAsync(const Model::DescribeDetectPackageDetailRequest& request, const DescribeDetectPackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetectPackageDetailOutcomeCallable DescribeDetectPackageDetailCallable(const Model::DescribeDetectPackageDetailRequest& request);

                /**
                 *探测任务套餐列表
                 * @param req DescribeDetectTaskPackageListRequest
                 * @return DescribeDetectTaskPackageListOutcome
                 */
                DescribeDetectTaskPackageListOutcome DescribeDetectTaskPackageList(const Model::DescribeDetectTaskPackageListRequest &request);
                void DescribeDetectTaskPackageListAsync(const Model::DescribeDetectTaskPackageListRequest& request, const DescribeDetectTaskPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetectTaskPackageListOutcomeCallable DescribeDetectTaskPackageListCallable(const Model::DescribeDetectTaskPackageListRequest& request);

                /**
                 *获取探测节点列表接口
                 * @param req DescribeDetectorsRequest
                 * @return DescribeDetectorsOutcome
                 */
                DescribeDetectorsOutcome DescribeDetectors(const Model::DescribeDetectorsRequest &request);
                void DescribeDetectorsAsync(const Model::DescribeDetectorsRequest& request, const DescribeDetectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetectorsOutcomeCallable DescribeDetectorsCallable(const Model::DescribeDetectorsRequest& request);

                /**
                 *查询分组线路列表接口
                 * @param req DescribeDnsLineListRequest
                 * @return DescribeDnsLineListOutcome
                 */
                DescribeDnsLineListOutcome DescribeDnsLineList(const Model::DescribeDnsLineListRequest &request);
                void DescribeDnsLineListAsync(const Model::DescribeDnsLineListRequest& request, const DescribeDnsLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsLineListOutcomeCallable DescribeDnsLineListCallable(const Model::DescribeDnsLineListRequest& request);

                /**
                 *实例详情
                 * @param req DescribeInstanceDetailRequest
                 * @return DescribeInstanceDetailOutcome
                 */
                DescribeInstanceDetailOutcome DescribeInstanceDetail(const Model::DescribeInstanceDetailRequest &request);
                void DescribeInstanceDetailAsync(const Model::DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailOutcomeCallable DescribeInstanceDetailCallable(const Model::DescribeInstanceDetailRequest& request);

                /**
                 *实例列表
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *实例套餐列表
                 * @param req DescribeInstancePackageListRequest
                 * @return DescribeInstancePackageListOutcome
                 */
                DescribeInstancePackageListOutcome DescribeInstancePackageList(const Model::DescribeInstancePackageListRequest &request);
                void DescribeInstancePackageListAsync(const Model::DescribeInstancePackageListRequest& request, const DescribeInstancePackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancePackageListOutcomeCallable DescribeInstancePackageListCallable(const Model::DescribeInstancePackageListRequest& request);

                /**
                 *查询监控器详情接口
                 * @param req DescribeMonitorDetailRequest
                 * @return DescribeMonitorDetailOutcome
                 */
                DescribeMonitorDetailOutcome DescribeMonitorDetail(const Model::DescribeMonitorDetailRequest &request);
                void DescribeMonitorDetailAsync(const Model::DescribeMonitorDetailRequest& request, const DescribeMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorDetailOutcomeCallable DescribeMonitorDetailCallable(const Model::DescribeMonitorDetailRequest& request);

                /**
                 *获取所有监控器
                 * @param req DescribeMonitorsRequest
                 * @return DescribeMonitorsOutcome
                 */
                DescribeMonitorsOutcome DescribeMonitors(const Model::DescribeMonitorsRequest &request);
                void DescribeMonitorsAsync(const Model::DescribeMonitorsRequest& request, const DescribeMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorsOutcomeCallable DescribeMonitorsCallable(const Model::DescribeMonitorsRequest& request);

                /**
                 *配额查询
                 * @param req DescribeQuotasRequest
                 * @return DescribeQuotasOutcome
                 */
                DescribeQuotasOutcome DescribeQuotas(const Model::DescribeQuotasRequest &request);
                void DescribeQuotasAsync(const Model::DescribeQuotasRequest& request, const DescribeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotasOutcomeCallable DescribeQuotasCallable(const Model::DescribeQuotasRequest& request);

                /**
                 *策略详情
                 * @param req DescribeStrategyDetailRequest
                 * @return DescribeStrategyDetailOutcome
                 */
                DescribeStrategyDetailOutcome DescribeStrategyDetail(const Model::DescribeStrategyDetailRequest &request);
                void DescribeStrategyDetailAsync(const Model::DescribeStrategyDetailRequest& request, const DescribeStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyDetailOutcomeCallable DescribeStrategyDetailCallable(const Model::DescribeStrategyDetailRequest& request);

                /**
                 *策略列表接口
                 * @param req DescribeStrategyListRequest
                 * @return DescribeStrategyListOutcome
                 */
                DescribeStrategyListOutcome DescribeStrategyList(const Model::DescribeStrategyListRequest &request);
                void DescribeStrategyListAsync(const Model::DescribeStrategyListRequest& request, const DescribeStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyListOutcomeCallable DescribeStrategyListCallable(const Model::DescribeStrategyListRequest& request);

                /**
                 *修改地址池
                 * @param req ModifyAddressPoolRequest
                 * @return ModifyAddressPoolOutcome
                 */
                ModifyAddressPoolOutcome ModifyAddressPool(const Model::ModifyAddressPoolRequest &request);
                void ModifyAddressPoolAsync(const Model::ModifyAddressPoolRequest& request, const ModifyAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressPoolOutcomeCallable ModifyAddressPoolCallable(const Model::ModifyAddressPoolRequest& request);

                /**
                 *修改实例配置
                 * @param req ModifyInstanceConfigRequest
                 * @return ModifyInstanceConfigOutcome
                 */
                ModifyInstanceConfigOutcome ModifyInstanceConfig(const Model::ModifyInstanceConfigRequest &request);
                void ModifyInstanceConfigAsync(const Model::ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceConfigOutcomeCallable ModifyInstanceConfigCallable(const Model::ModifyInstanceConfigRequest& request);

                /**
                 *修改监控器
                 * @param req ModifyMonitorRequest
                 * @return ModifyMonitorOutcome
                 */
                ModifyMonitorOutcome ModifyMonitor(const Model::ModifyMonitorRequest &request);
                void ModifyMonitorAsync(const Model::ModifyMonitorRequest& request, const ModifyMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMonitorOutcomeCallable ModifyMonitorCallable(const Model::ModifyMonitorRequest& request);

                /**
                 *设置自动续费接口
                 * @param req ModifyPackageAutoRenewRequest
                 * @return ModifyPackageAutoRenewOutcome
                 */
                ModifyPackageAutoRenewOutcome ModifyPackageAutoRenew(const Model::ModifyPackageAutoRenewRequest &request);
                void ModifyPackageAutoRenewAsync(const Model::ModifyPackageAutoRenewRequest& request, const ModifyPackageAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPackageAutoRenewOutcomeCallable ModifyPackageAutoRenewCallable(const Model::ModifyPackageAutoRenewRequest& request);

                /**
                 *修改策略接口
                 * @param req ModifyStrategyRequest
                 * @return ModifyStrategyOutcome
                 */
                ModifyStrategyOutcome ModifyStrategy(const Model::ModifyStrategyRequest &request);
                void ModifyStrategyAsync(const Model::ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStrategyOutcomeCallable ModifyStrategyCallable(const Model::ModifyStrategyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_IGTMCLIENT_H_
