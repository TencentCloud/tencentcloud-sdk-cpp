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

#include <tencentcloud/iecp/v20210914/IecpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iecp::V20210914;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-09-14";
    const string ENDPOINT = "iecp.tencentcloudapi.com";
}

IecpClient::IecpClient(const Credential &credential, const string &region) :
    IecpClient(credential, region, ClientProfile())
{
}

IecpClient::IecpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IecpClient::ApplyMarketComponentOutcome IecpClient::ApplyMarketComponent(const ApplyMarketComponentRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyMarketComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyMarketComponentResponse rsp = ApplyMarketComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyMarketComponentOutcome(rsp);
        else
            return ApplyMarketComponentOutcome(o.GetError());
    }
    else
    {
        return ApplyMarketComponentOutcome(outcome.GetError());
    }
}

void IecpClient::ApplyMarketComponentAsync(const ApplyMarketComponentRequest& request, const ApplyMarketComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyMarketComponent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ApplyMarketComponentOutcomeCallable IecpClient::ApplyMarketComponentCallable(const ApplyMarketComponentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyMarketComponentOutcome()>>(
        [this, request]()
        {
            return this->ApplyMarketComponent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateApplicationVisualizationOutcome IecpClient::CreateApplicationVisualization(const CreateApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationVisualizationResponse rsp = CreateApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationVisualizationOutcome(rsp);
        else
            return CreateApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::CreateApplicationVisualizationAsync(const CreateApplicationVisualizationRequest& request, const CreateApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateApplicationVisualizationOutcomeCallable IecpClient::CreateApplicationVisualizationCallable(const CreateApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateConfigMapOutcome IecpClient::CreateConfigMap(const CreateConfigMapRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigMap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigMapResponse rsp = CreateConfigMapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigMapOutcome(rsp);
        else
            return CreateConfigMapOutcome(o.GetError());
    }
    else
    {
        return CreateConfigMapOutcome(outcome.GetError());
    }
}

void IecpClient::CreateConfigMapAsync(const CreateConfigMapRequest& request, const CreateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfigMap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateConfigMapOutcomeCallable IecpClient::CreateConfigMapCallable(const CreateConfigMapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigMapOutcome()>>(
        [this, request]()
        {
            return this->CreateConfigMap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeNodeOutcome IecpClient::CreateEdgeNode(const CreateEdgeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeNodeResponse rsp = CreateEdgeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeNodeOutcome(rsp);
        else
            return CreateEdgeNodeOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeNodeOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeNodeAsync(const CreateEdgeNodeRequest& request, const CreateEdgeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeNodeOutcomeCallable IecpClient::CreateEdgeNodeCallable(const CreateEdgeNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeNodeOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeNodeGroupOutcome IecpClient::CreateEdgeNodeGroup(const CreateEdgeNodeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeNodeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeNodeGroupResponse rsp = CreateEdgeNodeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeNodeGroupOutcome(rsp);
        else
            return CreateEdgeNodeGroupOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeNodeGroupOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeNodeGroupAsync(const CreateEdgeNodeGroupRequest& request, const CreateEdgeNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeNodeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeNodeGroupOutcomeCallable IecpClient::CreateEdgeNodeGroupCallable(const CreateEdgeNodeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeNodeGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeNodeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeNodeUnitTemplateOutcome IecpClient::CreateEdgeNodeUnitTemplate(const CreateEdgeNodeUnitTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeNodeUnitTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeNodeUnitTemplateResponse rsp = CreateEdgeNodeUnitTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeNodeUnitTemplateOutcome(rsp);
        else
            return CreateEdgeNodeUnitTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeNodeUnitTemplateOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeNodeUnitTemplateAsync(const CreateEdgeNodeUnitTemplateRequest& request, const CreateEdgeNodeUnitTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeNodeUnitTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeNodeUnitTemplateOutcomeCallable IecpClient::CreateEdgeNodeUnitTemplateCallable(const CreateEdgeNodeUnitTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeNodeUnitTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeNodeUnitTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeUnitApplicationVisualizationOutcome IecpClient::CreateEdgeUnitApplicationVisualization(const CreateEdgeUnitApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeUnitApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeUnitApplicationVisualizationResponse rsp = CreateEdgeUnitApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeUnitApplicationVisualizationOutcome(rsp);
        else
            return CreateEdgeUnitApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeUnitApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeUnitApplicationVisualizationAsync(const CreateEdgeUnitApplicationVisualizationRequest& request, const CreateEdgeUnitApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeUnitApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeUnitApplicationVisualizationOutcomeCallable IecpClient::CreateEdgeUnitApplicationVisualizationCallable(const CreateEdgeUnitApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeUnitApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeUnitApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeUnitApplicationYamlOutcome IecpClient::CreateEdgeUnitApplicationYaml(const CreateEdgeUnitApplicationYamlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeUnitApplicationYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeUnitApplicationYamlResponse rsp = CreateEdgeUnitApplicationYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeUnitApplicationYamlOutcome(rsp);
        else
            return CreateEdgeUnitApplicationYamlOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeUnitApplicationYamlOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeUnitApplicationYamlAsync(const CreateEdgeUnitApplicationYamlRequest& request, const CreateEdgeUnitApplicationYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeUnitApplicationYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeUnitApplicationYamlOutcomeCallable IecpClient::CreateEdgeUnitApplicationYamlCallable(const CreateEdgeUnitApplicationYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeUnitApplicationYamlOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeUnitApplicationYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateEdgeUnitCloudOutcome IecpClient::CreateEdgeUnitCloud(const CreateEdgeUnitCloudRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeUnitCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeUnitCloudResponse rsp = CreateEdgeUnitCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeUnitCloudOutcome(rsp);
        else
            return CreateEdgeUnitCloudOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeUnitCloudOutcome(outcome.GetError());
    }
}

void IecpClient::CreateEdgeUnitCloudAsync(const CreateEdgeUnitCloudRequest& request, const CreateEdgeUnitCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgeUnitCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateEdgeUnitCloudOutcomeCallable IecpClient::CreateEdgeUnitCloudCallable(const CreateEdgeUnitCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgeUnitCloudOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgeUnitCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateNamespaceOutcome IecpClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void IecpClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateNamespaceOutcomeCallable IecpClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateSecretOutcome IecpClient::CreateSecret(const CreateSecretRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecretResponse rsp = CreateSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecretOutcome(rsp);
        else
            return CreateSecretOutcome(o.GetError());
    }
    else
    {
        return CreateSecretOutcome(outcome.GetError());
    }
}

void IecpClient::CreateSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateSecretOutcomeCallable IecpClient::CreateSecretCallable(const CreateSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
        [this, request]()
        {
            return this->CreateSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::CreateUpdateNodeUnitOutcome IecpClient::CreateUpdateNodeUnit(const CreateUpdateNodeUnitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUpdateNodeUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUpdateNodeUnitResponse rsp = CreateUpdateNodeUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUpdateNodeUnitOutcome(rsp);
        else
            return CreateUpdateNodeUnitOutcome(o.GetError());
    }
    else
    {
        return CreateUpdateNodeUnitOutcome(outcome.GetError());
    }
}

void IecpClient::CreateUpdateNodeUnitAsync(const CreateUpdateNodeUnitRequest& request, const CreateUpdateNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUpdateNodeUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::CreateUpdateNodeUnitOutcomeCallable IecpClient::CreateUpdateNodeUnitCallable(const CreateUpdateNodeUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUpdateNodeUnitOutcome()>>(
        [this, request]()
        {
            return this->CreateUpdateNodeUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteApplicationsOutcome IecpClient::DeleteApplications(const DeleteApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationsResponse rsp = DeleteApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationsOutcome(rsp);
        else
            return DeleteApplicationsOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationsOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteApplicationsAsync(const DeleteApplicationsRequest& request, const DeleteApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteApplicationsOutcomeCallable IecpClient::DeleteApplicationsCallable(const DeleteApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteConfigMapOutcome IecpClient::DeleteConfigMap(const DeleteConfigMapRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigMap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigMapResponse rsp = DeleteConfigMapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigMapOutcome(rsp);
        else
            return DeleteConfigMapOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigMapOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteConfigMapAsync(const DeleteConfigMapRequest& request, const DeleteConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigMap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteConfigMapOutcomeCallable IecpClient::DeleteConfigMapCallable(const DeleteConfigMapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigMapOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigMap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeNodeGroupOutcome IecpClient::DeleteEdgeNodeGroup(const DeleteEdgeNodeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeNodeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeNodeGroupResponse rsp = DeleteEdgeNodeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeNodeGroupOutcome(rsp);
        else
            return DeleteEdgeNodeGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeNodeGroupOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeNodeGroupAsync(const DeleteEdgeNodeGroupRequest& request, const DeleteEdgeNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeNodeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeNodeGroupOutcomeCallable IecpClient::DeleteEdgeNodeGroupCallable(const DeleteEdgeNodeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeNodeGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeNodeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeNodeUnitTemplatesOutcome IecpClient::DeleteEdgeNodeUnitTemplates(const DeleteEdgeNodeUnitTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeNodeUnitTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeNodeUnitTemplatesResponse rsp = DeleteEdgeNodeUnitTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeNodeUnitTemplatesOutcome(rsp);
        else
            return DeleteEdgeNodeUnitTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeNodeUnitTemplatesOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeNodeUnitTemplatesAsync(const DeleteEdgeNodeUnitTemplatesRequest& request, const DeleteEdgeNodeUnitTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeNodeUnitTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeNodeUnitTemplatesOutcomeCallable IecpClient::DeleteEdgeNodeUnitTemplatesCallable(const DeleteEdgeNodeUnitTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeNodeUnitTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeNodeUnitTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeNodesOutcome IecpClient::DeleteEdgeNodes(const DeleteEdgeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeNodesResponse rsp = DeleteEdgeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeNodesOutcome(rsp);
        else
            return DeleteEdgeNodesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeNodesOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeNodesAsync(const DeleteEdgeNodesRequest& request, const DeleteEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeNodesOutcomeCallable IecpClient::DeleteEdgeNodesCallable(const DeleteEdgeNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeNodesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeUnitApplicationsOutcome IecpClient::DeleteEdgeUnitApplications(const DeleteEdgeUnitApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeUnitApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeUnitApplicationsResponse rsp = DeleteEdgeUnitApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeUnitApplicationsOutcome(rsp);
        else
            return DeleteEdgeUnitApplicationsOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeUnitApplicationsOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeUnitApplicationsAsync(const DeleteEdgeUnitApplicationsRequest& request, const DeleteEdgeUnitApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeUnitApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeUnitApplicationsOutcomeCallable IecpClient::DeleteEdgeUnitApplicationsCallable(const DeleteEdgeUnitApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeUnitApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeUnitApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeUnitCloudOutcome IecpClient::DeleteEdgeUnitCloud(const DeleteEdgeUnitCloudRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeUnitCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeUnitCloudResponse rsp = DeleteEdgeUnitCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeUnitCloudOutcome(rsp);
        else
            return DeleteEdgeUnitCloudOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeUnitCloudOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeUnitCloudAsync(const DeleteEdgeUnitCloudRequest& request, const DeleteEdgeUnitCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeUnitCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeUnitCloudOutcomeCallable IecpClient::DeleteEdgeUnitCloudCallable(const DeleteEdgeUnitCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeUnitCloudOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeUnitCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeUnitDeployGridItemOutcome IecpClient::DeleteEdgeUnitDeployGridItem(const DeleteEdgeUnitDeployGridItemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeUnitDeployGridItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeUnitDeployGridItemResponse rsp = DeleteEdgeUnitDeployGridItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeUnitDeployGridItemOutcome(rsp);
        else
            return DeleteEdgeUnitDeployGridItemOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeUnitDeployGridItemOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeUnitDeployGridItemAsync(const DeleteEdgeUnitDeployGridItemRequest& request, const DeleteEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeUnitDeployGridItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeUnitDeployGridItemOutcomeCallable IecpClient::DeleteEdgeUnitDeployGridItemCallable(const DeleteEdgeUnitDeployGridItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeUnitDeployGridItemOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeUnitDeployGridItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteEdgeUnitPodOutcome IecpClient::DeleteEdgeUnitPod(const DeleteEdgeUnitPodRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeUnitPod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeUnitPodResponse rsp = DeleteEdgeUnitPodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeUnitPodOutcome(rsp);
        else
            return DeleteEdgeUnitPodOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeUnitPodOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteEdgeUnitPodAsync(const DeleteEdgeUnitPodRequest& request, const DeleteEdgeUnitPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeUnitPod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteEdgeUnitPodOutcomeCallable IecpClient::DeleteEdgeUnitPodCallable(const DeleteEdgeUnitPodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeUnitPodOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeUnitPod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteNamespaceOutcome IecpClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteNamespaceOutcomeCallable IecpClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteNodeUnitOutcome IecpClient::DeleteNodeUnit(const DeleteNodeUnitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodeUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodeUnitResponse rsp = DeleteNodeUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodeUnitOutcome(rsp);
        else
            return DeleteNodeUnitOutcome(o.GetError());
    }
    else
    {
        return DeleteNodeUnitOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteNodeUnitAsync(const DeleteNodeUnitRequest& request, const DeleteNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNodeUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteNodeUnitOutcomeCallable IecpClient::DeleteNodeUnitCallable(const DeleteNodeUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNodeUnitOutcome()>>(
        [this, request]()
        {
            return this->DeleteNodeUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DeleteSecretOutcome IecpClient::DeleteSecret(const DeleteSecretRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecretResponse rsp = DeleteSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecretOutcome(rsp);
        else
            return DeleteSecretOutcome(o.GetError());
    }
    else
    {
        return DeleteSecretOutcome(outcome.GetError());
    }
}

void IecpClient::DeleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DeleteSecretOutcomeCallable IecpClient::DeleteSecretCallable(const DeleteSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeApplicationVisualizationOutcome IecpClient::DescribeApplicationVisualization(const DescribeApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationVisualizationResponse rsp = DescribeApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationVisualizationOutcome(rsp);
        else
            return DescribeApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeApplicationVisualizationAsync(const DescribeApplicationVisualizationRequest& request, const DescribeApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeApplicationVisualizationOutcomeCallable IecpClient::DescribeApplicationVisualizationCallable(const DescribeApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeApplicationYamlOutcome IecpClient::DescribeApplicationYaml(const DescribeApplicationYamlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationYamlResponse rsp = DescribeApplicationYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationYamlOutcome(rsp);
        else
            return DescribeApplicationYamlOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationYamlOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeApplicationYamlAsync(const DescribeApplicationYamlRequest& request, const DescribeApplicationYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeApplicationYamlOutcomeCallable IecpClient::DescribeApplicationYamlCallable(const DescribeApplicationYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationYamlOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeApplicationYamlErrorOutcome IecpClient::DescribeApplicationYamlError(const DescribeApplicationYamlErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationYamlError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationYamlErrorResponse rsp = DescribeApplicationYamlErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationYamlErrorOutcome(rsp);
        else
            return DescribeApplicationYamlErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationYamlErrorOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeApplicationYamlErrorAsync(const DescribeApplicationYamlErrorRequest& request, const DescribeApplicationYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationYamlError(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeApplicationYamlErrorOutcomeCallable IecpClient::DescribeApplicationYamlErrorCallable(const DescribeApplicationYamlErrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationYamlErrorOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationYamlError(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeApplicationsOutcome IecpClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeApplicationsOutcomeCallable IecpClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeConfigMapOutcome IecpClient::DescribeConfigMap(const DescribeConfigMapRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMapResponse rsp = DescribeConfigMapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMapOutcome(rsp);
        else
            return DescribeConfigMapOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMapOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeConfigMapAsync(const DescribeConfigMapRequest& request, const DescribeConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigMap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeConfigMapOutcomeCallable IecpClient::DescribeConfigMapCallable(const DescribeConfigMapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigMapOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigMap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeConfigMapYamlErrorOutcome IecpClient::DescribeConfigMapYamlError(const DescribeConfigMapYamlErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMapYamlError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMapYamlErrorResponse rsp = DescribeConfigMapYamlErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMapYamlErrorOutcome(rsp);
        else
            return DescribeConfigMapYamlErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMapYamlErrorOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeConfigMapYamlErrorAsync(const DescribeConfigMapYamlErrorRequest& request, const DescribeConfigMapYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigMapYamlError(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeConfigMapYamlErrorOutcomeCallable IecpClient::DescribeConfigMapYamlErrorCallable(const DescribeConfigMapYamlErrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigMapYamlErrorOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigMapYamlError(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeConfigMapsOutcome IecpClient::DescribeConfigMaps(const DescribeConfigMapsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMaps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMapsResponse rsp = DescribeConfigMapsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMapsOutcome(rsp);
        else
            return DescribeConfigMapsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMapsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeConfigMapsAsync(const DescribeConfigMapsRequest& request, const DescribeConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigMaps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeConfigMapsOutcomeCallable IecpClient::DescribeConfigMapsCallable(const DescribeConfigMapsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigMapsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigMaps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeAgentNodeInstallerOutcome IecpClient::DescribeEdgeAgentNodeInstaller(const DescribeEdgeAgentNodeInstallerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeAgentNodeInstaller");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeAgentNodeInstallerResponse rsp = DescribeEdgeAgentNodeInstallerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeAgentNodeInstallerOutcome(rsp);
        else
            return DescribeEdgeAgentNodeInstallerOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeAgentNodeInstallerOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeAgentNodeInstallerAsync(const DescribeEdgeAgentNodeInstallerRequest& request, const DescribeEdgeAgentNodeInstallerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeAgentNodeInstaller(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeAgentNodeInstallerOutcomeCallable IecpClient::DescribeEdgeAgentNodeInstallerCallable(const DescribeEdgeAgentNodeInstallerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeAgentNodeInstallerOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeAgentNodeInstaller(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeDefaultVpcOutcome IecpClient::DescribeEdgeDefaultVpc(const DescribeEdgeDefaultVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeDefaultVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeDefaultVpcResponse rsp = DescribeEdgeDefaultVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeDefaultVpcOutcome(rsp);
        else
            return DescribeEdgeDefaultVpcOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeDefaultVpcOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeDefaultVpcAsync(const DescribeEdgeDefaultVpcRequest& request, const DescribeEdgeDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeDefaultVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeDefaultVpcOutcomeCallable IecpClient::DescribeEdgeDefaultVpcCallable(const DescribeEdgeDefaultVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeDefaultVpcOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeDefaultVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeNodeOutcome IecpClient::DescribeEdgeNode(const DescribeEdgeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeNodeResponse rsp = DescribeEdgeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeNodeOutcome(rsp);
        else
            return DescribeEdgeNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeNodeOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeNodeAsync(const DescribeEdgeNodeRequest& request, const DescribeEdgeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeNodeOutcomeCallable IecpClient::DescribeEdgeNodeCallable(const DescribeEdgeNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeNodePodContainersOutcome IecpClient::DescribeEdgeNodePodContainers(const DescribeEdgeNodePodContainersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeNodePodContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeNodePodContainersResponse rsp = DescribeEdgeNodePodContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeNodePodContainersOutcome(rsp);
        else
            return DescribeEdgeNodePodContainersOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeNodePodContainersOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeNodePodContainersAsync(const DescribeEdgeNodePodContainersRequest& request, const DescribeEdgeNodePodContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeNodePodContainers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeNodePodContainersOutcomeCallable IecpClient::DescribeEdgeNodePodContainersCallable(const DescribeEdgeNodePodContainersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeNodePodContainersOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeNodePodContainers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeNodePodsOutcome IecpClient::DescribeEdgeNodePods(const DescribeEdgeNodePodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeNodePods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeNodePodsResponse rsp = DescribeEdgeNodePodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeNodePodsOutcome(rsp);
        else
            return DescribeEdgeNodePodsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeNodePodsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeNodePodsAsync(const DescribeEdgeNodePodsRequest& request, const DescribeEdgeNodePodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeNodePods(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeNodePodsOutcomeCallable IecpClient::DescribeEdgeNodePodsCallable(const DescribeEdgeNodePodsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeNodePodsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeNodePods(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeNodesOutcome IecpClient::DescribeEdgeNodes(const DescribeEdgeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeNodesResponse rsp = DescribeEdgeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeNodesOutcome(rsp);
        else
            return DescribeEdgeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeNodesOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeNodesAsync(const DescribeEdgeNodesRequest& request, const DescribeEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeNodesOutcomeCallable IecpClient::DescribeEdgeNodesCallable(const DescribeEdgeNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeOperationLogsOutcome IecpClient::DescribeEdgeOperationLogs(const DescribeEdgeOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeOperationLogsResponse rsp = DescribeEdgeOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeOperationLogsOutcome(rsp);
        else
            return DescribeEdgeOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeOperationLogsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeOperationLogsAsync(const DescribeEdgeOperationLogsRequest& request, const DescribeEdgeOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeOperationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeOperationLogsOutcomeCallable IecpClient::DescribeEdgeOperationLogsCallable(const DescribeEdgeOperationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeOperationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeOperationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgePodOutcome IecpClient::DescribeEdgePod(const DescribeEdgePodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgePod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgePodResponse rsp = DescribeEdgePodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgePodOutcome(rsp);
        else
            return DescribeEdgePodOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgePodOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgePodAsync(const DescribeEdgePodRequest& request, const DescribeEdgePodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgePod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgePodOutcomeCallable IecpClient::DescribeEdgePodCallable(const DescribeEdgePodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgePodOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgePod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationEventsOutcome IecpClient::DescribeEdgeUnitApplicationEvents(const DescribeEdgeUnitApplicationEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationEventsResponse rsp = DescribeEdgeUnitApplicationEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationEventsOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationEventsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationEventsAsync(const DescribeEdgeUnitApplicationEventsRequest& request, const DescribeEdgeUnitApplicationEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationEventsOutcomeCallable IecpClient::DescribeEdgeUnitApplicationEventsCallable(const DescribeEdgeUnitApplicationEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationLogsOutcome IecpClient::DescribeEdgeUnitApplicationLogs(const DescribeEdgeUnitApplicationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationLogsResponse rsp = DescribeEdgeUnitApplicationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationLogsOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationLogsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationLogsAsync(const DescribeEdgeUnitApplicationLogsRequest& request, const DescribeEdgeUnitApplicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationLogsOutcomeCallable IecpClient::DescribeEdgeUnitApplicationLogsCallable(const DescribeEdgeUnitApplicationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationPodContainersOutcome IecpClient::DescribeEdgeUnitApplicationPodContainers(const DescribeEdgeUnitApplicationPodContainersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationPodContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationPodContainersResponse rsp = DescribeEdgeUnitApplicationPodContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationPodContainersOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationPodContainersOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationPodContainersOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationPodContainersAsync(const DescribeEdgeUnitApplicationPodContainersRequest& request, const DescribeEdgeUnitApplicationPodContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationPodContainers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationPodContainersOutcomeCallable IecpClient::DescribeEdgeUnitApplicationPodContainersCallable(const DescribeEdgeUnitApplicationPodContainersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationPodContainersOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationPodContainers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationPodsOutcome IecpClient::DescribeEdgeUnitApplicationPods(const DescribeEdgeUnitApplicationPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationPodsResponse rsp = DescribeEdgeUnitApplicationPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationPodsOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationPodsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationPodsAsync(const DescribeEdgeUnitApplicationPodsRequest& request, const DescribeEdgeUnitApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationPods(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationPodsOutcomeCallable IecpClient::DescribeEdgeUnitApplicationPodsCallable(const DescribeEdgeUnitApplicationPodsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationPodsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationPods(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationVisualizationOutcome IecpClient::DescribeEdgeUnitApplicationVisualization(const DescribeEdgeUnitApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationVisualizationResponse rsp = DescribeEdgeUnitApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationVisualizationOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationVisualizationAsync(const DescribeEdgeUnitApplicationVisualizationRequest& request, const DescribeEdgeUnitApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationVisualizationOutcomeCallable IecpClient::DescribeEdgeUnitApplicationVisualizationCallable(const DescribeEdgeUnitApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationYamlOutcome IecpClient::DescribeEdgeUnitApplicationYaml(const DescribeEdgeUnitApplicationYamlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationYamlResponse rsp = DescribeEdgeUnitApplicationYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationYamlOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationYamlOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationYamlOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationYamlAsync(const DescribeEdgeUnitApplicationYamlRequest& request, const DescribeEdgeUnitApplicationYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationYamlOutcomeCallable IecpClient::DescribeEdgeUnitApplicationYamlCallable(const DescribeEdgeUnitApplicationYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationYamlOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationYamlErrorOutcome IecpClient::DescribeEdgeUnitApplicationYamlError(const DescribeEdgeUnitApplicationYamlErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplicationYamlError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationYamlErrorResponse rsp = DescribeEdgeUnitApplicationYamlErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationYamlErrorOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationYamlErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationYamlErrorOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationYamlErrorAsync(const DescribeEdgeUnitApplicationYamlErrorRequest& request, const DescribeEdgeUnitApplicationYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplicationYamlError(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationYamlErrorOutcomeCallable IecpClient::DescribeEdgeUnitApplicationYamlErrorCallable(const DescribeEdgeUnitApplicationYamlErrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationYamlErrorOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplicationYamlError(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitApplicationsOutcome IecpClient::DescribeEdgeUnitApplications(const DescribeEdgeUnitApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitApplicationsResponse rsp = DescribeEdgeUnitApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitApplicationsOutcome(rsp);
        else
            return DescribeEdgeUnitApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitApplicationsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitApplicationsAsync(const DescribeEdgeUnitApplicationsRequest& request, const DescribeEdgeUnitApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitApplicationsOutcomeCallable IecpClient::DescribeEdgeUnitApplicationsCallable(const DescribeEdgeUnitApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitCloudOutcome IecpClient::DescribeEdgeUnitCloud(const DescribeEdgeUnitCloudRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitCloudResponse rsp = DescribeEdgeUnitCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitCloudOutcome(rsp);
        else
            return DescribeEdgeUnitCloudOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitCloudOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitCloudAsync(const DescribeEdgeUnitCloudRequest& request, const DescribeEdgeUnitCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitCloudOutcomeCallable IecpClient::DescribeEdgeUnitCloudCallable(const DescribeEdgeUnitCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitCloudOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitDeployGridOutcome IecpClient::DescribeEdgeUnitDeployGrid(const DescribeEdgeUnitDeployGridRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitDeployGrid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitDeployGridResponse rsp = DescribeEdgeUnitDeployGridResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitDeployGridOutcome(rsp);
        else
            return DescribeEdgeUnitDeployGridOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitDeployGridOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitDeployGridAsync(const DescribeEdgeUnitDeployGridRequest& request, const DescribeEdgeUnitDeployGridAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitDeployGrid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitDeployGridOutcomeCallable IecpClient::DescribeEdgeUnitDeployGridCallable(const DescribeEdgeUnitDeployGridRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitDeployGridOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitDeployGrid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitDeployGridItemOutcome IecpClient::DescribeEdgeUnitDeployGridItem(const DescribeEdgeUnitDeployGridItemRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitDeployGridItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitDeployGridItemResponse rsp = DescribeEdgeUnitDeployGridItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitDeployGridItemOutcome(rsp);
        else
            return DescribeEdgeUnitDeployGridItemOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitDeployGridItemOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitDeployGridItemAsync(const DescribeEdgeUnitDeployGridItemRequest& request, const DescribeEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitDeployGridItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitDeployGridItemOutcomeCallable IecpClient::DescribeEdgeUnitDeployGridItemCallable(const DescribeEdgeUnitDeployGridItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitDeployGridItemOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitDeployGridItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitDeployGridItemYamlOutcome IecpClient::DescribeEdgeUnitDeployGridItemYaml(const DescribeEdgeUnitDeployGridItemYamlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitDeployGridItemYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitDeployGridItemYamlResponse rsp = DescribeEdgeUnitDeployGridItemYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitDeployGridItemYamlOutcome(rsp);
        else
            return DescribeEdgeUnitDeployGridItemYamlOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitDeployGridItemYamlOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitDeployGridItemYamlAsync(const DescribeEdgeUnitDeployGridItemYamlRequest& request, const DescribeEdgeUnitDeployGridItemYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitDeployGridItemYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitDeployGridItemYamlOutcomeCallable IecpClient::DescribeEdgeUnitDeployGridItemYamlCallable(const DescribeEdgeUnitDeployGridItemYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitDeployGridItemYamlOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitDeployGridItemYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitExtraOutcome IecpClient::DescribeEdgeUnitExtra(const DescribeEdgeUnitExtraRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitExtraResponse rsp = DescribeEdgeUnitExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitExtraOutcome(rsp);
        else
            return DescribeEdgeUnitExtraOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitExtraOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitExtraAsync(const DescribeEdgeUnitExtraRequest& request, const DescribeEdgeUnitExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitExtra(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitExtraOutcomeCallable IecpClient::DescribeEdgeUnitExtraCallable(const DescribeEdgeUnitExtraRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitExtraOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitExtra(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitGridEventsOutcome IecpClient::DescribeEdgeUnitGridEvents(const DescribeEdgeUnitGridEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitGridEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitGridEventsResponse rsp = DescribeEdgeUnitGridEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitGridEventsOutcome(rsp);
        else
            return DescribeEdgeUnitGridEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitGridEventsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitGridEventsAsync(const DescribeEdgeUnitGridEventsRequest& request, const DescribeEdgeUnitGridEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitGridEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitGridEventsOutcomeCallable IecpClient::DescribeEdgeUnitGridEventsCallable(const DescribeEdgeUnitGridEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitGridEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitGridEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitGridPodsOutcome IecpClient::DescribeEdgeUnitGridPods(const DescribeEdgeUnitGridPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitGridPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitGridPodsResponse rsp = DescribeEdgeUnitGridPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitGridPodsOutcome(rsp);
        else
            return DescribeEdgeUnitGridPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitGridPodsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitGridPodsAsync(const DescribeEdgeUnitGridPodsRequest& request, const DescribeEdgeUnitGridPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitGridPods(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitGridPodsOutcomeCallable IecpClient::DescribeEdgeUnitGridPodsCallable(const DescribeEdgeUnitGridPodsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitGridPodsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitGridPods(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitMonitorStatusOutcome IecpClient::DescribeEdgeUnitMonitorStatus(const DescribeEdgeUnitMonitorStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitMonitorStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitMonitorStatusResponse rsp = DescribeEdgeUnitMonitorStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitMonitorStatusOutcome(rsp);
        else
            return DescribeEdgeUnitMonitorStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitMonitorStatusOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitMonitorStatusAsync(const DescribeEdgeUnitMonitorStatusRequest& request, const DescribeEdgeUnitMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitMonitorStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitMonitorStatusOutcomeCallable IecpClient::DescribeEdgeUnitMonitorStatusCallable(const DescribeEdgeUnitMonitorStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitMonitorStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitMonitorStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitNodeGroupOutcome IecpClient::DescribeEdgeUnitNodeGroup(const DescribeEdgeUnitNodeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitNodeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitNodeGroupResponse rsp = DescribeEdgeUnitNodeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitNodeGroupOutcome(rsp);
        else
            return DescribeEdgeUnitNodeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitNodeGroupOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitNodeGroupAsync(const DescribeEdgeUnitNodeGroupRequest& request, const DescribeEdgeUnitNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitNodeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitNodeGroupOutcomeCallable IecpClient::DescribeEdgeUnitNodeGroupCallable(const DescribeEdgeUnitNodeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitNodeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitNodeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitNodeUnitTemplatesOutcome IecpClient::DescribeEdgeUnitNodeUnitTemplates(const DescribeEdgeUnitNodeUnitTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitNodeUnitTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitNodeUnitTemplatesResponse rsp = DescribeEdgeUnitNodeUnitTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitNodeUnitTemplatesOutcome(rsp);
        else
            return DescribeEdgeUnitNodeUnitTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitNodeUnitTemplatesOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitNodeUnitTemplatesAsync(const DescribeEdgeUnitNodeUnitTemplatesRequest& request, const DescribeEdgeUnitNodeUnitTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitNodeUnitTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitNodeUnitTemplatesOutcomeCallable IecpClient::DescribeEdgeUnitNodeUnitTemplatesCallable(const DescribeEdgeUnitNodeUnitTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitNodeUnitTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitNodeUnitTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeEdgeUnitsCloudOutcome IecpClient::DescribeEdgeUnitsCloud(const DescribeEdgeUnitsCloudRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeUnitsCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeUnitsCloudResponse rsp = DescribeEdgeUnitsCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeUnitsCloudOutcome(rsp);
        else
            return DescribeEdgeUnitsCloudOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeUnitsCloudOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeEdgeUnitsCloudAsync(const DescribeEdgeUnitsCloudRequest& request, const DescribeEdgeUnitsCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeUnitsCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeEdgeUnitsCloudOutcomeCallable IecpClient::DescribeEdgeUnitsCloudCallable(const DescribeEdgeUnitsCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeUnitsCloudOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeUnitsCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeMonitorMetricsOutcome IecpClient::DescribeMonitorMetrics(const DescribeMonitorMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorMetricsResponse rsp = DescribeMonitorMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorMetricsOutcome(rsp);
        else
            return DescribeMonitorMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorMetricsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeMonitorMetricsAsync(const DescribeMonitorMetricsRequest& request, const DescribeMonitorMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeMonitorMetricsOutcomeCallable IecpClient::DescribeMonitorMetricsCallable(const DescribeMonitorMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeNamespaceOutcome IecpClient::DescribeNamespace(const DescribeNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespaceResponse rsp = DescribeNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespaceOutcome(rsp);
        else
            return DescribeNamespaceOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespaceOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeNamespaceOutcomeCallable IecpClient::DescribeNamespaceCallable(const DescribeNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeNamespaceResourcesOutcome IecpClient::DescribeNamespaceResources(const DescribeNamespaceResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaceResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespaceResourcesResponse rsp = DescribeNamespaceResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespaceResourcesOutcome(rsp);
        else
            return DescribeNamespaceResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespaceResourcesOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeNamespaceResourcesAsync(const DescribeNamespaceResourcesRequest& request, const DescribeNamespaceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaceResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeNamespaceResourcesOutcomeCallable IecpClient::DescribeNamespaceResourcesCallable(const DescribeNamespaceResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespaceResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespaceResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeNamespacesOutcome IecpClient::DescribeNamespaces(const DescribeNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacesResponse rsp = DescribeNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacesOutcome(rsp);
        else
            return DescribeNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacesOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeNamespacesOutcomeCallable IecpClient::DescribeNamespacesCallable(const DescribeNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeNodeUnitOutcome IecpClient::DescribeNodeUnit(const DescribeNodeUnitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeUnitResponse rsp = DescribeNodeUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeUnitOutcome(rsp);
        else
            return DescribeNodeUnitOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeUnitOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeNodeUnitAsync(const DescribeNodeUnitRequest& request, const DescribeNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeNodeUnitOutcomeCallable IecpClient::DescribeNodeUnitCallable(const DescribeNodeUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeUnitOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeNodeUnitTemplateOnNodeGroupOutcome IecpClient::DescribeNodeUnitTemplateOnNodeGroup(const DescribeNodeUnitTemplateOnNodeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeUnitTemplateOnNodeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeUnitTemplateOnNodeGroupResponse rsp = DescribeNodeUnitTemplateOnNodeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeUnitTemplateOnNodeGroupOutcome(rsp);
        else
            return DescribeNodeUnitTemplateOnNodeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeUnitTemplateOnNodeGroupOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeNodeUnitTemplateOnNodeGroupAsync(const DescribeNodeUnitTemplateOnNodeGroupRequest& request, const DescribeNodeUnitTemplateOnNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeUnitTemplateOnNodeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeNodeUnitTemplateOnNodeGroupOutcomeCallable IecpClient::DescribeNodeUnitTemplateOnNodeGroupCallable(const DescribeNodeUnitTemplateOnNodeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeUnitTemplateOnNodeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeUnitTemplateOnNodeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeSecretOutcome IecpClient::DescribeSecret(const DescribeSecretRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecretResponse rsp = DescribeSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecretOutcome(rsp);
        else
            return DescribeSecretOutcome(o.GetError());
    }
    else
    {
        return DescribeSecretOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeSecretOutcomeCallable IecpClient::DescribeSecretCallable(const DescribeSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecretOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeSecretYamlErrorOutcome IecpClient::DescribeSecretYamlError(const DescribeSecretYamlErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecretYamlError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecretYamlErrorResponse rsp = DescribeSecretYamlErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecretYamlErrorOutcome(rsp);
        else
            return DescribeSecretYamlErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeSecretYamlErrorOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeSecretYamlErrorAsync(const DescribeSecretYamlErrorRequest& request, const DescribeSecretYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecretYamlError(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeSecretYamlErrorOutcomeCallable IecpClient::DescribeSecretYamlErrorCallable(const DescribeSecretYamlErrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecretYamlErrorOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecretYamlError(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::DescribeSecretsOutcome IecpClient::DescribeSecrets(const DescribeSecretsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecrets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecretsResponse rsp = DescribeSecretsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecretsOutcome(rsp);
        else
            return DescribeSecretsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecretsOutcome(outcome.GetError());
    }
}

void IecpClient::DescribeSecretsAsync(const DescribeSecretsRequest& request, const DescribeSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecrets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::DescribeSecretsOutcomeCallable IecpClient::DescribeSecretsCallable(const DescribeSecretsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecretsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecrets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::GetMarketComponentOutcome IecpClient::GetMarketComponent(const GetMarketComponentRequest &request)
{
    auto outcome = MakeRequest(request, "GetMarketComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMarketComponentResponse rsp = GetMarketComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMarketComponentOutcome(rsp);
        else
            return GetMarketComponentOutcome(o.GetError());
    }
    else
    {
        return GetMarketComponentOutcome(outcome.GetError());
    }
}

void IecpClient::GetMarketComponentAsync(const GetMarketComponentRequest& request, const GetMarketComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMarketComponent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::GetMarketComponentOutcomeCallable IecpClient::GetMarketComponentCallable(const GetMarketComponentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMarketComponentOutcome()>>(
        [this, request]()
        {
            return this->GetMarketComponent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::GetMarketComponentListOutcome IecpClient::GetMarketComponentList(const GetMarketComponentListRequest &request)
{
    auto outcome = MakeRequest(request, "GetMarketComponentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMarketComponentListResponse rsp = GetMarketComponentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMarketComponentListOutcome(rsp);
        else
            return GetMarketComponentListOutcome(o.GetError());
    }
    else
    {
        return GetMarketComponentListOutcome(outcome.GetError());
    }
}

void IecpClient::GetMarketComponentListAsync(const GetMarketComponentListRequest& request, const GetMarketComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMarketComponentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::GetMarketComponentListOutcomeCallable IecpClient::GetMarketComponentListCallable(const GetMarketComponentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMarketComponentListOutcome()>>(
        [this, request]()
        {
            return this->GetMarketComponentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyApplicationBasicInfoOutcome IecpClient::ModifyApplicationBasicInfo(const ModifyApplicationBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationBasicInfoResponse rsp = ModifyApplicationBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationBasicInfoOutcome(rsp);
        else
            return ModifyApplicationBasicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationBasicInfoOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyApplicationBasicInfoAsync(const ModifyApplicationBasicInfoRequest& request, const ModifyApplicationBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyApplicationBasicInfoOutcomeCallable IecpClient::ModifyApplicationBasicInfoCallable(const ModifyApplicationBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyApplicationVisualizationOutcome IecpClient::ModifyApplicationVisualization(const ModifyApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationVisualizationResponse rsp = ModifyApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationVisualizationOutcome(rsp);
        else
            return ModifyApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyApplicationVisualizationAsync(const ModifyApplicationVisualizationRequest& request, const ModifyApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyApplicationVisualizationOutcomeCallable IecpClient::ModifyApplicationVisualizationCallable(const ModifyApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyConfigMapOutcome IecpClient::ModifyConfigMap(const ModifyConfigMapRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigMap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigMapResponse rsp = ModifyConfigMapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigMapOutcome(rsp);
        else
            return ModifyConfigMapOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigMapOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyConfigMapAsync(const ModifyConfigMapRequest& request, const ModifyConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfigMap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyConfigMapOutcomeCallable IecpClient::ModifyConfigMapCallable(const ModifyConfigMapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigMapOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfigMap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeNodeLabelsOutcome IecpClient::ModifyEdgeNodeLabels(const ModifyEdgeNodeLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeNodeLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeNodeLabelsResponse rsp = ModifyEdgeNodeLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeNodeLabelsOutcome(rsp);
        else
            return ModifyEdgeNodeLabelsOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeNodeLabelsOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeNodeLabelsAsync(const ModifyEdgeNodeLabelsRequest& request, const ModifyEdgeNodeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeNodeLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeNodeLabelsOutcomeCallable IecpClient::ModifyEdgeNodeLabelsCallable(const ModifyEdgeNodeLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeNodeLabelsOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeNodeLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeUnitOutcome IecpClient::ModifyEdgeUnit(const ModifyEdgeUnitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeUnitResponse rsp = ModifyEdgeUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeUnitOutcome(rsp);
        else
            return ModifyEdgeUnitOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeUnitOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeUnitAsync(const ModifyEdgeUnitRequest& request, const ModifyEdgeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeUnitOutcomeCallable IecpClient::ModifyEdgeUnitCallable(const ModifyEdgeUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeUnitOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeUnitApplicationBasicInfoOutcome IecpClient::ModifyEdgeUnitApplicationBasicInfo(const ModifyEdgeUnitApplicationBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeUnitApplicationBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeUnitApplicationBasicInfoResponse rsp = ModifyEdgeUnitApplicationBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeUnitApplicationBasicInfoOutcome(rsp);
        else
            return ModifyEdgeUnitApplicationBasicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeUnitApplicationBasicInfoOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeUnitApplicationBasicInfoAsync(const ModifyEdgeUnitApplicationBasicInfoRequest& request, const ModifyEdgeUnitApplicationBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeUnitApplicationBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeUnitApplicationBasicInfoOutcomeCallable IecpClient::ModifyEdgeUnitApplicationBasicInfoCallable(const ModifyEdgeUnitApplicationBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeUnitApplicationBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeUnitApplicationBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeUnitApplicationVisualizationOutcome IecpClient::ModifyEdgeUnitApplicationVisualization(const ModifyEdgeUnitApplicationVisualizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeUnitApplicationVisualization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeUnitApplicationVisualizationResponse rsp = ModifyEdgeUnitApplicationVisualizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeUnitApplicationVisualizationOutcome(rsp);
        else
            return ModifyEdgeUnitApplicationVisualizationOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeUnitApplicationVisualizationOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeUnitApplicationVisualizationAsync(const ModifyEdgeUnitApplicationVisualizationRequest& request, const ModifyEdgeUnitApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeUnitApplicationVisualization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeUnitApplicationVisualizationOutcomeCallable IecpClient::ModifyEdgeUnitApplicationVisualizationCallable(const ModifyEdgeUnitApplicationVisualizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeUnitApplicationVisualizationOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeUnitApplicationVisualization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeUnitApplicationYamlOutcome IecpClient::ModifyEdgeUnitApplicationYaml(const ModifyEdgeUnitApplicationYamlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeUnitApplicationYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeUnitApplicationYamlResponse rsp = ModifyEdgeUnitApplicationYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeUnitApplicationYamlOutcome(rsp);
        else
            return ModifyEdgeUnitApplicationYamlOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeUnitApplicationYamlOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeUnitApplicationYamlAsync(const ModifyEdgeUnitApplicationYamlRequest& request, const ModifyEdgeUnitApplicationYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeUnitApplicationYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeUnitApplicationYamlOutcomeCallable IecpClient::ModifyEdgeUnitApplicationYamlCallable(const ModifyEdgeUnitApplicationYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeUnitApplicationYamlOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeUnitApplicationYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyEdgeUnitDeployGridItemOutcome IecpClient::ModifyEdgeUnitDeployGridItem(const ModifyEdgeUnitDeployGridItemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeUnitDeployGridItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeUnitDeployGridItemResponse rsp = ModifyEdgeUnitDeployGridItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeUnitDeployGridItemOutcome(rsp);
        else
            return ModifyEdgeUnitDeployGridItemOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeUnitDeployGridItemOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyEdgeUnitDeployGridItemAsync(const ModifyEdgeUnitDeployGridItemRequest& request, const ModifyEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeUnitDeployGridItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyEdgeUnitDeployGridItemOutcomeCallable IecpClient::ModifyEdgeUnitDeployGridItemCallable(const ModifyEdgeUnitDeployGridItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeUnitDeployGridItemOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeUnitDeployGridItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifyNodeUnitTemplateOutcome IecpClient::ModifyNodeUnitTemplate(const ModifyNodeUnitTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodeUnitTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodeUnitTemplateResponse rsp = ModifyNodeUnitTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodeUnitTemplateOutcome(rsp);
        else
            return ModifyNodeUnitTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyNodeUnitTemplateOutcome(outcome.GetError());
    }
}

void IecpClient::ModifyNodeUnitTemplateAsync(const ModifyNodeUnitTemplateRequest& request, const ModifyNodeUnitTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodeUnitTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifyNodeUnitTemplateOutcomeCallable IecpClient::ModifyNodeUnitTemplateCallable(const ModifyNodeUnitTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodeUnitTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodeUnitTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::ModifySecretOutcome IecpClient::ModifySecret(const ModifySecretRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecretResponse rsp = ModifySecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecretOutcome(rsp);
        else
            return ModifySecretOutcome(o.GetError());
    }
    else
    {
        return ModifySecretOutcome(outcome.GetError());
    }
}

void IecpClient::ModifySecretAsync(const ModifySecretRequest& request, const ModifySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::ModifySecretOutcomeCallable IecpClient::ModifySecretCallable(const ModifySecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecretOutcome()>>(
        [this, request]()
        {
            return this->ModifySecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IecpClient::RedeployEdgeUnitApplicationOutcome IecpClient::RedeployEdgeUnitApplication(const RedeployEdgeUnitApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RedeployEdgeUnitApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedeployEdgeUnitApplicationResponse rsp = RedeployEdgeUnitApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedeployEdgeUnitApplicationOutcome(rsp);
        else
            return RedeployEdgeUnitApplicationOutcome(o.GetError());
    }
    else
    {
        return RedeployEdgeUnitApplicationOutcome(outcome.GetError());
    }
}

void IecpClient::RedeployEdgeUnitApplicationAsync(const RedeployEdgeUnitApplicationRequest& request, const RedeployEdgeUnitApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RedeployEdgeUnitApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IecpClient::RedeployEdgeUnitApplicationOutcomeCallable IecpClient::RedeployEdgeUnitApplicationCallable(const RedeployEdgeUnitApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RedeployEdgeUnitApplicationOutcome()>>(
        [this, request]()
        {
            return this->RedeployEdgeUnitApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

