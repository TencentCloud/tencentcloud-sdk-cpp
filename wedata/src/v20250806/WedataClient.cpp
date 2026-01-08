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

#include <tencentcloud/wedata/v20250806/WedataClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wedata::V20250806;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-08-06";
    const string ENDPOINT = "wedata.tencentcloudapi.com";
}

WedataClient::WedataClient(const Credential &credential, const string &region) :
    WedataClient(credential, region, ClientProfile())
{
}

WedataClient::WedataClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WedataClient::AddCalcEnginesToProjectOutcome WedataClient::AddCalcEnginesToProject(const AddCalcEnginesToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AddCalcEnginesToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCalcEnginesToProjectResponse rsp = AddCalcEnginesToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCalcEnginesToProjectOutcome(rsp);
        else
            return AddCalcEnginesToProjectOutcome(o.GetError());
    }
    else
    {
        return AddCalcEnginesToProjectOutcome(outcome.GetError());
    }
}

void WedataClient::AddCalcEnginesToProjectAsync(const AddCalcEnginesToProjectRequest& request, const AddCalcEnginesToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCalcEnginesToProjectRequest&;
    using Resp = AddCalcEnginesToProjectResponse;

    DoRequestAsync<Req, Resp>(
        "AddCalcEnginesToProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::AddCalcEnginesToProjectOutcomeCallable WedataClient::AddCalcEnginesToProjectCallable(const AddCalcEnginesToProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCalcEnginesToProjectOutcome>>();
    AddCalcEnginesToProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const AddCalcEnginesToProjectRequest&,
        AddCalcEnginesToProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::AssociateResourceGroupToProjectOutcome WedataClient::AssociateResourceGroupToProject(const AssociateResourceGroupToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateResourceGroupToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateResourceGroupToProjectResponse rsp = AssociateResourceGroupToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateResourceGroupToProjectOutcome(rsp);
        else
            return AssociateResourceGroupToProjectOutcome(o.GetError());
    }
    else
    {
        return AssociateResourceGroupToProjectOutcome(outcome.GetError());
    }
}

void WedataClient::AssociateResourceGroupToProjectAsync(const AssociateResourceGroupToProjectRequest& request, const AssociateResourceGroupToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateResourceGroupToProjectRequest&;
    using Resp = AssociateResourceGroupToProjectResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateResourceGroupToProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::AssociateResourceGroupToProjectOutcomeCallable WedataClient::AssociateResourceGroupToProjectCallable(const AssociateResourceGroupToProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateResourceGroupToProjectOutcome>>();
    AssociateResourceGroupToProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const AssociateResourceGroupToProjectRequest&,
        AssociateResourceGroupToProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::AuthorizeDataSourceOutcome WedataClient::AuthorizeDataSource(const AuthorizeDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "AuthorizeDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthorizeDataSourceResponse rsp = AuthorizeDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthorizeDataSourceOutcome(rsp);
        else
            return AuthorizeDataSourceOutcome(o.GetError());
    }
    else
    {
        return AuthorizeDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::AuthorizeDataSourceAsync(const AuthorizeDataSourceRequest& request, const AuthorizeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuthorizeDataSourceRequest&;
    using Resp = AuthorizeDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "AuthorizeDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::AuthorizeDataSourceOutcomeCallable WedataClient::AuthorizeDataSourceCallable(const AuthorizeDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuthorizeDataSourceOutcome>>();
    AuthorizeDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const AuthorizeDataSourceRequest&,
        AuthorizeDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCodeFileOutcome WedataClient::CreateCodeFile(const CreateCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeFileResponse rsp = CreateCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeFileOutcome(rsp);
        else
            return CreateCodeFileOutcome(o.GetError());
    }
    else
    {
        return CreateCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeFileAsync(const CreateCodeFileRequest& request, const CreateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeFileRequest&;
    using Resp = CreateCodeFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCodeFileOutcomeCallable WedataClient::CreateCodeFileCallable(const CreateCodeFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeFileOutcome>>();
    CreateCodeFileAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCodeFileRequest&,
        CreateCodeFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCodeFolderOutcome WedataClient::CreateCodeFolder(const CreateCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeFolderResponse rsp = CreateCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeFolderOutcome(rsp);
        else
            return CreateCodeFolderOutcome(o.GetError());
    }
    else
    {
        return CreateCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeFolderAsync(const CreateCodeFolderRequest& request, const CreateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeFolderRequest&;
    using Resp = CreateCodeFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCodeFolderOutcomeCallable WedataClient::CreateCodeFolderCallable(const CreateCodeFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeFolderOutcome>>();
    CreateCodeFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCodeFolderRequest&,
        CreateCodeFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCodePermissionsOutcome WedataClient::CreateCodePermissions(const CreateCodePermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodePermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodePermissionsResponse rsp = CreateCodePermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodePermissionsOutcome(rsp);
        else
            return CreateCodePermissionsOutcome(o.GetError());
    }
    else
    {
        return CreateCodePermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodePermissionsAsync(const CreateCodePermissionsRequest& request, const CreateCodePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodePermissionsRequest&;
    using Resp = CreateCodePermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodePermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCodePermissionsOutcomeCallable WedataClient::CreateCodePermissionsCallable(const CreateCodePermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodePermissionsOutcome>>();
    CreateCodePermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCodePermissionsRequest&,
        CreateCodePermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateDataBackfillPlanOutcome WedataClient::CreateDataBackfillPlan(const CreateDataBackfillPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataBackfillPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataBackfillPlanResponse rsp = CreateDataBackfillPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataBackfillPlanOutcome(rsp);
        else
            return CreateDataBackfillPlanOutcome(o.GetError());
    }
    else
    {
        return CreateDataBackfillPlanOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataBackfillPlanAsync(const CreateDataBackfillPlanRequest& request, const CreateDataBackfillPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataBackfillPlanRequest&;
    using Resp = CreateDataBackfillPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataBackfillPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateDataBackfillPlanOutcomeCallable WedataClient::CreateDataBackfillPlanCallable(const CreateDataBackfillPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataBackfillPlanOutcome>>();
    CreateDataBackfillPlanAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateDataBackfillPlanRequest&,
        CreateDataBackfillPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateDataSourceOutcome WedataClient::CreateDataSource(const CreateDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataSourceResponse rsp = CreateDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataSourceOutcome(rsp);
        else
            return CreateDataSourceOutcome(o.GetError());
    }
    else
    {
        return CreateDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataSourceRequest&;
    using Resp = CreateDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateDataSourceOutcomeCallable WedataClient::CreateDataSourceCallable(const CreateDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataSourceOutcome>>();
    CreateDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateDataSourceRequest&,
        CreateDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateOpsAlarmRuleOutcome WedataClient::CreateOpsAlarmRule(const CreateOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpsAlarmRuleResponse rsp = CreateOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpsAlarmRuleOutcome(rsp);
        else
            return CreateOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return CreateOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOpsAlarmRuleAsync(const CreateOpsAlarmRuleRequest& request, const CreateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpsAlarmRuleRequest&;
    using Resp = CreateOpsAlarmRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpsAlarmRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateOpsAlarmRuleOutcomeCallable WedataClient::CreateOpsAlarmRuleCallable(const CreateOpsAlarmRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpsAlarmRuleOutcome>>();
    CreateOpsAlarmRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateOpsAlarmRuleRequest&,
        CreateOpsAlarmRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateProjectOutcome WedataClient::CreateProject(const CreateProjectRequest &request)
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

void WedataClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

WedataClient::CreateProjectOutcomeCallable WedataClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateProjectMemberOutcome WedataClient::CreateProjectMember(const CreateProjectMemberRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProjectMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectMemberResponse rsp = CreateProjectMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectMemberOutcome(rsp);
        else
            return CreateProjectMemberOutcome(o.GetError());
    }
    else
    {
        return CreateProjectMemberOutcome(outcome.GetError());
    }
}

void WedataClient::CreateProjectMemberAsync(const CreateProjectMemberRequest& request, const CreateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectMemberRequest&;
    using Resp = CreateProjectMemberResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProjectMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateProjectMemberOutcomeCallable WedataClient::CreateProjectMemberCallable(const CreateProjectMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectMemberOutcome>>();
    CreateProjectMemberAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateProjectMemberRequest&,
        CreateProjectMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateQualityRuleOutcome WedataClient::CreateQualityRule(const CreateQualityRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityRuleResponse rsp = CreateQualityRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityRuleOutcome(rsp);
        else
            return CreateQualityRuleOutcome(o.GetError());
    }
    else
    {
        return CreateQualityRuleOutcome(outcome.GetError());
    }
}

void WedataClient::CreateQualityRuleAsync(const CreateQualityRuleRequest& request, const CreateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQualityRuleRequest&;
    using Resp = CreateQualityRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQualityRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateQualityRuleOutcomeCallable WedataClient::CreateQualityRuleCallable(const CreateQualityRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQualityRuleOutcome>>();
    CreateQualityRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateQualityRuleRequest&,
        CreateQualityRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateQualityRuleGroupOutcome WedataClient::CreateQualityRuleGroup(const CreateQualityRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityRuleGroupResponse rsp = CreateQualityRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityRuleGroupOutcome(rsp);
        else
            return CreateQualityRuleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateQualityRuleGroupOutcome(outcome.GetError());
    }
}

void WedataClient::CreateQualityRuleGroupAsync(const CreateQualityRuleGroupRequest& request, const CreateQualityRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQualityRuleGroupRequest&;
    using Resp = CreateQualityRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQualityRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateQualityRuleGroupOutcomeCallable WedataClient::CreateQualityRuleGroupCallable(const CreateQualityRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQualityRuleGroupOutcome>>();
    CreateQualityRuleGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateQualityRuleGroupRequest&,
        CreateQualityRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateResourceFileOutcome WedataClient::CreateResourceFile(const CreateResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceFileResponse rsp = CreateResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceFileOutcome(rsp);
        else
            return CreateResourceFileOutcome(o.GetError());
    }
    else
    {
        return CreateResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourceFileAsync(const CreateResourceFileRequest& request, const CreateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceFileRequest&;
    using Resp = CreateResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateResourceFileOutcomeCallable WedataClient::CreateResourceFileCallable(const CreateResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceFileOutcome>>();
    CreateResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateResourceFileRequest&,
        CreateResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateResourceFolderOutcome WedataClient::CreateResourceFolder(const CreateResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceFolderResponse rsp = CreateResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceFolderOutcome(rsp);
        else
            return CreateResourceFolderOutcome(o.GetError());
    }
    else
    {
        return CreateResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourceFolderAsync(const CreateResourceFolderRequest& request, const CreateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceFolderRequest&;
    using Resp = CreateResourceFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateResourceFolderOutcomeCallable WedataClient::CreateResourceFolderCallable(const CreateResourceFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceFolderOutcome>>();
    CreateResourceFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateResourceFolderRequest&,
        CreateResourceFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateResourceGroupOutcome WedataClient::CreateResourceGroup(const CreateResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceGroupResponse rsp = CreateResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceGroupOutcome(rsp);
        else
            return CreateResourceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateResourceGroupOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourceGroupAsync(const CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceGroupRequest&;
    using Resp = CreateResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateResourceGroupOutcomeCallable WedataClient::CreateResourceGroupCallable(const CreateResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceGroupOutcome>>();
    CreateResourceGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateResourceGroupRequest&,
        CreateResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateSQLFolderOutcome WedataClient::CreateSQLFolder(const CreateSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSQLFolderResponse rsp = CreateSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSQLFolderOutcome(rsp);
        else
            return CreateSQLFolderOutcome(o.GetError());
    }
    else
    {
        return CreateSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateSQLFolderAsync(const CreateSQLFolderRequest& request, const CreateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSQLFolderRequest&;
    using Resp = CreateSQLFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSQLFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateSQLFolderOutcomeCallable WedataClient::CreateSQLFolderCallable(const CreateSQLFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSQLFolderOutcome>>();
    CreateSQLFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateSQLFolderRequest&,
        CreateSQLFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateSQLScriptOutcome WedataClient::CreateSQLScript(const CreateSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSQLScriptResponse rsp = CreateSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSQLScriptOutcome(rsp);
        else
            return CreateSQLScriptOutcome(o.GetError());
    }
    else
    {
        return CreateSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::CreateSQLScriptAsync(const CreateSQLScriptRequest& request, const CreateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSQLScriptRequest&;
    using Resp = CreateSQLScriptResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSQLScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateSQLScriptOutcomeCallable WedataClient::CreateSQLScriptCallable(const CreateSQLScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSQLScriptOutcome>>();
    CreateSQLScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateSQLScriptRequest&,
        CreateSQLScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskOutcome WedataClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskOutcomeCallable WedataClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskFolderOutcome WedataClient::CreateTaskFolder(const CreateTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFolderResponse rsp = CreateTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFolderOutcome(rsp);
        else
            return CreateTaskFolderOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskFolderAsync(const CreateTaskFolderRequest& request, const CreateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskFolderRequest&;
    using Resp = CreateTaskFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskFolderOutcomeCallable WedataClient::CreateTaskFolderCallable(const CreateTaskFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskFolderOutcome>>();
    CreateTaskFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskFolderRequest&,
        CreateTaskFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTriggerTaskOutcome WedataClient::CreateTriggerTask(const CreateTriggerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTriggerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTriggerTaskResponse rsp = CreateTriggerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTriggerTaskOutcome(rsp);
        else
            return CreateTriggerTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTriggerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTriggerTaskAsync(const CreateTriggerTaskRequest& request, const CreateTriggerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTriggerTaskRequest&;
    using Resp = CreateTriggerTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTriggerTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTriggerTaskOutcomeCallable WedataClient::CreateTriggerTaskCallable(const CreateTriggerTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTriggerTaskOutcome>>();
    CreateTriggerTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTriggerTaskRequest&,
        CreateTriggerTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTriggerWorkflowOutcome WedataClient::CreateTriggerWorkflow(const CreateTriggerWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTriggerWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTriggerWorkflowResponse rsp = CreateTriggerWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTriggerWorkflowOutcome(rsp);
        else
            return CreateTriggerWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateTriggerWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTriggerWorkflowAsync(const CreateTriggerWorkflowRequest& request, const CreateTriggerWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTriggerWorkflowRequest&;
    using Resp = CreateTriggerWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTriggerWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTriggerWorkflowOutcomeCallable WedataClient::CreateTriggerWorkflowCallable(const CreateTriggerWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTriggerWorkflowOutcome>>();
    CreateTriggerWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTriggerWorkflowRequest&,
        CreateTriggerWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateWorkflowOutcome WedataClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowRequest&;
    using Resp = CreateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateWorkflowOutcomeCallable WedataClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowOutcome>>();
    CreateWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateWorkflowRequest&,
        CreateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateWorkflowFolderOutcome WedataClient::CreateWorkflowFolder(const CreateWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowFolderResponse rsp = CreateWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowFolderOutcome(rsp);
        else
            return CreateWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowFolderAsync(const CreateWorkflowFolderRequest& request, const CreateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowFolderRequest&;
    using Resp = CreateWorkflowFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflowFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateWorkflowFolderOutcomeCallable WedataClient::CreateWorkflowFolderCallable(const CreateWorkflowFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowFolderOutcome>>();
    CreateWorkflowFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateWorkflowFolderRequest&,
        CreateWorkflowFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateWorkflowPermissionsOutcome WedataClient::CreateWorkflowPermissions(const CreateWorkflowPermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowPermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowPermissionsResponse rsp = CreateWorkflowPermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowPermissionsOutcome(rsp);
        else
            return CreateWorkflowPermissionsOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowPermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowPermissionsAsync(const CreateWorkflowPermissionsRequest& request, const CreateWorkflowPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowPermissionsRequest&;
    using Resp = CreateWorkflowPermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflowPermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateWorkflowPermissionsOutcomeCallable WedataClient::CreateWorkflowPermissionsCallable(const CreateWorkflowPermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowPermissionsOutcome>>();
    CreateWorkflowPermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateWorkflowPermissionsRequest&,
        CreateWorkflowPermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteCodeFileOutcome WedataClient::DeleteCodeFile(const DeleteCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeFileResponse rsp = DeleteCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeFileOutcome(rsp);
        else
            return DeleteCodeFileOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeFileAsync(const DeleteCodeFileRequest& request, const DeleteCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodeFileRequest&;
    using Resp = DeleteCodeFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodeFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteCodeFileOutcomeCallable WedataClient::DeleteCodeFileCallable(const DeleteCodeFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodeFileOutcome>>();
    DeleteCodeFileAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteCodeFileRequest&,
        DeleteCodeFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteCodeFolderOutcome WedataClient::DeleteCodeFolder(const DeleteCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeFolderResponse rsp = DeleteCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeFolderOutcome(rsp);
        else
            return DeleteCodeFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeFolderAsync(const DeleteCodeFolderRequest& request, const DeleteCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodeFolderRequest&;
    using Resp = DeleteCodeFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodeFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteCodeFolderOutcomeCallable WedataClient::DeleteCodeFolderCallable(const DeleteCodeFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodeFolderOutcome>>();
    DeleteCodeFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteCodeFolderRequest&,
        DeleteCodeFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteCodePermissionsOutcome WedataClient::DeleteCodePermissions(const DeleteCodePermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodePermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodePermissionsResponse rsp = DeleteCodePermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodePermissionsOutcome(rsp);
        else
            return DeleteCodePermissionsOutcome(o.GetError());
    }
    else
    {
        return DeleteCodePermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodePermissionsAsync(const DeleteCodePermissionsRequest& request, const DeleteCodePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodePermissionsRequest&;
    using Resp = DeleteCodePermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodePermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteCodePermissionsOutcomeCallable WedataClient::DeleteCodePermissionsCallable(const DeleteCodePermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodePermissionsOutcome>>();
    DeleteCodePermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteCodePermissionsRequest&,
        DeleteCodePermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteDataBackfillPlanAsyncOutcome WedataClient::DeleteDataBackfillPlanAsync(const DeleteDataBackfillPlanAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataBackfillPlanAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataBackfillPlanAsyncResponse rsp = DeleteDataBackfillPlanAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataBackfillPlanAsyncOutcome(rsp);
        else
            return DeleteDataBackfillPlanAsyncOutcome(o.GetError());
    }
    else
    {
        return DeleteDataBackfillPlanAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataBackfillPlanAsyncAsync(const DeleteDataBackfillPlanAsyncRequest& request, const DeleteDataBackfillPlanAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataBackfillPlanAsyncRequest&;
    using Resp = DeleteDataBackfillPlanAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataBackfillPlanAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteDataBackfillPlanAsyncOutcomeCallable WedataClient::DeleteDataBackfillPlanAsyncCallable(const DeleteDataBackfillPlanAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataBackfillPlanAsyncOutcome>>();
    DeleteDataBackfillPlanAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteDataBackfillPlanAsyncRequest&,
        DeleteDataBackfillPlanAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteDataSourceOutcome WedataClient::DeleteDataSource(const DeleteDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataSourceResponse rsp = DeleteDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataSourceOutcome(rsp);
        else
            return DeleteDataSourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataSourceRequest&;
    using Resp = DeleteDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteDataSourceOutcomeCallable WedataClient::DeleteDataSourceCallable(const DeleteDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataSourceOutcome>>();
    DeleteDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteDataSourceRequest&,
        DeleteDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteLineageOutcome WedataClient::DeleteLineage(const DeleteLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLineageResponse rsp = DeleteLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLineageOutcome(rsp);
        else
            return DeleteLineageOutcome(o.GetError());
    }
    else
    {
        return DeleteLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteLineageAsync(const DeleteLineageRequest& request, const DeleteLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLineageRequest&;
    using Resp = DeleteLineageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteLineageOutcomeCallable WedataClient::DeleteLineageCallable(const DeleteLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLineageOutcome>>();
    DeleteLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteLineageRequest&,
        DeleteLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteOpsAlarmRuleOutcome WedataClient::DeleteOpsAlarmRule(const DeleteOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOpsAlarmRuleResponse rsp = DeleteOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOpsAlarmRuleOutcome(rsp);
        else
            return DeleteOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteOpsAlarmRuleAsync(const DeleteOpsAlarmRuleRequest& request, const DeleteOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOpsAlarmRuleRequest&;
    using Resp = DeleteOpsAlarmRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOpsAlarmRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteOpsAlarmRuleOutcomeCallable WedataClient::DeleteOpsAlarmRuleCallable(const DeleteOpsAlarmRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOpsAlarmRuleOutcome>>();
    DeleteOpsAlarmRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteOpsAlarmRuleRequest&,
        DeleteOpsAlarmRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteProjectOutcome WedataClient::DeleteProject(const DeleteProjectRequest &request)
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

void WedataClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

WedataClient::DeleteProjectOutcomeCallable WedataClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteProjectMemberOutcome WedataClient::DeleteProjectMember(const DeleteProjectMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectMemberResponse rsp = DeleteProjectMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectMemberOutcome(rsp);
        else
            return DeleteProjectMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectMemberOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectMemberAsync(const DeleteProjectMemberRequest& request, const DeleteProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectMemberRequest&;
    using Resp = DeleteProjectMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjectMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteProjectMemberOutcomeCallable WedataClient::DeleteProjectMemberCallable(const DeleteProjectMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectMemberOutcome>>();
    DeleteProjectMemberAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteProjectMemberRequest&,
        DeleteProjectMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteQualityRuleOutcome WedataClient::DeleteQualityRule(const DeleteQualityRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQualityRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQualityRuleResponse rsp = DeleteQualityRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQualityRuleOutcome(rsp);
        else
            return DeleteQualityRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteQualityRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteQualityRuleAsync(const DeleteQualityRuleRequest& request, const DeleteQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQualityRuleRequest&;
    using Resp = DeleteQualityRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQualityRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteQualityRuleOutcomeCallable WedataClient::DeleteQualityRuleCallable(const DeleteQualityRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQualityRuleOutcome>>();
    DeleteQualityRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteQualityRuleRequest&,
        DeleteQualityRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteQualityRuleGroupOutcome WedataClient::DeleteQualityRuleGroup(const DeleteQualityRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQualityRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQualityRuleGroupResponse rsp = DeleteQualityRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQualityRuleGroupOutcome(rsp);
        else
            return DeleteQualityRuleGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteQualityRuleGroupOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteQualityRuleGroupAsync(const DeleteQualityRuleGroupRequest& request, const DeleteQualityRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQualityRuleGroupRequest&;
    using Resp = DeleteQualityRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQualityRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteQualityRuleGroupOutcomeCallable WedataClient::DeleteQualityRuleGroupCallable(const DeleteQualityRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQualityRuleGroupOutcome>>();
    DeleteQualityRuleGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteQualityRuleGroupRequest&,
        DeleteQualityRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceFileOutcome WedataClient::DeleteResourceFile(const DeleteResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFileResponse rsp = DeleteResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFileOutcome(rsp);
        else
            return DeleteResourceFileOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFileAsync(const DeleteResourceFileRequest& request, const DeleteResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceFileRequest&;
    using Resp = DeleteResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceFileOutcomeCallable WedataClient::DeleteResourceFileCallable(const DeleteResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceFileOutcome>>();
    DeleteResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceFileRequest&,
        DeleteResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceFolderOutcome WedataClient::DeleteResourceFolder(const DeleteResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFolderResponse rsp = DeleteResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFolderOutcome(rsp);
        else
            return DeleteResourceFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFolderAsync(const DeleteResourceFolderRequest& request, const DeleteResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceFolderRequest&;
    using Resp = DeleteResourceFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceFolderOutcomeCallable WedataClient::DeleteResourceFolderCallable(const DeleteResourceFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceFolderOutcome>>();
    DeleteResourceFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceFolderRequest&,
        DeleteResourceFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceGroupOutcome WedataClient::DeleteResourceGroup(const DeleteResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceGroupResponse rsp = DeleteResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceGroupOutcome(rsp);
        else
            return DeleteResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceGroupOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceGroupRequest&;
    using Resp = DeleteResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceGroupOutcomeCallable WedataClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceGroupOutcome>>();
    DeleteResourceGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceGroupRequest&,
        DeleteResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteSQLFolderOutcome WedataClient::DeleteSQLFolder(const DeleteSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSQLFolderResponse rsp = DeleteSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSQLFolderOutcome(rsp);
        else
            return DeleteSQLFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteSQLFolderAsync(const DeleteSQLFolderRequest& request, const DeleteSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSQLFolderRequest&;
    using Resp = DeleteSQLFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSQLFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteSQLFolderOutcomeCallable WedataClient::DeleteSQLFolderCallable(const DeleteSQLFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSQLFolderOutcome>>();
    DeleteSQLFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteSQLFolderRequest&,
        DeleteSQLFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteSQLScriptOutcome WedataClient::DeleteSQLScript(const DeleteSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSQLScriptResponse rsp = DeleteSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSQLScriptOutcome(rsp);
        else
            return DeleteSQLScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteSQLScriptAsync(const DeleteSQLScriptRequest& request, const DeleteSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSQLScriptRequest&;
    using Resp = DeleteSQLScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSQLScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteSQLScriptOutcomeCallable WedataClient::DeleteSQLScriptCallable(const DeleteSQLScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSQLScriptOutcome>>();
    DeleteSQLScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteSQLScriptRequest&,
        DeleteSQLScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTaskOutcome WedataClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskRequest&;
    using Resp = DeleteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTaskOutcomeCallable WedataClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskOutcome>>();
    DeleteTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTaskRequest&,
        DeleteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTaskFolderOutcome WedataClient::DeleteTaskFolder(const DeleteTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskFolderResponse rsp = DeleteTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskFolderOutcome(rsp);
        else
            return DeleteTaskFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskFolderAsync(const DeleteTaskFolderRequest& request, const DeleteTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskFolderRequest&;
    using Resp = DeleteTaskFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTaskFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTaskFolderOutcomeCallable WedataClient::DeleteTaskFolderCallable(const DeleteTaskFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskFolderOutcome>>();
    DeleteTaskFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTaskFolderRequest&,
        DeleteTaskFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTriggerTaskOutcome WedataClient::DeleteTriggerTask(const DeleteTriggerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTriggerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTriggerTaskResponse rsp = DeleteTriggerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTriggerTaskOutcome(rsp);
        else
            return DeleteTriggerTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTriggerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTriggerTaskAsync(const DeleteTriggerTaskRequest& request, const DeleteTriggerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTriggerTaskRequest&;
    using Resp = DeleteTriggerTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTriggerTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTriggerTaskOutcomeCallable WedataClient::DeleteTriggerTaskCallable(const DeleteTriggerTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTriggerTaskOutcome>>();
    DeleteTriggerTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTriggerTaskRequest&,
        DeleteTriggerTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTriggerWorkflowOutcome WedataClient::DeleteTriggerWorkflow(const DeleteTriggerWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTriggerWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTriggerWorkflowResponse rsp = DeleteTriggerWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTriggerWorkflowOutcome(rsp);
        else
            return DeleteTriggerWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteTriggerWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTriggerWorkflowAsync(const DeleteTriggerWorkflowRequest& request, const DeleteTriggerWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTriggerWorkflowRequest&;
    using Resp = DeleteTriggerWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTriggerWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTriggerWorkflowOutcomeCallable WedataClient::DeleteTriggerWorkflowCallable(const DeleteTriggerWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTriggerWorkflowOutcome>>();
    DeleteTriggerWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTriggerWorkflowRequest&,
        DeleteTriggerWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteWorkflowOutcome WedataClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowRequest&;
    using Resp = DeleteWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteWorkflowOutcomeCallable WedataClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowOutcome>>();
    DeleteWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteWorkflowRequest&,
        DeleteWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteWorkflowFolderOutcome WedataClient::DeleteWorkflowFolder(const DeleteWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowFolderResponse rsp = DeleteWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowFolderOutcome(rsp);
        else
            return DeleteWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowFolderAsync(const DeleteWorkflowFolderRequest& request, const DeleteWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowFolderRequest&;
    using Resp = DeleteWorkflowFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflowFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteWorkflowFolderOutcomeCallable WedataClient::DeleteWorkflowFolderCallable(const DeleteWorkflowFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowFolderOutcome>>();
    DeleteWorkflowFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteWorkflowFolderRequest&,
        DeleteWorkflowFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteWorkflowPermissionsOutcome WedataClient::DeleteWorkflowPermissions(const DeleteWorkflowPermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowPermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowPermissionsResponse rsp = DeleteWorkflowPermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowPermissionsOutcome(rsp);
        else
            return DeleteWorkflowPermissionsOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowPermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowPermissionsAsync(const DeleteWorkflowPermissionsRequest& request, const DeleteWorkflowPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowPermissionsRequest&;
    using Resp = DeleteWorkflowPermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflowPermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteWorkflowPermissionsOutcomeCallable WedataClient::DeleteWorkflowPermissionsCallable(const DeleteWorkflowPermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowPermissionsOutcome>>();
    DeleteWorkflowPermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteWorkflowPermissionsRequest&,
        DeleteWorkflowPermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataSourceAuthorityOutcome WedataClient::DescribeDataSourceAuthority(const DescribeDataSourceAuthorityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceAuthority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceAuthorityResponse rsp = DescribeDataSourceAuthorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceAuthorityOutcome(rsp);
        else
            return DescribeDataSourceAuthorityOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceAuthorityOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceAuthorityAsync(const DescribeDataSourceAuthorityRequest& request, const DescribeDataSourceAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSourceAuthorityRequest&;
    using Resp = DescribeDataSourceAuthorityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSourceAuthority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataSourceAuthorityOutcomeCallable WedataClient::DescribeDataSourceAuthorityCallable(const DescribeDataSourceAuthorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSourceAuthorityOutcome>>();
    DescribeDataSourceAuthorityAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataSourceAuthorityRequest&,
        DescribeDataSourceAuthorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DisableProjectOutcome WedataClient::DisableProject(const DisableProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DisableProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableProjectResponse rsp = DisableProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableProjectOutcome(rsp);
        else
            return DisableProjectOutcome(o.GetError());
    }
    else
    {
        return DisableProjectOutcome(outcome.GetError());
    }
}

void WedataClient::DisableProjectAsync(const DisableProjectRequest& request, const DisableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableProjectRequest&;
    using Resp = DisableProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DisableProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DisableProjectOutcomeCallable WedataClient::DisableProjectCallable(const DisableProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableProjectOutcome>>();
    DisableProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const DisableProjectRequest&,
        DisableProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DissociateResourceGroupFromProjectOutcome WedataClient::DissociateResourceGroupFromProject(const DissociateResourceGroupFromProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DissociateResourceGroupFromProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DissociateResourceGroupFromProjectResponse rsp = DissociateResourceGroupFromProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DissociateResourceGroupFromProjectOutcome(rsp);
        else
            return DissociateResourceGroupFromProjectOutcome(o.GetError());
    }
    else
    {
        return DissociateResourceGroupFromProjectOutcome(outcome.GetError());
    }
}

void WedataClient::DissociateResourceGroupFromProjectAsync(const DissociateResourceGroupFromProjectRequest& request, const DissociateResourceGroupFromProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DissociateResourceGroupFromProjectRequest&;
    using Resp = DissociateResourceGroupFromProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DissociateResourceGroupFromProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DissociateResourceGroupFromProjectOutcomeCallable WedataClient::DissociateResourceGroupFromProjectCallable(const DissociateResourceGroupFromProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DissociateResourceGroupFromProjectOutcome>>();
    DissociateResourceGroupFromProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const DissociateResourceGroupFromProjectRequest&,
        DissociateResourceGroupFromProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::EnableProjectOutcome WedataClient::EnableProject(const EnableProjectRequest &request)
{
    auto outcome = MakeRequest(request, "EnableProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableProjectResponse rsp = EnableProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableProjectOutcome(rsp);
        else
            return EnableProjectOutcome(o.GetError());
    }
    else
    {
        return EnableProjectOutcome(outcome.GetError());
    }
}

void WedataClient::EnableProjectAsync(const EnableProjectRequest& request, const EnableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableProjectRequest&;
    using Resp = EnableProjectResponse;

    DoRequestAsync<Req, Resp>(
        "EnableProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::EnableProjectOutcomeCallable WedataClient::EnableProjectCallable(const EnableProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableProjectOutcome>>();
    EnableProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const EnableProjectRequest&,
        EnableProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetAlarmMessageOutcome WedataClient::GetAlarmMessage(const GetAlarmMessageRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmMessageResponse rsp = GetAlarmMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmMessageOutcome(rsp);
        else
            return GetAlarmMessageOutcome(o.GetError());
    }
    else
    {
        return GetAlarmMessageOutcome(outcome.GetError());
    }
}

void WedataClient::GetAlarmMessageAsync(const GetAlarmMessageRequest& request, const GetAlarmMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAlarmMessageRequest&;
    using Resp = GetAlarmMessageResponse;

    DoRequestAsync<Req, Resp>(
        "GetAlarmMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetAlarmMessageOutcomeCallable WedataClient::GetAlarmMessageCallable(const GetAlarmMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAlarmMessageOutcome>>();
    GetAlarmMessageAsync(
    request,
    [prom](
        const WedataClient*,
        const GetAlarmMessageRequest&,
        GetAlarmMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetCodeFileOutcome WedataClient::GetCodeFile(const GetCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCodeFileResponse rsp = GetCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCodeFileOutcome(rsp);
        else
            return GetCodeFileOutcome(o.GetError());
    }
    else
    {
        return GetCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::GetCodeFileAsync(const GetCodeFileRequest& request, const GetCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCodeFileRequest&;
    using Resp = GetCodeFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetCodeFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetCodeFileOutcomeCallable WedataClient::GetCodeFileCallable(const GetCodeFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCodeFileOutcome>>();
    GetCodeFileAsync(
    request,
    [prom](
        const WedataClient*,
        const GetCodeFileRequest&,
        GetCodeFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetCodeFolderOutcome WedataClient::GetCodeFolder(const GetCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCodeFolderResponse rsp = GetCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCodeFolderOutcome(rsp);
        else
            return GetCodeFolderOutcome(o.GetError());
    }
    else
    {
        return GetCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::GetCodeFolderAsync(const GetCodeFolderRequest& request, const GetCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCodeFolderRequest&;
    using Resp = GetCodeFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetCodeFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetCodeFolderOutcomeCallable WedataClient::GetCodeFolderCallable(const GetCodeFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCodeFolderOutcome>>();
    GetCodeFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const GetCodeFolderRequest&,
        GetCodeFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetDataBackfillPlanOutcome WedataClient::GetDataBackfillPlan(const GetDataBackfillPlanRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataBackfillPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataBackfillPlanResponse rsp = GetDataBackfillPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataBackfillPlanOutcome(rsp);
        else
            return GetDataBackfillPlanOutcome(o.GetError());
    }
    else
    {
        return GetDataBackfillPlanOutcome(outcome.GetError());
    }
}

void WedataClient::GetDataBackfillPlanAsync(const GetDataBackfillPlanRequest& request, const GetDataBackfillPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataBackfillPlanRequest&;
    using Resp = GetDataBackfillPlanResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataBackfillPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetDataBackfillPlanOutcomeCallable WedataClient::GetDataBackfillPlanCallable(const GetDataBackfillPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataBackfillPlanOutcome>>();
    GetDataBackfillPlanAsync(
    request,
    [prom](
        const WedataClient*,
        const GetDataBackfillPlanRequest&,
        GetDataBackfillPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetDataSourceOutcome WedataClient::GetDataSource(const GetDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataSourceResponse rsp = GetDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataSourceOutcome(rsp);
        else
            return GetDataSourceOutcome(o.GetError());
    }
    else
    {
        return GetDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataSourceRequest&;
    using Resp = GetDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetDataSourceOutcomeCallable WedataClient::GetDataSourceCallable(const GetDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataSourceOutcome>>();
    GetDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const GetDataSourceRequest&,
        GetDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetDataSourceRelatedTasksOutcome WedataClient::GetDataSourceRelatedTasks(const GetDataSourceRelatedTasksRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataSourceRelatedTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataSourceRelatedTasksResponse rsp = GetDataSourceRelatedTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataSourceRelatedTasksOutcome(rsp);
        else
            return GetDataSourceRelatedTasksOutcome(o.GetError());
    }
    else
    {
        return GetDataSourceRelatedTasksOutcome(outcome.GetError());
    }
}

void WedataClient::GetDataSourceRelatedTasksAsync(const GetDataSourceRelatedTasksRequest& request, const GetDataSourceRelatedTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataSourceRelatedTasksRequest&;
    using Resp = GetDataSourceRelatedTasksResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataSourceRelatedTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetDataSourceRelatedTasksOutcomeCallable WedataClient::GetDataSourceRelatedTasksCallable(const GetDataSourceRelatedTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataSourceRelatedTasksOutcome>>();
    GetDataSourceRelatedTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const GetDataSourceRelatedTasksRequest&,
        GetDataSourceRelatedTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetMyCodeMaxPermissionOutcome WedataClient::GetMyCodeMaxPermission(const GetMyCodeMaxPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "GetMyCodeMaxPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMyCodeMaxPermissionResponse rsp = GetMyCodeMaxPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMyCodeMaxPermissionOutcome(rsp);
        else
            return GetMyCodeMaxPermissionOutcome(o.GetError());
    }
    else
    {
        return GetMyCodeMaxPermissionOutcome(outcome.GetError());
    }
}

void WedataClient::GetMyCodeMaxPermissionAsync(const GetMyCodeMaxPermissionRequest& request, const GetMyCodeMaxPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMyCodeMaxPermissionRequest&;
    using Resp = GetMyCodeMaxPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "GetMyCodeMaxPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetMyCodeMaxPermissionOutcomeCallable WedataClient::GetMyCodeMaxPermissionCallable(const GetMyCodeMaxPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMyCodeMaxPermissionOutcome>>();
    GetMyCodeMaxPermissionAsync(
    request,
    [prom](
        const WedataClient*,
        const GetMyCodeMaxPermissionRequest&,
        GetMyCodeMaxPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetMyWorkflowMaxPermissionOutcome WedataClient::GetMyWorkflowMaxPermission(const GetMyWorkflowMaxPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "GetMyWorkflowMaxPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMyWorkflowMaxPermissionResponse rsp = GetMyWorkflowMaxPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMyWorkflowMaxPermissionOutcome(rsp);
        else
            return GetMyWorkflowMaxPermissionOutcome(o.GetError());
    }
    else
    {
        return GetMyWorkflowMaxPermissionOutcome(outcome.GetError());
    }
}

void WedataClient::GetMyWorkflowMaxPermissionAsync(const GetMyWorkflowMaxPermissionRequest& request, const GetMyWorkflowMaxPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMyWorkflowMaxPermissionRequest&;
    using Resp = GetMyWorkflowMaxPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "GetMyWorkflowMaxPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetMyWorkflowMaxPermissionOutcomeCallable WedataClient::GetMyWorkflowMaxPermissionCallable(const GetMyWorkflowMaxPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMyWorkflowMaxPermissionOutcome>>();
    GetMyWorkflowMaxPermissionAsync(
    request,
    [prom](
        const WedataClient*,
        const GetMyWorkflowMaxPermissionRequest&,
        GetMyWorkflowMaxPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsAlarmRuleOutcome WedataClient::GetOpsAlarmRule(const GetOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsAlarmRuleResponse rsp = GetOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsAlarmRuleOutcome(rsp);
        else
            return GetOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return GetOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsAlarmRuleAsync(const GetOpsAlarmRuleRequest& request, const GetOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsAlarmRuleRequest&;
    using Resp = GetOpsAlarmRuleResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsAlarmRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsAlarmRuleOutcomeCallable WedataClient::GetOpsAlarmRuleCallable(const GetOpsAlarmRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsAlarmRuleOutcome>>();
    GetOpsAlarmRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsAlarmRuleRequest&,
        GetOpsAlarmRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsAsyncJobOutcome WedataClient::GetOpsAsyncJob(const GetOpsAsyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsAsyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsAsyncJobResponse rsp = GetOpsAsyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsAsyncJobOutcome(rsp);
        else
            return GetOpsAsyncJobOutcome(o.GetError());
    }
    else
    {
        return GetOpsAsyncJobOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsAsyncJobAsync(const GetOpsAsyncJobRequest& request, const GetOpsAsyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsAsyncJobRequest&;
    using Resp = GetOpsAsyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsAsyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsAsyncJobOutcomeCallable WedataClient::GetOpsAsyncJobCallable(const GetOpsAsyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsAsyncJobOutcome>>();
    GetOpsAsyncJobAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsAsyncJobRequest&,
        GetOpsAsyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsTaskOutcome WedataClient::GetOpsTask(const GetOpsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsTaskResponse rsp = GetOpsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsTaskOutcome(rsp);
        else
            return GetOpsTaskOutcome(o.GetError());
    }
    else
    {
        return GetOpsTaskOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsTaskAsync(const GetOpsTaskRequest& request, const GetOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsTaskRequest&;
    using Resp = GetOpsTaskResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsTaskOutcomeCallable WedataClient::GetOpsTaskCallable(const GetOpsTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsTaskOutcome>>();
    GetOpsTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsTaskRequest&,
        GetOpsTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsTaskCodeOutcome WedataClient::GetOpsTaskCode(const GetOpsTaskCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsTaskCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsTaskCodeResponse rsp = GetOpsTaskCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsTaskCodeOutcome(rsp);
        else
            return GetOpsTaskCodeOutcome(o.GetError());
    }
    else
    {
        return GetOpsTaskCodeOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsTaskCodeAsync(const GetOpsTaskCodeRequest& request, const GetOpsTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsTaskCodeRequest&;
    using Resp = GetOpsTaskCodeResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsTaskCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsTaskCodeOutcomeCallable WedataClient::GetOpsTaskCodeCallable(const GetOpsTaskCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsTaskCodeOutcome>>();
    GetOpsTaskCodeAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsTaskCodeRequest&,
        GetOpsTaskCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsTriggerWorkflowOutcome WedataClient::GetOpsTriggerWorkflow(const GetOpsTriggerWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsTriggerWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsTriggerWorkflowResponse rsp = GetOpsTriggerWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsTriggerWorkflowOutcome(rsp);
        else
            return GetOpsTriggerWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetOpsTriggerWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsTriggerWorkflowAsync(const GetOpsTriggerWorkflowRequest& request, const GetOpsTriggerWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsTriggerWorkflowRequest&;
    using Resp = GetOpsTriggerWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsTriggerWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsTriggerWorkflowOutcomeCallable WedataClient::GetOpsTriggerWorkflowCallable(const GetOpsTriggerWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsTriggerWorkflowOutcome>>();
    GetOpsTriggerWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsTriggerWorkflowRequest&,
        GetOpsTriggerWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOpsWorkflowOutcome WedataClient::GetOpsWorkflow(const GetOpsWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsWorkflowResponse rsp = GetOpsWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsWorkflowOutcome(rsp);
        else
            return GetOpsWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetOpsWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsWorkflowAsync(const GetOpsWorkflowRequest& request, const GetOpsWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOpsWorkflowRequest&;
    using Resp = GetOpsWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetOpsWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOpsWorkflowOutcomeCallable WedataClient::GetOpsWorkflowCallable(const GetOpsWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOpsWorkflowOutcome>>();
    GetOpsWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOpsWorkflowRequest&,
        GetOpsWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetProjectOutcome WedataClient::GetProject(const GetProjectRequest &request)
{
    auto outcome = MakeRequest(request, "GetProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProjectResponse rsp = GetProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProjectOutcome(rsp);
        else
            return GetProjectOutcome(o.GetError());
    }
    else
    {
        return GetProjectOutcome(outcome.GetError());
    }
}

void WedataClient::GetProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProjectRequest&;
    using Resp = GetProjectResponse;

    DoRequestAsync<Req, Resp>(
        "GetProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetProjectOutcomeCallable WedataClient::GetProjectCallable(const GetProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProjectOutcome>>();
    GetProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const GetProjectRequest&,
        GetProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetResourceFileOutcome WedataClient::GetResourceFile(const GetResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceFileResponse rsp = GetResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceFileOutcome(rsp);
        else
            return GetResourceFileOutcome(o.GetError());
    }
    else
    {
        return GetResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::GetResourceFileAsync(const GetResourceFileRequest& request, const GetResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourceFileRequest&;
    using Resp = GetResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetResourceFileOutcomeCallable WedataClient::GetResourceFileCallable(const GetResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourceFileOutcome>>();
    GetResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const GetResourceFileRequest&,
        GetResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetResourceFolderOutcome WedataClient::GetResourceFolder(const GetResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceFolderResponse rsp = GetResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceFolderOutcome(rsp);
        else
            return GetResourceFolderOutcome(o.GetError());
    }
    else
    {
        return GetResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::GetResourceFolderAsync(const GetResourceFolderRequest& request, const GetResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourceFolderRequest&;
    using Resp = GetResourceFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetResourceFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetResourceFolderOutcomeCallable WedataClient::GetResourceFolderCallable(const GetResourceFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourceFolderOutcome>>();
    GetResourceFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const GetResourceFolderRequest&,
        GetResourceFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetResourceGroupMetricsOutcome WedataClient::GetResourceGroupMetrics(const GetResourceGroupMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceGroupMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceGroupMetricsResponse rsp = GetResourceGroupMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceGroupMetricsOutcome(rsp);
        else
            return GetResourceGroupMetricsOutcome(o.GetError());
    }
    else
    {
        return GetResourceGroupMetricsOutcome(outcome.GetError());
    }
}

void WedataClient::GetResourceGroupMetricsAsync(const GetResourceGroupMetricsRequest& request, const GetResourceGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourceGroupMetricsRequest&;
    using Resp = GetResourceGroupMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "GetResourceGroupMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetResourceGroupMetricsOutcomeCallable WedataClient::GetResourceGroupMetricsCallable(const GetResourceGroupMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourceGroupMetricsOutcome>>();
    GetResourceGroupMetricsAsync(
    request,
    [prom](
        const WedataClient*,
        const GetResourceGroupMetricsRequest&,
        GetResourceGroupMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetSQLFolderOutcome WedataClient::GetSQLFolder(const GetSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSQLFolderResponse rsp = GetSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSQLFolderOutcome(rsp);
        else
            return GetSQLFolderOutcome(o.GetError());
    }
    else
    {
        return GetSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::GetSQLFolderAsync(const GetSQLFolderRequest& request, const GetSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSQLFolderRequest&;
    using Resp = GetSQLFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetSQLFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetSQLFolderOutcomeCallable WedataClient::GetSQLFolderCallable(const GetSQLFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSQLFolderOutcome>>();
    GetSQLFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const GetSQLFolderRequest&,
        GetSQLFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetSQLScriptOutcome WedataClient::GetSQLScript(const GetSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "GetSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSQLScriptResponse rsp = GetSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSQLScriptOutcome(rsp);
        else
            return GetSQLScriptOutcome(o.GetError());
    }
    else
    {
        return GetSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::GetSQLScriptAsync(const GetSQLScriptRequest& request, const GetSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSQLScriptRequest&;
    using Resp = GetSQLScriptResponse;

    DoRequestAsync<Req, Resp>(
        "GetSQLScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetSQLScriptOutcomeCallable WedataClient::GetSQLScriptCallable(const GetSQLScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSQLScriptOutcome>>();
    GetSQLScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const GetSQLScriptRequest&,
        GetSQLScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTableOutcome WedataClient::GetTable(const GetTableRequest &request)
{
    auto outcome = MakeRequest(request, "GetTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTableResponse rsp = GetTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTableOutcome(rsp);
        else
            return GetTableOutcome(o.GetError());
    }
    else
    {
        return GetTableOutcome(outcome.GetError());
    }
}

void WedataClient::GetTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTableRequest&;
    using Resp = GetTableResponse;

    DoRequestAsync<Req, Resp>(
        "GetTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTableOutcomeCallable WedataClient::GetTableCallable(const GetTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTableOutcome>>();
    GetTableAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTableRequest&,
        GetTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTableColumnsOutcome WedataClient::GetTableColumns(const GetTableColumnsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTableColumns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTableColumnsResponse rsp = GetTableColumnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTableColumnsOutcome(rsp);
        else
            return GetTableColumnsOutcome(o.GetError());
    }
    else
    {
        return GetTableColumnsOutcome(outcome.GetError());
    }
}

void WedataClient::GetTableColumnsAsync(const GetTableColumnsRequest& request, const GetTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTableColumnsRequest&;
    using Resp = GetTableColumnsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTableColumns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTableColumnsOutcomeCallable WedataClient::GetTableColumnsCallable(const GetTableColumnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTableColumnsOutcome>>();
    GetTableColumnsAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTableColumnsRequest&,
        GetTableColumnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskOutcome WedataClient::GetTask(const GetTaskRequest &request)
{
    auto outcome = MakeRequest(request, "GetTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskResponse rsp = GetTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskOutcome(rsp);
        else
            return GetTaskOutcome(o.GetError());
    }
    else
    {
        return GetTaskOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskRequest&;
    using Resp = GetTaskResponse;

    DoRequestAsync<Req, Resp>(
        "GetTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskOutcomeCallable WedataClient::GetTaskCallable(const GetTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskOutcome>>();
    GetTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskRequest&,
        GetTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskCodeOutcome WedataClient::GetTaskCode(const GetTaskCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskCodeResponse rsp = GetTaskCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskCodeOutcome(rsp);
        else
            return GetTaskCodeOutcome(o.GetError());
    }
    else
    {
        return GetTaskCodeOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskCodeAsync(const GetTaskCodeRequest& request, const GetTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskCodeRequest&;
    using Resp = GetTaskCodeResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskCodeOutcomeCallable WedataClient::GetTaskCodeCallable(const GetTaskCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskCodeOutcome>>();
    GetTaskCodeAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskCodeRequest&,
        GetTaskCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskFolderOutcome WedataClient::GetTaskFolder(const GetTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskFolderResponse rsp = GetTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskFolderOutcome(rsp);
        else
            return GetTaskFolderOutcome(o.GetError());
    }
    else
    {
        return GetTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskFolderAsync(const GetTaskFolderRequest& request, const GetTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskFolderRequest&;
    using Resp = GetTaskFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskFolderOutcomeCallable WedataClient::GetTaskFolderCallable(const GetTaskFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskFolderOutcome>>();
    GetTaskFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskFolderRequest&,
        GetTaskFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskInstanceOutcome WedataClient::GetTaskInstance(const GetTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskInstanceResponse rsp = GetTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskInstanceOutcome(rsp);
        else
            return GetTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return GetTaskInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskInstanceAsync(const GetTaskInstanceRequest& request, const GetTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskInstanceRequest&;
    using Resp = GetTaskInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskInstanceOutcomeCallable WedataClient::GetTaskInstanceCallable(const GetTaskInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskInstanceOutcome>>();
    GetTaskInstanceAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskInstanceRequest&,
        GetTaskInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskInstanceLogOutcome WedataClient::GetTaskInstanceLog(const GetTaskInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskInstanceLogResponse rsp = GetTaskInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskInstanceLogOutcome(rsp);
        else
            return GetTaskInstanceLogOutcome(o.GetError());
    }
    else
    {
        return GetTaskInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskInstanceLogAsync(const GetTaskInstanceLogRequest& request, const GetTaskInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskInstanceLogRequest&;
    using Resp = GetTaskInstanceLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskInstanceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskInstanceLogOutcomeCallable WedataClient::GetTaskInstanceLogCallable(const GetTaskInstanceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskInstanceLogOutcome>>();
    GetTaskInstanceLogAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskInstanceLogRequest&,
        GetTaskInstanceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskVersionOutcome WedataClient::GetTaskVersion(const GetTaskVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskVersionResponse rsp = GetTaskVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskVersionOutcome(rsp);
        else
            return GetTaskVersionOutcome(o.GetError());
    }
    else
    {
        return GetTaskVersionOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskVersionAsync(const GetTaskVersionRequest& request, const GetTaskVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskVersionRequest&;
    using Resp = GetTaskVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskVersionOutcomeCallable WedataClient::GetTaskVersionCallable(const GetTaskVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskVersionOutcome>>();
    GetTaskVersionAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskVersionRequest&,
        GetTaskVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerTaskOutcome WedataClient::GetTriggerTask(const GetTriggerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerTaskResponse rsp = GetTriggerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerTaskOutcome(rsp);
        else
            return GetTriggerTaskOutcome(o.GetError());
    }
    else
    {
        return GetTriggerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerTaskAsync(const GetTriggerTaskRequest& request, const GetTriggerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerTaskRequest&;
    using Resp = GetTriggerTaskResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerTaskOutcomeCallable WedataClient::GetTriggerTaskCallable(const GetTriggerTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerTaskOutcome>>();
    GetTriggerTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerTaskRequest&,
        GetTriggerTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerTaskCodeOutcome WedataClient::GetTriggerTaskCode(const GetTriggerTaskCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerTaskCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerTaskCodeResponse rsp = GetTriggerTaskCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerTaskCodeOutcome(rsp);
        else
            return GetTriggerTaskCodeOutcome(o.GetError());
    }
    else
    {
        return GetTriggerTaskCodeOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerTaskCodeAsync(const GetTriggerTaskCodeRequest& request, const GetTriggerTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerTaskCodeRequest&;
    using Resp = GetTriggerTaskCodeResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerTaskCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerTaskCodeOutcomeCallable WedataClient::GetTriggerTaskCodeCallable(const GetTriggerTaskCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerTaskCodeOutcome>>();
    GetTriggerTaskCodeAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerTaskCodeRequest&,
        GetTriggerTaskCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerTaskRunOutcome WedataClient::GetTriggerTaskRun(const GetTriggerTaskRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerTaskRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerTaskRunResponse rsp = GetTriggerTaskRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerTaskRunOutcome(rsp);
        else
            return GetTriggerTaskRunOutcome(o.GetError());
    }
    else
    {
        return GetTriggerTaskRunOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerTaskRunAsync(const GetTriggerTaskRunRequest& request, const GetTriggerTaskRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerTaskRunRequest&;
    using Resp = GetTriggerTaskRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerTaskRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerTaskRunOutcomeCallable WedataClient::GetTriggerTaskRunCallable(const GetTriggerTaskRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerTaskRunOutcome>>();
    GetTriggerTaskRunAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerTaskRunRequest&,
        GetTriggerTaskRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerTaskVersionOutcome WedataClient::GetTriggerTaskVersion(const GetTriggerTaskVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerTaskVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerTaskVersionResponse rsp = GetTriggerTaskVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerTaskVersionOutcome(rsp);
        else
            return GetTriggerTaskVersionOutcome(o.GetError());
    }
    else
    {
        return GetTriggerTaskVersionOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerTaskVersionAsync(const GetTriggerTaskVersionRequest& request, const GetTriggerTaskVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerTaskVersionRequest&;
    using Resp = GetTriggerTaskVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerTaskVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerTaskVersionOutcomeCallable WedataClient::GetTriggerTaskVersionCallable(const GetTriggerTaskVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerTaskVersionOutcome>>();
    GetTriggerTaskVersionAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerTaskVersionRequest&,
        GetTriggerTaskVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerWorkflowOutcome WedataClient::GetTriggerWorkflow(const GetTriggerWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerWorkflowResponse rsp = GetTriggerWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerWorkflowOutcome(rsp);
        else
            return GetTriggerWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetTriggerWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerWorkflowAsync(const GetTriggerWorkflowRequest& request, const GetTriggerWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerWorkflowRequest&;
    using Resp = GetTriggerWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerWorkflowOutcomeCallable WedataClient::GetTriggerWorkflowCallable(const GetTriggerWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerWorkflowOutcome>>();
    GetTriggerWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerWorkflowRequest&,
        GetTriggerWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTriggerWorkflowRunOutcome WedataClient::GetTriggerWorkflowRun(const GetTriggerWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetTriggerWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTriggerWorkflowRunResponse rsp = GetTriggerWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTriggerWorkflowRunOutcome(rsp);
        else
            return GetTriggerWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return GetTriggerWorkflowRunOutcome(outcome.GetError());
    }
}

void WedataClient::GetTriggerWorkflowRunAsync(const GetTriggerWorkflowRunRequest& request, const GetTriggerWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTriggerWorkflowRunRequest&;
    using Resp = GetTriggerWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetTriggerWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTriggerWorkflowRunOutcomeCallable WedataClient::GetTriggerWorkflowRunCallable(const GetTriggerWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTriggerWorkflowRunOutcome>>();
    GetTriggerWorkflowRunAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTriggerWorkflowRunRequest&,
        GetTriggerWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetWorkflowOutcome WedataClient::GetWorkflow(const GetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowResponse rsp = GetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowOutcome(rsp);
        else
            return GetWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowRequest&;
    using Resp = GetWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetWorkflowOutcomeCallable WedataClient::GetWorkflowCallable(const GetWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowOutcome>>();
    GetWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const GetWorkflowRequest&,
        GetWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetWorkflowFolderOutcome WedataClient::GetWorkflowFolder(const GetWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowFolderResponse rsp = GetWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowFolderOutcome(rsp);
        else
            return GetWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::GetWorkflowFolderAsync(const GetWorkflowFolderRequest& request, const GetWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowFolderRequest&;
    using Resp = GetWorkflowFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflowFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetWorkflowFolderOutcomeCallable WedataClient::GetWorkflowFolderCallable(const GetWorkflowFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowFolderOutcome>>();
    GetWorkflowFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const GetWorkflowFolderRequest&,
        GetWorkflowFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GrantMemberProjectRoleOutcome WedataClient::GrantMemberProjectRole(const GrantMemberProjectRoleRequest &request)
{
    auto outcome = MakeRequest(request, "GrantMemberProjectRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantMemberProjectRoleResponse rsp = GrantMemberProjectRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantMemberProjectRoleOutcome(rsp);
        else
            return GrantMemberProjectRoleOutcome(o.GetError());
    }
    else
    {
        return GrantMemberProjectRoleOutcome(outcome.GetError());
    }
}

void WedataClient::GrantMemberProjectRoleAsync(const GrantMemberProjectRoleRequest& request, const GrantMemberProjectRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantMemberProjectRoleRequest&;
    using Resp = GrantMemberProjectRoleResponse;

    DoRequestAsync<Req, Resp>(
        "GrantMemberProjectRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GrantMemberProjectRoleOutcomeCallable WedataClient::GrantMemberProjectRoleCallable(const GrantMemberProjectRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantMemberProjectRoleOutcome>>();
    GrantMemberProjectRoleAsync(
    request,
    [prom](
        const WedataClient*,
        const GrantMemberProjectRoleRequest&,
        GrantMemberProjectRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::KillTaskInstancesAsyncOutcome WedataClient::KillTaskInstancesAsync(const KillTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "KillTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillTaskInstancesAsyncResponse rsp = KillTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillTaskInstancesAsyncOutcome(rsp);
        else
            return KillTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return KillTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::KillTaskInstancesAsyncAsync(const KillTaskInstancesAsyncRequest& request, const KillTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillTaskInstancesAsyncRequest&;
    using Resp = KillTaskInstancesAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "KillTaskInstancesAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::KillTaskInstancesAsyncOutcomeCallable WedataClient::KillTaskInstancesAsyncCallable(const KillTaskInstancesAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillTaskInstancesAsyncOutcome>>();
    KillTaskInstancesAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const KillTaskInstancesAsyncRequest&,
        KillTaskInstancesAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::KillTriggerWorkflowRunsOutcome WedataClient::KillTriggerWorkflowRuns(const KillTriggerWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "KillTriggerWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillTriggerWorkflowRunsResponse rsp = KillTriggerWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillTriggerWorkflowRunsOutcome(rsp);
        else
            return KillTriggerWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return KillTriggerWorkflowRunsOutcome(outcome.GetError());
    }
}

void WedataClient::KillTriggerWorkflowRunsAsync(const KillTriggerWorkflowRunsRequest& request, const KillTriggerWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillTriggerWorkflowRunsRequest&;
    using Resp = KillTriggerWorkflowRunsResponse;

    DoRequestAsync<Req, Resp>(
        "KillTriggerWorkflowRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::KillTriggerWorkflowRunsOutcomeCallable WedataClient::KillTriggerWorkflowRunsCallable(const KillTriggerWorkflowRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillTriggerWorkflowRunsOutcome>>();
    KillTriggerWorkflowRunsAsync(
    request,
    [prom](
        const WedataClient*,
        const KillTriggerWorkflowRunsRequest&,
        KillTriggerWorkflowRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListAlarmMessagesOutcome WedataClient::ListAlarmMessages(const ListAlarmMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAlarmMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAlarmMessagesResponse rsp = ListAlarmMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAlarmMessagesOutcome(rsp);
        else
            return ListAlarmMessagesOutcome(o.GetError());
    }
    else
    {
        return ListAlarmMessagesOutcome(outcome.GetError());
    }
}

void WedataClient::ListAlarmMessagesAsync(const ListAlarmMessagesRequest& request, const ListAlarmMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAlarmMessagesRequest&;
    using Resp = ListAlarmMessagesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAlarmMessages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListAlarmMessagesOutcomeCallable WedataClient::ListAlarmMessagesCallable(const ListAlarmMessagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAlarmMessagesOutcome>>();
    ListAlarmMessagesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListAlarmMessagesRequest&,
        ListAlarmMessagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListCatalogOutcome WedataClient::ListCatalog(const ListCatalogRequest &request)
{
    auto outcome = MakeRequest(request, "ListCatalog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCatalogResponse rsp = ListCatalogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCatalogOutcome(rsp);
        else
            return ListCatalogOutcome(o.GetError());
    }
    else
    {
        return ListCatalogOutcome(outcome.GetError());
    }
}

void WedataClient::ListCatalogAsync(const ListCatalogRequest& request, const ListCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCatalogRequest&;
    using Resp = ListCatalogResponse;

    DoRequestAsync<Req, Resp>(
        "ListCatalog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListCatalogOutcomeCallable WedataClient::ListCatalogCallable(const ListCatalogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCatalogOutcome>>();
    ListCatalogAsync(
    request,
    [prom](
        const WedataClient*,
        const ListCatalogRequest&,
        ListCatalogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListCodeFolderContentsOutcome WedataClient::ListCodeFolderContents(const ListCodeFolderContentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCodeFolderContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCodeFolderContentsResponse rsp = ListCodeFolderContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCodeFolderContentsOutcome(rsp);
        else
            return ListCodeFolderContentsOutcome(o.GetError());
    }
    else
    {
        return ListCodeFolderContentsOutcome(outcome.GetError());
    }
}

void WedataClient::ListCodeFolderContentsAsync(const ListCodeFolderContentsRequest& request, const ListCodeFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCodeFolderContentsRequest&;
    using Resp = ListCodeFolderContentsResponse;

    DoRequestAsync<Req, Resp>(
        "ListCodeFolderContents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListCodeFolderContentsOutcomeCallable WedataClient::ListCodeFolderContentsCallable(const ListCodeFolderContentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCodeFolderContentsOutcome>>();
    ListCodeFolderContentsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListCodeFolderContentsRequest&,
        ListCodeFolderContentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListCodePermissionsOutcome WedataClient::ListCodePermissions(const ListCodePermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCodePermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCodePermissionsResponse rsp = ListCodePermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCodePermissionsOutcome(rsp);
        else
            return ListCodePermissionsOutcome(o.GetError());
    }
    else
    {
        return ListCodePermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListCodePermissionsAsync(const ListCodePermissionsRequest& request, const ListCodePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCodePermissionsRequest&;
    using Resp = ListCodePermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListCodePermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListCodePermissionsOutcomeCallable WedataClient::ListCodePermissionsCallable(const ListCodePermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCodePermissionsOutcome>>();
    ListCodePermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListCodePermissionsRequest&,
        ListCodePermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListColumnLineageOutcome WedataClient::ListColumnLineage(const ListColumnLineageRequest &request)
{
    auto outcome = MakeRequest(request, "ListColumnLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListColumnLineageResponse rsp = ListColumnLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListColumnLineageOutcome(rsp);
        else
            return ListColumnLineageOutcome(o.GetError());
    }
    else
    {
        return ListColumnLineageOutcome(outcome.GetError());
    }
}

void WedataClient::ListColumnLineageAsync(const ListColumnLineageRequest& request, const ListColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListColumnLineageRequest&;
    using Resp = ListColumnLineageResponse;

    DoRequestAsync<Req, Resp>(
        "ListColumnLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListColumnLineageOutcomeCallable WedataClient::ListColumnLineageCallable(const ListColumnLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListColumnLineageOutcome>>();
    ListColumnLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const ListColumnLineageRequest&,
        ListColumnLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDataBackfillInstancesOutcome WedataClient::ListDataBackfillInstances(const ListDataBackfillInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDataBackfillInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDataBackfillInstancesResponse rsp = ListDataBackfillInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDataBackfillInstancesOutcome(rsp);
        else
            return ListDataBackfillInstancesOutcome(o.GetError());
    }
    else
    {
        return ListDataBackfillInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListDataBackfillInstancesAsync(const ListDataBackfillInstancesRequest& request, const ListDataBackfillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDataBackfillInstancesRequest&;
    using Resp = ListDataBackfillInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDataBackfillInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDataBackfillInstancesOutcomeCallable WedataClient::ListDataBackfillInstancesCallable(const ListDataBackfillInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDataBackfillInstancesOutcome>>();
    ListDataBackfillInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDataBackfillInstancesRequest&,
        ListDataBackfillInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDataSourcesOutcome WedataClient::ListDataSources(const ListDataSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDataSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDataSourcesResponse rsp = ListDataSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDataSourcesOutcome(rsp);
        else
            return ListDataSourcesOutcome(o.GetError());
    }
    else
    {
        return ListDataSourcesOutcome(outcome.GetError());
    }
}

void WedataClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDataSourcesRequest&;
    using Resp = ListDataSourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDataSources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDataSourcesOutcomeCallable WedataClient::ListDataSourcesCallable(const ListDataSourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDataSourcesOutcome>>();
    ListDataSourcesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDataSourcesRequest&,
        ListDataSourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDatabaseOutcome WedataClient::ListDatabase(const ListDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "ListDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDatabaseResponse rsp = ListDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDatabaseOutcome(rsp);
        else
            return ListDatabaseOutcome(o.GetError());
    }
    else
    {
        return ListDatabaseOutcome(outcome.GetError());
    }
}

void WedataClient::ListDatabaseAsync(const ListDatabaseRequest& request, const ListDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDatabaseRequest&;
    using Resp = ListDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "ListDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDatabaseOutcomeCallable WedataClient::ListDatabaseCallable(const ListDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDatabaseOutcome>>();
    ListDatabaseAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDatabaseRequest&,
        ListDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDownstreamOpsTasksOutcome WedataClient::ListDownstreamOpsTasks(const ListDownstreamOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamOpsTasksResponse rsp = ListDownstreamOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamOpsTasksOutcome(rsp);
        else
            return ListDownstreamOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamOpsTasksAsync(const ListDownstreamOpsTasksRequest& request, const ListDownstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDownstreamOpsTasksRequest&;
    using Resp = ListDownstreamOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListDownstreamOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDownstreamOpsTasksOutcomeCallable WedataClient::ListDownstreamOpsTasksCallable(const ListDownstreamOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDownstreamOpsTasksOutcome>>();
    ListDownstreamOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDownstreamOpsTasksRequest&,
        ListDownstreamOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDownstreamTaskInstancesOutcome WedataClient::ListDownstreamTaskInstances(const ListDownstreamTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamTaskInstancesResponse rsp = ListDownstreamTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamTaskInstancesOutcome(rsp);
        else
            return ListDownstreamTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamTaskInstancesAsync(const ListDownstreamTaskInstancesRequest& request, const ListDownstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDownstreamTaskInstancesRequest&;
    using Resp = ListDownstreamTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDownstreamTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDownstreamTaskInstancesOutcomeCallable WedataClient::ListDownstreamTaskInstancesCallable(const ListDownstreamTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDownstreamTaskInstancesOutcome>>();
    ListDownstreamTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDownstreamTaskInstancesRequest&,
        ListDownstreamTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDownstreamTasksOutcome WedataClient::ListDownstreamTasks(const ListDownstreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamTasksResponse rsp = ListDownstreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamTasksOutcome(rsp);
        else
            return ListDownstreamTasksOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamTasksAsync(const ListDownstreamTasksRequest& request, const ListDownstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDownstreamTasksRequest&;
    using Resp = ListDownstreamTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListDownstreamTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDownstreamTasksOutcomeCallable WedataClient::ListDownstreamTasksCallable(const ListDownstreamTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDownstreamTasksOutcome>>();
    ListDownstreamTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDownstreamTasksRequest&,
        ListDownstreamTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListDownstreamTriggerTasksOutcome WedataClient::ListDownstreamTriggerTasks(const ListDownstreamTriggerTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamTriggerTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamTriggerTasksResponse rsp = ListDownstreamTriggerTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamTriggerTasksOutcome(rsp);
        else
            return ListDownstreamTriggerTasksOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamTriggerTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamTriggerTasksAsync(const ListDownstreamTriggerTasksRequest& request, const ListDownstreamTriggerTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDownstreamTriggerTasksRequest&;
    using Resp = ListDownstreamTriggerTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListDownstreamTriggerTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListDownstreamTriggerTasksOutcomeCallable WedataClient::ListDownstreamTriggerTasksCallable(const ListDownstreamTriggerTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDownstreamTriggerTasksOutcome>>();
    ListDownstreamTriggerTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListDownstreamTriggerTasksRequest&,
        ListDownstreamTriggerTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListLineageOutcome WedataClient::ListLineage(const ListLineageRequest &request)
{
    auto outcome = MakeRequest(request, "ListLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLineageResponse rsp = ListLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLineageOutcome(rsp);
        else
            return ListLineageOutcome(o.GetError());
    }
    else
    {
        return ListLineageOutcome(outcome.GetError());
    }
}

void WedataClient::ListLineageAsync(const ListLineageRequest& request, const ListLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLineageRequest&;
    using Resp = ListLineageResponse;

    DoRequestAsync<Req, Resp>(
        "ListLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListLineageOutcomeCallable WedataClient::ListLineageCallable(const ListLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLineageOutcome>>();
    ListLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const ListLineageRequest&,
        ListLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListOpsAlarmRulesOutcome WedataClient::ListOpsAlarmRules(const ListOpsAlarmRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsAlarmRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsAlarmRulesResponse rsp = ListOpsAlarmRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsAlarmRulesOutcome(rsp);
        else
            return ListOpsAlarmRulesOutcome(o.GetError());
    }
    else
    {
        return ListOpsAlarmRulesOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsAlarmRulesAsync(const ListOpsAlarmRulesRequest& request, const ListOpsAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOpsAlarmRulesRequest&;
    using Resp = ListOpsAlarmRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListOpsAlarmRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListOpsAlarmRulesOutcomeCallable WedataClient::ListOpsAlarmRulesCallable(const ListOpsAlarmRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOpsAlarmRulesOutcome>>();
    ListOpsAlarmRulesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListOpsAlarmRulesRequest&,
        ListOpsAlarmRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListOpsTasksOutcome WedataClient::ListOpsTasks(const ListOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsTasksResponse rsp = ListOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsTasksOutcome(rsp);
        else
            return ListOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsTasksAsync(const ListOpsTasksRequest& request, const ListOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOpsTasksRequest&;
    using Resp = ListOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListOpsTasksOutcomeCallable WedataClient::ListOpsTasksCallable(const ListOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOpsTasksOutcome>>();
    ListOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListOpsTasksRequest&,
        ListOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListOpsTriggerWorkflowsOutcome WedataClient::ListOpsTriggerWorkflows(const ListOpsTriggerWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsTriggerWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsTriggerWorkflowsResponse rsp = ListOpsTriggerWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsTriggerWorkflowsOutcome(rsp);
        else
            return ListOpsTriggerWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListOpsTriggerWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsTriggerWorkflowsAsync(const ListOpsTriggerWorkflowsRequest& request, const ListOpsTriggerWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOpsTriggerWorkflowsRequest&;
    using Resp = ListOpsTriggerWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListOpsTriggerWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListOpsTriggerWorkflowsOutcomeCallable WedataClient::ListOpsTriggerWorkflowsCallable(const ListOpsTriggerWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOpsTriggerWorkflowsOutcome>>();
    ListOpsTriggerWorkflowsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListOpsTriggerWorkflowsRequest&,
        ListOpsTriggerWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListOpsWorkflowsOutcome WedataClient::ListOpsWorkflows(const ListOpsWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsWorkflowsResponse rsp = ListOpsWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsWorkflowsOutcome(rsp);
        else
            return ListOpsWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListOpsWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsWorkflowsAsync(const ListOpsWorkflowsRequest& request, const ListOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOpsWorkflowsRequest&;
    using Resp = ListOpsWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListOpsWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListOpsWorkflowsOutcomeCallable WedataClient::ListOpsWorkflowsCallable(const ListOpsWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOpsWorkflowsOutcome>>();
    ListOpsWorkflowsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListOpsWorkflowsRequest&,
        ListOpsWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListProcessLineageOutcome WedataClient::ListProcessLineage(const ListProcessLineageRequest &request)
{
    auto outcome = MakeRequest(request, "ListProcessLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListProcessLineageResponse rsp = ListProcessLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListProcessLineageOutcome(rsp);
        else
            return ListProcessLineageOutcome(o.GetError());
    }
    else
    {
        return ListProcessLineageOutcome(outcome.GetError());
    }
}

void WedataClient::ListProcessLineageAsync(const ListProcessLineageRequest& request, const ListProcessLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListProcessLineageRequest&;
    using Resp = ListProcessLineageResponse;

    DoRequestAsync<Req, Resp>(
        "ListProcessLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListProcessLineageOutcomeCallable WedataClient::ListProcessLineageCallable(const ListProcessLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListProcessLineageOutcome>>();
    ListProcessLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const ListProcessLineageRequest&,
        ListProcessLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListProjectMembersOutcome WedataClient::ListProjectMembers(const ListProjectMembersRequest &request)
{
    auto outcome = MakeRequest(request, "ListProjectMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListProjectMembersResponse rsp = ListProjectMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListProjectMembersOutcome(rsp);
        else
            return ListProjectMembersOutcome(o.GetError());
    }
    else
    {
        return ListProjectMembersOutcome(outcome.GetError());
    }
}

void WedataClient::ListProjectMembersAsync(const ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListProjectMembersRequest&;
    using Resp = ListProjectMembersResponse;

    DoRequestAsync<Req, Resp>(
        "ListProjectMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListProjectMembersOutcomeCallable WedataClient::ListProjectMembersCallable(const ListProjectMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListProjectMembersOutcome>>();
    ListProjectMembersAsync(
    request,
    [prom](
        const WedataClient*,
        const ListProjectMembersRequest&,
        ListProjectMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListProjectRolesOutcome WedataClient::ListProjectRoles(const ListProjectRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ListProjectRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListProjectRolesResponse rsp = ListProjectRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListProjectRolesOutcome(rsp);
        else
            return ListProjectRolesOutcome(o.GetError());
    }
    else
    {
        return ListProjectRolesOutcome(outcome.GetError());
    }
}

void WedataClient::ListProjectRolesAsync(const ListProjectRolesRequest& request, const ListProjectRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListProjectRolesRequest&;
    using Resp = ListProjectRolesResponse;

    DoRequestAsync<Req, Resp>(
        "ListProjectRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListProjectRolesOutcomeCallable WedataClient::ListProjectRolesCallable(const ListProjectRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListProjectRolesOutcome>>();
    ListProjectRolesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListProjectRolesRequest&,
        ListProjectRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListProjectsOutcome WedataClient::ListProjects(const ListProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ListProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListProjectsResponse rsp = ListProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListProjectsOutcome(rsp);
        else
            return ListProjectsOutcome(o.GetError());
    }
    else
    {
        return ListProjectsOutcome(outcome.GetError());
    }
}

void WedataClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListProjectsRequest&;
    using Resp = ListProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "ListProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListProjectsOutcomeCallable WedataClient::ListProjectsCallable(const ListProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListProjectsOutcome>>();
    ListProjectsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListProjectsRequest&,
        ListProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListQualityRuleGroupExecResultsByPageOutcome WedataClient::ListQualityRuleGroupExecResultsByPage(const ListQualityRuleGroupExecResultsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "ListQualityRuleGroupExecResultsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQualityRuleGroupExecResultsByPageResponse rsp = ListQualityRuleGroupExecResultsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQualityRuleGroupExecResultsByPageOutcome(rsp);
        else
            return ListQualityRuleGroupExecResultsByPageOutcome(o.GetError());
    }
    else
    {
        return ListQualityRuleGroupExecResultsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::ListQualityRuleGroupExecResultsByPageAsync(const ListQualityRuleGroupExecResultsByPageRequest& request, const ListQualityRuleGroupExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQualityRuleGroupExecResultsByPageRequest&;
    using Resp = ListQualityRuleGroupExecResultsByPageResponse;

    DoRequestAsync<Req, Resp>(
        "ListQualityRuleGroupExecResultsByPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListQualityRuleGroupExecResultsByPageOutcomeCallable WedataClient::ListQualityRuleGroupExecResultsByPageCallable(const ListQualityRuleGroupExecResultsByPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQualityRuleGroupExecResultsByPageOutcome>>();
    ListQualityRuleGroupExecResultsByPageAsync(
    request,
    [prom](
        const WedataClient*,
        const ListQualityRuleGroupExecResultsByPageRequest&,
        ListQualityRuleGroupExecResultsByPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListQualityRuleGroupsOutcome WedataClient::ListQualityRuleGroups(const ListQualityRuleGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListQualityRuleGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQualityRuleGroupsResponse rsp = ListQualityRuleGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQualityRuleGroupsOutcome(rsp);
        else
            return ListQualityRuleGroupsOutcome(o.GetError());
    }
    else
    {
        return ListQualityRuleGroupsOutcome(outcome.GetError());
    }
}

void WedataClient::ListQualityRuleGroupsAsync(const ListQualityRuleGroupsRequest& request, const ListQualityRuleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQualityRuleGroupsRequest&;
    using Resp = ListQualityRuleGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListQualityRuleGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListQualityRuleGroupsOutcomeCallable WedataClient::ListQualityRuleGroupsCallable(const ListQualityRuleGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQualityRuleGroupsOutcome>>();
    ListQualityRuleGroupsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListQualityRuleGroupsRequest&,
        ListQualityRuleGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListQualityRuleGroupsTableOutcome WedataClient::ListQualityRuleGroupsTable(const ListQualityRuleGroupsTableRequest &request)
{
    auto outcome = MakeRequest(request, "ListQualityRuleGroupsTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQualityRuleGroupsTableResponse rsp = ListQualityRuleGroupsTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQualityRuleGroupsTableOutcome(rsp);
        else
            return ListQualityRuleGroupsTableOutcome(o.GetError());
    }
    else
    {
        return ListQualityRuleGroupsTableOutcome(outcome.GetError());
    }
}

void WedataClient::ListQualityRuleGroupsTableAsync(const ListQualityRuleGroupsTableRequest& request, const ListQualityRuleGroupsTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQualityRuleGroupsTableRequest&;
    using Resp = ListQualityRuleGroupsTableResponse;

    DoRequestAsync<Req, Resp>(
        "ListQualityRuleGroupsTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListQualityRuleGroupsTableOutcomeCallable WedataClient::ListQualityRuleGroupsTableCallable(const ListQualityRuleGroupsTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQualityRuleGroupsTableOutcome>>();
    ListQualityRuleGroupsTableAsync(
    request,
    [prom](
        const WedataClient*,
        const ListQualityRuleGroupsTableRequest&,
        ListQualityRuleGroupsTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListQualityRuleTemplatesOutcome WedataClient::ListQualityRuleTemplates(const ListQualityRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListQualityRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQualityRuleTemplatesResponse rsp = ListQualityRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQualityRuleTemplatesOutcome(rsp);
        else
            return ListQualityRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return ListQualityRuleTemplatesOutcome(outcome.GetError());
    }
}

void WedataClient::ListQualityRuleTemplatesAsync(const ListQualityRuleTemplatesRequest& request, const ListQualityRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQualityRuleTemplatesRequest&;
    using Resp = ListQualityRuleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ListQualityRuleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListQualityRuleTemplatesOutcomeCallable WedataClient::ListQualityRuleTemplatesCallable(const ListQualityRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQualityRuleTemplatesOutcome>>();
    ListQualityRuleTemplatesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListQualityRuleTemplatesRequest&,
        ListQualityRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListQualityRulesOutcome WedataClient::ListQualityRules(const ListQualityRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListQualityRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQualityRulesResponse rsp = ListQualityRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQualityRulesOutcome(rsp);
        else
            return ListQualityRulesOutcome(o.GetError());
    }
    else
    {
        return ListQualityRulesOutcome(outcome.GetError());
    }
}

void WedataClient::ListQualityRulesAsync(const ListQualityRulesRequest& request, const ListQualityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQualityRulesRequest&;
    using Resp = ListQualityRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListQualityRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListQualityRulesOutcomeCallable WedataClient::ListQualityRulesCallable(const ListQualityRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQualityRulesOutcome>>();
    ListQualityRulesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListQualityRulesRequest&,
        ListQualityRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListResourceFilesOutcome WedataClient::ListResourceFiles(const ListResourceFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceFilesResponse rsp = ListResourceFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceFilesOutcome(rsp);
        else
            return ListResourceFilesOutcome(o.GetError());
    }
    else
    {
        return ListResourceFilesOutcome(outcome.GetError());
    }
}

void WedataClient::ListResourceFilesAsync(const ListResourceFilesRequest& request, const ListResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListResourceFilesRequest&;
    using Resp = ListResourceFilesResponse;

    DoRequestAsync<Req, Resp>(
        "ListResourceFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListResourceFilesOutcomeCallable WedataClient::ListResourceFilesCallable(const ListResourceFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListResourceFilesOutcome>>();
    ListResourceFilesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListResourceFilesRequest&,
        ListResourceFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListResourceFoldersOutcome WedataClient::ListResourceFolders(const ListResourceFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceFoldersResponse rsp = ListResourceFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceFoldersOutcome(rsp);
        else
            return ListResourceFoldersOutcome(o.GetError());
    }
    else
    {
        return ListResourceFoldersOutcome(outcome.GetError());
    }
}

void WedataClient::ListResourceFoldersAsync(const ListResourceFoldersRequest& request, const ListResourceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListResourceFoldersRequest&;
    using Resp = ListResourceFoldersResponse;

    DoRequestAsync<Req, Resp>(
        "ListResourceFolders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListResourceFoldersOutcomeCallable WedataClient::ListResourceFoldersCallable(const ListResourceFoldersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListResourceFoldersOutcome>>();
    ListResourceFoldersAsync(
    request,
    [prom](
        const WedataClient*,
        const ListResourceFoldersRequest&,
        ListResourceFoldersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListResourceGroupsOutcome WedataClient::ListResourceGroups(const ListResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceGroupsResponse rsp = ListResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceGroupsOutcome(rsp);
        else
            return ListResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return ListResourceGroupsOutcome(outcome.GetError());
    }
}

void WedataClient::ListResourceGroupsAsync(const ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListResourceGroupsRequest&;
    using Resp = ListResourceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListResourceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListResourceGroupsOutcomeCallable WedataClient::ListResourceGroupsCallable(const ListResourceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListResourceGroupsOutcome>>();
    ListResourceGroupsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListResourceGroupsRequest&,
        ListResourceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListSQLFolderContentsOutcome WedataClient::ListSQLFolderContents(const ListSQLFolderContentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSQLFolderContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSQLFolderContentsResponse rsp = ListSQLFolderContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSQLFolderContentsOutcome(rsp);
        else
            return ListSQLFolderContentsOutcome(o.GetError());
    }
    else
    {
        return ListSQLFolderContentsOutcome(outcome.GetError());
    }
}

void WedataClient::ListSQLFolderContentsAsync(const ListSQLFolderContentsRequest& request, const ListSQLFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSQLFolderContentsRequest&;
    using Resp = ListSQLFolderContentsResponse;

    DoRequestAsync<Req, Resp>(
        "ListSQLFolderContents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListSQLFolderContentsOutcomeCallable WedataClient::ListSQLFolderContentsCallable(const ListSQLFolderContentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSQLFolderContentsOutcome>>();
    ListSQLFolderContentsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListSQLFolderContentsRequest&,
        ListSQLFolderContentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListSQLScriptRunsOutcome WedataClient::ListSQLScriptRuns(const ListSQLScriptRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSQLScriptRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSQLScriptRunsResponse rsp = ListSQLScriptRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSQLScriptRunsOutcome(rsp);
        else
            return ListSQLScriptRunsOutcome(o.GetError());
    }
    else
    {
        return ListSQLScriptRunsOutcome(outcome.GetError());
    }
}

void WedataClient::ListSQLScriptRunsAsync(const ListSQLScriptRunsRequest& request, const ListSQLScriptRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSQLScriptRunsRequest&;
    using Resp = ListSQLScriptRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListSQLScriptRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListSQLScriptRunsOutcomeCallable WedataClient::ListSQLScriptRunsCallable(const ListSQLScriptRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSQLScriptRunsOutcome>>();
    ListSQLScriptRunsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListSQLScriptRunsRequest&,
        ListSQLScriptRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListSchemaOutcome WedataClient::ListSchema(const ListSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "ListSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSchemaResponse rsp = ListSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSchemaOutcome(rsp);
        else
            return ListSchemaOutcome(o.GetError());
    }
    else
    {
        return ListSchemaOutcome(outcome.GetError());
    }
}

void WedataClient::ListSchemaAsync(const ListSchemaRequest& request, const ListSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSchemaRequest&;
    using Resp = ListSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "ListSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListSchemaOutcomeCallable WedataClient::ListSchemaCallable(const ListSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSchemaOutcome>>();
    ListSchemaAsync(
    request,
    [prom](
        const WedataClient*,
        const ListSchemaRequest&,
        ListSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTableOutcome WedataClient::ListTable(const ListTableRequest &request)
{
    auto outcome = MakeRequest(request, "ListTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTableResponse rsp = ListTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTableOutcome(rsp);
        else
            return ListTableOutcome(o.GetError());
    }
    else
    {
        return ListTableOutcome(outcome.GetError());
    }
}

void WedataClient::ListTableAsync(const ListTableRequest& request, const ListTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTableRequest&;
    using Resp = ListTableResponse;

    DoRequestAsync<Req, Resp>(
        "ListTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTableOutcomeCallable WedataClient::ListTableCallable(const ListTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTableOutcome>>();
    ListTableAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTableRequest&,
        ListTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTaskFoldersOutcome WedataClient::ListTaskFolders(const ListTaskFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskFoldersResponse rsp = ListTaskFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskFoldersOutcome(rsp);
        else
            return ListTaskFoldersOutcome(o.GetError());
    }
    else
    {
        return ListTaskFoldersOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskFoldersAsync(const ListTaskFoldersRequest& request, const ListTaskFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskFoldersRequest&;
    using Resp = ListTaskFoldersResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskFolders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTaskFoldersOutcomeCallable WedataClient::ListTaskFoldersCallable(const ListTaskFoldersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskFoldersOutcome>>();
    ListTaskFoldersAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTaskFoldersRequest&,
        ListTaskFoldersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTaskInstanceExecutionsOutcome WedataClient::ListTaskInstanceExecutions(const ListTaskInstanceExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskInstanceExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskInstanceExecutionsResponse rsp = ListTaskInstanceExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskInstanceExecutionsOutcome(rsp);
        else
            return ListTaskInstanceExecutionsOutcome(o.GetError());
    }
    else
    {
        return ListTaskInstanceExecutionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskInstanceExecutionsAsync(const ListTaskInstanceExecutionsRequest& request, const ListTaskInstanceExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskInstanceExecutionsRequest&;
    using Resp = ListTaskInstanceExecutionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskInstanceExecutions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTaskInstanceExecutionsOutcomeCallable WedataClient::ListTaskInstanceExecutionsCallable(const ListTaskInstanceExecutionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskInstanceExecutionsOutcome>>();
    ListTaskInstanceExecutionsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTaskInstanceExecutionsRequest&,
        ListTaskInstanceExecutionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTaskInstancesOutcome WedataClient::ListTaskInstances(const ListTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskInstancesResponse rsp = ListTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskInstancesOutcome(rsp);
        else
            return ListTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskInstancesAsync(const ListTaskInstancesRequest& request, const ListTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskInstancesRequest&;
    using Resp = ListTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTaskInstancesOutcomeCallable WedataClient::ListTaskInstancesCallable(const ListTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskInstancesOutcome>>();
    ListTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTaskInstancesRequest&,
        ListTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTaskVersionsOutcome WedataClient::ListTaskVersions(const ListTaskVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskVersionsResponse rsp = ListTaskVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskVersionsOutcome(rsp);
        else
            return ListTaskVersionsOutcome(o.GetError());
    }
    else
    {
        return ListTaskVersionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskVersionsAsync(const ListTaskVersionsRequest& request, const ListTaskVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskVersionsRequest&;
    using Resp = ListTaskVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTaskVersionsOutcomeCallable WedataClient::ListTaskVersionsCallable(const ListTaskVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskVersionsOutcome>>();
    ListTaskVersionsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTaskVersionsRequest&,
        ListTaskVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTasksOutcome WedataClient::ListTasks(const ListTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTasksResponse rsp = ListTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTasksOutcome(rsp);
        else
            return ListTasksOutcome(o.GetError());
    }
    else
    {
        return ListTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTasksRequest&;
    using Resp = ListTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTasksOutcomeCallable WedataClient::ListTasksCallable(const ListTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTasksOutcome>>();
    ListTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTasksRequest&,
        ListTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTenantRolesOutcome WedataClient::ListTenantRoles(const ListTenantRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ListTenantRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTenantRolesResponse rsp = ListTenantRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTenantRolesOutcome(rsp);
        else
            return ListTenantRolesOutcome(o.GetError());
    }
    else
    {
        return ListTenantRolesOutcome(outcome.GetError());
    }
}

void WedataClient::ListTenantRolesAsync(const ListTenantRolesRequest& request, const ListTenantRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTenantRolesRequest&;
    using Resp = ListTenantRolesResponse;

    DoRequestAsync<Req, Resp>(
        "ListTenantRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTenantRolesOutcomeCallable WedataClient::ListTenantRolesCallable(const ListTenantRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTenantRolesOutcome>>();
    ListTenantRolesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTenantRolesRequest&,
        ListTenantRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTriggerTaskVersionsOutcome WedataClient::ListTriggerTaskVersions(const ListTriggerTaskVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggerTaskVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggerTaskVersionsResponse rsp = ListTriggerTaskVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggerTaskVersionsOutcome(rsp);
        else
            return ListTriggerTaskVersionsOutcome(o.GetError());
    }
    else
    {
        return ListTriggerTaskVersionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTriggerTaskVersionsAsync(const ListTriggerTaskVersionsRequest& request, const ListTriggerTaskVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTriggerTaskVersionsRequest&;
    using Resp = ListTriggerTaskVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTriggerTaskVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTriggerTaskVersionsOutcomeCallable WedataClient::ListTriggerTaskVersionsCallable(const ListTriggerTaskVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTriggerTaskVersionsOutcome>>();
    ListTriggerTaskVersionsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTriggerTaskVersionsRequest&,
        ListTriggerTaskVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTriggerTasksOutcome WedataClient::ListTriggerTasks(const ListTriggerTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggerTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggerTasksResponse rsp = ListTriggerTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggerTasksOutcome(rsp);
        else
            return ListTriggerTasksOutcome(o.GetError());
    }
    else
    {
        return ListTriggerTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListTriggerTasksAsync(const ListTriggerTasksRequest& request, const ListTriggerTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTriggerTasksRequest&;
    using Resp = ListTriggerTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListTriggerTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTriggerTasksOutcomeCallable WedataClient::ListTriggerTasksCallable(const ListTriggerTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTriggerTasksOutcome>>();
    ListTriggerTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTriggerTasksRequest&,
        ListTriggerTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTriggerWorkflowRunsOutcome WedataClient::ListTriggerWorkflowRuns(const ListTriggerWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggerWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggerWorkflowRunsResponse rsp = ListTriggerWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggerWorkflowRunsOutcome(rsp);
        else
            return ListTriggerWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return ListTriggerWorkflowRunsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTriggerWorkflowRunsAsync(const ListTriggerWorkflowRunsRequest& request, const ListTriggerWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTriggerWorkflowRunsRequest&;
    using Resp = ListTriggerWorkflowRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTriggerWorkflowRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTriggerWorkflowRunsOutcomeCallable WedataClient::ListTriggerWorkflowRunsCallable(const ListTriggerWorkflowRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTriggerWorkflowRunsOutcome>>();
    ListTriggerWorkflowRunsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTriggerWorkflowRunsRequest&,
        ListTriggerWorkflowRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListTriggerWorkflowsOutcome WedataClient::ListTriggerWorkflows(const ListTriggerWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggerWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggerWorkflowsResponse rsp = ListTriggerWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggerWorkflowsOutcome(rsp);
        else
            return ListTriggerWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListTriggerWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTriggerWorkflowsAsync(const ListTriggerWorkflowsRequest& request, const ListTriggerWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTriggerWorkflowsRequest&;
    using Resp = ListTriggerWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTriggerWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListTriggerWorkflowsOutcomeCallable WedataClient::ListTriggerWorkflowsCallable(const ListTriggerWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTriggerWorkflowsOutcome>>();
    ListTriggerWorkflowsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListTriggerWorkflowsRequest&,
        ListTriggerWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListUpstreamOpsTasksOutcome WedataClient::ListUpstreamOpsTasks(const ListUpstreamOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamOpsTasksResponse rsp = ListUpstreamOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamOpsTasksOutcome(rsp);
        else
            return ListUpstreamOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamOpsTasksAsync(const ListUpstreamOpsTasksRequest& request, const ListUpstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUpstreamOpsTasksRequest&;
    using Resp = ListUpstreamOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListUpstreamOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListUpstreamOpsTasksOutcomeCallable WedataClient::ListUpstreamOpsTasksCallable(const ListUpstreamOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUpstreamOpsTasksOutcome>>();
    ListUpstreamOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListUpstreamOpsTasksRequest&,
        ListUpstreamOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListUpstreamTaskInstancesOutcome WedataClient::ListUpstreamTaskInstances(const ListUpstreamTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamTaskInstancesResponse rsp = ListUpstreamTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamTaskInstancesOutcome(rsp);
        else
            return ListUpstreamTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamTaskInstancesAsync(const ListUpstreamTaskInstancesRequest& request, const ListUpstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUpstreamTaskInstancesRequest&;
    using Resp = ListUpstreamTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListUpstreamTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListUpstreamTaskInstancesOutcomeCallable WedataClient::ListUpstreamTaskInstancesCallable(const ListUpstreamTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUpstreamTaskInstancesOutcome>>();
    ListUpstreamTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListUpstreamTaskInstancesRequest&,
        ListUpstreamTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListUpstreamTasksOutcome WedataClient::ListUpstreamTasks(const ListUpstreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamTasksResponse rsp = ListUpstreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamTasksOutcome(rsp);
        else
            return ListUpstreamTasksOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamTasksAsync(const ListUpstreamTasksRequest& request, const ListUpstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUpstreamTasksRequest&;
    using Resp = ListUpstreamTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListUpstreamTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListUpstreamTasksOutcomeCallable WedataClient::ListUpstreamTasksCallable(const ListUpstreamTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUpstreamTasksOutcome>>();
    ListUpstreamTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListUpstreamTasksRequest&,
        ListUpstreamTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListUpstreamTriggerTasksOutcome WedataClient::ListUpstreamTriggerTasks(const ListUpstreamTriggerTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamTriggerTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamTriggerTasksResponse rsp = ListUpstreamTriggerTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamTriggerTasksOutcome(rsp);
        else
            return ListUpstreamTriggerTasksOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamTriggerTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamTriggerTasksAsync(const ListUpstreamTriggerTasksRequest& request, const ListUpstreamTriggerTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUpstreamTriggerTasksRequest&;
    using Resp = ListUpstreamTriggerTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListUpstreamTriggerTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListUpstreamTriggerTasksOutcomeCallable WedataClient::ListUpstreamTriggerTasksCallable(const ListUpstreamTriggerTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUpstreamTriggerTasksOutcome>>();
    ListUpstreamTriggerTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const ListUpstreamTriggerTasksRequest&,
        ListUpstreamTriggerTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListWorkflowFoldersOutcome WedataClient::ListWorkflowFolders(const ListWorkflowFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowFoldersResponse rsp = ListWorkflowFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowFoldersOutcome(rsp);
        else
            return ListWorkflowFoldersOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowFoldersOutcome(outcome.GetError());
    }
}

void WedataClient::ListWorkflowFoldersAsync(const ListWorkflowFoldersRequest& request, const ListWorkflowFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowFoldersRequest&;
    using Resp = ListWorkflowFoldersResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowFolders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListWorkflowFoldersOutcomeCallable WedataClient::ListWorkflowFoldersCallable(const ListWorkflowFoldersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowFoldersOutcome>>();
    ListWorkflowFoldersAsync(
    request,
    [prom](
        const WedataClient*,
        const ListWorkflowFoldersRequest&,
        ListWorkflowFoldersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListWorkflowPermissionsOutcome WedataClient::ListWorkflowPermissions(const ListWorkflowPermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowPermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowPermissionsResponse rsp = ListWorkflowPermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowPermissionsOutcome(rsp);
        else
            return ListWorkflowPermissionsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowPermissionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListWorkflowPermissionsAsync(const ListWorkflowPermissionsRequest& request, const ListWorkflowPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowPermissionsRequest&;
    using Resp = ListWorkflowPermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowPermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListWorkflowPermissionsOutcomeCallable WedataClient::ListWorkflowPermissionsCallable(const ListWorkflowPermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowPermissionsOutcome>>();
    ListWorkflowPermissionsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListWorkflowPermissionsRequest&,
        ListWorkflowPermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListWorkflowsOutcome WedataClient::ListWorkflows(const ListWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowsResponse rsp = ListWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowsOutcome(rsp);
        else
            return ListWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowsRequest&;
    using Resp = ListWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListWorkflowsOutcomeCallable WedataClient::ListWorkflowsCallable(const ListWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowsOutcome>>();
    ListWorkflowsAsync(
    request,
    [prom](
        const WedataClient*,
        const ListWorkflowsRequest&,
        ListWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyQualityRuleOutcome WedataClient::ModifyQualityRule(const ModifyQualityRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQualityRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQualityRuleResponse rsp = ModifyQualityRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQualityRuleOutcome(rsp);
        else
            return ModifyQualityRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyQualityRuleOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyQualityRuleAsync(const ModifyQualityRuleRequest& request, const ModifyQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQualityRuleRequest&;
    using Resp = ModifyQualityRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQualityRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyQualityRuleOutcomeCallable WedataClient::ModifyQualityRuleCallable(const ModifyQualityRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQualityRuleOutcome>>();
    ModifyQualityRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyQualityRuleRequest&,
        ModifyQualityRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyQualityRuleGroupOutcome WedataClient::ModifyQualityRuleGroup(const ModifyQualityRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQualityRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQualityRuleGroupResponse rsp = ModifyQualityRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQualityRuleGroupOutcome(rsp);
        else
            return ModifyQualityRuleGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyQualityRuleGroupOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyQualityRuleGroupAsync(const ModifyQualityRuleGroupRequest& request, const ModifyQualityRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQualityRuleGroupRequest&;
    using Resp = ModifyQualityRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQualityRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyQualityRuleGroupOutcomeCallable WedataClient::ModifyQualityRuleGroupCallable(const ModifyQualityRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQualityRuleGroupOutcome>>();
    ModifyQualityRuleGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyQualityRuleGroupRequest&,
        ModifyQualityRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::PauseOpsTasksAsyncOutcome WedataClient::PauseOpsTasksAsync(const PauseOpsTasksAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOpsTasksAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOpsTasksAsyncResponse rsp = PauseOpsTasksAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOpsTasksAsyncOutcome(rsp);
        else
            return PauseOpsTasksAsyncOutcome(o.GetError());
    }
    else
    {
        return PauseOpsTasksAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::PauseOpsTasksAsyncAsync(const PauseOpsTasksAsyncRequest& request, const PauseOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseOpsTasksAsyncRequest&;
    using Resp = PauseOpsTasksAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "PauseOpsTasksAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::PauseOpsTasksAsyncOutcomeCallable WedataClient::PauseOpsTasksAsyncCallable(const PauseOpsTasksAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseOpsTasksAsyncOutcome>>();
    PauseOpsTasksAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const PauseOpsTasksAsyncRequest&,
        PauseOpsTasksAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RegisterLineageOutcome WedataClient::RegisterLineage(const RegisterLineageRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterLineageResponse rsp = RegisterLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterLineageOutcome(rsp);
        else
            return RegisterLineageOutcome(o.GetError());
    }
    else
    {
        return RegisterLineageOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterLineageAsync(const RegisterLineageRequest& request, const RegisterLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterLineageRequest&;
    using Resp = RegisterLineageResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RegisterLineageOutcomeCallable WedataClient::RegisterLineageCallable(const RegisterLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterLineageOutcome>>();
    RegisterLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const RegisterLineageRequest&,
        RegisterLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RemoveMemberProjectRoleOutcome WedataClient::RemoveMemberProjectRole(const RemoveMemberProjectRoleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMemberProjectRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMemberProjectRoleResponse rsp = RemoveMemberProjectRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMemberProjectRoleOutcome(rsp);
        else
            return RemoveMemberProjectRoleOutcome(o.GetError());
    }
    else
    {
        return RemoveMemberProjectRoleOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveMemberProjectRoleAsync(const RemoveMemberProjectRoleRequest& request, const RemoveMemberProjectRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveMemberProjectRoleRequest&;
    using Resp = RemoveMemberProjectRoleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveMemberProjectRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RemoveMemberProjectRoleOutcomeCallable WedataClient::RemoveMemberProjectRoleCallable(const RemoveMemberProjectRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMemberProjectRoleOutcome>>();
    RemoveMemberProjectRoleAsync(
    request,
    [prom](
        const WedataClient*,
        const RemoveMemberProjectRoleRequest&,
        RemoveMemberProjectRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RerunTaskInstancesAsyncOutcome WedataClient::RerunTaskInstancesAsync(const RerunTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "RerunTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunTaskInstancesAsyncResponse rsp = RerunTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunTaskInstancesAsyncOutcome(rsp);
        else
            return RerunTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return RerunTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::RerunTaskInstancesAsyncAsync(const RerunTaskInstancesAsyncRequest& request, const RerunTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunTaskInstancesAsyncRequest&;
    using Resp = RerunTaskInstancesAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "RerunTaskInstancesAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RerunTaskInstancesAsyncOutcomeCallable WedataClient::RerunTaskInstancesAsyncCallable(const RerunTaskInstancesAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunTaskInstancesAsyncOutcome>>();
    RerunTaskInstancesAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const RerunTaskInstancesAsyncRequest&,
        RerunTaskInstancesAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RerunTriggerWorkflowRunAsyncOutcome WedataClient::RerunTriggerWorkflowRunAsync(const RerunTriggerWorkflowRunAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "RerunTriggerWorkflowRunAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunTriggerWorkflowRunAsyncResponse rsp = RerunTriggerWorkflowRunAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunTriggerWorkflowRunAsyncOutcome(rsp);
        else
            return RerunTriggerWorkflowRunAsyncOutcome(o.GetError());
    }
    else
    {
        return RerunTriggerWorkflowRunAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::RerunTriggerWorkflowRunAsyncAsync(const RerunTriggerWorkflowRunAsyncRequest& request, const RerunTriggerWorkflowRunAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunTriggerWorkflowRunAsyncRequest&;
    using Resp = RerunTriggerWorkflowRunAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "RerunTriggerWorkflowRunAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RerunTriggerWorkflowRunAsyncOutcomeCallable WedataClient::RerunTriggerWorkflowRunAsyncCallable(const RerunTriggerWorkflowRunAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunTriggerWorkflowRunAsyncOutcome>>();
    RerunTriggerWorkflowRunAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const RerunTriggerWorkflowRunAsyncRequest&,
        RerunTriggerWorkflowRunAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RevokeDataSourceAuthorizationOutcome WedataClient::RevokeDataSourceAuthorization(const RevokeDataSourceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeDataSourceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeDataSourceAuthorizationResponse rsp = RevokeDataSourceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeDataSourceAuthorizationOutcome(rsp);
        else
            return RevokeDataSourceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return RevokeDataSourceAuthorizationOutcome(outcome.GetError());
    }
}

void WedataClient::RevokeDataSourceAuthorizationAsync(const RevokeDataSourceAuthorizationRequest& request, const RevokeDataSourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeDataSourceAuthorizationRequest&;
    using Resp = RevokeDataSourceAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeDataSourceAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RevokeDataSourceAuthorizationOutcomeCallable WedataClient::RevokeDataSourceAuthorizationCallable(const RevokeDataSourceAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeDataSourceAuthorizationOutcome>>();
    RevokeDataSourceAuthorizationAsync(
    request,
    [prom](
        const WedataClient*,
        const RevokeDataSourceAuthorizationRequest&,
        RevokeDataSourceAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RunSQLScriptOutcome WedataClient::RunSQLScript(const RunSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "RunSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSQLScriptResponse rsp = RunSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSQLScriptOutcome(rsp);
        else
            return RunSQLScriptOutcome(o.GetError());
    }
    else
    {
        return RunSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::RunSQLScriptAsync(const RunSQLScriptRequest& request, const RunSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunSQLScriptRequest&;
    using Resp = RunSQLScriptResponse;

    DoRequestAsync<Req, Resp>(
        "RunSQLScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RunSQLScriptOutcomeCallable WedataClient::RunSQLScriptCallable(const RunSQLScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunSQLScriptOutcome>>();
    RunSQLScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const RunSQLScriptRequest&,
        RunSQLScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SetSuccessTaskInstancesAsyncOutcome WedataClient::SetSuccessTaskInstancesAsync(const SetSuccessTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "SetSuccessTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSuccessTaskInstancesAsyncResponse rsp = SetSuccessTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSuccessTaskInstancesAsyncOutcome(rsp);
        else
            return SetSuccessTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return SetSuccessTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::SetSuccessTaskInstancesAsyncAsync(const SetSuccessTaskInstancesAsyncRequest& request, const SetSuccessTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetSuccessTaskInstancesAsyncRequest&;
    using Resp = SetSuccessTaskInstancesAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "SetSuccessTaskInstancesAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SetSuccessTaskInstancesAsyncOutcomeCallable WedataClient::SetSuccessTaskInstancesAsyncCallable(const SetSuccessTaskInstancesAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetSuccessTaskInstancesAsyncOutcome>>();
    SetSuccessTaskInstancesAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const SetSuccessTaskInstancesAsyncRequest&,
        SetSuccessTaskInstancesAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::StartOpsTasksOutcome WedataClient::StartOpsTasks(const StartOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "StartOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartOpsTasksResponse rsp = StartOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartOpsTasksOutcome(rsp);
        else
            return StartOpsTasksOutcome(o.GetError());
    }
    else
    {
        return StartOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::StartOpsTasksAsync(const StartOpsTasksRequest& request, const StartOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartOpsTasksRequest&;
    using Resp = StartOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "StartOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::StartOpsTasksOutcomeCallable WedataClient::StartOpsTasksCallable(const StartOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartOpsTasksOutcome>>();
    StartOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const StartOpsTasksRequest&,
        StartOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::StopOpsTasksAsyncOutcome WedataClient::StopOpsTasksAsync(const StopOpsTasksAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "StopOpsTasksAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOpsTasksAsyncResponse rsp = StopOpsTasksAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOpsTasksAsyncOutcome(rsp);
        else
            return StopOpsTasksAsyncOutcome(o.GetError());
    }
    else
    {
        return StopOpsTasksAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::StopOpsTasksAsyncAsync(const StopOpsTasksAsyncRequest& request, const StopOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopOpsTasksAsyncRequest&;
    using Resp = StopOpsTasksAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "StopOpsTasksAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::StopOpsTasksAsyncOutcomeCallable WedataClient::StopOpsTasksAsyncCallable(const StopOpsTasksAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopOpsTasksAsyncOutcome>>();
    StopOpsTasksAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const StopOpsTasksAsyncRequest&,
        StopOpsTasksAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::StopSQLScriptRunOutcome WedataClient::StopSQLScriptRun(const StopSQLScriptRunRequest &request)
{
    auto outcome = MakeRequest(request, "StopSQLScriptRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSQLScriptRunResponse rsp = StopSQLScriptRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSQLScriptRunOutcome(rsp);
        else
            return StopSQLScriptRunOutcome(o.GetError());
    }
    else
    {
        return StopSQLScriptRunOutcome(outcome.GetError());
    }
}

void WedataClient::StopSQLScriptRunAsync(const StopSQLScriptRunRequest& request, const StopSQLScriptRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSQLScriptRunRequest&;
    using Resp = StopSQLScriptRunResponse;

    DoRequestAsync<Req, Resp>(
        "StopSQLScriptRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::StopSQLScriptRunOutcomeCallable WedataClient::StopSQLScriptRunCallable(const StopSQLScriptRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSQLScriptRunOutcome>>();
    StopSQLScriptRunAsync(
    request,
    [prom](
        const WedataClient*,
        const StopSQLScriptRunRequest&,
        StopSQLScriptRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitTaskOutcome WedataClient::SubmitTask(const SubmitTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskResponse rsp = SubmitTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskOutcome(rsp);
        else
            return SubmitTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTaskAsync(const SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTaskRequest&;
    using Resp = SubmitTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitTaskOutcomeCallable WedataClient::SubmitTaskCallable(const SubmitTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTaskOutcome>>();
    SubmitTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitTaskRequest&,
        SubmitTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitTriggerTaskOutcome WedataClient::SubmitTriggerTask(const SubmitTriggerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTriggerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTriggerTaskResponse rsp = SubmitTriggerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTriggerTaskOutcome(rsp);
        else
            return SubmitTriggerTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitTriggerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTriggerTaskAsync(const SubmitTriggerTaskRequest& request, const SubmitTriggerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTriggerTaskRequest&;
    using Resp = SubmitTriggerTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTriggerTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitTriggerTaskOutcomeCallable WedataClient::SubmitTriggerTaskCallable(const SubmitTriggerTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTriggerTaskOutcome>>();
    SubmitTriggerTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitTriggerTaskRequest&,
        SubmitTriggerTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateCodeFileOutcome WedataClient::UpdateCodeFile(const UpdateCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeFileResponse rsp = UpdateCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeFileOutcome(rsp);
        else
            return UpdateCodeFileOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeFileAsync(const UpdateCodeFileRequest& request, const UpdateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCodeFileRequest&;
    using Resp = UpdateCodeFileResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCodeFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateCodeFileOutcomeCallable WedataClient::UpdateCodeFileCallable(const UpdateCodeFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCodeFileOutcome>>();
    UpdateCodeFileAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateCodeFileRequest&,
        UpdateCodeFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateCodeFolderOutcome WedataClient::UpdateCodeFolder(const UpdateCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeFolderResponse rsp = UpdateCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeFolderOutcome(rsp);
        else
            return UpdateCodeFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeFolderAsync(const UpdateCodeFolderRequest& request, const UpdateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCodeFolderRequest&;
    using Resp = UpdateCodeFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCodeFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateCodeFolderOutcomeCallable WedataClient::UpdateCodeFolderCallable(const UpdateCodeFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCodeFolderOutcome>>();
    UpdateCodeFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateCodeFolderRequest&,
        UpdateCodeFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateDataSourceOutcome WedataClient::UpdateDataSource(const UpdateDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataSourceResponse rsp = UpdateDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataSourceOutcome(rsp);
        else
            return UpdateDataSourceOutcome(o.GetError());
    }
    else
    {
        return UpdateDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataSourceRequest&;
    using Resp = UpdateDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateDataSourceOutcomeCallable WedataClient::UpdateDataSourceCallable(const UpdateDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataSourceOutcome>>();
    UpdateDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateDataSourceRequest&,
        UpdateDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateOpsAlarmRuleOutcome WedataClient::UpdateOpsAlarmRule(const UpdateOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOpsAlarmRuleResponse rsp = UpdateOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOpsAlarmRuleOutcome(rsp);
        else
            return UpdateOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateOpsAlarmRuleAsync(const UpdateOpsAlarmRuleRequest& request, const UpdateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOpsAlarmRuleRequest&;
    using Resp = UpdateOpsAlarmRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOpsAlarmRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateOpsAlarmRuleOutcomeCallable WedataClient::UpdateOpsAlarmRuleCallable(const UpdateOpsAlarmRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOpsAlarmRuleOutcome>>();
    UpdateOpsAlarmRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateOpsAlarmRuleRequest&,
        UpdateOpsAlarmRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateOpsTasksOwnerOutcome WedataClient::UpdateOpsTasksOwner(const UpdateOpsTasksOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOpsTasksOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOpsTasksOwnerResponse rsp = UpdateOpsTasksOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOpsTasksOwnerOutcome(rsp);
        else
            return UpdateOpsTasksOwnerOutcome(o.GetError());
    }
    else
    {
        return UpdateOpsTasksOwnerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateOpsTasksOwnerAsync(const UpdateOpsTasksOwnerRequest& request, const UpdateOpsTasksOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOpsTasksOwnerRequest&;
    using Resp = UpdateOpsTasksOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOpsTasksOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateOpsTasksOwnerOutcomeCallable WedataClient::UpdateOpsTasksOwnerCallable(const UpdateOpsTasksOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOpsTasksOwnerOutcome>>();
    UpdateOpsTasksOwnerAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateOpsTasksOwnerRequest&,
        UpdateOpsTasksOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateOpsTriggerTasksOwnerOutcome WedataClient::UpdateOpsTriggerTasksOwner(const UpdateOpsTriggerTasksOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOpsTriggerTasksOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOpsTriggerTasksOwnerResponse rsp = UpdateOpsTriggerTasksOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOpsTriggerTasksOwnerOutcome(rsp);
        else
            return UpdateOpsTriggerTasksOwnerOutcome(o.GetError());
    }
    else
    {
        return UpdateOpsTriggerTasksOwnerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateOpsTriggerTasksOwnerAsync(const UpdateOpsTriggerTasksOwnerRequest& request, const UpdateOpsTriggerTasksOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOpsTriggerTasksOwnerRequest&;
    using Resp = UpdateOpsTriggerTasksOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOpsTriggerTasksOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateOpsTriggerTasksOwnerOutcomeCallable WedataClient::UpdateOpsTriggerTasksOwnerCallable(const UpdateOpsTriggerTasksOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOpsTriggerTasksOwnerOutcome>>();
    UpdateOpsTriggerTasksOwnerAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateOpsTriggerTasksOwnerRequest&,
        UpdateOpsTriggerTasksOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateProjectOutcome WedataClient::UpdateProject(const UpdateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectResponse rsp = UpdateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectOutcome(rsp);
        else
            return UpdateProjectOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProjectRequest&;
    using Resp = UpdateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateProjectOutcomeCallable WedataClient::UpdateProjectCallable(const UpdateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProjectOutcome>>();
    UpdateProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateProjectRequest&,
        UpdateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateResourceFileOutcome WedataClient::UpdateResourceFile(const UpdateResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceFileResponse rsp = UpdateResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceFileOutcome(rsp);
        else
            return UpdateResourceFileOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateResourceFileAsync(const UpdateResourceFileRequest& request, const UpdateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateResourceFileRequest&;
    using Resp = UpdateResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateResourceFileOutcomeCallable WedataClient::UpdateResourceFileCallable(const UpdateResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateResourceFileOutcome>>();
    UpdateResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateResourceFileRequest&,
        UpdateResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateResourceFolderOutcome WedataClient::UpdateResourceFolder(const UpdateResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceFolderResponse rsp = UpdateResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceFolderOutcome(rsp);
        else
            return UpdateResourceFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateResourceFolderAsync(const UpdateResourceFolderRequest& request, const UpdateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateResourceFolderRequest&;
    using Resp = UpdateResourceFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateResourceFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateResourceFolderOutcomeCallable WedataClient::UpdateResourceFolderCallable(const UpdateResourceFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateResourceFolderOutcome>>();
    UpdateResourceFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateResourceFolderRequest&,
        UpdateResourceFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateResourceGroupOutcome WedataClient::UpdateResourceGroup(const UpdateResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceGroupResponse rsp = UpdateResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceGroupOutcome(rsp);
        else
            return UpdateResourceGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceGroupOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateResourceGroupAsync(const UpdateResourceGroupRequest& request, const UpdateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateResourceGroupRequest&;
    using Resp = UpdateResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateResourceGroupOutcomeCallable WedataClient::UpdateResourceGroupCallable(const UpdateResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateResourceGroupOutcome>>();
    UpdateResourceGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateResourceGroupRequest&,
        UpdateResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateSQLFolderOutcome WedataClient::UpdateSQLFolder(const UpdateSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSQLFolderResponse rsp = UpdateSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSQLFolderOutcome(rsp);
        else
            return UpdateSQLFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateSQLFolderAsync(const UpdateSQLFolderRequest& request, const UpdateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSQLFolderRequest&;
    using Resp = UpdateSQLFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSQLFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateSQLFolderOutcomeCallable WedataClient::UpdateSQLFolderCallable(const UpdateSQLFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSQLFolderOutcome>>();
    UpdateSQLFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateSQLFolderRequest&,
        UpdateSQLFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateSQLScriptOutcome WedataClient::UpdateSQLScript(const UpdateSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSQLScriptResponse rsp = UpdateSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSQLScriptOutcome(rsp);
        else
            return UpdateSQLScriptOutcome(o.GetError());
    }
    else
    {
        return UpdateSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateSQLScriptAsync(const UpdateSQLScriptRequest& request, const UpdateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSQLScriptRequest&;
    using Resp = UpdateSQLScriptResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSQLScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateSQLScriptOutcomeCallable WedataClient::UpdateSQLScriptCallable(const UpdateSQLScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSQLScriptOutcome>>();
    UpdateSQLScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateSQLScriptRequest&,
        UpdateSQLScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTaskOutcome WedataClient::UpdateTask(const UpdateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTaskResponse rsp = UpdateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTaskOutcome(rsp);
        else
            return UpdateTaskOutcome(o.GetError());
    }
    else
    {
        return UpdateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTaskRequest&;
    using Resp = UpdateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTaskOutcomeCallable WedataClient::UpdateTaskCallable(const UpdateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTaskOutcome>>();
    UpdateTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTaskRequest&,
        UpdateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTaskFolderOutcome WedataClient::UpdateTaskFolder(const UpdateTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTaskFolderResponse rsp = UpdateTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTaskFolderOutcome(rsp);
        else
            return UpdateTaskFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTaskFolderAsync(const UpdateTaskFolderRequest& request, const UpdateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTaskFolderRequest&;
    using Resp = UpdateTaskFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTaskFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTaskFolderOutcomeCallable WedataClient::UpdateTaskFolderCallable(const UpdateTaskFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTaskFolderOutcome>>();
    UpdateTaskFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTaskFolderRequest&,
        UpdateTaskFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTaskPartiallyOutcome WedataClient::UpdateTaskPartially(const UpdateTaskPartiallyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTaskPartially");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTaskPartiallyResponse rsp = UpdateTaskPartiallyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTaskPartiallyOutcome(rsp);
        else
            return UpdateTaskPartiallyOutcome(o.GetError());
    }
    else
    {
        return UpdateTaskPartiallyOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTaskPartiallyAsync(const UpdateTaskPartiallyRequest& request, const UpdateTaskPartiallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTaskPartiallyRequest&;
    using Resp = UpdateTaskPartiallyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTaskPartially", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTaskPartiallyOutcomeCallable WedataClient::UpdateTaskPartiallyCallable(const UpdateTaskPartiallyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTaskPartiallyOutcome>>();
    UpdateTaskPartiallyAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTaskPartiallyRequest&,
        UpdateTaskPartiallyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTriggerTaskOutcome WedataClient::UpdateTriggerTask(const UpdateTriggerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerTaskResponse rsp = UpdateTriggerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerTaskOutcome(rsp);
        else
            return UpdateTriggerTaskOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTriggerTaskAsync(const UpdateTriggerTaskRequest& request, const UpdateTriggerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerTaskRequest&;
    using Resp = UpdateTriggerTaskResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTriggerTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTriggerTaskOutcomeCallable WedataClient::UpdateTriggerTaskCallable(const UpdateTriggerTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerTaskOutcome>>();
    UpdateTriggerTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTriggerTaskRequest&,
        UpdateTriggerTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTriggerTaskPartiallyOutcome WedataClient::UpdateTriggerTaskPartially(const UpdateTriggerTaskPartiallyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerTaskPartially");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerTaskPartiallyResponse rsp = UpdateTriggerTaskPartiallyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerTaskPartiallyOutcome(rsp);
        else
            return UpdateTriggerTaskPartiallyOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerTaskPartiallyOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTriggerTaskPartiallyAsync(const UpdateTriggerTaskPartiallyRequest& request, const UpdateTriggerTaskPartiallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerTaskPartiallyRequest&;
    using Resp = UpdateTriggerTaskPartiallyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTriggerTaskPartially", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTriggerTaskPartiallyOutcomeCallable WedataClient::UpdateTriggerTaskPartiallyCallable(const UpdateTriggerTaskPartiallyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerTaskPartiallyOutcome>>();
    UpdateTriggerTaskPartiallyAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTriggerTaskPartiallyRequest&,
        UpdateTriggerTaskPartiallyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTriggerWorkflowOutcome WedataClient::UpdateTriggerWorkflow(const UpdateTriggerWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerWorkflowResponse rsp = UpdateTriggerWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerWorkflowOutcome(rsp);
        else
            return UpdateTriggerWorkflowOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTriggerWorkflowAsync(const UpdateTriggerWorkflowRequest& request, const UpdateTriggerWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerWorkflowRequest&;
    using Resp = UpdateTriggerWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTriggerWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTriggerWorkflowOutcomeCallable WedataClient::UpdateTriggerWorkflowCallable(const UpdateTriggerWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerWorkflowOutcome>>();
    UpdateTriggerWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTriggerWorkflowRequest&,
        UpdateTriggerWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateTriggerWorkflowPartiallyOutcome WedataClient::UpdateTriggerWorkflowPartially(const UpdateTriggerWorkflowPartiallyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerWorkflowPartially");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerWorkflowPartiallyResponse rsp = UpdateTriggerWorkflowPartiallyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerWorkflowPartiallyOutcome(rsp);
        else
            return UpdateTriggerWorkflowPartiallyOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerWorkflowPartiallyOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTriggerWorkflowPartiallyAsync(const UpdateTriggerWorkflowPartiallyRequest& request, const UpdateTriggerWorkflowPartiallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerWorkflowPartiallyRequest&;
    using Resp = UpdateTriggerWorkflowPartiallyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTriggerWorkflowPartially", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateTriggerWorkflowPartiallyOutcomeCallable WedataClient::UpdateTriggerWorkflowPartiallyCallable(const UpdateTriggerWorkflowPartiallyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerWorkflowPartiallyOutcome>>();
    UpdateTriggerWorkflowPartiallyAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateTriggerWorkflowPartiallyRequest&,
        UpdateTriggerWorkflowPartiallyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateWorkflowOutcome WedataClient::UpdateWorkflow(const UpdateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowResponse rsp = UpdateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOutcome(rsp);
        else
            return UpdateWorkflowOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowRequest&;
    using Resp = UpdateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateWorkflowOutcomeCallable WedataClient::UpdateWorkflowCallable(const UpdateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowOutcome>>();
    UpdateWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateWorkflowRequest&,
        UpdateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateWorkflowFolderOutcome WedataClient::UpdateWorkflowFolder(const UpdateWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowFolderResponse rsp = UpdateWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowFolderOutcome(rsp);
        else
            return UpdateWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowFolderAsync(const UpdateWorkflowFolderRequest& request, const UpdateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowFolderRequest&;
    using Resp = UpdateWorkflowFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflowFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateWorkflowFolderOutcomeCallable WedataClient::UpdateWorkflowFolderCallable(const UpdateWorkflowFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowFolderOutcome>>();
    UpdateWorkflowFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateWorkflowFolderRequest&,
        UpdateWorkflowFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

