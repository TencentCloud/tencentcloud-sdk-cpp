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

#include <tencentcloud/ecc/v20181213/EccClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecc::V20181213;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-13";
    const string ENDPOINT = "ecc.tencentcloudapi.com";
}

EccClient::EccClient(const Credential &credential, const string &region) :
    EccClient(credential, region, ClientProfile())
{
}

EccClient::EccClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EccClient::CorrectMultiImageOutcome EccClient::CorrectMultiImage(const CorrectMultiImageRequest &request)
{
    auto outcome = MakeRequest(request, "CorrectMultiImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CorrectMultiImageResponse rsp = CorrectMultiImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CorrectMultiImageOutcome(rsp);
        else
            return CorrectMultiImageOutcome(o.GetError());
    }
    else
    {
        return CorrectMultiImageOutcome(outcome.GetError());
    }
}

void EccClient::CorrectMultiImageAsync(const CorrectMultiImageRequest& request, const CorrectMultiImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CorrectMultiImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EccClient::CorrectMultiImageOutcomeCallable EccClient::CorrectMultiImageCallable(const CorrectMultiImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CorrectMultiImageOutcome()>>(
        [this, request]()
        {
            return this->CorrectMultiImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EccClient::DescribeTaskOutcome EccClient::DescribeTask(const DescribeTaskRequest &request)
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

void EccClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EccClient::DescribeTaskOutcomeCallable EccClient::DescribeTaskCallable(const DescribeTaskRequest &request)
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

EccClient::ECCOutcome EccClient::ECC(const ECCRequest &request)
{
    auto outcome = MakeRequest(request, "ECC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ECCResponse rsp = ECCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ECCOutcome(rsp);
        else
            return ECCOutcome(o.GetError());
    }
    else
    {
        return ECCOutcome(outcome.GetError());
    }
}

void EccClient::ECCAsync(const ECCRequest& request, const ECCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ECC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EccClient::ECCOutcomeCallable EccClient::ECCCallable(const ECCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ECCOutcome()>>(
        [this, request]()
        {
            return this->ECC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EccClient::EHOCROutcome EccClient::EHOCR(const EHOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EHOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EHOCRResponse rsp = EHOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EHOCROutcome(rsp);
        else
            return EHOCROutcome(o.GetError());
    }
    else
    {
        return EHOCROutcome(outcome.GetError());
    }
}

void EccClient::EHOCRAsync(const EHOCRRequest& request, const EHOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EHOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EccClient::EHOCROutcomeCallable EccClient::EHOCRCallable(const EHOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EHOCROutcome()>>(
        [this, request]()
        {
            return this->EHOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

