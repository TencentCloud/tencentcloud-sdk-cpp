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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_IOTVIDEOCLIENT_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_IOTVIDEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotvideo/v20211125/model/CallDeviceActionAsyncRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/CallDeviceActionAsyncResponse.h>
#include <tencentcloud/iotvideo/v20211125/model/CallDeviceActionSyncRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/CallDeviceActionSyncResponse.h>
#include <tencentcloud/iotvideo/v20211125/model/CreateProductRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/CreateProductResponse.h>
#include <tencentcloud/iotvideo/v20211125/model/DescribeDeviceDataStatsRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/DescribeDeviceDataStatsResponse.h>
#include <tencentcloud/iotvideo/v20211125/model/DescribeMessageDataStatsRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/DescribeMessageDataStatsResponse.h>
#include <tencentcloud/iotvideo/v20211125/model/GenSingleDeviceSignatureOfPublicRequest.h>
#include <tencentcloud/iotvideo/v20211125/model/GenSingleDeviceSignatureOfPublicResponse.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            class IotvideoClient : public AbstractClient
            {
            public:
                IotvideoClient(const Credential &credential, const std::string &region);
                IotvideoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CallDeviceActionAsyncResponse> CallDeviceActionAsyncOutcome;
                typedef std::future<CallDeviceActionAsyncOutcome> CallDeviceActionAsyncOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CallDeviceActionAsyncRequest&, CallDeviceActionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CallDeviceActionSyncResponse> CallDeviceActionSyncOutcome;
                typedef std::future<CallDeviceActionSyncOutcome> CallDeviceActionSyncOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CallDeviceActionSyncRequest&, CallDeviceActionSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDataStatsResponse> DescribeDeviceDataStatsOutcome;
                typedef std::future<DescribeDeviceDataStatsOutcome> DescribeDeviceDataStatsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceDataStatsRequest&, DescribeDeviceDataStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageDataStatsResponse> DescribeMessageDataStatsOutcome;
                typedef std::future<DescribeMessageDataStatsOutcome> DescribeMessageDataStatsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeMessageDataStatsRequest&, DescribeMessageDataStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageDataStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::GenSingleDeviceSignatureOfPublicResponse> GenSingleDeviceSignatureOfPublicOutcome;
                typedef std::future<GenSingleDeviceSignatureOfPublicOutcome> GenSingleDeviceSignatureOfPublicOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::GenSingleDeviceSignatureOfPublicRequest&, GenSingleDeviceSignatureOfPublicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenSingleDeviceSignatureOfPublicAsyncHandler;



                /**
                 *异步调用设备行为
                 * @param req CallDeviceActionAsyncRequest
                 * @return CallDeviceActionAsyncOutcome
                 */
                CallDeviceActionAsyncOutcome CallDeviceActionAsync(const Model::CallDeviceActionAsyncRequest &request);
                void CallDeviceActionAsyncAsync(const Model::CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionAsyncOutcomeCallable CallDeviceActionAsyncCallable(const Model::CallDeviceActionAsyncRequest& request);

                /**
                 *同步调用设备行为
                 * @param req CallDeviceActionSyncRequest
                 * @return CallDeviceActionSyncOutcome
                 */
                CallDeviceActionSyncOutcome CallDeviceActionSync(const Model::CallDeviceActionSyncRequest &request);
                void CallDeviceActionSyncAsync(const Model::CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionSyncOutcomeCallable CallDeviceActionSyncCallable(const Model::CallDeviceActionSyncRequest& request);

                /**
                 *创建产品
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *查询设备数据统计
                 * @param req DescribeDeviceDataStatsRequest
                 * @return DescribeDeviceDataStatsOutcome
                 */
                DescribeDeviceDataStatsOutcome DescribeDeviceDataStats(const Model::DescribeDeviceDataStatsRequest &request);
                void DescribeDeviceDataStatsAsync(const Model::DescribeDeviceDataStatsRequest& request, const DescribeDeviceDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataStatsOutcomeCallable DescribeDeviceDataStatsCallable(const Model::DescribeDeviceDataStatsRequest& request);

                /**
                 *查询设备消息数量统计
                 * @param req DescribeMessageDataStatsRequest
                 * @return DescribeMessageDataStatsOutcome
                 */
                DescribeMessageDataStatsOutcome DescribeMessageDataStats(const Model::DescribeMessageDataStatsRequest &request);
                void DescribeMessageDataStatsAsync(const Model::DescribeMessageDataStatsRequest& request, const DescribeMessageDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageDataStatsOutcomeCallable DescribeMessageDataStatsCallable(const Model::DescribeMessageDataStatsRequest& request);

                /**
                 *获取设备的绑定签名
                 * @param req GenSingleDeviceSignatureOfPublicRequest
                 * @return GenSingleDeviceSignatureOfPublicOutcome
                 */
                GenSingleDeviceSignatureOfPublicOutcome GenSingleDeviceSignatureOfPublic(const Model::GenSingleDeviceSignatureOfPublicRequest &request);
                void GenSingleDeviceSignatureOfPublicAsync(const Model::GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenSingleDeviceSignatureOfPublicOutcomeCallable GenSingleDeviceSignatureOfPublicCallable(const Model::GenSingleDeviceSignatureOfPublicRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_IOTVIDEOCLIENT_H_
