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

#include <tencentcloud/fmu/v20191213/FmuClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Fmu::V20191213;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-13";
    const string ENDPOINT = "fmu.tencentcloudapi.com";
}

FmuClient::FmuClient(const Credential &credential, const string &region) :
    FmuClient(credential, region, ClientProfile())
{
}

FmuClient::FmuClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FmuClient::BeautifyPicOutcome FmuClient::BeautifyPic(const BeautifyPicRequest &request)
{
    auto outcome = MakeRequest(request, "BeautifyPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BeautifyPicResponse rsp = BeautifyPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BeautifyPicOutcome(rsp);
        else
            return BeautifyPicOutcome(o.GetError());
    }
    else
    {
        return BeautifyPicOutcome(outcome.GetError());
    }
}

void FmuClient::BeautifyPicAsync(const BeautifyPicRequest& request, const BeautifyPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BeautifyPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::BeautifyPicOutcomeCallable FmuClient::BeautifyPicCallable(const BeautifyPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BeautifyPicOutcome()>>(
        [this, request]()
        {
            return this->BeautifyPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::BeautifyVideoOutcome FmuClient::BeautifyVideo(const BeautifyVideoRequest &request)
{
    auto outcome = MakeRequest(request, "BeautifyVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BeautifyVideoResponse rsp = BeautifyVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BeautifyVideoOutcome(rsp);
        else
            return BeautifyVideoOutcome(o.GetError());
    }
    else
    {
        return BeautifyVideoOutcome(outcome.GetError());
    }
}

void FmuClient::BeautifyVideoAsync(const BeautifyVideoRequest& request, const BeautifyVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BeautifyVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::BeautifyVideoOutcomeCallable FmuClient::BeautifyVideoCallable(const BeautifyVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BeautifyVideoOutcome()>>(
        [this, request]()
        {
            return this->BeautifyVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::CancelBeautifyVideoJobOutcome FmuClient::CancelBeautifyVideoJob(const CancelBeautifyVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelBeautifyVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelBeautifyVideoJobResponse rsp = CancelBeautifyVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelBeautifyVideoJobOutcome(rsp);
        else
            return CancelBeautifyVideoJobOutcome(o.GetError());
    }
    else
    {
        return CancelBeautifyVideoJobOutcome(outcome.GetError());
    }
}

void FmuClient::CancelBeautifyVideoJobAsync(const CancelBeautifyVideoJobRequest& request, const CancelBeautifyVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelBeautifyVideoJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::CancelBeautifyVideoJobOutcomeCallable FmuClient::CancelBeautifyVideoJobCallable(const CancelBeautifyVideoJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelBeautifyVideoJobOutcome()>>(
        [this, request]()
        {
            return this->CancelBeautifyVideoJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::CreateModelOutcome FmuClient::CreateModel(const CreateModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelResponse rsp = CreateModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelOutcome(rsp);
        else
            return CreateModelOutcome(o.GetError());
    }
    else
    {
        return CreateModelOutcome(outcome.GetError());
    }
}

void FmuClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::CreateModelOutcomeCallable FmuClient::CreateModelCallable(const CreateModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
        [this, request]()
        {
            return this->CreateModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::DeleteModelOutcome FmuClient::DeleteModel(const DeleteModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelResponse rsp = DeleteModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelOutcome(rsp);
        else
            return DeleteModelOutcome(o.GetError());
    }
    else
    {
        return DeleteModelOutcome(outcome.GetError());
    }
}

void FmuClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::DeleteModelOutcomeCallable FmuClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
        [this, request]()
        {
            return this->DeleteModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::GetModelListOutcome FmuClient::GetModelList(const GetModelListRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelListResponse rsp = GetModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelListOutcome(rsp);
        else
            return GetModelListOutcome(o.GetError());
    }
    else
    {
        return GetModelListOutcome(outcome.GetError());
    }
}

void FmuClient::GetModelListAsync(const GetModelListRequest& request, const GetModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetModelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::GetModelListOutcomeCallable FmuClient::GetModelListCallable(const GetModelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetModelListOutcome()>>(
        [this, request]()
        {
            return this->GetModelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::QueryBeautifyVideoJobOutcome FmuClient::QueryBeautifyVideoJob(const QueryBeautifyVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBeautifyVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBeautifyVideoJobResponse rsp = QueryBeautifyVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBeautifyVideoJobOutcome(rsp);
        else
            return QueryBeautifyVideoJobOutcome(o.GetError());
    }
    else
    {
        return QueryBeautifyVideoJobOutcome(outcome.GetError());
    }
}

void FmuClient::QueryBeautifyVideoJobAsync(const QueryBeautifyVideoJobRequest& request, const QueryBeautifyVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBeautifyVideoJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::QueryBeautifyVideoJobOutcomeCallable FmuClient::QueryBeautifyVideoJobCallable(const QueryBeautifyVideoJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBeautifyVideoJobOutcome()>>(
        [this, request]()
        {
            return this->QueryBeautifyVideoJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::StyleImageOutcome FmuClient::StyleImage(const StyleImageRequest &request)
{
    auto outcome = MakeRequest(request, "StyleImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StyleImageResponse rsp = StyleImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StyleImageOutcome(rsp);
        else
            return StyleImageOutcome(o.GetError());
    }
    else
    {
        return StyleImageOutcome(outcome.GetError());
    }
}

void FmuClient::StyleImageAsync(const StyleImageRequest& request, const StyleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StyleImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::StyleImageOutcomeCallable FmuClient::StyleImageCallable(const StyleImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StyleImageOutcome()>>(
        [this, request]()
        {
            return this->StyleImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::StyleImageProOutcome FmuClient::StyleImagePro(const StyleImageProRequest &request)
{
    auto outcome = MakeRequest(request, "StyleImagePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StyleImageProResponse rsp = StyleImageProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StyleImageProOutcome(rsp);
        else
            return StyleImageProOutcome(o.GetError());
    }
    else
    {
        return StyleImageProOutcome(outcome.GetError());
    }
}

void FmuClient::StyleImageProAsync(const StyleImageProRequest& request, const StyleImageProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StyleImagePro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::StyleImageProOutcomeCallable FmuClient::StyleImageProCallable(const StyleImageProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StyleImageProOutcome()>>(
        [this, request]()
        {
            return this->StyleImagePro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FmuClient::TryLipstickPicOutcome FmuClient::TryLipstickPic(const TryLipstickPicRequest &request)
{
    auto outcome = MakeRequest(request, "TryLipstickPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TryLipstickPicResponse rsp = TryLipstickPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TryLipstickPicOutcome(rsp);
        else
            return TryLipstickPicOutcome(o.GetError());
    }
    else
    {
        return TryLipstickPicOutcome(outcome.GetError());
    }
}

void FmuClient::TryLipstickPicAsync(const TryLipstickPicRequest& request, const TryLipstickPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TryLipstickPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FmuClient::TryLipstickPicOutcomeCallable FmuClient::TryLipstickPicCallable(const TryLipstickPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TryLipstickPicOutcome()>>(
        [this, request]()
        {
            return this->TryLipstickPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

