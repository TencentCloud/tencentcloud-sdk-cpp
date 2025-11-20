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

#include <tencentcloud/iap/v20240713/IapClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iap::V20240713;
using namespace TencentCloud::Iap::V20240713::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-07-13";
    const string ENDPOINT = "iap.tencentcloudapi.com";
}

IapClient::IapClient(const Credential &credential, const string &region) :
    IapClient(credential, region, ClientProfile())
{
}

IapClient::IapClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IapClient::CreateIAPUserOIDCConfigOutcome IapClient::CreateIAPUserOIDCConfig(const CreateIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIAPUserOIDCConfigResponse rsp = CreateIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIAPUserOIDCConfigOutcome(rsp);
        else
            return CreateIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return CreateIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::CreateIAPUserOIDCConfigAsync(const CreateIAPUserOIDCConfigRequest& request, const CreateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIAPUserOIDCConfigRequest&;
    using Resp = CreateIAPUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIAPUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::CreateIAPUserOIDCConfigOutcomeCallable IapClient::CreateIAPUserOIDCConfigCallable(const CreateIAPUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIAPUserOIDCConfigOutcome>>();
    CreateIAPUserOIDCConfigAsync(
    request,
    [prom](
        const IapClient*,
        const CreateIAPUserOIDCConfigRequest&,
        CreateIAPUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IapClient::DescribeIAPLoginSessionDurationOutcome IapClient::DescribeIAPLoginSessionDuration(const DescribeIAPLoginSessionDurationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIAPLoginSessionDuration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIAPLoginSessionDurationResponse rsp = DescribeIAPLoginSessionDurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIAPLoginSessionDurationOutcome(rsp);
        else
            return DescribeIAPLoginSessionDurationOutcome(o.GetError());
    }
    else
    {
        return DescribeIAPLoginSessionDurationOutcome(outcome.GetError());
    }
}

void IapClient::DescribeIAPLoginSessionDurationAsync(const DescribeIAPLoginSessionDurationRequest& request, const DescribeIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIAPLoginSessionDurationRequest&;
    using Resp = DescribeIAPLoginSessionDurationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIAPLoginSessionDuration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::DescribeIAPLoginSessionDurationOutcomeCallable IapClient::DescribeIAPLoginSessionDurationCallable(const DescribeIAPLoginSessionDurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIAPLoginSessionDurationOutcome>>();
    DescribeIAPLoginSessionDurationAsync(
    request,
    [prom](
        const IapClient*,
        const DescribeIAPLoginSessionDurationRequest&,
        DescribeIAPLoginSessionDurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IapClient::DescribeIAPUserOIDCConfigOutcome IapClient::DescribeIAPUserOIDCConfig(const DescribeIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIAPUserOIDCConfigResponse rsp = DescribeIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIAPUserOIDCConfigOutcome(rsp);
        else
            return DescribeIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::DescribeIAPUserOIDCConfigAsync(const DescribeIAPUserOIDCConfigRequest& request, const DescribeIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIAPUserOIDCConfigRequest&;
    using Resp = DescribeIAPUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIAPUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::DescribeIAPUserOIDCConfigOutcomeCallable IapClient::DescribeIAPUserOIDCConfigCallable(const DescribeIAPUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIAPUserOIDCConfigOutcome>>();
    DescribeIAPUserOIDCConfigAsync(
    request,
    [prom](
        const IapClient*,
        const DescribeIAPUserOIDCConfigRequest&,
        DescribeIAPUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IapClient::DisableIAPUserSSOOutcome IapClient::DisableIAPUserSSO(const DisableIAPUserSSORequest &request)
{
    auto outcome = MakeRequest(request, "DisableIAPUserSSO");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableIAPUserSSOResponse rsp = DisableIAPUserSSOResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableIAPUserSSOOutcome(rsp);
        else
            return DisableIAPUserSSOOutcome(o.GetError());
    }
    else
    {
        return DisableIAPUserSSOOutcome(outcome.GetError());
    }
}

void IapClient::DisableIAPUserSSOAsync(const DisableIAPUserSSORequest& request, const DisableIAPUserSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableIAPUserSSORequest&;
    using Resp = DisableIAPUserSSOResponse;

    DoRequestAsync<Req, Resp>(
        "DisableIAPUserSSO", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::DisableIAPUserSSOOutcomeCallable IapClient::DisableIAPUserSSOCallable(const DisableIAPUserSSORequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableIAPUserSSOOutcome>>();
    DisableIAPUserSSOAsync(
    request,
    [prom](
        const IapClient*,
        const DisableIAPUserSSORequest&,
        DisableIAPUserSSOOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IapClient::ModifyIAPLoginSessionDurationOutcome IapClient::ModifyIAPLoginSessionDuration(const ModifyIAPLoginSessionDurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIAPLoginSessionDuration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIAPLoginSessionDurationResponse rsp = ModifyIAPLoginSessionDurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIAPLoginSessionDurationOutcome(rsp);
        else
            return ModifyIAPLoginSessionDurationOutcome(o.GetError());
    }
    else
    {
        return ModifyIAPLoginSessionDurationOutcome(outcome.GetError());
    }
}

void IapClient::ModifyIAPLoginSessionDurationAsync(const ModifyIAPLoginSessionDurationRequest& request, const ModifyIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIAPLoginSessionDurationRequest&;
    using Resp = ModifyIAPLoginSessionDurationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIAPLoginSessionDuration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::ModifyIAPLoginSessionDurationOutcomeCallable IapClient::ModifyIAPLoginSessionDurationCallable(const ModifyIAPLoginSessionDurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIAPLoginSessionDurationOutcome>>();
    ModifyIAPLoginSessionDurationAsync(
    request,
    [prom](
        const IapClient*,
        const ModifyIAPLoginSessionDurationRequest&,
        ModifyIAPLoginSessionDurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IapClient::UpdateIAPUserOIDCConfigOutcome IapClient::UpdateIAPUserOIDCConfig(const UpdateIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIAPUserOIDCConfigResponse rsp = UpdateIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIAPUserOIDCConfigOutcome(rsp);
        else
            return UpdateIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::UpdateIAPUserOIDCConfigAsync(const UpdateIAPUserOIDCConfigRequest& request, const UpdateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateIAPUserOIDCConfigRequest&;
    using Resp = UpdateIAPUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateIAPUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IapClient::UpdateIAPUserOIDCConfigOutcomeCallable IapClient::UpdateIAPUserOIDCConfigCallable(const UpdateIAPUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateIAPUserOIDCConfigOutcome>>();
    UpdateIAPUserOIDCConfigAsync(
    request,
    [prom](
        const IapClient*,
        const UpdateIAPUserOIDCConfigRequest&,
        UpdateIAPUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

