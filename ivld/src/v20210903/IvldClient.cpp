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


IvldClient::AddCustomPersonImageOutcome IvldClient::AddCustomPersonImage(const AddCustomPersonImageRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomPersonImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomPersonImageResponse rsp = AddCustomPersonImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomPersonImageOutcome(rsp);
        else
            return AddCustomPersonImageOutcome(o.GetError());
    }
    else
    {
        return AddCustomPersonImageOutcome(outcome.GetError());
    }
}

void IvldClient::AddCustomPersonImageAsync(const AddCustomPersonImageRequest& request, const AddCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomPersonImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::AddCustomPersonImageOutcomeCallable IvldClient::AddCustomPersonImageCallable(const AddCustomPersonImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomPersonImageOutcome()>>(
        [this, request]()
        {
            return this->AddCustomPersonImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::CreateCustomCategoryOutcome IvldClient::CreateCustomCategory(const CreateCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomCategoryResponse rsp = CreateCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomCategoryOutcome(rsp);
        else
            return CreateCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return CreateCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomCategoryAsync(const CreateCustomCategoryRequest& request, const CreateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateCustomCategoryOutcomeCallable IvldClient::CreateCustomCategoryCallable(const CreateCustomCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomCategoryOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::CreateCustomGroupOutcome IvldClient::CreateCustomGroup(const CreateCustomGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomGroupResponse rsp = CreateCustomGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomGroupOutcome(rsp);
        else
            return CreateCustomGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCustomGroupOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomGroupAsync(const CreateCustomGroupRequest& request, const CreateCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateCustomGroupOutcomeCallable IvldClient::CreateCustomGroupCallable(const CreateCustomGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::CreateCustomPersonOutcome IvldClient::CreateCustomPerson(const CreateCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomPersonResponse rsp = CreateCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomPersonOutcome(rsp);
        else
            return CreateCustomPersonOutcome(o.GetError());
    }
    else
    {
        return CreateCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomPersonAsync(const CreateCustomPersonRequest& request, const CreateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateCustomPersonOutcomeCallable IvldClient::CreateCustomPersonCallable(const CreateCustomPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomPersonOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::CreateDefaultCategoriesOutcome IvldClient::CreateDefaultCategories(const CreateDefaultCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultCategoriesResponse rsp = CreateDefaultCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultCategoriesOutcome(rsp);
        else
            return CreateDefaultCategoriesOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultCategoriesOutcome(outcome.GetError());
    }
}

void IvldClient::CreateDefaultCategoriesAsync(const CreateDefaultCategoriesRequest& request, const CreateDefaultCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDefaultCategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateDefaultCategoriesOutcomeCallable IvldClient::CreateDefaultCategoriesCallable(const CreateDefaultCategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDefaultCategoriesOutcome()>>(
        [this, request]()
        {
            return this->CreateDefaultCategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

IvldClient::CreateVideoSummaryTaskOutcome IvldClient::CreateVideoSummaryTask(const CreateVideoSummaryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoSummaryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoSummaryTaskResponse rsp = CreateVideoSummaryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoSummaryTaskOutcome(rsp);
        else
            return CreateVideoSummaryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoSummaryTaskOutcome(outcome.GetError());
    }
}

void IvldClient::CreateVideoSummaryTaskAsync(const CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoSummaryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::CreateVideoSummaryTaskOutcomeCallable IvldClient::CreateVideoSummaryTaskCallable(const CreateVideoSummaryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoSummaryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoSummaryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DeleteCustomCategoryOutcome IvldClient::DeleteCustomCategory(const DeleteCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomCategoryResponse rsp = DeleteCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomCategoryOutcome(rsp);
        else
            return DeleteCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomCategoryAsync(const DeleteCustomCategoryRequest& request, const DeleteCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DeleteCustomCategoryOutcomeCallable IvldClient::DeleteCustomCategoryCallable(const DeleteCustomCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomCategoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DeleteCustomPersonOutcome IvldClient::DeleteCustomPerson(const DeleteCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomPersonResponse rsp = DeleteCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomPersonOutcome(rsp);
        else
            return DeleteCustomPersonOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomPersonAsync(const DeleteCustomPersonRequest& request, const DeleteCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DeleteCustomPersonOutcomeCallable IvldClient::DeleteCustomPersonCallable(const DeleteCustomPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomPersonOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DeleteCustomPersonImageOutcome IvldClient::DeleteCustomPersonImage(const DeleteCustomPersonImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomPersonImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomPersonImageResponse rsp = DeleteCustomPersonImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomPersonImageOutcome(rsp);
        else
            return DeleteCustomPersonImageOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomPersonImageOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomPersonImageAsync(const DeleteCustomPersonImageRequest& request, const DeleteCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomPersonImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DeleteCustomPersonImageOutcomeCallable IvldClient::DeleteCustomPersonImageCallable(const DeleteCustomPersonImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomPersonImageOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomPersonImage(request);
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

IvldClient::DeleteTaskOutcome IvldClient::DeleteTask(const DeleteTaskRequest &request)
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

void IvldClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DeleteTaskOutcomeCallable IvldClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeCustomCategoriesOutcome IvldClient::DescribeCustomCategories(const DescribeCustomCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomCategoriesResponse rsp = DescribeCustomCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomCategoriesOutcome(rsp);
        else
            return DescribeCustomCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomCategoriesOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomCategoriesAsync(const DescribeCustomCategoriesRequest& request, const DescribeCustomCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomCategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeCustomCategoriesOutcomeCallable IvldClient::DescribeCustomCategoriesCallable(const DescribeCustomCategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomCategoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomCategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeCustomGroupOutcome IvldClient::DescribeCustomGroup(const DescribeCustomGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomGroupResponse rsp = DescribeCustomGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomGroupOutcome(rsp);
        else
            return DescribeCustomGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomGroupOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomGroupAsync(const DescribeCustomGroupRequest& request, const DescribeCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeCustomGroupOutcomeCallable IvldClient::DescribeCustomGroupCallable(const DescribeCustomGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeCustomPersonDetailOutcome IvldClient::DescribeCustomPersonDetail(const DescribeCustomPersonDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomPersonDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomPersonDetailResponse rsp = DescribeCustomPersonDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomPersonDetailOutcome(rsp);
        else
            return DescribeCustomPersonDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomPersonDetailOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomPersonDetailAsync(const DescribeCustomPersonDetailRequest& request, const DescribeCustomPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomPersonDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeCustomPersonDetailOutcomeCallable IvldClient::DescribeCustomPersonDetailCallable(const DescribeCustomPersonDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomPersonDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomPersonDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeCustomPersonsOutcome IvldClient::DescribeCustomPersons(const DescribeCustomPersonsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomPersons");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomPersonsResponse rsp = DescribeCustomPersonsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomPersonsOutcome(rsp);
        else
            return DescribeCustomPersonsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomPersonsOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomPersonsAsync(const DescribeCustomPersonsRequest& request, const DescribeCustomPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomPersons(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeCustomPersonsOutcomeCallable IvldClient::DescribeCustomPersonsCallable(const DescribeCustomPersonsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomPersonsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomPersons(request);
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

IvldClient::DescribeUsageAmountOutcome IvldClient::DescribeUsageAmount(const DescribeUsageAmountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageAmount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageAmountResponse rsp = DescribeUsageAmountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageAmountOutcome(rsp);
        else
            return DescribeUsageAmountOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageAmountOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeUsageAmountAsync(const DescribeUsageAmountRequest& request, const DescribeUsageAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsageAmount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeUsageAmountOutcomeCallable IvldClient::DescribeUsageAmountCallable(const DescribeUsageAmountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsageAmountOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsageAmount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::DescribeVideoSummaryDetailOutcome IvldClient::DescribeVideoSummaryDetail(const DescribeVideoSummaryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoSummaryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoSummaryDetailResponse rsp = DescribeVideoSummaryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoSummaryDetailOutcome(rsp);
        else
            return DescribeVideoSummaryDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoSummaryDetailOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeVideoSummaryDetailAsync(const DescribeVideoSummaryDetailRequest& request, const DescribeVideoSummaryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoSummaryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::DescribeVideoSummaryDetailOutcomeCallable IvldClient::DescribeVideoSummaryDetailCallable(const DescribeVideoSummaryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoSummaryDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoSummaryDetail(request);
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

IvldClient::ModifyCallbackOutcome IvldClient::ModifyCallback(const ModifyCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCallbackResponse rsp = ModifyCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCallbackOutcome(rsp);
        else
            return ModifyCallbackOutcome(o.GetError());
    }
    else
    {
        return ModifyCallbackOutcome(outcome.GetError());
    }
}

void IvldClient::ModifyCallbackAsync(const ModifyCallbackRequest& request, const ModifyCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::ModifyCallbackOutcomeCallable IvldClient::ModifyCallbackCallable(const ModifyCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCallbackOutcome()>>(
        [this, request]()
        {
            return this->ModifyCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::QueryCallbackOutcome IvldClient::QueryCallback(const QueryCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCallbackResponse rsp = QueryCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCallbackOutcome(rsp);
        else
            return QueryCallbackOutcome(o.GetError());
    }
    else
    {
        return QueryCallbackOutcome(outcome.GetError());
    }
}

void IvldClient::QueryCallbackAsync(const QueryCallbackRequest& request, const QueryCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::QueryCallbackOutcomeCallable IvldClient::QueryCallbackCallable(const QueryCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCallbackOutcome()>>(
        [this, request]()
        {
            return this->QueryCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::UpdateCustomCategoryOutcome IvldClient::UpdateCustomCategory(const UpdateCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomCategoryResponse rsp = UpdateCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomCategoryOutcome(rsp);
        else
            return UpdateCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::UpdateCustomCategoryAsync(const UpdateCustomCategoryRequest& request, const UpdateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCustomCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::UpdateCustomCategoryOutcomeCallable IvldClient::UpdateCustomCategoryCallable(const UpdateCustomCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCustomCategoryOutcome()>>(
        [this, request]()
        {
            return this->UpdateCustomCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IvldClient::UpdateCustomPersonOutcome IvldClient::UpdateCustomPerson(const UpdateCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomPersonResponse rsp = UpdateCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomPersonOutcome(rsp);
        else
            return UpdateCustomPersonOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::UpdateCustomPersonAsync(const UpdateCustomPersonRequest& request, const UpdateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCustomPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IvldClient::UpdateCustomPersonOutcomeCallable IvldClient::UpdateCustomPersonCallable(const UpdateCustomPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCustomPersonOutcome()>>(
        [this, request]()
        {
            return this->UpdateCustomPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

