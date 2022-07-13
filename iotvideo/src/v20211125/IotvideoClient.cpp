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

#include <tencentcloud/iotvideo/v20211125/IotvideoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideo::V20211125;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-25";
    const string ENDPOINT = "iotvideo.tencentcloudapi.com";
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region) :
    IotvideoClient(credential, region, ClientProfile())
{
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotvideoClient::CallDeviceActionAsyncOutcome IotvideoClient::CallDeviceActionAsync(const CallDeviceActionAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CallDeviceActionAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallDeviceActionAsyncResponse rsp = CallDeviceActionAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallDeviceActionAsyncOutcome(rsp);
        else
            return CallDeviceActionAsyncOutcome(o.GetError());
    }
    else
    {
        return CallDeviceActionAsyncOutcome(outcome.GetError());
    }
}

void IotvideoClient::CallDeviceActionAsyncAsync(const CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallDeviceActionAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CallDeviceActionAsyncOutcomeCallable IotvideoClient::CallDeviceActionAsyncCallable(const CallDeviceActionAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallDeviceActionAsyncOutcome()>>(
        [this, request]()
        {
            return this->CallDeviceActionAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CallDeviceActionSyncOutcome IotvideoClient::CallDeviceActionSync(const CallDeviceActionSyncRequest &request)
{
    auto outcome = MakeRequest(request, "CallDeviceActionSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallDeviceActionSyncResponse rsp = CallDeviceActionSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallDeviceActionSyncOutcome(rsp);
        else
            return CallDeviceActionSyncOutcome(o.GetError());
    }
    else
    {
        return CallDeviceActionSyncOutcome(outcome.GetError());
    }
}

void IotvideoClient::CallDeviceActionSyncAsync(const CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallDeviceActionSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CallDeviceActionSyncOutcomeCallable IotvideoClient::CallDeviceActionSyncCallable(const CallDeviceActionSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallDeviceActionSyncOutcome()>>(
        [this, request]()
        {
            return this->CallDeviceActionSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateProductOutcome IotvideoClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateProductOutcomeCallable IotvideoClient::CreateProductCallable(const CreateProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
        [this, request]()
        {
            return this->CreateProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDeviceDataStatsOutcome IotvideoClient::DescribeDeviceDataStats(const DescribeDeviceDataStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDataStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataStatsResponse rsp = DescribeDeviceDataStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataStatsOutcome(rsp);
        else
            return DescribeDeviceDataStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataStatsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceDataStatsAsync(const DescribeDeviceDataStatsRequest& request, const DescribeDeviceDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceDataStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceDataStatsOutcomeCallable IotvideoClient::DescribeDeviceDataStatsCallable(const DescribeDeviceDataStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceDataStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceDataStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeMessageDataStatsOutcome IotvideoClient::DescribeMessageDataStats(const DescribeMessageDataStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageDataStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageDataStatsResponse rsp = DescribeMessageDataStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageDataStatsOutcome(rsp);
        else
            return DescribeMessageDataStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageDataStatsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeMessageDataStatsAsync(const DescribeMessageDataStatsRequest& request, const DescribeMessageDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageDataStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeMessageDataStatsOutcomeCallable IotvideoClient::DescribeMessageDataStatsCallable(const DescribeMessageDataStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageDataStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageDataStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::GenSingleDeviceSignatureOfPublicOutcome IotvideoClient::GenSingleDeviceSignatureOfPublic(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    auto outcome = MakeRequest(request, "GenSingleDeviceSignatureOfPublic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenSingleDeviceSignatureOfPublicResponse rsp = GenSingleDeviceSignatureOfPublicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenSingleDeviceSignatureOfPublicOutcome(rsp);
        else
            return GenSingleDeviceSignatureOfPublicOutcome(o.GetError());
    }
    else
    {
        return GenSingleDeviceSignatureOfPublicOutcome(outcome.GetError());
    }
}

void IotvideoClient::GenSingleDeviceSignatureOfPublicAsync(const GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenSingleDeviceSignatureOfPublic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::GenSingleDeviceSignatureOfPublicOutcomeCallable IotvideoClient::GenSingleDeviceSignatureOfPublicCallable(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenSingleDeviceSignatureOfPublicOutcome()>>(
        [this, request]()
        {
            return this->GenSingleDeviceSignatureOfPublic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

