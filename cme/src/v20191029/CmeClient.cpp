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

#include <tencentcloud/cme/v20191029/CmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cme::V20191029;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-29";
    const string ENDPOINT = "cme.tencentcloudapi.com";
}

CmeClient::CmeClient(const Credential &credential, const string &region) :
    CmeClient(credential, region, ClientProfile())
{
}

CmeClient::CmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmeClient::AddTeamMemberOutcome CmeClient::AddTeamMember(const AddTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTeamMemberResponse rsp = AddTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTeamMemberOutcome(rsp);
        else
            return AddTeamMemberOutcome(o.GetError());
    }
    else
    {
        return AddTeamMemberOutcome(outcome.GetError());
    }
}

void CmeClient::AddTeamMemberAsync(const AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddTeamMemberRequest&;
    using Resp = AddTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "AddTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::AddTeamMemberOutcomeCallable CmeClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTeamMemberOutcome>>();
    AddTeamMemberAsync(
    request,
    [prom](
        const CmeClient*,
        const AddTeamMemberRequest&,
        AddTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CopyProjectOutcome CmeClient::CopyProject(const CopyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CopyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyProjectResponse rsp = CopyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyProjectOutcome(rsp);
        else
            return CopyProjectOutcome(o.GetError());
    }
    else
    {
        return CopyProjectOutcome(outcome.GetError());
    }
}

void CmeClient::CopyProjectAsync(const CopyProjectRequest& request, const CopyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyProjectRequest&;
    using Resp = CopyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CopyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CopyProjectOutcomeCallable CmeClient::CopyProjectCallable(const CopyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyProjectOutcome>>();
    CopyProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const CopyProjectRequest&,
        CopyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CreateClassOutcome CmeClient::CreateClass(const CreateClassRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClassResponse rsp = CreateClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClassOutcome(rsp);
        else
            return CreateClassOutcome(o.GetError());
    }
    else
    {
        return CreateClassOutcome(outcome.GetError());
    }
}

void CmeClient::CreateClassAsync(const CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClassRequest&;
    using Resp = CreateClassResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CreateClassOutcomeCallable CmeClient::CreateClassCallable(const CreateClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClassOutcome>>();
    CreateClassAsync(
    request,
    [prom](
        const CmeClient*,
        const CreateClassRequest&,
        CreateClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CreateLinkOutcome CmeClient::CreateLink(const CreateLinkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLinkResponse rsp = CreateLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLinkOutcome(rsp);
        else
            return CreateLinkOutcome(o.GetError());
    }
    else
    {
        return CreateLinkOutcome(outcome.GetError());
    }
}

void CmeClient::CreateLinkAsync(const CreateLinkRequest& request, const CreateLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLinkRequest&;
    using Resp = CreateLinkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLink", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CreateLinkOutcomeCallable CmeClient::CreateLinkCallable(const CreateLinkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLinkOutcome>>();
    CreateLinkAsync(
    request,
    [prom](
        const CmeClient*,
        const CreateLinkRequest&,
        CreateLinkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CreateProjectOutcome CmeClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void CmeClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectRequest&;
    using Resp = CreateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CreateProjectOutcomeCallable CmeClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CreateTeamOutcome CmeClient::CreateTeam(const CreateTeamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTeamResponse rsp = CreateTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTeamOutcome(rsp);
        else
            return CreateTeamOutcome(o.GetError());
    }
    else
    {
        return CreateTeamOutcome(outcome.GetError());
    }
}

void CmeClient::CreateTeamAsync(const CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTeamRequest&;
    using Resp = CreateTeamResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CreateTeamOutcomeCallable CmeClient::CreateTeamCallable(const CreateTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTeamOutcome>>();
    CreateTeamAsync(
    request,
    [prom](
        const CmeClient*,
        const CreateTeamRequest&,
        CreateTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::CreateVideoEncodingPresetOutcome CmeClient::CreateVideoEncodingPreset(const CreateVideoEncodingPresetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoEncodingPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoEncodingPresetResponse rsp = CreateVideoEncodingPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoEncodingPresetOutcome(rsp);
        else
            return CreateVideoEncodingPresetOutcome(o.GetError());
    }
    else
    {
        return CreateVideoEncodingPresetOutcome(outcome.GetError());
    }
}

void CmeClient::CreateVideoEncodingPresetAsync(const CreateVideoEncodingPresetRequest& request, const CreateVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoEncodingPresetRequest&;
    using Resp = CreateVideoEncodingPresetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoEncodingPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::CreateVideoEncodingPresetOutcomeCallable CmeClient::CreateVideoEncodingPresetCallable(const CreateVideoEncodingPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoEncodingPresetOutcome>>();
    CreateVideoEncodingPresetAsync(
    request,
    [prom](
        const CmeClient*,
        const CreateVideoEncodingPresetRequest&,
        CreateVideoEncodingPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteClassOutcome CmeClient::DeleteClass(const DeleteClassRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClassResponse rsp = DeleteClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClassOutcome(rsp);
        else
            return DeleteClassOutcome(o.GetError());
    }
    else
    {
        return DeleteClassOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteClassAsync(const DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClassRequest&;
    using Resp = DeleteClassResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteClassOutcomeCallable CmeClient::DeleteClassCallable(const DeleteClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClassOutcome>>();
    DeleteClassAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteClassRequest&,
        DeleteClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteLoginStatusOutcome CmeClient::DeleteLoginStatus(const DeleteLoginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoginStatusResponse rsp = DeleteLoginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoginStatusOutcome(rsp);
        else
            return DeleteLoginStatusOutcome(o.GetError());
    }
    else
    {
        return DeleteLoginStatusOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteLoginStatusAsync(const DeleteLoginStatusRequest& request, const DeleteLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoginStatusRequest&;
    using Resp = DeleteLoginStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoginStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteLoginStatusOutcomeCallable CmeClient::DeleteLoginStatusCallable(const DeleteLoginStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoginStatusOutcome>>();
    DeleteLoginStatusAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteLoginStatusRequest&,
        DeleteLoginStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteMaterialOutcome CmeClient::DeleteMaterial(const DeleteMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaterialResponse rsp = DeleteMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaterialOutcome(rsp);
        else
            return DeleteMaterialOutcome(o.GetError());
    }
    else
    {
        return DeleteMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteMaterialAsync(const DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMaterialRequest&;
    using Resp = DeleteMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteMaterialOutcomeCallable CmeClient::DeleteMaterialCallable(const DeleteMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMaterialOutcome>>();
    DeleteMaterialAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteMaterialRequest&,
        DeleteMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteProjectOutcome CmeClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteProjectOutcomeCallable CmeClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteTeamOutcome CmeClient::DeleteTeam(const DeleteTeamRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamResponse rsp = DeleteTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamOutcome(rsp);
        else
            return DeleteTeamOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteTeamAsync(const DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTeamRequest&;
    using Resp = DeleteTeamResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteTeamOutcomeCallable CmeClient::DeleteTeamCallable(const DeleteTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamOutcome>>();
    DeleteTeamAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteTeamRequest&,
        DeleteTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteTeamMembersOutcome CmeClient::DeleteTeamMembers(const DeleteTeamMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeamMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamMembersResponse rsp = DeleteTeamMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamMembersOutcome(rsp);
        else
            return DeleteTeamMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamMembersOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteTeamMembersAsync(const DeleteTeamMembersRequest& request, const DeleteTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTeamMembersRequest&;
    using Resp = DeleteTeamMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeamMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteTeamMembersOutcomeCallable CmeClient::DeleteTeamMembersCallable(const DeleteTeamMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamMembersOutcome>>();
    DeleteTeamMembersAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteTeamMembersRequest&,
        DeleteTeamMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DeleteVideoEncodingPresetOutcome CmeClient::DeleteVideoEncodingPreset(const DeleteVideoEncodingPresetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVideoEncodingPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVideoEncodingPresetResponse rsp = DeleteVideoEncodingPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVideoEncodingPresetOutcome(rsp);
        else
            return DeleteVideoEncodingPresetOutcome(o.GetError());
    }
    else
    {
        return DeleteVideoEncodingPresetOutcome(outcome.GetError());
    }
}

void CmeClient::DeleteVideoEncodingPresetAsync(const DeleteVideoEncodingPresetRequest& request, const DeleteVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVideoEncodingPresetRequest&;
    using Resp = DeleteVideoEncodingPresetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVideoEncodingPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DeleteVideoEncodingPresetOutcomeCallable CmeClient::DeleteVideoEncodingPresetCallable(const DeleteVideoEncodingPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVideoEncodingPresetOutcome>>();
    DeleteVideoEncodingPresetAsync(
    request,
    [prom](
        const CmeClient*,
        const DeleteVideoEncodingPresetRequest&,
        DeleteVideoEncodingPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeAccountsOutcome CmeClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountsRequest&;
    using Resp = DescribeAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeAccountsOutcomeCallable CmeClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeClassOutcome CmeClient::DescribeClass(const DescribeClassRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassResponse rsp = DescribeClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassOutcome(rsp);
        else
            return DescribeClassOutcome(o.GetError());
    }
    else
    {
        return DescribeClassOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeClassAsync(const DescribeClassRequest& request, const DescribeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassRequest&;
    using Resp = DescribeClassResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeClassOutcomeCallable CmeClient::DescribeClassCallable(const DescribeClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassOutcome>>();
    DescribeClassAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeClassRequest&,
        DescribeClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeJoinTeamsOutcome CmeClient::DescribeJoinTeams(const DescribeJoinTeamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJoinTeams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJoinTeamsResponse rsp = DescribeJoinTeamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJoinTeamsOutcome(rsp);
        else
            return DescribeJoinTeamsOutcome(o.GetError());
    }
    else
    {
        return DescribeJoinTeamsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeJoinTeamsAsync(const DescribeJoinTeamsRequest& request, const DescribeJoinTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJoinTeamsRequest&;
    using Resp = DescribeJoinTeamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJoinTeams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeJoinTeamsOutcomeCallable CmeClient::DescribeJoinTeamsCallable(const DescribeJoinTeamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJoinTeamsOutcome>>();
    DescribeJoinTeamsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeJoinTeamsRequest&,
        DescribeJoinTeamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeLoginStatusOutcome CmeClient::DescribeLoginStatus(const DescribeLoginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginStatusResponse rsp = DescribeLoginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginStatusOutcome(rsp);
        else
            return DescribeLoginStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginStatusOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeLoginStatusAsync(const DescribeLoginStatusRequest& request, const DescribeLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginStatusRequest&;
    using Resp = DescribeLoginStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeLoginStatusOutcomeCallable CmeClient::DescribeLoginStatusCallable(const DescribeLoginStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginStatusOutcome>>();
    DescribeLoginStatusAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeLoginStatusRequest&,
        DescribeLoginStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeMaterialsOutcome CmeClient::DescribeMaterials(const DescribeMaterialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaterials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaterialsResponse rsp = DescribeMaterialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaterialsOutcome(rsp);
        else
            return DescribeMaterialsOutcome(o.GetError());
    }
    else
    {
        return DescribeMaterialsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeMaterialsAsync(const DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaterialsRequest&;
    using Resp = DescribeMaterialsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaterials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeMaterialsOutcomeCallable CmeClient::DescribeMaterialsCallable(const DescribeMaterialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaterialsOutcome>>();
    DescribeMaterialsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeMaterialsRequest&,
        DescribeMaterialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribePlatformsOutcome CmeClient::DescribePlatforms(const DescribePlatformsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlatforms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlatformsResponse rsp = DescribePlatformsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlatformsOutcome(rsp);
        else
            return DescribePlatformsOutcome(o.GetError());
    }
    else
    {
        return DescribePlatformsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribePlatformsAsync(const DescribePlatformsRequest& request, const DescribePlatformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlatformsRequest&;
    using Resp = DescribePlatformsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlatforms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribePlatformsOutcomeCallable CmeClient::DescribePlatformsCallable(const DescribePlatformsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlatformsOutcome>>();
    DescribePlatformsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribePlatformsRequest&,
        DescribePlatformsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeProjectsOutcome CmeClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectsRequest&;
    using Resp = DescribeProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeProjectsOutcomeCallable CmeClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeResourceAuthorizationOutcome CmeClient::DescribeResourceAuthorization(const DescribeResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceAuthorizationResponse rsp = DescribeResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceAuthorizationOutcome(rsp);
        else
            return DescribeResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeResourceAuthorizationAsync(const DescribeResourceAuthorizationRequest& request, const DescribeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceAuthorizationRequest&;
    using Resp = DescribeResourceAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeResourceAuthorizationOutcomeCallable CmeClient::DescribeResourceAuthorizationCallable(const DescribeResourceAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceAuthorizationOutcome>>();
    DescribeResourceAuthorizationAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeResourceAuthorizationRequest&,
        DescribeResourceAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeSharedSpaceOutcome CmeClient::DescribeSharedSpace(const DescribeSharedSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSharedSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSharedSpaceResponse rsp = DescribeSharedSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSharedSpaceOutcome(rsp);
        else
            return DescribeSharedSpaceOutcome(o.GetError());
    }
    else
    {
        return DescribeSharedSpaceOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeSharedSpaceAsync(const DescribeSharedSpaceRequest& request, const DescribeSharedSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSharedSpaceRequest&;
    using Resp = DescribeSharedSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSharedSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeSharedSpaceOutcomeCallable CmeClient::DescribeSharedSpaceCallable(const DescribeSharedSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSharedSpaceOutcome>>();
    DescribeSharedSpaceAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeSharedSpaceRequest&,
        DescribeSharedSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeTaskDetailOutcome CmeClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeTaskDetailOutcomeCallable CmeClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeTasksOutcome CmeClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeTasksOutcomeCallable CmeClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeTeamMembersOutcome CmeClient::DescribeTeamMembers(const DescribeTeamMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamMembersResponse rsp = DescribeTeamMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamMembersOutcome(rsp);
        else
            return DescribeTeamMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamMembersOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTeamMembersAsync(const DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTeamMembersRequest&;
    using Resp = DescribeTeamMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeTeamMembersOutcomeCallable CmeClient::DescribeTeamMembersCallable(const DescribeTeamMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamMembersOutcome>>();
    DescribeTeamMembersAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeTeamMembersRequest&,
        DescribeTeamMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeTeamsOutcome CmeClient::DescribeTeams(const DescribeTeamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamsResponse rsp = DescribeTeamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamsOutcome(rsp);
        else
            return DescribeTeamsOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeTeamsAsync(const DescribeTeamsRequest& request, const DescribeTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTeamsRequest&;
    using Resp = DescribeTeamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeTeamsOutcomeCallable CmeClient::DescribeTeamsCallable(const DescribeTeamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamsOutcome>>();
    DescribeTeamsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeTeamsRequest&,
        DescribeTeamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::DescribeVideoEncodingPresetsOutcome CmeClient::DescribeVideoEncodingPresets(const DescribeVideoEncodingPresetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoEncodingPresets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoEncodingPresetsResponse rsp = DescribeVideoEncodingPresetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoEncodingPresetsOutcome(rsp);
        else
            return DescribeVideoEncodingPresetsOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoEncodingPresetsOutcome(outcome.GetError());
    }
}

void CmeClient::DescribeVideoEncodingPresetsAsync(const DescribeVideoEncodingPresetsRequest& request, const DescribeVideoEncodingPresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoEncodingPresetsRequest&;
    using Resp = DescribeVideoEncodingPresetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoEncodingPresets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::DescribeVideoEncodingPresetsOutcomeCallable CmeClient::DescribeVideoEncodingPresetsCallable(const DescribeVideoEncodingPresetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoEncodingPresetsOutcome>>();
    DescribeVideoEncodingPresetsAsync(
    request,
    [prom](
        const CmeClient*,
        const DescribeVideoEncodingPresetsRequest&,
        DescribeVideoEncodingPresetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ExportVideoByEditorTrackDataOutcome CmeClient::ExportVideoByEditorTrackData(const ExportVideoByEditorTrackDataRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVideoByEditorTrackData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVideoByEditorTrackDataResponse rsp = ExportVideoByEditorTrackDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVideoByEditorTrackDataOutcome(rsp);
        else
            return ExportVideoByEditorTrackDataOutcome(o.GetError());
    }
    else
    {
        return ExportVideoByEditorTrackDataOutcome(outcome.GetError());
    }
}

void CmeClient::ExportVideoByEditorTrackDataAsync(const ExportVideoByEditorTrackDataRequest& request, const ExportVideoByEditorTrackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVideoByEditorTrackDataRequest&;
    using Resp = ExportVideoByEditorTrackDataResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVideoByEditorTrackData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ExportVideoByEditorTrackDataOutcomeCallable CmeClient::ExportVideoByEditorTrackDataCallable(const ExportVideoByEditorTrackDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVideoByEditorTrackDataOutcome>>();
    ExportVideoByEditorTrackDataAsync(
    request,
    [prom](
        const CmeClient*,
        const ExportVideoByEditorTrackDataRequest&,
        ExportVideoByEditorTrackDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ExportVideoByTemplateOutcome CmeClient::ExportVideoByTemplate(const ExportVideoByTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVideoByTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVideoByTemplateResponse rsp = ExportVideoByTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVideoByTemplateOutcome(rsp);
        else
            return ExportVideoByTemplateOutcome(o.GetError());
    }
    else
    {
        return ExportVideoByTemplateOutcome(outcome.GetError());
    }
}

void CmeClient::ExportVideoByTemplateAsync(const ExportVideoByTemplateRequest& request, const ExportVideoByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVideoByTemplateRequest&;
    using Resp = ExportVideoByTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVideoByTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ExportVideoByTemplateOutcomeCallable CmeClient::ExportVideoByTemplateCallable(const ExportVideoByTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVideoByTemplateOutcome>>();
    ExportVideoByTemplateAsync(
    request,
    [prom](
        const CmeClient*,
        const ExportVideoByTemplateRequest&,
        ExportVideoByTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ExportVideoByVideoSegmentationDataOutcome CmeClient::ExportVideoByVideoSegmentationData(const ExportVideoByVideoSegmentationDataRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVideoByVideoSegmentationData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVideoByVideoSegmentationDataResponse rsp = ExportVideoByVideoSegmentationDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVideoByVideoSegmentationDataOutcome(rsp);
        else
            return ExportVideoByVideoSegmentationDataOutcome(o.GetError());
    }
    else
    {
        return ExportVideoByVideoSegmentationDataOutcome(outcome.GetError());
    }
}

void CmeClient::ExportVideoByVideoSegmentationDataAsync(const ExportVideoByVideoSegmentationDataRequest& request, const ExportVideoByVideoSegmentationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVideoByVideoSegmentationDataRequest&;
    using Resp = ExportVideoByVideoSegmentationDataResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVideoByVideoSegmentationData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ExportVideoByVideoSegmentationDataOutcomeCallable CmeClient::ExportVideoByVideoSegmentationDataCallable(const ExportVideoByVideoSegmentationDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVideoByVideoSegmentationDataOutcome>>();
    ExportVideoByVideoSegmentationDataAsync(
    request,
    [prom](
        const CmeClient*,
        const ExportVideoByVideoSegmentationDataRequest&,
        ExportVideoByVideoSegmentationDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ExportVideoEditProjectOutcome CmeClient::ExportVideoEditProject(const ExportVideoEditProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVideoEditProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVideoEditProjectResponse rsp = ExportVideoEditProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVideoEditProjectOutcome(rsp);
        else
            return ExportVideoEditProjectOutcome(o.GetError());
    }
    else
    {
        return ExportVideoEditProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ExportVideoEditProjectAsync(const ExportVideoEditProjectRequest& request, const ExportVideoEditProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVideoEditProjectRequest&;
    using Resp = ExportVideoEditProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVideoEditProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ExportVideoEditProjectOutcomeCallable CmeClient::ExportVideoEditProjectCallable(const ExportVideoEditProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVideoEditProjectOutcome>>();
    ExportVideoEditProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const ExportVideoEditProjectRequest&,
        ExportVideoEditProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::FlattenListMediaOutcome CmeClient::FlattenListMedia(const FlattenListMediaRequest &request)
{
    auto outcome = MakeRequest(request, "FlattenListMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlattenListMediaResponse rsp = FlattenListMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlattenListMediaOutcome(rsp);
        else
            return FlattenListMediaOutcome(o.GetError());
    }
    else
    {
        return FlattenListMediaOutcome(outcome.GetError());
    }
}

void CmeClient::FlattenListMediaAsync(const FlattenListMediaRequest& request, const FlattenListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FlattenListMediaRequest&;
    using Resp = FlattenListMediaResponse;

    DoRequestAsync<Req, Resp>(
        "FlattenListMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::FlattenListMediaOutcomeCallable CmeClient::FlattenListMediaCallable(const FlattenListMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<FlattenListMediaOutcome>>();
    FlattenListMediaAsync(
    request,
    [prom](
        const CmeClient*,
        const FlattenListMediaRequest&,
        FlattenListMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::GenerateVideoSegmentationSchemeByAiOutcome CmeClient::GenerateVideoSegmentationSchemeByAi(const GenerateVideoSegmentationSchemeByAiRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateVideoSegmentationSchemeByAi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateVideoSegmentationSchemeByAiResponse rsp = GenerateVideoSegmentationSchemeByAiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateVideoSegmentationSchemeByAiOutcome(rsp);
        else
            return GenerateVideoSegmentationSchemeByAiOutcome(o.GetError());
    }
    else
    {
        return GenerateVideoSegmentationSchemeByAiOutcome(outcome.GetError());
    }
}

void CmeClient::GenerateVideoSegmentationSchemeByAiAsync(const GenerateVideoSegmentationSchemeByAiRequest& request, const GenerateVideoSegmentationSchemeByAiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateVideoSegmentationSchemeByAiRequest&;
    using Resp = GenerateVideoSegmentationSchemeByAiResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateVideoSegmentationSchemeByAi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::GenerateVideoSegmentationSchemeByAiOutcomeCallable CmeClient::GenerateVideoSegmentationSchemeByAiCallable(const GenerateVideoSegmentationSchemeByAiRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateVideoSegmentationSchemeByAiOutcome>>();
    GenerateVideoSegmentationSchemeByAiAsync(
    request,
    [prom](
        const CmeClient*,
        const GenerateVideoSegmentationSchemeByAiRequest&,
        GenerateVideoSegmentationSchemeByAiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::GrantResourceAuthorizationOutcome CmeClient::GrantResourceAuthorization(const GrantResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "GrantResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantResourceAuthorizationResponse rsp = GrantResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantResourceAuthorizationOutcome(rsp);
        else
            return GrantResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return GrantResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::GrantResourceAuthorizationAsync(const GrantResourceAuthorizationRequest& request, const GrantResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantResourceAuthorizationRequest&;
    using Resp = GrantResourceAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "GrantResourceAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::GrantResourceAuthorizationOutcomeCallable CmeClient::GrantResourceAuthorizationCallable(const GrantResourceAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantResourceAuthorizationOutcome>>();
    GrantResourceAuthorizationAsync(
    request,
    [prom](
        const CmeClient*,
        const GrantResourceAuthorizationRequest&,
        GrantResourceAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::HandleMediaCastProjectOutcome CmeClient::HandleMediaCastProject(const HandleMediaCastProjectRequest &request)
{
    auto outcome = MakeRequest(request, "HandleMediaCastProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HandleMediaCastProjectResponse rsp = HandleMediaCastProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HandleMediaCastProjectOutcome(rsp);
        else
            return HandleMediaCastProjectOutcome(o.GetError());
    }
    else
    {
        return HandleMediaCastProjectOutcome(outcome.GetError());
    }
}

void CmeClient::HandleMediaCastProjectAsync(const HandleMediaCastProjectRequest& request, const HandleMediaCastProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HandleMediaCastProjectRequest&;
    using Resp = HandleMediaCastProjectResponse;

    DoRequestAsync<Req, Resp>(
        "HandleMediaCastProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::HandleMediaCastProjectOutcomeCallable CmeClient::HandleMediaCastProjectCallable(const HandleMediaCastProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<HandleMediaCastProjectOutcome>>();
    HandleMediaCastProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const HandleMediaCastProjectRequest&,
        HandleMediaCastProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::HandleStreamConnectProjectOutcome CmeClient::HandleStreamConnectProject(const HandleStreamConnectProjectRequest &request)
{
    auto outcome = MakeRequest(request, "HandleStreamConnectProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HandleStreamConnectProjectResponse rsp = HandleStreamConnectProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HandleStreamConnectProjectOutcome(rsp);
        else
            return HandleStreamConnectProjectOutcome(o.GetError());
    }
    else
    {
        return HandleStreamConnectProjectOutcome(outcome.GetError());
    }
}

void CmeClient::HandleStreamConnectProjectAsync(const HandleStreamConnectProjectRequest& request, const HandleStreamConnectProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HandleStreamConnectProjectRequest&;
    using Resp = HandleStreamConnectProjectResponse;

    DoRequestAsync<Req, Resp>(
        "HandleStreamConnectProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::HandleStreamConnectProjectOutcomeCallable CmeClient::HandleStreamConnectProjectCallable(const HandleStreamConnectProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<HandleStreamConnectProjectOutcome>>();
    HandleStreamConnectProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const HandleStreamConnectProjectRequest&,
        HandleStreamConnectProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ImportMaterialOutcome CmeClient::ImportMaterial(const ImportMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMaterialResponse rsp = ImportMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMaterialOutcome(rsp);
        else
            return ImportMaterialOutcome(o.GetError());
    }
    else
    {
        return ImportMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::ImportMaterialAsync(const ImportMaterialRequest& request, const ImportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportMaterialRequest&;
    using Resp = ImportMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "ImportMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ImportMaterialOutcomeCallable CmeClient::ImportMaterialCallable(const ImportMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportMaterialOutcome>>();
    ImportMaterialAsync(
    request,
    [prom](
        const CmeClient*,
        const ImportMaterialRequest&,
        ImportMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ImportMediaToProjectOutcome CmeClient::ImportMediaToProject(const ImportMediaToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMediaToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMediaToProjectResponse rsp = ImportMediaToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMediaToProjectOutcome(rsp);
        else
            return ImportMediaToProjectOutcome(o.GetError());
    }
    else
    {
        return ImportMediaToProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ImportMediaToProjectAsync(const ImportMediaToProjectRequest& request, const ImportMediaToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportMediaToProjectRequest&;
    using Resp = ImportMediaToProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ImportMediaToProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ImportMediaToProjectOutcomeCallable CmeClient::ImportMediaToProjectCallable(const ImportMediaToProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportMediaToProjectOutcome>>();
    ImportMediaToProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const ImportMediaToProjectRequest&,
        ImportMediaToProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ListMediaOutcome CmeClient::ListMedia(const ListMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ListMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMediaResponse rsp = ListMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMediaOutcome(rsp);
        else
            return ListMediaOutcome(o.GetError());
    }
    else
    {
        return ListMediaOutcome(outcome.GetError());
    }
}

void CmeClient::ListMediaAsync(const ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListMediaRequest&;
    using Resp = ListMediaResponse;

    DoRequestAsync<Req, Resp>(
        "ListMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ListMediaOutcomeCallable CmeClient::ListMediaCallable(const ListMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListMediaOutcome>>();
    ListMediaAsync(
    request,
    [prom](
        const CmeClient*,
        const ListMediaRequest&,
        ListMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ModifyMaterialOutcome CmeClient::ModifyMaterial(const ModifyMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaterialResponse rsp = ModifyMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaterialOutcome(rsp);
        else
            return ModifyMaterialOutcome(o.GetError());
    }
    else
    {
        return ModifyMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyMaterialAsync(const ModifyMaterialRequest& request, const ModifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaterialRequest&;
    using Resp = ModifyMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ModifyMaterialOutcomeCallable CmeClient::ModifyMaterialCallable(const ModifyMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaterialOutcome>>();
    ModifyMaterialAsync(
    request,
    [prom](
        const CmeClient*,
        const ModifyMaterialRequest&,
        ModifyMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ModifyProjectOutcome CmeClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ModifyProjectOutcomeCallable CmeClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const CmeClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ModifyTeamOutcome CmeClient::ModifyTeam(const ModifyTeamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamResponse rsp = ModifyTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamOutcome(rsp);
        else
            return ModifyTeamOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyTeamAsync(const ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTeamRequest&;
    using Resp = ModifyTeamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ModifyTeamOutcomeCallable CmeClient::ModifyTeamCallable(const ModifyTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamOutcome>>();
    ModifyTeamAsync(
    request,
    [prom](
        const CmeClient*,
        const ModifyTeamRequest&,
        ModifyTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ModifyTeamMemberOutcome CmeClient::ModifyTeamMember(const ModifyTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamMemberResponse rsp = ModifyTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamMemberOutcome(rsp);
        else
            return ModifyTeamMemberOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamMemberOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyTeamMemberAsync(const ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTeamMemberRequest&;
    using Resp = ModifyTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ModifyTeamMemberOutcomeCallable CmeClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamMemberOutcome>>();
    ModifyTeamMemberAsync(
    request,
    [prom](
        const CmeClient*,
        const ModifyTeamMemberRequest&,
        ModifyTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ModifyVideoEncodingPresetOutcome CmeClient::ModifyVideoEncodingPreset(const ModifyVideoEncodingPresetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVideoEncodingPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVideoEncodingPresetResponse rsp = ModifyVideoEncodingPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVideoEncodingPresetOutcome(rsp);
        else
            return ModifyVideoEncodingPresetOutcome(o.GetError());
    }
    else
    {
        return ModifyVideoEncodingPresetOutcome(outcome.GetError());
    }
}

void CmeClient::ModifyVideoEncodingPresetAsync(const ModifyVideoEncodingPresetRequest& request, const ModifyVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVideoEncodingPresetRequest&;
    using Resp = ModifyVideoEncodingPresetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVideoEncodingPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ModifyVideoEncodingPresetOutcomeCallable CmeClient::ModifyVideoEncodingPresetCallable(const ModifyVideoEncodingPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVideoEncodingPresetOutcome>>();
    ModifyVideoEncodingPresetAsync(
    request,
    [prom](
        const CmeClient*,
        const ModifyVideoEncodingPresetRequest&,
        ModifyVideoEncodingPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::MoveClassOutcome CmeClient::MoveClass(const MoveClassRequest &request)
{
    auto outcome = MakeRequest(request, "MoveClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveClassResponse rsp = MoveClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveClassOutcome(rsp);
        else
            return MoveClassOutcome(o.GetError());
    }
    else
    {
        return MoveClassOutcome(outcome.GetError());
    }
}

void CmeClient::MoveClassAsync(const MoveClassRequest& request, const MoveClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MoveClassRequest&;
    using Resp = MoveClassResponse;

    DoRequestAsync<Req, Resp>(
        "MoveClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::MoveClassOutcomeCallable CmeClient::MoveClassCallable(const MoveClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<MoveClassOutcome>>();
    MoveClassAsync(
    request,
    [prom](
        const CmeClient*,
        const MoveClassRequest&,
        MoveClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::MoveResourceOutcome CmeClient::MoveResource(const MoveResourceRequest &request)
{
    auto outcome = MakeRequest(request, "MoveResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveResourceResponse rsp = MoveResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveResourceOutcome(rsp);
        else
            return MoveResourceOutcome(o.GetError());
    }
    else
    {
        return MoveResourceOutcome(outcome.GetError());
    }
}

void CmeClient::MoveResourceAsync(const MoveResourceRequest& request, const MoveResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MoveResourceRequest&;
    using Resp = MoveResourceResponse;

    DoRequestAsync<Req, Resp>(
        "MoveResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::MoveResourceOutcomeCallable CmeClient::MoveResourceCallable(const MoveResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<MoveResourceOutcome>>();
    MoveResourceAsync(
    request,
    [prom](
        const CmeClient*,
        const MoveResourceRequest&,
        MoveResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::ParseEventOutcome CmeClient::ParseEvent(const ParseEventRequest &request)
{
    auto outcome = MakeRequest(request, "ParseEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseEventResponse rsp = ParseEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseEventOutcome(rsp);
        else
            return ParseEventOutcome(o.GetError());
    }
    else
    {
        return ParseEventOutcome(outcome.GetError());
    }
}

void CmeClient::ParseEventAsync(const ParseEventRequest& request, const ParseEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ParseEventRequest&;
    using Resp = ParseEventResponse;

    DoRequestAsync<Req, Resp>(
        "ParseEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::ParseEventOutcomeCallable CmeClient::ParseEventCallable(const ParseEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseEventOutcome>>();
    ParseEventAsync(
    request,
    [prom](
        const CmeClient*,
        const ParseEventRequest&,
        ParseEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::RevokeResourceAuthorizationOutcome CmeClient::RevokeResourceAuthorization(const RevokeResourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeResourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeResourceAuthorizationResponse rsp = RevokeResourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeResourceAuthorizationOutcome(rsp);
        else
            return RevokeResourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return RevokeResourceAuthorizationOutcome(outcome.GetError());
    }
}

void CmeClient::RevokeResourceAuthorizationAsync(const RevokeResourceAuthorizationRequest& request, const RevokeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeResourceAuthorizationRequest&;
    using Resp = RevokeResourceAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeResourceAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::RevokeResourceAuthorizationOutcomeCallable CmeClient::RevokeResourceAuthorizationCallable(const RevokeResourceAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeResourceAuthorizationOutcome>>();
    RevokeResourceAuthorizationAsync(
    request,
    [prom](
        const CmeClient*,
        const RevokeResourceAuthorizationRequest&,
        RevokeResourceAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmeClient::SearchMaterialOutcome CmeClient::SearchMaterial(const SearchMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "SearchMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchMaterialResponse rsp = SearchMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchMaterialOutcome(rsp);
        else
            return SearchMaterialOutcome(o.GetError());
    }
    else
    {
        return SearchMaterialOutcome(outcome.GetError());
    }
}

void CmeClient::SearchMaterialAsync(const SearchMaterialRequest& request, const SearchMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchMaterialRequest&;
    using Resp = SearchMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "SearchMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmeClient::SearchMaterialOutcomeCallable CmeClient::SearchMaterialCallable(const SearchMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchMaterialOutcome>>();
    SearchMaterialAsync(
    request,
    [prom](
        const CmeClient*,
        const SearchMaterialRequest&,
        SearchMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

