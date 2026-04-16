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

VclmClient::CreateAigcElementOutcome VclmClient::CreateAigcElement(const CreateAigcElementRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAigcElement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAigcElementResponse rsp = CreateAigcElementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAigcElementOutcome(rsp);
        else
            return CreateAigcElementOutcome(o.GetError());
    }
    else
    {
        return CreateAigcElementOutcome(outcome.GetError());
    }
}

void VclmClient::CreateAigcElementAsync(const CreateAigcElementRequest& request, const CreateAigcElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAigcElementRequest&;
    using Resp = CreateAigcElementResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAigcElement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::CreateAigcElementOutcomeCallable VclmClient::CreateAigcElementCallable(const CreateAigcElementRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAigcElementOutcome>>();
    CreateAigcElementAsync(
    request,
    [prom](
        const VclmClient*,
        const CreateAigcElementRequest&,
        CreateAigcElementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DeleteAigcElementOutcome VclmClient::DeleteAigcElement(const DeleteAigcElementRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAigcElement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAigcElementResponse rsp = DeleteAigcElementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAigcElementOutcome(rsp);
        else
            return DeleteAigcElementOutcome(o.GetError());
    }
    else
    {
        return DeleteAigcElementOutcome(outcome.GetError());
    }
}

void VclmClient::DeleteAigcElementAsync(const DeleteAigcElementRequest& request, const DeleteAigcElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAigcElementRequest&;
    using Resp = DeleteAigcElementResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAigcElement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DeleteAigcElementOutcomeCallable VclmClient::DeleteAigcElementCallable(const DeleteAigcElementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAigcElementOutcome>>();
    DeleteAigcElementAsync(
    request,
    [prom](
        const VclmClient*,
        const DeleteAigcElementRequest&,
        DeleteAigcElementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeAigcElementOutcome VclmClient::DescribeAigcElement(const DescribeAigcElementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAigcElement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAigcElementResponse rsp = DescribeAigcElementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAigcElementOutcome(rsp);
        else
            return DescribeAigcElementOutcome(o.GetError());
    }
    else
    {
        return DescribeAigcElementOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeAigcElementAsync(const DescribeAigcElementRequest& request, const DescribeAigcElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAigcElementRequest&;
    using Resp = DescribeAigcElementResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAigcElement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeAigcElementOutcomeCallable VclmClient::DescribeAigcElementCallable(const DescribeAigcElementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAigcElementOutcome>>();
    DescribeAigcElementAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeAigcElementRequest&,
        DescribeAigcElementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeAigcVideoJobOutcome VclmClient::DescribeAigcVideoJob(const DescribeAigcVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAigcVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAigcVideoJobResponse rsp = DescribeAigcVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAigcVideoJobOutcome(rsp);
        else
            return DescribeAigcVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeAigcVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeAigcVideoJobAsync(const DescribeAigcVideoJobRequest& request, const DescribeAigcVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAigcVideoJobRequest&;
    using Resp = DescribeAigcVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAigcVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeAigcVideoJobOutcomeCallable VclmClient::DescribeAigcVideoJobCallable(const DescribeAigcVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAigcVideoJobOutcome>>();
    DescribeAigcVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeAigcVideoJobRequest&,
        DescribeAigcVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeHumanActorJobOutcome VclmClient::DescribeHumanActorJob(const DescribeHumanActorJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHumanActorJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHumanActorJobResponse rsp = DescribeHumanActorJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHumanActorJobOutcome(rsp);
        else
            return DescribeHumanActorJobOutcome(o.GetError());
    }
    else
    {
        return DescribeHumanActorJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeHumanActorJobAsync(const DescribeHumanActorJobRequest& request, const DescribeHumanActorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHumanActorJobRequest&;
    using Resp = DescribeHumanActorJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHumanActorJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeHumanActorJobOutcomeCallable VclmClient::DescribeHumanActorJobCallable(const DescribeHumanActorJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHumanActorJobOutcome>>();
    DescribeHumanActorJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeHumanActorJobRequest&,
        DescribeHumanActorJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeHunyuanToVideoJobOutcome VclmClient::DescribeHunyuanToVideoJob(const DescribeHunyuanToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHunyuanToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHunyuanToVideoJobResponse rsp = DescribeHunyuanToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHunyuanToVideoJobOutcome(rsp);
        else
            return DescribeHunyuanToVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeHunyuanToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeHunyuanToVideoJobAsync(const DescribeHunyuanToVideoJobRequest& request, const DescribeHunyuanToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHunyuanToVideoJobRequest&;
    using Resp = DescribeHunyuanToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHunyuanToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeHunyuanToVideoJobOutcomeCallable VclmClient::DescribeHunyuanToVideoJobCallable(const DescribeHunyuanToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHunyuanToVideoJobOutcome>>();
    DescribeHunyuanToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeHunyuanToVideoJobRequest&,
        DescribeHunyuanToVideoJobOutcome resp,
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

VclmClient::DescribeImageToVideoJobOutcome VclmClient::DescribeImageToVideoJob(const DescribeImageToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageToVideoJobResponse rsp = DescribeImageToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageToVideoJobOutcome(rsp);
        else
            return DescribeImageToVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageToVideoJobAsync(const DescribeImageToVideoJobRequest& request, const DescribeImageToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageToVideoJobRequest&;
    using Resp = DescribeImageToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeImageToVideoJobOutcomeCallable VclmClient::DescribeImageToVideoJobCallable(const DescribeImageToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageToVideoJobOutcome>>();
    DescribeImageToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeImageToVideoJobRequest&,
        DescribeImageToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeImageToVideoViduJobOutcome VclmClient::DescribeImageToVideoViduJob(const DescribeImageToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageToVideoViduJobResponse rsp = DescribeImageToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageToVideoViduJobOutcome(rsp);
        else
            return DescribeImageToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageToVideoViduJobAsync(const DescribeImageToVideoViduJobRequest& request, const DescribeImageToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageToVideoViduJobRequest&;
    using Resp = DescribeImageToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeImageToVideoViduJobOutcomeCallable VclmClient::DescribeImageToVideoViduJobCallable(const DescribeImageToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageToVideoViduJobOutcome>>();
    DescribeImageToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeImageToVideoViduJobRequest&,
        DescribeImageToVideoViduJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeMotionControlKlingJobOutcome VclmClient::DescribeMotionControlKlingJob(const DescribeMotionControlKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMotionControlKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMotionControlKlingJobResponse rsp = DescribeMotionControlKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMotionControlKlingJobOutcome(rsp);
        else
            return DescribeMotionControlKlingJobOutcome(o.GetError());
    }
    else
    {
        return DescribeMotionControlKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeMotionControlKlingJobAsync(const DescribeMotionControlKlingJobRequest& request, const DescribeMotionControlKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMotionControlKlingJobRequest&;
    using Resp = DescribeMotionControlKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMotionControlKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeMotionControlKlingJobOutcomeCallable VclmClient::DescribeMotionControlKlingJobCallable(const DescribeMotionControlKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMotionControlKlingJobOutcome>>();
    DescribeMotionControlKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeMotionControlKlingJobRequest&,
        DescribeMotionControlKlingJobOutcome resp,
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

VclmClient::DescribeReferenceToVideoViduJobOutcome VclmClient::DescribeReferenceToVideoViduJob(const DescribeReferenceToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReferenceToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReferenceToVideoViduJobResponse rsp = DescribeReferenceToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReferenceToVideoViduJobOutcome(rsp);
        else
            return DescribeReferenceToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return DescribeReferenceToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeReferenceToVideoViduJobAsync(const DescribeReferenceToVideoViduJobRequest& request, const DescribeReferenceToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReferenceToVideoViduJobRequest&;
    using Resp = DescribeReferenceToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReferenceToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeReferenceToVideoViduJobOutcomeCallable VclmClient::DescribeReferenceToVideoViduJobCallable(const DescribeReferenceToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReferenceToVideoViduJobOutcome>>();
    DescribeReferenceToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeReferenceToVideoViduJobRequest&,
        DescribeReferenceToVideoViduJobOutcome resp,
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

VclmClient::DescribeTextToVideoJobOutcome VclmClient::DescribeTextToVideoJob(const DescribeTextToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextToVideoJobResponse rsp = DescribeTextToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextToVideoJobOutcome(rsp);
        else
            return DescribeTextToVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTextToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeTextToVideoJobAsync(const DescribeTextToVideoJobRequest& request, const DescribeTextToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTextToVideoJobRequest&;
    using Resp = DescribeTextToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTextToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeTextToVideoJobOutcomeCallable VclmClient::DescribeTextToVideoJobCallable(const DescribeTextToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTextToVideoJobOutcome>>();
    DescribeTextToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeTextToVideoJobRequest&,
        DescribeTextToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeTextToVideoViduJobOutcome VclmClient::DescribeTextToVideoViduJob(const DescribeTextToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextToVideoViduJobResponse rsp = DescribeTextToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextToVideoViduJobOutcome(rsp);
        else
            return DescribeTextToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTextToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeTextToVideoViduJobAsync(const DescribeTextToVideoViduJobRequest& request, const DescribeTextToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTextToVideoViduJobRequest&;
    using Resp = DescribeTextToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTextToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeTextToVideoViduJobOutcomeCallable VclmClient::DescribeTextToVideoViduJobCallable(const DescribeTextToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTextToVideoViduJobOutcome>>();
    DescribeTextToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeTextToVideoViduJobRequest&,
        DescribeTextToVideoViduJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeVideoEditJobOutcome VclmClient::DescribeVideoEditJob(const DescribeVideoEditJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoEditJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoEditJobResponse rsp = DescribeVideoEditJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoEditJobOutcome(rsp);
        else
            return DescribeVideoEditJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoEditJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoEditJobAsync(const DescribeVideoEditJobRequest& request, const DescribeVideoEditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoEditJobRequest&;
    using Resp = DescribeVideoEditJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoEditJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoEditJobOutcomeCallable VclmClient::DescribeVideoEditJobCallable(const DescribeVideoEditJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoEditJobOutcome>>();
    DescribeVideoEditJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoEditJobRequest&,
        DescribeVideoEditJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeVideoEditKlingJobOutcome VclmClient::DescribeVideoEditKlingJob(const DescribeVideoEditKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoEditKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoEditKlingJobResponse rsp = DescribeVideoEditKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoEditKlingJobOutcome(rsp);
        else
            return DescribeVideoEditKlingJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoEditKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoEditKlingJobAsync(const DescribeVideoEditKlingJobRequest& request, const DescribeVideoEditKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoEditKlingJobRequest&;
    using Resp = DescribeVideoEditKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoEditKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoEditKlingJobOutcomeCallable VclmClient::DescribeVideoEditKlingJobCallable(const DescribeVideoEditKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoEditKlingJobOutcome>>();
    DescribeVideoEditKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoEditKlingJobRequest&,
        DescribeVideoEditKlingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeVideoExtendKlingJobOutcome VclmClient::DescribeVideoExtendKlingJob(const DescribeVideoExtendKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoExtendKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoExtendKlingJobResponse rsp = DescribeVideoExtendKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoExtendKlingJobOutcome(rsp);
        else
            return DescribeVideoExtendKlingJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoExtendKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoExtendKlingJobAsync(const DescribeVideoExtendKlingJobRequest& request, const DescribeVideoExtendKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoExtendKlingJobRequest&;
    using Resp = DescribeVideoExtendKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoExtendKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoExtendKlingJobOutcomeCallable VclmClient::DescribeVideoExtendKlingJobCallable(const DescribeVideoExtendKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoExtendKlingJobOutcome>>();
    DescribeVideoExtendKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoExtendKlingJobRequest&,
        DescribeVideoExtendKlingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::DescribeVideoFaceFusionJobOutcome VclmClient::DescribeVideoFaceFusionJob(const DescribeVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoFaceFusionJobResponse rsp = DescribeVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoFaceFusionJobOutcome(rsp);
        else
            return DescribeVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoFaceFusionJobAsync(const DescribeVideoFaceFusionJobRequest& request, const DescribeVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoFaceFusionJobRequest&;
    using Resp = DescribeVideoFaceFusionJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoFaceFusionJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoFaceFusionJobOutcomeCallable VclmClient::DescribeVideoFaceFusionJobCallable(const DescribeVideoFaceFusionJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoFaceFusionJobOutcome>>();
    DescribeVideoFaceFusionJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoFaceFusionJobRequest&,
        DescribeVideoFaceFusionJobOutcome resp,
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

VclmClient::DescribeVideoVoiceJobOutcome VclmClient::DescribeVideoVoiceJob(const DescribeVideoVoiceJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoVoiceJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoVoiceJobResponse rsp = DescribeVideoVoiceJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoVoiceJobOutcome(rsp);
        else
            return DescribeVideoVoiceJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoVoiceJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoVoiceJobAsync(const DescribeVideoVoiceJobRequest& request, const DescribeVideoVoiceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoVoiceJobRequest&;
    using Resp = DescribeVideoVoiceJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoVoiceJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeVideoVoiceJobOutcomeCallable VclmClient::DescribeVideoVoiceJobCallable(const DescribeVideoVoiceJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoVoiceJobOutcome>>();
    DescribeVideoVoiceJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeVideoVoiceJobRequest&,
        DescribeVideoVoiceJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitAigcVideoJobOutcome VclmClient::SubmitAigcVideoJob(const SubmitAigcVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitAigcVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitAigcVideoJobResponse rsp = SubmitAigcVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitAigcVideoJobOutcome(rsp);
        else
            return SubmitAigcVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitAigcVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitAigcVideoJobAsync(const SubmitAigcVideoJobRequest& request, const SubmitAigcVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitAigcVideoJobRequest&;
    using Resp = SubmitAigcVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitAigcVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitAigcVideoJobOutcomeCallable VclmClient::SubmitAigcVideoJobCallable(const SubmitAigcVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitAigcVideoJobOutcome>>();
    SubmitAigcVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitAigcVideoJobRequest&,
        SubmitAigcVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitHumanActorJobOutcome VclmClient::SubmitHumanActorJob(const SubmitHumanActorJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHumanActorJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHumanActorJobResponse rsp = SubmitHumanActorJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHumanActorJobOutcome(rsp);
        else
            return SubmitHumanActorJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHumanActorJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitHumanActorJobAsync(const SubmitHumanActorJobRequest& request, const SubmitHumanActorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHumanActorJobRequest&;
    using Resp = SubmitHumanActorJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHumanActorJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitHumanActorJobOutcomeCallable VclmClient::SubmitHumanActorJobCallable(const SubmitHumanActorJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHumanActorJobOutcome>>();
    SubmitHumanActorJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitHumanActorJobRequest&,
        SubmitHumanActorJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitHunyuanToVideoJobOutcome VclmClient::SubmitHunyuanToVideoJob(const SubmitHunyuanToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanToVideoJobResponse rsp = SubmitHunyuanToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanToVideoJobOutcome(rsp);
        else
            return SubmitHunyuanToVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitHunyuanToVideoJobAsync(const SubmitHunyuanToVideoJobRequest& request, const SubmitHunyuanToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanToVideoJobRequest&;
    using Resp = SubmitHunyuanToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitHunyuanToVideoJobOutcomeCallable VclmClient::SubmitHunyuanToVideoJobCallable(const SubmitHunyuanToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanToVideoJobOutcome>>();
    SubmitHunyuanToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitHunyuanToVideoJobRequest&,
        SubmitHunyuanToVideoJobOutcome resp,
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

VclmClient::SubmitImageToVideoJobOutcome VclmClient::SubmitImageToVideoJob(const SubmitImageToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageToVideoJobResponse rsp = SubmitImageToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageToVideoJobOutcome(rsp);
        else
            return SubmitImageToVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageToVideoJobAsync(const SubmitImageToVideoJobRequest& request, const SubmitImageToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitImageToVideoJobRequest&;
    using Resp = SubmitImageToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitImageToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitImageToVideoJobOutcomeCallable VclmClient::SubmitImageToVideoJobCallable(const SubmitImageToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitImageToVideoJobOutcome>>();
    SubmitImageToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitImageToVideoJobRequest&,
        SubmitImageToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitImageToVideoViduJobOutcome VclmClient::SubmitImageToVideoViduJob(const SubmitImageToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageToVideoViduJobResponse rsp = SubmitImageToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageToVideoViduJobOutcome(rsp);
        else
            return SubmitImageToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageToVideoViduJobAsync(const SubmitImageToVideoViduJobRequest& request, const SubmitImageToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitImageToVideoViduJobRequest&;
    using Resp = SubmitImageToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitImageToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitImageToVideoViduJobOutcomeCallable VclmClient::SubmitImageToVideoViduJobCallable(const SubmitImageToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitImageToVideoViduJobOutcome>>();
    SubmitImageToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitImageToVideoViduJobRequest&,
        SubmitImageToVideoViduJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitMotionControlKlingJobOutcome VclmClient::SubmitMotionControlKlingJob(const SubmitMotionControlKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitMotionControlKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitMotionControlKlingJobResponse rsp = SubmitMotionControlKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitMotionControlKlingJobOutcome(rsp);
        else
            return SubmitMotionControlKlingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitMotionControlKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitMotionControlKlingJobAsync(const SubmitMotionControlKlingJobRequest& request, const SubmitMotionControlKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitMotionControlKlingJobRequest&;
    using Resp = SubmitMotionControlKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitMotionControlKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitMotionControlKlingJobOutcomeCallable VclmClient::SubmitMotionControlKlingJobCallable(const SubmitMotionControlKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitMotionControlKlingJobOutcome>>();
    SubmitMotionControlKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitMotionControlKlingJobRequest&,
        SubmitMotionControlKlingJobOutcome resp,
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

VclmClient::SubmitReferenceToVideoViduJobOutcome VclmClient::SubmitReferenceToVideoViduJob(const SubmitReferenceToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitReferenceToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitReferenceToVideoViduJobResponse rsp = SubmitReferenceToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitReferenceToVideoViduJobOutcome(rsp);
        else
            return SubmitReferenceToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return SubmitReferenceToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitReferenceToVideoViduJobAsync(const SubmitReferenceToVideoViduJobRequest& request, const SubmitReferenceToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitReferenceToVideoViduJobRequest&;
    using Resp = SubmitReferenceToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitReferenceToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitReferenceToVideoViduJobOutcomeCallable VclmClient::SubmitReferenceToVideoViduJobCallable(const SubmitReferenceToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitReferenceToVideoViduJobOutcome>>();
    SubmitReferenceToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitReferenceToVideoViduJobRequest&,
        SubmitReferenceToVideoViduJobOutcome resp,
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

VclmClient::SubmitTextToVideoJobOutcome VclmClient::SubmitTextToVideoJob(const SubmitTextToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTextToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTextToVideoJobResponse rsp = SubmitTextToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTextToVideoJobOutcome(rsp);
        else
            return SubmitTextToVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTextToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitTextToVideoJobAsync(const SubmitTextToVideoJobRequest& request, const SubmitTextToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTextToVideoJobRequest&;
    using Resp = SubmitTextToVideoJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTextToVideoJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitTextToVideoJobOutcomeCallable VclmClient::SubmitTextToVideoJobCallable(const SubmitTextToVideoJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTextToVideoJobOutcome>>();
    SubmitTextToVideoJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitTextToVideoJobRequest&,
        SubmitTextToVideoJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitTextToVideoViduJobOutcome VclmClient::SubmitTextToVideoViduJob(const SubmitTextToVideoViduJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTextToVideoViduJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTextToVideoViduJobResponse rsp = SubmitTextToVideoViduJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTextToVideoViduJobOutcome(rsp);
        else
            return SubmitTextToVideoViduJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTextToVideoViduJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitTextToVideoViduJobAsync(const SubmitTextToVideoViduJobRequest& request, const SubmitTextToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTextToVideoViduJobRequest&;
    using Resp = SubmitTextToVideoViduJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTextToVideoViduJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitTextToVideoViduJobOutcomeCallable VclmClient::SubmitTextToVideoViduJobCallable(const SubmitTextToVideoViduJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTextToVideoViduJobOutcome>>();
    SubmitTextToVideoViduJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitTextToVideoViduJobRequest&,
        SubmitTextToVideoViduJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitVideoEditJobOutcome VclmClient::SubmitVideoEditJob(const SubmitVideoEditJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoEditJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoEditJobResponse rsp = SubmitVideoEditJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoEditJobOutcome(rsp);
        else
            return SubmitVideoEditJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoEditJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoEditJobAsync(const SubmitVideoEditJobRequest& request, const SubmitVideoEditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoEditJobRequest&;
    using Resp = SubmitVideoEditJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoEditJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoEditJobOutcomeCallable VclmClient::SubmitVideoEditJobCallable(const SubmitVideoEditJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoEditJobOutcome>>();
    SubmitVideoEditJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoEditJobRequest&,
        SubmitVideoEditJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitVideoEditKlingJobOutcome VclmClient::SubmitVideoEditKlingJob(const SubmitVideoEditKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoEditKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoEditKlingJobResponse rsp = SubmitVideoEditKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoEditKlingJobOutcome(rsp);
        else
            return SubmitVideoEditKlingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoEditKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoEditKlingJobAsync(const SubmitVideoEditKlingJobRequest& request, const SubmitVideoEditKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoEditKlingJobRequest&;
    using Resp = SubmitVideoEditKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoEditKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoEditKlingJobOutcomeCallable VclmClient::SubmitVideoEditKlingJobCallable(const SubmitVideoEditKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoEditKlingJobOutcome>>();
    SubmitVideoEditKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoEditKlingJobRequest&,
        SubmitVideoEditKlingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitVideoExtendKlingJobOutcome VclmClient::SubmitVideoExtendKlingJob(const SubmitVideoExtendKlingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoExtendKlingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoExtendKlingJobResponse rsp = SubmitVideoExtendKlingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoExtendKlingJobOutcome(rsp);
        else
            return SubmitVideoExtendKlingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoExtendKlingJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoExtendKlingJobAsync(const SubmitVideoExtendKlingJobRequest& request, const SubmitVideoExtendKlingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoExtendKlingJobRequest&;
    using Resp = SubmitVideoExtendKlingJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoExtendKlingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoExtendKlingJobOutcomeCallable VclmClient::SubmitVideoExtendKlingJobCallable(const SubmitVideoExtendKlingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoExtendKlingJobOutcome>>();
    SubmitVideoExtendKlingJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoExtendKlingJobRequest&,
        SubmitVideoExtendKlingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VclmClient::SubmitVideoFaceFusionJobOutcome VclmClient::SubmitVideoFaceFusionJob(const SubmitVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoFaceFusionJobResponse rsp = SubmitVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoFaceFusionJobOutcome(rsp);
        else
            return SubmitVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoFaceFusionJobAsync(const SubmitVideoFaceFusionJobRequest& request, const SubmitVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoFaceFusionJobRequest&;
    using Resp = SubmitVideoFaceFusionJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoFaceFusionJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoFaceFusionJobOutcomeCallable VclmClient::SubmitVideoFaceFusionJobCallable(const SubmitVideoFaceFusionJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoFaceFusionJobOutcome>>();
    SubmitVideoFaceFusionJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoFaceFusionJobRequest&,
        SubmitVideoFaceFusionJobOutcome resp,
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

VclmClient::SubmitVideoVoiceJobOutcome VclmClient::SubmitVideoVoiceJob(const SubmitVideoVoiceJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoVoiceJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoVoiceJobResponse rsp = SubmitVideoVoiceJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoVoiceJobOutcome(rsp);
        else
            return SubmitVideoVoiceJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoVoiceJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoVoiceJobAsync(const SubmitVideoVoiceJobRequest& request, const SubmitVideoVoiceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoVoiceJobRequest&;
    using Resp = SubmitVideoVoiceJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoVoiceJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitVideoVoiceJobOutcomeCallable VclmClient::SubmitVideoVoiceJobCallable(const SubmitVideoVoiceJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoVoiceJobOutcome>>();
    SubmitVideoVoiceJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitVideoVoiceJobRequest&,
        SubmitVideoVoiceJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

