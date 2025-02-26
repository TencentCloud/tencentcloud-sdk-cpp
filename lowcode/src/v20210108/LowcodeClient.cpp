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

#include <tencentcloud/lowcode/v20210108/LowcodeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lowcode::V20210108;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-08";
    const string ENDPOINT = "lowcode.tencentcloudapi.com";
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region) :
    LowcodeClient(credential, region, ClientProfile())
{
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LowcodeClient::CreateKnowledgeSetOutcome LowcodeClient::CreateKnowledgeSet(const CreateKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKnowledgeSetResponse rsp = CreateKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKnowledgeSetOutcome(rsp);
        else
            return CreateKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return CreateKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::CreateKnowledgeSetAsync(const CreateKnowledgeSetRequest& request, const CreateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKnowledgeSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::CreateKnowledgeSetOutcomeCallable LowcodeClient::CreateKnowledgeSetCallable(const CreateKnowledgeSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKnowledgeSetOutcome()>>(
        [this, request]()
        {
            return this->CreateKnowledgeSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DeleteKnowledgeDocumentSetOutcome LowcodeClient::DeleteKnowledgeDocumentSet(const DeleteKnowledgeDocumentSetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKnowledgeDocumentSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKnowledgeDocumentSetResponse rsp = DeleteKnowledgeDocumentSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKnowledgeDocumentSetOutcome(rsp);
        else
            return DeleteKnowledgeDocumentSetOutcome(o.GetError());
    }
    else
    {
        return DeleteKnowledgeDocumentSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeleteKnowledgeDocumentSetAsync(const DeleteKnowledgeDocumentSetRequest& request, const DeleteKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKnowledgeDocumentSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DeleteKnowledgeDocumentSetOutcomeCallable LowcodeClient::DeleteKnowledgeDocumentSetCallable(const DeleteKnowledgeDocumentSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKnowledgeDocumentSetOutcome()>>(
        [this, request]()
        {
            return this->DeleteKnowledgeDocumentSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DeleteKnowledgeSetOutcome LowcodeClient::DeleteKnowledgeSet(const DeleteKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKnowledgeSetResponse rsp = DeleteKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKnowledgeSetOutcome(rsp);
        else
            return DeleteKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return DeleteKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeleteKnowledgeSetAsync(const DeleteKnowledgeSetRequest& request, const DeleteKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKnowledgeSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DeleteKnowledgeSetOutcomeCallable LowcodeClient::DeleteKnowledgeSetCallable(const DeleteKnowledgeSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKnowledgeSetOutcome()>>(
        [this, request]()
        {
            return this->DeleteKnowledgeSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DescribeDataSourceListOutcome LowcodeClient::DescribeDataSourceList(const DescribeDataSourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceListResponse rsp = DescribeDataSourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceListOutcome(rsp);
        else
            return DescribeDataSourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeDataSourceListAsync(const DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DescribeDataSourceListOutcomeCallable LowcodeClient::DescribeDataSourceListCallable(const DescribeDataSourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DescribeKnowledgeDocumentSetDetailOutcome LowcodeClient::DescribeKnowledgeDocumentSetDetail(const DescribeKnowledgeDocumentSetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeDocumentSetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeDocumentSetDetailResponse rsp = DescribeKnowledgeDocumentSetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeDocumentSetDetailOutcome(rsp);
        else
            return DescribeKnowledgeDocumentSetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeDocumentSetDetailOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeDocumentSetDetailAsync(const DescribeKnowledgeDocumentSetDetailRequest& request, const DescribeKnowledgeDocumentSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeDocumentSetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DescribeKnowledgeDocumentSetDetailOutcomeCallable LowcodeClient::DescribeKnowledgeDocumentSetDetailCallable(const DescribeKnowledgeDocumentSetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeDocumentSetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeDocumentSetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DescribeKnowledgeDocumentSetListOutcome LowcodeClient::DescribeKnowledgeDocumentSetList(const DescribeKnowledgeDocumentSetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeDocumentSetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeDocumentSetListResponse rsp = DescribeKnowledgeDocumentSetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeDocumentSetListOutcome(rsp);
        else
            return DescribeKnowledgeDocumentSetListOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeDocumentSetListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeDocumentSetListAsync(const DescribeKnowledgeDocumentSetListRequest& request, const DescribeKnowledgeDocumentSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeDocumentSetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DescribeKnowledgeDocumentSetListOutcomeCallable LowcodeClient::DescribeKnowledgeDocumentSetListCallable(const DescribeKnowledgeDocumentSetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeDocumentSetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeDocumentSetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::DescribeKnowledgeSetListOutcome LowcodeClient::DescribeKnowledgeSetList(const DescribeKnowledgeSetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeSetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeSetListResponse rsp = DescribeKnowledgeSetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeSetListOutcome(rsp);
        else
            return DescribeKnowledgeSetListOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeSetListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeSetListAsync(const DescribeKnowledgeSetListRequest& request, const DescribeKnowledgeSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeSetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DescribeKnowledgeSetListOutcomeCallable LowcodeClient::DescribeKnowledgeSetListCallable(const DescribeKnowledgeSetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeSetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeSetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::SearchDocListOutcome LowcodeClient::SearchDocList(const SearchDocListRequest &request)
{
    auto outcome = MakeRequest(request, "SearchDocList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchDocListResponse rsp = SearchDocListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchDocListOutcome(rsp);
        else
            return SearchDocListOutcome(o.GetError());
    }
    else
    {
        return SearchDocListOutcome(outcome.GetError());
    }
}

void LowcodeClient::SearchDocListAsync(const SearchDocListRequest& request, const SearchDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchDocList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::SearchDocListOutcomeCallable LowcodeClient::SearchDocListCallable(const SearchDocListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchDocListOutcome()>>(
        [this, request]()
        {
            return this->SearchDocList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::UpdateKnowledgeSetOutcome LowcodeClient::UpdateKnowledgeSet(const UpdateKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateKnowledgeSetResponse rsp = UpdateKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateKnowledgeSetOutcome(rsp);
        else
            return UpdateKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return UpdateKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::UpdateKnowledgeSetAsync(const UpdateKnowledgeSetRequest& request, const UpdateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateKnowledgeSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::UpdateKnowledgeSetOutcomeCallable LowcodeClient::UpdateKnowledgeSetCallable(const UpdateKnowledgeSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateKnowledgeSetOutcome()>>(
        [this, request]()
        {
            return this->UpdateKnowledgeSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LowcodeClient::UploadKnowledgeDocumentSetOutcome LowcodeClient::UploadKnowledgeDocumentSet(const UploadKnowledgeDocumentSetRequest &request)
{
    auto outcome = MakeRequest(request, "UploadKnowledgeDocumentSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadKnowledgeDocumentSetResponse rsp = UploadKnowledgeDocumentSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadKnowledgeDocumentSetOutcome(rsp);
        else
            return UploadKnowledgeDocumentSetOutcome(o.GetError());
    }
    else
    {
        return UploadKnowledgeDocumentSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::UploadKnowledgeDocumentSetAsync(const UploadKnowledgeDocumentSetRequest& request, const UploadKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadKnowledgeDocumentSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::UploadKnowledgeDocumentSetOutcomeCallable LowcodeClient::UploadKnowledgeDocumentSetCallable(const UploadKnowledgeDocumentSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadKnowledgeDocumentSetOutcome()>>(
        [this, request]()
        {
            return this->UploadKnowledgeDocumentSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

