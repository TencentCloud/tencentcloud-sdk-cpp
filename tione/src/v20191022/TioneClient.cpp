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

#include <tencentcloud/tione/v20191022/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20191022;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-22";
    const string ENDPOINT = "tione.tencentcloudapi.com";
}

TioneClient::TioneClient(const Credential &credential, const string &region) :
    TioneClient(credential, region, ClientProfile())
{
}

TioneClient::TioneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TioneClient::CreateCodeRepositoryOutcome TioneClient::CreateCodeRepository(const CreateCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeRepositoryResponse rsp = CreateCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeRepositoryOutcome(rsp);
        else
            return CreateCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::CreateCodeRepositoryAsync(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateCodeRepositoryOutcomeCallable TioneClient::CreateCodeRepositoryCallable(const CreateCodeRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeRepositoryOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateNotebookInstanceOutcome TioneClient::CreateNotebookInstance(const CreateNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookInstanceResponse rsp = CreateNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookInstanceOutcome(rsp);
        else
            return CreateNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::CreateNotebookInstanceAsync(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateNotebookInstanceOutcomeCallable TioneClient::CreateNotebookInstanceCallable(const CreateNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateNotebookLifecycleScriptOutcome TioneClient::CreateNotebookLifecycleScript(const CreateNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookLifecycleScriptResponse rsp = CreateNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookLifecycleScriptOutcome(rsp);
        else
            return CreateNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::CreateNotebookLifecycleScriptAsync(const CreateNotebookLifecycleScriptRequest& request, const CreateNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotebookLifecycleScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateNotebookLifecycleScriptOutcomeCallable TioneClient::CreateNotebookLifecycleScriptCallable(const CreateNotebookLifecycleScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotebookLifecycleScriptOutcome()>>(
        [this, request]()
        {
            return this->CreateNotebookLifecycleScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreatePresignedNotebookInstanceUrlOutcome TioneClient::CreatePresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresignedNotebookInstanceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresignedNotebookInstanceUrlResponse rsp = CreatePresignedNotebookInstanceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresignedNotebookInstanceUrlOutcome(rsp);
        else
            return CreatePresignedNotebookInstanceUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePresignedNotebookInstanceUrlOutcome(outcome.GetError());
    }
}

void TioneClient::CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePresignedNotebookInstanceUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreatePresignedNotebookInstanceUrlOutcomeCallable TioneClient::CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePresignedNotebookInstanceUrlOutcome()>>(
        [this, request]()
        {
            return this->CreatePresignedNotebookInstanceUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateTrainingJobOutcome TioneClient::CreateTrainingJob(const CreateTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingJobResponse rsp = CreateTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingJobOutcome(rsp);
        else
            return CreateTrainingJobOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingJobAsync(const CreateTrainingJobRequest& request, const CreateTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrainingJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateTrainingJobOutcomeCallable TioneClient::CreateTrainingJobCallable(const CreateTrainingJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrainingJobOutcome()>>(
        [this, request]()
        {
            return this->CreateTrainingJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteCodeRepositoryOutcome TioneClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeRepositoryResponse rsp = DeleteCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeRepositoryOutcome(rsp);
        else
            return DeleteCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCodeRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteCodeRepositoryOutcomeCallable TioneClient::DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCodeRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteCodeRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteNotebookInstanceOutcome TioneClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookInstanceResponse rsp = DeleteNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookInstanceOutcome(rsp);
        else
            return DeleteNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteNotebookInstanceOutcomeCallable TioneClient::DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteNotebookLifecycleScriptOutcome TioneClient::DeleteNotebookLifecycleScript(const DeleteNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookLifecycleScriptResponse rsp = DeleteNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookLifecycleScriptOutcome(rsp);
        else
            return DeleteNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteNotebookLifecycleScriptAsync(const DeleteNotebookLifecycleScriptRequest& request, const DeleteNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNotebookLifecycleScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteNotebookLifecycleScriptOutcomeCallable TioneClient::DeleteNotebookLifecycleScriptCallable(const DeleteNotebookLifecycleScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNotebookLifecycleScriptOutcome()>>(
        [this, request]()
        {
            return this->DeleteNotebookLifecycleScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeCodeRepositoriesOutcome TioneClient::DescribeCodeRepositories(const DescribeCodeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeRepositoriesResponse rsp = DescribeCodeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeRepositoriesOutcome(rsp);
        else
            return DescribeCodeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeRepositoriesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeCodeRepositoriesAsync(const DescribeCodeRepositoriesRequest& request, const DescribeCodeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeRepositories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeCodeRepositoriesOutcomeCallable TioneClient::DescribeCodeRepositoriesCallable(const DescribeCodeRepositoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeRepositoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeRepositories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeCodeRepositoryOutcome TioneClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeRepositoryResponse rsp = DescribeCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeRepositoryOutcome(rsp);
        else
            return DescribeCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeCodeRepositoryOutcomeCallable TioneClient::DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeNotebookInstanceOutcome TioneClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookInstanceResponse rsp = DescribeNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookInstanceOutcome(rsp);
        else
            return DescribeNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeNotebookInstanceOutcomeCallable TioneClient::DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeNotebookInstancesOutcome TioneClient::DescribeNotebookInstances(const DescribeNotebookInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookInstancesResponse rsp = DescribeNotebookInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookInstancesOutcome(rsp);
        else
            return DescribeNotebookInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookInstancesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookInstancesAsync(const DescribeNotebookInstancesRequest& request, const DescribeNotebookInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeNotebookInstancesOutcomeCallable TioneClient::DescribeNotebookInstancesCallable(const DescribeNotebookInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeNotebookLifecycleScriptOutcome TioneClient::DescribeNotebookLifecycleScript(const DescribeNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookLifecycleScriptResponse rsp = DescribeNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookLifecycleScriptOutcome(rsp);
        else
            return DescribeNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookLifecycleScriptAsync(const DescribeNotebookLifecycleScriptRequest& request, const DescribeNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookLifecycleScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeNotebookLifecycleScriptOutcomeCallable TioneClient::DescribeNotebookLifecycleScriptCallable(const DescribeNotebookLifecycleScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookLifecycleScriptOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookLifecycleScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeNotebookLifecycleScriptsOutcome TioneClient::DescribeNotebookLifecycleScripts(const DescribeNotebookLifecycleScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookLifecycleScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookLifecycleScriptsResponse rsp = DescribeNotebookLifecycleScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookLifecycleScriptsOutcome(rsp);
        else
            return DescribeNotebookLifecycleScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookLifecycleScriptsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookLifecycleScriptsAsync(const DescribeNotebookLifecycleScriptsRequest& request, const DescribeNotebookLifecycleScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookLifecycleScripts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeNotebookLifecycleScriptsOutcomeCallable TioneClient::DescribeNotebookLifecycleScriptsCallable(const DescribeNotebookLifecycleScriptsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookLifecycleScriptsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookLifecycleScripts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeNotebookSummaryOutcome TioneClient::DescribeNotebookSummary(const DescribeNotebookSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSummaryResponse rsp = DescribeNotebookSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSummaryOutcome(rsp);
        else
            return DescribeNotebookSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSummaryOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookSummaryAsync(const DescribeNotebookSummaryRequest& request, const DescribeNotebookSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeNotebookSummaryOutcomeCallable TioneClient::DescribeNotebookSummaryCallable(const DescribeNotebookSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingJobOutcome TioneClient::DescribeTrainingJob(const DescribeTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobResponse rsp = DescribeTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobOutcome(rsp);
        else
            return DescribeTrainingJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingJobAsync(const DescribeTrainingJobRequest& request, const DescribeTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingJobOutcomeCallable TioneClient::DescribeTrainingJobCallable(const DescribeTrainingJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingJobsOutcome TioneClient::DescribeTrainingJobs(const DescribeTrainingJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobsResponse rsp = DescribeTrainingJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobsOutcome(rsp);
        else
            return DescribeTrainingJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingJobsAsync(const DescribeTrainingJobsRequest& request, const DescribeTrainingJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingJobsOutcomeCallable TioneClient::DescribeTrainingJobsCallable(const DescribeTrainingJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StartNotebookInstanceOutcome TioneClient::StartNotebookInstance(const StartNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartNotebookInstanceResponse rsp = StartNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartNotebookInstanceOutcome(rsp);
        else
            return StartNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return StartNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::StartNotebookInstanceAsync(const StartNotebookInstanceRequest& request, const StartNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StartNotebookInstanceOutcomeCallable TioneClient::StartNotebookInstanceCallable(const StartNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->StartNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StopNotebookInstanceOutcome TioneClient::StopNotebookInstance(const StopNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopNotebookInstanceResponse rsp = StopNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopNotebookInstanceOutcome(rsp);
        else
            return StopNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return StopNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::StopNotebookInstanceAsync(const StopNotebookInstanceRequest& request, const StopNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StopNotebookInstanceOutcomeCallable TioneClient::StopNotebookInstanceCallable(const StopNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->StopNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StopTrainingJobOutcome TioneClient::StopTrainingJob(const StopTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTrainingJobResponse rsp = StopTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTrainingJobOutcome(rsp);
        else
            return StopTrainingJobOutcome(o.GetError());
    }
    else
    {
        return StopTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::StopTrainingJobAsync(const StopTrainingJobRequest& request, const StopTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopTrainingJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StopTrainingJobOutcomeCallable TioneClient::StopTrainingJobCallable(const StopTrainingJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopTrainingJobOutcome()>>(
        [this, request]()
        {
            return this->StopTrainingJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::UpdateCodeRepositoryOutcome TioneClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeRepositoryResponse rsp = UpdateCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeRepositoryOutcome(rsp);
        else
            return UpdateCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCodeRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::UpdateCodeRepositoryOutcomeCallable TioneClient::UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCodeRepositoryOutcome()>>(
        [this, request]()
        {
            return this->UpdateCodeRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::UpdateNotebookInstanceOutcome TioneClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNotebookInstanceResponse rsp = UpdateNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNotebookInstanceOutcome(rsp);
        else
            return UpdateNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateNotebookInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::UpdateNotebookInstanceOutcomeCallable TioneClient::UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateNotebookInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateNotebookInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

