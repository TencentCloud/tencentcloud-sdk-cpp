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

#ifndef TENCENTCLOUD_EIS_V20200715_EISCLIENT_H_
#define TENCENTCLOUD_EIS_V20200715_EISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/eis/v20200715/model/DescribeEisConnectorConfigRequest.h>
#include <tencentcloud/eis/v20200715/model/DescribeEisConnectorConfigResponse.h>
#include <tencentcloud/eis/v20200715/model/ListEisConnectorOperationsRequest.h>
#include <tencentcloud/eis/v20200715/model/ListEisConnectorOperationsResponse.h>
#include <tencentcloud/eis/v20200715/model/ListEisConnectorsRequest.h>
#include <tencentcloud/eis/v20200715/model/ListEisConnectorsResponse.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            class EisClient : public AbstractClient
            {
            public:
                EisClient(const Credential &credential, const std::string &region);
                EisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeEisConnectorConfigResponse> DescribeEisConnectorConfigOutcome;
                typedef std::future<DescribeEisConnectorConfigOutcome> DescribeEisConnectorConfigOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::DescribeEisConnectorConfigRequest&, DescribeEisConnectorConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEisConnectorConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEisConnectorOperationsResponse> ListEisConnectorOperationsOutcome;
                typedef std::future<ListEisConnectorOperationsOutcome> ListEisConnectorOperationsOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::ListEisConnectorOperationsRequest&, ListEisConnectorOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEisConnectorOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEisConnectorsResponse> ListEisConnectorsOutcome;
                typedef std::future<ListEisConnectorsOutcome> ListEisConnectorsOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::ListEisConnectorsRequest&, ListEisConnectorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEisConnectorsAsyncHandler;



                /**
                 *获取连接器配置参数
                 * @param req DescribeEisConnectorConfigRequest
                 * @return DescribeEisConnectorConfigOutcome
                 */
                DescribeEisConnectorConfigOutcome DescribeEisConnectorConfig(const Model::DescribeEisConnectorConfigRequest &request);
                void DescribeEisConnectorConfigAsync(const Model::DescribeEisConnectorConfigRequest& request, const DescribeEisConnectorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEisConnectorConfigOutcomeCallable DescribeEisConnectorConfigCallable(const Model::DescribeEisConnectorConfigRequest& request);

                /**
                 *获取连接器操作列表
                 * @param req ListEisConnectorOperationsRequest
                 * @return ListEisConnectorOperationsOutcome
                 */
                ListEisConnectorOperationsOutcome ListEisConnectorOperations(const Model::ListEisConnectorOperationsRequest &request);
                void ListEisConnectorOperationsAsync(const Model::ListEisConnectorOperationsRequest& request, const ListEisConnectorOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEisConnectorOperationsOutcomeCallable ListEisConnectorOperationsCallable(const Model::ListEisConnectorOperationsRequest& request);

                /**
                 *连接器列表
                 * @param req ListEisConnectorsRequest
                 * @return ListEisConnectorsOutcome
                 */
                ListEisConnectorsOutcome ListEisConnectors(const Model::ListEisConnectorsRequest &request);
                void ListEisConnectorsAsync(const Model::ListEisConnectorsRequest& request, const ListEisConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEisConnectorsOutcomeCallable ListEisConnectorsCallable(const Model::ListEisConnectorsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_EISCLIENT_H_
