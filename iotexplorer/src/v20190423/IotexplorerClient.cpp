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

#include <tencentcloud/iotexplorer/v20190423/IotexplorerClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotexplorer::V20190423;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-23";
    const string ENDPOINT = "iotexplorer.tencentcloudapi.com";
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region) :
    IotexplorerClient(credential, region, ClientProfile())
{
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotexplorerClient::ControlDeviceDataOutcome IotexplorerClient::ControlDeviceData(const ControlDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceDataResponse rsp = ControlDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceDataOutcome(rsp);
        else
            return ControlDeviceDataOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceDataOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ControlDeviceDataAsync(const ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ControlDeviceDataOutcomeCallable IotexplorerClient::ControlDeviceDataCallable(const ControlDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->ControlDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateProjectOutcome IotexplorerClient::CreateProject(const CreateProjectRequest &request)
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

void IotexplorerClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateProjectOutcomeCallable IotexplorerClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateStudioProductOutcome IotexplorerClient::CreateStudioProduct(const CreateStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStudioProductResponse rsp = CreateStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStudioProductOutcome(rsp);
        else
            return CreateStudioProductOutcome(o.GetError());
    }
    else
    {
        return CreateStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateStudioProductAsync(const CreateStudioProductRequest& request, const CreateStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateStudioProductOutcomeCallable IotexplorerClient::CreateStudioProductCallable(const CreateStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStudioProductOutcome()>>(
        [this, request]()
        {
            return this->CreateStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteProjectOutcome IotexplorerClient::DeleteProject(const DeleteProjectRequest &request)
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

void IotexplorerClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteProjectOutcomeCallable IotexplorerClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteStudioProductOutcome IotexplorerClient::DeleteStudioProduct(const DeleteStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStudioProductResponse rsp = DeleteStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStudioProductOutcome(rsp);
        else
            return DeleteStudioProductOutcome(o.GetError());
    }
    else
    {
        return DeleteStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteStudioProductAsync(const DeleteStudioProductRequest& request, const DeleteStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteStudioProductOutcomeCallable IotexplorerClient::DeleteStudioProductCallable(const DeleteStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStudioProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceDataOutcome IotexplorerClient::DescribeDeviceData(const DescribeDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataResponse rsp = DescribeDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataOutcome(rsp);
        else
            return DescribeDeviceDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceDataAsync(const DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceDataOutcomeCallable IotexplorerClient::DescribeDeviceDataCallable(const DescribeDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceDataHistoryOutcome IotexplorerClient::DescribeDeviceDataHistory(const DescribeDeviceDataHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDataHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataHistoryResponse rsp = DescribeDeviceDataHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataHistoryOutcome(rsp);
        else
            return DescribeDeviceDataHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceDataHistoryAsync(const DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceDataHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceDataHistoryOutcomeCallable IotexplorerClient::DescribeDeviceDataHistoryCallable(const DescribeDeviceDataHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceDataHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceDataHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeModelDefinitionOutcome IotexplorerClient::DescribeModelDefinition(const DescribeModelDefinitionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelDefinition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelDefinitionResponse rsp = DescribeModelDefinitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelDefinitionOutcome(rsp);
        else
            return DescribeModelDefinitionOutcome(o.GetError());
    }
    else
    {
        return DescribeModelDefinitionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeModelDefinitionAsync(const DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeModelDefinitionOutcomeCallable IotexplorerClient::DescribeModelDefinitionCallable(const DescribeModelDefinitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelDefinitionOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelDefinition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeProjectOutcome IotexplorerClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeProjectOutcomeCallable IotexplorerClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeStudioProductOutcome IotexplorerClient::DescribeStudioProduct(const DescribeStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStudioProductResponse rsp = DescribeStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStudioProductOutcome(rsp);
        else
            return DescribeStudioProductOutcome(o.GetError());
    }
    else
    {
        return DescribeStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeStudioProductAsync(const DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeStudioProductOutcomeCallable IotexplorerClient::DescribeStudioProductCallable(const DescribeStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStudioProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetProjectListOutcome IotexplorerClient::GetProjectList(const GetProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "GetProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProjectListResponse rsp = GetProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProjectListOutcome(rsp);
        else
            return GetProjectListOutcome(o.GetError());
    }
    else
    {
        return GetProjectListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetProjectListAsync(const GetProjectListRequest& request, const GetProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetProjectListOutcomeCallable IotexplorerClient::GetProjectListCallable(const GetProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProjectListOutcome()>>(
        [this, request]()
        {
            return this->GetProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetStudioProductListOutcome IotexplorerClient::GetStudioProductList(const GetStudioProductListRequest &request)
{
    auto outcome = MakeRequest(request, "GetStudioProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStudioProductListResponse rsp = GetStudioProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStudioProductListOutcome(rsp);
        else
            return GetStudioProductListOutcome(o.GetError());
    }
    else
    {
        return GetStudioProductListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetStudioProductListAsync(const GetStudioProductListRequest& request, const GetStudioProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetStudioProductList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetStudioProductListOutcomeCallable IotexplorerClient::GetStudioProductListCallable(const GetStudioProductListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetStudioProductListOutcome()>>(
        [this, request]()
        {
            return this->GetStudioProductList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyModelDefinitionOutcome IotexplorerClient::ModifyModelDefinition(const ModifyModelDefinitionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelDefinition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelDefinitionResponse rsp = ModifyModelDefinitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelDefinitionOutcome(rsp);
        else
            return ModifyModelDefinitionOutcome(o.GetError());
    }
    else
    {
        return ModifyModelDefinitionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyModelDefinitionAsync(const ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyModelDefinitionOutcomeCallable IotexplorerClient::ModifyModelDefinitionCallable(const ModifyModelDefinitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModelDefinitionOutcome()>>(
        [this, request]()
        {
            return this->ModifyModelDefinition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyProjectOutcome IotexplorerClient::ModifyProject(const ModifyProjectRequest &request)
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

void IotexplorerClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyProjectOutcomeCallable IotexplorerClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyStudioProductOutcome IotexplorerClient::ModifyStudioProduct(const ModifyStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStudioProductResponse rsp = ModifyStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStudioProductOutcome(rsp);
        else
            return ModifyStudioProductOutcome(o.GetError());
    }
    else
    {
        return ModifyStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyStudioProductAsync(const ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyStudioProductOutcomeCallable IotexplorerClient::ModifyStudioProductCallable(const ModifyStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStudioProductOutcome()>>(
        [this, request]()
        {
            return this->ModifyStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ReleaseStudioProductOutcome IotexplorerClient::ReleaseStudioProduct(const ReleaseStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseStudioProductResponse rsp = ReleaseStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseStudioProductOutcome(rsp);
        else
            return ReleaseStudioProductOutcome(o.GetError());
    }
    else
    {
        return ReleaseStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ReleaseStudioProductAsync(const ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ReleaseStudioProductOutcomeCallable IotexplorerClient::ReleaseStudioProductCallable(const ReleaseStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseStudioProductOutcome()>>(
        [this, request]()
        {
            return this->ReleaseStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::SearchStudioProductOutcome IotexplorerClient::SearchStudioProduct(const SearchStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "SearchStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchStudioProductResponse rsp = SearchStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchStudioProductOutcome(rsp);
        else
            return SearchStudioProductOutcome(o.GetError());
    }
    else
    {
        return SearchStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchStudioProductAsync(const SearchStudioProductRequest& request, const SearchStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::SearchStudioProductOutcomeCallable IotexplorerClient::SearchStudioProductCallable(const SearchStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchStudioProductOutcome()>>(
        [this, request]()
        {
            return this->SearchStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

