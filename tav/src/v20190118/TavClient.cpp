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

#include <tencentcloud/tav/v20190118/TavClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tav::V20190118;
using namespace TencentCloud::Tav::V20190118::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-18";
    const string ENDPOINT = "tav.tencentcloudapi.com";
}

TavClient::TavClient(const Credential &credential, const string &region) :
    TavClient(credential, region, ClientProfile())
{
}

TavClient::TavClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TavClient::GetLocalEngineOutcome TavClient::GetLocalEngine(const GetLocalEngineRequest &request)
{
    auto outcome = MakeRequest(request, "GetLocalEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLocalEngineResponse rsp = GetLocalEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLocalEngineOutcome(rsp);
        else
            return GetLocalEngineOutcome(o.GetError());
    }
    else
    {
        return GetLocalEngineOutcome(outcome.GetError());
    }
}

void TavClient::GetLocalEngineAsync(const GetLocalEngineRequest& request, const GetLocalEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLocalEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TavClient::GetLocalEngineOutcomeCallable TavClient::GetLocalEngineCallable(const GetLocalEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLocalEngineOutcome()>>(
        [this, request]()
        {
            return this->GetLocalEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TavClient::GetScanResultOutcome TavClient::GetScanResult(const GetScanResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetScanResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetScanResultResponse rsp = GetScanResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetScanResultOutcome(rsp);
        else
            return GetScanResultOutcome(o.GetError());
    }
    else
    {
        return GetScanResultOutcome(outcome.GetError());
    }
}

void TavClient::GetScanResultAsync(const GetScanResultRequest& request, const GetScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetScanResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TavClient::GetScanResultOutcomeCallable TavClient::GetScanResultCallable(const GetScanResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetScanResultOutcome()>>(
        [this, request]()
        {
            return this->GetScanResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TavClient::ScanFileOutcome TavClient::ScanFile(const ScanFileRequest &request)
{
    auto outcome = MakeRequest(request, "ScanFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanFileResponse rsp = ScanFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanFileOutcome(rsp);
        else
            return ScanFileOutcome(o.GetError());
    }
    else
    {
        return ScanFileOutcome(outcome.GetError());
    }
}

void TavClient::ScanFileAsync(const ScanFileRequest& request, const ScanFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TavClient::ScanFileOutcomeCallable TavClient::ScanFileCallable(const ScanFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanFileOutcome()>>(
        [this, request]()
        {
            return this->ScanFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TavClient::ScanFileHashOutcome TavClient::ScanFileHash(const ScanFileHashRequest &request)
{
    auto outcome = MakeRequest(request, "ScanFileHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanFileHashResponse rsp = ScanFileHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanFileHashOutcome(rsp);
        else
            return ScanFileHashOutcome(o.GetError());
    }
    else
    {
        return ScanFileHashOutcome(outcome.GetError());
    }
}

void TavClient::ScanFileHashAsync(const ScanFileHashRequest& request, const ScanFileHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanFileHash(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TavClient::ScanFileHashOutcomeCallable TavClient::ScanFileHashCallable(const ScanFileHashRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanFileHashOutcome()>>(
        [this, request]()
        {
            return this->ScanFileHash(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

