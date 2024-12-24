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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_CLOUDAPPCLIENT_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_CLOUDAPPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudapp/v20220530/model/VerifyLicenseRequest.h>
#include <tencentcloud/cloudapp/v20220530/model/VerifyLicenseResponse.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            class CloudappClient : public AbstractClient
            {
            public:
                CloudappClient(const Credential &credential, const std::string &region);
                CloudappClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::VerifyLicenseResponse> VerifyLicenseOutcome;
                typedef std::future<VerifyLicenseOutcome> VerifyLicenseOutcomeCallable;
                typedef std::function<void(const CloudappClient*, const Model::VerifyLicenseRequest&, VerifyLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyLicenseAsyncHandler;



                /**
                 *从软件进程读取 LICENSE。
                 * @param req VerifyLicenseRequest
                 * @return VerifyLicenseOutcome
                 */
                VerifyLicenseOutcome VerifyLicense(const Model::VerifyLicenseRequest &request);
                void VerifyLicenseAsync(const Model::VerifyLicenseRequest& request, const VerifyLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyLicenseOutcomeCallable VerifyLicenseCallable(const Model::VerifyLicenseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_CLOUDAPPCLIENT_H_
