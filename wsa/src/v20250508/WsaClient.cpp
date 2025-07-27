/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wsa/v20250508/WsaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wsa::V20250508;
using namespace TencentCloud::Wsa::V20250508::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-05-08";
    const string ENDPOINT = "wsa.tencentcloudapi.com";
}

WsaClient::WsaClient(const Credential &credential, const string &region) :
    WsaClient(credential, region, ClientProfile())
{
}

WsaClient::WsaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WsaClient::SearchProOutcome WsaClient::SearchPro(const SearchProRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchProResponse rsp = SearchProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchProOutcome(rsp);
        else
            return SearchProOutcome(o.GetError());
    }
    else
    {
        return SearchProOutcome(outcome.GetError());
    }
}

void WsaClient::SearchProAsync(const SearchProRequest& request, const SearchProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchPro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WsaClient::SearchProOutcomeCallable WsaClient::SearchProCallable(const SearchProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchProOutcome()>>(
        [this, request]()
        {
            return this->SearchPro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

