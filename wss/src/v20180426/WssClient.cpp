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

#include <tencentcloud/wss/v20180426/WssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wss::V20180426;
using namespace TencentCloud::Wss::V20180426::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-26";
    const string ENDPOINT = "wss.tencentcloudapi.com";
}

WssClient::WssClient(const Credential &credential, const string &region) :
    WssClient(credential, region, ClientProfile())
{
}

WssClient::WssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WssClient::DeleteCertOutcome WssClient::DeleteCert(const DeleteCertRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertResponse rsp = DeleteCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertOutcome(rsp);
        else
            return DeleteCertOutcome(o.GetError());
    }
    else
    {
        return DeleteCertOutcome(outcome.GetError());
    }
}

void WssClient::DeleteCertAsync(const DeleteCertRequest& request, const DeleteCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCertRequest&;
    using Resp = DeleteCertResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WssClient::DeleteCertOutcomeCallable WssClient::DeleteCertCallable(const DeleteCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCertOutcome>>();
    DeleteCertAsync(
    request,
    [prom](
        const WssClient*,
        const DeleteCertRequest&,
        DeleteCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WssClient::DescribeCertListOutcome WssClient::DescribeCertList(const DescribeCertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertListResponse rsp = DescribeCertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertListOutcome(rsp);
        else
            return DescribeCertListOutcome(o.GetError());
    }
    else
    {
        return DescribeCertListOutcome(outcome.GetError());
    }
}

void WssClient::DescribeCertListAsync(const DescribeCertListRequest& request, const DescribeCertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertListRequest&;
    using Resp = DescribeCertListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WssClient::DescribeCertListOutcomeCallable WssClient::DescribeCertListCallable(const DescribeCertListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertListOutcome>>();
    DescribeCertListAsync(
    request,
    [prom](
        const WssClient*,
        const DescribeCertListRequest&,
        DescribeCertListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WssClient::UploadCertOutcome WssClient::UploadCert(const UploadCertRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertResponse rsp = UploadCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertOutcome(rsp);
        else
            return UploadCertOutcome(o.GetError());
    }
    else
    {
        return UploadCertOutcome(outcome.GetError());
    }
}

void WssClient::UploadCertAsync(const UploadCertRequest& request, const UploadCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadCertRequest&;
    using Resp = UploadCertResponse;

    DoRequestAsync<Req, Resp>(
        "UploadCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WssClient::UploadCertOutcomeCallable WssClient::UploadCertCallable(const UploadCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadCertOutcome>>();
    UploadCertAsync(
    request,
    [prom](
        const WssClient*,
        const UploadCertRequest&,
        UploadCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

