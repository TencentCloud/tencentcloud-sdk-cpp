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

#include <tencentcloud/ioa/v20220601/IoaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ioa::V20220601;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-06-01";
    const string ENDPOINT = "ioa.tencentcloudapi.com";
}

IoaClient::IoaClient(const Credential &credential, const string &region) :
    IoaClient(credential, region, ClientProfile())
{
}

IoaClient::IoaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IoaClient::BindBusinessResourceConnectorGroupOutcome IoaClient::BindBusinessResourceConnectorGroup(const BindBusinessResourceConnectorGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BindBusinessResourceConnectorGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindBusinessResourceConnectorGroupResponse rsp = BindBusinessResourceConnectorGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindBusinessResourceConnectorGroupOutcome(rsp);
        else
            return BindBusinessResourceConnectorGroupOutcome(o.GetError());
    }
    else
    {
        return BindBusinessResourceConnectorGroupOutcome(outcome.GetError());
    }
}

void IoaClient::BindBusinessResourceConnectorGroupAsync(const BindBusinessResourceConnectorGroupRequest& request, const BindBusinessResourceConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindBusinessResourceConnectorGroupRequest&;
    using Resp = BindBusinessResourceConnectorGroupResponse;

    DoRequestAsync<Req, Resp>(
        "BindBusinessResourceConnectorGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::BindBusinessResourceConnectorGroupOutcomeCallable IoaClient::BindBusinessResourceConnectorGroupCallable(const BindBusinessResourceConnectorGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindBusinessResourceConnectorGroupOutcome>>();
    BindBusinessResourceConnectorGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const BindBusinessResourceConnectorGroupRequest&,
        BindBusinessResourceConnectorGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateBusinessResourceOutcome IoaClient::CreateBusinessResource(const CreateBusinessResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBusinessResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBusinessResourceResponse rsp = CreateBusinessResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBusinessResourceOutcome(rsp);
        else
            return CreateBusinessResourceOutcome(o.GetError());
    }
    else
    {
        return CreateBusinessResourceOutcome(outcome.GetError());
    }
}

void IoaClient::CreateBusinessResourceAsync(const CreateBusinessResourceRequest& request, const CreateBusinessResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBusinessResourceRequest&;
    using Resp = CreateBusinessResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBusinessResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateBusinessResourceOutcomeCallable IoaClient::CreateBusinessResourceCallable(const CreateBusinessResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBusinessResourceOutcome>>();
    CreateBusinessResourceAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateBusinessResourceRequest&,
        CreateBusinessResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateCompanyDirectoryConfigOutcome IoaClient::CreateCompanyDirectoryConfig(const CreateCompanyDirectoryConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCompanyDirectoryConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCompanyDirectoryConfigResponse rsp = CreateCompanyDirectoryConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCompanyDirectoryConfigOutcome(rsp);
        else
            return CreateCompanyDirectoryConfigOutcome(o.GetError());
    }
    else
    {
        return CreateCompanyDirectoryConfigOutcome(outcome.GetError());
    }
}

void IoaClient::CreateCompanyDirectoryConfigAsync(const CreateCompanyDirectoryConfigRequest& request, const CreateCompanyDirectoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCompanyDirectoryConfigRequest&;
    using Resp = CreateCompanyDirectoryConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCompanyDirectoryConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateCompanyDirectoryConfigOutcomeCallable IoaClient::CreateCompanyDirectoryConfigCallable(const CreateCompanyDirectoryConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCompanyDirectoryConfigOutcome>>();
    CreateCompanyDirectoryConfigAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateCompanyDirectoryConfigRequest&,
        CreateCompanyDirectoryConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDLPFileDetectTaskOutcome IoaClient::CreateDLPFileDetectTask(const CreateDLPFileDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLPFileDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLPFileDetectTaskResponse rsp = CreateDLPFileDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLPFileDetectTaskOutcome(rsp);
        else
            return CreateDLPFileDetectTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDLPFileDetectTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDLPFileDetectTaskAsync(const CreateDLPFileDetectTaskRequest& request, const CreateDLPFileDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDLPFileDetectTaskRequest&;
    using Resp = CreateDLPFileDetectTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDLPFileDetectTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDLPFileDetectTaskOutcomeCallable IoaClient::CreateDLPFileDetectTaskCallable(const CreateDLPFileDetectTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDLPFileDetectTaskOutcome>>();
    CreateDLPFileDetectTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDLPFileDetectTaskRequest&,
        CreateDLPFileDetectTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDLPFileDetectionTaskOutcome IoaClient::CreateDLPFileDetectionTask(const CreateDLPFileDetectionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLPFileDetectionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLPFileDetectionTaskResponse rsp = CreateDLPFileDetectionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLPFileDetectionTaskOutcome(rsp);
        else
            return CreateDLPFileDetectionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDLPFileDetectionTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDLPFileDetectionTaskAsync(const CreateDLPFileDetectionTaskRequest& request, const CreateDLPFileDetectionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDLPFileDetectionTaskRequest&;
    using Resp = CreateDLPFileDetectionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDLPFileDetectionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDLPFileDetectionTaskOutcomeCallable IoaClient::CreateDLPFileDetectionTaskCallable(const CreateDLPFileDetectionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDLPFileDetectionTaskOutcome>>();
    CreateDLPFileDetectionTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDLPFileDetectionTaskRequest&,
        CreateDLPFileDetectionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDeviceTaskOutcome IoaClient::CreateDeviceTask(const CreateDeviceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceTaskResponse rsp = CreateDeviceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceTaskOutcome(rsp);
        else
            return CreateDeviceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceTaskAsync(const CreateDeviceTaskRequest& request, const CreateDeviceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceTaskRequest&;
    using Resp = CreateDeviceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDeviceTaskOutcomeCallable IoaClient::CreateDeviceTaskCallable(const CreateDeviceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceTaskOutcome>>();
    CreateDeviceTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDeviceTaskRequest&,
        CreateDeviceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreateDeviceVirtualGroupOutcome IoaClient::CreateDeviceVirtualGroup(const CreateDeviceVirtualGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceVirtualGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceVirtualGroupResponse rsp = CreateDeviceVirtualGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceVirtualGroupOutcome(rsp);
        else
            return CreateDeviceVirtualGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceVirtualGroupOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceVirtualGroupAsync(const CreateDeviceVirtualGroupRequest& request, const CreateDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceVirtualGroupRequest&;
    using Resp = CreateDeviceVirtualGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceVirtualGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreateDeviceVirtualGroupOutcomeCallable IoaClient::CreateDeviceVirtualGroupCallable(const CreateDeviceVirtualGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceVirtualGroupOutcome>>();
    CreateDeviceVirtualGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const CreateDeviceVirtualGroupRequest&,
        CreateDeviceVirtualGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::CreatePrivilegeCodeOutcome IoaClient::CreatePrivilegeCode(const CreatePrivilegeCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivilegeCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivilegeCodeResponse rsp = CreatePrivilegeCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivilegeCodeOutcome(rsp);
        else
            return CreatePrivilegeCodeOutcome(o.GetError());
    }
    else
    {
        return CreatePrivilegeCodeOutcome(outcome.GetError());
    }
}

void IoaClient::CreatePrivilegeCodeAsync(const CreatePrivilegeCodeRequest& request, const CreatePrivilegeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivilegeCodeRequest&;
    using Resp = CreatePrivilegeCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivilegeCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::CreatePrivilegeCodeOutcomeCallable IoaClient::CreatePrivilegeCodeCallable(const CreatePrivilegeCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivilegeCodeOutcome>>();
    CreatePrivilegeCodeAsync(
    request,
    [prom](
        const IoaClient*,
        const CreatePrivilegeCodeRequest&,
        CreatePrivilegeCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DeleteDeviceVirtualGroupOutcome IoaClient::DeleteDeviceVirtualGroup(const DeleteDeviceVirtualGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceVirtualGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceVirtualGroupResponse rsp = DeleteDeviceVirtualGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceVirtualGroupOutcome(rsp);
        else
            return DeleteDeviceVirtualGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceVirtualGroupOutcome(outcome.GetError());
    }
}

void IoaClient::DeleteDeviceVirtualGroupAsync(const DeleteDeviceVirtualGroupRequest& request, const DeleteDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceVirtualGroupRequest&;
    using Resp = DeleteDeviceVirtualGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceVirtualGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DeleteDeviceVirtualGroupOutcomeCallable IoaClient::DeleteDeviceVirtualGroupCallable(const DeleteDeviceVirtualGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceVirtualGroupOutcome>>();
    DeleteDeviceVirtualGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const DeleteDeviceVirtualGroupRequest&,
        DeleteDeviceVirtualGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAccountGroupsOutcome IoaClient::DescribeAccountGroups(const DescribeAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupsResponse rsp = DescribeAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupsOutcome(rsp);
        else
            return DescribeAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAccountGroupsAsync(const DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountGroupsRequest&;
    using Resp = DescribeAccountGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAccountGroupsOutcomeCallable IoaClient::DescribeAccountGroupsCallable(const DescribeAccountGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountGroupsOutcome>>();
    DescribeAccountGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAccountGroupsRequest&,
        DescribeAccountGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftCategorySoftListOutcome IoaClient::DescribeAggrSoftCategorySoftList(const DescribeAggrSoftCategorySoftListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftCategorySoftList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftCategorySoftListResponse rsp = DescribeAggrSoftCategorySoftListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftCategorySoftListOutcome(rsp);
        else
            return DescribeAggrSoftCategorySoftListOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftCategorySoftListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftCategorySoftListAsync(const DescribeAggrSoftCategorySoftListRequest& request, const DescribeAggrSoftCategorySoftListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftCategorySoftListRequest&;
    using Resp = DescribeAggrSoftCategorySoftListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftCategorySoftList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftCategorySoftListOutcomeCallable IoaClient::DescribeAggrSoftCategorySoftListCallable(const DescribeAggrSoftCategorySoftListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftCategorySoftListOutcome>>();
    DescribeAggrSoftCategorySoftListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftCategorySoftListRequest&,
        DescribeAggrSoftCategorySoftListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftDetailOutcome IoaClient::DescribeAggrSoftDetail(const DescribeAggrSoftDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftDetailResponse rsp = DescribeAggrSoftDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftDetailOutcome(rsp);
        else
            return DescribeAggrSoftDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftDetailOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftDetailAsync(const DescribeAggrSoftDetailRequest& request, const DescribeAggrSoftDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftDetailRequest&;
    using Resp = DescribeAggrSoftDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftDetailOutcomeCallable IoaClient::DescribeAggrSoftDetailCallable(const DescribeAggrSoftDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftDetailOutcome>>();
    DescribeAggrSoftDetailAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftDetailRequest&,
        DescribeAggrSoftDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeAggrSoftDeviceListOutcome IoaClient::DescribeAggrSoftDeviceList(const DescribeAggrSoftDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggrSoftDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggrSoftDeviceListResponse rsp = DescribeAggrSoftDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggrSoftDeviceListOutcome(rsp);
        else
            return DescribeAggrSoftDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAggrSoftDeviceListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAggrSoftDeviceListAsync(const DescribeAggrSoftDeviceListRequest& request, const DescribeAggrSoftDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggrSoftDeviceListRequest&;
    using Resp = DescribeAggrSoftDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggrSoftDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeAggrSoftDeviceListOutcomeCallable IoaClient::DescribeAggrSoftDeviceListCallable(const DescribeAggrSoftDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggrSoftDeviceListOutcome>>();
    DescribeAggrSoftDeviceListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeAggrSoftDeviceListRequest&,
        DescribeAggrSoftDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeBusinessResourcesOutcome IoaClient::DescribeBusinessResources(const DescribeBusinessResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBusinessResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBusinessResourcesResponse rsp = DescribeBusinessResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBusinessResourcesOutcome(rsp);
        else
            return DescribeBusinessResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeBusinessResourcesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeBusinessResourcesAsync(const DescribeBusinessResourcesRequest& request, const DescribeBusinessResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBusinessResourcesRequest&;
    using Resp = DescribeBusinessResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBusinessResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeBusinessResourcesOutcomeCallable IoaClient::DescribeBusinessResourcesCallable(const DescribeBusinessResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBusinessResourcesOutcome>>();
    DescribeBusinessResourcesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeBusinessResourcesRequest&,
        DescribeBusinessResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeCompanyDirectoryConfigOutcome IoaClient::DescribeCompanyDirectoryConfig(const DescribeCompanyDirectoryConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompanyDirectoryConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompanyDirectoryConfigResponse rsp = DescribeCompanyDirectoryConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompanyDirectoryConfigOutcome(rsp);
        else
            return DescribeCompanyDirectoryConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCompanyDirectoryConfigOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeCompanyDirectoryConfigAsync(const DescribeCompanyDirectoryConfigRequest& request, const DescribeCompanyDirectoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompanyDirectoryConfigRequest&;
    using Resp = DescribeCompanyDirectoryConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompanyDirectoryConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeCompanyDirectoryConfigOutcomeCallable IoaClient::DescribeCompanyDirectoryConfigCallable(const DescribeCompanyDirectoryConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompanyDirectoryConfigOutcome>>();
    DescribeCompanyDirectoryConfigAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeCompanyDirectoryConfigRequest&,
        DescribeCompanyDirectoryConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPEdgeNodeGroupsOutcome IoaClient::DescribeDLPEdgeNodeGroups(const DescribeDLPEdgeNodeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPEdgeNodeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPEdgeNodeGroupsResponse rsp = DescribeDLPEdgeNodeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPEdgeNodeGroupsOutcome(rsp);
        else
            return DescribeDLPEdgeNodeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPEdgeNodeGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPEdgeNodeGroupsAsync(const DescribeDLPEdgeNodeGroupsRequest& request, const DescribeDLPEdgeNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPEdgeNodeGroupsRequest&;
    using Resp = DescribeDLPEdgeNodeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPEdgeNodeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPEdgeNodeGroupsOutcomeCallable IoaClient::DescribeDLPEdgeNodeGroupsCallable(const DescribeDLPEdgeNodeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPEdgeNodeGroupsOutcome>>();
    DescribeDLPEdgeNodeGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPEdgeNodeGroupsRequest&,
        DescribeDLPEdgeNodeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPEdgeNodesOutcome IoaClient::DescribeDLPEdgeNodes(const DescribeDLPEdgeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPEdgeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPEdgeNodesResponse rsp = DescribeDLPEdgeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPEdgeNodesOutcome(rsp);
        else
            return DescribeDLPEdgeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPEdgeNodesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPEdgeNodesAsync(const DescribeDLPEdgeNodesRequest& request, const DescribeDLPEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPEdgeNodesRequest&;
    using Resp = DescribeDLPEdgeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPEdgeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPEdgeNodesOutcomeCallable IoaClient::DescribeDLPEdgeNodesCallable(const DescribeDLPEdgeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPEdgeNodesOutcome>>();
    DescribeDLPEdgeNodesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPEdgeNodesRequest&,
        DescribeDLPEdgeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPFileDetectResultOutcome IoaClient::DescribeDLPFileDetectResult(const DescribeDLPFileDetectResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPFileDetectResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPFileDetectResultResponse rsp = DescribeDLPFileDetectResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPFileDetectResultOutcome(rsp);
        else
            return DescribeDLPFileDetectResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPFileDetectResultOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPFileDetectResultAsync(const DescribeDLPFileDetectResultRequest& request, const DescribeDLPFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPFileDetectResultRequest&;
    using Resp = DescribeDLPFileDetectResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPFileDetectResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPFileDetectResultOutcomeCallable IoaClient::DescribeDLPFileDetectResultCallable(const DescribeDLPFileDetectResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPFileDetectResultOutcome>>();
    DescribeDLPFileDetectResultAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPFileDetectResultRequest&,
        DescribeDLPFileDetectResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDLPFileDetectTaskResultOutcome IoaClient::DescribeDLPFileDetectTaskResult(const DescribeDLPFileDetectTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPFileDetectTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPFileDetectTaskResultResponse rsp = DescribeDLPFileDetectTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPFileDetectTaskResultOutcome(rsp);
        else
            return DescribeDLPFileDetectTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPFileDetectTaskResultOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPFileDetectTaskResultAsync(const DescribeDLPFileDetectTaskResultRequest& request, const DescribeDLPFileDetectTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLPFileDetectTaskResultRequest&;
    using Resp = DescribeDLPFileDetectTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLPFileDetectTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDLPFileDetectTaskResultOutcomeCallable IoaClient::DescribeDLPFileDetectTaskResultCallable(const DescribeDLPFileDetectTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLPFileDetectTaskResultOutcome>>();
    DescribeDLPFileDetectTaskResultAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDLPFileDetectTaskResultRequest&,
        DescribeDLPFileDetectTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceChildGroupsOutcome IoaClient::DescribeDeviceChildGroups(const DescribeDeviceChildGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceChildGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceChildGroupsResponse rsp = DescribeDeviceChildGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceChildGroupsOutcome(rsp);
        else
            return DescribeDeviceChildGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceChildGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceChildGroupsAsync(const DescribeDeviceChildGroupsRequest& request, const DescribeDeviceChildGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceChildGroupsRequest&;
    using Resp = DescribeDeviceChildGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceChildGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceChildGroupsOutcomeCallable IoaClient::DescribeDeviceChildGroupsCallable(const DescribeDeviceChildGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceChildGroupsOutcome>>();
    DescribeDeviceChildGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceChildGroupsRequest&,
        DescribeDeviceChildGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceDetailListOutcome IoaClient::DescribeDeviceDetailList(const DescribeDeviceDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDetailListResponse rsp = DescribeDeviceDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDetailListOutcome(rsp);
        else
            return DescribeDeviceDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDetailListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceDetailListAsync(const DescribeDeviceDetailListRequest& request, const DescribeDeviceDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceDetailListRequest&;
    using Resp = DescribeDeviceDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceDetailListOutcomeCallable IoaClient::DescribeDeviceDetailListCallable(const DescribeDeviceDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDetailListOutcome>>();
    DescribeDeviceDetailListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceDetailListRequest&,
        DescribeDeviceDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceHardwareInfoListOutcome IoaClient::DescribeDeviceHardwareInfoList(const DescribeDeviceHardwareInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceHardwareInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceHardwareInfoListResponse rsp = DescribeDeviceHardwareInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceHardwareInfoListOutcome(rsp);
        else
            return DescribeDeviceHardwareInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceHardwareInfoListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceHardwareInfoListAsync(const DescribeDeviceHardwareInfoListRequest& request, const DescribeDeviceHardwareInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceHardwareInfoListRequest&;
    using Resp = DescribeDeviceHardwareInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceHardwareInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceHardwareInfoListOutcomeCallable IoaClient::DescribeDeviceHardwareInfoListCallable(const DescribeDeviceHardwareInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceHardwareInfoListOutcome>>();
    DescribeDeviceHardwareInfoListAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceHardwareInfoListRequest&,
        DescribeDeviceHardwareInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceInfoOutcome IoaClient::DescribeDeviceInfo(const DescribeDeviceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceInfoResponse rsp = DescribeDeviceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceInfoOutcome(rsp);
        else
            return DescribeDeviceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceInfoOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceInfoRequest&;
    using Resp = DescribeDeviceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceInfoOutcomeCallable IoaClient::DescribeDeviceInfoCallable(const DescribeDeviceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceInfoOutcome>>();
    DescribeDeviceInfoAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceInfoRequest&,
        DescribeDeviceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDeviceVirtualGroupsOutcome IoaClient::DescribeDeviceVirtualGroups(const DescribeDeviceVirtualGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceVirtualGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceVirtualGroupsResponse rsp = DescribeDeviceVirtualGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceVirtualGroupsOutcome(rsp);
        else
            return DescribeDeviceVirtualGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceVirtualGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceVirtualGroupsAsync(const DescribeDeviceVirtualGroupsRequest& request, const DescribeDeviceVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceVirtualGroupsRequest&;
    using Resp = DescribeDeviceVirtualGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceVirtualGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDeviceVirtualGroupsOutcomeCallable IoaClient::DescribeDeviceVirtualGroupsCallable(const DescribeDeviceVirtualGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceVirtualGroupsOutcome>>();
    DescribeDeviceVirtualGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDeviceVirtualGroupsRequest&,
        DescribeDeviceVirtualGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDevicesOutcome IoaClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicesRequest&;
    using Resp = DescribeDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDevicesOutcomeCallable IoaClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeDirectAccountGroupResourcesOutcome IoaClient::DescribeDirectAccountGroupResources(const DescribeDirectAccountGroupResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectAccountGroupResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectAccountGroupResourcesResponse rsp = DescribeDirectAccountGroupResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectAccountGroupResourcesOutcome(rsp);
        else
            return DescribeDirectAccountGroupResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectAccountGroupResourcesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDirectAccountGroupResourcesAsync(const DescribeDirectAccountGroupResourcesRequest& request, const DescribeDirectAccountGroupResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDirectAccountGroupResourcesRequest&;
    using Resp = DescribeDirectAccountGroupResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectAccountGroupResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeDirectAccountGroupResourcesOutcomeCallable IoaClient::DescribeDirectAccountGroupResourcesCallable(const DescribeDirectAccountGroupResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectAccountGroupResourcesOutcome>>();
    DescribeDirectAccountGroupResourcesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeDirectAccountGroupResourcesRequest&,
        DescribeDirectAccountGroupResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeLocalAccountsOutcome IoaClient::DescribeLocalAccounts(const DescribeLocalAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalAccountsResponse rsp = DescribeLocalAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalAccountsOutcome(rsp);
        else
            return DescribeLocalAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeLocalAccountsAsync(const DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLocalAccountsRequest&;
    using Resp = DescribeLocalAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLocalAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeLocalAccountsOutcomeCallable IoaClient::DescribeLocalAccountsCallable(const DescribeLocalAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLocalAccountsOutcome>>();
    DescribeLocalAccountsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeLocalAccountsRequest&,
        DescribeLocalAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeResourceGrantedAccountGroupsOutcome IoaClient::DescribeResourceGrantedAccountGroups(const DescribeResourceGrantedAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGrantedAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGrantedAccountGroupsResponse rsp = DescribeResourceGrantedAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGrantedAccountGroupsOutcome(rsp);
        else
            return DescribeResourceGrantedAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGrantedAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeResourceGrantedAccountGroupsAsync(const DescribeResourceGrantedAccountGroupsRequest& request, const DescribeResourceGrantedAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGrantedAccountGroupsRequest&;
    using Resp = DescribeResourceGrantedAccountGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGrantedAccountGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeResourceGrantedAccountGroupsOutcomeCallable IoaClient::DescribeResourceGrantedAccountGroupsCallable(const DescribeResourceGrantedAccountGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGrantedAccountGroupsOutcome>>();
    DescribeResourceGrantedAccountGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeResourceGrantedAccountGroupsRequest&,
        DescribeResourceGrantedAccountGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeResourceGrantedAccountsOutcome IoaClient::DescribeResourceGrantedAccounts(const DescribeResourceGrantedAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGrantedAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGrantedAccountsResponse rsp = DescribeResourceGrantedAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGrantedAccountsOutcome(rsp);
        else
            return DescribeResourceGrantedAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGrantedAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeResourceGrantedAccountsAsync(const DescribeResourceGrantedAccountsRequest& request, const DescribeResourceGrantedAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGrantedAccountsRequest&;
    using Resp = DescribeResourceGrantedAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGrantedAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeResourceGrantedAccountsOutcomeCallable IoaClient::DescribeResourceGrantedAccountsCallable(const DescribeResourceGrantedAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGrantedAccountsOutcome>>();
    DescribeResourceGrantedAccountsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeResourceGrantedAccountsRequest&,
        DescribeResourceGrantedAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeResourceGrantedVirtualGroupsOutcome IoaClient::DescribeResourceGrantedVirtualGroups(const DescribeResourceGrantedVirtualGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGrantedVirtualGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGrantedVirtualGroupsResponse rsp = DescribeResourceGrantedVirtualGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGrantedVirtualGroupsOutcome(rsp);
        else
            return DescribeResourceGrantedVirtualGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGrantedVirtualGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeResourceGrantedVirtualGroupsAsync(const DescribeResourceGrantedVirtualGroupsRequest& request, const DescribeResourceGrantedVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGrantedVirtualGroupsRequest&;
    using Resp = DescribeResourceGrantedVirtualGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGrantedVirtualGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeResourceGrantedVirtualGroupsOutcomeCallable IoaClient::DescribeResourceGrantedVirtualGroupsCallable(const DescribeResourceGrantedVirtualGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGrantedVirtualGroupsOutcome>>();
    DescribeResourceGrantedVirtualGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeResourceGrantedVirtualGroupsRequest&,
        DescribeResourceGrantedVirtualGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeRootAccountGroupOutcome IoaClient::DescribeRootAccountGroup(const DescribeRootAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRootAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRootAccountGroupResponse rsp = DescribeRootAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRootAccountGroupOutcome(rsp);
        else
            return DescribeRootAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRootAccountGroupOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeRootAccountGroupAsync(const DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRootAccountGroupRequest&;
    using Resp = DescribeRootAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRootAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeRootAccountGroupOutcomeCallable IoaClient::DescribeRootAccountGroupCallable(const DescribeRootAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRootAccountGroupOutcome>>();
    DescribeRootAccountGroupAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeRootAccountGroupRequest&,
        DescribeRootAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeSoftCensusListByDeviceOutcome IoaClient::DescribeSoftCensusListByDevice(const DescribeSoftCensusListByDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftCensusListByDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftCensusListByDeviceResponse rsp = DescribeSoftCensusListByDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftCensusListByDeviceOutcome(rsp);
        else
            return DescribeSoftCensusListByDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftCensusListByDeviceOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftCensusListByDeviceAsync(const DescribeSoftCensusListByDeviceRequest& request, const DescribeSoftCensusListByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSoftCensusListByDeviceRequest&;
    using Resp = DescribeSoftCensusListByDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSoftCensusListByDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeSoftCensusListByDeviceOutcomeCallable IoaClient::DescribeSoftCensusListByDeviceCallable(const DescribeSoftCensusListByDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSoftCensusListByDeviceOutcome>>();
    DescribeSoftCensusListByDeviceAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeSoftCensusListByDeviceRequest&,
        DescribeSoftCensusListByDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeSoftwareInformationOutcome IoaClient::DescribeSoftwareInformation(const DescribeSoftwareInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftwareInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftwareInformationResponse rsp = DescribeSoftwareInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftwareInformationOutcome(rsp);
        else
            return DescribeSoftwareInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftwareInformationOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftwareInformationAsync(const DescribeSoftwareInformationRequest& request, const DescribeSoftwareInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSoftwareInformationRequest&;
    using Resp = DescribeSoftwareInformationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSoftwareInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeSoftwareInformationOutcomeCallable IoaClient::DescribeSoftwareInformationCallable(const DescribeSoftwareInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSoftwareInformationOutcome>>();
    DescribeSoftwareInformationAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeSoftwareInformationRequest&,
        DescribeSoftwareInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::DescribeVirtualDevicesOutcome IoaClient::DescribeVirtualDevices(const DescribeVirtualDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirtualDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirtualDevicesResponse rsp = DescribeVirtualDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirtualDevicesOutcome(rsp);
        else
            return DescribeVirtualDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeVirtualDevicesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeVirtualDevicesAsync(const DescribeVirtualDevicesRequest& request, const DescribeVirtualDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirtualDevicesRequest&;
    using Resp = DescribeVirtualDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirtualDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::DescribeVirtualDevicesOutcomeCallable IoaClient::DescribeVirtualDevicesCallable(const DescribeVirtualDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirtualDevicesOutcome>>();
    DescribeVirtualDevicesAsync(
    request,
    [prom](
        const IoaClient*,
        const DescribeVirtualDevicesRequest&,
        DescribeVirtualDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ExportDeviceDownloadTaskOutcome IoaClient::ExportDeviceDownloadTask(const ExportDeviceDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExportDeviceDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportDeviceDownloadTaskResponse rsp = ExportDeviceDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportDeviceDownloadTaskOutcome(rsp);
        else
            return ExportDeviceDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return ExportDeviceDownloadTaskOutcome(outcome.GetError());
    }
}

void IoaClient::ExportDeviceDownloadTaskAsync(const ExportDeviceDownloadTaskRequest& request, const ExportDeviceDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportDeviceDownloadTaskRequest&;
    using Resp = ExportDeviceDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ExportDeviceDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ExportDeviceDownloadTaskOutcomeCallable IoaClient::ExportDeviceDownloadTaskCallable(const ExportDeviceDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportDeviceDownloadTaskOutcome>>();
    ExportDeviceDownloadTaskAsync(
    request,
    [prom](
        const IoaClient*,
        const ExportDeviceDownloadTaskRequest&,
        ExportDeviceDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ExportSoftwareInformationListOutcome IoaClient::ExportSoftwareInformationList(const ExportSoftwareInformationListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportSoftwareInformationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportSoftwareInformationListResponse rsp = ExportSoftwareInformationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportSoftwareInformationListOutcome(rsp);
        else
            return ExportSoftwareInformationListOutcome(o.GetError());
    }
    else
    {
        return ExportSoftwareInformationListOutcome(outcome.GetError());
    }
}

void IoaClient::ExportSoftwareInformationListAsync(const ExportSoftwareInformationListRequest& request, const ExportSoftwareInformationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportSoftwareInformationListRequest&;
    using Resp = ExportSoftwareInformationListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportSoftwareInformationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ExportSoftwareInformationListOutcomeCallable IoaClient::ExportSoftwareInformationListCallable(const ExportSoftwareInformationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportSoftwareInformationListOutcome>>();
    ExportSoftwareInformationListAsync(
    request,
    [prom](
        const IoaClient*,
        const ExportSoftwareInformationListRequest&,
        ExportSoftwareInformationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::GrantResourcesByAccountGroupsOutcome IoaClient::GrantResourcesByAccountGroups(const GrantResourcesByAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "GrantResourcesByAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantResourcesByAccountGroupsResponse rsp = GrantResourcesByAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantResourcesByAccountGroupsOutcome(rsp);
        else
            return GrantResourcesByAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return GrantResourcesByAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::GrantResourcesByAccountGroupsAsync(const GrantResourcesByAccountGroupsRequest& request, const GrantResourcesByAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantResourcesByAccountGroupsRequest&;
    using Resp = GrantResourcesByAccountGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "GrantResourcesByAccountGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::GrantResourcesByAccountGroupsOutcomeCallable IoaClient::GrantResourcesByAccountGroupsCallable(const GrantResourcesByAccountGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantResourcesByAccountGroupsOutcome>>();
    GrantResourcesByAccountGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const GrantResourcesByAccountGroupsRequest&,
        GrantResourcesByAccountGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::GrantResourcesByAccountsOutcome IoaClient::GrantResourcesByAccounts(const GrantResourcesByAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "GrantResourcesByAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantResourcesByAccountsResponse rsp = GrantResourcesByAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantResourcesByAccountsOutcome(rsp);
        else
            return GrantResourcesByAccountsOutcome(o.GetError());
    }
    else
    {
        return GrantResourcesByAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::GrantResourcesByAccountsAsync(const GrantResourcesByAccountsRequest& request, const GrantResourcesByAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantResourcesByAccountsRequest&;
    using Resp = GrantResourcesByAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "GrantResourcesByAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::GrantResourcesByAccountsOutcomeCallable IoaClient::GrantResourcesByAccountsCallable(const GrantResourcesByAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantResourcesByAccountsOutcome>>();
    GrantResourcesByAccountsAsync(
    request,
    [prom](
        const IoaClient*,
        const GrantResourcesByAccountsRequest&,
        GrantResourcesByAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::GrantResourcesByVirtualGroupsOutcome IoaClient::GrantResourcesByVirtualGroups(const GrantResourcesByVirtualGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "GrantResourcesByVirtualGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantResourcesByVirtualGroupsResponse rsp = GrantResourcesByVirtualGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantResourcesByVirtualGroupsOutcome(rsp);
        else
            return GrantResourcesByVirtualGroupsOutcome(o.GetError());
    }
    else
    {
        return GrantResourcesByVirtualGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::GrantResourcesByVirtualGroupsAsync(const GrantResourcesByVirtualGroupsRequest& request, const GrantResourcesByVirtualGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantResourcesByVirtualGroupsRequest&;
    using Resp = GrantResourcesByVirtualGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "GrantResourcesByVirtualGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::GrantResourcesByVirtualGroupsOutcomeCallable IoaClient::GrantResourcesByVirtualGroupsCallable(const GrantResourcesByVirtualGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantResourcesByVirtualGroupsOutcome>>();
    GrantResourcesByVirtualGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const GrantResourcesByVirtualGroupsRequest&,
        GrantResourcesByVirtualGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ModifyBusinessResourceOutcome IoaClient::ModifyBusinessResource(const ModifyBusinessResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBusinessResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBusinessResourceResponse rsp = ModifyBusinessResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBusinessResourceOutcome(rsp);
        else
            return ModifyBusinessResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyBusinessResourceOutcome(outcome.GetError());
    }
}

void IoaClient::ModifyBusinessResourceAsync(const ModifyBusinessResourceRequest& request, const ModifyBusinessResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBusinessResourceRequest&;
    using Resp = ModifyBusinessResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBusinessResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ModifyBusinessResourceOutcomeCallable IoaClient::ModifyBusinessResourceCallable(const ModifyBusinessResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBusinessResourceOutcome>>();
    ModifyBusinessResourceAsync(
    request,
    [prom](
        const IoaClient*,
        const ModifyBusinessResourceRequest&,
        ModifyBusinessResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ModifyCompanyDirectoryConfigOutcome IoaClient::ModifyCompanyDirectoryConfig(const ModifyCompanyDirectoryConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompanyDirectoryConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompanyDirectoryConfigResponse rsp = ModifyCompanyDirectoryConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompanyDirectoryConfigOutcome(rsp);
        else
            return ModifyCompanyDirectoryConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyCompanyDirectoryConfigOutcome(outcome.GetError());
    }
}

void IoaClient::ModifyCompanyDirectoryConfigAsync(const ModifyCompanyDirectoryConfigRequest& request, const ModifyCompanyDirectoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCompanyDirectoryConfigRequest&;
    using Resp = ModifyCompanyDirectoryConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCompanyDirectoryConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ModifyCompanyDirectoryConfigOutcomeCallable IoaClient::ModifyCompanyDirectoryConfigCallable(const ModifyCompanyDirectoryConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCompanyDirectoryConfigOutcome>>();
    ModifyCompanyDirectoryConfigAsync(
    request,
    [prom](
        const IoaClient*,
        const ModifyCompanyDirectoryConfigRequest&,
        ModifyCompanyDirectoryConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ModifyDeviceTrustStatusOutcome IoaClient::ModifyDeviceTrustStatus(const ModifyDeviceTrustStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceTrustStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceTrustStatusResponse rsp = ModifyDeviceTrustStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceTrustStatusOutcome(rsp);
        else
            return ModifyDeviceTrustStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceTrustStatusOutcome(outcome.GetError());
    }
}

void IoaClient::ModifyDeviceTrustStatusAsync(const ModifyDeviceTrustStatusRequest& request, const ModifyDeviceTrustStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceTrustStatusRequest&;
    using Resp = ModifyDeviceTrustStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceTrustStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ModifyDeviceTrustStatusOutcomeCallable IoaClient::ModifyDeviceTrustStatusCallable(const ModifyDeviceTrustStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceTrustStatusOutcome>>();
    ModifyDeviceTrustStatusAsync(
    request,
    [prom](
        const IoaClient*,
        const ModifyDeviceTrustStatusRequest&,
        ModifyDeviceTrustStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IoaClient::ModifyVirtualDeviceGroupsOutcome IoaClient::ModifyVirtualDeviceGroups(const ModifyVirtualDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirtualDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirtualDeviceGroupsResponse rsp = ModifyVirtualDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirtualDeviceGroupsOutcome(rsp);
        else
            return ModifyVirtualDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyVirtualDeviceGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::ModifyVirtualDeviceGroupsAsync(const ModifyVirtualDeviceGroupsRequest& request, const ModifyVirtualDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirtualDeviceGroupsRequest&;
    using Resp = ModifyVirtualDeviceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirtualDeviceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IoaClient::ModifyVirtualDeviceGroupsOutcomeCallable IoaClient::ModifyVirtualDeviceGroupsCallable(const ModifyVirtualDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirtualDeviceGroupsOutcome>>();
    ModifyVirtualDeviceGroupsAsync(
    request,
    [prom](
        const IoaClient*,
        const ModifyVirtualDeviceGroupsRequest&,
        ModifyVirtualDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

