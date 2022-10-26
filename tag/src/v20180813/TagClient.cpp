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

#include <tencentcloud/tag/v20180813/TagClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tag::V20180813;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-13";
    const string ENDPOINT = "tag.tencentcloudapi.com";
}

TagClient::TagClient(const Credential &credential, const string &region) :
    TagClient(credential, region, ClientProfile())
{
}

TagClient::TagClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TagClient::AddProjectOutcome TagClient::AddProject(const AddProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AddProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProjectResponse rsp = AddProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProjectOutcome(rsp);
        else
            return AddProjectOutcome(o.GetError());
    }
    else
    {
        return AddProjectOutcome(outcome.GetError());
    }
}

void TagClient::AddProjectAsync(const AddProjectRequest& request, const AddProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::AddProjectOutcomeCallable TagClient::AddProjectCallable(const AddProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddProjectOutcome()>>(
        [this, request]()
        {
            return this->AddProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::AddResourceTagOutcome TagClient::AddResourceTag(const AddResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "AddResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddResourceTagResponse rsp = AddResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddResourceTagOutcome(rsp);
        else
            return AddResourceTagOutcome(o.GetError());
    }
    else
    {
        return AddResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::AddResourceTagAsync(const AddResourceTagRequest& request, const AddResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddResourceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::AddResourceTagOutcomeCallable TagClient::AddResourceTagCallable(const AddResourceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddResourceTagOutcome()>>(
        [this, request]()
        {
            return this->AddResourceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::AttachResourcesTagOutcome TagClient::AttachResourcesTag(const AttachResourcesTagRequest &request)
{
    auto outcome = MakeRequest(request, "AttachResourcesTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachResourcesTagResponse rsp = AttachResourcesTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachResourcesTagOutcome(rsp);
        else
            return AttachResourcesTagOutcome(o.GetError());
    }
    else
    {
        return AttachResourcesTagOutcome(outcome.GetError());
    }
}

void TagClient::AttachResourcesTagAsync(const AttachResourcesTagRequest& request, const AttachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachResourcesTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::AttachResourcesTagOutcomeCallable TagClient::AttachResourcesTagCallable(const AttachResourcesTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachResourcesTagOutcome()>>(
        [this, request]()
        {
            return this->AttachResourcesTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::CreateTagOutcome TagClient::CreateTag(const CreateTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagResponse rsp = CreateTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagOutcome(rsp);
        else
            return CreateTagOutcome(o.GetError());
    }
    else
    {
        return CreateTagOutcome(outcome.GetError());
    }
}

void TagClient::CreateTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::CreateTagOutcomeCallable TagClient::CreateTagCallable(const CreateTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
        [this, request]()
        {
            return this->CreateTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::CreateTagsOutcome TagClient::CreateTags(const CreateTagsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagsResponse rsp = CreateTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagsOutcome(rsp);
        else
            return CreateTagsOutcome(o.GetError());
    }
    else
    {
        return CreateTagsOutcome(outcome.GetError());
    }
}

void TagClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::CreateTagsOutcomeCallable TagClient::CreateTagsCallable(const CreateTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTagsOutcome()>>(
        [this, request]()
        {
            return this->CreateTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DeleteResourceTagOutcome TagClient::DeleteResourceTag(const DeleteResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceTagResponse rsp = DeleteResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceTagOutcome(rsp);
        else
            return DeleteResourceTagOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteResourceTagAsync(const DeleteResourceTagRequest& request, const DeleteResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DeleteResourceTagOutcomeCallable TagClient::DeleteResourceTagCallable(const DeleteResourceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DeleteTagOutcome TagClient::DeleteTag(const DeleteTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagResponse rsp = DeleteTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagOutcome(rsp);
        else
            return DeleteTagOutcome(o.GetError());
    }
    else
    {
        return DeleteTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DeleteTagOutcomeCallable TagClient::DeleteTagCallable(const DeleteTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DeleteTagsOutcome TagClient::DeleteTags(const DeleteTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagsResponse rsp = DeleteTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagsOutcome(rsp);
        else
            return DeleteTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteTagsOutcome(outcome.GetError());
    }
}

void TagClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DeleteTagsOutcomeCallable TagClient::DeleteTagsCallable(const DeleteTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTagsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeProjectsOutcome TagClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeProjectsOutcomeCallable TagClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourceTagsOutcome TagClient::DescribeResourceTags(const DescribeResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsResponse rsp = DescribeResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsOutcome(rsp);
        else
            return DescribeResourceTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsAsync(const DescribeResourceTagsRequest& request, const DescribeResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourceTagsOutcomeCallable TagClient::DescribeResourceTagsCallable(const DescribeResourceTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourceTagsByResourceIdsOutcome TagClient::DescribeResourceTagsByResourceIds(const DescribeResourceTagsByResourceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByResourceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByResourceIdsResponse rsp = DescribeResourceTagsByResourceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByResourceIdsOutcome(rsp);
        else
            return DescribeResourceTagsByResourceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByResourceIdsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByResourceIdsAsync(const DescribeResourceTagsByResourceIdsRequest& request, const DescribeResourceTagsByResourceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTagsByResourceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourceTagsByResourceIdsOutcomeCallable TagClient::DescribeResourceTagsByResourceIdsCallable(const DescribeResourceTagsByResourceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsByResourceIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTagsByResourceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourceTagsByResourceIdsSeqOutcome TagClient::DescribeResourceTagsByResourceIdsSeq(const DescribeResourceTagsByResourceIdsSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByResourceIdsSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByResourceIdsSeqResponse rsp = DescribeResourceTagsByResourceIdsSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByResourceIdsSeqOutcome(rsp);
        else
            return DescribeResourceTagsByResourceIdsSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByResourceIdsSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByResourceIdsSeqAsync(const DescribeResourceTagsByResourceIdsSeqRequest& request, const DescribeResourceTagsByResourceIdsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTagsByResourceIdsSeq(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourceTagsByResourceIdsSeqOutcomeCallable TagClient::DescribeResourceTagsByResourceIdsSeqCallable(const DescribeResourceTagsByResourceIdsSeqRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsByResourceIdsSeqOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTagsByResourceIdsSeq(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourceTagsByTagKeysOutcome TagClient::DescribeResourceTagsByTagKeys(const DescribeResourceTagsByTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByTagKeysResponse rsp = DescribeResourceTagsByTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByTagKeysOutcome(rsp);
        else
            return DescribeResourceTagsByTagKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByTagKeysAsync(const DescribeResourceTagsByTagKeysRequest& request, const DescribeResourceTagsByTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTagsByTagKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourceTagsByTagKeysOutcomeCallable TagClient::DescribeResourceTagsByTagKeysCallable(const DescribeResourceTagsByTagKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsByTagKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTagsByTagKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourcesByTagsOutcome TagClient::DescribeResourcesByTags(const DescribeResourcesByTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagsResponse rsp = DescribeResourcesByTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagsOutcome(rsp);
        else
            return DescribeResourcesByTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourcesByTagsAsync(const DescribeResourcesByTagsRequest& request, const DescribeResourcesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourcesByTagsOutcomeCallable TagClient::DescribeResourcesByTagsCallable(const DescribeResourcesByTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourcesByTagsUnionOutcome TagClient::DescribeResourcesByTagsUnion(const DescribeResourcesByTagsUnionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTagsUnion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagsUnionResponse rsp = DescribeResourcesByTagsUnionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagsUnionOutcome(rsp);
        else
            return DescribeResourcesByTagsUnionOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagsUnionOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourcesByTagsUnionAsync(const DescribeResourcesByTagsUnionRequest& request, const DescribeResourcesByTagsUnionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByTagsUnion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourcesByTagsUnionOutcomeCallable TagClient::DescribeResourcesByTagsUnionCallable(const DescribeResourcesByTagsUnionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByTagsUnionOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByTagsUnion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagKeysOutcome TagClient::DescribeTagKeys(const DescribeTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagKeysResponse rsp = DescribeTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagKeysOutcome(rsp);
        else
            return DescribeTagKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagKeysAsync(const DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagKeysOutcomeCallable TagClient::DescribeTagKeysCallable(const DescribeTagKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagValuesOutcome TagClient::DescribeTagValues(const DescribeTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesResponse rsp = DescribeTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesOutcome(rsp);
        else
            return DescribeTagValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagValuesAsync(const DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagValuesOutcomeCallable TagClient::DescribeTagValuesCallable(const DescribeTagValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagValuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagValuesSeqOutcome TagClient::DescribeTagValuesSeq(const DescribeTagValuesSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValuesSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesSeqResponse rsp = DescribeTagValuesSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesSeqOutcome(rsp);
        else
            return DescribeTagValuesSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagValuesSeqAsync(const DescribeTagValuesSeqRequest& request, const DescribeTagValuesSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagValuesSeq(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagValuesSeqOutcomeCallable TagClient::DescribeTagValuesSeqCallable(const DescribeTagValuesSeqRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagValuesSeqOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagValuesSeq(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagsOutcome TagClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagsOutcomeCallable TagClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagsSeqOutcome TagClient::DescribeTagsSeq(const DescribeTagsSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagsSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsSeqResponse rsp = DescribeTagsSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsSeqOutcome(rsp);
        else
            return DescribeTagsSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagsSeqAsync(const DescribeTagsSeqRequest& request, const DescribeTagsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagsSeq(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagsSeqOutcomeCallable TagClient::DescribeTagsSeqCallable(const DescribeTagsSeqRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagsSeqOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagsSeq(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DetachResourcesTagOutcome TagClient::DetachResourcesTag(const DetachResourcesTagRequest &request)
{
    auto outcome = MakeRequest(request, "DetachResourcesTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachResourcesTagResponse rsp = DetachResourcesTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachResourcesTagOutcome(rsp);
        else
            return DetachResourcesTagOutcome(o.GetError());
    }
    else
    {
        return DetachResourcesTagOutcome(outcome.GetError());
    }
}

void TagClient::DetachResourcesTagAsync(const DetachResourcesTagRequest& request, const DetachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachResourcesTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DetachResourcesTagOutcomeCallable TagClient::DetachResourcesTagCallable(const DetachResourcesTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachResourcesTagOutcome()>>(
        [this, request]()
        {
            return this->DetachResourcesTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::GetResourcesOutcome TagClient::GetResources(const GetResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "GetResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourcesResponse rsp = GetResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourcesOutcome(rsp);
        else
            return GetResourcesOutcome(o.GetError());
    }
    else
    {
        return GetResourcesOutcome(outcome.GetError());
    }
}

void TagClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::GetResourcesOutcomeCallable TagClient::GetResourcesCallable(const GetResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetResourcesOutcome()>>(
        [this, request]()
        {
            return this->GetResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::GetTagKeysOutcome TagClient::GetTagKeys(const GetTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "GetTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagKeysResponse rsp = GetTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagKeysOutcome(rsp);
        else
            return GetTagKeysOutcome(o.GetError());
    }
    else
    {
        return GetTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::GetTagKeysAsync(const GetTagKeysRequest& request, const GetTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTagKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::GetTagKeysOutcomeCallable TagClient::GetTagKeysCallable(const GetTagKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTagKeysOutcome()>>(
        [this, request]()
        {
            return this->GetTagKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::GetTagValuesOutcome TagClient::GetTagValues(const GetTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "GetTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagValuesResponse rsp = GetTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagValuesOutcome(rsp);
        else
            return GetTagValuesOutcome(o.GetError());
    }
    else
    {
        return GetTagValuesOutcome(outcome.GetError());
    }
}

void TagClient::GetTagValuesAsync(const GetTagValuesRequest& request, const GetTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTagValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::GetTagValuesOutcomeCallable TagClient::GetTagValuesCallable(const GetTagValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTagValuesOutcome()>>(
        [this, request]()
        {
            return this->GetTagValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::GetTagsOutcome TagClient::GetTags(const GetTagsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagsResponse rsp = GetTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagsOutcome(rsp);
        else
            return GetTagsOutcome(o.GetError());
    }
    else
    {
        return GetTagsOutcome(outcome.GetError());
    }
}

void TagClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::GetTagsOutcomeCallable TagClient::GetTagsCallable(const GetTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTagsOutcome()>>(
        [this, request]()
        {
            return this->GetTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::ModifyResourceTagsOutcome TagClient::ModifyResourceTags(const ModifyResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceTagsResponse rsp = ModifyResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceTagsOutcome(rsp);
        else
            return ModifyResourceTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceTagsOutcome(outcome.GetError());
    }
}

void TagClient::ModifyResourceTagsAsync(const ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::ModifyResourceTagsOutcomeCallable TagClient::ModifyResourceTagsCallable(const ModifyResourceTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::ModifyResourcesTagValueOutcome TagClient::ModifyResourcesTagValue(const ModifyResourcesTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcesTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcesTagValueResponse rsp = ModifyResourcesTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcesTagValueOutcome(rsp);
        else
            return ModifyResourcesTagValueOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcesTagValueOutcome(outcome.GetError());
    }
}

void TagClient::ModifyResourcesTagValueAsync(const ModifyResourcesTagValueRequest& request, const ModifyResourcesTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcesTagValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::ModifyResourcesTagValueOutcomeCallable TagClient::ModifyResourcesTagValueCallable(const ModifyResourcesTagValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcesTagValueOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcesTagValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::TagResourcesOutcome TagClient::TagResources(const TagResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "TagResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TagResourcesResponse rsp = TagResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TagResourcesOutcome(rsp);
        else
            return TagResourcesOutcome(o.GetError());
    }
    else
    {
        return TagResourcesOutcome(outcome.GetError());
    }
}

void TagClient::TagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TagResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::TagResourcesOutcomeCallable TagClient::TagResourcesCallable(const TagResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
        [this, request]()
        {
            return this->TagResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::UnTagResourcesOutcome TagClient::UnTagResources(const UnTagResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "UnTagResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnTagResourcesResponse rsp = UnTagResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnTagResourcesOutcome(rsp);
        else
            return UnTagResourcesOutcome(o.GetError());
    }
    else
    {
        return UnTagResourcesOutcome(outcome.GetError());
    }
}

void TagClient::UnTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnTagResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::UnTagResourcesOutcomeCallable TagClient::UnTagResourcesCallable(const UnTagResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
        [this, request]()
        {
            return this->UnTagResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::UpdateProjectOutcome TagClient::UpdateProject(const UpdateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectResponse rsp = UpdateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectOutcome(rsp);
        else
            return UpdateProjectOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectOutcome(outcome.GetError());
    }
}

void TagClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::UpdateProjectOutcomeCallable TagClient::UpdateProjectCallable(const UpdateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
        [this, request]()
        {
            return this->UpdateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::UpdateResourceTagValueOutcome TagClient::UpdateResourceTagValue(const UpdateResourceTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceTagValueResponse rsp = UpdateResourceTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceTagValueOutcome(rsp);
        else
            return UpdateResourceTagValueOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceTagValueOutcome(outcome.GetError());
    }
}

void TagClient::UpdateResourceTagValueAsync(const UpdateResourceTagValueRequest& request, const UpdateResourceTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateResourceTagValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::UpdateResourceTagValueOutcomeCallable TagClient::UpdateResourceTagValueCallable(const UpdateResourceTagValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateResourceTagValueOutcome()>>(
        [this, request]()
        {
            return this->UpdateResourceTagValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

