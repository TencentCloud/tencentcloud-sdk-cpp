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

#include <tencentcloud/iir/v20200417/IirClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iir::V20200417;
using namespace TencentCloud::Iir::V20200417::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-04-17";
    const string ENDPOINT = "iir.tencentcloudapi.com";
}

IirClient::IirClient(const Credential &credential, const string &region) :
    IirClient(credential, region, ClientProfile())
{
}

IirClient::IirClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IirClient::RecognizeProductOutcome IirClient::RecognizeProduct(const RecognizeProductRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeProductResponse rsp = RecognizeProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeProductOutcome(rsp);
        else
            return RecognizeProductOutcome(o.GetError());
    }
    else
    {
        return RecognizeProductOutcome(outcome.GetError());
    }
}

void IirClient::RecognizeProductAsync(const RecognizeProductRequest& request, const RecognizeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IirClient::RecognizeProductOutcomeCallable IirClient::RecognizeProductCallable(const RecognizeProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeProductOutcome()>>(
        [this, request]()
        {
            return this->RecognizeProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

