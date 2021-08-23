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

#ifndef TENCENTCLOUD_CIS_V20180408_CISCLIENT_H_
#define TENCENTCLOUD_CIS_V20180408_CISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cis/v20180408/model/CreateContainerInstanceRequest.h>
#include <tencentcloud/cis/v20180408/model/CreateContainerInstanceResponse.h>
#include <tencentcloud/cis/v20180408/model/DeleteContainerInstanceRequest.h>
#include <tencentcloud/cis/v20180408/model/DeleteContainerInstanceResponse.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstanceRequest.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstanceResponse.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstanceEventsRequest.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstanceEventsResponse.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstancesRequest.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerInstancesResponse.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerLogRequest.h>
#include <tencentcloud/cis/v20180408/model/DescribeContainerLogResponse.h>
#include <tencentcloud/cis/v20180408/model/InquiryPriceCreateCisRequest.h>
#include <tencentcloud/cis/v20180408/model/InquiryPriceCreateCisResponse.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            class CisClient : public AbstractClient
            {
            public:
                CisClient(const Credential &credential, const std::string &region);
                CisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateContainerInstanceResponse> CreateContainerInstanceOutcome;
                typedef std::future<CreateContainerInstanceOutcome> CreateContainerInstanceOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::CreateContainerInstanceRequest&, CreateContainerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContainerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContainerInstanceResponse> DeleteContainerInstanceOutcome;
                typedef std::future<DeleteContainerInstanceOutcome> DeleteContainerInstanceOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::DeleteContainerInstanceRequest&, DeleteContainerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerInstanceResponse> DescribeContainerInstanceOutcome;
                typedef std::future<DescribeContainerInstanceOutcome> DescribeContainerInstanceOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::DescribeContainerInstanceRequest&, DescribeContainerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerInstanceEventsResponse> DescribeContainerInstanceEventsOutcome;
                typedef std::future<DescribeContainerInstanceEventsOutcome> DescribeContainerInstanceEventsOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::DescribeContainerInstanceEventsRequest&, DescribeContainerInstanceEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerInstanceEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerInstancesResponse> DescribeContainerInstancesOutcome;
                typedef std::future<DescribeContainerInstancesOutcome> DescribeContainerInstancesOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::DescribeContainerInstancesRequest&, DescribeContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerLogResponse> DescribeContainerLogOutcome;
                typedef std::future<DescribeContainerLogOutcome> DescribeContainerLogOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::DescribeContainerLogRequest&, DescribeContainerLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerLogAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateCisResponse> InquiryPriceCreateCisOutcome;
                typedef std::future<InquiryPriceCreateCisOutcome> InquiryPriceCreateCisOutcomeCallable;
                typedef std::function<void(const CisClient*, const Model::InquiryPriceCreateCisRequest&, InquiryPriceCreateCisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateCisAsyncHandler;



                /**
                 *此接口（CreateContainerInstance）用于创建容器实例
                 * @param req CreateContainerInstanceRequest
                 * @return CreateContainerInstanceOutcome
                 */
                CreateContainerInstanceOutcome CreateContainerInstance(const Model::CreateContainerInstanceRequest &request);
                void CreateContainerInstanceAsync(const Model::CreateContainerInstanceRequest& request, const CreateContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContainerInstanceOutcomeCallable CreateContainerInstanceCallable(const Model::CreateContainerInstanceRequest& request);

                /**
                 *此接口（DeleteContainerInstance）用于删除容器实例
                 * @param req DeleteContainerInstanceRequest
                 * @return DeleteContainerInstanceOutcome
                 */
                DeleteContainerInstanceOutcome DeleteContainerInstance(const Model::DeleteContainerInstanceRequest &request);
                void DeleteContainerInstanceAsync(const Model::DeleteContainerInstanceRequest& request, const DeleteContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContainerInstanceOutcomeCallable DeleteContainerInstanceCallable(const Model::DeleteContainerInstanceRequest& request);

                /**
                 *此接口（DescribeContainerInstance）用于获取容器实例详情
                 * @param req DescribeContainerInstanceRequest
                 * @return DescribeContainerInstanceOutcome
                 */
                DescribeContainerInstanceOutcome DescribeContainerInstance(const Model::DescribeContainerInstanceRequest &request);
                void DescribeContainerInstanceAsync(const Model::DescribeContainerInstanceRequest& request, const DescribeContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerInstanceOutcomeCallable DescribeContainerInstanceCallable(const Model::DescribeContainerInstanceRequest& request);

                /**
                 *此接口（DescribeContainerInstanceEvents）用于查询容器实例事件列表
                 * @param req DescribeContainerInstanceEventsRequest
                 * @return DescribeContainerInstanceEventsOutcome
                 */
                DescribeContainerInstanceEventsOutcome DescribeContainerInstanceEvents(const Model::DescribeContainerInstanceEventsRequest &request);
                void DescribeContainerInstanceEventsAsync(const Model::DescribeContainerInstanceEventsRequest& request, const DescribeContainerInstanceEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerInstanceEventsOutcomeCallable DescribeContainerInstanceEventsCallable(const Model::DescribeContainerInstanceEventsRequest& request);

                /**
                 *此接口（DescribeContainerInstances）查询容器实例列表
                 * @param req DescribeContainerInstancesRequest
                 * @return DescribeContainerInstancesOutcome
                 */
                DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest &request);
                void DescribeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request);

                /**
                 *此接口（DescribeContainerLog）用于获取容器日志信息
                 * @param req DescribeContainerLogRequest
                 * @return DescribeContainerLogOutcome
                 */
                DescribeContainerLogOutcome DescribeContainerLog(const Model::DescribeContainerLogRequest &request);
                void DescribeContainerLogAsync(const Model::DescribeContainerLogRequest& request, const DescribeContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerLogOutcomeCallable DescribeContainerLogCallable(const Model::DescribeContainerLogRequest& request);

                /**
                 *此接口（InquiryPriceCreateCis）用于查询容器实例价格
                 * @param req InquiryPriceCreateCisRequest
                 * @return InquiryPriceCreateCisOutcome
                 */
                InquiryPriceCreateCisOutcome InquiryPriceCreateCis(const Model::InquiryPriceCreateCisRequest &request);
                void InquiryPriceCreateCisAsync(const Model::InquiryPriceCreateCisRequest& request, const InquiryPriceCreateCisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateCisOutcomeCallable InquiryPriceCreateCisCallable(const Model::InquiryPriceCreateCisRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_CISCLIENT_H_
