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

#include <tencentcloud/vrs/v20200824/VrsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vrs::V20200824;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-24";
    const string ENDPOINT = "vrs.tencentcloudapi.com";
}

VrsClient::VrsClient(const Credential &credential, const string &region) :
    VrsClient(credential, region, ClientProfile())
{
}

VrsClient::VrsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VrsClient::CancelVRSTaskOutcome VrsClient::CancelVRSTask(const CancelVRSTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelVRSTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelVRSTaskResponse rsp = CancelVRSTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelVRSTaskOutcome(rsp);
        else
            return CancelVRSTaskOutcome(o.GetError());
    }
    else
    {
        return CancelVRSTaskOutcome(outcome.GetError());
    }
}

void VrsClient::CancelVRSTaskAsync(const CancelVRSTaskRequest& request, const CancelVRSTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelVRSTaskRequest&;
    using Resp = CancelVRSTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelVRSTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::CancelVRSTaskOutcomeCallable VrsClient::CancelVRSTaskCallable(const CancelVRSTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelVRSTaskOutcome>>();
    CancelVRSTaskAsync(
    request,
    [prom](
        const VrsClient*,
        const CancelVRSTaskRequest&,
        CancelVRSTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::CreateVRSTaskOutcome VrsClient::CreateVRSTask(const CreateVRSTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVRSTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVRSTaskResponse rsp = CreateVRSTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVRSTaskOutcome(rsp);
        else
            return CreateVRSTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVRSTaskOutcome(outcome.GetError());
    }
}

void VrsClient::CreateVRSTaskAsync(const CreateVRSTaskRequest& request, const CreateVRSTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVRSTaskRequest&;
    using Resp = CreateVRSTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVRSTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::CreateVRSTaskOutcomeCallable VrsClient::CreateVRSTaskCallable(const CreateVRSTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVRSTaskOutcome>>();
    CreateVRSTaskAsync(
    request,
    [prom](
        const VrsClient*,
        const CreateVRSTaskRequest&,
        CreateVRSTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::DescribeVRSTaskStatusOutcome VrsClient::DescribeVRSTaskStatus(const DescribeVRSTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVRSTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVRSTaskStatusResponse rsp = DescribeVRSTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVRSTaskStatusOutcome(rsp);
        else
            return DescribeVRSTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVRSTaskStatusOutcome(outcome.GetError());
    }
}

void VrsClient::DescribeVRSTaskStatusAsync(const DescribeVRSTaskStatusRequest& request, const DescribeVRSTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVRSTaskStatusRequest&;
    using Resp = DescribeVRSTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVRSTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::DescribeVRSTaskStatusOutcomeCallable VrsClient::DescribeVRSTaskStatusCallable(const DescribeVRSTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVRSTaskStatusOutcome>>();
    DescribeVRSTaskStatusAsync(
    request,
    [prom](
        const VrsClient*,
        const DescribeVRSTaskStatusRequest&,
        DescribeVRSTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::DetectEnvAndSoundQualityOutcome VrsClient::DetectEnvAndSoundQuality(const DetectEnvAndSoundQualityRequest &request)
{
    auto outcome = MakeRequest(request, "DetectEnvAndSoundQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectEnvAndSoundQualityResponse rsp = DetectEnvAndSoundQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectEnvAndSoundQualityOutcome(rsp);
        else
            return DetectEnvAndSoundQualityOutcome(o.GetError());
    }
    else
    {
        return DetectEnvAndSoundQualityOutcome(outcome.GetError());
    }
}

void VrsClient::DetectEnvAndSoundQualityAsync(const DetectEnvAndSoundQualityRequest& request, const DetectEnvAndSoundQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectEnvAndSoundQualityRequest&;
    using Resp = DetectEnvAndSoundQualityResponse;

    DoRequestAsync<Req, Resp>(
        "DetectEnvAndSoundQuality", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::DetectEnvAndSoundQualityOutcomeCallable VrsClient::DetectEnvAndSoundQualityCallable(const DetectEnvAndSoundQualityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectEnvAndSoundQualityOutcome>>();
    DetectEnvAndSoundQualityAsync(
    request,
    [prom](
        const VrsClient*,
        const DetectEnvAndSoundQualityRequest&,
        DetectEnvAndSoundQualityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::DownloadVRSModelOutcome VrsClient::DownloadVRSModel(const DownloadVRSModelRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadVRSModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadVRSModelResponse rsp = DownloadVRSModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadVRSModelOutcome(rsp);
        else
            return DownloadVRSModelOutcome(o.GetError());
    }
    else
    {
        return DownloadVRSModelOutcome(outcome.GetError());
    }
}

void VrsClient::DownloadVRSModelAsync(const DownloadVRSModelRequest& request, const DownloadVRSModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadVRSModelRequest&;
    using Resp = DownloadVRSModelResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadVRSModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::DownloadVRSModelOutcomeCallable VrsClient::DownloadVRSModelCallable(const DownloadVRSModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadVRSModelOutcome>>();
    DownloadVRSModelAsync(
    request,
    [prom](
        const VrsClient*,
        const DownloadVRSModelRequest&,
        DownloadVRSModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::GetTrainingTextOutcome VrsClient::GetTrainingText(const GetTrainingTextRequest &request)
{
    auto outcome = MakeRequest(request, "GetTrainingText");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTrainingTextResponse rsp = GetTrainingTextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTrainingTextOutcome(rsp);
        else
            return GetTrainingTextOutcome(o.GetError());
    }
    else
    {
        return GetTrainingTextOutcome(outcome.GetError());
    }
}

void VrsClient::GetTrainingTextAsync(const GetTrainingTextRequest& request, const GetTrainingTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTrainingTextRequest&;
    using Resp = GetTrainingTextResponse;

    DoRequestAsync<Req, Resp>(
        "GetTrainingText", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::GetTrainingTextOutcomeCallable VrsClient::GetTrainingTextCallable(const GetTrainingTextRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTrainingTextOutcome>>();
    GetTrainingTextAsync(
    request,
    [prom](
        const VrsClient*,
        const GetTrainingTextRequest&,
        GetTrainingTextOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::GetVRSVoiceTypeInfoOutcome VrsClient::GetVRSVoiceTypeInfo(const GetVRSVoiceTypeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetVRSVoiceTypeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVRSVoiceTypeInfoResponse rsp = GetVRSVoiceTypeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVRSVoiceTypeInfoOutcome(rsp);
        else
            return GetVRSVoiceTypeInfoOutcome(o.GetError());
    }
    else
    {
        return GetVRSVoiceTypeInfoOutcome(outcome.GetError());
    }
}

void VrsClient::GetVRSVoiceTypeInfoAsync(const GetVRSVoiceTypeInfoRequest& request, const GetVRSVoiceTypeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetVRSVoiceTypeInfoRequest&;
    using Resp = GetVRSVoiceTypeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetVRSVoiceTypeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::GetVRSVoiceTypeInfoOutcomeCallable VrsClient::GetVRSVoiceTypeInfoCallable(const GetVRSVoiceTypeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVRSVoiceTypeInfoOutcome>>();
    GetVRSVoiceTypeInfoAsync(
    request,
    [prom](
        const VrsClient*,
        const GetVRSVoiceTypeInfoRequest&,
        GetVRSVoiceTypeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VrsClient::GetVRSVoiceTypesOutcome VrsClient::GetVRSVoiceTypes(const GetVRSVoiceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "GetVRSVoiceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVRSVoiceTypesResponse rsp = GetVRSVoiceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVRSVoiceTypesOutcome(rsp);
        else
            return GetVRSVoiceTypesOutcome(o.GetError());
    }
    else
    {
        return GetVRSVoiceTypesOutcome(outcome.GetError());
    }
}

void VrsClient::GetVRSVoiceTypesAsync(const GetVRSVoiceTypesRequest& request, const GetVRSVoiceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetVRSVoiceTypesRequest&;
    using Resp = GetVRSVoiceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "GetVRSVoiceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VrsClient::GetVRSVoiceTypesOutcomeCallable VrsClient::GetVRSVoiceTypesCallable(const GetVRSVoiceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVRSVoiceTypesOutcome>>();
    GetVRSVoiceTypesAsync(
    request,
    [prom](
        const VrsClient*,
        const GetVRSVoiceTypesRequest&,
        GetVRSVoiceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

