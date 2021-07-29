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

#include <tencentcloud/wav/v20210129/WavClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wav::V20210129;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-29";
    const string ENDPOINT = "wav.tencentcloudapi.com";
}

WavClient::WavClient(const Credential &credential, const string &region) :
    WavClient(credential, region, ClientProfile())
{
}

WavClient::WavClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WavClient::CreateChannelCodeOutcome WavClient::CreateChannelCode(const CreateChannelCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelCodeResponse rsp = CreateChannelCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelCodeOutcome(rsp);
        else
            return CreateChannelCodeOutcome(o.GetError());
    }
    else
    {
        return CreateChannelCodeOutcome(outcome.GetError());
    }
}

void WavClient::CreateChannelCodeAsync(const CreateChannelCodeRequest& request, const CreateChannelCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChannelCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::CreateChannelCodeOutcomeCallable WavClient::CreateChannelCodeCallable(const CreateChannelCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChannelCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateChannelCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::CreateCorpTagOutcome WavClient::CreateCorpTag(const CreateCorpTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCorpTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCorpTagResponse rsp = CreateCorpTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCorpTagOutcome(rsp);
        else
            return CreateCorpTagOutcome(o.GetError());
    }
    else
    {
        return CreateCorpTagOutcome(outcome.GetError());
    }
}

void WavClient::CreateCorpTagAsync(const CreateCorpTagRequest& request, const CreateCorpTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCorpTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::CreateCorpTagOutcomeCallable WavClient::CreateCorpTagCallable(const CreateCorpTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCorpTagOutcome()>>(
        [this, request]()
        {
            return this->CreateCorpTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryActivityJoinListOutcome WavClient::QueryActivityJoinList(const QueryActivityJoinListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityJoinList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityJoinListResponse rsp = QueryActivityJoinListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityJoinListOutcome(rsp);
        else
            return QueryActivityJoinListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityJoinListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityJoinListAsync(const QueryActivityJoinListRequest& request, const QueryActivityJoinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryActivityJoinList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryActivityJoinListOutcomeCallable WavClient::QueryActivityJoinListCallable(const QueryActivityJoinListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryActivityJoinListOutcome()>>(
        [this, request]()
        {
            return this->QueryActivityJoinList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryActivityListOutcome WavClient::QueryActivityList(const QueryActivityListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityListResponse rsp = QueryActivityListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityListOutcome(rsp);
        else
            return QueryActivityListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityListAsync(const QueryActivityListRequest& request, const QueryActivityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryActivityList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryActivityListOutcomeCallable WavClient::QueryActivityListCallable(const QueryActivityListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryActivityListOutcome()>>(
        [this, request]()
        {
            return this->QueryActivityList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryActivityLiveCodeListOutcome WavClient::QueryActivityLiveCodeList(const QueryActivityLiveCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityLiveCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityLiveCodeListResponse rsp = QueryActivityLiveCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityLiveCodeListOutcome(rsp);
        else
            return QueryActivityLiveCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityLiveCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityLiveCodeListAsync(const QueryActivityLiveCodeListRequest& request, const QueryActivityLiveCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryActivityLiveCodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryActivityLiveCodeListOutcomeCallable WavClient::QueryActivityLiveCodeListCallable(const QueryActivityLiveCodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryActivityLiveCodeListOutcome()>>(
        [this, request]()
        {
            return this->QueryActivityLiveCodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryChannelCodeListOutcome WavClient::QueryChannelCodeList(const QueryChannelCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChannelCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChannelCodeListResponse rsp = QueryChannelCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChannelCodeListOutcome(rsp);
        else
            return QueryChannelCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryChannelCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryChannelCodeListAsync(const QueryChannelCodeListRequest& request, const QueryChannelCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChannelCodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryChannelCodeListOutcomeCallable WavClient::QueryChannelCodeListCallable(const QueryChannelCodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChannelCodeListOutcome()>>(
        [this, request]()
        {
            return this->QueryChannelCodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryChatArchivingListOutcome WavClient::QueryChatArchivingList(const QueryChatArchivingListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChatArchivingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChatArchivingListResponse rsp = QueryChatArchivingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChatArchivingListOutcome(rsp);
        else
            return QueryChatArchivingListOutcome(o.GetError());
    }
    else
    {
        return QueryChatArchivingListOutcome(outcome.GetError());
    }
}

void WavClient::QueryChatArchivingListAsync(const QueryChatArchivingListRequest& request, const QueryChatArchivingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChatArchivingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryChatArchivingListOutcomeCallable WavClient::QueryChatArchivingListCallable(const QueryChatArchivingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChatArchivingListOutcome()>>(
        [this, request]()
        {
            return this->QueryChatArchivingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryExternalContactDetailOutcome WavClient::QueryExternalContactDetail(const QueryExternalContactDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalContactDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalContactDetailResponse rsp = QueryExternalContactDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalContactDetailOutcome(rsp);
        else
            return QueryExternalContactDetailOutcome(o.GetError());
    }
    else
    {
        return QueryExternalContactDetailOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalContactDetailAsync(const QueryExternalContactDetailRequest& request, const QueryExternalContactDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryExternalContactDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryExternalContactDetailOutcomeCallable WavClient::QueryExternalContactDetailCallable(const QueryExternalContactDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryExternalContactDetailOutcome()>>(
        [this, request]()
        {
            return this->QueryExternalContactDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryExternalContactListOutcome WavClient::QueryExternalContactList(const QueryExternalContactListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalContactList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalContactListResponse rsp = QueryExternalContactListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalContactListOutcome(rsp);
        else
            return QueryExternalContactListOutcome(o.GetError());
    }
    else
    {
        return QueryExternalContactListOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalContactListAsync(const QueryExternalContactListRequest& request, const QueryExternalContactListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryExternalContactList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryExternalContactListOutcomeCallable WavClient::QueryExternalContactListCallable(const QueryExternalContactListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryExternalContactListOutcome()>>(
        [this, request]()
        {
            return this->QueryExternalContactList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryExternalUserMappingInfoOutcome WavClient::QueryExternalUserMappingInfo(const QueryExternalUserMappingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalUserMappingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalUserMappingInfoResponse rsp = QueryExternalUserMappingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalUserMappingInfoOutcome(rsp);
        else
            return QueryExternalUserMappingInfoOutcome(o.GetError());
    }
    else
    {
        return QueryExternalUserMappingInfoOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalUserMappingInfoAsync(const QueryExternalUserMappingInfoRequest& request, const QueryExternalUserMappingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryExternalUserMappingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryExternalUserMappingInfoOutcomeCallable WavClient::QueryExternalUserMappingInfoCallable(const QueryExternalUserMappingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryExternalUserMappingInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryExternalUserMappingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryLicenseInfoOutcome WavClient::QueryLicenseInfo(const QueryLicenseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryLicenseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryLicenseInfoResponse rsp = QueryLicenseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryLicenseInfoOutcome(rsp);
        else
            return QueryLicenseInfoOutcome(o.GetError());
    }
    else
    {
        return QueryLicenseInfoOutcome(outcome.GetError());
    }
}

void WavClient::QueryLicenseInfoAsync(const QueryLicenseInfoRequest& request, const QueryLicenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryLicenseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryLicenseInfoOutcomeCallable WavClient::QueryLicenseInfoCallable(const QueryLicenseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryLicenseInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryLicenseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WavClient::QueryMiniAppCodeListOutcome WavClient::QueryMiniAppCodeList(const QueryMiniAppCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMiniAppCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMiniAppCodeListResponse rsp = QueryMiniAppCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMiniAppCodeListOutcome(rsp);
        else
            return QueryMiniAppCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryMiniAppCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryMiniAppCodeListAsync(const QueryMiniAppCodeListRequest& request, const QueryMiniAppCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMiniAppCodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WavClient::QueryMiniAppCodeListOutcomeCallable WavClient::QueryMiniAppCodeListCallable(const QueryMiniAppCodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMiniAppCodeListOutcome()>>(
        [this, request]()
        {
            return this->QueryMiniAppCodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

