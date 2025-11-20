/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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


CloudappClient::DescribeLicenseOutcome CloudappClient::DescribeLicense(const DescribeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseResponse rsp = DescribeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseOutcome(rsp);
        else
            return DescribeLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseOutcome(outcome.GetError());
    }
}

void CloudappClient::DescribeLicenseAsync(const DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseRequest&;
    using Resp = DescribeLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudappClient::DescribeLicenseOutcomeCallable CloudappClient::DescribeLicenseCallable(const DescribeLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseOutcome>>();
    DescribeLicenseAsync(
    request,
    [prom](
        const CloudappClient*,
        const DescribeLicenseRequest&,
        DescribeLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VerifyLicenseRequest&;
    using Resp = VerifyLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudappClient::VerifyLicenseOutcomeCallable CloudappClient::VerifyLicenseCallable(const VerifyLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyLicenseOutcome>>();
    VerifyLicenseAsync(
    request,
    [prom](
        const CloudappClient*,
        const VerifyLicenseRequest&,
        VerifyLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

