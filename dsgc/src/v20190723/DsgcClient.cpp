/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuthorizeDSPAMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::AuthorizeDSPAMetaResourcesOutcomeCallable DsgcClient::AuthorizeDSPAMetaResourcesCallable(const AuthorizeDSPAMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuthorizeDSPAMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->AuthorizeDSPAMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDSPAResourceCosBuckets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::BindDSPAResourceCosBucketsOutcomeCallable DsgcClient::BindDSPAResourceCosBucketsCallable(const BindDSPAResourceCosBucketsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDSPAResourceCosBucketsOutcome()>>(
        [this, request]()
        {
            return this->BindDSPAResourceCosBuckets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDSPAResourceDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::BindDSPAResourceDatabasesOutcomeCallable DsgcClient::BindDSPAResourceDatabasesCallable(const BindDSPAResourceDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDSPAResourceDatabasesOutcome()>>(
        [this, request]()
        {
            return this->BindDSPAResourceDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyDSPATemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CopyDSPATemplateOutcomeCallable DsgcClient::CopyDSPATemplateCallable(const CopyDSPATemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyDSPATemplateOutcome()>>(
        [this, request]()
        {
            return this->CopyDSPATemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetSortingReportRetryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateAssetSortingReportRetryTaskOutcomeCallable DsgcClient::CreateAssetSortingReportRetryTaskCallable(const CreateAssetSortingReportRetryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetSortingReportRetryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetSortingReportRetryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetSortingReportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateAssetSortingReportTaskOutcomeCallable DsgcClient::CreateAssetSortingReportTaskCallable(const CreateAssetSortingReportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetSortingReportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetSortingReportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAAssessmentRiskLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAAssessmentRiskLevelOutcomeCallable DsgcClient::CreateDSPAAssessmentRiskLevelCallable(const CreateDSPAAssessmentRiskLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAAssessmentRiskLevelOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAAssessmentRiskLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAAssessmentRiskTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAAssessmentRiskTemplateOutcomeCallable DsgcClient::CreateDSPAAssessmentRiskTemplateCallable(const CreateDSPAAssessmentRiskTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAAssessmentRiskTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAAssessmentRiskTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAAssessmentTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAAssessmentTaskOutcomeCallable DsgcClient::CreateDSPAAssessmentTaskCallable(const CreateDSPAAssessmentTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAAssessmentTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAAssessmentTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPACOSDiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::CreateDSPACOSDiscoveryTaskCallable(const CreateDSPACOSDiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPACOSDiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPACOSDiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPACategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPACategoryOutcomeCallable DsgcClient::CreateDSPACategoryCallable(const CreateDSPACategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPACategoryOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPACategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPACategoryRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPACategoryRelationOutcomeCallable DsgcClient::CreateDSPACategoryRelationCallable(const CreateDSPACategoryRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPACategoryRelationOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPACategoryRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAComplianceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAComplianceGroupOutcomeCallable DsgcClient::CreateDSPAComplianceGroupCallable(const CreateDSPAComplianceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAComplianceGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAComplianceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAComplianceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAComplianceRulesOutcomeCallable DsgcClient::CreateDSPAComplianceRulesCallable(const CreateDSPAComplianceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAComplianceRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAComplianceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPACosMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPACosMetaResourcesOutcomeCallable DsgcClient::CreateDSPACosMetaResourcesCallable(const CreateDSPACosMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPACosMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPACosMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPADbMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPADbMetaResourcesOutcomeCallable DsgcClient::CreateDSPADbMetaResourcesCallable(const CreateDSPADbMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPADbMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPADbMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPADiscoveryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPADiscoveryRuleOutcomeCallable DsgcClient::CreateDSPADiscoveryRuleCallable(const CreateDSPADiscoveryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPADiscoveryRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPADiscoveryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPADiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPADiscoveryTaskOutcomeCallable DsgcClient::CreateDSPADiscoveryTaskCallable(const CreateDSPADiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPADiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPADiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPALevelGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPALevelGroupOutcomeCallable DsgcClient::CreateDSPALevelGroupCallable(const CreateDSPALevelGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPALevelGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPALevelGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPAMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPAMetaResourcesOutcomeCallable DsgcClient::CreateDSPAMetaResourcesCallable(const CreateDSPAMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPAMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPAMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDSPASelfBuildMetaResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateDSPASelfBuildMetaResourceOutcomeCallable DsgcClient::CreateDSPASelfBuildMetaResourceCallable(const CreateDSPASelfBuildMetaResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDSPASelfBuildMetaResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateDSPASelfBuildMetaResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIdentifyRuleAnotherName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::CreateIdentifyRuleAnotherNameOutcomeCallable DsgcClient::CreateIdentifyRuleAnotherNameCallable(const CreateIdentifyRuleAnotherNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIdentifyRuleAnotherNameOutcome()>>(
        [this, request]()
        {
            return this->CreateIdentifyRuleAnotherName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DecribeSuggestRiskLevelMatrix(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DecribeSuggestRiskLevelMatrixOutcomeCallable DsgcClient::DecribeSuggestRiskLevelMatrixCallable(const DecribeSuggestRiskLevelMatrixRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DecribeSuggestRiskLevelMatrixOutcome()>>(
        [this, request]()
        {
            return this->DecribeSuggestRiskLevelMatrix(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCosMetaResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteCosMetaResourceOutcomeCallable DsgcClient::DeleteCosMetaResourceCallable(const DeleteCosMetaResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCosMetaResourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteCosMetaResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPAAssessmentTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPAAssessmentTaskOutcomeCallable DsgcClient::DeleteDSPAAssessmentTaskCallable(const DeleteDSPAAssessmentTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPAAssessmentTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPAAssessmentTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPACOSDiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::DeleteDSPACOSDiscoveryTaskCallable(const DeleteDSPACOSDiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPACOSDiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPACOSDiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPACOSDiscoveryTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPACOSDiscoveryTaskResultOutcomeCallable DsgcClient::DeleteDSPACOSDiscoveryTaskResultCallable(const DeleteDSPACOSDiscoveryTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPACOSDiscoveryTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPACOSDiscoveryTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPADiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPADiscoveryTaskOutcomeCallable DsgcClient::DeleteDSPADiscoveryTaskCallable(const DeleteDSPADiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPADiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPADiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPADiscoveryTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPADiscoveryTaskResultOutcomeCallable DsgcClient::DeleteDSPADiscoveryTaskResultCallable(const DeleteDSPADiscoveryTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPADiscoveryTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPADiscoveryTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDSPAMetaResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DeleteDSPAMetaResourceOutcomeCallable DsgcClient::DeleteDSPAMetaResourceCallable(const DeleteDSPAMetaResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDSPAMetaResourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDSPAMetaResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDetailDataExportResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeAssetDetailDataExportResultOutcomeCallable DsgcClient::DescribeAssetDetailDataExportResultCallable(const DescribeAssetDetailDataExportResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDetailDataExportResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDetailDataExportResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeAssetOverviewOutcomeCallable DsgcClient::DescribeAssetOverviewCallable(const DescribeAssetOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindDBList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeBindDBListOutcomeCallable DsgcClient::DescribeBindDBListCallable(const DescribeBindDBListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindDBListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindDBList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCOSAssetSensitiveDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeCOSAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeCOSAssetSensitiveDistributionCallable(const DescribeCOSAssetSensitiveDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCOSAssetSensitiveDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCOSAssetSensitiveDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentHighRiskTop10Overview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentHighRiskTop10OverviewCallable(const DescribeDSPAAssessmentHighRiskTop10OverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentHighRiskTop10OverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentHighRiskTop10Overview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentLatestRiskDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoOutcomeCallable DsgcClient::DescribeDSPAAssessmentLatestRiskDetailInfoCallable(const DescribeDSPAAssessmentLatestRiskDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentLatestRiskDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentLatestRiskDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentLatestRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentLatestRiskListOutcomeCallable DsgcClient::DescribeDSPAAssessmentLatestRiskListCallable(const DescribeDSPAAssessmentLatestRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentLatestRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentLatestRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentNewDiscoveredRiskOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentNewDiscoveredRiskOverviewCallable(const DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentNewDiscoveredRiskOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentPendingRiskOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentPendingRiskOverviewCallable(const DescribeDSPAAssessmentPendingRiskOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentPendingRiskOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentPendingRiskOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentProcessingRiskOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentProcessingRiskOverviewCallable(const DescribeDSPAAssessmentProcessingRiskOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentProcessingRiskOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentProcessingRiskOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskAmountOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskAmountOverviewCallable(const DescribeDSPAAssessmentRiskAmountOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskAmountOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskAmountOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskDatasourceTop5(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5OutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDatasourceTop5Callable(const DescribeDSPAAssessmentRiskDatasourceTop5Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskDatasourceTop5Outcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskDatasourceTop5(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskDealedOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDealedOverviewCallable(const DescribeDSPAAssessmentRiskDealedOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskDealedOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskDealedOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskDealedTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskDealedTrendOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDealedTrendCallable(const DescribeDSPAAssessmentRiskDealedTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskDealedTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskDealedTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskDistributionOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskDistributionOverviewCallable(const DescribeDSPAAssessmentRiskDistributionOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskDistributionOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskDistributionOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskItemTop5(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskItemTop5OutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskItemTop5Callable(const DescribeDSPAAssessmentRiskItemTop5Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskItemTop5Outcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskItemTop5(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskLevelDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskLevelDetailOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelDetailCallable(const DescribeDSPAAssessmentRiskLevelDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskLevelDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskLevelDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskLevelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskLevelListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelListCallable(const DescribeDSPAAssessmentRiskLevelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskLevelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskLevelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskLevelTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskLevelTrendOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskLevelTrendCallable(const DescribeDSPAAssessmentRiskLevelTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskLevelTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskLevelTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskOverviewOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskOverviewCallable(const DescribeDSPAAssessmentRiskOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskProcessHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskProcessHistoryCallable(const DescribeDSPAAssessmentRiskProcessHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskProcessHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskProcessHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskSideDistributed(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskSideDistributedOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskSideDistributedCallable(const DescribeDSPAAssessmentRiskSideDistributedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskSideDistributedOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskSideDistributed(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskSideList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskSideListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskSideListCallable(const DescribeDSPAAssessmentRiskSideListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskSideListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskSideList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskTemplateDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskTemplateDetailCallable(const DescribeDSPAAssessmentRiskTemplateDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskTemplateDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskTemplateDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRiskTemplateVulnerableList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListOutcomeCallable DsgcClient::DescribeDSPAAssessmentRiskTemplateVulnerableListCallable(const DescribeDSPAAssessmentRiskTemplateVulnerableListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRiskTemplateVulnerableList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentRisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentRisksOutcomeCallable DsgcClient::DescribeDSPAAssessmentRisksCallable(const DescribeDSPAAssessmentRisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentRisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentRisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentTasksOutcomeCallable DsgcClient::DescribeDSPAAssessmentTasksCallable(const DescribeDSPAAssessmentTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentTemplateControlItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentTemplateControlItemsOutcomeCallable DsgcClient::DescribeDSPAAssessmentTemplateControlItemsCallable(const DescribeDSPAAssessmentTemplateControlItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentTemplateControlItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentTemplateControlItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAAssessmentTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAAssessmentTemplatesOutcomeCallable DsgcClient::DescribeDSPAAssessmentTemplatesCallable(const DescribeDSPAAssessmentTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAAssessmentTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAAssessmentTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDataAssetBuckets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDataAssetBucketsOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetBucketsCallable(const DescribeDSPACOSDataAssetBucketsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDataAssetBucketsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDataAssetBuckets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDataAssetByComplianceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetByComplianceIdCallable(const DescribeDSPACOSDataAssetByComplianceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDataAssetByComplianceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDataAssetByComplianceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDataAssetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPACOSDataAssetDetailCallable(const DescribeDSPACOSDataAssetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDataAssetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDataAssetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDiscoveryTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDiscoveryTaskDetailOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskDetailCallable(const DescribeDSPACOSDiscoveryTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDiscoveryTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDiscoveryTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDiscoveryTaskFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDiscoveryTaskFilesOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskFilesCallable(const DescribeDSPACOSDiscoveryTaskFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDiscoveryTaskFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDiscoveryTaskFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDiscoveryTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDiscoveryTaskResultOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTaskResultCallable(const DescribeDSPACOSDiscoveryTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDiscoveryTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDiscoveryTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSDiscoveryTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSDiscoveryTasksOutcomeCallable DsgcClient::DescribeDSPACOSDiscoveryTasksCallable(const DescribeDSPACOSDiscoveryTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSDiscoveryTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSDiscoveryTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACOSTaskResultDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACOSTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPACOSTaskResultDetailCallable(const DescribeDSPACOSTaskResultDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACOSTaskResultDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACOSTaskResultDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACategoriesOutcomeCallable DsgcClient::DescribeDSPACategoriesCallable(const DescribeDSPACategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACategoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACategoryRuleStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACategoryRuleStatisticOutcomeCallable DsgcClient::DescribeDSPACategoryRuleStatisticCallable(const DescribeDSPACategoryRuleStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACategoryRuleStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACategoryRuleStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACategoryRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACategoryRulesOutcomeCallable DsgcClient::DescribeDSPACategoryRulesCallable(const DescribeDSPACategoryRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACategoryRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACategoryRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACategoryTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACategoryTreeOutcomeCallable DsgcClient::DescribeDSPACategoryTreeCallable(const DescribeDSPACategoryTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACategoryTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACategoryTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPACategoryTreeWithRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPACategoryTreeWithRulesOutcomeCallable DsgcClient::DescribeDSPACategoryTreeWithRulesCallable(const DescribeDSPACategoryTreeWithRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPACategoryTreeWithRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPACategoryTreeWithRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAComplianceGroupDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAComplianceGroupDetailOutcomeCallable DsgcClient::DescribeDSPAComplianceGroupDetailCallable(const DescribeDSPAComplianceGroupDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAComplianceGroupDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAComplianceGroupDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAComplianceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAComplianceGroupsOutcomeCallable DsgcClient::DescribeDSPAComplianceGroupsCallable(const DescribeDSPAComplianceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAComplianceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAComplianceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAComplianceUpdateNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAComplianceUpdateNotificationOutcomeCallable DsgcClient::DescribeDSPAComplianceUpdateNotificationCallable(const DescribeDSPAComplianceUpdateNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAComplianceUpdateNotificationOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAComplianceUpdateNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADataSourceDbInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADataSourceDbInfoOutcomeCallable DsgcClient::DescribeDSPADataSourceDbInfoCallable(const DescribeDSPADataSourceDbInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADataSourceDbInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADataSourceDbInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryRulesOutcomeCallable DsgcClient::DescribeDSPADiscoveryRulesCallable(const DescribeDSPADiscoveryRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryServiceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryServiceStatusOutcomeCallable DsgcClient::DescribeDSPADiscoveryServiceStatusCallable(const DescribeDSPADiscoveryServiceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryServiceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryServiceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryTaskDetailOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskDetailCallable(const DescribeDSPADiscoveryTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryTaskResultOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskResultCallable(const DescribeDSPADiscoveryTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryTaskResultDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskResultDetailCallable(const DescribeDSPADiscoveryTaskResultDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryTaskResultDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryTaskResultDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryTaskTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryTaskTablesOutcomeCallable DsgcClient::DescribeDSPADiscoveryTaskTablesCallable(const DescribeDSPADiscoveryTaskTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryTaskTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryTaskTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPADiscoveryTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPADiscoveryTasksOutcomeCallable DsgcClient::DescribeDSPADiscoveryTasksCallable(const DescribeDSPADiscoveryTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPADiscoveryTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPADiscoveryTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAESDataAssetByComplianceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAESDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPAESDataAssetByComplianceIdCallable(const DescribeDSPAESDataAssetByComplianceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAESDataAssetByComplianceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAESDataAssetByComplianceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAESDataAssetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAESDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPAESDataAssetDetailCallable(const DescribeDSPAESDataAssetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAESDataAssetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAESDataAssetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAESDataSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAESDataSampleOutcomeCallable DsgcClient::DescribeDSPAESDataSampleCallable(const DescribeDSPAESDataSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAESDataSampleOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAESDataSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPAESDiscoveryTaskResultDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailOutcomeCallable DsgcClient::DescribeDSPAESDiscoveryTaskResultDetailCallable(const DescribeDSPAESDiscoveryTaskResultDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPAESDiscoveryTaskResultDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPAESDiscoveryTaskResultDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPALevelDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPALevelDetailOutcomeCallable DsgcClient::DescribeDSPALevelDetailCallable(const DescribeDSPALevelDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPALevelDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPALevelDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPALevelGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPALevelGroupsOutcomeCallable DsgcClient::DescribeDSPALevelGroupsCallable(const DescribeDSPALevelGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPALevelGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPALevelGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPARDBDataAssetByComplianceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPARDBDataAssetByComplianceIdOutcomeCallable DsgcClient::DescribeDSPARDBDataAssetByComplianceIdCallable(const DescribeDSPARDBDataAssetByComplianceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPARDBDataAssetByComplianceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPARDBDataAssetByComplianceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPARDBDataAssetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPARDBDataAssetDetailOutcomeCallable DsgcClient::DescribeDSPARDBDataAssetDetailCallable(const DescribeDSPARDBDataAssetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPARDBDataAssetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPARDBDataAssetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPASupportedMetas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPASupportedMetasOutcomeCallable DsgcClient::DescribeDSPASupportedMetasCallable(const DescribeDSPASupportedMetasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPASupportedMetasOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPASupportedMetas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDSPATaskResultDataSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeDSPATaskResultDataSampleOutcomeCallable DsgcClient::DescribeDSPATaskResultDataSampleCallable(const DescribeDSPATaskResultDataSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDSPATaskResultDataSampleOutcome()>>(
        [this, request]()
        {
            return this->DescribeDSPATaskResultDataSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeESAssetSensitiveDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeESAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeESAssetSensitiveDistributionCallable(const DescribeESAssetSensitiveDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeESAssetSensitiveDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeESAssetSensitiveDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExportTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeExportTaskResultOutcomeCallable DsgcClient::DescribeExportTaskResultCallable(const DescribeExportTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeExportTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMongoAssetSensitiveDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeMongoAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeMongoAssetSensitiveDistributionCallable(const DescribeMongoAssetSensitiveDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMongoAssetSensitiveDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeMongoAssetSensitiveDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRDBAssetSensitiveDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeRDBAssetSensitiveDistributionOutcomeCallable DsgcClient::DescribeRDBAssetSensitiveDistributionCallable(const DescribeRDBAssetSensitiveDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRDBAssetSensitiveDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRDBAssetSensitiveDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportTaskDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeReportTaskDownloadUrlOutcomeCallable DsgcClient::DescribeReportTaskDownloadUrlCallable(const DescribeReportTaskDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportTaskDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportTaskDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeReportTasksOutcomeCallable DsgcClient::DescribeReportTasksCallable(const DescribeReportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveCOSDataDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeSensitiveCOSDataDistributionOutcomeCallable DsgcClient::DescribeSensitiveCOSDataDistributionCallable(const DescribeSensitiveCOSDataDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveCOSDataDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveCOSDataDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveRDBDataDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DescribeSensitiveRDBDataDistributionOutcomeCallable DsgcClient::DescribeSensitiveRDBDataDistributionCallable(const DescribeSensitiveRDBDataDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveRDBDataDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveRDBDataDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableDSPAMetaResourceAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::DisableDSPAMetaResourceAuthOutcomeCallable DsgcClient::DisableDSPAMetaResourceAuthCallable(const DisableDSPAMetaResourceAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableDSPAMetaResourceAuthOutcome()>>(
        [this, request]()
        {
            return this->DisableDSPAMetaResourceAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableDSPADiscoveryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::EnableDSPADiscoveryRuleOutcomeCallable DsgcClient::EnableDSPADiscoveryRuleCallable(const EnableDSPADiscoveryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableDSPADiscoveryRuleOutcome()>>(
        [this, request]()
        {
            return this->EnableDSPADiscoveryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableTrialVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::EnableTrialVersionOutcomeCallable DsgcClient::EnableTrialVersionCallable(const EnableTrialVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableTrialVersionOutcome()>>(
        [this, request]()
        {
            return this->EnableTrialVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetDetailData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ExportAssetDetailDataOutcomeCallable DsgcClient::ExportAssetDetailDataCallable(const ExportAssetDetailDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetDetailDataOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetDetailData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetResourceConnectionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::GetResourceConnectionStatusOutcomeCallable DsgcClient::GetResourceConnectionStatusCallable(const GetResourceConnectionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetResourceConnectionStatusOutcome()>>(
        [this, request]()
        {
            return this->GetResourceConnectionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTrialVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::GetTrialVersionOutcomeCallable DsgcClient::GetTrialVersionCallable(const GetTrialVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTrialVersionOutcome()>>(
        [this, request]()
        {
            return this->GetTrialVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUserQuotaInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::GetUserQuotaInfoOutcomeCallable DsgcClient::GetUserQuotaInfoCallable(const GetUserQuotaInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUserQuotaInfoOutcome()>>(
        [this, request]()
        {
            return this->GetUserQuotaInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDSPAClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ListDSPAClustersOutcomeCallable DsgcClient::ListDSPAClustersCallable(const ListDSPAClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDSPAClustersOutcome()>>(
        [this, request]()
        {
            return this->ListDSPAClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDSPACosMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ListDSPACosMetaResourcesOutcomeCallable DsgcClient::ListDSPACosMetaResourcesCallable(const ListDSPACosMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDSPACosMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->ListDSPACosMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDSPAMetaResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ListDSPAMetaResourcesOutcomeCallable DsgcClient::ListDSPAMetaResourcesCallable(const ListDSPAMetaResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDSPAMetaResourcesOutcome()>>(
        [this, request]()
        {
            return this->ListDSPAMetaResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAAssessmentRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAAssessmentRiskOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskCallable(const ModifyDSPAAssessmentRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAAssessmentRiskOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAAssessmentRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAAssessmentRiskLatest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAAssessmentRiskLatestOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskLatestCallable(const ModifyDSPAAssessmentRiskLatestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAAssessmentRiskLatestOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAAssessmentRiskLatest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAAssessmentRiskLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAAssessmentRiskLevelOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskLevelCallable(const ModifyDSPAAssessmentRiskLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAAssessmentRiskLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAAssessmentRiskLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAAssessmentRiskTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAAssessmentRiskTemplateOutcomeCallable DsgcClient::ModifyDSPAAssessmentRiskTemplateCallable(const ModifyDSPAAssessmentRiskTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAAssessmentRiskTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAAssessmentRiskTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPACOSDiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPACOSDiscoveryTaskOutcomeCallable DsgcClient::ModifyDSPACOSDiscoveryTaskCallable(const ModifyDSPACOSDiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPACOSDiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPACOSDiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPACOSTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPACOSTaskResultOutcomeCallable DsgcClient::ModifyDSPACOSTaskResultCallable(const ModifyDSPACOSTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPACOSTaskResultOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPACOSTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPACategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPACategoryOutcomeCallable DsgcClient::ModifyDSPACategoryCallable(const ModifyDSPACategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPACategoryOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPACategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPACategoryRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPACategoryRelationOutcomeCallable DsgcClient::ModifyDSPACategoryRelationCallable(const ModifyDSPACategoryRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPACategoryRelationOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPACategoryRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAClusterInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAClusterInfoOutcomeCallable DsgcClient::ModifyDSPAClusterInfoCallable(const ModifyDSPAClusterInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAClusterInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAClusterInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAComplianceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAComplianceGroupOutcomeCallable DsgcClient::ModifyDSPAComplianceGroupCallable(const ModifyDSPAComplianceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAComplianceGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAComplianceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPADiscoveryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPADiscoveryRuleOutcomeCallable DsgcClient::ModifyDSPADiscoveryRuleCallable(const ModifyDSPADiscoveryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPADiscoveryRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPADiscoveryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPADiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPADiscoveryTaskOutcomeCallable DsgcClient::ModifyDSPADiscoveryTaskCallable(const ModifyDSPADiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPADiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPADiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPAESTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPAESTaskResultOutcomeCallable DsgcClient::ModifyDSPAESTaskResultCallable(const ModifyDSPAESTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPAESTaskResultOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPAESTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDSPATaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::ModifyDSPATaskResultOutcomeCallable DsgcClient::ModifyDSPATaskResultCallable(const ModifyDSPATaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDSPATaskResultOutcome()>>(
        [this, request]()
        {
            return this->ModifyDSPATaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDSPAMetaResourceDbList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::QueryDSPAMetaResourceDbListOutcomeCallable DsgcClient::QueryDSPAMetaResourceDbListCallable(const QueryDSPAMetaResourceDbListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDSPAMetaResourceDbListOutcome()>>(
        [this, request]()
        {
            return this->QueryDSPAMetaResourceDbList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryResourceDbBindStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::QueryResourceDbBindStatusOutcomeCallable DsgcClient::QueryResourceDbBindStatusCallable(const QueryResourceDbBindStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryResourceDbBindStatusOutcome()>>(
        [this, request]()
        {
            return this->QueryResourceDbBindStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDSPAAssessmentTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::RestartDSPAAssessmentTaskOutcomeCallable DsgcClient::RestartDSPAAssessmentTaskCallable(const RestartDSPAAssessmentTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDSPAAssessmentTaskOutcome()>>(
        [this, request]()
        {
            return this->RestartDSPAAssessmentTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartDSPADiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::StartDSPADiscoveryTaskOutcomeCallable DsgcClient::StartDSPADiscoveryTaskCallable(const StartDSPADiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartDSPADiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->StartDSPADiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopDSPADiscoveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::StopDSPADiscoveryTaskOutcomeCallable DsgcClient::StopDSPADiscoveryTaskCallable(const StopDSPADiscoveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopDSPADiscoveryTaskOutcome()>>(
        [this, request]()
        {
            return this->StopDSPADiscoveryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDSPASelfBuildResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::UpdateDSPASelfBuildResourceOutcomeCallable DsgcClient::UpdateDSPASelfBuildResourceCallable(const UpdateDSPASelfBuildResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDSPASelfBuildResourceOutcome()>>(
        [this, request]()
        {
            return this->UpdateDSPASelfBuildResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyDSPACOSRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::VerifyDSPACOSRuleOutcomeCallable DsgcClient::VerifyDSPACOSRuleCallable(const VerifyDSPACOSRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyDSPACOSRuleOutcome()>>(
        [this, request]()
        {
            return this->VerifyDSPACOSRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyDSPADiscoveryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DsgcClient::VerifyDSPADiscoveryRuleOutcomeCallable DsgcClient::VerifyDSPADiscoveryRuleCallable(const VerifyDSPADiscoveryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyDSPADiscoveryRuleOutcome()>>(
        [this, request]()
        {
            return this->VerifyDSPADiscoveryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

