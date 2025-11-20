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

#include <tencentcloud/batch/v20170312/BatchClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Batch::V20170312;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "batch.tencentcloudapi.com";
}

BatchClient::BatchClient(const Credential &credential, const string &region) :
    BatchClient(credential, region, ClientProfile())
{
}

BatchClient::BatchClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BatchClient::AttachInstancesOutcome BatchClient::AttachInstances(const AttachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachInstancesResponse rsp = AttachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachInstancesOutcome(rsp);
        else
            return AttachInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachInstancesOutcome(outcome.GetError());
    }
}

void BatchClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachInstancesRequest&;
    using Resp = AttachInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::AttachInstancesOutcomeCallable BatchClient::AttachInstancesCallable(const AttachInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachInstancesOutcome>>();
    AttachInstancesAsync(
    request,
    [prom](
        const BatchClient*,
        const AttachInstancesRequest&,
        AttachInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::CreateComputeEnvOutcome BatchClient::CreateComputeEnv(const CreateComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateComputeEnvResponse rsp = CreateComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateComputeEnvOutcome(rsp);
        else
            return CreateComputeEnvOutcome(o.GetError());
    }
    else
    {
        return CreateComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::CreateComputeEnvAsync(const CreateComputeEnvRequest& request, const CreateComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateComputeEnvRequest&;
    using Resp = CreateComputeEnvResponse;

    DoRequestAsync<Req, Resp>(
        "CreateComputeEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::CreateComputeEnvOutcomeCallable BatchClient::CreateComputeEnvCallable(const CreateComputeEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateComputeEnvOutcome>>();
    CreateComputeEnvAsync(
    request,
    [prom](
        const BatchClient*,
        const CreateComputeEnvRequest&,
        CreateComputeEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::CreateTaskTemplateOutcome BatchClient::CreateTaskTemplate(const CreateTaskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskTemplateResponse rsp = CreateTaskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskTemplateOutcome(rsp);
        else
            return CreateTaskTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTaskTemplateOutcome(outcome.GetError());
    }
}

void BatchClient::CreateTaskTemplateAsync(const CreateTaskTemplateRequest& request, const CreateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskTemplateRequest&;
    using Resp = CreateTaskTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::CreateTaskTemplateOutcomeCallable BatchClient::CreateTaskTemplateCallable(const CreateTaskTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskTemplateOutcome>>();
    CreateTaskTemplateAsync(
    request,
    [prom](
        const BatchClient*,
        const CreateTaskTemplateRequest&,
        CreateTaskTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DeleteComputeEnvOutcome BatchClient::DeleteComputeEnv(const DeleteComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteComputeEnvResponse rsp = DeleteComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteComputeEnvOutcome(rsp);
        else
            return DeleteComputeEnvOutcome(o.GetError());
    }
    else
    {
        return DeleteComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::DeleteComputeEnvAsync(const DeleteComputeEnvRequest& request, const DeleteComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteComputeEnvRequest&;
    using Resp = DeleteComputeEnvResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteComputeEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DeleteComputeEnvOutcomeCallable BatchClient::DeleteComputeEnvCallable(const DeleteComputeEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteComputeEnvOutcome>>();
    DeleteComputeEnvAsync(
    request,
    [prom](
        const BatchClient*,
        const DeleteComputeEnvRequest&,
        DeleteComputeEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DeleteJobOutcome BatchClient::DeleteJob(const DeleteJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobResponse rsp = DeleteJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobOutcome(rsp);
        else
            return DeleteJobOutcome(o.GetError());
    }
    else
    {
        return DeleteJobOutcome(outcome.GetError());
    }
}

void BatchClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobRequest&;
    using Resp = DeleteJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DeleteJobOutcomeCallable BatchClient::DeleteJobCallable(const DeleteJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobOutcome>>();
    DeleteJobAsync(
    request,
    [prom](
        const BatchClient*,
        const DeleteJobRequest&,
        DeleteJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DeleteTaskTemplatesOutcome BatchClient::DeleteTaskTemplates(const DeleteTaskTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskTemplatesResponse rsp = DeleteTaskTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskTemplatesOutcome(rsp);
        else
            return DeleteTaskTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskTemplatesOutcome(outcome.GetError());
    }
}

void BatchClient::DeleteTaskTemplatesAsync(const DeleteTaskTemplatesRequest& request, const DeleteTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskTemplatesRequest&;
    using Resp = DeleteTaskTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTaskTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DeleteTaskTemplatesOutcomeCallable BatchClient::DeleteTaskTemplatesCallable(const DeleteTaskTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskTemplatesOutcome>>();
    DeleteTaskTemplatesAsync(
    request,
    [prom](
        const BatchClient*,
        const DeleteTaskTemplatesRequest&,
        DeleteTaskTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeAvailableCvmInstanceTypesOutcome BatchClient::DescribeAvailableCvmInstanceTypes(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableCvmInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableCvmInstanceTypesResponse rsp = DescribeAvailableCvmInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableCvmInstanceTypesOutcome(rsp);
        else
            return DescribeAvailableCvmInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableCvmInstanceTypesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeAvailableCvmInstanceTypesAsync(const DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableCvmInstanceTypesRequest&;
    using Resp = DescribeAvailableCvmInstanceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableCvmInstanceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeAvailableCvmInstanceTypesOutcomeCallable BatchClient::DescribeAvailableCvmInstanceTypesCallable(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableCvmInstanceTypesOutcome>>();
    DescribeAvailableCvmInstanceTypesAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeAvailableCvmInstanceTypesRequest&,
        DescribeAvailableCvmInstanceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeComputeEnvOutcome BatchClient::DescribeComputeEnv(const DescribeComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvResponse rsp = DescribeComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvOutcome(rsp);
        else
            return DescribeComputeEnvOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvAsync(const DescribeComputeEnvRequest& request, const DescribeComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComputeEnvRequest&;
    using Resp = DescribeComputeEnvResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComputeEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeComputeEnvOutcomeCallable BatchClient::DescribeComputeEnvCallable(const DescribeComputeEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComputeEnvOutcome>>();
    DescribeComputeEnvAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeComputeEnvRequest&,
        DescribeComputeEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeComputeEnvActivitiesOutcome BatchClient::DescribeComputeEnvActivities(const DescribeComputeEnvActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvActivitiesResponse rsp = DescribeComputeEnvActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvActivitiesOutcome(rsp);
        else
            return DescribeComputeEnvActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvActivitiesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvActivitiesAsync(const DescribeComputeEnvActivitiesRequest& request, const DescribeComputeEnvActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComputeEnvActivitiesRequest&;
    using Resp = DescribeComputeEnvActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComputeEnvActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeComputeEnvActivitiesOutcomeCallable BatchClient::DescribeComputeEnvActivitiesCallable(const DescribeComputeEnvActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComputeEnvActivitiesOutcome>>();
    DescribeComputeEnvActivitiesAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeComputeEnvActivitiesRequest&,
        DescribeComputeEnvActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeComputeEnvCreateInfoOutcome BatchClient::DescribeComputeEnvCreateInfo(const DescribeComputeEnvCreateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvCreateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvCreateInfoResponse rsp = DescribeComputeEnvCreateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvCreateInfoOutcome(rsp);
        else
            return DescribeComputeEnvCreateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvCreateInfoOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvCreateInfoAsync(const DescribeComputeEnvCreateInfoRequest& request, const DescribeComputeEnvCreateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComputeEnvCreateInfoRequest&;
    using Resp = DescribeComputeEnvCreateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComputeEnvCreateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeComputeEnvCreateInfoOutcomeCallable BatchClient::DescribeComputeEnvCreateInfoCallable(const DescribeComputeEnvCreateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComputeEnvCreateInfoOutcome>>();
    DescribeComputeEnvCreateInfoAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeComputeEnvCreateInfoRequest&,
        DescribeComputeEnvCreateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeComputeEnvCreateInfosOutcome BatchClient::DescribeComputeEnvCreateInfos(const DescribeComputeEnvCreateInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvCreateInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvCreateInfosResponse rsp = DescribeComputeEnvCreateInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvCreateInfosOutcome(rsp);
        else
            return DescribeComputeEnvCreateInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvCreateInfosOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvCreateInfosAsync(const DescribeComputeEnvCreateInfosRequest& request, const DescribeComputeEnvCreateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComputeEnvCreateInfosRequest&;
    using Resp = DescribeComputeEnvCreateInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComputeEnvCreateInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeComputeEnvCreateInfosOutcomeCallable BatchClient::DescribeComputeEnvCreateInfosCallable(const DescribeComputeEnvCreateInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComputeEnvCreateInfosOutcome>>();
    DescribeComputeEnvCreateInfosAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeComputeEnvCreateInfosRequest&,
        DescribeComputeEnvCreateInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeComputeEnvsOutcome BatchClient::DescribeComputeEnvs(const DescribeComputeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvsResponse rsp = DescribeComputeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvsOutcome(rsp);
        else
            return DescribeComputeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvsOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvsAsync(const DescribeComputeEnvsRequest& request, const DescribeComputeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComputeEnvsRequest&;
    using Resp = DescribeComputeEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComputeEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeComputeEnvsOutcomeCallable BatchClient::DescribeComputeEnvsCallable(const DescribeComputeEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComputeEnvsOutcome>>();
    DescribeComputeEnvsAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeComputeEnvsRequest&,
        DescribeComputeEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcome BatchClient::DescribeCvmZoneInstanceConfigInfos(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmZoneInstanceConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmZoneInstanceConfigInfosResponse rsp = DescribeCvmZoneInstanceConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmZoneInstanceConfigInfosOutcome(rsp);
        else
            return DescribeCvmZoneInstanceConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmZoneInstanceConfigInfosOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeCvmZoneInstanceConfigInfosAsync(const DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCvmZoneInstanceConfigInfosRequest&;
    using Resp = DescribeCvmZoneInstanceConfigInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCvmZoneInstanceConfigInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcomeCallable BatchClient::DescribeCvmZoneInstanceConfigInfosCallable(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCvmZoneInstanceConfigInfosOutcome>>();
    DescribeCvmZoneInstanceConfigInfosAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeCvmZoneInstanceConfigInfosRequest&,
        DescribeCvmZoneInstanceConfigInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeInstanceCategoriesOutcome BatchClient::DescribeInstanceCategories(const DescribeInstanceCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCategoriesResponse rsp = DescribeInstanceCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCategoriesOutcome(rsp);
        else
            return DescribeInstanceCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCategoriesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeInstanceCategoriesAsync(const DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceCategoriesRequest&;
    using Resp = DescribeInstanceCategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceCategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeInstanceCategoriesOutcomeCallable BatchClient::DescribeInstanceCategoriesCallable(const DescribeInstanceCategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceCategoriesOutcome>>();
    DescribeInstanceCategoriesAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeInstanceCategoriesRequest&,
        DescribeInstanceCategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeJobOutcome BatchClient::DescribeJob(const DescribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobResponse rsp = DescribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobOutcome(rsp);
        else
            return DescribeJobOutcome(o.GetError());
    }
    else
    {
        return DescribeJobOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobRequest&;
    using Resp = DescribeJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeJobOutcomeCallable BatchClient::DescribeJobCallable(const DescribeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobOutcome>>();
    DescribeJobAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeJobRequest&,
        DescribeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeJobMonitorDataOutcome BatchClient::DescribeJobMonitorData(const DescribeJobMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobMonitorDataResponse rsp = DescribeJobMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobMonitorDataOutcome(rsp);
        else
            return DescribeJobMonitorDataOutcome(o.GetError());
    }
    else
    {
        return DescribeJobMonitorDataOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeJobMonitorDataAsync(const DescribeJobMonitorDataRequest& request, const DescribeJobMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobMonitorDataRequest&;
    using Resp = DescribeJobMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeJobMonitorDataOutcomeCallable BatchClient::DescribeJobMonitorDataCallable(const DescribeJobMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobMonitorDataOutcome>>();
    DescribeJobMonitorDataAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeJobMonitorDataRequest&,
        DescribeJobMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeJobSubmitInfoOutcome BatchClient::DescribeJobSubmitInfo(const DescribeJobSubmitInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSubmitInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSubmitInfoResponse rsp = DescribeJobSubmitInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSubmitInfoOutcome(rsp);
        else
            return DescribeJobSubmitInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSubmitInfoOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeJobSubmitInfoAsync(const DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobSubmitInfoRequest&;
    using Resp = DescribeJobSubmitInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobSubmitInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeJobSubmitInfoOutcomeCallable BatchClient::DescribeJobSubmitInfoCallable(const DescribeJobSubmitInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobSubmitInfoOutcome>>();
    DescribeJobSubmitInfoAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeJobSubmitInfoRequest&,
        DescribeJobSubmitInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeJobsOutcome BatchClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobsRequest&;
    using Resp = DescribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeJobsOutcomeCallable BatchClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeTaskOutcome BatchClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRequest&;
    using Resp = DescribeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeTaskOutcomeCallable BatchClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskOutcome>>();
    DescribeTaskAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeTaskRequest&,
        DescribeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeTaskLogsOutcome BatchClient::DescribeTaskLogs(const DescribeTaskLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogsResponse rsp = DescribeTaskLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogsOutcome(rsp);
        else
            return DescribeTaskLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogsOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeTaskLogsAsync(const DescribeTaskLogsRequest& request, const DescribeTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLogsRequest&;
    using Resp = DescribeTaskLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeTaskLogsOutcomeCallable BatchClient::DescribeTaskLogsCallable(const DescribeTaskLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLogsOutcome>>();
    DescribeTaskLogsAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeTaskLogsRequest&,
        DescribeTaskLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DescribeTaskTemplatesOutcome BatchClient::DescribeTaskTemplates(const DescribeTaskTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTemplatesResponse rsp = DescribeTaskTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTemplatesOutcome(rsp);
        else
            return DescribeTaskTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTemplatesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeTaskTemplatesAsync(const DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskTemplatesRequest&;
    using Resp = DescribeTaskTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DescribeTaskTemplatesOutcomeCallable BatchClient::DescribeTaskTemplatesCallable(const DescribeTaskTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskTemplatesOutcome>>();
    DescribeTaskTemplatesAsync(
    request,
    [prom](
        const BatchClient*,
        const DescribeTaskTemplatesRequest&,
        DescribeTaskTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::DetachInstancesOutcome BatchClient::DetachInstances(const DetachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachInstancesResponse rsp = DetachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachInstancesOutcome(rsp);
        else
            return DetachInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachInstancesOutcome(outcome.GetError());
    }
}

void BatchClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachInstancesRequest&;
    using Resp = DetachInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DetachInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::DetachInstancesOutcomeCallable BatchClient::DetachInstancesCallable(const DetachInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachInstancesOutcome>>();
    DetachInstancesAsync(
    request,
    [prom](
        const BatchClient*,
        const DetachInstancesRequest&,
        DetachInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::ModifyComputeEnvOutcome BatchClient::ModifyComputeEnv(const ModifyComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyComputeEnvResponse rsp = ModifyComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyComputeEnvOutcome(rsp);
        else
            return ModifyComputeEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::ModifyComputeEnvAsync(const ModifyComputeEnvRequest& request, const ModifyComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyComputeEnvRequest&;
    using Resp = ModifyComputeEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyComputeEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::ModifyComputeEnvOutcomeCallable BatchClient::ModifyComputeEnvCallable(const ModifyComputeEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyComputeEnvOutcome>>();
    ModifyComputeEnvAsync(
    request,
    [prom](
        const BatchClient*,
        const ModifyComputeEnvRequest&,
        ModifyComputeEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::ModifyTaskTemplateOutcome BatchClient::ModifyTaskTemplate(const ModifyTaskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskTemplateResponse rsp = ModifyTaskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskTemplateOutcome(rsp);
        else
            return ModifyTaskTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskTemplateOutcome(outcome.GetError());
    }
}

void BatchClient::ModifyTaskTemplateAsync(const ModifyTaskTemplateRequest& request, const ModifyTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskTemplateRequest&;
    using Resp = ModifyTaskTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::ModifyTaskTemplateOutcomeCallable BatchClient::ModifyTaskTemplateCallable(const ModifyTaskTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskTemplateOutcome>>();
    ModifyTaskTemplateAsync(
    request,
    [prom](
        const BatchClient*,
        const ModifyTaskTemplateRequest&,
        ModifyTaskTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::RetryJobsOutcome BatchClient::RetryJobs(const RetryJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RetryJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryJobsResponse rsp = RetryJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryJobsOutcome(rsp);
        else
            return RetryJobsOutcome(o.GetError());
    }
    else
    {
        return RetryJobsOutcome(outcome.GetError());
    }
}

void BatchClient::RetryJobsAsync(const RetryJobsRequest& request, const RetryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryJobsRequest&;
    using Resp = RetryJobsResponse;

    DoRequestAsync<Req, Resp>(
        "RetryJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::RetryJobsOutcomeCallable BatchClient::RetryJobsCallable(const RetryJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryJobsOutcome>>();
    RetryJobsAsync(
    request,
    [prom](
        const BatchClient*,
        const RetryJobsRequest&,
        RetryJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::SubmitJobOutcome BatchClient::SubmitJob(const SubmitJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitJobResponse rsp = SubmitJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitJobOutcome(rsp);
        else
            return SubmitJobOutcome(o.GetError());
    }
    else
    {
        return SubmitJobOutcome(outcome.GetError());
    }
}

void BatchClient::SubmitJobAsync(const SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitJobRequest&;
    using Resp = SubmitJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::SubmitJobOutcomeCallable BatchClient::SubmitJobCallable(const SubmitJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitJobOutcome>>();
    SubmitJobAsync(
    request,
    [prom](
        const BatchClient*,
        const SubmitJobRequest&,
        SubmitJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::TerminateComputeNodeOutcome BatchClient::TerminateComputeNode(const TerminateComputeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateComputeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateComputeNodeResponse rsp = TerminateComputeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateComputeNodeOutcome(rsp);
        else
            return TerminateComputeNodeOutcome(o.GetError());
    }
    else
    {
        return TerminateComputeNodeOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateComputeNodeAsync(const TerminateComputeNodeRequest& request, const TerminateComputeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateComputeNodeRequest&;
    using Resp = TerminateComputeNodeResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateComputeNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::TerminateComputeNodeOutcomeCallable BatchClient::TerminateComputeNodeCallable(const TerminateComputeNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateComputeNodeOutcome>>();
    TerminateComputeNodeAsync(
    request,
    [prom](
        const BatchClient*,
        const TerminateComputeNodeRequest&,
        TerminateComputeNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::TerminateComputeNodesOutcome BatchClient::TerminateComputeNodes(const TerminateComputeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateComputeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateComputeNodesResponse rsp = TerminateComputeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateComputeNodesOutcome(rsp);
        else
            return TerminateComputeNodesOutcome(o.GetError());
    }
    else
    {
        return TerminateComputeNodesOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateComputeNodesAsync(const TerminateComputeNodesRequest& request, const TerminateComputeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateComputeNodesRequest&;
    using Resp = TerminateComputeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateComputeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::TerminateComputeNodesOutcomeCallable BatchClient::TerminateComputeNodesCallable(const TerminateComputeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateComputeNodesOutcome>>();
    TerminateComputeNodesAsync(
    request,
    [prom](
        const BatchClient*,
        const TerminateComputeNodesRequest&,
        TerminateComputeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::TerminateJobOutcome BatchClient::TerminateJob(const TerminateJobRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateJobResponse rsp = TerminateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateJobOutcome(rsp);
        else
            return TerminateJobOutcome(o.GetError());
    }
    else
    {
        return TerminateJobOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateJobAsync(const TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateJobRequest&;
    using Resp = TerminateJobResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::TerminateJobOutcomeCallable BatchClient::TerminateJobCallable(const TerminateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateJobOutcome>>();
    TerminateJobAsync(
    request,
    [prom](
        const BatchClient*,
        const TerminateJobRequest&,
        TerminateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BatchClient::TerminateTaskInstanceOutcome BatchClient::TerminateTaskInstance(const TerminateTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTaskInstanceResponse rsp = TerminateTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTaskInstanceOutcome(rsp);
        else
            return TerminateTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateTaskInstanceOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateTaskInstanceAsync(const TerminateTaskInstanceRequest& request, const TerminateTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateTaskInstanceRequest&;
    using Resp = TerminateTaskInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateTaskInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BatchClient::TerminateTaskInstanceOutcomeCallable BatchClient::TerminateTaskInstanceCallable(const TerminateTaskInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateTaskInstanceOutcome>>();
    TerminateTaskInstanceAsync(
    request,
    [prom](
        const BatchClient*,
        const TerminateTaskInstanceRequest&,
        TerminateTaskInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

