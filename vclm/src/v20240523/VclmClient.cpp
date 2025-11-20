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

#include <tencentcloud/vclm/v20240523/VclmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vclm::V20240523;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-23";
    const string ENDPOINT = "vclm.tencentcloudapi.com";
}

VclmClient::VclmClient(const Credential &credential, const string &region) :
    VclmClient(credential, region, ClientProfile())
{
}

VclmClient::VclmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VclmClient::CheckAnimateImageJobOutcome VclmClient::CheckAnimateImageJob(const CheckAnimateImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAnimateImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAnimateImageJobResponse rsp = CheckAnimateImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAnimateImageJobOutcome(rsp);
        else
            return CheckAnimateImageJobOutcome(o.GetError());
    }
    else
    {
        return CheckAnimateImageJobOutcome(outcome.GetError());
    }
}

void VclmClient::CheckAnimateImageJobAsync(const CheckAnimateImageJobRequest& request, const CheckAnimateImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAnimateImageJobRequest&;
    using Resp = CheckAnimateImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAnimateImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::CheckAnimateImageJobOutcomeCallable VclmClient::CheckAnimateImageJobCallable(const CheckAnimateImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAnimateImageJobOutcome>>();
    CheckAnimateImageJobAsync(
    request,
    [prom](
        const VclmClient*,
        const CheckAnimateImageJobRequest&,
        CheckAnimateImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeImageAnimateJobOutcome VclmClient::DescribeImageAnimateJob(const DescribeImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAnimateJobResponse rsp = DescribeImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAnimateJobOutcome(rsp);
        else
            return DescribeImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageAnimateJobAsync(const DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAnimateJobRequest&;
    using Resp = DescribeImageAnimateJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAnimateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeImageAnimateJobOutcomeCallable VclmClient::DescribeImageAnimateJobCallable(const DescribeImageAnimateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAnimateJobOutcome>>();
    DescribeImageAnimateJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeImageAnimateJobRequest&,
        DescribeImageAnimateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeImageToVideoGeneralJobOutcome VclmClient::DescribeImageToVideoGeneralJob(const DescribeImageToVideoGeneralJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageToVideoGeneralJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageToVideoGeneralJobResponse rsp = DescribeImageToVideoGeneralJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageToVideoGeneralJobOutcome(rsp);
        else
            return DescribeImageToVideoGeneralJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageToVideoGeneralJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageToVideoGeneralJobAsync(const DescribeImageToVideoGeneralJobRequest& request, const DescribeImageToVideoGeneralJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageToVideoGeneralJobRequest&;
    using Resp = DescribeImageToVideoGeneralJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageToVideoGeneralJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeImageToVideoGeneralJobOutcomeCallable VclmClient::DescribeImageToVideoGeneralJobCallable(const DescribeImageToVideoGeneralJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageToVideoGeneralJobOutcome>>();
    DescribeImageToVideoGeneralJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeImageToVideoGeneralJobRequest&,
        DescribeImageToVideoGeneralJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribePortraitSingJobOutcome VclmClient::DescribePortraitSingJob(const DescribePortraitSingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePortraitSingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePortraitSingJobResponse rsp = DescribePortraitSingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePortraitSingJobOutcome(rsp);
        else
            return DescribePortraitSingJobOutcome(o.GetError());
    }
    else
    {
        return DescribePortraitSingJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribePortraitSingJobAsync(const DescribePortraitSingJobRequest& request, const DescribePortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePortraitSingJobRequest&;
    using Resp = DescribePortraitSingJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePortraitSingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribePortraitSingJobOutcomeCallable VclmClient::DescribePortraitSingJobCallable(const DescribePortraitSingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePortraitSingJobOutcome>>();
    DescribePortraitSingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribePortraitSingJobRequest&,
        DescribePortraitSingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeTemplateToVideoJobOutcome VclmClient::DescribeTemplateToVideoJob(const DescribeTemplateToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateToVideoJobResponse rsp = DescribeTemplateToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateToVideoJobOutcome(rsp);
        else
            return DescribeTemplateToVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeTemplateToVideoJobAsync(const DescribeTemplateToVideoJobRequest& request, const DescribeTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplateToVideoJobRequest&;
    using Resp = DescribeTemplateToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplateToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeTemplateToVideoJobOutcomeCallable VclmClient::DescribeTemplateToVideoJobCallable(const DescribeTemplateToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplateToVideoJobOutcome>>();
    DescribeTemplateToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeTemplateToVideoJobRequest&,
        DescribeTemplateToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeVideoStylizationJobOutcome VclmClient::DescribeVideoStylizationJob(const DescribeVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoStylizationJobResponse rsp = DescribeVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoStylizationJobOutcome(rsp);
        else
            return DescribeVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoStylizationJobAsync(const DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoStylizationJobRequest&;
    using Resp = DescribeVideoStylizationJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoStylizationJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoStylizationJobOutcomeCallable VclmClient::DescribeVideoStylizationJobCallable(const DescribeVideoStylizationJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoStylizationJobOutcome>>();
    DescribeVideoStylizationJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoStylizationJobRequest&,
        DescribeVideoStylizationJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitImageAnimateJobOutcome VclmClient::SubmitImageAnimateJob(const SubmitImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageAnimateJobResponse rsp = SubmitImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageAnimateJobOutcome(rsp);
        else
            return SubmitImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageAnimateJobAsync(const SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitImageAnimateJobRequest&;
    using Resp = SubmitImageAnimateJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitImageAnimateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitImageAnimateJobOutcomeCallable VclmClient::SubmitImageAnimateJobCallable(const SubmitImageAnimateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitImageAnimateJobOutcome>>();
    SubmitImageAnimateJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitImageAnimateJobRequest&,
        SubmitImageAnimateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitImageToVideoGeneralJobOutcome VclmClient::SubmitImageToVideoGeneralJob(const SubmitImageToVideoGeneralJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageToVideoGeneralJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageToVideoGeneralJobResponse rsp = SubmitImageToVideoGeneralJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageToVideoGeneralJobOutcome(rsp);
        else
            return SubmitImageToVideoGeneralJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageToVideoGeneralJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageToVideoGeneralJobAsync(const SubmitImageToVideoGeneralJobRequest& request, const SubmitImageToVideoGeneralJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitImageToVideoGeneralJobRequest&;
    using Resp = SubmitImageToVideoGeneralJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitImageToVideoGeneralJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitImageToVideoGeneralJobOutcomeCallable VclmClient::SubmitImageToVideoGeneralJobCallable(const SubmitImageToVideoGeneralJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitImageToVideoGeneralJobOutcome>>();
    SubmitImageToVideoGeneralJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitImageToVideoGeneralJobRequest&,
        SubmitImageToVideoGeneralJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitPortraitSingJobOutcome VclmClient::SubmitPortraitSingJob(const SubmitPortraitSingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitPortraitSingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitPortraitSingJobResponse rsp = SubmitPortraitSingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitPortraitSingJobOutcome(rsp);
        else
            return SubmitPortraitSingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitPortraitSingJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitPortraitSingJobAsync(const SubmitPortraitSingJobRequest& request, const SubmitPortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitPortraitSingJobRequest&;
    using Resp = SubmitPortraitSingJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitPortraitSingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitPortraitSingJobOutcomeCallable VclmClient::SubmitPortraitSingJobCallable(const SubmitPortraitSingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitPortraitSingJobOutcome>>();
    SubmitPortraitSingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitPortraitSingJobRequest&,
        SubmitPortraitSingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitTemplateToVideoJobOutcome VclmClient::SubmitTemplateToVideoJob(const SubmitTemplateToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTemplateToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTemplateToVideoJobResponse rsp = SubmitTemplateToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTemplateToVideoJobOutcome(rsp);
        else
            return SubmitTemplateToVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTemplateToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitTemplateToVideoJobAsync(const SubmitTemplateToVideoJobRequest& request, const SubmitTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTemplateToVideoJobRequest&;
    using Resp = SubmitTemplateToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTemplateToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitTemplateToVideoJobOutcomeCallable VclmClient::SubmitTemplateToVideoJobCallable(const SubmitTemplateToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTemplateToVideoJobOutcome>>();
    SubmitTemplateToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitTemplateToVideoJobRequest&,
        SubmitTemplateToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitVideoStylizationJobOutcome VclmClient::SubmitVideoStylizationJob(const SubmitVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoStylizationJobResponse rsp = SubmitVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoStylizationJobOutcome(rsp);
        else
            return SubmitVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoStylizationJobAsync(const SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoStylizationJobRequest&;
    using Resp = SubmitVideoStylizationJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoStylizationJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoStylizationJobOutcomeCallable VclmClient::SubmitVideoStylizationJobCallable(const SubmitVideoStylizationJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoStylizationJobOutcome>>();
    SubmitVideoStylizationJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoStylizationJobRequest&,
        SubmitVideoStylizationJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

