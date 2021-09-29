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

#ifndef TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
#define TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mna/v20210119/model/CreateQosRequest.h>
#include <tencentcloud/mna/v20210119/model/CreateQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosResponse.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            class MnaClient : public AbstractClient
            {
            public:
                MnaClient(const Credential &credential, const std::string &region);
                MnaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateQosResponse> CreateQosOutcome;
                typedef std::future<CreateQosOutcome> CreateQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::CreateQosRequest&, CreateQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQosResponse> DeleteQosOutcome;
                typedef std::future<DeleteQosOutcome> DeleteQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteQosRequest&, DeleteQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQosResponse> DescribeQosOutcome;
                typedef std::future<DescribeQosOutcome> DescribeQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DescribeQosRequest&, DescribeQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosAsyncHandler;



                /**
                 *移动网络发起Qos加速过程
                 * @param req CreateQosRequest
                 * @return CreateQosOutcome
                 */
                CreateQosOutcome CreateQos(const Model::CreateQosRequest &request);
                void CreateQosAsync(const Model::CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQosOutcomeCallable CreateQosCallable(const Model::CreateQosRequest& request);

                /**
                 *移动网络停止Qos加速过程
                 * @param req DeleteQosRequest
                 * @return DeleteQosOutcome
                 */
                DeleteQosOutcome DeleteQos(const Model::DeleteQosRequest &request);
                void DeleteQosAsync(const Model::DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQosOutcomeCallable DeleteQosCallable(const Model::DeleteQosRequest& request);

                /**
                 *获取Qos加速状态
                 * @param req DescribeQosRequest
                 * @return DescribeQosOutcome
                 */
                DescribeQosOutcome DescribeQos(const Model::DescribeQosRequest &request);
                void DescribeQosAsync(const Model::DescribeQosRequest& request, const DescribeQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQosOutcomeCallable DescribeQosCallable(const Model::DescribeQosRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
