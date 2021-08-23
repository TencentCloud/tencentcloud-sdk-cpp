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

#ifndef TENCENTCLOUD_PDS_V20210701_PDSCLIENT_H_
#define TENCENTCLOUD_PDS_V20210701_PDSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/pds/v20210701/model/DescribeNewUserAcquisitionRequest.h>
#include <tencentcloud/pds/v20210701/model/DescribeNewUserAcquisitionResponse.h>
#include <tencentcloud/pds/v20210701/model/DescribeStockEstimationRequest.h>
#include <tencentcloud/pds/v20210701/model/DescribeStockEstimationResponse.h>


namespace TencentCloud
{
    namespace Pds
    {
        namespace V20210701
        {
            class PdsClient : public AbstractClient
            {
            public:
                PdsClient(const Credential &credential, const std::string &region);
                PdsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeNewUserAcquisitionResponse> DescribeNewUserAcquisitionOutcome;
                typedef std::future<DescribeNewUserAcquisitionOutcome> DescribeNewUserAcquisitionOutcomeCallable;
                typedef std::function<void(const PdsClient*, const Model::DescribeNewUserAcquisitionRequest&, DescribeNewUserAcquisitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewUserAcquisitionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStockEstimationResponse> DescribeStockEstimationOutcome;
                typedef std::future<DescribeStockEstimationOutcome> DescribeStockEstimationOutcomeCallable;
                typedef std::function<void(const PdsClient*, const Model::DescribeStockEstimationRequest&, DescribeStockEstimationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStockEstimationAsyncHandler;



                /**
                 *判断新用户信誉值
                 * @param req DescribeNewUserAcquisitionRequest
                 * @return DescribeNewUserAcquisitionOutcome
                 */
                DescribeNewUserAcquisitionOutcome DescribeNewUserAcquisition(const Model::DescribeNewUserAcquisitionRequest &request);
                void DescribeNewUserAcquisitionAsync(const Model::DescribeNewUserAcquisitionRequest& request, const DescribeNewUserAcquisitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewUserAcquisitionOutcomeCallable DescribeNewUserAcquisitionCallable(const Model::DescribeNewUserAcquisitionRequest& request);

                /**
                 *查询存量判断服务
                 * @param req DescribeStockEstimationRequest
                 * @return DescribeStockEstimationOutcome
                 */
                DescribeStockEstimationOutcome DescribeStockEstimation(const Model::DescribeStockEstimationRequest &request);
                void DescribeStockEstimationAsync(const Model::DescribeStockEstimationRequest& request, const DescribeStockEstimationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStockEstimationOutcomeCallable DescribeStockEstimationCallable(const Model::DescribeStockEstimationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_PDS_V20210701_PDSCLIENT_H_
