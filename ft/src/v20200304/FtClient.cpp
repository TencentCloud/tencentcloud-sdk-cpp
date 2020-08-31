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

#include <tencentcloud/ft/v20200304/FtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ft::V20200304;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-04";
    const string ENDPOINT = "ft.tencentcloudapi.com";
}

FtClient::FtClient(const Credential &credential, const string &region) :
    FtClient(credential, region, ClientProfile())
{
}

FtClient::FtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FtClient::CancelFaceMorphJobOutcome FtClient::CancelFaceMorphJob(const CancelFaceMorphJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFaceMorphJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFaceMorphJobResponse rsp = CancelFaceMorphJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFaceMorphJobOutcome(rsp);
        else
            return CancelFaceMorphJobOutcome(o.GetError());
    }
    else
    {
        return CancelFaceMorphJobOutcome(outcome.GetError());
    }
}

void FtClient::CancelFaceMorphJobAsync(const CancelFaceMorphJobRequest& request, const CancelFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelFaceMorphJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::CancelFaceMorphJobOutcomeCallable FtClient::CancelFaceMorphJobCallable(const CancelFaceMorphJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelFaceMorphJobOutcome()>>(
        [this, request]()
        {
            return this->CancelFaceMorphJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FtClient::ChangeAgePicOutcome FtClient::ChangeAgePic(const ChangeAgePicRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeAgePic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeAgePicResponse rsp = ChangeAgePicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeAgePicOutcome(rsp);
        else
            return ChangeAgePicOutcome(o.GetError());
    }
    else
    {
        return ChangeAgePicOutcome(outcome.GetError());
    }
}

void FtClient::ChangeAgePicAsync(const ChangeAgePicRequest& request, const ChangeAgePicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeAgePic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::ChangeAgePicOutcomeCallable FtClient::ChangeAgePicCallable(const ChangeAgePicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeAgePicOutcome()>>(
        [this, request]()
        {
            return this->ChangeAgePic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FtClient::FaceCartoonPicOutcome FtClient::FaceCartoonPic(const FaceCartoonPicRequest &request)
{
    auto outcome = MakeRequest(request, "FaceCartoonPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FaceCartoonPicResponse rsp = FaceCartoonPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FaceCartoonPicOutcome(rsp);
        else
            return FaceCartoonPicOutcome(o.GetError());
    }
    else
    {
        return FaceCartoonPicOutcome(outcome.GetError());
    }
}

void FtClient::FaceCartoonPicAsync(const FaceCartoonPicRequest& request, const FaceCartoonPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FaceCartoonPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::FaceCartoonPicOutcomeCallable FtClient::FaceCartoonPicCallable(const FaceCartoonPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FaceCartoonPicOutcome()>>(
        [this, request]()
        {
            return this->FaceCartoonPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FtClient::MorphFaceOutcome FtClient::MorphFace(const MorphFaceRequest &request)
{
    auto outcome = MakeRequest(request, "MorphFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MorphFaceResponse rsp = MorphFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MorphFaceOutcome(rsp);
        else
            return MorphFaceOutcome(o.GetError());
    }
    else
    {
        return MorphFaceOutcome(outcome.GetError());
    }
}

void FtClient::MorphFaceAsync(const MorphFaceRequest& request, const MorphFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MorphFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::MorphFaceOutcomeCallable FtClient::MorphFaceCallable(const MorphFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MorphFaceOutcome()>>(
        [this, request]()
        {
            return this->MorphFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FtClient::QueryFaceMorphJobOutcome FtClient::QueryFaceMorphJob(const QueryFaceMorphJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFaceMorphJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFaceMorphJobResponse rsp = QueryFaceMorphJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFaceMorphJobOutcome(rsp);
        else
            return QueryFaceMorphJobOutcome(o.GetError());
    }
    else
    {
        return QueryFaceMorphJobOutcome(outcome.GetError());
    }
}

void FtClient::QueryFaceMorphJobAsync(const QueryFaceMorphJobRequest& request, const QueryFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFaceMorphJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::QueryFaceMorphJobOutcomeCallable FtClient::QueryFaceMorphJobCallable(const QueryFaceMorphJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFaceMorphJobOutcome()>>(
        [this, request]()
        {
            return this->QueryFaceMorphJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FtClient::SwapGenderPicOutcome FtClient::SwapGenderPic(const SwapGenderPicRequest &request)
{
    auto outcome = MakeRequest(request, "SwapGenderPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwapGenderPicResponse rsp = SwapGenderPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwapGenderPicOutcome(rsp);
        else
            return SwapGenderPicOutcome(o.GetError());
    }
    else
    {
        return SwapGenderPicOutcome(outcome.GetError());
    }
}

void FtClient::SwapGenderPicAsync(const SwapGenderPicRequest& request, const SwapGenderPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwapGenderPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FtClient::SwapGenderPicOutcomeCallable FtClient::SwapGenderPicCallable(const SwapGenderPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwapGenderPicOutcome()>>(
        [this, request]()
        {
            return this->SwapGenderPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

