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

#include <tencentcloud/ivld/v20210903/IvldClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ivld::V20210903;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-09-03";
    const string ENDPOINT = "ivld.tencentcloudapi.com";
}

IvldClient::IvldClient(const Credential &credential, const string &region) :
    IvldClient(credential, region, ClientProfile())
{
}

IvldClient::IvldClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IvldClient::CreateTaskOutcome IvldClient::CreateTask(const CreateTaskRequest &request)
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

void IvldClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateTaskOutcomeCallable IvldClient::CreateTaskCallable(const CreateTaskRequest &request)
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

IvldClient::DeleteMediaOutcome IvldClient::DeleteMedia(const DeleteMediaRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaResponse rsp = DeleteMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaOutcome(rsp);
        else
            return DeleteMediaOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteMediaAsync(const DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DeleteMediaOutcomeCallable IvldClient::DeleteMediaCallable(const DeleteMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaOutcome()>>(
        [this, request]()
        {
            return this->DeleteMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeMediaOutcome IvldClient::DescribeMedia(const DescribeMediaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaResponse rsp = DescribeMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaOutcome(rsp);
        else
            return DescribeMediaOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeMediaAsync(const DescribeMediaRequest& request, const DescribeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeMediaOutcomeCallable IvldClient::DescribeMediaCallable(const DescribeMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaOutcome()>>(
        [this, request]()
        {
            return this->DescribeMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeMediasOutcome IvldClient::DescribeMedias(const DescribeMediasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMedias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediasResponse rsp = DescribeMediasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediasOutcome(rsp);
        else
            return DescribeMediasOutcome(o.GetError());
    }
    else
    {
        return DescribeMediasOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeMediasAsync(const DescribeMediasRequest& request, const DescribeMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMedias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeMediasOutcomeCallable IvldClient::DescribeMediasCallable(const DescribeMediasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediasOutcome()>>(
        [this, request]()
        {
            return this->DescribeMedias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeTaskOutcome IvldClient::DescribeTask(const DescribeTaskRequest &request)
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

void IvldClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeTaskOutcomeCallable IvldClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeTaskDetailOutcome IvldClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
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

void IvldClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeTaskDetailOutcomeCallable IvldClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeTasksOutcome IvldClient::DescribeTasks(const DescribeTasksRequest &request)
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

void IvldClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeTasksOutcomeCallable IvldClient::DescribeTasksCallable(const DescribeTasksRequest &request)
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

IvldClient::ImportMediaOutcome IvldClient::ImportMedia(const ImportMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMediaResponse rsp = ImportMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMediaOutcome(rsp);
        else
            return ImportMediaOutcome(o.GetError());
    }
    else
    {
        return ImportMediaOutcome(outcome.GetError());
    }
}

void IvldClient::ImportMediaAsync(const ImportMediaRequest& request, const ImportMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::ImportMediaOutcomeCallable IvldClient::ImportMediaCallable(const ImportMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportMediaOutcome()>>(
        [this, request]()
        {
            return this->ImportMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

