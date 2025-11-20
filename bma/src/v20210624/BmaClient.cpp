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

#include <tencentcloud/bma/v20210624/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20210624;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-24";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateBPFakeURLOutcome BmaClient::CreateBPFakeURL(const CreateBPFakeURLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLResponse rsp = CreateBPFakeURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLOutcome(rsp);
        else
            return CreateBPFakeURLOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLAsync(const CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFakeURLRequest&;
    using Resp = CreateBPFakeURLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFakeURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFakeURLOutcomeCallable BmaClient::CreateBPFakeURLCallable(const CreateBPFakeURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFakeURLOutcome>>();
    CreateBPFakeURLAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFakeURLRequest&,
        CreateBPFakeURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPFalseTicketOutcome BmaClient::CreateBPFalseTicket(const CreateBPFalseTicketRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFalseTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFalseTicketResponse rsp = CreateBPFalseTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFalseTicketOutcome(rsp);
        else
            return CreateBPFalseTicketOutcome(o.GetError());
    }
    else
    {
        return CreateBPFalseTicketOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFalseTicketAsync(const CreateBPFalseTicketRequest& request, const CreateBPFalseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFalseTicketRequest&;
    using Resp = CreateBPFalseTicketResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFalseTicket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFalseTicketOutcomeCallable BmaClient::CreateBPFalseTicketCallable(const CreateBPFalseTicketRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFalseTicketOutcome>>();
    CreateBPFalseTicketAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFalseTicketRequest&,
        CreateBPFalseTicketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPOfflineAttachmentOutcome BmaClient::CreateBPOfflineAttachment(const CreateBPOfflineAttachmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPOfflineAttachment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPOfflineAttachmentResponse rsp = CreateBPOfflineAttachmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPOfflineAttachmentOutcome(rsp);
        else
            return CreateBPOfflineAttachmentOutcome(o.GetError());
    }
    else
    {
        return CreateBPOfflineAttachmentOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPOfflineAttachmentAsync(const CreateBPOfflineAttachmentRequest& request, const CreateBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPOfflineAttachmentRequest&;
    using Resp = CreateBPOfflineAttachmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPOfflineAttachment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPOfflineAttachmentOutcomeCallable BmaClient::CreateBPOfflineAttachmentCallable(const CreateBPOfflineAttachmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPOfflineAttachmentOutcome>>();
    CreateBPOfflineAttachmentAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPOfflineAttachmentRequest&,
        CreateBPOfflineAttachmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPOfflineTicketOutcome BmaClient::CreateBPOfflineTicket(const CreateBPOfflineTicketRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPOfflineTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPOfflineTicketResponse rsp = CreateBPOfflineTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPOfflineTicketOutcome(rsp);
        else
            return CreateBPOfflineTicketOutcome(o.GetError());
    }
    else
    {
        return CreateBPOfflineTicketOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPOfflineTicketAsync(const CreateBPOfflineTicketRequest& request, const CreateBPOfflineTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPOfflineTicketRequest&;
    using Resp = CreateBPOfflineTicketResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPOfflineTicket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPOfflineTicketOutcomeCallable BmaClient::CreateBPOfflineTicketCallable(const CreateBPOfflineTicketRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPOfflineTicketOutcome>>();
    CreateBPOfflineTicketAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPOfflineTicketRequest&,
        CreateBPOfflineTicketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPProtectURLsOutcome BmaClient::CreateBPProtectURLs(const CreateBPProtectURLsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPProtectURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPProtectURLsResponse rsp = CreateBPProtectURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPProtectURLsOutcome(rsp);
        else
            return CreateBPProtectURLsOutcome(o.GetError());
    }
    else
    {
        return CreateBPProtectURLsOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPProtectURLsAsync(const CreateBPProtectURLsRequest& request, const CreateBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPProtectURLsRequest&;
    using Resp = CreateBPProtectURLsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPProtectURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPProtectURLsOutcomeCallable BmaClient::CreateBPProtectURLsCallable(const CreateBPProtectURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPProtectURLsOutcome>>();
    CreateBPProtectURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPProtectURLsRequest&,
        CreateBPProtectURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRBlockOutcome BmaClient::CreateCRBlock(const CreateCRBlockRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRBlockResponse rsp = CreateCRBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRBlockOutcome(rsp);
        else
            return CreateCRBlockOutcome(o.GetError());
    }
    else
    {
        return CreateCRBlockOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRBlockAsync(const CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRBlockRequest&;
    using Resp = CreateCRBlockResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRBlockOutcomeCallable BmaClient::CreateCRBlockCallable(const CreateCRBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRBlockOutcome>>();
    CreateCRBlockAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRBlockRequest&,
        CreateCRBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRCompanyVerifyOutcome BmaClient::CreateCRCompanyVerify(const CreateCRCompanyVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRCompanyVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRCompanyVerifyResponse rsp = CreateCRCompanyVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRCompanyVerifyOutcome(rsp);
        else
            return CreateCRCompanyVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRCompanyVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRCompanyVerifyAsync(const CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRCompanyVerifyRequest&;
    using Resp = CreateCRCompanyVerifyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRCompanyVerify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRCompanyVerifyOutcomeCallable BmaClient::CreateCRCompanyVerifyCallable(const CreateCRCompanyVerifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRCompanyVerifyOutcome>>();
    CreateCRCompanyVerifyAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRCompanyVerifyRequest&,
        CreateCRCompanyVerifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRDesktopCodeOutcome BmaClient::CreateCRDesktopCode(const CreateCRDesktopCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRDesktopCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRDesktopCodeResponse rsp = CreateCRDesktopCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRDesktopCodeOutcome(rsp);
        else
            return CreateCRDesktopCodeOutcome(o.GetError());
    }
    else
    {
        return CreateCRDesktopCodeOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRDesktopCodeAsync(const CreateCRDesktopCodeRequest& request, const CreateCRDesktopCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRDesktopCodeRequest&;
    using Resp = CreateCRDesktopCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRDesktopCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRDesktopCodeOutcomeCallable BmaClient::CreateCRDesktopCodeCallable(const CreateCRDesktopCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRDesktopCodeOutcome>>();
    CreateCRDesktopCodeAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRDesktopCodeRequest&,
        CreateCRDesktopCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRRightOutcome BmaClient::CreateCRRight(const CreateCRRightRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightResponse rsp = CreateCRRightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightOutcome(rsp);
        else
            return CreateCRRightOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightAsync(const CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRRightRequest&;
    using Resp = CreateCRRightResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRRight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRRightOutcomeCallable BmaClient::CreateCRRightCallable(const CreateCRRightRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRRightOutcome>>();
    CreateCRRightAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRRightRequest&,
        CreateCRRightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRRightFileOutcome BmaClient::CreateCRRightFile(const CreateCRRightFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRightFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightFileResponse rsp = CreateCRRightFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightFileOutcome(rsp);
        else
            return CreateCRRightFileOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightFileOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightFileAsync(const CreateCRRightFileRequest& request, const CreateCRRightFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRRightFileRequest&;
    using Resp = CreateCRRightFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRRightFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRRightFileOutcomeCallable BmaClient::CreateCRRightFileCallable(const CreateCRRightFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRRightFileOutcome>>();
    CreateCRRightFileAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRRightFileRequest&,
        CreateCRRightFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRTortOutcome BmaClient::CreateCRTort(const CreateCRTortRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRTort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRTortResponse rsp = CreateCRTortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRTortOutcome(rsp);
        else
            return CreateCRTortOutcome(o.GetError());
    }
    else
    {
        return CreateCRTortOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRTortAsync(const CreateCRTortRequest& request, const CreateCRTortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRTortRequest&;
    using Resp = CreateCRTortResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRTort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRTortOutcomeCallable BmaClient::CreateCRTortCallable(const CreateCRTortRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRTortOutcome>>();
    CreateCRTortAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRTortRequest&,
        CreateCRTortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRUserVerifyOutcome BmaClient::CreateCRUserVerify(const CreateCRUserVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRUserVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRUserVerifyResponse rsp = CreateCRUserVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRUserVerifyOutcome(rsp);
        else
            return CreateCRUserVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRUserVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRUserVerifyAsync(const CreateCRUserVerifyRequest& request, const CreateCRUserVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRUserVerifyRequest&;
    using Resp = CreateCRUserVerifyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRUserVerify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRUserVerifyOutcomeCallable BmaClient::CreateCRUserVerifyCallable(const CreateCRUserVerifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRUserVerifyOutcome>>();
    CreateCRUserVerifyAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRUserVerifyRequest&,
        CreateCRUserVerifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateCRWorkOutcome BmaClient::CreateCRWork(const CreateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRWorkResponse rsp = CreateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRWorkOutcome(rsp);
        else
            return CreateCRWorkOutcome(o.GetError());
    }
    else
    {
        return CreateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRWorkAsync(const CreateCRWorkRequest& request, const CreateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCRWorkRequest&;
    using Resp = CreateCRWorkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCRWork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateCRWorkOutcomeCallable BmaClient::CreateCRWorkCallable(const CreateCRWorkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCRWorkOutcome>>();
    CreateCRWorkAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateCRWorkRequest&,
        CreateCRWorkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPCompanyInfoOutcome BmaClient::DescribeBPCompanyInfo(const DescribeBPCompanyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPCompanyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPCompanyInfoResponse rsp = DescribeBPCompanyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPCompanyInfoOutcome(rsp);
        else
            return DescribeBPCompanyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBPCompanyInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPCompanyInfoAsync(const DescribeBPCompanyInfoRequest& request, const DescribeBPCompanyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPCompanyInfoRequest&;
    using Resp = DescribeBPCompanyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPCompanyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPCompanyInfoOutcomeCallable BmaClient::DescribeBPCompanyInfoCallable(const DescribeBPCompanyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPCompanyInfoOutcome>>();
    DescribeBPCompanyInfoAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPCompanyInfoRequest&,
        DescribeBPCompanyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPFakeURLsOutcome BmaClient::DescribeBPFakeURLs(const DescribeBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeURLsResponse rsp = DescribeBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeURLsOutcome(rsp);
        else
            return DescribeBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeURLsAsync(const DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPFakeURLsRequest&;
    using Resp = DescribeBPFakeURLsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPFakeURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPFakeURLsOutcomeCallable BmaClient::DescribeBPFakeURLsCallable(const DescribeBPFakeURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPFakeURLsOutcome>>();
    DescribeBPFakeURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPFakeURLsRequest&,
        DescribeBPFakeURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPProtectURLsOutcome BmaClient::DescribeBPProtectURLs(const DescribeBPProtectURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPProtectURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPProtectURLsResponse rsp = DescribeBPProtectURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPProtectURLsOutcome(rsp);
        else
            return DescribeBPProtectURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPProtectURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPProtectURLsAsync(const DescribeBPProtectURLsRequest& request, const DescribeBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPProtectURLsRequest&;
    using Resp = DescribeBPProtectURLsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPProtectURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPProtectURLsOutcomeCallable BmaClient::DescribeBPProtectURLsCallable(const DescribeBPProtectURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPProtectURLsOutcome>>();
    DescribeBPProtectURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPProtectURLsRequest&,
        DescribeBPProtectURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPReportFakeURLsOutcome BmaClient::DescribeBPReportFakeURLs(const DescribeBPReportFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPReportFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPReportFakeURLsResponse rsp = DescribeBPReportFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPReportFakeURLsOutcome(rsp);
        else
            return DescribeBPReportFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPReportFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPReportFakeURLsAsync(const DescribeBPReportFakeURLsRequest& request, const DescribeBPReportFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPReportFakeURLsRequest&;
    using Resp = DescribeBPReportFakeURLsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPReportFakeURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPReportFakeURLsOutcomeCallable BmaClient::DescribeBPReportFakeURLsCallable(const DescribeBPReportFakeURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPReportFakeURLsOutcome>>();
    DescribeBPReportFakeURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPReportFakeURLsRequest&,
        DescribeBPReportFakeURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeCRMonitorDetailOutcome BmaClient::DescribeCRMonitorDetail(const DescribeCRMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorDetailResponse rsp = DescribeCRMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorDetailOutcome(rsp);
        else
            return DescribeCRMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorDetailOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorDetailAsync(const DescribeCRMonitorDetailRequest& request, const DescribeCRMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCRMonitorDetailRequest&;
    using Resp = DescribeCRMonitorDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCRMonitorDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeCRMonitorDetailOutcomeCallable BmaClient::DescribeCRMonitorDetailCallable(const DescribeCRMonitorDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCRMonitorDetailOutcome>>();
    DescribeCRMonitorDetailAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeCRMonitorDetailRequest&,
        DescribeCRMonitorDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeCRMonitorsOutcome BmaClient::DescribeCRMonitors(const DescribeCRMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorsResponse rsp = DescribeCRMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorsOutcome(rsp);
        else
            return DescribeCRMonitorsOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorsAsync(const DescribeCRMonitorsRequest& request, const DescribeCRMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCRMonitorsRequest&;
    using Resp = DescribeCRMonitorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCRMonitors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeCRMonitorsOutcomeCallable BmaClient::DescribeCRMonitorsCallable(const DescribeCRMonitorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCRMonitorsOutcome>>();
    DescribeCRMonitorsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeCRMonitorsRequest&,
        DescribeCRMonitorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeCRObtainDetailOutcome BmaClient::DescribeCRObtainDetail(const DescribeCRObtainDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRObtainDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRObtainDetailResponse rsp = DescribeCRObtainDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRObtainDetailOutcome(rsp);
        else
            return DescribeCRObtainDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCRObtainDetailOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRObtainDetailAsync(const DescribeCRObtainDetailRequest& request, const DescribeCRObtainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCRObtainDetailRequest&;
    using Resp = DescribeCRObtainDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCRObtainDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeCRObtainDetailOutcomeCallable BmaClient::DescribeCRObtainDetailCallable(const DescribeCRObtainDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCRObtainDetailOutcome>>();
    DescribeCRObtainDetailAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeCRObtainDetailRequest&,
        DescribeCRObtainDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeCRWorkInfoOutcome BmaClient::DescribeCRWorkInfo(const DescribeCRWorkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRWorkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRWorkInfoResponse rsp = DescribeCRWorkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRWorkInfoOutcome(rsp);
        else
            return DescribeCRWorkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCRWorkInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRWorkInfoAsync(const DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCRWorkInfoRequest&;
    using Resp = DescribeCRWorkInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCRWorkInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeCRWorkInfoOutcomeCallable BmaClient::DescribeCRWorkInfoCallable(const DescribeCRWorkInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCRWorkInfoOutcome>>();
    DescribeCRWorkInfoAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeCRWorkInfoRequest&,
        DescribeCRWorkInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyBPOfflineAttachmentOutcome BmaClient::ModifyBPOfflineAttachment(const ModifyBPOfflineAttachmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBPOfflineAttachment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBPOfflineAttachmentResponse rsp = ModifyBPOfflineAttachmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBPOfflineAttachmentOutcome(rsp);
        else
            return ModifyBPOfflineAttachmentOutcome(o.GetError());
    }
    else
    {
        return ModifyBPOfflineAttachmentOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyBPOfflineAttachmentAsync(const ModifyBPOfflineAttachmentRequest& request, const ModifyBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBPOfflineAttachmentRequest&;
    using Resp = ModifyBPOfflineAttachmentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBPOfflineAttachment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyBPOfflineAttachmentOutcomeCallable BmaClient::ModifyBPOfflineAttachmentCallable(const ModifyBPOfflineAttachmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBPOfflineAttachmentOutcome>>();
    ModifyBPOfflineAttachmentAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyBPOfflineAttachmentRequest&,
        ModifyBPOfflineAttachmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyCRBlockStatusOutcome BmaClient::ModifyCRBlockStatus(const ModifyCRBlockStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRBlockStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRBlockStatusResponse rsp = ModifyCRBlockStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRBlockStatusOutcome(rsp);
        else
            return ModifyCRBlockStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRBlockStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRBlockStatusAsync(const ModifyCRBlockStatusRequest& request, const ModifyCRBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCRBlockStatusRequest&;
    using Resp = ModifyCRBlockStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCRBlockStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyCRBlockStatusOutcomeCallable BmaClient::ModifyCRBlockStatusCallable(const ModifyCRBlockStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCRBlockStatusOutcome>>();
    ModifyCRBlockStatusAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyCRBlockStatusRequest&,
        ModifyCRBlockStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyCRMonitorOutcome BmaClient::ModifyCRMonitor(const ModifyCRMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRMonitorResponse rsp = ModifyCRMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRMonitorOutcome(rsp);
        else
            return ModifyCRMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyCRMonitorOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRMonitorAsync(const ModifyCRMonitorRequest& request, const ModifyCRMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCRMonitorRequest&;
    using Resp = ModifyCRMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCRMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyCRMonitorOutcomeCallable BmaClient::ModifyCRMonitorCallable(const ModifyCRMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCRMonitorOutcome>>();
    ModifyCRMonitorAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyCRMonitorRequest&,
        ModifyCRMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyCRObtainStatusOutcome BmaClient::ModifyCRObtainStatus(const ModifyCRObtainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRObtainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRObtainStatusResponse rsp = ModifyCRObtainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRObtainStatusOutcome(rsp);
        else
            return ModifyCRObtainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRObtainStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRObtainStatusAsync(const ModifyCRObtainStatusRequest& request, const ModifyCRObtainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCRObtainStatusRequest&;
    using Resp = ModifyCRObtainStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCRObtainStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyCRObtainStatusOutcomeCallable BmaClient::ModifyCRObtainStatusCallable(const ModifyCRObtainStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCRObtainStatusOutcome>>();
    ModifyCRObtainStatusAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyCRObtainStatusRequest&,
        ModifyCRObtainStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyCRRightStatusOutcome BmaClient::ModifyCRRightStatus(const ModifyCRRightStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRRightStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRRightStatusResponse rsp = ModifyCRRightStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRRightStatusOutcome(rsp);
        else
            return ModifyCRRightStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRRightStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRRightStatusAsync(const ModifyCRRightStatusRequest& request, const ModifyCRRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCRRightStatusRequest&;
    using Resp = ModifyCRRightStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCRRightStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyCRRightStatusOutcomeCallable BmaClient::ModifyCRRightStatusCallable(const ModifyCRRightStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCRRightStatusOutcome>>();
    ModifyCRRightStatusAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyCRRightStatusRequest&,
        ModifyCRRightStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::ModifyCRWhiteListOutcome BmaClient::ModifyCRWhiteList(const ModifyCRWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRWhiteListResponse rsp = ModifyCRWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRWhiteListOutcome(rsp);
        else
            return ModifyCRWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyCRWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRWhiteListAsync(const ModifyCRWhiteListRequest& request, const ModifyCRWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCRWhiteListRequest&;
    using Resp = ModifyCRWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCRWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::ModifyCRWhiteListOutcomeCallable BmaClient::ModifyCRWhiteListCallable(const ModifyCRWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCRWhiteListOutcome>>();
    ModifyCRWhiteListAsync(
    request,
    [prom](
        const BmaClient*,
        const ModifyCRWhiteListRequest&,
        ModifyCRWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::UpdateCRWorkOutcome BmaClient::UpdateCRWork(const UpdateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCRWorkResponse rsp = UpdateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCRWorkOutcome(rsp);
        else
            return UpdateCRWorkOutcome(o.GetError());
    }
    else
    {
        return UpdateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::UpdateCRWorkAsync(const UpdateCRWorkRequest& request, const UpdateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCRWorkRequest&;
    using Resp = UpdateCRWorkResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCRWork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::UpdateCRWorkOutcomeCallable BmaClient::UpdateCRWorkCallable(const UpdateCRWorkRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCRWorkOutcome>>();
    UpdateCRWorkAsync(
    request,
    [prom](
        const BmaClient*,
        const UpdateCRWorkRequest&,
        UpdateCRWorkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

