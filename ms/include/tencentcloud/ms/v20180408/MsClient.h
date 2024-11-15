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

#ifndef TENCENTCLOUD_MS_V20180408_MSCLIENT_H_
#define TENCENTCLOUD_MS_V20180408_MSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ms/v20180408/model/CancelEncryptTaskRequest.h>
#include <tencentcloud/ms/v20180408/model/CancelEncryptTaskResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateBindInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateBindInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateEncryptInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateEncryptInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateOrderInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateOrderInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateResourceInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateResourceInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateShieldInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateShieldInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/CreateShieldPlanInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/CreateShieldPlanInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/DeleteShieldInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DeleteShieldInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeApkDetectionResultRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeApkDetectionResultResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeEncryptInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeEncryptInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeEncryptPlanRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeEncryptPlanResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeOrderInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeOrderInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeResourceInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeResourceInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldPlanInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldPlanInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldResultRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeShieldResultResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeUrlDetectionResultRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeUrlDetectionResultResponse.h>
#include <tencentcloud/ms/v20180408/model/DescribeUserBaseInfoInstanceRequest.h>
#include <tencentcloud/ms/v20180408/model/DescribeUserBaseInfoInstanceResponse.h>
#include <tencentcloud/ms/v20180408/model/DestroyResourceInstancesRequest.h>
#include <tencentcloud/ms/v20180408/model/DestroyResourceInstancesResponse.h>
#include <tencentcloud/ms/v20180408/model/RequestLocalTaskRequest.h>
#include <tencentcloud/ms/v20180408/model/RequestLocalTaskResponse.h>
#include <tencentcloud/ms/v20180408/model/UpdateClientStateRequest.h>
#include <tencentcloud/ms/v20180408/model/UpdateClientStateResponse.h>
#include <tencentcloud/ms/v20180408/model/UpdateLocalTaskResultRequest.h>
#include <tencentcloud/ms/v20180408/model/UpdateLocalTaskResultResponse.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            class MsClient : public AbstractClient
            {
            public:
                MsClient(const Credential &credential, const std::string &region);
                MsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelEncryptTaskResponse> CancelEncryptTaskOutcome;
                typedef std::future<CancelEncryptTaskOutcome> CancelEncryptTaskOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CancelEncryptTaskRequest&, CancelEncryptTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelEncryptTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBindInstanceResponse> CreateBindInstanceOutcome;
                typedef std::future<CreateBindInstanceOutcome> CreateBindInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateBindInstanceRequest&, CreateBindInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBindInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosSecKeyInstanceResponse> CreateCosSecKeyInstanceOutcome;
                typedef std::future<CreateCosSecKeyInstanceOutcome> CreateCosSecKeyInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateCosSecKeyInstanceRequest&, CreateCosSecKeyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosSecKeyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEncryptInstanceResponse> CreateEncryptInstanceOutcome;
                typedef std::future<CreateEncryptInstanceOutcome> CreateEncryptInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateEncryptInstanceRequest&, CreateEncryptInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEncryptInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrderInstanceResponse> CreateOrderInstanceOutcome;
                typedef std::future<CreateOrderInstanceOutcome> CreateOrderInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateOrderInstanceRequest&, CreateOrderInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceInstancesResponse> CreateResourceInstancesOutcome;
                typedef std::future<CreateResourceInstancesOutcome> CreateResourceInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateResourceInstancesRequest&, CreateResourceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateShieldInstanceResponse> CreateShieldInstanceOutcome;
                typedef std::future<CreateShieldInstanceOutcome> CreateShieldInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateShieldInstanceRequest&, CreateShieldInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShieldInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateShieldPlanInstanceResponse> CreateShieldPlanInstanceOutcome;
                typedef std::future<CreateShieldPlanInstanceOutcome> CreateShieldPlanInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::CreateShieldPlanInstanceRequest&, CreateShieldPlanInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShieldPlanInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShieldInstancesResponse> DeleteShieldInstancesOutcome;
                typedef std::future<DeleteShieldInstancesOutcome> DeleteShieldInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DeleteShieldInstancesRequest&, DeleteShieldInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShieldInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApkDetectionResultResponse> DescribeApkDetectionResultOutcome;
                typedef std::future<DescribeApkDetectionResultOutcome> DescribeApkDetectionResultOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeApkDetectionResultRequest&, DescribeApkDetectionResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApkDetectionResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptInstancesResponse> DescribeEncryptInstancesOutcome;
                typedef std::future<DescribeEncryptInstancesOutcome> DescribeEncryptInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeEncryptInstancesRequest&, DescribeEncryptInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptPlanResponse> DescribeEncryptPlanOutcome;
                typedef std::future<DescribeEncryptPlanOutcome> DescribeEncryptPlanOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeEncryptPlanRequest&, DescribeEncryptPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrderInstancesResponse> DescribeOrderInstancesOutcome;
                typedef std::future<DescribeOrderInstancesOutcome> DescribeOrderInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeOrderInstancesRequest&, DescribeOrderInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceInstancesResponse> DescribeResourceInstancesOutcome;
                typedef std::future<DescribeResourceInstancesOutcome> DescribeResourceInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeResourceInstancesRequest&, DescribeResourceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShieldInstancesResponse> DescribeShieldInstancesOutcome;
                typedef std::future<DescribeShieldInstancesOutcome> DescribeShieldInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeShieldInstancesRequest&, DescribeShieldInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShieldInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShieldPlanInstanceResponse> DescribeShieldPlanInstanceOutcome;
                typedef std::future<DescribeShieldPlanInstanceOutcome> DescribeShieldPlanInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeShieldPlanInstanceRequest&, DescribeShieldPlanInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShieldPlanInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShieldResultResponse> DescribeShieldResultOutcome;
                typedef std::future<DescribeShieldResultOutcome> DescribeShieldResultOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeShieldResultRequest&, DescribeShieldResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShieldResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUrlDetectionResultResponse> DescribeUrlDetectionResultOutcome;
                typedef std::future<DescribeUrlDetectionResultOutcome> DescribeUrlDetectionResultOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeUrlDetectionResultRequest&, DescribeUrlDetectionResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUrlDetectionResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserBaseInfoInstanceResponse> DescribeUserBaseInfoInstanceOutcome;
                typedef std::future<DescribeUserBaseInfoInstanceOutcome> DescribeUserBaseInfoInstanceOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DescribeUserBaseInfoInstanceRequest&, DescribeUserBaseInfoInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBaseInfoInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyResourceInstancesResponse> DestroyResourceInstancesOutcome;
                typedef std::future<DestroyResourceInstancesOutcome> DestroyResourceInstancesOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::DestroyResourceInstancesRequest&, DestroyResourceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyResourceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RequestLocalTaskResponse> RequestLocalTaskOutcome;
                typedef std::future<RequestLocalTaskOutcome> RequestLocalTaskOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::RequestLocalTaskRequest&, RequestLocalTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RequestLocalTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClientStateResponse> UpdateClientStateOutcome;
                typedef std::future<UpdateClientStateOutcome> UpdateClientStateOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::UpdateClientStateRequest&, UpdateClientStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClientStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLocalTaskResultResponse> UpdateLocalTaskResultOutcome;
                typedef std::future<UpdateLocalTaskResultOutcome> UpdateLocalTaskResultOutcomeCallable;
                typedef std::function<void(const MsClient*, const Model::UpdateLocalTaskResultRequest&, UpdateLocalTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLocalTaskResultAsyncHandler;



                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制，取消渠道合作加固中的任务
                 * @param req CancelEncryptTaskRequest
                 * @return CancelEncryptTaskOutcome
                 */
                CancelEncryptTaskOutcome CancelEncryptTask(const Model::CancelEncryptTaskRequest &request);
                void CancelEncryptTaskAsync(const Model::CancelEncryptTaskRequest& request, const CancelEncryptTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelEncryptTaskOutcomeCallable CancelEncryptTaskCallable(const Model::CancelEncryptTaskRequest& request);

                /**
                 *将应用和资源进行绑定。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req CreateBindInstanceRequest
                 * @return CreateBindInstanceOutcome
                 */
                CreateBindInstanceOutcome CreateBindInstance(const Model::CreateBindInstanceRequest &request);
                void CreateBindInstanceAsync(const Model::CreateBindInstanceRequest& request, const CreateBindInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBindInstanceOutcomeCallable CreateBindInstanceCallable(const Model::CreateBindInstanceRequest& request);

                /**
                 *获取云COS文件存储临时密钥，密钥仅限于临时上传文件，有访问限制和时效性，请保管好临时密钥。
                 * @param req CreateCosSecKeyInstanceRequest
                 * @return CreateCosSecKeyInstanceOutcome
                 */
                CreateCosSecKeyInstanceOutcome CreateCosSecKeyInstance(const Model::CreateCosSecKeyInstanceRequest &request);
                void CreateCosSecKeyInstanceAsync(const Model::CreateCosSecKeyInstanceRequest& request, const CreateCosSecKeyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosSecKeyInstanceOutcomeCallable CreateCosSecKeyInstanceCallable(const Model::CreateCosSecKeyInstanceRequest& request);

                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制，用于创建加固任务。
                 * @param req CreateEncryptInstanceRequest
                 * @return CreateEncryptInstanceOutcome
                 */
                CreateEncryptInstanceOutcome CreateEncryptInstance(const Model::CreateEncryptInstanceRequest &request);
                void CreateEncryptInstanceAsync(const Model::CreateEncryptInstanceRequest& request, const CreateEncryptInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEncryptInstanceOutcomeCallable CreateEncryptInstanceCallable(const Model::CreateEncryptInstanceRequest& request);

                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制。
订单类型有：免费试用、按年收费、按次收费。
应用加固支持的平台类型有：android加固 、ios源码混淆 、sdk加固、applet小程序加固
                 * @param req CreateOrderInstanceRequest
                 * @return CreateOrderInstanceOutcome
                 */
                CreateOrderInstanceOutcome CreateOrderInstance(const Model::CreateOrderInstanceRequest &request);
                void CreateOrderInstanceAsync(const Model::CreateOrderInstanceRequest& request, const CreateOrderInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrderInstanceOutcomeCallable CreateOrderInstanceCallable(const Model::CreateOrderInstanceRequest& request);

                /**
                 *不再使用

用户可以使用该接口自建资源，只支持白名单用户
                 * @param req CreateResourceInstancesRequest
                 * @return CreateResourceInstancesOutcome
                 */
                CreateResourceInstancesOutcome CreateResourceInstances(const Model::CreateResourceInstancesRequest &request);
                void CreateResourceInstancesAsync(const Model::CreateResourceInstancesRequest& request, const CreateResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceInstancesOutcomeCallable CreateResourceInstancesCallable(const Model::CreateResourceInstancesRequest& request);

                /**
                 *用户通过该接口提交应用进行应用加固，加固后需通过DescribeShieldResult接口查询加固结果。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req CreateShieldInstanceRequest
                 * @return CreateShieldInstanceOutcome
                 */
                CreateShieldInstanceOutcome CreateShieldInstance(const Model::CreateShieldInstanceRequest &request);
                void CreateShieldInstanceAsync(const Model::CreateShieldInstanceRequest& request, const CreateShieldInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateShieldInstanceOutcomeCallable CreateShieldInstanceCallable(const Model::CreateShieldInstanceRequest& request);

                /**
                 *对资源进行策略新增。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req CreateShieldPlanInstanceRequest
                 * @return CreateShieldPlanInstanceOutcome
                 */
                CreateShieldPlanInstanceOutcome CreateShieldPlanInstance(const Model::CreateShieldPlanInstanceRequest &request);
                void CreateShieldPlanInstanceAsync(const Model::CreateShieldPlanInstanceRequest& request, const CreateShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateShieldPlanInstanceOutcomeCallable CreateShieldPlanInstanceCallable(const Model::CreateShieldPlanInstanceRequest& request);

                /**
                 *删除一个或者多个app加固信息。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req DeleteShieldInstancesRequest
                 * @return DeleteShieldInstancesOutcome
                 */
                DeleteShieldInstancesOutcome DeleteShieldInstances(const Model::DeleteShieldInstancesRequest &request);
                void DeleteShieldInstancesAsync(const Model::DeleteShieldInstancesRequest& request, const DeleteShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShieldInstancesOutcomeCallable DeleteShieldInstancesCallable(const Model::DeleteShieldInstancesRequest& request);

                /**
                 *该接口采用同步模式请求腾讯APK云检测服务，即时返回检测数据，需要用户用轮询的方式调用本接口来进行样本送检并获取检测结果(每隔60s发送一次请求，传相同的参数，重试30次)，一般情况下0.5h内会出检测结果，最长时间是3h。当Result为ok并且ResultList数组非空有值时，代表检测完毕，若长时间获取不到检测结果，请联系客服。
                 * @param req DescribeApkDetectionResultRequest
                 * @return DescribeApkDetectionResultOutcome
                 */
                DescribeApkDetectionResultOutcome DescribeApkDetectionResult(const Model::DescribeApkDetectionResultRequest &request);
                void DescribeApkDetectionResultAsync(const Model::DescribeApkDetectionResultRequest& request, const DescribeApkDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApkDetectionResultOutcomeCallable DescribeApkDetectionResultCallable(const Model::DescribeApkDetectionResultRequest& request);

                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制，用于查询加固任务，入参中的条件过滤字段均为精准匹配。支持功能点: 1. 多任务分页查询  2.根据任务Id唯一值查询单记录
                 * @param req DescribeEncryptInstancesRequest
                 * @return DescribeEncryptInstancesOutcome
                 */
                DescribeEncryptInstancesOutcome DescribeEncryptInstances(const Model::DescribeEncryptInstancesRequest &request);
                void DescribeEncryptInstancesAsync(const Model::DescribeEncryptInstancesRequest& request, const DescribeEncryptInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptInstancesOutcomeCallable DescribeEncryptInstancesCallable(const Model::DescribeEncryptInstancesRequest& request);

                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制。入参中的条件过滤字段均为精准匹配。
                 * @param req DescribeEncryptPlanRequest
                 * @return DescribeEncryptPlanOutcome
                 */
                DescribeEncryptPlanOutcome DescribeEncryptPlan(const Model::DescribeEncryptPlanRequest &request);
                void DescribeEncryptPlanAsync(const Model::DescribeEncryptPlanRequest& request, const DescribeEncryptPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptPlanOutcomeCallable DescribeEncryptPlanCallable(const Model::DescribeEncryptPlanRequest& request);

                /**
                 *该接口供渠道合作应用加固使用，接口调用有白名单用户限制。 接口返回的结果为：创建订单后，订单审批状态信息，以及与订单关联的资源状态等信息，入参中的条件过滤字段均为精准匹配.
接口功能点：
1.支持多订单分页查询；
2.支持唯一订单号精准匹配查询；
3.支持唯一资源号精准匹配查询；
                 * @param req DescribeOrderInstancesRequest
                 * @return DescribeOrderInstancesOutcome
                 */
                DescribeOrderInstancesOutcome DescribeOrderInstances(const Model::DescribeOrderInstancesRequest &request);
                void DescribeOrderInstancesAsync(const Model::DescribeOrderInstancesRequest& request, const DescribeOrderInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrderInstancesOutcomeCallable DescribeOrderInstancesCallable(const Model::DescribeOrderInstancesRequest& request);

                /**
                 *获取某个用户的所有资源信息。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req DescribeResourceInstancesRequest
                 * @return DescribeResourceInstancesOutcome
                 */
                DescribeResourceInstancesOutcome DescribeResourceInstances(const Model::DescribeResourceInstancesRequest &request);
                void DescribeResourceInstancesAsync(const Model::DescribeResourceInstancesRequest& request, const DescribeResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceInstancesOutcomeCallable DescribeResourceInstancesCallable(const Model::DescribeResourceInstancesRequest& request);

                /**
                 *本接口用于查看app列表。
可以通过指定任务唯一标识ItemId来查询指定app的详细信息，或通过设定过滤器来查询满足过滤条件的app的详细信息。 指定偏移(Offset)和限制(Limit)来选择结果中的一部分，默认返回满足条件的前20个app信息。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req DescribeShieldInstancesRequest
                 * @return DescribeShieldInstancesOutcome
                 */
                DescribeShieldInstancesOutcome DescribeShieldInstances(const Model::DescribeShieldInstancesRequest &request);
                void DescribeShieldInstancesAsync(const Model::DescribeShieldInstancesRequest& request, const DescribeShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShieldInstancesOutcomeCallable DescribeShieldInstancesCallable(const Model::DescribeShieldInstancesRequest& request);

                /**
                 *查询加固策略。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req DescribeShieldPlanInstanceRequest
                 * @return DescribeShieldPlanInstanceOutcome
                 */
                DescribeShieldPlanInstanceOutcome DescribeShieldPlanInstance(const Model::DescribeShieldPlanInstanceRequest &request);
                void DescribeShieldPlanInstanceAsync(const Model::DescribeShieldPlanInstanceRequest& request, const DescribeShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShieldPlanInstanceOutcomeCallable DescribeShieldPlanInstanceCallable(const Model::DescribeShieldPlanInstanceRequest& request);

                /**
                 *通过唯一标识获取加固的结果。（注意：根据国家互联网用户实名制相关要求，使用该产品前，需先完成实名认证。）
                 * @param req DescribeShieldResultRequest
                 * @return DescribeShieldResultOutcome
                 */
                DescribeShieldResultOutcome DescribeShieldResult(const Model::DescribeShieldResultRequest &request);
                void DescribeShieldResultAsync(const Model::DescribeShieldResultRequest& request, const DescribeShieldResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShieldResultOutcomeCallable DescribeShieldResultCallable(const Model::DescribeShieldResultRequest& request);

                /**
                 *移动安全-网址检测服务
                 * @param req DescribeUrlDetectionResultRequest
                 * @return DescribeUrlDetectionResultOutcome
                 */
                DescribeUrlDetectionResultOutcome DescribeUrlDetectionResult(const Model::DescribeUrlDetectionResultRequest &request);
                void DescribeUrlDetectionResultAsync(const Model::DescribeUrlDetectionResultRequest& request, const DescribeUrlDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUrlDetectionResultOutcomeCallable DescribeUrlDetectionResultCallable(const Model::DescribeUrlDetectionResultRequest& request);

                /**
                 *获取用户基础信息
                 * @param req DescribeUserBaseInfoInstanceRequest
                 * @return DescribeUserBaseInfoInstanceOutcome
                 */
                DescribeUserBaseInfoInstanceOutcome DescribeUserBaseInfoInstance(const Model::DescribeUserBaseInfoInstanceRequest &request);
                void DescribeUserBaseInfoInstanceAsync(const Model::DescribeUserBaseInfoInstanceRequest& request, const DescribeUserBaseInfoInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserBaseInfoInstanceOutcomeCallable DescribeUserBaseInfoInstanceCallable(const Model::DescribeUserBaseInfoInstanceRequest& request);

                /**
                 *渠道合作资源销毁
安卓应用加固-按年收费资源销毁，其他类型暂不支持
                 * @param req DestroyResourceInstancesRequest
                 * @return DestroyResourceInstancesOutcome
                 */
                DestroyResourceInstancesOutcome DestroyResourceInstances(const Model::DestroyResourceInstancesRequest &request);
                void DestroyResourceInstancesAsync(const Model::DestroyResourceInstancesRequest& request, const DestroyResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyResourceInstancesOutcomeCallable DestroyResourceInstancesCallable(const Model::DestroyResourceInstancesRequest& request);

                /**
                 *client任务请求
                 * @param req RequestLocalTaskRequest
                 * @return RequestLocalTaskOutcome
                 */
                RequestLocalTaskOutcome RequestLocalTask(const Model::RequestLocalTaskRequest &request);
                void RequestLocalTaskAsync(const Model::RequestLocalTaskRequest& request, const RequestLocalTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RequestLocalTaskOutcomeCallable RequestLocalTaskCallable(const Model::RequestLocalTaskRequest& request);

                /**
                 *更新client状态，需要白名单
                 * @param req UpdateClientStateRequest
                 * @return UpdateClientStateOutcome
                 */
                UpdateClientStateOutcome UpdateClientState(const Model::UpdateClientStateRequest &request);
                void UpdateClientStateAsync(const Model::UpdateClientStateRequest& request, const UpdateClientStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClientStateOutcomeCallable UpdateClientStateCallable(const Model::UpdateClientStateRequest& request);

                /**
                 *更新本地任务执行结果
                 * @param req UpdateLocalTaskResultRequest
                 * @return UpdateLocalTaskResultOutcome
                 */
                UpdateLocalTaskResultOutcome UpdateLocalTaskResult(const Model::UpdateLocalTaskResultRequest &request);
                void UpdateLocalTaskResultAsync(const Model::UpdateLocalTaskResultRequest& request, const UpdateLocalTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLocalTaskResultOutcomeCallable UpdateLocalTaskResultCallable(const Model::UpdateLocalTaskResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MSCLIENT_H_
