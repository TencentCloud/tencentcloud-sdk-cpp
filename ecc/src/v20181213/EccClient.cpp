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

#include <tencentcloud/ecc/v20181213/EccClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecc::V20181213;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-13";
    const string ENDPOINT = "ecc.tencentcloudapi.com";
}

EccClient::EccClient(const Credential &credential, const string &region) :
    EccClient(credential, region, ClientProfile())
{
}

EccClient::EccClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EccClient::CorrectMultiImageOutcome EccClient::CorrectMultiImage(const CorrectMultiImageRequest &request)
{
    auto outcome = MakeRequest(request, "CorrectMultiImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CorrectMultiImageResponse rsp = CorrectMultiImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CorrectMultiImageOutcome(rsp);
        else
            return CorrectMultiImageOutcome(o.GetError());
    }
    else
    {
        return CorrectMultiImageOutcome(outcome.GetError());
    }
}

void EccClient::CorrectMultiImageAsync(const CorrectMultiImageRequest& request, const CorrectMultiImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CorrectMultiImageRequest&;
    using Resp = CorrectMultiImageResponse;

    DoRequestAsync<Req, Resp>(
        "CorrectMultiImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EccClient::CorrectMultiImageOutcomeCallable EccClient::CorrectMultiImageCallable(const CorrectMultiImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CorrectMultiImageOutcome>>();
    CorrectMultiImageAsync(
    request,
    [prom](
        const EccClient*,
        const CorrectMultiImageRequest&,
        CorrectMultiImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EccClient::DescribeTaskOutcome EccClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void EccClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRequest&;
    using Resp = DescribeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EccClient::DescribeTaskOutcomeCallable EccClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskOutcome>>();
    DescribeTaskAsync(
    request,
    [prom](
        const EccClient*,
        const DescribeTaskRequest&,
        DescribeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EccClient::ECCOutcome EccClient::ECC(const ECCRequest &request)
{
    auto outcome = MakeRequest(request, "ECC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ECCResponse rsp = ECCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ECCOutcome(rsp);
        else
            return ECCOutcome(o.GetError());
    }
    else
    {
        return ECCOutcome(outcome.GetError());
    }
}

void EccClient::ECCAsync(const ECCRequest& request, const ECCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ECCRequest&;
    using Resp = ECCResponse;

    DoRequestAsync<Req, Resp>(
        "ECC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EccClient::ECCOutcomeCallable EccClient::ECCCallable(const ECCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ECCOutcome>>();
    ECCAsync(
    request,
    [prom](
        const EccClient*,
        const ECCRequest&,
        ECCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EccClient::EHOCROutcome EccClient::EHOCR(const EHOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EHOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EHOCRResponse rsp = EHOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EHOCROutcome(rsp);
        else
            return EHOCROutcome(o.GetError());
    }
    else
    {
        return EHOCROutcome(outcome.GetError());
    }
}

void EccClient::EHOCRAsync(const EHOCRRequest& request, const EHOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EHOCRRequest&;
    using Resp = EHOCRResponse;

    DoRequestAsync<Req, Resp>(
        "EHOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EccClient::EHOCROutcomeCallable EccClient::EHOCRCallable(const EHOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<EHOCROutcome>>();
    EHOCRAsync(
    request,
    [prom](
        const EccClient*,
        const EHOCRRequest&,
        EHOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

