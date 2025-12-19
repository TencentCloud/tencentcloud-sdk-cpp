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

#include <tencentcloud/evt/v20250217/EvtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Evt::V20250217;
using namespace TencentCloud::Evt::V20250217::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-02-17";
    const string ENDPOINT = "evt.tencentcloudapi.com";
}

EvtClient::EvtClient(const Credential &credential, const string &region) :
    EvtClient(credential, region, ClientProfile())
{
}

EvtClient::EvtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EvtClient::CompleteApprovalOutcome EvtClient::CompleteApproval(const CompleteApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteApprovalResponse rsp = CompleteApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteApprovalOutcome(rsp);
        else
            return CompleteApprovalOutcome(o.GetError());
    }
    else
    {
        return CompleteApprovalOutcome(outcome.GetError());
    }
}

void EvtClient::CompleteApprovalAsync(const CompleteApprovalRequest& request, const CompleteApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteApprovalRequest&;
    using Resp = CompleteApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EvtClient::CompleteApprovalOutcomeCallable EvtClient::CompleteApprovalCallable(const CompleteApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteApprovalOutcome>>();
    CompleteApprovalAsync(
    request,
    [prom](
        const EvtClient*,
        const CompleteApprovalRequest&,
        CompleteApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EvtClient::CreateRoleUserOutcome EvtClient::CreateRoleUser(const CreateRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleUserResponse rsp = CreateRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleUserOutcome(rsp);
        else
            return CreateRoleUserOutcome(o.GetError());
    }
    else
    {
        return CreateRoleUserOutcome(outcome.GetError());
    }
}

void EvtClient::CreateRoleUserAsync(const CreateRoleUserRequest& request, const CreateRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoleUserRequest&;
    using Resp = CreateRoleUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoleUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EvtClient::CreateRoleUserOutcomeCallable EvtClient::CreateRoleUserCallable(const CreateRoleUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleUserOutcome>>();
    CreateRoleUserAsync(
    request,
    [prom](
        const EvtClient*,
        const CreateRoleUserRequest&,
        CreateRoleUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EvtClient::DeleteRoleUserOutcome EvtClient::DeleteRoleUser(const DeleteRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleUserResponse rsp = DeleteRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleUserOutcome(rsp);
        else
            return DeleteRoleUserOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleUserOutcome(outcome.GetError());
    }
}

void EvtClient::DeleteRoleUserAsync(const DeleteRoleUserRequest& request, const DeleteRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoleUserRequest&;
    using Resp = DeleteRoleUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoleUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EvtClient::DeleteRoleUserOutcomeCallable EvtClient::DeleteRoleUserCallable(const DeleteRoleUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoleUserOutcome>>();
    DeleteRoleUserAsync(
    request,
    [prom](
        const EvtClient*,
        const DeleteRoleUserRequest&,
        DeleteRoleUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

