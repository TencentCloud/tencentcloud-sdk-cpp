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

#ifndef TENCENTCLOUD_TCBR_V20220217_TCBRCLIENT_H_
#define TENCENTCLOUD_TCBR_V20220217_TCBRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunEnvRequest.h>
#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunEnvResponse.h>
#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunServerRequest.h>
#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunServerResponse.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunEnvsRequest.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunEnvsResponse.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServerDetailRequest.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServerDetailResponse.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServersRequest.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServersResponse.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeEnvBaseInfoRequest.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeEnvBaseInfoResponse.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeServerManageTaskRequest.h>
#include <tencentcloud/tcbr/v20220217/model/DescribeServerManageTaskResponse.h>
#include <tencentcloud/tcbr/v20220217/model/OperateServerManageRequest.h>
#include <tencentcloud/tcbr/v20220217/model/OperateServerManageResponse.h>
#include <tencentcloud/tcbr/v20220217/model/ReleaseGrayRequest.h>
#include <tencentcloud/tcbr/v20220217/model/ReleaseGrayResponse.h>
#include <tencentcloud/tcbr/v20220217/model/UpdateCloudRunServerRequest.h>
#include <tencentcloud/tcbr/v20220217/model/UpdateCloudRunServerResponse.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            class TcbrClient : public AbstractClient
            {
            public:
                TcbrClient(const Credential &credential, const std::string &region);
                TcbrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCloudRunEnvResponse> CreateCloudRunEnvOutcome;
                typedef std::future<CreateCloudRunEnvOutcome> CreateCloudRunEnvOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::CreateCloudRunEnvRequest&, CreateCloudRunEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRunEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudRunServerResponse> CreateCloudRunServerOutcome;
                typedef std::future<CreateCloudRunServerOutcome> CreateCloudRunServerOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::CreateCloudRunServerRequest&, CreateCloudRunServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRunServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRunEnvsResponse> DescribeCloudRunEnvsOutcome;
                typedef std::future<DescribeCloudRunEnvsOutcome> DescribeCloudRunEnvsOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::DescribeCloudRunEnvsRequest&, DescribeCloudRunEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRunEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRunServerDetailResponse> DescribeCloudRunServerDetailOutcome;
                typedef std::future<DescribeCloudRunServerDetailOutcome> DescribeCloudRunServerDetailOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::DescribeCloudRunServerDetailRequest&, DescribeCloudRunServerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRunServerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRunServersResponse> DescribeCloudRunServersOutcome;
                typedef std::future<DescribeCloudRunServersOutcome> DescribeCloudRunServersOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::DescribeCloudRunServersRequest&, DescribeCloudRunServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRunServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvBaseInfoResponse> DescribeEnvBaseInfoOutcome;
                typedef std::future<DescribeEnvBaseInfoOutcome> DescribeEnvBaseInfoOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::DescribeEnvBaseInfoRequest&, DescribeEnvBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvBaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerManageTaskResponse> DescribeServerManageTaskOutcome;
                typedef std::future<DescribeServerManageTaskOutcome> DescribeServerManageTaskOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::DescribeServerManageTaskRequest&, DescribeServerManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateServerManageResponse> OperateServerManageOutcome;
                typedef std::future<OperateServerManageOutcome> OperateServerManageOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::OperateServerManageRequest&, OperateServerManageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateServerManageAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseGrayResponse> ReleaseGrayOutcome;
                typedef std::future<ReleaseGrayOutcome> ReleaseGrayOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::ReleaseGrayRequest&, ReleaseGrayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseGrayAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCloudRunServerResponse> UpdateCloudRunServerOutcome;
                typedef std::future<UpdateCloudRunServerOutcome> UpdateCloudRunServerOutcomeCallable;
                typedef std::function<void(const TcbrClient*, const Model::UpdateCloudRunServerRequest&, UpdateCloudRunServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCloudRunServerAsyncHandler;



                /**
                 *创建云托管环境，并开通资源。
                 * @param req CreateCloudRunEnvRequest
                 * @return CreateCloudRunEnvOutcome
                 */
                CreateCloudRunEnvOutcome CreateCloudRunEnv(const Model::CreateCloudRunEnvRequest &request);
                void CreateCloudRunEnvAsync(const Model::CreateCloudRunEnvRequest& request, const CreateCloudRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRunEnvOutcomeCallable CreateCloudRunEnvCallable(const Model::CreateCloudRunEnvRequest& request);

                /**
                 *创建云托管服务接口
                 * @param req CreateCloudRunServerRequest
                 * @return CreateCloudRunServerOutcome
                 */
                CreateCloudRunServerOutcome CreateCloudRunServer(const Model::CreateCloudRunServerRequest &request);
                void CreateCloudRunServerAsync(const Model::CreateCloudRunServerRequest& request, const CreateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRunServerOutcomeCallable CreateCloudRunServerCallable(const Model::CreateCloudRunServerRequest& request);

                /**
                 *获取环境列表，含环境下的各个资源信息。尤其是各资源的唯一标识，是请求各资源的关键参数
                 * @param req DescribeCloudRunEnvsRequest
                 * @return DescribeCloudRunEnvsOutcome
                 */
                DescribeCloudRunEnvsOutcome DescribeCloudRunEnvs(const Model::DescribeCloudRunEnvsRequest &request);
                void DescribeCloudRunEnvsAsync(const Model::DescribeCloudRunEnvsRequest& request, const DescribeCloudRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRunEnvsOutcomeCallable DescribeCloudRunEnvsCallable(const Model::DescribeCloudRunEnvsRequest& request);

                /**
                 *查询云托管服务详情
                 * @param req DescribeCloudRunServerDetailRequest
                 * @return DescribeCloudRunServerDetailOutcome
                 */
                DescribeCloudRunServerDetailOutcome DescribeCloudRunServerDetail(const Model::DescribeCloudRunServerDetailRequest &request);
                void DescribeCloudRunServerDetailAsync(const Model::DescribeCloudRunServerDetailRequest& request, const DescribeCloudRunServerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRunServerDetailOutcomeCallable DescribeCloudRunServerDetailCallable(const Model::DescribeCloudRunServerDetailRequest& request);

                /**
                 *查询云托管服务列表接口
                 * @param req DescribeCloudRunServersRequest
                 * @return DescribeCloudRunServersOutcome
                 */
                DescribeCloudRunServersOutcome DescribeCloudRunServers(const Model::DescribeCloudRunServersRequest &request);
                void DescribeCloudRunServersAsync(const Model::DescribeCloudRunServersRequest& request, const DescribeCloudRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRunServersOutcomeCallable DescribeCloudRunServersCallable(const Model::DescribeCloudRunServersRequest& request);

                /**
                 *查询环境基础信息
                 * @param req DescribeEnvBaseInfoRequest
                 * @return DescribeEnvBaseInfoOutcome
                 */
                DescribeEnvBaseInfoOutcome DescribeEnvBaseInfo(const Model::DescribeEnvBaseInfoRequest &request);
                void DescribeEnvBaseInfoAsync(const Model::DescribeEnvBaseInfoRequest& request, const DescribeEnvBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvBaseInfoOutcomeCallable DescribeEnvBaseInfoCallable(const Model::DescribeEnvBaseInfoRequest& request);

                /**
                 *查询服务管理任务信息
                 * @param req DescribeServerManageTaskRequest
                 * @return DescribeServerManageTaskOutcome
                 */
                DescribeServerManageTaskOutcome DescribeServerManageTask(const Model::DescribeServerManageTaskRequest &request);
                void DescribeServerManageTaskAsync(const Model::DescribeServerManageTaskRequest& request, const DescribeServerManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerManageTaskOutcomeCallable DescribeServerManageTaskCallable(const Model::DescribeServerManageTaskRequest& request);

                /**
                 *操作发布单
                 * @param req OperateServerManageRequest
                 * @return OperateServerManageOutcome
                 */
                OperateServerManageOutcome OperateServerManage(const Model::OperateServerManageRequest &request);
                void OperateServerManageAsync(const Model::OperateServerManageRequest& request, const OperateServerManageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateServerManageOutcomeCallable OperateServerManageCallable(const Model::OperateServerManageRequest& request);

                /**
                 *灰度发布
                 * @param req ReleaseGrayRequest
                 * @return ReleaseGrayOutcome
                 */
                ReleaseGrayOutcome ReleaseGray(const Model::ReleaseGrayRequest &request);
                void ReleaseGrayAsync(const Model::ReleaseGrayRequest& request, const ReleaseGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseGrayOutcomeCallable ReleaseGrayCallable(const Model::ReleaseGrayRequest& request);

                /**
                 *更新云托管服务
                 * @param req UpdateCloudRunServerRequest
                 * @return UpdateCloudRunServerOutcome
                 */
                UpdateCloudRunServerOutcome UpdateCloudRunServer(const Model::UpdateCloudRunServerRequest &request);
                void UpdateCloudRunServerAsync(const Model::UpdateCloudRunServerRequest& request, const UpdateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCloudRunServerOutcomeCallable UpdateCloudRunServerCallable(const Model::UpdateCloudRunServerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_TCBRCLIENT_H_
