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

#include <tencentcloud/ape/v20200513/ApeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ape::V20200513;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-05-13";
    const string ENDPOINT = "ape.tencentcloudapi.com";
}

ApeClient::ApeClient(const Credential &credential, const string &region) :
    ApeClient(credential, region, ClientProfile())
{
}

ApeClient::ApeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApeClient::BatchDescribeOrderCertificateOutcome ApeClient::BatchDescribeOrderCertificate(const BatchDescribeOrderCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeOrderCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeOrderCertificateResponse rsp = BatchDescribeOrderCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeOrderCertificateOutcome(rsp);
        else
            return BatchDescribeOrderCertificateOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeOrderCertificateOutcome(outcome.GetError());
    }
}

void ApeClient::BatchDescribeOrderCertificateAsync(const BatchDescribeOrderCertificateRequest& request, const BatchDescribeOrderCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDescribeOrderCertificateRequest&;
    using Resp = BatchDescribeOrderCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDescribeOrderCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::BatchDescribeOrderCertificateOutcomeCallable ApeClient::BatchDescribeOrderCertificateCallable(const BatchDescribeOrderCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDescribeOrderCertificateOutcome>>();
    BatchDescribeOrderCertificateAsync(
    request,
    [prom](
        const ApeClient*,
        const BatchDescribeOrderCertificateRequest&,
        BatchDescribeOrderCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::BatchDescribeOrderImageOutcome ApeClient::BatchDescribeOrderImage(const BatchDescribeOrderImageRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeOrderImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeOrderImageResponse rsp = BatchDescribeOrderImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeOrderImageOutcome(rsp);
        else
            return BatchDescribeOrderImageOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeOrderImageOutcome(outcome.GetError());
    }
}

void ApeClient::BatchDescribeOrderImageAsync(const BatchDescribeOrderImageRequest& request, const BatchDescribeOrderImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDescribeOrderImageRequest&;
    using Resp = BatchDescribeOrderImageResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDescribeOrderImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::BatchDescribeOrderImageOutcomeCallable ApeClient::BatchDescribeOrderImageCallable(const BatchDescribeOrderImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDescribeOrderImageOutcome>>();
    BatchDescribeOrderImageAsync(
    request,
    [prom](
        const ApeClient*,
        const BatchDescribeOrderImageRequest&,
        BatchDescribeOrderImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::CreateOrderAndDownloadsOutcome ApeClient::CreateOrderAndDownloads(const CreateOrderAndDownloadsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderAndDownloads");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderAndDownloadsResponse rsp = CreateOrderAndDownloadsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderAndDownloadsOutcome(rsp);
        else
            return CreateOrderAndDownloadsOutcome(o.GetError());
    }
    else
    {
        return CreateOrderAndDownloadsOutcome(outcome.GetError());
    }
}

void ApeClient::CreateOrderAndDownloadsAsync(const CreateOrderAndDownloadsRequest& request, const CreateOrderAndDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrderAndDownloadsRequest&;
    using Resp = CreateOrderAndDownloadsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrderAndDownloads", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::CreateOrderAndDownloadsOutcomeCallable ApeClient::CreateOrderAndDownloadsCallable(const CreateOrderAndDownloadsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrderAndDownloadsOutcome>>();
    CreateOrderAndDownloadsAsync(
    request,
    [prom](
        const ApeClient*,
        const CreateOrderAndDownloadsRequest&,
        CreateOrderAndDownloadsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::CreateOrderAndPayOutcome ApeClient::CreateOrderAndPay(const CreateOrderAndPayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderAndPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderAndPayResponse rsp = CreateOrderAndPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderAndPayOutcome(rsp);
        else
            return CreateOrderAndPayOutcome(o.GetError());
    }
    else
    {
        return CreateOrderAndPayOutcome(outcome.GetError());
    }
}

void ApeClient::CreateOrderAndPayAsync(const CreateOrderAndPayRequest& request, const CreateOrderAndPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrderAndPayRequest&;
    using Resp = CreateOrderAndPayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrderAndPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::CreateOrderAndPayOutcomeCallable ApeClient::CreateOrderAndPayCallable(const CreateOrderAndPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrderAndPayOutcome>>();
    CreateOrderAndPayAsync(
    request,
    [prom](
        const ApeClient*,
        const CreateOrderAndPayRequest&,
        CreateOrderAndPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::DescribeAuthUsersOutcome ApeClient::DescribeAuthUsers(const DescribeAuthUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthUsersResponse rsp = DescribeAuthUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthUsersOutcome(rsp);
        else
            return DescribeAuthUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthUsersOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeAuthUsersAsync(const DescribeAuthUsersRequest& request, const DescribeAuthUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuthUsersRequest&;
    using Resp = DescribeAuthUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::DescribeAuthUsersOutcomeCallable ApeClient::DescribeAuthUsersCallable(const DescribeAuthUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthUsersOutcome>>();
    DescribeAuthUsersAsync(
    request,
    [prom](
        const ApeClient*,
        const DescribeAuthUsersRequest&,
        DescribeAuthUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::DescribeDownloadInfosOutcome ApeClient::DescribeDownloadInfos(const DescribeDownloadInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadInfosResponse rsp = DescribeDownloadInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadInfosOutcome(rsp);
        else
            return DescribeDownloadInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadInfosOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeDownloadInfosAsync(const DescribeDownloadInfosRequest& request, const DescribeDownloadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDownloadInfosRequest&;
    using Resp = DescribeDownloadInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDownloadInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::DescribeDownloadInfosOutcomeCallable ApeClient::DescribeDownloadInfosCallable(const DescribeDownloadInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDownloadInfosOutcome>>();
    DescribeDownloadInfosAsync(
    request,
    [prom](
        const ApeClient*,
        const DescribeDownloadInfosRequest&,
        DescribeDownloadInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::DescribeImageOutcome ApeClient::DescribeImage(const DescribeImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageResponse rsp = DescribeImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageOutcome(rsp);
        else
            return DescribeImageOutcome(o.GetError());
    }
    else
    {
        return DescribeImageOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRequest&;
    using Resp = DescribeImageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::DescribeImageOutcomeCallable ApeClient::DescribeImageCallable(const DescribeImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageOutcome>>();
    DescribeImageAsync(
    request,
    [prom](
        const ApeClient*,
        const DescribeImageRequest&,
        DescribeImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApeClient::DescribeImagesOutcome ApeClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApeClient::DescribeImagesOutcomeCallable ApeClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const ApeClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

