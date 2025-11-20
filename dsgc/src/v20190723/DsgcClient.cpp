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

#include <tencentcloud/dsgc/v20190723/DsgcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dsgc::V20190723;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-23";
    const string ENDPOINT = "dsgc.tencentcloudapi.com";
}

DsgcClient::DsgcClient(const Credential &credential, const string &region) :
    DsgcClient(credential, region, ClientProfile())
{
}

DsgcClient::DsgcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DsgcClient::AuthorizeDSPAMetaResourcesOutcome DsgcClient::AuthorizeDSPAMetaResources(const AuthorizeDSPAMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "AuthorizeDSPAMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthorizeDSPAMetaResourcesResponse rsp = AuthorizeDSPAMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthorizeDSPAMetaResourcesOutcome(rsp);
        else
            return AuthorizeDSPAMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return AuthorizeDSPAMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::AuthorizeDSPAMetaResourcesAsync(const AuthorizeDSPAMetaResourcesRequest& request, const AuthorizeDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuthorizeDSPAMetaResourcesRequest&;
    using Resp = AuthorizeDSPAMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "AuthorizeDSPAMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::AuthorizeDSPAMetaResourcesOutcomeCallable DsgcClient::AuthorizeDSPAMetaResourcesCallable(const AuthorizeDSPAMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuthorizeDSPAMetaResourcesOutcome>>();
    AuthorizeDSPAMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const AuthorizeDSPAMetaResourcesRequest&,
        AuthorizeDSPAMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::BindDSPAResourceCosBucketsOutcome DsgcClient::BindDSPAResourceCosBuckets(const BindDSPAResourceCosBucketsRequest &request)
{
    auto outcome = MakeRequest(request, "BindDSPAResourceCosBuckets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDSPAResourceCosBucketsResponse rsp = BindDSPAResourceCosBucketsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDSPAResourceCosBucketsOutcome(rsp);
        else
            return BindDSPAResourceCosBucketsOutcome(o.GetError());
    }
    else
    {
        return BindDSPAResourceCosBucketsOutcome(outcome.GetError());
    }
}

void DsgcClient::BindDSPAResourceCosBucketsAsync(const BindDSPAResourceCosBucketsRequest& request, const BindDSPAResourceCosBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDSPAResourceCosBucketsRequest&;
    using Resp = BindDSPAResourceCosBucketsResponse;

    DoRequestAsync<Req, Resp>(
        "BindDSPAResourceCosBuckets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::BindDSPAResourceCosBucketsOutcomeCallable DsgcClient::BindDSPAResourceCosBucketsCallable(const BindDSPAResourceCosBucketsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDSPAResourceCosBucketsOutcome>>();
    BindDSPAResourceCosBucketsAsync(
    request,
    [prom](
        const DsgcClient*,
        const BindDSPAResourceCosBucketsRequest&,
        BindDSPAResourceCosBucketsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::BindDSPAResourceDatabasesOutcome DsgcClient::BindDSPAResourceDatabases(const BindDSPAResourceDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "BindDSPAResourceDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDSPAResourceDatabasesResponse rsp = BindDSPAResourceDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDSPAResourceDatabasesOutcome(rsp);
        else
            return BindDSPAResourceDatabasesOutcome(o.GetError());
    }
    else
    {
        return BindDSPAResourceDatabasesOutcome(outcome.GetError());
    }
}

void DsgcClient::BindDSPAResourceDatabasesAsync(const BindDSPAResourceDatabasesRequest& request, const BindDSPAResourceDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDSPAResourceDatabasesRequest&;
    using Resp = BindDSPAResourceDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "BindDSPAResourceDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::BindDSPAResourceDatabasesOutcomeCallable DsgcClient::BindDSPAResourceDatabasesCallable(const BindDSPAResourceDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDSPAResourceDatabasesOutcome>>();
    BindDSPAResourceDatabasesAsync(
    request,
    [prom](
        const DsgcClient*,
        const BindDSPAResourceDatabasesRequest&,
        BindDSPAResourceDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CopyDSPATemplateOutcome DsgcClient::CopyDSPATemplate(const CopyDSPATemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CopyDSPATemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyDSPATemplateResponse rsp = CopyDSPATemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyDSPATemplateOutcome(rsp);
        else
            return CopyDSPATemplateOutcome(o.GetError());
    }
    else
    {
        return CopyDSPATemplateOutcome(outcome.GetError());
    }
}

void DsgcClient::CopyDSPATemplateAsync(const CopyDSPATemplateRequest& request, const CopyDSPATemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyDSPATemplateRequest&;
    using Resp = CopyDSPATemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CopyDSPATemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CopyDSPATemplateOutcomeCallable DsgcClient::CopyDSPATemplateCallable(const CopyDSPATemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyDSPATemplateOutcome>>();
    CopyDSPATemplateAsync(
    request,
    [prom](
        const DsgcClient*,
        const CopyDSPATemplateRequest&,
        CopyDSPATemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateAssetSortingReportRetryTaskOutcome DsgcClient::CreateAssetSortingReportRetryTask(const CreateAssetSortingReportRetryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetSortingReportRetryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetSortingReportRetryTaskResponse rsp = CreateAssetSortingReportRetryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetSortingReportRetryTaskOutcome(rsp);
        else
            return CreateAssetSortingReportRetryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAssetSortingReportRetryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateAssetSortingReportRetryTaskAsync(const CreateAssetSortingReportRetryTaskRequest& request, const CreateAssetSortingReportRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetSortingReportRetryTaskRequest&;
    using Resp = CreateAssetSortingReportRetryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetSortingReportRetryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateAssetSortingReportRetryTaskOutcomeCallable DsgcClient::CreateAssetSortingReportRetryTaskCallable(const CreateAssetSortingReportRetryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetSortingReportRetryTaskOutcome>>();
    CreateAssetSortingReportRetryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateAssetSortingReportRetryTaskRequest&,
        CreateAssetSortingReportRetryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateAssetSortingReportTaskOutcome DsgcClient::CreateAssetSortingReportTask(const CreateAssetSortingReportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetSortingReportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetSortingReportTaskResponse rsp = CreateAssetSortingReportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetSortingReportTaskOutcome(rsp);
        else
            return CreateAssetSortingReportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAssetSortingReportTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateAssetSortingReportTaskAsync(const CreateAssetSortingReportTaskRequest& request, const CreateAssetSortingReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetSortingReportTaskRequest&;
    using Resp = CreateAssetSortingReportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetSortingReportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateAssetSortingReportTaskOutcomeCallable DsgcClient::CreateAssetSortingReportTaskCallable(const CreateAssetSortingReportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetSortingReportTaskOutcome>>();
    CreateAssetSortingReportTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateAssetSortingReportTaskRequest&,
        CreateAssetSortingReportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAAssessmentRiskLevelOutcome DsgcClient::CreateDSPAAssessmentRiskLevel(const CreateDSPAAssessmentRiskLevelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAAssessmentRiskLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAAssessmentRiskLevelResponse rsp = CreateDSPAAssessmentRiskLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAAssessmentRiskLevelOutcome(rsp);
        else
            return CreateDSPAAssessmentRiskLevelOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAAssessmentRiskLevelOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAAssessmentRiskLevelAsync(const CreateDSPAAssessmentRiskLevelRequest& request, const CreateDSPAAssessmentRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAAssessmentRiskLevelRequest&;
    using Resp = CreateDSPAAssessmentRiskLevelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAAssessmentRiskLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAAssessmentRiskLevelOutcomeCallable DsgcClient::CreateDSPAAssessmentRiskLevelCallable(const CreateDSPAAssessmentRiskLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAAssessmentRiskLevelOutcome>>();
    CreateDSPAAssessmentRiskLevelAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAAssessmentRiskLevelRequest&,
        CreateDSPAAssessmentRiskLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAAssessmentRiskTemplateOutcome DsgcClient::CreateDSPAAssessmentRiskTemplate(const CreateDSPAAssessmentRiskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAAssessmentRiskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAAssessmentRiskTemplateResponse rsp = CreateDSPAAssessmentRiskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAAssessmentRiskTemplateOutcome(rsp);
        else
            return CreateDSPAAssessmentRiskTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAAssessmentRiskTemplateOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAAssessmentRiskTemplateAsync(const CreateDSPAAssessmentRiskTemplateRequest& request, const CreateDSPAAssessmentRiskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAAssessmentRiskTemplateRequest&;
    using Resp = CreateDSPAAssessmentRiskTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAAssessmentRiskTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAAssessmentRiskTemplateOutcomeCallable DsgcClient::CreateDSPAAssessmentRiskTemplateCallable(const CreateDSPAAssessmentRiskTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAAssessmentRiskTemplateOutcome>>();
    CreateDSPAAssessmentRiskTemplateAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAAssessmentRiskTemplateRequest&,
        CreateDSPAAssessmentRiskTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAAssessmentTaskOutcome DsgcClient::CreateDSPAAssessmentTask(const CreateDSPAAssessmentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAAssessmentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAAssessmentTaskResponse rsp = CreateDSPAAssessmentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAAssessmentTaskOutcome(rsp);
        else
            return CreateDSPAAssessmentTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAAssessmentTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAAssessmentTaskAsync(const CreateDSPAAssessmentTaskRequest& request, const CreateDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAAssessmentTaskRequest&;
    using Resp = CreateDSPAAssessmentTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAAssessmentTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAAssessmentTaskOutcomeCallable DsgcClient::CreateDSPAAssessmentTaskCallable(const CreateDSPAAssessmentTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAAssessmentTaskOutcome>>();
    CreateDSPAAssessmentTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAAssessmentTaskRequest&,
        CreateDSPAAssessmentTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPACOSDiscoveryTaskOutcome DsgcClient::CreateDSPACOSDiscoveryTask(const CreateDSPACOSDiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPACOSDiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPACOSDiscoveryTaskResponse rsp = CreateDSPACOSDiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPACOSDiscoveryTaskOutcome(rsp);
        else
            return CreateDSPACOSDiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDSPACOSDiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPACOSDiscoveryTaskAsync(const CreateDSPACOSDiscoveryTaskRequest& request, const CreateDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPACOSDiscoveryTaskRequest&;
    using Resp = CreateDSPACOSDiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPACOSDiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::CreateDSPACOSDiscoveryTaskCallable(const CreateDSPACOSDiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPACOSDiscoveryTaskOutcome>>();
    CreateDSPACOSDiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPACOSDiscoveryTaskRequest&,
        CreateDSPACOSDiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPACategoryOutcome DsgcClient::CreateDSPACategory(const CreateDSPACategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPACategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPACategoryResponse rsp = CreateDSPACategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPACategoryOutcome(rsp);
        else
            return CreateDSPACategoryOutcome(o.GetError());
    }
    else
    {
        return CreateDSPACategoryOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPACategoryAsync(const CreateDSPACategoryRequest& request, const CreateDSPACategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPACategoryRequest&;
    using Resp = CreateDSPACategoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPACategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPACategoryOutcomeCallable DsgcClient::CreateDSPACategoryCallable(const CreateDSPACategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPACategoryOutcome>>();
    CreateDSPACategoryAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPACategoryRequest&,
        CreateDSPACategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPACategoryRelationOutcome DsgcClient::CreateDSPACategoryRelation(const CreateDSPACategoryRelationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPACategoryRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPACategoryRelationResponse rsp = CreateDSPACategoryRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPACategoryRelationOutcome(rsp);
        else
            return CreateDSPACategoryRelationOutcome(o.GetError());
    }
    else
    {
        return CreateDSPACategoryRelationOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPACategoryRelationAsync(const CreateDSPACategoryRelationRequest& request, const CreateDSPACategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPACategoryRelationRequest&;
    using Resp = CreateDSPACategoryRelationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPACategoryRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPACategoryRelationOutcomeCallable DsgcClient::CreateDSPACategoryRelationCallable(const CreateDSPACategoryRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPACategoryRelationOutcome>>();
    CreateDSPACategoryRelationAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPACategoryRelationRequest&,
        CreateDSPACategoryRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAComplianceGroupOutcome DsgcClient::CreateDSPAComplianceGroup(const CreateDSPAComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAComplianceGroupResponse rsp = CreateDSPAComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAComplianceGroupOutcome(rsp);
        else
            return CreateDSPAComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAComplianceGroupOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAComplianceGroupAsync(const CreateDSPAComplianceGroupRequest& request, const CreateDSPAComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAComplianceGroupRequest&;
    using Resp = CreateDSPAComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAComplianceGroupOutcomeCallable DsgcClient::CreateDSPAComplianceGroupCallable(const CreateDSPAComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAComplianceGroupOutcome>>();
    CreateDSPAComplianceGroupAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAComplianceGroupRequest&,
        CreateDSPAComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAComplianceRulesOutcome DsgcClient::CreateDSPAComplianceRules(const CreateDSPAComplianceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAComplianceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAComplianceRulesResponse rsp = CreateDSPAComplianceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAComplianceRulesOutcome(rsp);
        else
            return CreateDSPAComplianceRulesOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAComplianceRulesOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAComplianceRulesAsync(const CreateDSPAComplianceRulesRequest& request, const CreateDSPAComplianceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAComplianceRulesRequest&;
    using Resp = CreateDSPAComplianceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAComplianceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAComplianceRulesOutcomeCallable DsgcClient::CreateDSPAComplianceRulesCallable(const CreateDSPAComplianceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAComplianceRulesOutcome>>();
    CreateDSPAComplianceRulesAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAComplianceRulesRequest&,
        CreateDSPAComplianceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPACosMetaResourcesOutcome DsgcClient::CreateDSPACosMetaResources(const CreateDSPACosMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPACosMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPACosMetaResourcesResponse rsp = CreateDSPACosMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPACosMetaResourcesOutcome(rsp);
        else
            return CreateDSPACosMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return CreateDSPACosMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPACosMetaResourcesAsync(const CreateDSPACosMetaResourcesRequest& request, const CreateDSPACosMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPACosMetaResourcesRequest&;
    using Resp = CreateDSPACosMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPACosMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPACosMetaResourcesOutcomeCallable DsgcClient::CreateDSPACosMetaResourcesCallable(const CreateDSPACosMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPACosMetaResourcesOutcome>>();
    CreateDSPACosMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPACosMetaResourcesRequest&,
        CreateDSPACosMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPADbMetaResourcesOutcome DsgcClient::CreateDSPADbMetaResources(const CreateDSPADbMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPADbMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPADbMetaResourcesResponse rsp = CreateDSPADbMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPADbMetaResourcesOutcome(rsp);
        else
            return CreateDSPADbMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return CreateDSPADbMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPADbMetaResourcesAsync(const CreateDSPADbMetaResourcesRequest& request, const CreateDSPADbMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPADbMetaResourcesRequest&;
    using Resp = CreateDSPADbMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPADbMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPADbMetaResourcesOutcomeCallable DsgcClient::CreateDSPADbMetaResourcesCallable(const CreateDSPADbMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPADbMetaResourcesOutcome>>();
    CreateDSPADbMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPADbMetaResourcesRequest&,
        CreateDSPADbMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPADiscoveryRuleOutcome DsgcClient::CreateDSPADiscoveryRule(const CreateDSPADiscoveryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPADiscoveryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPADiscoveryRuleResponse rsp = CreateDSPADiscoveryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPADiscoveryRuleOutcome(rsp);
        else
            return CreateDSPADiscoveryRuleOutcome(o.GetError());
    }
    else
    {
        return CreateDSPADiscoveryRuleOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPADiscoveryRuleAsync(const CreateDSPADiscoveryRuleRequest& request, const CreateDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPADiscoveryRuleRequest&;
    using Resp = CreateDSPADiscoveryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPADiscoveryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPADiscoveryRuleOutcomeCallable DsgcClient::CreateDSPADiscoveryRuleCallable(const CreateDSPADiscoveryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPADiscoveryRuleOutcome>>();
    CreateDSPADiscoveryRuleAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPADiscoveryRuleRequest&,
        CreateDSPADiscoveryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPADiscoveryTaskOutcome DsgcClient::CreateDSPADiscoveryTask(const CreateDSPADiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPADiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPADiscoveryTaskResponse rsp = CreateDSPADiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPADiscoveryTaskOutcome(rsp);
        else
            return CreateDSPADiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDSPADiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPADiscoveryTaskAsync(const CreateDSPADiscoveryTaskRequest& request, const CreateDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPADiscoveryTaskRequest&;
    using Resp = CreateDSPADiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPADiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPADiscoveryTaskOutcomeCallable DsgcClient::CreateDSPADiscoveryTaskCallable(const CreateDSPADiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPADiscoveryTaskOutcome>>();
    CreateDSPADiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPADiscoveryTaskRequest&,
        CreateDSPADiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPALevelGroupOutcome DsgcClient::CreateDSPALevelGroup(const CreateDSPALevelGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPALevelGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPALevelGroupResponse rsp = CreateDSPALevelGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPALevelGroupOutcome(rsp);
        else
            return CreateDSPALevelGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDSPALevelGroupOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPALevelGroupAsync(const CreateDSPALevelGroupRequest& request, const CreateDSPALevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPALevelGroupRequest&;
    using Resp = CreateDSPALevelGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPALevelGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPALevelGroupOutcomeCallable DsgcClient::CreateDSPALevelGroupCallable(const CreateDSPALevelGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPALevelGroupOutcome>>();
    CreateDSPALevelGroupAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPALevelGroupRequest&,
        CreateDSPALevelGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPAMetaResourcesOutcome DsgcClient::CreateDSPAMetaResources(const CreateDSPAMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPAMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPAMetaResourcesResponse rsp = CreateDSPAMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPAMetaResourcesOutcome(rsp);
        else
            return CreateDSPAMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return CreateDSPAMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPAMetaResourcesAsync(const CreateDSPAMetaResourcesRequest& request, const CreateDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPAMetaResourcesRequest&;
    using Resp = CreateDSPAMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPAMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPAMetaResourcesOutcomeCallable DsgcClient::CreateDSPAMetaResourcesCallable(const CreateDSPAMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPAMetaResourcesOutcome>>();
    CreateDSPAMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPAMetaResourcesRequest&,
        CreateDSPAMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateDSPASelfBuildMetaResourceOutcome DsgcClient::CreateDSPASelfBuildMetaResource(const CreateDSPASelfBuildMetaResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDSPASelfBuildMetaResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDSPASelfBuildMetaResourceResponse rsp = CreateDSPASelfBuildMetaResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDSPASelfBuildMetaResourceOutcome(rsp);
        else
            return CreateDSPASelfBuildMetaResourceOutcome(o.GetError());
    }
    else
    {
        return CreateDSPASelfBuildMetaResourceOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateDSPASelfBuildMetaResourceAsync(const CreateDSPASelfBuildMetaResourceRequest& request, const CreateDSPASelfBuildMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDSPASelfBuildMetaResourceRequest&;
    using Resp = CreateDSPASelfBuildMetaResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDSPASelfBuildMetaResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateDSPASelfBuildMetaResourceOutcomeCallable DsgcClient::CreateDSPASelfBuildMetaResourceCallable(const CreateDSPASelfBuildMetaResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDSPASelfBuildMetaResourceOutcome>>();
    CreateDSPASelfBuildMetaResourceAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateDSPASelfBuildMetaResourceRequest&,
        CreateDSPASelfBuildMetaResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::CreateIdentifyRuleAnotherNameOutcome DsgcClient::CreateIdentifyRuleAnotherName(const CreateIdentifyRuleAnotherNameRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIdentifyRuleAnotherName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIdentifyRuleAnotherNameResponse rsp = CreateIdentifyRuleAnotherNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIdentifyRuleAnotherNameOutcome(rsp);
        else
            return CreateIdentifyRuleAnotherNameOutcome(o.GetError());
    }
    else
    {
        return CreateIdentifyRuleAnotherNameOutcome(outcome.GetError());
    }
}

void DsgcClient::CreateIdentifyRuleAnotherNameAsync(const CreateIdentifyRuleAnotherNameRequest& request, const CreateIdentifyRuleAnotherNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIdentifyRuleAnotherNameRequest&;
    using Resp = CreateIdentifyRuleAnotherNameResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIdentifyRuleAnotherName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::CreateIdentifyRuleAnotherNameOutcomeCallable DsgcClient::CreateIdentifyRuleAnotherNameCallable(const CreateIdentifyRuleAnotherNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIdentifyRuleAnotherNameOutcome>>();
    CreateIdentifyRuleAnotherNameAsync(
    request,
    [prom](
        const DsgcClient*,
        const CreateIdentifyRuleAnotherNameRequest&,
        CreateIdentifyRuleAnotherNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DecribeSuggestRiskLevelMatrixOutcome DsgcClient::DecribeSuggestRiskLevelMatrix(const DecribeSuggestRiskLevelMatrixRequest &request)
{
    auto outcome = MakeRequest(request, "DecribeSuggestRiskLevelMatrix");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DecribeSuggestRiskLevelMatrixResponse rsp = DecribeSuggestRiskLevelMatrixResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DecribeSuggestRiskLevelMatrixOutcome(rsp);
        else
            return DecribeSuggestRiskLevelMatrixOutcome(o.GetError());
    }
    else
    {
        return DecribeSuggestRiskLevelMatrixOutcome(outcome.GetError());
    }
}

void DsgcClient::DecribeSuggestRiskLevelMatrixAsync(const DecribeSuggestRiskLevelMatrixRequest& request, const DecribeSuggestRiskLevelMatrixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DecribeSuggestRiskLevelMatrixRequest&;
    using Resp = DecribeSuggestRiskLevelMatrixResponse;

    DoRequestAsync<Req, Resp>(
        "DecribeSuggestRiskLevelMatrix", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DecribeSuggestRiskLevelMatrixOutcomeCallable DsgcClient::DecribeSuggestRiskLevelMatrixCallable(const DecribeSuggestRiskLevelMatrixRequest &request)
{
    const auto prom = std::make_shared<std::promise<DecribeSuggestRiskLevelMatrixOutcome>>();
    DecribeSuggestRiskLevelMatrixAsync(
    request,
    [prom](
        const DsgcClient*,
        const DecribeSuggestRiskLevelMatrixRequest&,
        DecribeSuggestRiskLevelMatrixOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteCosMetaResourceOutcome DsgcClient::DeleteCosMetaResource(const DeleteCosMetaResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCosMetaResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCosMetaResourceResponse rsp = DeleteCosMetaResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCosMetaResourceOutcome(rsp);
        else
            return DeleteCosMetaResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteCosMetaResourceOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteCosMetaResourceAsync(const DeleteCosMetaResourceRequest& request, const DeleteCosMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCosMetaResourceRequest&;
    using Resp = DeleteCosMetaResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCosMetaResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteCosMetaResourceOutcomeCallable DsgcClient::DeleteCosMetaResourceCallable(const DeleteCosMetaResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCosMetaResourceOutcome>>();
    DeleteCosMetaResourceAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteCosMetaResourceRequest&,
        DeleteCosMetaResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPAAssessmentTaskOutcome DsgcClient::DeleteDSPAAssessmentTask(const DeleteDSPAAssessmentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPAAssessmentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPAAssessmentTaskResponse rsp = DeleteDSPAAssessmentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPAAssessmentTaskOutcome(rsp);
        else
            return DeleteDSPAAssessmentTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPAAssessmentTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPAAssessmentTaskAsync(const DeleteDSPAAssessmentTaskRequest& request, const DeleteDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPAAssessmentTaskRequest&;
    using Resp = DeleteDSPAAssessmentTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPAAssessmentTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPAAssessmentTaskOutcomeCallable DsgcClient::DeleteDSPAAssessmentTaskCallable(const DeleteDSPAAssessmentTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPAAssessmentTaskOutcome>>();
    DeleteDSPAAssessmentTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPAAssessmentTaskRequest&,
        DeleteDSPAAssessmentTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPACOSDiscoveryTaskOutcome DsgcClient::DeleteDSPACOSDiscoveryTask(const DeleteDSPACOSDiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPACOSDiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPACOSDiscoveryTaskResponse rsp = DeleteDSPACOSDiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPACOSDiscoveryTaskOutcome(rsp);
        else
            return DeleteDSPACOSDiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPACOSDiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPACOSDiscoveryTaskAsync(const DeleteDSPACOSDiscoveryTaskRequest& request, const DeleteDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPACOSDiscoveryTaskRequest&;
    using Resp = DeleteDSPACOSDiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPACOSDiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::DeleteDSPACOSDiscoveryTaskCallable(const DeleteDSPACOSDiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPACOSDiscoveryTaskOutcome>>();
    DeleteDSPACOSDiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPACOSDiscoveryTaskRequest&,
        DeleteDSPACOSDiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPACOSDiscoveryTaskResultOutcome DsgcClient::DeleteDSPACOSDiscoveryTaskResult(const DeleteDSPACOSDiscoveryTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPACOSDiscoveryTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPACOSDiscoveryTaskResultResponse rsp = DeleteDSPACOSDiscoveryTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPACOSDiscoveryTaskResultOutcome(rsp);
        else
            return DeleteDSPACOSDiscoveryTaskResultOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPACOSDiscoveryTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPACOSDiscoveryTaskResultAsync(const DeleteDSPACOSDiscoveryTaskResultRequest& request, const DeleteDSPACOSDiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPACOSDiscoveryTaskResultRequest&;
    using Resp = DeleteDSPACOSDiscoveryTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPACOSDiscoveryTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPACOSDiscoveryTaskResultOutcomeCallable DsgcClient::DeleteDSPACOSDiscoveryTaskResultCallable(const DeleteDSPACOSDiscoveryTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPACOSDiscoveryTaskResultOutcome>>();
    DeleteDSPACOSDiscoveryTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPACOSDiscoveryTaskResultRequest&,
        DeleteDSPACOSDiscoveryTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPADiscoveryTaskOutcome DsgcClient::DeleteDSPADiscoveryTask(const DeleteDSPADiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPADiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPADiscoveryTaskResponse rsp = DeleteDSPADiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPADiscoveryTaskOutcome(rsp);
        else
            return DeleteDSPADiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPADiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPADiscoveryTaskAsync(const DeleteDSPADiscoveryTaskRequest& request, const DeleteDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPADiscoveryTaskRequest&;
    using Resp = DeleteDSPADiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPADiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPADiscoveryTaskOutcomeCallable DsgcClient::DeleteDSPADiscoveryTaskCallable(const DeleteDSPADiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPADiscoveryTaskOutcome>>();
    DeleteDSPADiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPADiscoveryTaskRequest&,
        DeleteDSPADiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPADiscoveryTaskResultOutcome DsgcClient::DeleteDSPADiscoveryTaskResult(const DeleteDSPADiscoveryTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPADiscoveryTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPADiscoveryTaskResultResponse rsp = DeleteDSPADiscoveryTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPADiscoveryTaskResultOutcome(rsp);
        else
            return DeleteDSPADiscoveryTaskResultOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPADiscoveryTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPADiscoveryTaskResultAsync(const DeleteDSPADiscoveryTaskResultRequest& request, const DeleteDSPADiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPADiscoveryTaskResultRequest&;
    using Resp = DeleteDSPADiscoveryTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPADiscoveryTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPADiscoveryTaskResultOutcomeCallable DsgcClient::DeleteDSPADiscoveryTaskResultCallable(const DeleteDSPADiscoveryTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPADiscoveryTaskResultOutcome>>();
    DeleteDSPADiscoveryTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPADiscoveryTaskResultRequest&,
        DeleteDSPADiscoveryTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DeleteDSPAMetaResourceOutcome DsgcClient::DeleteDSPAMetaResource(const DeleteDSPAMetaResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDSPAMetaResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDSPAMetaResourceResponse rsp = DeleteDSPAMetaResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDSPAMetaResourceOutcome(rsp);
        else
            return DeleteDSPAMetaResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDSPAMetaResourceOutcome(outcome.GetError());
    }
}

void DsgcClient::DeleteDSPAMetaResourceAsync(const DeleteDSPAMetaResourceRequest& request, const DeleteDSPAMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDSPAMetaResourceRequest&;
    using Resp = DeleteDSPAMetaResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDSPAMetaResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DeleteDSPAMetaResourceOutcomeCallable DsgcClient::DeleteDSPAMetaResourceCallable(const DeleteDSPAMetaResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDSPAMetaResourceOutcome>>();
    DeleteDSPAMetaResourceAsync(
    request,
    [prom](
        const DsgcClient*,
        const DeleteDSPAMetaResourceRequest&,
        DeleteDSPAMetaResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeAssetDetailDataExportResultOutcome DsgcClient::DescribeAssetDetailDataExportResult(const DescribeAssetDetailDataExportResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDetailDataExportResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDetailDataExportResultResponse rsp = DescribeAssetDetailDataExportResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDetailDataExportResultOutcome(rsp);
        else
            return DescribeAssetDetailDataExportResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDetailDataExportResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeAssetDetailDataExportResultAsync(const DescribeAssetDetailDataExportResultRequest& request, const DescribeAssetDetailDataExportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDetailDataExportResultRequest&;
    using Resp = DescribeAssetDetailDataExportResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDetailDataExportResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeAssetDetailDataExportResultOutcomeCallable DsgcClient::DescribeAssetDetailDataExportResultCallable(const DescribeAssetDetailDataExportResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDetailDataExportResultOutcome>>();
    DescribeAssetDetailDataExportResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeAssetDetailDataExportResultRequest&,
        DescribeAssetDetailDataExportResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeAssetOverviewOutcome DsgcClient::DescribeAssetOverview(const DescribeAssetOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetOverviewResponse rsp = DescribeAssetOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetOverviewOutcome(rsp);
        else
            return DescribeAssetOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeAssetOverviewAsync(const DescribeAssetOverviewRequest& request, const DescribeAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetOverviewRequest&;
    using Resp = DescribeAssetOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeAssetOverviewOutcomeCallable DsgcClient::DescribeAssetOverviewCallable(const DescribeAssetOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetOverviewOutcome>>();
    DescribeAssetOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeAssetOverviewRequest&,
        DescribeAssetOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeBindDBListOutcome DsgcClient::DescribeBindDBList(const DescribeBindDBListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindDBList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindDBListResponse rsp = DescribeBindDBListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindDBListOutcome(rsp);
        else
            return DescribeBindDBListOutcome(o.GetError());
    }
    else
    {
        return DescribeBindDBListOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeBindDBListAsync(const DescribeBindDBListRequest& request, const DescribeBindDBListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindDBListRequest&;
    using Resp = DescribeBindDBListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindDBList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeBindDBListOutcomeCallable DsgcClient::DescribeBindDBListCallable(const DescribeBindDBListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindDBListOutcome>>();
    DescribeBindDBListAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeBindDBListRequest&,
        DescribeBindDBListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeCOSAssetSensitiveDistributionOutcome DsgcClient::DescribeCOSAssetSensitiveDistribution(const DescribeCOSAssetSensitiveDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCOSAssetSensitiveDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCOSAssetSensitiveDistributionResponse rsp = DescribeCOSAssetSensitiveDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCOSAssetSensitiveDistributionOutcome(rsp);
        else
            return DescribeCOSAssetSensitiveDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeCOSAssetSensitiveDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeCOSAssetSensitiveDistributionAsync(const DescribeCOSAssetSensitiveDistributionRequest& request, const DescribeCOSAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCOSAssetSensitiveDistributionRequest&;
    using Resp = DescribeCOSAssetSensitiveDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCOSAssetSensitiveDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeCOSAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeCOSAssetSensitiveDistributionCallable(const DescribeCOSAssetSensitiveDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCOSAssetSensitiveDistributionOutcome>>();
    DescribeCOSAssetSensitiveDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeCOSAssetSensitiveDistributionRequest&,
        DescribeCOSAssetSensitiveDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewOutcome DsgcClient::DescribeDSPAAssessmentHighRiskTop10Overview(const DescribeDSPAAssessmentHighRiskTop10OverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentHighRiskTop10Overview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentHighRiskTop10OverviewResponse rsp = DescribeDSPAAssessmentHighRiskTop10OverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentHighRiskTop10OverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentHighRiskTop10OverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentHighRiskTop10OverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewAsync(const DescribeDSPAAssessmentHighRiskTop10OverviewRequest& request, const DescribeDSPAAssessmentHighRiskTop10OverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentHighRiskTop10OverviewRequest&;
    using Resp = DescribeDSPAAssessmentHighRiskTop10OverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentHighRiskTop10Overview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewCallable(const DescribeDSPAAssessmentHighRiskTop10OverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentHighRiskTop10OverviewOutcome>>();
    DescribeDSPAAssessmentHighRiskTop10OverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentHighRiskTop10OverviewRequest&,
        DescribeDSPAAssessmentHighRiskTop10OverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoOutcome DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfo(const DescribeDSPAAssessmentLatestRiskDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentLatestRiskDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentLatestRiskDetailInfoResponse rsp = DescribeDSPAAssessmentLatestRiskDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentLatestRiskDetailInfoOutcome(rsp);
        else
            return DescribeDSPAAssessmentLatestRiskDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentLatestRiskDetailInfoOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoAsync(const DescribeDSPAAssessmentLatestRiskDetailInfoRequest& request, const DescribeDSPAAssessmentLatestRiskDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentLatestRiskDetailInfoRequest&;
    using Resp = DescribeDSPAAssessmentLatestRiskDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentLatestRiskDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoOutcomeCallable DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoCallable(const DescribeDSPAAssessmentLatestRiskDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentLatestRiskDetailInfoOutcome>>();
    DescribeDSPAAssessmentLatestRiskDetailInfoAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentLatestRiskDetailInfoRequest&,
        DescribeDSPAAssessmentLatestRiskDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentLatestRiskListOutcome DsgcClient::DescribeDSPAAssessmentLatestRiskList(const DescribeDSPAAssessmentLatestRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentLatestRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentLatestRiskListResponse rsp = DescribeDSPAAssessmentLatestRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentLatestRiskListOutcome(rsp);
        else
            return DescribeDSPAAssessmentLatestRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentLatestRiskListOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentLatestRiskListAsync(const DescribeDSPAAssessmentLatestRiskListRequest& request, const DescribeDSPAAssessmentLatestRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentLatestRiskListRequest&;
    using Resp = DescribeDSPAAssessmentLatestRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentLatestRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentLatestRiskListOutcomeCallable DsgcClient::DescribeDSPAAssessmentLatestRiskListCallable(const DescribeDSPAAssessmentLatestRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentLatestRiskListOutcome>>();
    DescribeDSPAAssessmentLatestRiskListAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentLatestRiskListRequest&,
        DescribeDSPAAssessmentLatestRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverview(const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentNewDiscoveredRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse rsp = DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsync(const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest& request, const DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest&;
    using Resp = DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentNewDiscoveredRiskOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewCallable(const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome>>();
    DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest&,
        DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewOutcome DsgcClient::DescribeDSPAAssessmentPendingRiskOverview(const DescribeDSPAAssessmentPendingRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentPendingRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentPendingRiskOverviewResponse rsp = DescribeDSPAAssessmentPendingRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentPendingRiskOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentPendingRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentPendingRiskOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewAsync(const DescribeDSPAAssessmentPendingRiskOverviewRequest& request, const DescribeDSPAAssessmentPendingRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentPendingRiskOverviewRequest&;
    using Resp = DescribeDSPAAssessmentPendingRiskOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentPendingRiskOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewCallable(const DescribeDSPAAssessmentPendingRiskOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentPendingRiskOverviewOutcome>>();
    DescribeDSPAAssessmentPendingRiskOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentPendingRiskOverviewRequest&,
        DescribeDSPAAssessmentPendingRiskOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewOutcome DsgcClient::DescribeDSPAAssessmentProcessingRiskOverview(const DescribeDSPAAssessmentProcessingRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentProcessingRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentProcessingRiskOverviewResponse rsp = DescribeDSPAAssessmentProcessingRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentProcessingRiskOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentProcessingRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentProcessingRiskOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewAsync(const DescribeDSPAAssessmentProcessingRiskOverviewRequest& request, const DescribeDSPAAssessmentProcessingRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentProcessingRiskOverviewRequest&;
    using Resp = DescribeDSPAAssessmentProcessingRiskOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentProcessingRiskOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewCallable(const DescribeDSPAAssessmentProcessingRiskOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentProcessingRiskOverviewOutcome>>();
    DescribeDSPAAssessmentProcessingRiskOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentProcessingRiskOverviewRequest&,
        DescribeDSPAAssessmentProcessingRiskOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewOutcome DsgcClient::DescribeDSPAAssessmentRiskAmountOverview(const DescribeDSPAAssessmentRiskAmountOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskAmountOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskAmountOverviewResponse rsp = DescribeDSPAAssessmentRiskAmountOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskAmountOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskAmountOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskAmountOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewAsync(const DescribeDSPAAssessmentRiskAmountOverviewRequest& request, const DescribeDSPAAssessmentRiskAmountOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskAmountOverviewRequest&;
    using Resp = DescribeDSPAAssessmentRiskAmountOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskAmountOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewCallable(const DescribeDSPAAssessmentRiskAmountOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskAmountOverviewOutcome>>();
    DescribeDSPAAssessmentRiskAmountOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskAmountOverviewRequest&,
        DescribeDSPAAssessmentRiskAmountOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5Outcome DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5(const DescribeDSPAAssessmentRiskDatasourceTop5Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskDatasourceTop5");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskDatasourceTop5Response rsp = DescribeDSPAAssessmentRiskDatasourceTop5Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskDatasourceTop5Outcome(rsp);
        else
            return DescribeDSPAAssessmentRiskDatasourceTop5Outcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskDatasourceTop5Outcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5Async(const DescribeDSPAAssessmentRiskDatasourceTop5Request& request, const DescribeDSPAAssessmentRiskDatasourceTop5AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskDatasourceTop5Request&;
    using Resp = DescribeDSPAAssessmentRiskDatasourceTop5Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskDatasourceTop5", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5OutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5Callable(const DescribeDSPAAssessmentRiskDatasourceTop5Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskDatasourceTop5Outcome>>();
    DescribeDSPAAssessmentRiskDatasourceTop5Async(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskDatasourceTop5Request&,
        DescribeDSPAAssessmentRiskDatasourceTop5Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewOutcome DsgcClient::DescribeDSPAAssessmentRiskDealedOverview(const DescribeDSPAAssessmentRiskDealedOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskDealedOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskDealedOverviewResponse rsp = DescribeDSPAAssessmentRiskDealedOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskDealedOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskDealedOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskDealedOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewAsync(const DescribeDSPAAssessmentRiskDealedOverviewRequest& request, const DescribeDSPAAssessmentRiskDealedOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskDealedOverviewRequest&;
    using Resp = DescribeDSPAAssessmentRiskDealedOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskDealedOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewCallable(const DescribeDSPAAssessmentRiskDealedOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskDealedOverviewOutcome>>();
    DescribeDSPAAssessmentRiskDealedOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskDealedOverviewRequest&,
        DescribeDSPAAssessmentRiskDealedOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskDealedTrendOutcome DsgcClient::DescribeDSPAAssessmentRiskDealedTrend(const DescribeDSPAAssessmentRiskDealedTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskDealedTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskDealedTrendResponse rsp = DescribeDSPAAssessmentRiskDealedTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskDealedTrendOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskDealedTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskDealedTrendOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskDealedTrendAsync(const DescribeDSPAAssessmentRiskDealedTrendRequest& request, const DescribeDSPAAssessmentRiskDealedTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskDealedTrendRequest&;
    using Resp = DescribeDSPAAssessmentRiskDealedTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskDealedTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskDealedTrendOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDealedTrendCallable(const DescribeDSPAAssessmentRiskDealedTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskDealedTrendOutcome>>();
    DescribeDSPAAssessmentRiskDealedTrendAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskDealedTrendRequest&,
        DescribeDSPAAssessmentRiskDealedTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewOutcome DsgcClient::DescribeDSPAAssessmentRiskDistributionOverview(const DescribeDSPAAssessmentRiskDistributionOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskDistributionOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskDistributionOverviewResponse rsp = DescribeDSPAAssessmentRiskDistributionOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskDistributionOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskDistributionOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskDistributionOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewAsync(const DescribeDSPAAssessmentRiskDistributionOverviewRequest& request, const DescribeDSPAAssessmentRiskDistributionOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskDistributionOverviewRequest&;
    using Resp = DescribeDSPAAssessmentRiskDistributionOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskDistributionOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewCallable(const DescribeDSPAAssessmentRiskDistributionOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskDistributionOverviewOutcome>>();
    DescribeDSPAAssessmentRiskDistributionOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskDistributionOverviewRequest&,
        DescribeDSPAAssessmentRiskDistributionOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskItemTop5Outcome DsgcClient::DescribeDSPAAssessmentRiskItemTop5(const DescribeDSPAAssessmentRiskItemTop5Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskItemTop5");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskItemTop5Response rsp = DescribeDSPAAssessmentRiskItemTop5Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskItemTop5Outcome(rsp);
        else
            return DescribeDSPAAssessmentRiskItemTop5Outcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskItemTop5Outcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskItemTop5Async(const DescribeDSPAAssessmentRiskItemTop5Request& request, const DescribeDSPAAssessmentRiskItemTop5AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskItemTop5Request&;
    using Resp = DescribeDSPAAssessmentRiskItemTop5Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskItemTop5", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskItemTop5OutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskItemTop5Callable(const DescribeDSPAAssessmentRiskItemTop5Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskItemTop5Outcome>>();
    DescribeDSPAAssessmentRiskItemTop5Async(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskItemTop5Request&,
        DescribeDSPAAssessmentRiskItemTop5Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskLevelDetailOutcome DsgcClient::DescribeDSPAAssessmentRiskLevelDetail(const DescribeDSPAAssessmentRiskLevelDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskLevelDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskLevelDetailResponse rsp = DescribeDSPAAssessmentRiskLevelDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskLevelDetailOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskLevelDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskLevelDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskLevelDetailAsync(const DescribeDSPAAssessmentRiskLevelDetailRequest& request, const DescribeDSPAAssessmentRiskLevelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskLevelDetailRequest&;
    using Resp = DescribeDSPAAssessmentRiskLevelDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskLevelDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskLevelDetailOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelDetailCallable(const DescribeDSPAAssessmentRiskLevelDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskLevelDetailOutcome>>();
    DescribeDSPAAssessmentRiskLevelDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskLevelDetailRequest&,
        DescribeDSPAAssessmentRiskLevelDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskLevelListOutcome DsgcClient::DescribeDSPAAssessmentRiskLevelList(const DescribeDSPAAssessmentRiskLevelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskLevelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskLevelListResponse rsp = DescribeDSPAAssessmentRiskLevelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskLevelListOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskLevelListOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskLevelListOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskLevelListAsync(const DescribeDSPAAssessmentRiskLevelListRequest& request, const DescribeDSPAAssessmentRiskLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskLevelListRequest&;
    using Resp = DescribeDSPAAssessmentRiskLevelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskLevelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskLevelListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelListCallable(const DescribeDSPAAssessmentRiskLevelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskLevelListOutcome>>();
    DescribeDSPAAssessmentRiskLevelListAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskLevelListRequest&,
        DescribeDSPAAssessmentRiskLevelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskLevelTrendOutcome DsgcClient::DescribeDSPAAssessmentRiskLevelTrend(const DescribeDSPAAssessmentRiskLevelTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskLevelTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskLevelTrendResponse rsp = DescribeDSPAAssessmentRiskLevelTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskLevelTrendOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskLevelTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskLevelTrendOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskLevelTrendAsync(const DescribeDSPAAssessmentRiskLevelTrendRequest& request, const DescribeDSPAAssessmentRiskLevelTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskLevelTrendRequest&;
    using Resp = DescribeDSPAAssessmentRiskLevelTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskLevelTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskLevelTrendOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelTrendCallable(const DescribeDSPAAssessmentRiskLevelTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskLevelTrendOutcome>>();
    DescribeDSPAAssessmentRiskLevelTrendAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskLevelTrendRequest&,
        DescribeDSPAAssessmentRiskLevelTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskOverviewOutcome DsgcClient::DescribeDSPAAssessmentRiskOverview(const DescribeDSPAAssessmentRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskOverviewResponse rsp = DescribeDSPAAssessmentRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskOverviewOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskOverviewOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskOverviewAsync(const DescribeDSPAAssessmentRiskOverviewRequest& request, const DescribeDSPAAssessmentRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskOverviewRequest&;
    using Resp = DescribeDSPAAssessmentRiskOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskOverviewCallable(const DescribeDSPAAssessmentRiskOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskOverviewOutcome>>();
    DescribeDSPAAssessmentRiskOverviewAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskOverviewRequest&,
        DescribeDSPAAssessmentRiskOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryOutcome DsgcClient::DescribeDSPAAssessmentRiskProcessHistory(const DescribeDSPAAssessmentRiskProcessHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskProcessHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskProcessHistoryResponse rsp = DescribeDSPAAssessmentRiskProcessHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskProcessHistoryOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskProcessHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskProcessHistoryOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryAsync(const DescribeDSPAAssessmentRiskProcessHistoryRequest& request, const DescribeDSPAAssessmentRiskProcessHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskProcessHistoryRequest&;
    using Resp = DescribeDSPAAssessmentRiskProcessHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskProcessHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryCallable(const DescribeDSPAAssessmentRiskProcessHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskProcessHistoryOutcome>>();
    DescribeDSPAAssessmentRiskProcessHistoryAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskProcessHistoryRequest&,
        DescribeDSPAAssessmentRiskProcessHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskSideDistributedOutcome DsgcClient::DescribeDSPAAssessmentRiskSideDistributed(const DescribeDSPAAssessmentRiskSideDistributedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskSideDistributed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskSideDistributedResponse rsp = DescribeDSPAAssessmentRiskSideDistributedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskSideDistributedOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskSideDistributedOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskSideDistributedOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskSideDistributedAsync(const DescribeDSPAAssessmentRiskSideDistributedRequest& request, const DescribeDSPAAssessmentRiskSideDistributedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskSideDistributedRequest&;
    using Resp = DescribeDSPAAssessmentRiskSideDistributedResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskSideDistributed", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskSideDistributedOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskSideDistributedCallable(const DescribeDSPAAssessmentRiskSideDistributedRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskSideDistributedOutcome>>();
    DescribeDSPAAssessmentRiskSideDistributedAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskSideDistributedRequest&,
        DescribeDSPAAssessmentRiskSideDistributedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskSideListOutcome DsgcClient::DescribeDSPAAssessmentRiskSideList(const DescribeDSPAAssessmentRiskSideListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskSideList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskSideListResponse rsp = DescribeDSPAAssessmentRiskSideListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskSideListOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskSideListOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskSideListOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskSideListAsync(const DescribeDSPAAssessmentRiskSideListRequest& request, const DescribeDSPAAssessmentRiskSideListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskSideListRequest&;
    using Resp = DescribeDSPAAssessmentRiskSideListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskSideList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskSideListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskSideListCallable(const DescribeDSPAAssessmentRiskSideListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskSideListOutcome>>();
    DescribeDSPAAssessmentRiskSideListAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskSideListRequest&,
        DescribeDSPAAssessmentRiskSideListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailOutcome DsgcClient::DescribeDSPAAssessmentRiskTemplateDetail(const DescribeDSPAAssessmentRiskTemplateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskTemplateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskTemplateDetailResponse rsp = DescribeDSPAAssessmentRiskTemplateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskTemplateDetailOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskTemplateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskTemplateDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailAsync(const DescribeDSPAAssessmentRiskTemplateDetailRequest& request, const DescribeDSPAAssessmentRiskTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskTemplateDetailRequest&;
    using Resp = DescribeDSPAAssessmentRiskTemplateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskTemplateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailCallable(const DescribeDSPAAssessmentRiskTemplateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskTemplateDetailOutcome>>();
    DescribeDSPAAssessmentRiskTemplateDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskTemplateDetailRequest&,
        DescribeDSPAAssessmentRiskTemplateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableList(const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRiskTemplateVulnerableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRiskTemplateVulnerableListResponse rsp = DescribeDSPAAssessmentRiskTemplateVulnerableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome(rsp);
        else
            return DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListAsync(const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest& request, const DescribeDSPAAssessmentRiskTemplateVulnerableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest&;
    using Resp = DescribeDSPAAssessmentRiskTemplateVulnerableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRiskTemplateVulnerableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListCallable(const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome>>();
    DescribeDSPAAssessmentRiskTemplateVulnerableListAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest&,
        DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentRisksOutcome DsgcClient::DescribeDSPAAssessmentRisks(const DescribeDSPAAssessmentRisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentRisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentRisksResponse rsp = DescribeDSPAAssessmentRisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentRisksOutcome(rsp);
        else
            return DescribeDSPAAssessmentRisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentRisksOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentRisksAsync(const DescribeDSPAAssessmentRisksRequest& request, const DescribeDSPAAssessmentRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentRisksRequest&;
    using Resp = DescribeDSPAAssessmentRisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentRisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentRisksOutcomeCallable DsgcClient::DescribeDSPAAssessmentRisksCallable(const DescribeDSPAAssessmentRisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentRisksOutcome>>();
    DescribeDSPAAssessmentRisksAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentRisksRequest&,
        DescribeDSPAAssessmentRisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentTasksOutcome DsgcClient::DescribeDSPAAssessmentTasks(const DescribeDSPAAssessmentTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentTasksResponse rsp = DescribeDSPAAssessmentTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentTasksOutcome(rsp);
        else
            return DescribeDSPAAssessmentTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentTasksOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentTasksAsync(const DescribeDSPAAssessmentTasksRequest& request, const DescribeDSPAAssessmentTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentTasksRequest&;
    using Resp = DescribeDSPAAssessmentTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentTasksOutcomeCallable DsgcClient::DescribeDSPAAssessmentTasksCallable(const DescribeDSPAAssessmentTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentTasksOutcome>>();
    DescribeDSPAAssessmentTasksAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentTasksRequest&,
        DescribeDSPAAssessmentTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentTemplateControlItemsOutcome DsgcClient::DescribeDSPAAssessmentTemplateControlItems(const DescribeDSPAAssessmentTemplateControlItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentTemplateControlItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentTemplateControlItemsResponse rsp = DescribeDSPAAssessmentTemplateControlItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentTemplateControlItemsOutcome(rsp);
        else
            return DescribeDSPAAssessmentTemplateControlItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentTemplateControlItemsOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentTemplateControlItemsAsync(const DescribeDSPAAssessmentTemplateControlItemsRequest& request, const DescribeDSPAAssessmentTemplateControlItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentTemplateControlItemsRequest&;
    using Resp = DescribeDSPAAssessmentTemplateControlItemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentTemplateControlItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentTemplateControlItemsOutcomeCallable DsgcClient::DescribeDSPAAssessmentTemplateControlItemsCallable(const DescribeDSPAAssessmentTemplateControlItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentTemplateControlItemsOutcome>>();
    DescribeDSPAAssessmentTemplateControlItemsAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentTemplateControlItemsRequest&,
        DescribeDSPAAssessmentTemplateControlItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAAssessmentTemplatesOutcome DsgcClient::DescribeDSPAAssessmentTemplates(const DescribeDSPAAssessmentTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAAssessmentTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAAssessmentTemplatesResponse rsp = DescribeDSPAAssessmentTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAAssessmentTemplatesOutcome(rsp);
        else
            return DescribeDSPAAssessmentTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAAssessmentTemplatesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAAssessmentTemplatesAsync(const DescribeDSPAAssessmentTemplatesRequest& request, const DescribeDSPAAssessmentTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAAssessmentTemplatesRequest&;
    using Resp = DescribeDSPAAssessmentTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAAssessmentTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAAssessmentTemplatesOutcomeCallable DsgcClient::DescribeDSPAAssessmentTemplatesCallable(const DescribeDSPAAssessmentTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAAssessmentTemplatesOutcome>>();
    DescribeDSPAAssessmentTemplatesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAAssessmentTemplatesRequest&,
        DescribeDSPAAssessmentTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDataAssetBucketsOutcome DsgcClient::DescribeDSPACOSDataAssetBuckets(const DescribeDSPACOSDataAssetBucketsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDataAssetBuckets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDataAssetBucketsResponse rsp = DescribeDSPACOSDataAssetBucketsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDataAssetBucketsOutcome(rsp);
        else
            return DescribeDSPACOSDataAssetBucketsOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDataAssetBucketsOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDataAssetBucketsAsync(const DescribeDSPACOSDataAssetBucketsRequest& request, const DescribeDSPACOSDataAssetBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDataAssetBucketsRequest&;
    using Resp = DescribeDSPACOSDataAssetBucketsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDataAssetBuckets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDataAssetBucketsOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetBucketsCallable(const DescribeDSPACOSDataAssetBucketsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDataAssetBucketsOutcome>>();
    DescribeDSPACOSDataAssetBucketsAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDataAssetBucketsRequest&,
        DescribeDSPACOSDataAssetBucketsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDataAssetByComplianceIdOutcome DsgcClient::DescribeDSPACOSDataAssetByComplianceId(const DescribeDSPACOSDataAssetByComplianceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDataAssetByComplianceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDataAssetByComplianceIdResponse rsp = DescribeDSPACOSDataAssetByComplianceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDataAssetByComplianceIdOutcome(rsp);
        else
            return DescribeDSPACOSDataAssetByComplianceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDataAssetByComplianceIdOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDataAssetByComplianceIdAsync(const DescribeDSPACOSDataAssetByComplianceIdRequest& request, const DescribeDSPACOSDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDataAssetByComplianceIdRequest&;
    using Resp = DescribeDSPACOSDataAssetByComplianceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDataAssetByComplianceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetByComplianceIdCallable(const DescribeDSPACOSDataAssetByComplianceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDataAssetByComplianceIdOutcome>>();
    DescribeDSPACOSDataAssetByComplianceIdAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDataAssetByComplianceIdRequest&,
        DescribeDSPACOSDataAssetByComplianceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDataAssetDetailOutcome DsgcClient::DescribeDSPACOSDataAssetDetail(const DescribeDSPACOSDataAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDataAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDataAssetDetailResponse rsp = DescribeDSPACOSDataAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDataAssetDetailOutcome(rsp);
        else
            return DescribeDSPACOSDataAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDataAssetDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDataAssetDetailAsync(const DescribeDSPACOSDataAssetDetailRequest& request, const DescribeDSPACOSDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDataAssetDetailRequest&;
    using Resp = DescribeDSPACOSDataAssetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDataAssetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetDetailCallable(const DescribeDSPACOSDataAssetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDataAssetDetailOutcome>>();
    DescribeDSPACOSDataAssetDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDataAssetDetailRequest&,
        DescribeDSPACOSDataAssetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDiscoveryTaskDetailOutcome DsgcClient::DescribeDSPACOSDiscoveryTaskDetail(const DescribeDSPACOSDiscoveryTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDiscoveryTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDiscoveryTaskDetailResponse rsp = DescribeDSPACOSDiscoveryTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDiscoveryTaskDetailOutcome(rsp);
        else
            return DescribeDSPACOSDiscoveryTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDiscoveryTaskDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDiscoveryTaskDetailAsync(const DescribeDSPACOSDiscoveryTaskDetailRequest& request, const DescribeDSPACOSDiscoveryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDiscoveryTaskDetailRequest&;
    using Resp = DescribeDSPACOSDiscoveryTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDiscoveryTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDiscoveryTaskDetailOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskDetailCallable(const DescribeDSPACOSDiscoveryTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDiscoveryTaskDetailOutcome>>();
    DescribeDSPACOSDiscoveryTaskDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDiscoveryTaskDetailRequest&,
        DescribeDSPACOSDiscoveryTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDiscoveryTaskFilesOutcome DsgcClient::DescribeDSPACOSDiscoveryTaskFiles(const DescribeDSPACOSDiscoveryTaskFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDiscoveryTaskFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDiscoveryTaskFilesResponse rsp = DescribeDSPACOSDiscoveryTaskFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDiscoveryTaskFilesOutcome(rsp);
        else
            return DescribeDSPACOSDiscoveryTaskFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDiscoveryTaskFilesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDiscoveryTaskFilesAsync(const DescribeDSPACOSDiscoveryTaskFilesRequest& request, const DescribeDSPACOSDiscoveryTaskFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDiscoveryTaskFilesRequest&;
    using Resp = DescribeDSPACOSDiscoveryTaskFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDiscoveryTaskFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDiscoveryTaskFilesOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskFilesCallable(const DescribeDSPACOSDiscoveryTaskFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDiscoveryTaskFilesOutcome>>();
    DescribeDSPACOSDiscoveryTaskFilesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDiscoveryTaskFilesRequest&,
        DescribeDSPACOSDiscoveryTaskFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDiscoveryTaskResultOutcome DsgcClient::DescribeDSPACOSDiscoveryTaskResult(const DescribeDSPACOSDiscoveryTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDiscoveryTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDiscoveryTaskResultResponse rsp = DescribeDSPACOSDiscoveryTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDiscoveryTaskResultOutcome(rsp);
        else
            return DescribeDSPACOSDiscoveryTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDiscoveryTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDiscoveryTaskResultAsync(const DescribeDSPACOSDiscoveryTaskResultRequest& request, const DescribeDSPACOSDiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDiscoveryTaskResultRequest&;
    using Resp = DescribeDSPACOSDiscoveryTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDiscoveryTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDiscoveryTaskResultOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskResultCallable(const DescribeDSPACOSDiscoveryTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDiscoveryTaskResultOutcome>>();
    DescribeDSPACOSDiscoveryTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDiscoveryTaskResultRequest&,
        DescribeDSPACOSDiscoveryTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSDiscoveryTasksOutcome DsgcClient::DescribeDSPACOSDiscoveryTasks(const DescribeDSPACOSDiscoveryTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSDiscoveryTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSDiscoveryTasksResponse rsp = DescribeDSPACOSDiscoveryTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSDiscoveryTasksOutcome(rsp);
        else
            return DescribeDSPACOSDiscoveryTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSDiscoveryTasksOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSDiscoveryTasksAsync(const DescribeDSPACOSDiscoveryTasksRequest& request, const DescribeDSPACOSDiscoveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSDiscoveryTasksRequest&;
    using Resp = DescribeDSPACOSDiscoveryTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSDiscoveryTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSDiscoveryTasksOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTasksCallable(const DescribeDSPACOSDiscoveryTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSDiscoveryTasksOutcome>>();
    DescribeDSPACOSDiscoveryTasksAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSDiscoveryTasksRequest&,
        DescribeDSPACOSDiscoveryTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACOSTaskResultDetailOutcome DsgcClient::DescribeDSPACOSTaskResultDetail(const DescribeDSPACOSTaskResultDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACOSTaskResultDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACOSTaskResultDetailResponse rsp = DescribeDSPACOSTaskResultDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACOSTaskResultDetailOutcome(rsp);
        else
            return DescribeDSPACOSTaskResultDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACOSTaskResultDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACOSTaskResultDetailAsync(const DescribeDSPACOSTaskResultDetailRequest& request, const DescribeDSPACOSTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACOSTaskResultDetailRequest&;
    using Resp = DescribeDSPACOSTaskResultDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACOSTaskResultDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACOSTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPACOSTaskResultDetailCallable(const DescribeDSPACOSTaskResultDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACOSTaskResultDetailOutcome>>();
    DescribeDSPACOSTaskResultDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACOSTaskResultDetailRequest&,
        DescribeDSPACOSTaskResultDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACategoriesOutcome DsgcClient::DescribeDSPACategories(const DescribeDSPACategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACategoriesResponse rsp = DescribeDSPACategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACategoriesOutcome(rsp);
        else
            return DescribeDSPACategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACategoriesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACategoriesAsync(const DescribeDSPACategoriesRequest& request, const DescribeDSPACategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACategoriesRequest&;
    using Resp = DescribeDSPACategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACategoriesOutcomeCallable DsgcClient::DescribeDSPACategoriesCallable(const DescribeDSPACategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACategoriesOutcome>>();
    DescribeDSPACategoriesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACategoriesRequest&,
        DescribeDSPACategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACategoryRuleStatisticOutcome DsgcClient::DescribeDSPACategoryRuleStatistic(const DescribeDSPACategoryRuleStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACategoryRuleStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACategoryRuleStatisticResponse rsp = DescribeDSPACategoryRuleStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACategoryRuleStatisticOutcome(rsp);
        else
            return DescribeDSPACategoryRuleStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACategoryRuleStatisticOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACategoryRuleStatisticAsync(const DescribeDSPACategoryRuleStatisticRequest& request, const DescribeDSPACategoryRuleStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACategoryRuleStatisticRequest&;
    using Resp = DescribeDSPACategoryRuleStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACategoryRuleStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACategoryRuleStatisticOutcomeCallable DsgcClient::DescribeDSPACategoryRuleStatisticCallable(const DescribeDSPACategoryRuleStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACategoryRuleStatisticOutcome>>();
    DescribeDSPACategoryRuleStatisticAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACategoryRuleStatisticRequest&,
        DescribeDSPACategoryRuleStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACategoryRulesOutcome DsgcClient::DescribeDSPACategoryRules(const DescribeDSPACategoryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACategoryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACategoryRulesResponse rsp = DescribeDSPACategoryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACategoryRulesOutcome(rsp);
        else
            return DescribeDSPACategoryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACategoryRulesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACategoryRulesAsync(const DescribeDSPACategoryRulesRequest& request, const DescribeDSPACategoryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACategoryRulesRequest&;
    using Resp = DescribeDSPACategoryRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACategoryRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACategoryRulesOutcomeCallable DsgcClient::DescribeDSPACategoryRulesCallable(const DescribeDSPACategoryRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACategoryRulesOutcome>>();
    DescribeDSPACategoryRulesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACategoryRulesRequest&,
        DescribeDSPACategoryRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACategoryTreeOutcome DsgcClient::DescribeDSPACategoryTree(const DescribeDSPACategoryTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACategoryTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACategoryTreeResponse rsp = DescribeDSPACategoryTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACategoryTreeOutcome(rsp);
        else
            return DescribeDSPACategoryTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACategoryTreeOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACategoryTreeAsync(const DescribeDSPACategoryTreeRequest& request, const DescribeDSPACategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACategoryTreeRequest&;
    using Resp = DescribeDSPACategoryTreeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACategoryTree", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACategoryTreeOutcomeCallable DsgcClient::DescribeDSPACategoryTreeCallable(const DescribeDSPACategoryTreeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACategoryTreeOutcome>>();
    DescribeDSPACategoryTreeAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACategoryTreeRequest&,
        DescribeDSPACategoryTreeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPACategoryTreeWithRulesOutcome DsgcClient::DescribeDSPACategoryTreeWithRules(const DescribeDSPACategoryTreeWithRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPACategoryTreeWithRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPACategoryTreeWithRulesResponse rsp = DescribeDSPACategoryTreeWithRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPACategoryTreeWithRulesOutcome(rsp);
        else
            return DescribeDSPACategoryTreeWithRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPACategoryTreeWithRulesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPACategoryTreeWithRulesAsync(const DescribeDSPACategoryTreeWithRulesRequest& request, const DescribeDSPACategoryTreeWithRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPACategoryTreeWithRulesRequest&;
    using Resp = DescribeDSPACategoryTreeWithRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPACategoryTreeWithRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPACategoryTreeWithRulesOutcomeCallable DsgcClient::DescribeDSPACategoryTreeWithRulesCallable(const DescribeDSPACategoryTreeWithRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPACategoryTreeWithRulesOutcome>>();
    DescribeDSPACategoryTreeWithRulesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPACategoryTreeWithRulesRequest&,
        DescribeDSPACategoryTreeWithRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAComplianceGroupDetailOutcome DsgcClient::DescribeDSPAComplianceGroupDetail(const DescribeDSPAComplianceGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAComplianceGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAComplianceGroupDetailResponse rsp = DescribeDSPAComplianceGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAComplianceGroupDetailOutcome(rsp);
        else
            return DescribeDSPAComplianceGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAComplianceGroupDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAComplianceGroupDetailAsync(const DescribeDSPAComplianceGroupDetailRequest& request, const DescribeDSPAComplianceGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAComplianceGroupDetailRequest&;
    using Resp = DescribeDSPAComplianceGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAComplianceGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAComplianceGroupDetailOutcomeCallable DsgcClient::DescribeDSPAComplianceGroupDetailCallable(const DescribeDSPAComplianceGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAComplianceGroupDetailOutcome>>();
    DescribeDSPAComplianceGroupDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAComplianceGroupDetailRequest&,
        DescribeDSPAComplianceGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAComplianceGroupsOutcome DsgcClient::DescribeDSPAComplianceGroups(const DescribeDSPAComplianceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAComplianceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAComplianceGroupsResponse rsp = DescribeDSPAComplianceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAComplianceGroupsOutcome(rsp);
        else
            return DescribeDSPAComplianceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAComplianceGroupsOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAComplianceGroupsAsync(const DescribeDSPAComplianceGroupsRequest& request, const DescribeDSPAComplianceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAComplianceGroupsRequest&;
    using Resp = DescribeDSPAComplianceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAComplianceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAComplianceGroupsOutcomeCallable DsgcClient::DescribeDSPAComplianceGroupsCallable(const DescribeDSPAComplianceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAComplianceGroupsOutcome>>();
    DescribeDSPAComplianceGroupsAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAComplianceGroupsRequest&,
        DescribeDSPAComplianceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAComplianceUpdateNotificationOutcome DsgcClient::DescribeDSPAComplianceUpdateNotification(const DescribeDSPAComplianceUpdateNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAComplianceUpdateNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAComplianceUpdateNotificationResponse rsp = DescribeDSPAComplianceUpdateNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAComplianceUpdateNotificationOutcome(rsp);
        else
            return DescribeDSPAComplianceUpdateNotificationOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAComplianceUpdateNotificationOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAComplianceUpdateNotificationAsync(const DescribeDSPAComplianceUpdateNotificationRequest& request, const DescribeDSPAComplianceUpdateNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAComplianceUpdateNotificationRequest&;
    using Resp = DescribeDSPAComplianceUpdateNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAComplianceUpdateNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAComplianceUpdateNotificationOutcomeCallable DsgcClient::DescribeDSPAComplianceUpdateNotificationCallable(const DescribeDSPAComplianceUpdateNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAComplianceUpdateNotificationOutcome>>();
    DescribeDSPAComplianceUpdateNotificationAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAComplianceUpdateNotificationRequest&,
        DescribeDSPAComplianceUpdateNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADataSourceDbInfoOutcome DsgcClient::DescribeDSPADataSourceDbInfo(const DescribeDSPADataSourceDbInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADataSourceDbInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADataSourceDbInfoResponse rsp = DescribeDSPADataSourceDbInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADataSourceDbInfoOutcome(rsp);
        else
            return DescribeDSPADataSourceDbInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADataSourceDbInfoOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADataSourceDbInfoAsync(const DescribeDSPADataSourceDbInfoRequest& request, const DescribeDSPADataSourceDbInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADataSourceDbInfoRequest&;
    using Resp = DescribeDSPADataSourceDbInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADataSourceDbInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADataSourceDbInfoOutcomeCallable DsgcClient::DescribeDSPADataSourceDbInfoCallable(const DescribeDSPADataSourceDbInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADataSourceDbInfoOutcome>>();
    DescribeDSPADataSourceDbInfoAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADataSourceDbInfoRequest&,
        DescribeDSPADataSourceDbInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryRulesOutcome DsgcClient::DescribeDSPADiscoveryRules(const DescribeDSPADiscoveryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryRulesResponse rsp = DescribeDSPADiscoveryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryRulesOutcome(rsp);
        else
            return DescribeDSPADiscoveryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryRulesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryRulesAsync(const DescribeDSPADiscoveryRulesRequest& request, const DescribeDSPADiscoveryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryRulesRequest&;
    using Resp = DescribeDSPADiscoveryRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryRulesOutcomeCallable DsgcClient::DescribeDSPADiscoveryRulesCallable(const DescribeDSPADiscoveryRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryRulesOutcome>>();
    DescribeDSPADiscoveryRulesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryRulesRequest&,
        DescribeDSPADiscoveryRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryServiceStatusOutcome DsgcClient::DescribeDSPADiscoveryServiceStatus(const DescribeDSPADiscoveryServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryServiceStatusResponse rsp = DescribeDSPADiscoveryServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryServiceStatusOutcome(rsp);
        else
            return DescribeDSPADiscoveryServiceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryServiceStatusOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryServiceStatusAsync(const DescribeDSPADiscoveryServiceStatusRequest& request, const DescribeDSPADiscoveryServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryServiceStatusRequest&;
    using Resp = DescribeDSPADiscoveryServiceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryServiceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryServiceStatusOutcomeCallable DsgcClient::DescribeDSPADiscoveryServiceStatusCallable(const DescribeDSPADiscoveryServiceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryServiceStatusOutcome>>();
    DescribeDSPADiscoveryServiceStatusAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryServiceStatusRequest&,
        DescribeDSPADiscoveryServiceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryTaskDetailOutcome DsgcClient::DescribeDSPADiscoveryTaskDetail(const DescribeDSPADiscoveryTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryTaskDetailResponse rsp = DescribeDSPADiscoveryTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryTaskDetailOutcome(rsp);
        else
            return DescribeDSPADiscoveryTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryTaskDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryTaskDetailAsync(const DescribeDSPADiscoveryTaskDetailRequest& request, const DescribeDSPADiscoveryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryTaskDetailRequest&;
    using Resp = DescribeDSPADiscoveryTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryTaskDetailOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskDetailCallable(const DescribeDSPADiscoveryTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryTaskDetailOutcome>>();
    DescribeDSPADiscoveryTaskDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryTaskDetailRequest&,
        DescribeDSPADiscoveryTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryTaskResultOutcome DsgcClient::DescribeDSPADiscoveryTaskResult(const DescribeDSPADiscoveryTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryTaskResultResponse rsp = DescribeDSPADiscoveryTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryTaskResultOutcome(rsp);
        else
            return DescribeDSPADiscoveryTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryTaskResultAsync(const DescribeDSPADiscoveryTaskResultRequest& request, const DescribeDSPADiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryTaskResultRequest&;
    using Resp = DescribeDSPADiscoveryTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryTaskResultOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskResultCallable(const DescribeDSPADiscoveryTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryTaskResultOutcome>>();
    DescribeDSPADiscoveryTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryTaskResultRequest&,
        DescribeDSPADiscoveryTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryTaskResultDetailOutcome DsgcClient::DescribeDSPADiscoveryTaskResultDetail(const DescribeDSPADiscoveryTaskResultDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryTaskResultDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryTaskResultDetailResponse rsp = DescribeDSPADiscoveryTaskResultDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryTaskResultDetailOutcome(rsp);
        else
            return DescribeDSPADiscoveryTaskResultDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryTaskResultDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryTaskResultDetailAsync(const DescribeDSPADiscoveryTaskResultDetailRequest& request, const DescribeDSPADiscoveryTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryTaskResultDetailRequest&;
    using Resp = DescribeDSPADiscoveryTaskResultDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryTaskResultDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskResultDetailCallable(const DescribeDSPADiscoveryTaskResultDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryTaskResultDetailOutcome>>();
    DescribeDSPADiscoveryTaskResultDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryTaskResultDetailRequest&,
        DescribeDSPADiscoveryTaskResultDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryTaskTablesOutcome DsgcClient::DescribeDSPADiscoveryTaskTables(const DescribeDSPADiscoveryTaskTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryTaskTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryTaskTablesResponse rsp = DescribeDSPADiscoveryTaskTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryTaskTablesOutcome(rsp);
        else
            return DescribeDSPADiscoveryTaskTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryTaskTablesOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryTaskTablesAsync(const DescribeDSPADiscoveryTaskTablesRequest& request, const DescribeDSPADiscoveryTaskTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryTaskTablesRequest&;
    using Resp = DescribeDSPADiscoveryTaskTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryTaskTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryTaskTablesOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskTablesCallable(const DescribeDSPADiscoveryTaskTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryTaskTablesOutcome>>();
    DescribeDSPADiscoveryTaskTablesAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryTaskTablesRequest&,
        DescribeDSPADiscoveryTaskTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPADiscoveryTasksOutcome DsgcClient::DescribeDSPADiscoveryTasks(const DescribeDSPADiscoveryTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPADiscoveryTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPADiscoveryTasksResponse rsp = DescribeDSPADiscoveryTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPADiscoveryTasksOutcome(rsp);
        else
            return DescribeDSPADiscoveryTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPADiscoveryTasksOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPADiscoveryTasksAsync(const DescribeDSPADiscoveryTasksRequest& request, const DescribeDSPADiscoveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPADiscoveryTasksRequest&;
    using Resp = DescribeDSPADiscoveryTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPADiscoveryTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPADiscoveryTasksOutcomeCallable DsgcClient::DescribeDSPADiscoveryTasksCallable(const DescribeDSPADiscoveryTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPADiscoveryTasksOutcome>>();
    DescribeDSPADiscoveryTasksAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPADiscoveryTasksRequest&,
        DescribeDSPADiscoveryTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAESDataAssetByComplianceIdOutcome DsgcClient::DescribeDSPAESDataAssetByComplianceId(const DescribeDSPAESDataAssetByComplianceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAESDataAssetByComplianceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAESDataAssetByComplianceIdResponse rsp = DescribeDSPAESDataAssetByComplianceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAESDataAssetByComplianceIdOutcome(rsp);
        else
            return DescribeDSPAESDataAssetByComplianceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAESDataAssetByComplianceIdOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAESDataAssetByComplianceIdAsync(const DescribeDSPAESDataAssetByComplianceIdRequest& request, const DescribeDSPAESDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAESDataAssetByComplianceIdRequest&;
    using Resp = DescribeDSPAESDataAssetByComplianceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAESDataAssetByComplianceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAESDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPAESDataAssetByComplianceIdCallable(const DescribeDSPAESDataAssetByComplianceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAESDataAssetByComplianceIdOutcome>>();
    DescribeDSPAESDataAssetByComplianceIdAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAESDataAssetByComplianceIdRequest&,
        DescribeDSPAESDataAssetByComplianceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAESDataAssetDetailOutcome DsgcClient::DescribeDSPAESDataAssetDetail(const DescribeDSPAESDataAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAESDataAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAESDataAssetDetailResponse rsp = DescribeDSPAESDataAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAESDataAssetDetailOutcome(rsp);
        else
            return DescribeDSPAESDataAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAESDataAssetDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAESDataAssetDetailAsync(const DescribeDSPAESDataAssetDetailRequest& request, const DescribeDSPAESDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAESDataAssetDetailRequest&;
    using Resp = DescribeDSPAESDataAssetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAESDataAssetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAESDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPAESDataAssetDetailCallable(const DescribeDSPAESDataAssetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAESDataAssetDetailOutcome>>();
    DescribeDSPAESDataAssetDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAESDataAssetDetailRequest&,
        DescribeDSPAESDataAssetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAESDataSampleOutcome DsgcClient::DescribeDSPAESDataSample(const DescribeDSPAESDataSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAESDataSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAESDataSampleResponse rsp = DescribeDSPAESDataSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAESDataSampleOutcome(rsp);
        else
            return DescribeDSPAESDataSampleOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAESDataSampleOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAESDataSampleAsync(const DescribeDSPAESDataSampleRequest& request, const DescribeDSPAESDataSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAESDataSampleRequest&;
    using Resp = DescribeDSPAESDataSampleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAESDataSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAESDataSampleOutcomeCallable DsgcClient::DescribeDSPAESDataSampleCallable(const DescribeDSPAESDataSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAESDataSampleOutcome>>();
    DescribeDSPAESDataSampleAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAESDataSampleRequest&,
        DescribeDSPAESDataSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailOutcome DsgcClient::DescribeDSPAESDiscoveryTaskResultDetail(const DescribeDSPAESDiscoveryTaskResultDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPAESDiscoveryTaskResultDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPAESDiscoveryTaskResultDetailResponse rsp = DescribeDSPAESDiscoveryTaskResultDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPAESDiscoveryTaskResultDetailOutcome(rsp);
        else
            return DescribeDSPAESDiscoveryTaskResultDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPAESDiscoveryTaskResultDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailAsync(const DescribeDSPAESDiscoveryTaskResultDetailRequest& request, const DescribeDSPAESDiscoveryTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPAESDiscoveryTaskResultDetailRequest&;
    using Resp = DescribeDSPAESDiscoveryTaskResultDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPAESDiscoveryTaskResultDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailCallable(const DescribeDSPAESDiscoveryTaskResultDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPAESDiscoveryTaskResultDetailOutcome>>();
    DescribeDSPAESDiscoveryTaskResultDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPAESDiscoveryTaskResultDetailRequest&,
        DescribeDSPAESDiscoveryTaskResultDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPALevelDetailOutcome DsgcClient::DescribeDSPALevelDetail(const DescribeDSPALevelDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPALevelDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPALevelDetailResponse rsp = DescribeDSPALevelDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPALevelDetailOutcome(rsp);
        else
            return DescribeDSPALevelDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPALevelDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPALevelDetailAsync(const DescribeDSPALevelDetailRequest& request, const DescribeDSPALevelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPALevelDetailRequest&;
    using Resp = DescribeDSPALevelDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPALevelDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPALevelDetailOutcomeCallable DsgcClient::DescribeDSPALevelDetailCallable(const DescribeDSPALevelDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPALevelDetailOutcome>>();
    DescribeDSPALevelDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPALevelDetailRequest&,
        DescribeDSPALevelDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPALevelGroupsOutcome DsgcClient::DescribeDSPALevelGroups(const DescribeDSPALevelGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPALevelGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPALevelGroupsResponse rsp = DescribeDSPALevelGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPALevelGroupsOutcome(rsp);
        else
            return DescribeDSPALevelGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPALevelGroupsOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPALevelGroupsAsync(const DescribeDSPALevelGroupsRequest& request, const DescribeDSPALevelGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPALevelGroupsRequest&;
    using Resp = DescribeDSPALevelGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPALevelGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPALevelGroupsOutcomeCallable DsgcClient::DescribeDSPALevelGroupsCallable(const DescribeDSPALevelGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPALevelGroupsOutcome>>();
    DescribeDSPALevelGroupsAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPALevelGroupsRequest&,
        DescribeDSPALevelGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPARDBDataAssetByComplianceIdOutcome DsgcClient::DescribeDSPARDBDataAssetByComplianceId(const DescribeDSPARDBDataAssetByComplianceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPARDBDataAssetByComplianceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPARDBDataAssetByComplianceIdResponse rsp = DescribeDSPARDBDataAssetByComplianceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPARDBDataAssetByComplianceIdOutcome(rsp);
        else
            return DescribeDSPARDBDataAssetByComplianceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPARDBDataAssetByComplianceIdOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPARDBDataAssetByComplianceIdAsync(const DescribeDSPARDBDataAssetByComplianceIdRequest& request, const DescribeDSPARDBDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPARDBDataAssetByComplianceIdRequest&;
    using Resp = DescribeDSPARDBDataAssetByComplianceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPARDBDataAssetByComplianceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPARDBDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPARDBDataAssetByComplianceIdCallable(const DescribeDSPARDBDataAssetByComplianceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPARDBDataAssetByComplianceIdOutcome>>();
    DescribeDSPARDBDataAssetByComplianceIdAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPARDBDataAssetByComplianceIdRequest&,
        DescribeDSPARDBDataAssetByComplianceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPARDBDataAssetDetailOutcome DsgcClient::DescribeDSPARDBDataAssetDetail(const DescribeDSPARDBDataAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPARDBDataAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPARDBDataAssetDetailResponse rsp = DescribeDSPARDBDataAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPARDBDataAssetDetailOutcome(rsp);
        else
            return DescribeDSPARDBDataAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPARDBDataAssetDetailOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPARDBDataAssetDetailAsync(const DescribeDSPARDBDataAssetDetailRequest& request, const DescribeDSPARDBDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPARDBDataAssetDetailRequest&;
    using Resp = DescribeDSPARDBDataAssetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPARDBDataAssetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPARDBDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPARDBDataAssetDetailCallable(const DescribeDSPARDBDataAssetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPARDBDataAssetDetailOutcome>>();
    DescribeDSPARDBDataAssetDetailAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPARDBDataAssetDetailRequest&,
        DescribeDSPARDBDataAssetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPASupportedMetasOutcome DsgcClient::DescribeDSPASupportedMetas(const DescribeDSPASupportedMetasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPASupportedMetas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPASupportedMetasResponse rsp = DescribeDSPASupportedMetasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPASupportedMetasOutcome(rsp);
        else
            return DescribeDSPASupportedMetasOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPASupportedMetasOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPASupportedMetasAsync(const DescribeDSPASupportedMetasRequest& request, const DescribeDSPASupportedMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPASupportedMetasRequest&;
    using Resp = DescribeDSPASupportedMetasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPASupportedMetas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPASupportedMetasOutcomeCallable DsgcClient::DescribeDSPASupportedMetasCallable(const DescribeDSPASupportedMetasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPASupportedMetasOutcome>>();
    DescribeDSPASupportedMetasAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPASupportedMetasRequest&,
        DescribeDSPASupportedMetasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeDSPATaskResultDataSampleOutcome DsgcClient::DescribeDSPATaskResultDataSample(const DescribeDSPATaskResultDataSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDSPATaskResultDataSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDSPATaskResultDataSampleResponse rsp = DescribeDSPATaskResultDataSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDSPATaskResultDataSampleOutcome(rsp);
        else
            return DescribeDSPATaskResultDataSampleOutcome(o.GetError());
    }
    else
    {
        return DescribeDSPATaskResultDataSampleOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeDSPATaskResultDataSampleAsync(const DescribeDSPATaskResultDataSampleRequest& request, const DescribeDSPATaskResultDataSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDSPATaskResultDataSampleRequest&;
    using Resp = DescribeDSPATaskResultDataSampleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDSPATaskResultDataSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeDSPATaskResultDataSampleOutcomeCallable DsgcClient::DescribeDSPATaskResultDataSampleCallable(const DescribeDSPATaskResultDataSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDSPATaskResultDataSampleOutcome>>();
    DescribeDSPATaskResultDataSampleAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeDSPATaskResultDataSampleRequest&,
        DescribeDSPATaskResultDataSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeESAssetSensitiveDistributionOutcome DsgcClient::DescribeESAssetSensitiveDistribution(const DescribeESAssetSensitiveDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESAssetSensitiveDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESAssetSensitiveDistributionResponse rsp = DescribeESAssetSensitiveDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESAssetSensitiveDistributionOutcome(rsp);
        else
            return DescribeESAssetSensitiveDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeESAssetSensitiveDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeESAssetSensitiveDistributionAsync(const DescribeESAssetSensitiveDistributionRequest& request, const DescribeESAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeESAssetSensitiveDistributionRequest&;
    using Resp = DescribeESAssetSensitiveDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeESAssetSensitiveDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeESAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeESAssetSensitiveDistributionCallable(const DescribeESAssetSensitiveDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeESAssetSensitiveDistributionOutcome>>();
    DescribeESAssetSensitiveDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeESAssetSensitiveDistributionRequest&,
        DescribeESAssetSensitiveDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeExportTaskResultOutcome DsgcClient::DescribeExportTaskResult(const DescribeExportTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportTaskResultResponse rsp = DescribeExportTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportTaskResultOutcome(rsp);
        else
            return DescribeExportTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeExportTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeExportTaskResultAsync(const DescribeExportTaskResultRequest& request, const DescribeExportTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportTaskResultRequest&;
    using Resp = DescribeExportTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExportTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeExportTaskResultOutcomeCallable DsgcClient::DescribeExportTaskResultCallable(const DescribeExportTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportTaskResultOutcome>>();
    DescribeExportTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeExportTaskResultRequest&,
        DescribeExportTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeMongoAssetSensitiveDistributionOutcome DsgcClient::DescribeMongoAssetSensitiveDistribution(const DescribeMongoAssetSensitiveDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMongoAssetSensitiveDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMongoAssetSensitiveDistributionResponse rsp = DescribeMongoAssetSensitiveDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMongoAssetSensitiveDistributionOutcome(rsp);
        else
            return DescribeMongoAssetSensitiveDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeMongoAssetSensitiveDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeMongoAssetSensitiveDistributionAsync(const DescribeMongoAssetSensitiveDistributionRequest& request, const DescribeMongoAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMongoAssetSensitiveDistributionRequest&;
    using Resp = DescribeMongoAssetSensitiveDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMongoAssetSensitiveDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeMongoAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeMongoAssetSensitiveDistributionCallable(const DescribeMongoAssetSensitiveDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMongoAssetSensitiveDistributionOutcome>>();
    DescribeMongoAssetSensitiveDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeMongoAssetSensitiveDistributionRequest&,
        DescribeMongoAssetSensitiveDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeRDBAssetSensitiveDistributionOutcome DsgcClient::DescribeRDBAssetSensitiveDistribution(const DescribeRDBAssetSensitiveDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRDBAssetSensitiveDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRDBAssetSensitiveDistributionResponse rsp = DescribeRDBAssetSensitiveDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRDBAssetSensitiveDistributionOutcome(rsp);
        else
            return DescribeRDBAssetSensitiveDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeRDBAssetSensitiveDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeRDBAssetSensitiveDistributionAsync(const DescribeRDBAssetSensitiveDistributionRequest& request, const DescribeRDBAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRDBAssetSensitiveDistributionRequest&;
    using Resp = DescribeRDBAssetSensitiveDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRDBAssetSensitiveDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeRDBAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeRDBAssetSensitiveDistributionCallable(const DescribeRDBAssetSensitiveDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRDBAssetSensitiveDistributionOutcome>>();
    DescribeRDBAssetSensitiveDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeRDBAssetSensitiveDistributionRequest&,
        DescribeRDBAssetSensitiveDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeReportTaskDownloadUrlOutcome DsgcClient::DescribeReportTaskDownloadUrl(const DescribeReportTaskDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTaskDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTaskDownloadUrlResponse rsp = DescribeReportTaskDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTaskDownloadUrlOutcome(rsp);
        else
            return DescribeReportTaskDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTaskDownloadUrlOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeReportTaskDownloadUrlAsync(const DescribeReportTaskDownloadUrlRequest& request, const DescribeReportTaskDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportTaskDownloadUrlRequest&;
    using Resp = DescribeReportTaskDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportTaskDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeReportTaskDownloadUrlOutcomeCallable DsgcClient::DescribeReportTaskDownloadUrlCallable(const DescribeReportTaskDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportTaskDownloadUrlOutcome>>();
    DescribeReportTaskDownloadUrlAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeReportTaskDownloadUrlRequest&,
        DescribeReportTaskDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeReportTasksOutcome DsgcClient::DescribeReportTasks(const DescribeReportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTasksResponse rsp = DescribeReportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTasksOutcome(rsp);
        else
            return DescribeReportTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTasksOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeReportTasksAsync(const DescribeReportTasksRequest& request, const DescribeReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportTasksRequest&;
    using Resp = DescribeReportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeReportTasksOutcomeCallable DsgcClient::DescribeReportTasksCallable(const DescribeReportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportTasksOutcome>>();
    DescribeReportTasksAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeReportTasksRequest&,
        DescribeReportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeSensitiveCOSDataDistributionOutcome DsgcClient::DescribeSensitiveCOSDataDistribution(const DescribeSensitiveCOSDataDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveCOSDataDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveCOSDataDistributionResponse rsp = DescribeSensitiveCOSDataDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveCOSDataDistributionOutcome(rsp);
        else
            return DescribeSensitiveCOSDataDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveCOSDataDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeSensitiveCOSDataDistributionAsync(const DescribeSensitiveCOSDataDistributionRequest& request, const DescribeSensitiveCOSDataDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSensitiveCOSDataDistributionRequest&;
    using Resp = DescribeSensitiveCOSDataDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveCOSDataDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeSensitiveCOSDataDistributionOutcomeCallable DsgcClient::DescribeSensitiveCOSDataDistributionCallable(const DescribeSensitiveCOSDataDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveCOSDataDistributionOutcome>>();
    DescribeSensitiveCOSDataDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeSensitiveCOSDataDistributionRequest&,
        DescribeSensitiveCOSDataDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DescribeSensitiveRDBDataDistributionOutcome DsgcClient::DescribeSensitiveRDBDataDistribution(const DescribeSensitiveRDBDataDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveRDBDataDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveRDBDataDistributionResponse rsp = DescribeSensitiveRDBDataDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveRDBDataDistributionOutcome(rsp);
        else
            return DescribeSensitiveRDBDataDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveRDBDataDistributionOutcome(outcome.GetError());
    }
}

void DsgcClient::DescribeSensitiveRDBDataDistributionAsync(const DescribeSensitiveRDBDataDistributionRequest& request, const DescribeSensitiveRDBDataDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSensitiveRDBDataDistributionRequest&;
    using Resp = DescribeSensitiveRDBDataDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveRDBDataDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DescribeSensitiveRDBDataDistributionOutcomeCallable DsgcClient::DescribeSensitiveRDBDataDistributionCallable(const DescribeSensitiveRDBDataDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveRDBDataDistributionOutcome>>();
    DescribeSensitiveRDBDataDistributionAsync(
    request,
    [prom](
        const DsgcClient*,
        const DescribeSensitiveRDBDataDistributionRequest&,
        DescribeSensitiveRDBDataDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::DisableDSPAMetaResourceAuthOutcome DsgcClient::DisableDSPAMetaResourceAuth(const DisableDSPAMetaResourceAuthRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDSPAMetaResourceAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDSPAMetaResourceAuthResponse rsp = DisableDSPAMetaResourceAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDSPAMetaResourceAuthOutcome(rsp);
        else
            return DisableDSPAMetaResourceAuthOutcome(o.GetError());
    }
    else
    {
        return DisableDSPAMetaResourceAuthOutcome(outcome.GetError());
    }
}

void DsgcClient::DisableDSPAMetaResourceAuthAsync(const DisableDSPAMetaResourceAuthRequest& request, const DisableDSPAMetaResourceAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableDSPAMetaResourceAuthRequest&;
    using Resp = DisableDSPAMetaResourceAuthResponse;

    DoRequestAsync<Req, Resp>(
        "DisableDSPAMetaResourceAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::DisableDSPAMetaResourceAuthOutcomeCallable DsgcClient::DisableDSPAMetaResourceAuthCallable(const DisableDSPAMetaResourceAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableDSPAMetaResourceAuthOutcome>>();
    DisableDSPAMetaResourceAuthAsync(
    request,
    [prom](
        const DsgcClient*,
        const DisableDSPAMetaResourceAuthRequest&,
        DisableDSPAMetaResourceAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::EnableDSPADiscoveryRuleOutcome DsgcClient::EnableDSPADiscoveryRule(const EnableDSPADiscoveryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableDSPADiscoveryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableDSPADiscoveryRuleResponse rsp = EnableDSPADiscoveryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableDSPADiscoveryRuleOutcome(rsp);
        else
            return EnableDSPADiscoveryRuleOutcome(o.GetError());
    }
    else
    {
        return EnableDSPADiscoveryRuleOutcome(outcome.GetError());
    }
}

void DsgcClient::EnableDSPADiscoveryRuleAsync(const EnableDSPADiscoveryRuleRequest& request, const EnableDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableDSPADiscoveryRuleRequest&;
    using Resp = EnableDSPADiscoveryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableDSPADiscoveryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::EnableDSPADiscoveryRuleOutcomeCallable DsgcClient::EnableDSPADiscoveryRuleCallable(const EnableDSPADiscoveryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableDSPADiscoveryRuleOutcome>>();
    EnableDSPADiscoveryRuleAsync(
    request,
    [prom](
        const DsgcClient*,
        const EnableDSPADiscoveryRuleRequest&,
        EnableDSPADiscoveryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::EnableTrialVersionOutcome DsgcClient::EnableTrialVersion(const EnableTrialVersionRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTrialVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTrialVersionResponse rsp = EnableTrialVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTrialVersionOutcome(rsp);
        else
            return EnableTrialVersionOutcome(o.GetError());
    }
    else
    {
        return EnableTrialVersionOutcome(outcome.GetError());
    }
}

void DsgcClient::EnableTrialVersionAsync(const EnableTrialVersionRequest& request, const EnableTrialVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableTrialVersionRequest&;
    using Resp = EnableTrialVersionResponse;

    DoRequestAsync<Req, Resp>(
        "EnableTrialVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::EnableTrialVersionOutcomeCallable DsgcClient::EnableTrialVersionCallable(const EnableTrialVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableTrialVersionOutcome>>();
    EnableTrialVersionAsync(
    request,
    [prom](
        const DsgcClient*,
        const EnableTrialVersionRequest&,
        EnableTrialVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ExportAssetDetailDataOutcome DsgcClient::ExportAssetDetailData(const ExportAssetDetailDataRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetDetailData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetDetailDataResponse rsp = ExportAssetDetailDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetDetailDataOutcome(rsp);
        else
            return ExportAssetDetailDataOutcome(o.GetError());
    }
    else
    {
        return ExportAssetDetailDataOutcome(outcome.GetError());
    }
}

void DsgcClient::ExportAssetDetailDataAsync(const ExportAssetDetailDataRequest& request, const ExportAssetDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetDetailDataRequest&;
    using Resp = ExportAssetDetailDataResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetDetailData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ExportAssetDetailDataOutcomeCallable DsgcClient::ExportAssetDetailDataCallable(const ExportAssetDetailDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetDetailDataOutcome>>();
    ExportAssetDetailDataAsync(
    request,
    [prom](
        const DsgcClient*,
        const ExportAssetDetailDataRequest&,
        ExportAssetDetailDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::GetResourceConnectionStatusOutcome DsgcClient::GetResourceConnectionStatus(const GetResourceConnectionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceConnectionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceConnectionStatusResponse rsp = GetResourceConnectionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceConnectionStatusOutcome(rsp);
        else
            return GetResourceConnectionStatusOutcome(o.GetError());
    }
    else
    {
        return GetResourceConnectionStatusOutcome(outcome.GetError());
    }
}

void DsgcClient::GetResourceConnectionStatusAsync(const GetResourceConnectionStatusRequest& request, const GetResourceConnectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourceConnectionStatusRequest&;
    using Resp = GetResourceConnectionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetResourceConnectionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::GetResourceConnectionStatusOutcomeCallable DsgcClient::GetResourceConnectionStatusCallable(const GetResourceConnectionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourceConnectionStatusOutcome>>();
    GetResourceConnectionStatusAsync(
    request,
    [prom](
        const DsgcClient*,
        const GetResourceConnectionStatusRequest&,
        GetResourceConnectionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::GetTrialVersionOutcome DsgcClient::GetTrialVersion(const GetTrialVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetTrialVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTrialVersionResponse rsp = GetTrialVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTrialVersionOutcome(rsp);
        else
            return GetTrialVersionOutcome(o.GetError());
    }
    else
    {
        return GetTrialVersionOutcome(outcome.GetError());
    }
}

void DsgcClient::GetTrialVersionAsync(const GetTrialVersionRequest& request, const GetTrialVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTrialVersionRequest&;
    using Resp = GetTrialVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetTrialVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::GetTrialVersionOutcomeCallable DsgcClient::GetTrialVersionCallable(const GetTrialVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTrialVersionOutcome>>();
    GetTrialVersionAsync(
    request,
    [prom](
        const DsgcClient*,
        const GetTrialVersionRequest&,
        GetTrialVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::GetUserQuotaInfoOutcome DsgcClient::GetUserQuotaInfo(const GetUserQuotaInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserQuotaInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserQuotaInfoResponse rsp = GetUserQuotaInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserQuotaInfoOutcome(rsp);
        else
            return GetUserQuotaInfoOutcome(o.GetError());
    }
    else
    {
        return GetUserQuotaInfoOutcome(outcome.GetError());
    }
}

void DsgcClient::GetUserQuotaInfoAsync(const GetUserQuotaInfoRequest& request, const GetUserQuotaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserQuotaInfoRequest&;
    using Resp = GetUserQuotaInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetUserQuotaInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::GetUserQuotaInfoOutcomeCallable DsgcClient::GetUserQuotaInfoCallable(const GetUserQuotaInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserQuotaInfoOutcome>>();
    GetUserQuotaInfoAsync(
    request,
    [prom](
        const DsgcClient*,
        const GetUserQuotaInfoRequest&,
        GetUserQuotaInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ListDSPAClustersOutcome DsgcClient::ListDSPAClusters(const ListDSPAClustersRequest &request)
{
    auto outcome = MakeRequest(request, "ListDSPAClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDSPAClustersResponse rsp = ListDSPAClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDSPAClustersOutcome(rsp);
        else
            return ListDSPAClustersOutcome(o.GetError());
    }
    else
    {
        return ListDSPAClustersOutcome(outcome.GetError());
    }
}

void DsgcClient::ListDSPAClustersAsync(const ListDSPAClustersRequest& request, const ListDSPAClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDSPAClustersRequest&;
    using Resp = ListDSPAClustersResponse;

    DoRequestAsync<Req, Resp>(
        "ListDSPAClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ListDSPAClustersOutcomeCallable DsgcClient::ListDSPAClustersCallable(const ListDSPAClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDSPAClustersOutcome>>();
    ListDSPAClustersAsync(
    request,
    [prom](
        const DsgcClient*,
        const ListDSPAClustersRequest&,
        ListDSPAClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ListDSPACosMetaResourcesOutcome DsgcClient::ListDSPACosMetaResources(const ListDSPACosMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDSPACosMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDSPACosMetaResourcesResponse rsp = ListDSPACosMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDSPACosMetaResourcesOutcome(rsp);
        else
            return ListDSPACosMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return ListDSPACosMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::ListDSPACosMetaResourcesAsync(const ListDSPACosMetaResourcesRequest& request, const ListDSPACosMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDSPACosMetaResourcesRequest&;
    using Resp = ListDSPACosMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDSPACosMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ListDSPACosMetaResourcesOutcomeCallable DsgcClient::ListDSPACosMetaResourcesCallable(const ListDSPACosMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDSPACosMetaResourcesOutcome>>();
    ListDSPACosMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const ListDSPACosMetaResourcesRequest&,
        ListDSPACosMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ListDSPAMetaResourcesOutcome DsgcClient::ListDSPAMetaResources(const ListDSPAMetaResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDSPAMetaResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDSPAMetaResourcesResponse rsp = ListDSPAMetaResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDSPAMetaResourcesOutcome(rsp);
        else
            return ListDSPAMetaResourcesOutcome(o.GetError());
    }
    else
    {
        return ListDSPAMetaResourcesOutcome(outcome.GetError());
    }
}

void DsgcClient::ListDSPAMetaResourcesAsync(const ListDSPAMetaResourcesRequest& request, const ListDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDSPAMetaResourcesRequest&;
    using Resp = ListDSPAMetaResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDSPAMetaResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ListDSPAMetaResourcesOutcomeCallable DsgcClient::ListDSPAMetaResourcesCallable(const ListDSPAMetaResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDSPAMetaResourcesOutcome>>();
    ListDSPAMetaResourcesAsync(
    request,
    [prom](
        const DsgcClient*,
        const ListDSPAMetaResourcesRequest&,
        ListDSPAMetaResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAAssessmentRiskOutcome DsgcClient::ModifyDSPAAssessmentRisk(const ModifyDSPAAssessmentRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAAssessmentRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAAssessmentRiskResponse rsp = ModifyDSPAAssessmentRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAAssessmentRiskOutcome(rsp);
        else
            return ModifyDSPAAssessmentRiskOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAAssessmentRiskOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAAssessmentRiskAsync(const ModifyDSPAAssessmentRiskRequest& request, const ModifyDSPAAssessmentRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAAssessmentRiskRequest&;
    using Resp = ModifyDSPAAssessmentRiskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAAssessmentRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAAssessmentRiskOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskCallable(const ModifyDSPAAssessmentRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAAssessmentRiskOutcome>>();
    ModifyDSPAAssessmentRiskAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAAssessmentRiskRequest&,
        ModifyDSPAAssessmentRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAAssessmentRiskLatestOutcome DsgcClient::ModifyDSPAAssessmentRiskLatest(const ModifyDSPAAssessmentRiskLatestRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAAssessmentRiskLatest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAAssessmentRiskLatestResponse rsp = ModifyDSPAAssessmentRiskLatestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAAssessmentRiskLatestOutcome(rsp);
        else
            return ModifyDSPAAssessmentRiskLatestOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAAssessmentRiskLatestOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAAssessmentRiskLatestAsync(const ModifyDSPAAssessmentRiskLatestRequest& request, const ModifyDSPAAssessmentRiskLatestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAAssessmentRiskLatestRequest&;
    using Resp = ModifyDSPAAssessmentRiskLatestResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAAssessmentRiskLatest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAAssessmentRiskLatestOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskLatestCallable(const ModifyDSPAAssessmentRiskLatestRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAAssessmentRiskLatestOutcome>>();
    ModifyDSPAAssessmentRiskLatestAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAAssessmentRiskLatestRequest&,
        ModifyDSPAAssessmentRiskLatestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAAssessmentRiskLevelOutcome DsgcClient::ModifyDSPAAssessmentRiskLevel(const ModifyDSPAAssessmentRiskLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAAssessmentRiskLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAAssessmentRiskLevelResponse rsp = ModifyDSPAAssessmentRiskLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAAssessmentRiskLevelOutcome(rsp);
        else
            return ModifyDSPAAssessmentRiskLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAAssessmentRiskLevelOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAAssessmentRiskLevelAsync(const ModifyDSPAAssessmentRiskLevelRequest& request, const ModifyDSPAAssessmentRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAAssessmentRiskLevelRequest&;
    using Resp = ModifyDSPAAssessmentRiskLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAAssessmentRiskLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAAssessmentRiskLevelOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskLevelCallable(const ModifyDSPAAssessmentRiskLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAAssessmentRiskLevelOutcome>>();
    ModifyDSPAAssessmentRiskLevelAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAAssessmentRiskLevelRequest&,
        ModifyDSPAAssessmentRiskLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAAssessmentRiskTemplateOutcome DsgcClient::ModifyDSPAAssessmentRiskTemplate(const ModifyDSPAAssessmentRiskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAAssessmentRiskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAAssessmentRiskTemplateResponse rsp = ModifyDSPAAssessmentRiskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAAssessmentRiskTemplateOutcome(rsp);
        else
            return ModifyDSPAAssessmentRiskTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAAssessmentRiskTemplateOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAAssessmentRiskTemplateAsync(const ModifyDSPAAssessmentRiskTemplateRequest& request, const ModifyDSPAAssessmentRiskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAAssessmentRiskTemplateRequest&;
    using Resp = ModifyDSPAAssessmentRiskTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAAssessmentRiskTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAAssessmentRiskTemplateOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskTemplateCallable(const ModifyDSPAAssessmentRiskTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAAssessmentRiskTemplateOutcome>>();
    ModifyDSPAAssessmentRiskTemplateAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAAssessmentRiskTemplateRequest&,
        ModifyDSPAAssessmentRiskTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPACOSDiscoveryTaskOutcome DsgcClient::ModifyDSPACOSDiscoveryTask(const ModifyDSPACOSDiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPACOSDiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPACOSDiscoveryTaskResponse rsp = ModifyDSPACOSDiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPACOSDiscoveryTaskOutcome(rsp);
        else
            return ModifyDSPACOSDiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPACOSDiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPACOSDiscoveryTaskAsync(const ModifyDSPACOSDiscoveryTaskRequest& request, const ModifyDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPACOSDiscoveryTaskRequest&;
    using Resp = ModifyDSPACOSDiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPACOSDiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::ModifyDSPACOSDiscoveryTaskCallable(const ModifyDSPACOSDiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPACOSDiscoveryTaskOutcome>>();
    ModifyDSPACOSDiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPACOSDiscoveryTaskRequest&,
        ModifyDSPACOSDiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPACOSTaskResultOutcome DsgcClient::ModifyDSPACOSTaskResult(const ModifyDSPACOSTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPACOSTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPACOSTaskResultResponse rsp = ModifyDSPACOSTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPACOSTaskResultOutcome(rsp);
        else
            return ModifyDSPACOSTaskResultOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPACOSTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPACOSTaskResultAsync(const ModifyDSPACOSTaskResultRequest& request, const ModifyDSPACOSTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPACOSTaskResultRequest&;
    using Resp = ModifyDSPACOSTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPACOSTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPACOSTaskResultOutcomeCallable DsgcClient::ModifyDSPACOSTaskResultCallable(const ModifyDSPACOSTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPACOSTaskResultOutcome>>();
    ModifyDSPACOSTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPACOSTaskResultRequest&,
        ModifyDSPACOSTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPACategoryOutcome DsgcClient::ModifyDSPACategory(const ModifyDSPACategoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPACategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPACategoryResponse rsp = ModifyDSPACategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPACategoryOutcome(rsp);
        else
            return ModifyDSPACategoryOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPACategoryOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPACategoryAsync(const ModifyDSPACategoryRequest& request, const ModifyDSPACategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPACategoryRequest&;
    using Resp = ModifyDSPACategoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPACategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPACategoryOutcomeCallable DsgcClient::ModifyDSPACategoryCallable(const ModifyDSPACategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPACategoryOutcome>>();
    ModifyDSPACategoryAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPACategoryRequest&,
        ModifyDSPACategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPACategoryRelationOutcome DsgcClient::ModifyDSPACategoryRelation(const ModifyDSPACategoryRelationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPACategoryRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPACategoryRelationResponse rsp = ModifyDSPACategoryRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPACategoryRelationOutcome(rsp);
        else
            return ModifyDSPACategoryRelationOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPACategoryRelationOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPACategoryRelationAsync(const ModifyDSPACategoryRelationRequest& request, const ModifyDSPACategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPACategoryRelationRequest&;
    using Resp = ModifyDSPACategoryRelationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPACategoryRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPACategoryRelationOutcomeCallable DsgcClient::ModifyDSPACategoryRelationCallable(const ModifyDSPACategoryRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPACategoryRelationOutcome>>();
    ModifyDSPACategoryRelationAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPACategoryRelationRequest&,
        ModifyDSPACategoryRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAClusterInfoOutcome DsgcClient::ModifyDSPAClusterInfo(const ModifyDSPAClusterInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAClusterInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAClusterInfoResponse rsp = ModifyDSPAClusterInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAClusterInfoOutcome(rsp);
        else
            return ModifyDSPAClusterInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAClusterInfoOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAClusterInfoAsync(const ModifyDSPAClusterInfoRequest& request, const ModifyDSPAClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAClusterInfoRequest&;
    using Resp = ModifyDSPAClusterInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAClusterInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAClusterInfoOutcomeCallable DsgcClient::ModifyDSPAClusterInfoCallable(const ModifyDSPAClusterInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAClusterInfoOutcome>>();
    ModifyDSPAClusterInfoAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAClusterInfoRequest&,
        ModifyDSPAClusterInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAComplianceGroupOutcome DsgcClient::ModifyDSPAComplianceGroup(const ModifyDSPAComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAComplianceGroupResponse rsp = ModifyDSPAComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAComplianceGroupOutcome(rsp);
        else
            return ModifyDSPAComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAComplianceGroupOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAComplianceGroupAsync(const ModifyDSPAComplianceGroupRequest& request, const ModifyDSPAComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAComplianceGroupRequest&;
    using Resp = ModifyDSPAComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAComplianceGroupOutcomeCallable DsgcClient::ModifyDSPAComplianceGroupCallable(const ModifyDSPAComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAComplianceGroupOutcome>>();
    ModifyDSPAComplianceGroupAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAComplianceGroupRequest&,
        ModifyDSPAComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPADiscoveryRuleOutcome DsgcClient::ModifyDSPADiscoveryRule(const ModifyDSPADiscoveryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPADiscoveryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPADiscoveryRuleResponse rsp = ModifyDSPADiscoveryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPADiscoveryRuleOutcome(rsp);
        else
            return ModifyDSPADiscoveryRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPADiscoveryRuleOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPADiscoveryRuleAsync(const ModifyDSPADiscoveryRuleRequest& request, const ModifyDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPADiscoveryRuleRequest&;
    using Resp = ModifyDSPADiscoveryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPADiscoveryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPADiscoveryRuleOutcomeCallable DsgcClient::ModifyDSPADiscoveryRuleCallable(const ModifyDSPADiscoveryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPADiscoveryRuleOutcome>>();
    ModifyDSPADiscoveryRuleAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPADiscoveryRuleRequest&,
        ModifyDSPADiscoveryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPADiscoveryTaskOutcome DsgcClient::ModifyDSPADiscoveryTask(const ModifyDSPADiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPADiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPADiscoveryTaskResponse rsp = ModifyDSPADiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPADiscoveryTaskOutcome(rsp);
        else
            return ModifyDSPADiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPADiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPADiscoveryTaskAsync(const ModifyDSPADiscoveryTaskRequest& request, const ModifyDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPADiscoveryTaskRequest&;
    using Resp = ModifyDSPADiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPADiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPADiscoveryTaskOutcomeCallable DsgcClient::ModifyDSPADiscoveryTaskCallable(const ModifyDSPADiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPADiscoveryTaskOutcome>>();
    ModifyDSPADiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPADiscoveryTaskRequest&,
        ModifyDSPADiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPAESTaskResultOutcome DsgcClient::ModifyDSPAESTaskResult(const ModifyDSPAESTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPAESTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPAESTaskResultResponse rsp = ModifyDSPAESTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPAESTaskResultOutcome(rsp);
        else
            return ModifyDSPAESTaskResultOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPAESTaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPAESTaskResultAsync(const ModifyDSPAESTaskResultRequest& request, const ModifyDSPAESTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPAESTaskResultRequest&;
    using Resp = ModifyDSPAESTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPAESTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPAESTaskResultOutcomeCallable DsgcClient::ModifyDSPAESTaskResultCallable(const ModifyDSPAESTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPAESTaskResultOutcome>>();
    ModifyDSPAESTaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPAESTaskResultRequest&,
        ModifyDSPAESTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::ModifyDSPATaskResultOutcome DsgcClient::ModifyDSPATaskResult(const ModifyDSPATaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDSPATaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDSPATaskResultResponse rsp = ModifyDSPATaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDSPATaskResultOutcome(rsp);
        else
            return ModifyDSPATaskResultOutcome(o.GetError());
    }
    else
    {
        return ModifyDSPATaskResultOutcome(outcome.GetError());
    }
}

void DsgcClient::ModifyDSPATaskResultAsync(const ModifyDSPATaskResultRequest& request, const ModifyDSPATaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDSPATaskResultRequest&;
    using Resp = ModifyDSPATaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDSPATaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::ModifyDSPATaskResultOutcomeCallable DsgcClient::ModifyDSPATaskResultCallable(const ModifyDSPATaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDSPATaskResultOutcome>>();
    ModifyDSPATaskResultAsync(
    request,
    [prom](
        const DsgcClient*,
        const ModifyDSPATaskResultRequest&,
        ModifyDSPATaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::QueryDSPAMetaResourceDbListOutcome DsgcClient::QueryDSPAMetaResourceDbList(const QueryDSPAMetaResourceDbListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDSPAMetaResourceDbList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDSPAMetaResourceDbListResponse rsp = QueryDSPAMetaResourceDbListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDSPAMetaResourceDbListOutcome(rsp);
        else
            return QueryDSPAMetaResourceDbListOutcome(o.GetError());
    }
    else
    {
        return QueryDSPAMetaResourceDbListOutcome(outcome.GetError());
    }
}

void DsgcClient::QueryDSPAMetaResourceDbListAsync(const QueryDSPAMetaResourceDbListRequest& request, const QueryDSPAMetaResourceDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDSPAMetaResourceDbListRequest&;
    using Resp = QueryDSPAMetaResourceDbListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDSPAMetaResourceDbList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::QueryDSPAMetaResourceDbListOutcomeCallable DsgcClient::QueryDSPAMetaResourceDbListCallable(const QueryDSPAMetaResourceDbListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDSPAMetaResourceDbListOutcome>>();
    QueryDSPAMetaResourceDbListAsync(
    request,
    [prom](
        const DsgcClient*,
        const QueryDSPAMetaResourceDbListRequest&,
        QueryDSPAMetaResourceDbListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::QueryResourceDbBindStatusOutcome DsgcClient::QueryResourceDbBindStatus(const QueryResourceDbBindStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResourceDbBindStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResourceDbBindStatusResponse rsp = QueryResourceDbBindStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResourceDbBindStatusOutcome(rsp);
        else
            return QueryResourceDbBindStatusOutcome(o.GetError());
    }
    else
    {
        return QueryResourceDbBindStatusOutcome(outcome.GetError());
    }
}

void DsgcClient::QueryResourceDbBindStatusAsync(const QueryResourceDbBindStatusRequest& request, const QueryResourceDbBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryResourceDbBindStatusRequest&;
    using Resp = QueryResourceDbBindStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QueryResourceDbBindStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::QueryResourceDbBindStatusOutcomeCallable DsgcClient::QueryResourceDbBindStatusCallable(const QueryResourceDbBindStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryResourceDbBindStatusOutcome>>();
    QueryResourceDbBindStatusAsync(
    request,
    [prom](
        const DsgcClient*,
        const QueryResourceDbBindStatusRequest&,
        QueryResourceDbBindStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::RestartDSPAAssessmentTaskOutcome DsgcClient::RestartDSPAAssessmentTask(const RestartDSPAAssessmentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDSPAAssessmentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDSPAAssessmentTaskResponse rsp = RestartDSPAAssessmentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDSPAAssessmentTaskOutcome(rsp);
        else
            return RestartDSPAAssessmentTaskOutcome(o.GetError());
    }
    else
    {
        return RestartDSPAAssessmentTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::RestartDSPAAssessmentTaskAsync(const RestartDSPAAssessmentTaskRequest& request, const RestartDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDSPAAssessmentTaskRequest&;
    using Resp = RestartDSPAAssessmentTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDSPAAssessmentTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::RestartDSPAAssessmentTaskOutcomeCallable DsgcClient::RestartDSPAAssessmentTaskCallable(const RestartDSPAAssessmentTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDSPAAssessmentTaskOutcome>>();
    RestartDSPAAssessmentTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const RestartDSPAAssessmentTaskRequest&,
        RestartDSPAAssessmentTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::StartDSPADiscoveryTaskOutcome DsgcClient::StartDSPADiscoveryTask(const StartDSPADiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartDSPADiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartDSPADiscoveryTaskResponse rsp = StartDSPADiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartDSPADiscoveryTaskOutcome(rsp);
        else
            return StartDSPADiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return StartDSPADiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::StartDSPADiscoveryTaskAsync(const StartDSPADiscoveryTaskRequest& request, const StartDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartDSPADiscoveryTaskRequest&;
    using Resp = StartDSPADiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StartDSPADiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::StartDSPADiscoveryTaskOutcomeCallable DsgcClient::StartDSPADiscoveryTaskCallable(const StartDSPADiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartDSPADiscoveryTaskOutcome>>();
    StartDSPADiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const StartDSPADiscoveryTaskRequest&,
        StartDSPADiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::StopDSPADiscoveryTaskOutcome DsgcClient::StopDSPADiscoveryTask(const StopDSPADiscoveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopDSPADiscoveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDSPADiscoveryTaskResponse rsp = StopDSPADiscoveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDSPADiscoveryTaskOutcome(rsp);
        else
            return StopDSPADiscoveryTaskOutcome(o.GetError());
    }
    else
    {
        return StopDSPADiscoveryTaskOutcome(outcome.GetError());
    }
}

void DsgcClient::StopDSPADiscoveryTaskAsync(const StopDSPADiscoveryTaskRequest& request, const StopDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopDSPADiscoveryTaskRequest&;
    using Resp = StopDSPADiscoveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopDSPADiscoveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::StopDSPADiscoveryTaskOutcomeCallable DsgcClient::StopDSPADiscoveryTaskCallable(const StopDSPADiscoveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopDSPADiscoveryTaskOutcome>>();
    StopDSPADiscoveryTaskAsync(
    request,
    [prom](
        const DsgcClient*,
        const StopDSPADiscoveryTaskRequest&,
        StopDSPADiscoveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::UpdateDSPASelfBuildResourceOutcome DsgcClient::UpdateDSPASelfBuildResource(const UpdateDSPASelfBuildResourceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDSPASelfBuildResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDSPASelfBuildResourceResponse rsp = UpdateDSPASelfBuildResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDSPASelfBuildResourceOutcome(rsp);
        else
            return UpdateDSPASelfBuildResourceOutcome(o.GetError());
    }
    else
    {
        return UpdateDSPASelfBuildResourceOutcome(outcome.GetError());
    }
}

void DsgcClient::UpdateDSPASelfBuildResourceAsync(const UpdateDSPASelfBuildResourceRequest& request, const UpdateDSPASelfBuildResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDSPASelfBuildResourceRequest&;
    using Resp = UpdateDSPASelfBuildResourceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDSPASelfBuildResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::UpdateDSPASelfBuildResourceOutcomeCallable DsgcClient::UpdateDSPASelfBuildResourceCallable(const UpdateDSPASelfBuildResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDSPASelfBuildResourceOutcome>>();
    UpdateDSPASelfBuildResourceAsync(
    request,
    [prom](
        const DsgcClient*,
        const UpdateDSPASelfBuildResourceRequest&,
        UpdateDSPASelfBuildResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::VerifyDSPACOSRuleOutcome DsgcClient::VerifyDSPACOSRule(const VerifyDSPACOSRuleRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDSPACOSRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDSPACOSRuleResponse rsp = VerifyDSPACOSRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDSPACOSRuleOutcome(rsp);
        else
            return VerifyDSPACOSRuleOutcome(o.GetError());
    }
    else
    {
        return VerifyDSPACOSRuleOutcome(outcome.GetError());
    }
}

void DsgcClient::VerifyDSPACOSRuleAsync(const VerifyDSPACOSRuleRequest& request, const VerifyDSPACOSRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyDSPACOSRuleRequest&;
    using Resp = VerifyDSPACOSRuleResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyDSPACOSRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::VerifyDSPACOSRuleOutcomeCallable DsgcClient::VerifyDSPACOSRuleCallable(const VerifyDSPACOSRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyDSPACOSRuleOutcome>>();
    VerifyDSPACOSRuleAsync(
    request,
    [prom](
        const DsgcClient*,
        const VerifyDSPACOSRuleRequest&,
        VerifyDSPACOSRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsgcClient::VerifyDSPADiscoveryRuleOutcome DsgcClient::VerifyDSPADiscoveryRule(const VerifyDSPADiscoveryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDSPADiscoveryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDSPADiscoveryRuleResponse rsp = VerifyDSPADiscoveryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDSPADiscoveryRuleOutcome(rsp);
        else
            return VerifyDSPADiscoveryRuleOutcome(o.GetError());
    }
    else
    {
        return VerifyDSPADiscoveryRuleOutcome(outcome.GetError());
    }
}

void DsgcClient::VerifyDSPADiscoveryRuleAsync(const VerifyDSPADiscoveryRuleRequest& request, const VerifyDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyDSPADiscoveryRuleRequest&;
    using Resp = VerifyDSPADiscoveryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyDSPADiscoveryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsgcClient::VerifyDSPADiscoveryRuleOutcomeCallable DsgcClient::VerifyDSPADiscoveryRuleCallable(const VerifyDSPADiscoveryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyDSPADiscoveryRuleOutcome>>();
    VerifyDSPADiscoveryRuleAsync(
    request,
    [prom](
        const DsgcClient*,
        const VerifyDSPADiscoveryRuleRequest&,
        VerifyDSPADiscoveryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

