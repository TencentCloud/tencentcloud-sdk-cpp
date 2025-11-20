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

#include <tencentcloud/essbasic/v20210526/EssbasicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Essbasic::V20210526;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-26";
    const string ENDPOINT = "essbasic.tencentcloudapi.com";
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region) :
    EssbasicClient(credential, region, ClientProfile())
{
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssbasicClient::ArchiveDynamicFlowOutcome EssbasicClient::ArchiveDynamicFlow(const ArchiveDynamicFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveDynamicFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveDynamicFlowResponse rsp = ArchiveDynamicFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveDynamicFlowOutcome(rsp);
        else
            return ArchiveDynamicFlowOutcome(o.GetError());
    }
    else
    {
        return ArchiveDynamicFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ArchiveDynamicFlowAsync(const ArchiveDynamicFlowRequest& request, const ArchiveDynamicFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ArchiveDynamicFlowRequest&;
    using Resp = ArchiveDynamicFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ArchiveDynamicFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ArchiveDynamicFlowOutcomeCallable EssbasicClient::ArchiveDynamicFlowCallable(const ArchiveDynamicFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ArchiveDynamicFlowOutcome>>();
    ArchiveDynamicFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ArchiveDynamicFlowRequest&,
        ArchiveDynamicFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelBatchCancelFlowsOutcome EssbasicClient::ChannelBatchCancelFlows(const ChannelBatchCancelFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelBatchCancelFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelBatchCancelFlowsResponse rsp = ChannelBatchCancelFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelBatchCancelFlowsOutcome(rsp);
        else
            return ChannelBatchCancelFlowsOutcome(o.GetError());
    }
    else
    {
        return ChannelBatchCancelFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelBatchCancelFlowsAsync(const ChannelBatchCancelFlowsRequest& request, const ChannelBatchCancelFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelBatchCancelFlowsRequest&;
    using Resp = ChannelBatchCancelFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelBatchCancelFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelBatchCancelFlowsOutcomeCallable EssbasicClient::ChannelBatchCancelFlowsCallable(const ChannelBatchCancelFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelBatchCancelFlowsOutcome>>();
    ChannelBatchCancelFlowsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelBatchCancelFlowsRequest&,
        ChannelBatchCancelFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCancelFlowOutcome EssbasicClient::ChannelCancelFlow(const ChannelCancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelFlowResponse rsp = ChannelCancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelFlowOutcome(rsp);
        else
            return ChannelCancelFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelFlowAsync(const ChannelCancelFlowRequest& request, const ChannelCancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCancelFlowRequest&;
    using Resp = ChannelCancelFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCancelFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCancelFlowOutcomeCallable EssbasicClient::ChannelCancelFlowCallable(const ChannelCancelFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCancelFlowOutcome>>();
    ChannelCancelFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCancelFlowRequest&,
        ChannelCancelFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCancelMultiFlowSignQRCodeOutcome EssbasicClient::ChannelCancelMultiFlowSignQRCode(const ChannelCancelMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelMultiFlowSignQRCodeResponse rsp = ChannelCancelMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelMultiFlowSignQRCodeOutcome(rsp);
        else
            return ChannelCancelMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelMultiFlowSignQRCodeAsync(const ChannelCancelMultiFlowSignQRCodeRequest& request, const ChannelCancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCancelMultiFlowSignQRCodeRequest&;
    using Resp = ChannelCancelMultiFlowSignQRCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCancelMultiFlowSignQRCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCancelMultiFlowSignQRCodeOutcomeCallable EssbasicClient::ChannelCancelMultiFlowSignQRCodeCallable(const ChannelCancelMultiFlowSignQRCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCancelMultiFlowSignQRCodeOutcome>>();
    ChannelCancelMultiFlowSignQRCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCancelMultiFlowSignQRCodeRequest&,
        ChannelCancelMultiFlowSignQRCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCancelUserAutoSignEnableUrlOutcome EssbasicClient::ChannelCancelUserAutoSignEnableUrl(const ChannelCancelUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelUserAutoSignEnableUrlResponse rsp = ChannelCancelUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelUserAutoSignEnableUrlOutcome(rsp);
        else
            return ChannelCancelUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelUserAutoSignEnableUrlAsync(const ChannelCancelUserAutoSignEnableUrlRequest& request, const ChannelCancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCancelUserAutoSignEnableUrlRequest&;
    using Resp = ChannelCancelUserAutoSignEnableUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCancelUserAutoSignEnableUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCancelUserAutoSignEnableUrlOutcomeCallable EssbasicClient::ChannelCancelUserAutoSignEnableUrlCallable(const ChannelCancelUserAutoSignEnableUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCancelUserAutoSignEnableUrlOutcome>>();
    ChannelCancelUserAutoSignEnableUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCancelUserAutoSignEnableUrlRequest&,
        ChannelCancelUserAutoSignEnableUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateBatchCancelFlowUrlOutcome EssbasicClient::ChannelCreateBatchCancelFlowUrl(const ChannelCreateBatchCancelFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchCancelFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchCancelFlowUrlResponse rsp = ChannelCreateBatchCancelFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchCancelFlowUrlOutcome(rsp);
        else
            return ChannelCreateBatchCancelFlowUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchCancelFlowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchCancelFlowUrlAsync(const ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateBatchCancelFlowUrlRequest&;
    using Resp = ChannelCreateBatchCancelFlowUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateBatchCancelFlowUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateBatchCancelFlowUrlOutcomeCallable EssbasicClient::ChannelCreateBatchCancelFlowUrlCallable(const ChannelCreateBatchCancelFlowUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateBatchCancelFlowUrlOutcome>>();
    ChannelCreateBatchCancelFlowUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateBatchCancelFlowUrlRequest&,
        ChannelCreateBatchCancelFlowUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateBatchQuickSignUrlOutcome EssbasicClient::ChannelCreateBatchQuickSignUrl(const ChannelCreateBatchQuickSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchQuickSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchQuickSignUrlResponse rsp = ChannelCreateBatchQuickSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchQuickSignUrlOutcome(rsp);
        else
            return ChannelCreateBatchQuickSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchQuickSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchQuickSignUrlAsync(const ChannelCreateBatchQuickSignUrlRequest& request, const ChannelCreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateBatchQuickSignUrlRequest&;
    using Resp = ChannelCreateBatchQuickSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateBatchQuickSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateBatchQuickSignUrlOutcomeCallable EssbasicClient::ChannelCreateBatchQuickSignUrlCallable(const ChannelCreateBatchQuickSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateBatchQuickSignUrlOutcome>>();
    ChannelCreateBatchQuickSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateBatchQuickSignUrlRequest&,
        ChannelCreateBatchQuickSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateBatchSignUrlOutcome EssbasicClient::ChannelCreateBatchSignUrl(const ChannelCreateBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchSignUrlResponse rsp = ChannelCreateBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchSignUrlOutcome(rsp);
        else
            return ChannelCreateBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchSignUrlAsync(const ChannelCreateBatchSignUrlRequest& request, const ChannelCreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateBatchSignUrlRequest&;
    using Resp = ChannelCreateBatchSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateBatchSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateBatchSignUrlOutcomeCallable EssbasicClient::ChannelCreateBatchSignUrlCallable(const ChannelCreateBatchSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateBatchSignUrlOutcome>>();
    ChannelCreateBatchSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateBatchSignUrlRequest&,
        ChannelCreateBatchSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateBoundFlowsOutcome EssbasicClient::ChannelCreateBoundFlows(const ChannelCreateBoundFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBoundFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBoundFlowsResponse rsp = ChannelCreateBoundFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBoundFlowsOutcome(rsp);
        else
            return ChannelCreateBoundFlowsOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBoundFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBoundFlowsAsync(const ChannelCreateBoundFlowsRequest& request, const ChannelCreateBoundFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateBoundFlowsRequest&;
    using Resp = ChannelCreateBoundFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateBoundFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateBoundFlowsOutcomeCallable EssbasicClient::ChannelCreateBoundFlowsCallable(const ChannelCreateBoundFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateBoundFlowsOutcome>>();
    ChannelCreateBoundFlowsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateBoundFlowsRequest&,
        ChannelCreateBoundFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateConvertTaskApiOutcome EssbasicClient::ChannelCreateConvertTaskApi(const ChannelCreateConvertTaskApiRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateConvertTaskApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateConvertTaskApiResponse rsp = ChannelCreateConvertTaskApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateConvertTaskApiOutcome(rsp);
        else
            return ChannelCreateConvertTaskApiOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateConvertTaskApiOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateConvertTaskApiAsync(const ChannelCreateConvertTaskApiRequest& request, const ChannelCreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateConvertTaskApiRequest&;
    using Resp = ChannelCreateConvertTaskApiResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateConvertTaskApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateConvertTaskApiOutcomeCallable EssbasicClient::ChannelCreateConvertTaskApiCallable(const ChannelCreateConvertTaskApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateConvertTaskApiOutcome>>();
    ChannelCreateConvertTaskApiAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateConvertTaskApiRequest&,
        ChannelCreateConvertTaskApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateDynamicFlowApproverOutcome EssbasicClient::ChannelCreateDynamicFlowApprover(const ChannelCreateDynamicFlowApproverRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateDynamicFlowApprover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateDynamicFlowApproverResponse rsp = ChannelCreateDynamicFlowApproverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateDynamicFlowApproverOutcome(rsp);
        else
            return ChannelCreateDynamicFlowApproverOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateDynamicFlowApproverOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateDynamicFlowApproverAsync(const ChannelCreateDynamicFlowApproverRequest& request, const ChannelCreateDynamicFlowApproverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateDynamicFlowApproverRequest&;
    using Resp = ChannelCreateDynamicFlowApproverResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateDynamicFlowApprover", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateDynamicFlowApproverOutcomeCallable EssbasicClient::ChannelCreateDynamicFlowApproverCallable(const ChannelCreateDynamicFlowApproverRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateDynamicFlowApproverOutcome>>();
    ChannelCreateDynamicFlowApproverAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateDynamicFlowApproverRequest&,
        ChannelCreateDynamicFlowApproverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateEmbedWebUrlOutcome EssbasicClient::ChannelCreateEmbedWebUrl(const ChannelCreateEmbedWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateEmbedWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateEmbedWebUrlResponse rsp = ChannelCreateEmbedWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateEmbedWebUrlOutcome(rsp);
        else
            return ChannelCreateEmbedWebUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateEmbedWebUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateEmbedWebUrlAsync(const ChannelCreateEmbedWebUrlRequest& request, const ChannelCreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateEmbedWebUrlRequest&;
    using Resp = ChannelCreateEmbedWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateEmbedWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateEmbedWebUrlOutcomeCallable EssbasicClient::ChannelCreateEmbedWebUrlCallable(const ChannelCreateEmbedWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateEmbedWebUrlOutcome>>();
    ChannelCreateEmbedWebUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateEmbedWebUrlRequest&,
        ChannelCreateEmbedWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowApproversOutcome EssbasicClient::ChannelCreateFlowApprovers(const ChannelCreateFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowApproversResponse rsp = ChannelCreateFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowApproversOutcome(rsp);
        else
            return ChannelCreateFlowApproversOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowApproversOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowApproversAsync(const ChannelCreateFlowApproversRequest& request, const ChannelCreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowApproversRequest&;
    using Resp = ChannelCreateFlowApproversResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowApprovers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowApproversOutcomeCallable EssbasicClient::ChannelCreateFlowApproversCallable(const ChannelCreateFlowApproversRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowApproversOutcome>>();
    ChannelCreateFlowApproversAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowApproversRequest&,
        ChannelCreateFlowApproversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowByFilesOutcome EssbasicClient::ChannelCreateFlowByFiles(const ChannelCreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowByFilesResponse rsp = ChannelCreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowByFilesOutcome(rsp);
        else
            return ChannelCreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowByFilesAsync(const ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowByFilesRequest&;
    using Resp = ChannelCreateFlowByFilesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowByFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowByFilesOutcomeCallable EssbasicClient::ChannelCreateFlowByFilesCallable(const ChannelCreateFlowByFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowByFilesOutcome>>();
    ChannelCreateFlowByFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowByFilesRequest&,
        ChannelCreateFlowByFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowGroupByFilesOutcome EssbasicClient::ChannelCreateFlowGroupByFiles(const ChannelCreateFlowGroupByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowGroupByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowGroupByFilesResponse rsp = ChannelCreateFlowGroupByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowGroupByFilesOutcome(rsp);
        else
            return ChannelCreateFlowGroupByFilesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowGroupByFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowGroupByFilesAsync(const ChannelCreateFlowGroupByFilesRequest& request, const ChannelCreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowGroupByFilesRequest&;
    using Resp = ChannelCreateFlowGroupByFilesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowGroupByFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowGroupByFilesOutcomeCallable EssbasicClient::ChannelCreateFlowGroupByFilesCallable(const ChannelCreateFlowGroupByFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowGroupByFilesOutcome>>();
    ChannelCreateFlowGroupByFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowGroupByFilesRequest&,
        ChannelCreateFlowGroupByFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowGroupByTemplatesOutcome EssbasicClient::ChannelCreateFlowGroupByTemplates(const ChannelCreateFlowGroupByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowGroupByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowGroupByTemplatesResponse rsp = ChannelCreateFlowGroupByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowGroupByTemplatesOutcome(rsp);
        else
            return ChannelCreateFlowGroupByTemplatesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowGroupByTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowGroupByTemplatesAsync(const ChannelCreateFlowGroupByTemplatesRequest& request, const ChannelCreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowGroupByTemplatesRequest&;
    using Resp = ChannelCreateFlowGroupByTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowGroupByTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowGroupByTemplatesOutcomeCallable EssbasicClient::ChannelCreateFlowGroupByTemplatesCallable(const ChannelCreateFlowGroupByTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowGroupByTemplatesOutcome>>();
    ChannelCreateFlowGroupByTemplatesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowGroupByTemplatesRequest&,
        ChannelCreateFlowGroupByTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowRemindsOutcome EssbasicClient::ChannelCreateFlowReminds(const ChannelCreateFlowRemindsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowReminds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowRemindsResponse rsp = ChannelCreateFlowRemindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowRemindsOutcome(rsp);
        else
            return ChannelCreateFlowRemindsOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowRemindsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowRemindsAsync(const ChannelCreateFlowRemindsRequest& request, const ChannelCreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowRemindsRequest&;
    using Resp = ChannelCreateFlowRemindsResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowReminds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowRemindsOutcomeCallable EssbasicClient::ChannelCreateFlowRemindsCallable(const ChannelCreateFlowRemindsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowRemindsOutcome>>();
    ChannelCreateFlowRemindsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowRemindsRequest&,
        ChannelCreateFlowRemindsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowSignReviewOutcome EssbasicClient::ChannelCreateFlowSignReview(const ChannelCreateFlowSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowSignReviewResponse rsp = ChannelCreateFlowSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowSignReviewOutcome(rsp);
        else
            return ChannelCreateFlowSignReviewOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowSignReviewOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowSignReviewAsync(const ChannelCreateFlowSignReviewRequest& request, const ChannelCreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowSignReviewRequest&;
    using Resp = ChannelCreateFlowSignReviewResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowSignReview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowSignReviewOutcomeCallable EssbasicClient::ChannelCreateFlowSignReviewCallable(const ChannelCreateFlowSignReviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowSignReviewOutcome>>();
    ChannelCreateFlowSignReviewAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowSignReviewRequest&,
        ChannelCreateFlowSignReviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateFlowSignUrlOutcome EssbasicClient::ChannelCreateFlowSignUrl(const ChannelCreateFlowSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowSignUrlResponse rsp = ChannelCreateFlowSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowSignUrlOutcome(rsp);
        else
            return ChannelCreateFlowSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowSignUrlAsync(const ChannelCreateFlowSignUrlRequest& request, const ChannelCreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateFlowSignUrlRequest&;
    using Resp = ChannelCreateFlowSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateFlowSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateFlowSignUrlOutcomeCallable EssbasicClient::ChannelCreateFlowSignUrlCallable(const ChannelCreateFlowSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateFlowSignUrlOutcome>>();
    ChannelCreateFlowSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateFlowSignUrlRequest&,
        ChannelCreateFlowSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateMultiFlowSignQRCodeOutcome EssbasicClient::ChannelCreateMultiFlowSignQRCode(const ChannelCreateMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateMultiFlowSignQRCodeResponse rsp = ChannelCreateMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateMultiFlowSignQRCodeOutcome(rsp);
        else
            return ChannelCreateMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateMultiFlowSignQRCodeAsync(const ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateMultiFlowSignQRCodeRequest&;
    using Resp = ChannelCreateMultiFlowSignQRCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateMultiFlowSignQRCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateMultiFlowSignQRCodeOutcomeCallable EssbasicClient::ChannelCreateMultiFlowSignQRCodeCallable(const ChannelCreateMultiFlowSignQRCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateMultiFlowSignQRCodeOutcome>>();
    ChannelCreateMultiFlowSignQRCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateMultiFlowSignQRCodeRequest&,
        ChannelCreateMultiFlowSignQRCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateOrganizationBatchSignUrlOutcome EssbasicClient::ChannelCreateOrganizationBatchSignUrl(const ChannelCreateOrganizationBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateOrganizationBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateOrganizationBatchSignUrlResponse rsp = ChannelCreateOrganizationBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateOrganizationBatchSignUrlOutcome(rsp);
        else
            return ChannelCreateOrganizationBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateOrganizationBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateOrganizationBatchSignUrlAsync(const ChannelCreateOrganizationBatchSignUrlRequest& request, const ChannelCreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateOrganizationBatchSignUrlRequest&;
    using Resp = ChannelCreateOrganizationBatchSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateOrganizationBatchSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateOrganizationBatchSignUrlOutcomeCallable EssbasicClient::ChannelCreateOrganizationBatchSignUrlCallable(const ChannelCreateOrganizationBatchSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateOrganizationBatchSignUrlOutcome>>();
    ChannelCreateOrganizationBatchSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateOrganizationBatchSignUrlRequest&,
        ChannelCreateOrganizationBatchSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateOrganizationModifyQrCodeOutcome EssbasicClient::ChannelCreateOrganizationModifyQrCode(const ChannelCreateOrganizationModifyQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateOrganizationModifyQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateOrganizationModifyQrCodeResponse rsp = ChannelCreateOrganizationModifyQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateOrganizationModifyQrCodeOutcome(rsp);
        else
            return ChannelCreateOrganizationModifyQrCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateOrganizationModifyQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateOrganizationModifyQrCodeAsync(const ChannelCreateOrganizationModifyQrCodeRequest& request, const ChannelCreateOrganizationModifyQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateOrganizationModifyQrCodeRequest&;
    using Resp = ChannelCreateOrganizationModifyQrCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateOrganizationModifyQrCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateOrganizationModifyQrCodeOutcomeCallable EssbasicClient::ChannelCreateOrganizationModifyQrCodeCallable(const ChannelCreateOrganizationModifyQrCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateOrganizationModifyQrCodeOutcome>>();
    ChannelCreateOrganizationModifyQrCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateOrganizationModifyQrCodeRequest&,
        ChannelCreateOrganizationModifyQrCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreatePrepareFlowOutcome EssbasicClient::ChannelCreatePrepareFlow(const ChannelCreatePrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePrepareFlowResponse rsp = ChannelCreatePrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePrepareFlowOutcome(rsp);
        else
            return ChannelCreatePrepareFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePrepareFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePrepareFlowAsync(const ChannelCreatePrepareFlowRequest& request, const ChannelCreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreatePrepareFlowRequest&;
    using Resp = ChannelCreatePrepareFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreatePrepareFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreatePrepareFlowOutcomeCallable EssbasicClient::ChannelCreatePrepareFlowCallable(const ChannelCreatePrepareFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreatePrepareFlowOutcome>>();
    ChannelCreatePrepareFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreatePrepareFlowRequest&,
        ChannelCreatePrepareFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreatePrepareFlowGroupOutcome EssbasicClient::ChannelCreatePrepareFlowGroup(const ChannelCreatePrepareFlowGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePrepareFlowGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePrepareFlowGroupResponse rsp = ChannelCreatePrepareFlowGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePrepareFlowGroupOutcome(rsp);
        else
            return ChannelCreatePrepareFlowGroupOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePrepareFlowGroupOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePrepareFlowGroupAsync(const ChannelCreatePrepareFlowGroupRequest& request, const ChannelCreatePrepareFlowGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreatePrepareFlowGroupRequest&;
    using Resp = ChannelCreatePrepareFlowGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreatePrepareFlowGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreatePrepareFlowGroupOutcomeCallable EssbasicClient::ChannelCreatePrepareFlowGroupCallable(const ChannelCreatePrepareFlowGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreatePrepareFlowGroupOutcome>>();
    ChannelCreatePrepareFlowGroupAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreatePrepareFlowGroupRequest&,
        ChannelCreatePrepareFlowGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreatePreparedPersonalEsignOutcome EssbasicClient::ChannelCreatePreparedPersonalEsign(const ChannelCreatePreparedPersonalEsignRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePreparedPersonalEsign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePreparedPersonalEsignResponse rsp = ChannelCreatePreparedPersonalEsignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePreparedPersonalEsignOutcome(rsp);
        else
            return ChannelCreatePreparedPersonalEsignOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePreparedPersonalEsignOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePreparedPersonalEsignAsync(const ChannelCreatePreparedPersonalEsignRequest& request, const ChannelCreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreatePreparedPersonalEsignRequest&;
    using Resp = ChannelCreatePreparedPersonalEsignResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreatePreparedPersonalEsign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreatePreparedPersonalEsignOutcomeCallable EssbasicClient::ChannelCreatePreparedPersonalEsignCallable(const ChannelCreatePreparedPersonalEsignRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreatePreparedPersonalEsignOutcome>>();
    ChannelCreatePreparedPersonalEsignAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreatePreparedPersonalEsignRequest&,
        ChannelCreatePreparedPersonalEsignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateReleaseFlowOutcome EssbasicClient::ChannelCreateReleaseFlow(const ChannelCreateReleaseFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateReleaseFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateReleaseFlowResponse rsp = ChannelCreateReleaseFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateReleaseFlowOutcome(rsp);
        else
            return ChannelCreateReleaseFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateReleaseFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateReleaseFlowAsync(const ChannelCreateReleaseFlowRequest& request, const ChannelCreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateReleaseFlowRequest&;
    using Resp = ChannelCreateReleaseFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateReleaseFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateReleaseFlowOutcomeCallable EssbasicClient::ChannelCreateReleaseFlowCallable(const ChannelCreateReleaseFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateReleaseFlowOutcome>>();
    ChannelCreateReleaseFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateReleaseFlowRequest&,
        ChannelCreateReleaseFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateRoleOutcome EssbasicClient::ChannelCreateRole(const ChannelCreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateRoleResponse rsp = ChannelCreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateRoleOutcome(rsp);
        else
            return ChannelCreateRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateRoleAsync(const ChannelCreateRoleRequest& request, const ChannelCreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateRoleRequest&;
    using Resp = ChannelCreateRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateRoleOutcomeCallable EssbasicClient::ChannelCreateRoleCallable(const ChannelCreateRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateRoleOutcome>>();
    ChannelCreateRoleAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateRoleRequest&,
        ChannelCreateRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateSealPolicyOutcome EssbasicClient::ChannelCreateSealPolicy(const ChannelCreateSealPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateSealPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateSealPolicyResponse rsp = ChannelCreateSealPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateSealPolicyOutcome(rsp);
        else
            return ChannelCreateSealPolicyOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateSealPolicyOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateSealPolicyAsync(const ChannelCreateSealPolicyRequest& request, const ChannelCreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateSealPolicyRequest&;
    using Resp = ChannelCreateSealPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateSealPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateSealPolicyOutcomeCallable EssbasicClient::ChannelCreateSealPolicyCallable(const ChannelCreateSealPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateSealPolicyOutcome>>();
    ChannelCreateSealPolicyAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateSealPolicyRequest&,
        ChannelCreateSealPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateUserAutoSignEnableUrlOutcome EssbasicClient::ChannelCreateUserAutoSignEnableUrl(const ChannelCreateUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserAutoSignEnableUrlResponse rsp = ChannelCreateUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserAutoSignEnableUrlOutcome(rsp);
        else
            return ChannelCreateUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserAutoSignEnableUrlAsync(const ChannelCreateUserAutoSignEnableUrlRequest& request, const ChannelCreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateUserAutoSignEnableUrlRequest&;
    using Resp = ChannelCreateUserAutoSignEnableUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateUserAutoSignEnableUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateUserAutoSignEnableUrlOutcomeCallable EssbasicClient::ChannelCreateUserAutoSignEnableUrlCallable(const ChannelCreateUserAutoSignEnableUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateUserAutoSignEnableUrlOutcome>>();
    ChannelCreateUserAutoSignEnableUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateUserAutoSignEnableUrlRequest&,
        ChannelCreateUserAutoSignEnableUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateUserAutoSignSealUrlOutcome EssbasicClient::ChannelCreateUserAutoSignSealUrl(const ChannelCreateUserAutoSignSealUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserAutoSignSealUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserAutoSignSealUrlResponse rsp = ChannelCreateUserAutoSignSealUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserAutoSignSealUrlOutcome(rsp);
        else
            return ChannelCreateUserAutoSignSealUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserAutoSignSealUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserAutoSignSealUrlAsync(const ChannelCreateUserAutoSignSealUrlRequest& request, const ChannelCreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateUserAutoSignSealUrlRequest&;
    using Resp = ChannelCreateUserAutoSignSealUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateUserAutoSignSealUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateUserAutoSignSealUrlOutcomeCallable EssbasicClient::ChannelCreateUserAutoSignSealUrlCallable(const ChannelCreateUserAutoSignSealUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateUserAutoSignSealUrlOutcome>>();
    ChannelCreateUserAutoSignSealUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateUserAutoSignSealUrlRequest&,
        ChannelCreateUserAutoSignSealUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateUserRolesOutcome EssbasicClient::ChannelCreateUserRoles(const ChannelCreateUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserRolesResponse rsp = ChannelCreateUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserRolesOutcome(rsp);
        else
            return ChannelCreateUserRolesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserRolesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserRolesAsync(const ChannelCreateUserRolesRequest& request, const ChannelCreateUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateUserRolesRequest&;
    using Resp = ChannelCreateUserRolesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateUserRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateUserRolesOutcomeCallable EssbasicClient::ChannelCreateUserRolesCallable(const ChannelCreateUserRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateUserRolesOutcome>>();
    ChannelCreateUserRolesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateUserRolesRequest&,
        ChannelCreateUserRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelCreateWebThemeConfigOutcome EssbasicClient::ChannelCreateWebThemeConfig(const ChannelCreateWebThemeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateWebThemeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateWebThemeConfigResponse rsp = ChannelCreateWebThemeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateWebThemeConfigOutcome(rsp);
        else
            return ChannelCreateWebThemeConfigOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateWebThemeConfigOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateWebThemeConfigAsync(const ChannelCreateWebThemeConfigRequest& request, const ChannelCreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelCreateWebThemeConfigRequest&;
    using Resp = ChannelCreateWebThemeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelCreateWebThemeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelCreateWebThemeConfigOutcomeCallable EssbasicClient::ChannelCreateWebThemeConfigCallable(const ChannelCreateWebThemeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelCreateWebThemeConfigOutcome>>();
    ChannelCreateWebThemeConfigAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelCreateWebThemeConfigRequest&,
        ChannelCreateWebThemeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDeleteRoleOutcome EssbasicClient::ChannelDeleteRole(const ChannelDeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteRoleResponse rsp = ChannelDeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteRoleOutcome(rsp);
        else
            return ChannelDeleteRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteRoleAsync(const ChannelDeleteRoleRequest& request, const ChannelDeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDeleteRoleRequest&;
    using Resp = ChannelDeleteRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDeleteRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDeleteRoleOutcomeCallable EssbasicClient::ChannelDeleteRoleCallable(const ChannelDeleteRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDeleteRoleOutcome>>();
    ChannelDeleteRoleAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDeleteRoleRequest&,
        ChannelDeleteRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDeleteRoleUsersOutcome EssbasicClient::ChannelDeleteRoleUsers(const ChannelDeleteRoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteRoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteRoleUsersResponse rsp = ChannelDeleteRoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteRoleUsersOutcome(rsp);
        else
            return ChannelDeleteRoleUsersOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteRoleUsersOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteRoleUsersAsync(const ChannelDeleteRoleUsersRequest& request, const ChannelDeleteRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDeleteRoleUsersRequest&;
    using Resp = ChannelDeleteRoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDeleteRoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDeleteRoleUsersOutcomeCallable EssbasicClient::ChannelDeleteRoleUsersCallable(const ChannelDeleteRoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDeleteRoleUsersOutcome>>();
    ChannelDeleteRoleUsersAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDeleteRoleUsersRequest&,
        ChannelDeleteRoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDeleteSealPoliciesOutcome EssbasicClient::ChannelDeleteSealPolicies(const ChannelDeleteSealPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteSealPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteSealPoliciesResponse rsp = ChannelDeleteSealPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteSealPoliciesOutcome(rsp);
        else
            return ChannelDeleteSealPoliciesOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteSealPoliciesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteSealPoliciesAsync(const ChannelDeleteSealPoliciesRequest& request, const ChannelDeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDeleteSealPoliciesRequest&;
    using Resp = ChannelDeleteSealPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDeleteSealPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDeleteSealPoliciesOutcomeCallable EssbasicClient::ChannelDeleteSealPoliciesCallable(const ChannelDeleteSealPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDeleteSealPoliciesOutcome>>();
    ChannelDeleteSealPoliciesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDeleteSealPoliciesRequest&,
        ChannelDeleteSealPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeAccountBillDetailOutcome EssbasicClient::ChannelDescribeAccountBillDetail(const ChannelDescribeAccountBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeAccountBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeAccountBillDetailResponse rsp = ChannelDescribeAccountBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeAccountBillDetailOutcome(rsp);
        else
            return ChannelDescribeAccountBillDetailOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeAccountBillDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeAccountBillDetailAsync(const ChannelDescribeAccountBillDetailRequest& request, const ChannelDescribeAccountBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeAccountBillDetailRequest&;
    using Resp = ChannelDescribeAccountBillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeAccountBillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeAccountBillDetailOutcomeCallable EssbasicClient::ChannelDescribeAccountBillDetailCallable(const ChannelDescribeAccountBillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeAccountBillDetailOutcome>>();
    ChannelDescribeAccountBillDetailAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeAccountBillDetailRequest&,
        ChannelDescribeAccountBillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeBillUsageDetailOutcome EssbasicClient::ChannelDescribeBillUsageDetail(const ChannelDescribeBillUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeBillUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeBillUsageDetailResponse rsp = ChannelDescribeBillUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeBillUsageDetailOutcome(rsp);
        else
            return ChannelDescribeBillUsageDetailOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeBillUsageDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeBillUsageDetailAsync(const ChannelDescribeBillUsageDetailRequest& request, const ChannelDescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeBillUsageDetailRequest&;
    using Resp = ChannelDescribeBillUsageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeBillUsageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeBillUsageDetailOutcomeCallable EssbasicClient::ChannelDescribeBillUsageDetailCallable(const ChannelDescribeBillUsageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeBillUsageDetailOutcome>>();
    ChannelDescribeBillUsageDetailAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeBillUsageDetailRequest&,
        ChannelDescribeBillUsageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeEmployeesOutcome EssbasicClient::ChannelDescribeEmployees(const ChannelDescribeEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeEmployeesResponse rsp = ChannelDescribeEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeEmployeesOutcome(rsp);
        else
            return ChannelDescribeEmployeesOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeEmployeesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeEmployeesAsync(const ChannelDescribeEmployeesRequest& request, const ChannelDescribeEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeEmployeesRequest&;
    using Resp = ChannelDescribeEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeEmployeesOutcomeCallable EssbasicClient::ChannelDescribeEmployeesCallable(const ChannelDescribeEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeEmployeesOutcome>>();
    ChannelDescribeEmployeesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeEmployeesRequest&,
        ChannelDescribeEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeFlowComponentsOutcome EssbasicClient::ChannelDescribeFlowComponents(const ChannelDescribeFlowComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeFlowComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeFlowComponentsResponse rsp = ChannelDescribeFlowComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeFlowComponentsOutcome(rsp);
        else
            return ChannelDescribeFlowComponentsOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeFlowComponentsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeFlowComponentsAsync(const ChannelDescribeFlowComponentsRequest& request, const ChannelDescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeFlowComponentsRequest&;
    using Resp = ChannelDescribeFlowComponentsResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeFlowComponents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeFlowComponentsOutcomeCallable EssbasicClient::ChannelDescribeFlowComponentsCallable(const ChannelDescribeFlowComponentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeFlowComponentsOutcome>>();
    ChannelDescribeFlowComponentsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeFlowComponentsRequest&,
        ChannelDescribeFlowComponentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeOrganizationSealsOutcome EssbasicClient::ChannelDescribeOrganizationSeals(const ChannelDescribeOrganizationSealsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeOrganizationSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeOrganizationSealsResponse rsp = ChannelDescribeOrganizationSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeOrganizationSealsOutcome(rsp);
        else
            return ChannelDescribeOrganizationSealsOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeOrganizationSealsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeOrganizationSealsAsync(const ChannelDescribeOrganizationSealsRequest& request, const ChannelDescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeOrganizationSealsRequest&;
    using Resp = ChannelDescribeOrganizationSealsResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeOrganizationSeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeOrganizationSealsOutcomeCallable EssbasicClient::ChannelDescribeOrganizationSealsCallable(const ChannelDescribeOrganizationSealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeOrganizationSealsOutcome>>();
    ChannelDescribeOrganizationSealsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeOrganizationSealsRequest&,
        ChannelDescribeOrganizationSealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeRolesOutcome EssbasicClient::ChannelDescribeRoles(const ChannelDescribeRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeRolesResponse rsp = ChannelDescribeRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeRolesOutcome(rsp);
        else
            return ChannelDescribeRolesOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeRolesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeRolesAsync(const ChannelDescribeRolesRequest& request, const ChannelDescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeRolesRequest&;
    using Resp = ChannelDescribeRolesResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeRolesOutcomeCallable EssbasicClient::ChannelDescribeRolesCallable(const ChannelDescribeRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeRolesOutcome>>();
    ChannelDescribeRolesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeRolesRequest&,
        ChannelDescribeRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeSignFaceVideoOutcome EssbasicClient::ChannelDescribeSignFaceVideo(const ChannelDescribeSignFaceVideoRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeSignFaceVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeSignFaceVideoResponse rsp = ChannelDescribeSignFaceVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeSignFaceVideoOutcome(rsp);
        else
            return ChannelDescribeSignFaceVideoOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeSignFaceVideoOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeSignFaceVideoAsync(const ChannelDescribeSignFaceVideoRequest& request, const ChannelDescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeSignFaceVideoRequest&;
    using Resp = ChannelDescribeSignFaceVideoResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeSignFaceVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeSignFaceVideoOutcomeCallable EssbasicClient::ChannelDescribeSignFaceVideoCallable(const ChannelDescribeSignFaceVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeSignFaceVideoOutcome>>();
    ChannelDescribeSignFaceVideoAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeSignFaceVideoRequest&,
        ChannelDescribeSignFaceVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDescribeUserAutoSignStatusOutcome EssbasicClient::ChannelDescribeUserAutoSignStatus(const ChannelDescribeUserAutoSignStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeUserAutoSignStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeUserAutoSignStatusResponse rsp = ChannelDescribeUserAutoSignStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeUserAutoSignStatusOutcome(rsp);
        else
            return ChannelDescribeUserAutoSignStatusOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeUserAutoSignStatusOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeUserAutoSignStatusAsync(const ChannelDescribeUserAutoSignStatusRequest& request, const ChannelDescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDescribeUserAutoSignStatusRequest&;
    using Resp = ChannelDescribeUserAutoSignStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDescribeUserAutoSignStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDescribeUserAutoSignStatusOutcomeCallable EssbasicClient::ChannelDescribeUserAutoSignStatusCallable(const ChannelDescribeUserAutoSignStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDescribeUserAutoSignStatusOutcome>>();
    ChannelDescribeUserAutoSignStatusAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDescribeUserAutoSignStatusRequest&,
        ChannelDescribeUserAutoSignStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelDisableUserAutoSignOutcome EssbasicClient::ChannelDisableUserAutoSign(const ChannelDisableUserAutoSignRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDisableUserAutoSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDisableUserAutoSignResponse rsp = ChannelDisableUserAutoSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDisableUserAutoSignOutcome(rsp);
        else
            return ChannelDisableUserAutoSignOutcome(o.GetError());
    }
    else
    {
        return ChannelDisableUserAutoSignOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDisableUserAutoSignAsync(const ChannelDisableUserAutoSignRequest& request, const ChannelDisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelDisableUserAutoSignRequest&;
    using Resp = ChannelDisableUserAutoSignResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelDisableUserAutoSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelDisableUserAutoSignOutcomeCallable EssbasicClient::ChannelDisableUserAutoSignCallable(const ChannelDisableUserAutoSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelDisableUserAutoSignOutcome>>();
    ChannelDisableUserAutoSignAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelDisableUserAutoSignRequest&,
        ChannelDisableUserAutoSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelGetTaskResultApiOutcome EssbasicClient::ChannelGetTaskResultApi(const ChannelGetTaskResultApiRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelGetTaskResultApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelGetTaskResultApiResponse rsp = ChannelGetTaskResultApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelGetTaskResultApiOutcome(rsp);
        else
            return ChannelGetTaskResultApiOutcome(o.GetError());
    }
    else
    {
        return ChannelGetTaskResultApiOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelGetTaskResultApiAsync(const ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelGetTaskResultApiRequest&;
    using Resp = ChannelGetTaskResultApiResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelGetTaskResultApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelGetTaskResultApiOutcomeCallable EssbasicClient::ChannelGetTaskResultApiCallable(const ChannelGetTaskResultApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelGetTaskResultApiOutcome>>();
    ChannelGetTaskResultApiAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelGetTaskResultApiRequest&,
        ChannelGetTaskResultApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelModifyRoleOutcome EssbasicClient::ChannelModifyRole(const ChannelModifyRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelModifyRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelModifyRoleResponse rsp = ChannelModifyRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelModifyRoleOutcome(rsp);
        else
            return ChannelModifyRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelModifyRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelModifyRoleAsync(const ChannelModifyRoleRequest& request, const ChannelModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelModifyRoleRequest&;
    using Resp = ChannelModifyRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelModifyRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelModifyRoleOutcomeCallable EssbasicClient::ChannelModifyRoleCallable(const ChannelModifyRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelModifyRoleOutcome>>();
    ChannelModifyRoleAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelModifyRoleRequest&,
        ChannelModifyRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelRenewAutoSignLicenseOutcome EssbasicClient::ChannelRenewAutoSignLicense(const ChannelRenewAutoSignLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelRenewAutoSignLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelRenewAutoSignLicenseResponse rsp = ChannelRenewAutoSignLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelRenewAutoSignLicenseOutcome(rsp);
        else
            return ChannelRenewAutoSignLicenseOutcome(o.GetError());
    }
    else
    {
        return ChannelRenewAutoSignLicenseOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelRenewAutoSignLicenseAsync(const ChannelRenewAutoSignLicenseRequest& request, const ChannelRenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelRenewAutoSignLicenseRequest&;
    using Resp = ChannelRenewAutoSignLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelRenewAutoSignLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelRenewAutoSignLicenseOutcomeCallable EssbasicClient::ChannelRenewAutoSignLicenseCallable(const ChannelRenewAutoSignLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelRenewAutoSignLicenseOutcome>>();
    ChannelRenewAutoSignLicenseAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelRenewAutoSignLicenseRequest&,
        ChannelRenewAutoSignLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelUpdateSealStatusOutcome EssbasicClient::ChannelUpdateSealStatus(const ChannelUpdateSealStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelUpdateSealStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelUpdateSealStatusResponse rsp = ChannelUpdateSealStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelUpdateSealStatusOutcome(rsp);
        else
            return ChannelUpdateSealStatusOutcome(o.GetError());
    }
    else
    {
        return ChannelUpdateSealStatusOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelUpdateSealStatusAsync(const ChannelUpdateSealStatusRequest& request, const ChannelUpdateSealStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelUpdateSealStatusRequest&;
    using Resp = ChannelUpdateSealStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelUpdateSealStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelUpdateSealStatusOutcomeCallable EssbasicClient::ChannelUpdateSealStatusCallable(const ChannelUpdateSealStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelUpdateSealStatusOutcome>>();
    ChannelUpdateSealStatusAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelUpdateSealStatusRequest&,
        ChannelUpdateSealStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ChannelVerifyPdfOutcome EssbasicClient::ChannelVerifyPdf(const ChannelVerifyPdfRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelVerifyPdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelVerifyPdfResponse rsp = ChannelVerifyPdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelVerifyPdfOutcome(rsp);
        else
            return ChannelVerifyPdfOutcome(o.GetError());
    }
    else
    {
        return ChannelVerifyPdfOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelVerifyPdfAsync(const ChannelVerifyPdfRequest& request, const ChannelVerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChannelVerifyPdfRequest&;
    using Resp = ChannelVerifyPdfResponse;

    DoRequestAsync<Req, Resp>(
        "ChannelVerifyPdf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ChannelVerifyPdfOutcomeCallable EssbasicClient::ChannelVerifyPdfCallable(const ChannelVerifyPdfRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChannelVerifyPdfOutcome>>();
    ChannelVerifyPdfAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ChannelVerifyPdfRequest&,
        ChannelVerifyPdfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateBatchInitOrganizationUrlOutcome EssbasicClient::CreateBatchInitOrganizationUrl(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchInitOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchInitOrganizationUrlResponse rsp = CreateBatchInitOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchInitOrganizationUrlOutcome(rsp);
        else
            return CreateBatchInitOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchInitOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchInitOrganizationUrlAsync(const CreateBatchInitOrganizationUrlRequest& request, const CreateBatchInitOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchInitOrganizationUrlRequest&;
    using Resp = CreateBatchInitOrganizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchInitOrganizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateBatchInitOrganizationUrlOutcomeCallable EssbasicClient::CreateBatchInitOrganizationUrlCallable(const CreateBatchInitOrganizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchInitOrganizationUrlOutcome>>();
    CreateBatchInitOrganizationUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateBatchInitOrganizationUrlRequest&,
        CreateBatchInitOrganizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateBatchOrganizationAuthorizationUrlOutcome EssbasicClient::CreateBatchOrganizationAuthorizationUrl(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationAuthorizationUrlResponse rsp = CreateBatchOrganizationAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationAuthorizationUrlOutcome(rsp);
        else
            return CreateBatchOrganizationAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchOrganizationAuthorizationUrlAsync(const CreateBatchOrganizationAuthorizationUrlRequest& request, const CreateBatchOrganizationAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchOrganizationAuthorizationUrlRequest&;
    using Resp = CreateBatchOrganizationAuthorizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchOrganizationAuthorizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateBatchOrganizationAuthorizationUrlOutcomeCallable EssbasicClient::CreateBatchOrganizationAuthorizationUrlCallable(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchOrganizationAuthorizationUrlOutcome>>();
    CreateBatchOrganizationAuthorizationUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateBatchOrganizationAuthorizationUrlRequest&,
        CreateBatchOrganizationAuthorizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateBatchOrganizationRegistrationTasksOutcome EssbasicClient::CreateBatchOrganizationRegistrationTasks(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationRegistrationTasksResponse rsp = CreateBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return CreateBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchOrganizationRegistrationTasksAsync(const CreateBatchOrganizationRegistrationTasksRequest& request, const CreateBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchOrganizationRegistrationTasksRequest&;
    using Resp = CreateBatchOrganizationRegistrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchOrganizationRegistrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateBatchOrganizationRegistrationTasksOutcomeCallable EssbasicClient::CreateBatchOrganizationRegistrationTasksCallable(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchOrganizationRegistrationTasksOutcome>>();
    CreateBatchOrganizationRegistrationTasksAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateBatchOrganizationRegistrationTasksRequest&,
        CreateBatchOrganizationRegistrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateChannelFlowEvidenceReportOutcome EssbasicClient::CreateChannelFlowEvidenceReport(const CreateChannelFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelFlowEvidenceReportResponse rsp = CreateChannelFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelFlowEvidenceReportOutcome(rsp);
        else
            return CreateChannelFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return CreateChannelFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelFlowEvidenceReportAsync(const CreateChannelFlowEvidenceReportRequest& request, const CreateChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChannelFlowEvidenceReportRequest&;
    using Resp = CreateChannelFlowEvidenceReportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChannelFlowEvidenceReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateChannelFlowEvidenceReportOutcomeCallable EssbasicClient::CreateChannelFlowEvidenceReportCallable(const CreateChannelFlowEvidenceReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChannelFlowEvidenceReportOutcome>>();
    CreateChannelFlowEvidenceReportAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateChannelFlowEvidenceReportRequest&,
        CreateChannelFlowEvidenceReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateChannelOrganizationInfoChangeUrlOutcome EssbasicClient::CreateChannelOrganizationInfoChangeUrl(const CreateChannelOrganizationInfoChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelOrganizationInfoChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelOrganizationInfoChangeUrlResponse rsp = CreateChannelOrganizationInfoChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelOrganizationInfoChangeUrlOutcome(rsp);
        else
            return CreateChannelOrganizationInfoChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateChannelOrganizationInfoChangeUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelOrganizationInfoChangeUrlAsync(const CreateChannelOrganizationInfoChangeUrlRequest& request, const CreateChannelOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChannelOrganizationInfoChangeUrlRequest&;
    using Resp = CreateChannelOrganizationInfoChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChannelOrganizationInfoChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateChannelOrganizationInfoChangeUrlOutcomeCallable EssbasicClient::CreateChannelOrganizationInfoChangeUrlCallable(const CreateChannelOrganizationInfoChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChannelOrganizationInfoChangeUrlOutcome>>();
    CreateChannelOrganizationInfoChangeUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateChannelOrganizationInfoChangeUrlRequest&,
        CreateChannelOrganizationInfoChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateChannelSubOrganizationActiveOutcome EssbasicClient::CreateChannelSubOrganizationActive(const CreateChannelSubOrganizationActiveRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelSubOrganizationActive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelSubOrganizationActiveResponse rsp = CreateChannelSubOrganizationActiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelSubOrganizationActiveOutcome(rsp);
        else
            return CreateChannelSubOrganizationActiveOutcome(o.GetError());
    }
    else
    {
        return CreateChannelSubOrganizationActiveOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelSubOrganizationActiveAsync(const CreateChannelSubOrganizationActiveRequest& request, const CreateChannelSubOrganizationActiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChannelSubOrganizationActiveRequest&;
    using Resp = CreateChannelSubOrganizationActiveResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChannelSubOrganizationActive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateChannelSubOrganizationActiveOutcomeCallable EssbasicClient::CreateChannelSubOrganizationActiveCallable(const CreateChannelSubOrganizationActiveRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChannelSubOrganizationActiveOutcome>>();
    CreateChannelSubOrganizationActiveAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateChannelSubOrganizationActiveRequest&,
        CreateChannelSubOrganizationActiveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateCloseOrganizationUrlOutcome EssbasicClient::CreateCloseOrganizationUrl(const CreateCloseOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloseOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloseOrganizationUrlResponse rsp = CreateCloseOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloseOrganizationUrlOutcome(rsp);
        else
            return CreateCloseOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateCloseOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateCloseOrganizationUrlAsync(const CreateCloseOrganizationUrlRequest& request, const CreateCloseOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloseOrganizationUrlRequest&;
    using Resp = CreateCloseOrganizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloseOrganizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateCloseOrganizationUrlOutcomeCallable EssbasicClient::CreateCloseOrganizationUrlCallable(const CreateCloseOrganizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloseOrganizationUrlOutcome>>();
    CreateCloseOrganizationUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateCloseOrganizationUrlRequest&,
        CreateCloseOrganizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateConsoleLoginUrlOutcome EssbasicClient::CreateConsoleLoginUrl(const CreateConsoleLoginUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleLoginUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleLoginUrlResponse rsp = CreateConsoleLoginUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleLoginUrlOutcome(rsp);
        else
            return CreateConsoleLoginUrlOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleLoginUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateConsoleLoginUrlAsync(const CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsoleLoginUrlRequest&;
    using Resp = CreateConsoleLoginUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsoleLoginUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateConsoleLoginUrlOutcomeCallable EssbasicClient::CreateConsoleLoginUrlCallable(const CreateConsoleLoginUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsoleLoginUrlOutcome>>();
    CreateConsoleLoginUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateConsoleLoginUrlRequest&,
        CreateConsoleLoginUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateEmployeeChangeUrlOutcome EssbasicClient::CreateEmployeeChangeUrl(const CreateEmployeeChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeChangeUrlResponse rsp = CreateEmployeeChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeChangeUrlOutcome(rsp);
        else
            return CreateEmployeeChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeChangeUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateEmployeeChangeUrlAsync(const CreateEmployeeChangeUrlRequest& request, const CreateEmployeeChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmployeeChangeUrlRequest&;
    using Resp = CreateEmployeeChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmployeeChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateEmployeeChangeUrlOutcomeCallable EssbasicClient::CreateEmployeeChangeUrlCallable(const CreateEmployeeChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmployeeChangeUrlOutcome>>();
    CreateEmployeeChangeUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateEmployeeChangeUrlRequest&,
        CreateEmployeeChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateEmployeeQualificationSealQrCodeOutcome EssbasicClient::CreateEmployeeQualificationSealQrCode(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeQualificationSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeQualificationSealQrCodeResponse rsp = CreateEmployeeQualificationSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeQualificationSealQrCodeOutcome(rsp);
        else
            return CreateEmployeeQualificationSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeQualificationSealQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateEmployeeQualificationSealQrCodeAsync(const CreateEmployeeQualificationSealQrCodeRequest& request, const CreateEmployeeQualificationSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmployeeQualificationSealQrCodeRequest&;
    using Resp = CreateEmployeeQualificationSealQrCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmployeeQualificationSealQrCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateEmployeeQualificationSealQrCodeOutcomeCallable EssbasicClient::CreateEmployeeQualificationSealQrCodeCallable(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmployeeQualificationSealQrCodeOutcome>>();
    CreateEmployeeQualificationSealQrCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateEmployeeQualificationSealQrCodeRequest&,
        CreateEmployeeQualificationSealQrCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFlowBlockchainEvidenceUrlOutcome EssbasicClient::CreateFlowBlockchainEvidenceUrl(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowBlockchainEvidenceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowBlockchainEvidenceUrlResponse rsp = CreateFlowBlockchainEvidenceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowBlockchainEvidenceUrlOutcome(rsp);
        else
            return CreateFlowBlockchainEvidenceUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowBlockchainEvidenceUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowBlockchainEvidenceUrlAsync(const CreateFlowBlockchainEvidenceUrlRequest& request, const CreateFlowBlockchainEvidenceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowBlockchainEvidenceUrlRequest&;
    using Resp = CreateFlowBlockchainEvidenceUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowBlockchainEvidenceUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFlowBlockchainEvidenceUrlOutcomeCallable EssbasicClient::CreateFlowBlockchainEvidenceUrlCallable(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowBlockchainEvidenceUrlOutcome>>();
    CreateFlowBlockchainEvidenceUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFlowBlockchainEvidenceUrlRequest&,
        CreateFlowBlockchainEvidenceUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFlowForwardsOutcome EssbasicClient::CreateFlowForwards(const CreateFlowForwardsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowForwards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowForwardsResponse rsp = CreateFlowForwardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowForwardsOutcome(rsp);
        else
            return CreateFlowForwardsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowForwardsOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowForwardsAsync(const CreateFlowForwardsRequest& request, const CreateFlowForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowForwardsRequest&;
    using Resp = CreateFlowForwardsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowForwards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFlowForwardsOutcomeCallable EssbasicClient::CreateFlowForwardsCallable(const CreateFlowForwardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowForwardsOutcome>>();
    CreateFlowForwardsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFlowForwardsRequest&,
        CreateFlowForwardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFlowGroupSignReviewOutcome EssbasicClient::CreateFlowGroupSignReview(const CreateFlowGroupSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupSignReviewResponse rsp = CreateFlowGroupSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupSignReviewOutcome(rsp);
        else
            return CreateFlowGroupSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupSignReviewOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowGroupSignReviewAsync(const CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowGroupSignReviewRequest&;
    using Resp = CreateFlowGroupSignReviewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowGroupSignReview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFlowGroupSignReviewOutcomeCallable EssbasicClient::CreateFlowGroupSignReviewCallable(const CreateFlowGroupSignReviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowGroupSignReviewOutcome>>();
    CreateFlowGroupSignReviewAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFlowGroupSignReviewRequest&,
        CreateFlowGroupSignReviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFlowsByTemplatesOutcome EssbasicClient::CreateFlowsByTemplates(const CreateFlowsByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowsByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowsByTemplatesResponse rsp = CreateFlowsByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowsByTemplatesOutcome(rsp);
        else
            return CreateFlowsByTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowsByTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowsByTemplatesAsync(const CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowsByTemplatesRequest&;
    using Resp = CreateFlowsByTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowsByTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFlowsByTemplatesOutcomeCallable EssbasicClient::CreateFlowsByTemplatesCallable(const CreateFlowsByTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowsByTemplatesOutcome>>();
    CreateFlowsByTemplatesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFlowsByTemplatesRequest&,
        CreateFlowsByTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateLegalSealQrCodeOutcome EssbasicClient::CreateLegalSealQrCode(const CreateLegalSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLegalSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLegalSealQrCodeResponse rsp = CreateLegalSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLegalSealQrCodeOutcome(rsp);
        else
            return CreateLegalSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateLegalSealQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateLegalSealQrCodeAsync(const CreateLegalSealQrCodeRequest& request, const CreateLegalSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLegalSealQrCodeRequest&;
    using Resp = CreateLegalSealQrCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLegalSealQrCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateLegalSealQrCodeOutcomeCallable EssbasicClient::CreateLegalSealQrCodeCallable(const CreateLegalSealQrCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLegalSealQrCodeOutcome>>();
    CreateLegalSealQrCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateLegalSealQrCodeRequest&,
        CreateLegalSealQrCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateModifyAdminAuthorizationUrlOutcome EssbasicClient::CreateModifyAdminAuthorizationUrl(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyAdminAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyAdminAuthorizationUrlResponse rsp = CreateModifyAdminAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyAdminAuthorizationUrlOutcome(rsp);
        else
            return CreateModifyAdminAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateModifyAdminAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateModifyAdminAuthorizationUrlAsync(const CreateModifyAdminAuthorizationUrlRequest& request, const CreateModifyAdminAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModifyAdminAuthorizationUrlRequest&;
    using Resp = CreateModifyAdminAuthorizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModifyAdminAuthorizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateModifyAdminAuthorizationUrlOutcomeCallable EssbasicClient::CreateModifyAdminAuthorizationUrlCallable(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModifyAdminAuthorizationUrlOutcome>>();
    CreateModifyAdminAuthorizationUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateModifyAdminAuthorizationUrlRequest&,
        CreateModifyAdminAuthorizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateOrganizationAuthFileOutcome EssbasicClient::CreateOrganizationAuthFile(const CreateOrganizationAuthFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthFileResponse rsp = CreateOrganizationAuthFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthFileOutcome(rsp);
        else
            return CreateOrganizationAuthFileOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthFileOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateOrganizationAuthFileAsync(const CreateOrganizationAuthFileRequest& request, const CreateOrganizationAuthFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationAuthFileRequest&;
    using Resp = CreateOrganizationAuthFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationAuthFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateOrganizationAuthFileOutcomeCallable EssbasicClient::CreateOrganizationAuthFileCallable(const CreateOrganizationAuthFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationAuthFileOutcome>>();
    CreateOrganizationAuthFileAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateOrganizationAuthFileRequest&,
        CreateOrganizationAuthFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreatePartnerAutoSignAuthUrlOutcome EssbasicClient::CreatePartnerAutoSignAuthUrl(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartnerAutoSignAuthUrlResponse rsp = CreatePartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartnerAutoSignAuthUrlOutcome(rsp);
        else
            return CreatePartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreatePartnerAutoSignAuthUrlAsync(const CreatePartnerAutoSignAuthUrlRequest& request, const CreatePartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePartnerAutoSignAuthUrlRequest&;
    using Resp = CreatePartnerAutoSignAuthUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePartnerAutoSignAuthUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreatePartnerAutoSignAuthUrlOutcomeCallable EssbasicClient::CreatePartnerAutoSignAuthUrlCallable(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePartnerAutoSignAuthUrlOutcome>>();
    CreatePartnerAutoSignAuthUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreatePartnerAutoSignAuthUrlRequest&,
        CreatePartnerAutoSignAuthUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreatePersonAuthCertificateImageOutcome EssbasicClient::CreatePersonAuthCertificateImage(const CreatePersonAuthCertificateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonAuthCertificateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonAuthCertificateImageResponse rsp = CreatePersonAuthCertificateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonAuthCertificateImageOutcome(rsp);
        else
            return CreatePersonAuthCertificateImageOutcome(o.GetError());
    }
    else
    {
        return CreatePersonAuthCertificateImageOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreatePersonAuthCertificateImageAsync(const CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePersonAuthCertificateImageRequest&;
    using Resp = CreatePersonAuthCertificateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonAuthCertificateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreatePersonAuthCertificateImageOutcomeCallable EssbasicClient::CreatePersonAuthCertificateImageCallable(const CreatePersonAuthCertificateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonAuthCertificateImageOutcome>>();
    CreatePersonAuthCertificateImageAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreatePersonAuthCertificateImageRequest&,
        CreatePersonAuthCertificateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSealByImageOutcome EssbasicClient::CreateSealByImage(const CreateSealByImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSealByImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealByImageResponse rsp = CreateSealByImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealByImageOutcome(rsp);
        else
            return CreateSealByImageOutcome(o.GetError());
    }
    else
    {
        return CreateSealByImageOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSealByImageAsync(const CreateSealByImageRequest& request, const CreateSealByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSealByImageRequest&;
    using Resp = CreateSealByImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSealByImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSealByImageOutcomeCallable EssbasicClient::CreateSealByImageCallable(const CreateSealByImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSealByImageOutcome>>();
    CreateSealByImageAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSealByImageRequest&,
        CreateSealByImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSignUrlsOutcome EssbasicClient::CreateSignUrls(const CreateSignUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignUrlsResponse rsp = CreateSignUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignUrlsOutcome(rsp);
        else
            return CreateSignUrlsOutcome(o.GetError());
    }
    else
    {
        return CreateSignUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSignUrlsAsync(const CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSignUrlsRequest&;
    using Resp = CreateSignUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSignUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSignUrlsOutcomeCallable EssbasicClient::CreateSignUrlsCallable(const CreateSignUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSignUrlsOutcome>>();
    CreateSignUrlsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSignUrlsRequest&,
        CreateSignUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DeleteOrganizationAuthorizationsOutcome EssbasicClient::DeleteOrganizationAuthorizations(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationAuthorizationsResponse rsp = DeleteOrganizationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationAuthorizationsOutcome(rsp);
        else
            return DeleteOrganizationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationAuthorizationsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DeleteOrganizationAuthorizationsAsync(const DeleteOrganizationAuthorizationsRequest& request, const DeleteOrganizationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOrganizationAuthorizationsRequest&;
    using Resp = DeleteOrganizationAuthorizationsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationAuthorizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DeleteOrganizationAuthorizationsOutcomeCallable EssbasicClient::DeleteOrganizationAuthorizationsCallable(const DeleteOrganizationAuthorizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationAuthorizationsOutcome>>();
    DeleteOrganizationAuthorizationsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DeleteOrganizationAuthorizationsRequest&,
        DeleteOrganizationAuthorizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeBatchOrganizationRegistrationTasksOutcome EssbasicClient::DescribeBatchOrganizationRegistrationTasks(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationTasksResponse rsp = DescribeBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeBatchOrganizationRegistrationTasksAsync(const DescribeBatchOrganizationRegistrationTasksRequest& request, const DescribeBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOrganizationRegistrationTasksRequest&;
    using Resp = DescribeBatchOrganizationRegistrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOrganizationRegistrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeBatchOrganizationRegistrationTasksOutcomeCallable EssbasicClient::DescribeBatchOrganizationRegistrationTasksCallable(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOrganizationRegistrationTasksOutcome>>();
    DescribeBatchOrganizationRegistrationTasksAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeBatchOrganizationRegistrationTasksRequest&,
        DescribeBatchOrganizationRegistrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeBatchOrganizationRegistrationUrlsOutcome EssbasicClient::DescribeBatchOrganizationRegistrationUrls(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationUrlsResponse rsp = DescribeBatchOrganizationRegistrationUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationUrlsOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeBatchOrganizationRegistrationUrlsAsync(const DescribeBatchOrganizationRegistrationUrlsRequest& request, const DescribeBatchOrganizationRegistrationUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOrganizationRegistrationUrlsRequest&;
    using Resp = DescribeBatchOrganizationRegistrationUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOrganizationRegistrationUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeBatchOrganizationRegistrationUrlsOutcomeCallable EssbasicClient::DescribeBatchOrganizationRegistrationUrlsCallable(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOrganizationRegistrationUrlsOutcome>>();
    DescribeBatchOrganizationRegistrationUrlsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeBatchOrganizationRegistrationUrlsRequest&,
        DescribeBatchOrganizationRegistrationUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeCancelFlowsTaskOutcome EssbasicClient::DescribeCancelFlowsTask(const DescribeCancelFlowsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCancelFlowsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCancelFlowsTaskResponse rsp = DescribeCancelFlowsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCancelFlowsTaskOutcome(rsp);
        else
            return DescribeCancelFlowsTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCancelFlowsTaskOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCancelFlowsTaskAsync(const DescribeCancelFlowsTaskRequest& request, const DescribeCancelFlowsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCancelFlowsTaskRequest&;
    using Resp = DescribeCancelFlowsTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCancelFlowsTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeCancelFlowsTaskOutcomeCallable EssbasicClient::DescribeCancelFlowsTaskCallable(const DescribeCancelFlowsTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCancelFlowsTaskOutcome>>();
    DescribeCancelFlowsTaskAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeCancelFlowsTaskRequest&,
        DescribeCancelFlowsTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeChannelFlowEvidenceReportOutcome EssbasicClient::DescribeChannelFlowEvidenceReport(const DescribeChannelFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelFlowEvidenceReportResponse rsp = DescribeChannelFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelFlowEvidenceReportOutcome(rsp);
        else
            return DescribeChannelFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelFlowEvidenceReportAsync(const DescribeChannelFlowEvidenceReportRequest& request, const DescribeChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelFlowEvidenceReportRequest&;
    using Resp = DescribeChannelFlowEvidenceReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelFlowEvidenceReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeChannelFlowEvidenceReportOutcomeCallable EssbasicClient::DescribeChannelFlowEvidenceReportCallable(const DescribeChannelFlowEvidenceReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelFlowEvidenceReportOutcome>>();
    DescribeChannelFlowEvidenceReportAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeChannelFlowEvidenceReportRequest&,
        DescribeChannelFlowEvidenceReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeChannelOrganizationsOutcome EssbasicClient::DescribeChannelOrganizations(const DescribeChannelOrganizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelOrganizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelOrganizationsResponse rsp = DescribeChannelOrganizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelOrganizationsOutcome(rsp);
        else
            return DescribeChannelOrganizationsOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelOrganizationsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelOrganizationsAsync(const DescribeChannelOrganizationsRequest& request, const DescribeChannelOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelOrganizationsRequest&;
    using Resp = DescribeChannelOrganizationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelOrganizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeChannelOrganizationsOutcomeCallable EssbasicClient::DescribeChannelOrganizationsCallable(const DescribeChannelOrganizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelOrganizationsOutcome>>();
    DescribeChannelOrganizationsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeChannelOrganizationsRequest&,
        DescribeChannelOrganizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeChannelSealPolicyWorkflowUrlOutcome EssbasicClient::DescribeChannelSealPolicyWorkflowUrl(const DescribeChannelSealPolicyWorkflowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelSealPolicyWorkflowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelSealPolicyWorkflowUrlResponse rsp = DescribeChannelSealPolicyWorkflowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelSealPolicyWorkflowUrlOutcome(rsp);
        else
            return DescribeChannelSealPolicyWorkflowUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelSealPolicyWorkflowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelSealPolicyWorkflowUrlAsync(const DescribeChannelSealPolicyWorkflowUrlRequest& request, const DescribeChannelSealPolicyWorkflowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelSealPolicyWorkflowUrlRequest&;
    using Resp = DescribeChannelSealPolicyWorkflowUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelSealPolicyWorkflowUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeChannelSealPolicyWorkflowUrlOutcomeCallable EssbasicClient::DescribeChannelSealPolicyWorkflowUrlCallable(const DescribeChannelSealPolicyWorkflowUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelSealPolicyWorkflowUrlOutcome>>();
    DescribeChannelSealPolicyWorkflowUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeChannelSealPolicyWorkflowUrlRequest&,
        DescribeChannelSealPolicyWorkflowUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeExtendedServiceAuthDetailOutcome EssbasicClient::DescribeExtendedServiceAuthDetail(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthDetailResponse rsp = DescribeExtendedServiceAuthDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthDetailOutcome(rsp);
        else
            return DescribeExtendedServiceAuthDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeExtendedServiceAuthDetailAsync(const DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendedServiceAuthDetailRequest&;
    using Resp = DescribeExtendedServiceAuthDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendedServiceAuthDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeExtendedServiceAuthDetailOutcomeCallable EssbasicClient::DescribeExtendedServiceAuthDetailCallable(const DescribeExtendedServiceAuthDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendedServiceAuthDetailOutcome>>();
    DescribeExtendedServiceAuthDetailAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeExtendedServiceAuthDetailRequest&,
        DescribeExtendedServiceAuthDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeExtendedServiceAuthInfoOutcome EssbasicClient::DescribeExtendedServiceAuthInfo(const DescribeExtendedServiceAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthInfoResponse rsp = DescribeExtendedServiceAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthInfoOutcome(rsp);
        else
            return DescribeExtendedServiceAuthInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthInfoOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeExtendedServiceAuthInfoAsync(const DescribeExtendedServiceAuthInfoRequest& request, const DescribeExtendedServiceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendedServiceAuthInfoRequest&;
    using Resp = DescribeExtendedServiceAuthInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendedServiceAuthInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeExtendedServiceAuthInfoOutcomeCallable EssbasicClient::DescribeExtendedServiceAuthInfoCallable(const DescribeExtendedServiceAuthInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendedServiceAuthInfoOutcome>>();
    DescribeExtendedServiceAuthInfoAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeExtendedServiceAuthInfoRequest&,
        DescribeExtendedServiceAuthInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFlowDetailInfoOutcome EssbasicClient::DescribeFlowDetailInfo(const DescribeFlowDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowDetailInfoResponse rsp = DescribeFlowDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowDetailInfoOutcome(rsp);
        else
            return DescribeFlowDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowDetailInfoOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFlowDetailInfoAsync(const DescribeFlowDetailInfoRequest& request, const DescribeFlowDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowDetailInfoRequest&;
    using Resp = DescribeFlowDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFlowDetailInfoOutcomeCallable EssbasicClient::DescribeFlowDetailInfoCallable(const DescribeFlowDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowDetailInfoOutcome>>();
    DescribeFlowDetailInfoAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFlowDetailInfoRequest&,
        DescribeFlowDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcome EssbasicClient::DescribeResourceUrlsByFlows(const DescribeResourceUrlsByFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUrlsByFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUrlsByFlowsResponse rsp = DescribeResourceUrlsByFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUrlsByFlowsOutcome(rsp);
        else
            return DescribeResourceUrlsByFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUrlsByFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeResourceUrlsByFlowsAsync(const DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceUrlsByFlowsRequest&;
    using Resp = DescribeResourceUrlsByFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceUrlsByFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcomeCallable EssbasicClient::DescribeResourceUrlsByFlowsCallable(const DescribeResourceUrlsByFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceUrlsByFlowsOutcome>>();
    DescribeResourceUrlsByFlowsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeResourceUrlsByFlowsRequest&,
        DescribeResourceUrlsByFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeTemplatesOutcome EssbasicClient::DescribeTemplates(const DescribeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplatesResponse rsp = DescribeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplatesOutcome(rsp);
        else
            return DescribeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplatesRequest&;
    using Resp = DescribeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeTemplatesOutcomeCallable EssbasicClient::DescribeTemplatesCallable(const DescribeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplatesOutcome>>();
    DescribeTemplatesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeTemplatesRequest&,
        DescribeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeUsageOutcome EssbasicClient::DescribeUsage(const DescribeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageResponse rsp = DescribeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageOutcome(rsp);
        else
            return DescribeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUsageAsync(const DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageRequest&;
    using Resp = DescribeUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeUsageOutcomeCallable EssbasicClient::DescribeUsageCallable(const DescribeUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageOutcome>>();
    DescribeUsageAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeUsageRequest&,
        DescribeUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeUserFlowTypeOutcome EssbasicClient::DescribeUserFlowType(const DescribeUserFlowTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserFlowType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserFlowTypeResponse rsp = DescribeUserFlowTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserFlowTypeOutcome(rsp);
        else
            return DescribeUserFlowTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserFlowTypeOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUserFlowTypeAsync(const DescribeUserFlowTypeRequest& request, const DescribeUserFlowTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserFlowTypeRequest&;
    using Resp = DescribeUserFlowTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserFlowType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeUserFlowTypeOutcomeCallable EssbasicClient::DescribeUserFlowTypeCallable(const DescribeUserFlowTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserFlowTypeOutcome>>();
    DescribeUserFlowTypeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeUserFlowTypeRequest&,
        DescribeUserFlowTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::GetDownloadFlowUrlOutcome EssbasicClient::GetDownloadFlowUrl(const GetDownloadFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetDownloadFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDownloadFlowUrlResponse rsp = GetDownloadFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDownloadFlowUrlOutcome(rsp);
        else
            return GetDownloadFlowUrlOutcome(o.GetError());
    }
    else
    {
        return GetDownloadFlowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::GetDownloadFlowUrlAsync(const GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDownloadFlowUrlRequest&;
    using Resp = GetDownloadFlowUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GetDownloadFlowUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::GetDownloadFlowUrlOutcomeCallable EssbasicClient::GetDownloadFlowUrlCallable(const GetDownloadFlowUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDownloadFlowUrlOutcome>>();
    GetDownloadFlowUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const GetDownloadFlowUrlRequest&,
        GetDownloadFlowUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyExtendedServiceOutcome EssbasicClient::ModifyExtendedService(const ModifyExtendedServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExtendedService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExtendedServiceResponse rsp = ModifyExtendedServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExtendedServiceOutcome(rsp);
        else
            return ModifyExtendedServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyExtendedServiceOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyExtendedServiceAsync(const ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyExtendedServiceRequest&;
    using Resp = ModifyExtendedServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyExtendedService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyExtendedServiceOutcomeCallable EssbasicClient::ModifyExtendedServiceCallable(const ModifyExtendedServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyExtendedServiceOutcome>>();
    ModifyExtendedServiceAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyExtendedServiceRequest&,
        ModifyExtendedServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyFlowDeadlineOutcome EssbasicClient::ModifyFlowDeadline(const ModifyFlowDeadlineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowDeadline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowDeadlineResponse rsp = ModifyFlowDeadlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowDeadlineOutcome(rsp);
        else
            return ModifyFlowDeadlineOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowDeadlineOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyFlowDeadlineAsync(const ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlowDeadlineRequest&;
    using Resp = ModifyFlowDeadlineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlowDeadline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyFlowDeadlineOutcomeCallable EssbasicClient::ModifyFlowDeadlineCallable(const ModifyFlowDeadlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlowDeadlineOutcome>>();
    ModifyFlowDeadlineAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyFlowDeadlineRequest&,
        ModifyFlowDeadlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyPartnerAutoSignAuthUrlOutcome EssbasicClient::ModifyPartnerAutoSignAuthUrl(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartnerAutoSignAuthUrlResponse rsp = ModifyPartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartnerAutoSignAuthUrlOutcome(rsp);
        else
            return ModifyPartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyPartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyPartnerAutoSignAuthUrlAsync(const ModifyPartnerAutoSignAuthUrlRequest& request, const ModifyPartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPartnerAutoSignAuthUrlRequest&;
    using Resp = ModifyPartnerAutoSignAuthUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPartnerAutoSignAuthUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyPartnerAutoSignAuthUrlOutcomeCallable EssbasicClient::ModifyPartnerAutoSignAuthUrlCallable(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPartnerAutoSignAuthUrlOutcome>>();
    ModifyPartnerAutoSignAuthUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyPartnerAutoSignAuthUrlRequest&,
        ModifyPartnerAutoSignAuthUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::OperateChannelTemplateOutcome EssbasicClient::OperateChannelTemplate(const OperateChannelTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateChannelTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateChannelTemplateResponse rsp = OperateChannelTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateChannelTemplateOutcome(rsp);
        else
            return OperateChannelTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateChannelTemplateOutcome(outcome.GetError());
    }
}

void EssbasicClient::OperateChannelTemplateAsync(const OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateChannelTemplateRequest&;
    using Resp = OperateChannelTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "OperateChannelTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::OperateChannelTemplateOutcomeCallable EssbasicClient::OperateChannelTemplateCallable(const OperateChannelTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateChannelTemplateOutcome>>();
    OperateChannelTemplateAsync(
    request,
    [prom](
        const EssbasicClient*,
        const OperateChannelTemplateRequest&,
        OperateChannelTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::OperateTemplateOutcome EssbasicClient::OperateTemplate(const OperateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateTemplateResponse rsp = OperateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateTemplateOutcome(rsp);
        else
            return OperateTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateTemplateOutcome(outcome.GetError());
    }
}

void EssbasicClient::OperateTemplateAsync(const OperateTemplateRequest& request, const OperateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateTemplateRequest&;
    using Resp = OperateTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "OperateTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::OperateTemplateOutcomeCallable EssbasicClient::OperateTemplateCallable(const OperateTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateTemplateOutcome>>();
    OperateTemplateAsync(
    request,
    [prom](
        const EssbasicClient*,
        const OperateTemplateRequest&,
        OperateTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::PrepareFlowsOutcome EssbasicClient::PrepareFlows(const PrepareFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "PrepareFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PrepareFlowsResponse rsp = PrepareFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PrepareFlowsOutcome(rsp);
        else
            return PrepareFlowsOutcome(o.GetError());
    }
    else
    {
        return PrepareFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::PrepareFlowsAsync(const PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PrepareFlowsRequest&;
    using Resp = PrepareFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "PrepareFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::PrepareFlowsOutcomeCallable EssbasicClient::PrepareFlowsCallable(const PrepareFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PrepareFlowsOutcome>>();
    PrepareFlowsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const PrepareFlowsRequest&,
        PrepareFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SyncProxyOrganizationOutcome EssbasicClient::SyncProxyOrganization(const SyncProxyOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationResponse rsp = SyncProxyOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOutcome(rsp);
        else
            return SyncProxyOrganizationOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationAsync(const SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncProxyOrganizationRequest&;
    using Resp = SyncProxyOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "SyncProxyOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SyncProxyOrganizationOutcomeCallable EssbasicClient::SyncProxyOrganizationCallable(const SyncProxyOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncProxyOrganizationOutcome>>();
    SyncProxyOrganizationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SyncProxyOrganizationRequest&,
        SyncProxyOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcome EssbasicClient::SyncProxyOrganizationOperators(const SyncProxyOrganizationOperatorsRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganizationOperators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationOperatorsResponse rsp = SyncProxyOrganizationOperatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOperatorsOutcome(rsp);
        else
            return SyncProxyOrganizationOperatorsOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOperatorsOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationOperatorsAsync(const SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncProxyOrganizationOperatorsRequest&;
    using Resp = SyncProxyOrganizationOperatorsResponse;

    DoRequestAsync<Req, Resp>(
        "SyncProxyOrganizationOperators", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcomeCallable EssbasicClient::SyncProxyOrganizationOperatorsCallable(const SyncProxyOrganizationOperatorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncProxyOrganizationOperatorsOutcome>>();
    SyncProxyOrganizationOperatorsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SyncProxyOrganizationOperatorsRequest&,
        SyncProxyOrganizationOperatorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::UploadFilesOutcome EssbasicClient::UploadFiles(const UploadFilesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesResponse rsp = UploadFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesOutcome(rsp);
        else
            return UploadFilesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFilesRequest&;
    using Resp = UploadFilesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::UploadFilesOutcomeCallable EssbasicClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFilesOutcome>>();
    UploadFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const UploadFilesRequest&,
        UploadFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

