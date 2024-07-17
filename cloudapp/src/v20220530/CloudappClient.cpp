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

#include <tencentcloud/cloudapp/v20220530/CloudappClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudapp::V20220530;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-30";
    const string ENDPOINT = "cloudapp.tencentcloudapi.com";
}

CloudappClient::CloudappClient(const Credential &credential, const string &region) :
    CloudappClient(credential, region, ClientProfile())
{
}

CloudappClient::CloudappClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudappClient::VerifyLicenseOutcome CloudappClient::VerifyLicense(const VerifyLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyLicenseResponse rsp = VerifyLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyLicenseOutcome(rsp);
        else
            return VerifyLicenseOutcome(o.GetError());
    }
    else
    {
        return VerifyLicenseOutcome(outcome.GetError());
    }
}

void CloudappClient::VerifyLicenseAsync(const VerifyLicenseRequest& request, const VerifyLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudappClient::VerifyLicenseOutcomeCallable CloudappClient::VerifyLicenseCallable(const VerifyLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyLicenseOutcome()>>(
        [this, request]()
        {
            return this->VerifyLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

