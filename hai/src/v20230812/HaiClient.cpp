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

#include <tencentcloud/hai/v20230812/HaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hai::V20230812;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-08-12";
    const string ENDPOINT = "hai.tencentcloudapi.com";
}

HaiClient::HaiClient(const Credential &credential, const string &region) :
    HaiClient(credential, region, ClientProfile())
{
}

HaiClient::HaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HaiClient::CreateApplicationOutcome HaiClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void HaiClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationRequest&;
    using Resp = CreateApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::CreateApplicationOutcomeCallable HaiClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const HaiClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::CreateMuskPromptOutcome HaiClient::CreateMuskPrompt(const CreateMuskPromptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMuskPrompt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMuskPromptResponse rsp = CreateMuskPromptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMuskPromptOutcome(rsp);
        else
            return CreateMuskPromptOutcome(o.GetError());
    }
    else
    {
        return CreateMuskPromptOutcome(outcome.GetError());
    }
}

void HaiClient::CreateMuskPromptAsync(const CreateMuskPromptRequest& request, const CreateMuskPromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMuskPromptRequest&;
    using Resp = CreateMuskPromptResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMuskPrompt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::CreateMuskPromptOutcomeCallable HaiClient::CreateMuskPromptCallable(const CreateMuskPromptRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMuskPromptOutcome>>();
    CreateMuskPromptAsync(
    request,
    [prom](
        const HaiClient*,
        const CreateMuskPromptRequest&,
        CreateMuskPromptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeApplicationsOutcome HaiClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationsRequest&;
    using Resp = DescribeApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeApplicationsOutcomeCallable HaiClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationsOutcome>>();
    DescribeApplicationsAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeApplicationsRequest&,
        DescribeApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeInstanceNetworkStatusOutcome HaiClient::DescribeInstanceNetworkStatus(const DescribeInstanceNetworkStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNetworkStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNetworkStatusResponse rsp = DescribeInstanceNetworkStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNetworkStatusOutcome(rsp);
        else
            return DescribeInstanceNetworkStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNetworkStatusOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeInstanceNetworkStatusAsync(const DescribeInstanceNetworkStatusRequest& request, const DescribeInstanceNetworkStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNetworkStatusRequest&;
    using Resp = DescribeInstanceNetworkStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNetworkStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeInstanceNetworkStatusOutcomeCallable HaiClient::DescribeInstanceNetworkStatusCallable(const DescribeInstanceNetworkStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNetworkStatusOutcome>>();
    DescribeInstanceNetworkStatusAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeInstanceNetworkStatusRequest&,
        DescribeInstanceNetworkStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeInstancesOutcome HaiClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeInstancesOutcomeCallable HaiClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeMuskPromptsOutcome HaiClient::DescribeMuskPrompts(const DescribeMuskPromptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMuskPrompts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMuskPromptsResponse rsp = DescribeMuskPromptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMuskPromptsOutcome(rsp);
        else
            return DescribeMuskPromptsOutcome(o.GetError());
    }
    else
    {
        return DescribeMuskPromptsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeMuskPromptsAsync(const DescribeMuskPromptsRequest& request, const DescribeMuskPromptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMuskPromptsRequest&;
    using Resp = DescribeMuskPromptsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMuskPrompts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeMuskPromptsOutcomeCallable HaiClient::DescribeMuskPromptsCallable(const DescribeMuskPromptsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMuskPromptsOutcome>>();
    DescribeMuskPromptsAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeMuskPromptsRequest&,
        DescribeMuskPromptsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeRegionsOutcome HaiClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeRegionsOutcomeCallable HaiClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeScenesOutcome HaiClient::DescribeScenes(const DescribeScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenesResponse rsp = DescribeScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenesOutcome(rsp);
        else
            return DescribeScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeScenesOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeScenesAsync(const DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScenesRequest&;
    using Resp = DescribeScenesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeScenesOutcomeCallable HaiClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenesOutcome>>();
    DescribeScenesAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeScenesRequest&,
        DescribeScenesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::DescribeServiceLoginSettingsOutcome HaiClient::DescribeServiceLoginSettings(const DescribeServiceLoginSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceLoginSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceLoginSettingsResponse rsp = DescribeServiceLoginSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceLoginSettingsOutcome(rsp);
        else
            return DescribeServiceLoginSettingsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceLoginSettingsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeServiceLoginSettingsAsync(const DescribeServiceLoginSettingsRequest& request, const DescribeServiceLoginSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceLoginSettingsRequest&;
    using Resp = DescribeServiceLoginSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceLoginSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::DescribeServiceLoginSettingsOutcomeCallable HaiClient::DescribeServiceLoginSettingsCallable(const DescribeServiceLoginSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceLoginSettingsOutcome>>();
    DescribeServiceLoginSettingsAsync(
    request,
    [prom](
        const HaiClient*,
        const DescribeServiceLoginSettingsRequest&,
        DescribeServiceLoginSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::InquirePriceRunInstancesOutcome HaiClient::InquirePriceRunInstances(const InquirePriceRunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRunInstancesResponse rsp = InquirePriceRunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRunInstancesOutcome(rsp);
        else
            return InquirePriceRunInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRunInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::InquirePriceRunInstancesAsync(const InquirePriceRunInstancesRequest& request, const InquirePriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRunInstancesRequest&;
    using Resp = InquirePriceRunInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRunInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::InquirePriceRunInstancesOutcomeCallable HaiClient::InquirePriceRunInstancesCallable(const InquirePriceRunInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRunInstancesOutcome>>();
    InquirePriceRunInstancesAsync(
    request,
    [prom](
        const HaiClient*,
        const InquirePriceRunInstancesRequest&,
        InquirePriceRunInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::ResetInstancesPasswordOutcome HaiClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void HaiClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesPasswordRequest&;
    using Resp = ResetInstancesPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::ResetInstancesPasswordOutcomeCallable HaiClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesPasswordOutcome>>();
    ResetInstancesPasswordAsync(
    request,
    [prom](
        const HaiClient*,
        const ResetInstancesPasswordRequest&,
        ResetInstancesPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::ResizeInstanceDiskOutcome HaiClient::ResizeInstanceDisk(const ResizeInstanceDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeInstanceDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeInstanceDiskResponse rsp = ResizeInstanceDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeInstanceDiskOutcome(rsp);
        else
            return ResizeInstanceDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeInstanceDiskOutcome(outcome.GetError());
    }
}

void HaiClient::ResizeInstanceDiskAsync(const ResizeInstanceDiskRequest& request, const ResizeInstanceDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeInstanceDiskRequest&;
    using Resp = ResizeInstanceDiskResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeInstanceDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::ResizeInstanceDiskOutcomeCallable HaiClient::ResizeInstanceDiskCallable(const ResizeInstanceDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeInstanceDiskOutcome>>();
    ResizeInstanceDiskAsync(
    request,
    [prom](
        const HaiClient*,
        const ResizeInstanceDiskRequest&,
        ResizeInstanceDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::RunInstancesOutcome HaiClient::RunInstances(const RunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesResponse rsp = RunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesOutcome(rsp);
        else
            return RunInstancesOutcome(o.GetError());
    }
    else
    {
        return RunInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunInstancesRequest&;
    using Resp = RunInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RunInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::RunInstancesOutcomeCallable HaiClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunInstancesOutcome>>();
    RunInstancesAsync(
    request,
    [prom](
        const HaiClient*,
        const RunInstancesRequest&,
        RunInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::StartInstanceOutcome HaiClient::StartInstance(const StartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstanceResponse rsp = StartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstanceOutcome(rsp);
        else
            return StartInstanceOutcome(o.GetError());
    }
    else
    {
        return StartInstanceOutcome(outcome.GetError());
    }
}

void HaiClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartInstanceRequest&;
    using Resp = StartInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::StartInstanceOutcomeCallable HaiClient::StartInstanceCallable(const StartInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstanceOutcome>>();
    StartInstanceAsync(
    request,
    [prom](
        const HaiClient*,
        const StartInstanceRequest&,
        StartInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::StopInstanceOutcome HaiClient::StopInstance(const StopInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceResponse rsp = StopInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceOutcome(rsp);
        else
            return StopInstanceOutcome(o.GetError());
    }
    else
    {
        return StopInstanceOutcome(outcome.GetError());
    }
}

void HaiClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstanceRequest&;
    using Resp = StopInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::StopInstanceOutcomeCallable HaiClient::StopInstanceCallable(const StopInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstanceOutcome>>();
    StopInstanceAsync(
    request,
    [prom](
        const HaiClient*,
        const StopInstanceRequest&,
        StopInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::TerminateInstancesOutcome HaiClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::TerminateInstancesOutcomeCallable HaiClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const HaiClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaiClient::UpdateServiceConfigsOutcome HaiClient::UpdateServiceConfigs(const UpdateServiceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServiceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceConfigsResponse rsp = UpdateServiceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceConfigsOutcome(rsp);
        else
            return UpdateServiceConfigsOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceConfigsOutcome(outcome.GetError());
    }
}

void HaiClient::UpdateServiceConfigsAsync(const UpdateServiceConfigsRequest& request, const UpdateServiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServiceConfigsRequest&;
    using Resp = UpdateServiceConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateServiceConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaiClient::UpdateServiceConfigsOutcomeCallable HaiClient::UpdateServiceConfigsCallable(const UpdateServiceConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServiceConfigsOutcome>>();
    UpdateServiceConfigsAsync(
    request,
    [prom](
        const HaiClient*,
        const UpdateServiceConfigsRequest&,
        UpdateServiceConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

