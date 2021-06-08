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

