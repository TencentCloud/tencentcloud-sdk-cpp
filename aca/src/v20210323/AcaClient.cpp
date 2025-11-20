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

#include <tencentcloud/aca/v20210323/AcaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Aca::V20210323;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "aca.tencentcloudapi.com";
}

AcaClient::AcaClient(const Credential &credential, const string &region) :
    AcaClient(credential, region, ClientProfile())
{
}

AcaClient::AcaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AcaClient::GetDrugIndicationsOutcome AcaClient::GetDrugIndications(const GetDrugIndicationsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDrugIndications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDrugIndicationsResponse rsp = GetDrugIndicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDrugIndicationsOutcome(rsp);
        else
            return GetDrugIndicationsOutcome(o.GetError());
    }
    else
    {
        return GetDrugIndicationsOutcome(outcome.GetError());
    }
}

void AcaClient::GetDrugIndicationsAsync(const GetDrugIndicationsRequest& request, const GetDrugIndicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDrugIndicationsRequest&;
    using Resp = GetDrugIndicationsResponse;

    DoRequestAsync<Req, Resp>(
        "GetDrugIndications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::GetDrugIndicationsOutcomeCallable AcaClient::GetDrugIndicationsCallable(const GetDrugIndicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDrugIndicationsOutcome>>();
    GetDrugIndicationsAsync(
    request,
    [prom](
        const AcaClient*,
        const GetDrugIndicationsRequest&,
        GetDrugIndicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::LoginHisToolOutcome AcaClient::LoginHisTool(const LoginHisToolRequest &request)
{
    auto outcome = MakeRequest(request, "LoginHisTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginHisToolResponse rsp = LoginHisToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginHisToolOutcome(rsp);
        else
            return LoginHisToolOutcome(o.GetError());
    }
    else
    {
        return LoginHisToolOutcome(outcome.GetError());
    }
}

void AcaClient::LoginHisToolAsync(const LoginHisToolRequest& request, const LoginHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LoginHisToolRequest&;
    using Resp = LoginHisToolResponse;

    DoRequestAsync<Req, Resp>(
        "LoginHisTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::LoginHisToolOutcomeCallable AcaClient::LoginHisToolCallable(const LoginHisToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<LoginHisToolOutcome>>();
    LoginHisToolAsync(
    request,
    [prom](
        const AcaClient*,
        const LoginHisToolRequest&,
        LoginHisToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::LoginOutHisToolOutcome AcaClient::LoginOutHisTool(const LoginOutHisToolRequest &request)
{
    auto outcome = MakeRequest(request, "LoginOutHisTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginOutHisToolResponse rsp = LoginOutHisToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginOutHisToolOutcome(rsp);
        else
            return LoginOutHisToolOutcome(o.GetError());
    }
    else
    {
        return LoginOutHisToolOutcome(outcome.GetError());
    }
}

void AcaClient::LoginOutHisToolAsync(const LoginOutHisToolRequest& request, const LoginOutHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LoginOutHisToolRequest&;
    using Resp = LoginOutHisToolResponse;

    DoRequestAsync<Req, Resp>(
        "LoginOutHisTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::LoginOutHisToolOutcomeCallable AcaClient::LoginOutHisToolCallable(const LoginOutHisToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<LoginOutHisToolOutcome>>();
    LoginOutHisToolAsync(
    request,
    [prom](
        const AcaClient*,
        const LoginOutHisToolRequest&,
        LoginOutHisToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::SmartDrugInfoOutcome AcaClient::SmartDrugInfo(const SmartDrugInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SmartDrugInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartDrugInfoResponse rsp = SmartDrugInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartDrugInfoOutcome(rsp);
        else
            return SmartDrugInfoOutcome(o.GetError());
    }
    else
    {
        return SmartDrugInfoOutcome(outcome.GetError());
    }
}

void AcaClient::SmartDrugInfoAsync(const SmartDrugInfoRequest& request, const SmartDrugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SmartDrugInfoRequest&;
    using Resp = SmartDrugInfoResponse;

    DoRequestAsync<Req, Resp>(
        "SmartDrugInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::SmartDrugInfoOutcomeCallable AcaClient::SmartDrugInfoCallable(const SmartDrugInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<SmartDrugInfoOutcome>>();
    SmartDrugInfoAsync(
    request,
    [prom](
        const AcaClient*,
        const SmartDrugInfoRequest&,
        SmartDrugInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::SmartPredictOutcome AcaClient::SmartPredict(const SmartPredictRequest &request)
{
    auto outcome = MakeRequest(request, "SmartPredict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartPredictResponse rsp = SmartPredictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartPredictOutcome(rsp);
        else
            return SmartPredictOutcome(o.GetError());
    }
    else
    {
        return SmartPredictOutcome(outcome.GetError());
    }
}

void AcaClient::SmartPredictAsync(const SmartPredictRequest& request, const SmartPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SmartPredictRequest&;
    using Resp = SmartPredictResponse;

    DoRequestAsync<Req, Resp>(
        "SmartPredict", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::SmartPredictOutcomeCallable AcaClient::SmartPredictCallable(const SmartPredictRequest &request)
{
    const auto prom = std::make_shared<std::promise<SmartPredictOutcome>>();
    SmartPredictAsync(
    request,
    [prom](
        const AcaClient*,
        const SmartPredictRequest&,
        SmartPredictOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::SyncDepartmentOutcome AcaClient::SyncDepartment(const SyncDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "SyncDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncDepartmentResponse rsp = SyncDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncDepartmentOutcome(rsp);
        else
            return SyncDepartmentOutcome(o.GetError());
    }
    else
    {
        return SyncDepartmentOutcome(outcome.GetError());
    }
}

void AcaClient::SyncDepartmentAsync(const SyncDepartmentRequest& request, const SyncDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncDepartmentRequest&;
    using Resp = SyncDepartmentResponse;

    DoRequestAsync<Req, Resp>(
        "SyncDepartment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::SyncDepartmentOutcomeCallable AcaClient::SyncDepartmentCallable(const SyncDepartmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncDepartmentOutcome>>();
    SyncDepartmentAsync(
    request,
    [prom](
        const AcaClient*,
        const SyncDepartmentRequest&,
        SyncDepartmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::SyncStandardDictOutcome AcaClient::SyncStandardDict(const SyncStandardDictRequest &request)
{
    auto outcome = MakeRequest(request, "SyncStandardDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncStandardDictResponse rsp = SyncStandardDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncStandardDictOutcome(rsp);
        else
            return SyncStandardDictOutcome(o.GetError());
    }
    else
    {
        return SyncStandardDictOutcome(outcome.GetError());
    }
}

void AcaClient::SyncStandardDictAsync(const SyncStandardDictRequest& request, const SyncStandardDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncStandardDictRequest&;
    using Resp = SyncStandardDictResponse;

    DoRequestAsync<Req, Resp>(
        "SyncStandardDict", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::SyncStandardDictOutcomeCallable AcaClient::SyncStandardDictCallable(const SyncStandardDictRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncStandardDictOutcome>>();
    SyncStandardDictAsync(
    request,
    [prom](
        const AcaClient*,
        const SyncStandardDictRequest&,
        SyncStandardDictOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcaClient::UploadDrugsOutcome AcaClient::UploadDrugs(const UploadDrugsRequest &request)
{
    auto outcome = MakeRequest(request, "UploadDrugs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadDrugsResponse rsp = UploadDrugsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadDrugsOutcome(rsp);
        else
            return UploadDrugsOutcome(o.GetError());
    }
    else
    {
        return UploadDrugsOutcome(outcome.GetError());
    }
}

void AcaClient::UploadDrugsAsync(const UploadDrugsRequest& request, const UploadDrugsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadDrugsRequest&;
    using Resp = UploadDrugsResponse;

    DoRequestAsync<Req, Resp>(
        "UploadDrugs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcaClient::UploadDrugsOutcomeCallable AcaClient::UploadDrugsCallable(const UploadDrugsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadDrugsOutcome>>();
    UploadDrugsAsync(
    request,
    [prom](
        const AcaClient*,
        const UploadDrugsRequest&,
        UploadDrugsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

