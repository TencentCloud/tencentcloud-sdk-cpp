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

#ifndef TENCENTCLOUD_CIM_V20190318_CIMCLIENT_H_
#define TENCENTCLOUD_CIM_V20190318_CIMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cim/v20190318/model/DescribeSdkAppidRequest.h>
#include <tencentcloud/cim/v20190318/model/DescribeSdkAppidResponse.h>


namespace TencentCloud
{
    namespace Cim
    {
        namespace V20190318
        {
            class CimClient : public AbstractClient
            {
            public:
                CimClient(const Credential &credential, const std::string &region);
                CimClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeSdkAppidResponse> DescribeSdkAppidOutcome;
                typedef std::future<DescribeSdkAppidOutcome> DescribeSdkAppidOutcomeCallable;
                typedef std::function<void(const CimClient*, const Model::DescribeSdkAppidRequest&, DescribeSdkAppidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkAppidAsyncHandler;



                /**
                 *获取云通信IM中腾讯云账号对应的SDKAppID
                 * @param req DescribeSdkAppidRequest
                 * @return DescribeSdkAppidOutcome
                 */
                DescribeSdkAppidOutcome DescribeSdkAppid(const Model::DescribeSdkAppidRequest &request);
                void DescribeSdkAppidAsync(const Model::DescribeSdkAppidRequest& request, const DescribeSdkAppidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSdkAppidOutcomeCallable DescribeSdkAppidCallable(const Model::DescribeSdkAppidRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CIM_V20190318_CIMCLIENT_H_
