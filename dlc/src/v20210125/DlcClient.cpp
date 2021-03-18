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

#include <tencentcloud/dlc/v20210125/DlcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dlc::V20210125;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-25";
    const string ENDPOINT = "dlc.tencentcloudapi.com";
}

DlcClient::DlcClient(const Credential &credential, const string &region) :
    DlcClient(credential, region, ClientProfile())
{
}

DlcClient::DlcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DlcClient::CreateDatabaseOutcome DlcClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDatabaseOutcomeCallable DlcClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateScriptOutcome DlcClient::CreateScript(const CreateScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScriptResponse rsp = CreateScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScriptOutcome(rsp);
        else
            return CreateScriptOutcome(o.GetError());
    }
    else
    {
        return CreateScriptOutcome(outcome.GetError());
    }
}

void DlcClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateScriptOutcomeCallable DlcClient::CreateScriptCallable(const CreateScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScriptOutcome()>>(
        [this, request]()
        {
            return this->CreateScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTableOutcome DlcClient::CreateTable(const CreateTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableResponse rsp = CreateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableOutcome(rsp);
        else
            return CreateTableOutcome(o.GetError());
    }
    else
    {
        return CreateTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTableOutcomeCallable DlcClient::CreateTableCallable(const CreateTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
        [this, request]()
        {
            return this->CreateTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTaskOutcome DlcClient::CreateTask(const CreateTaskRequest &request)
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

void DlcClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTaskOutcomeCallable DlcClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteScriptOutcome DlcClient::DeleteScript(const DeleteScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScriptResponse rsp = DeleteScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScriptOutcome(rsp);
        else
            return DeleteScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteScriptOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteScriptOutcomeCallable DlcClient::DeleteScriptCallable(const DeleteScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScriptOutcome()>>(
        [this, request]()
        {
            return this->DeleteScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDatabasesOutcome DlcClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDatabasesOutcomeCallable DlcClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeScriptsOutcome DlcClient::DescribeScripts(const DescribeScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScriptsResponse rsp = DescribeScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScriptsOutcome(rsp);
        else
            return DescribeScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeScriptsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeScriptsAsync(const DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScripts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeScriptsOutcomeCallable DlcClient::DescribeScriptsCallable(const DescribeScriptsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScriptsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScripts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTableOutcome DlcClient::DescribeTable(const DescribeTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableResponse rsp = DescribeTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableOutcome(rsp);
        else
            return DescribeTableOutcome(o.GetError());
    }
    else
    {
        return DescribeTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTableOutcomeCallable DlcClient::DescribeTableCallable(const DescribeTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTablesOutcome DlcClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTablesOutcomeCallable DlcClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTasksOutcome DlcClient::DescribeTasks(const DescribeTasksRequest &request)
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

void DlcClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksOutcomeCallable DlcClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeViewsOutcome DlcClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeViews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeViewsOutcomeCallable DlcClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeViewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeViews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

