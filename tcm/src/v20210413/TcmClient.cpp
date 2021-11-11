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

#include <tencentcloud/tcm/v20210413/TcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcm::V20210413;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-13";
    const string ENDPOINT = "tcm.tencentcloudapi.com";
}

TcmClient::TcmClient(const Credential &credential, const string &region) :
    TcmClient(credential, region, ClientProfile())
{
}

TcmClient::TcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcmClient::DescribeMeshOutcome TcmClient::DescribeMesh(const DescribeMeshRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshResponse rsp = DescribeMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshOutcome(rsp);
        else
            return DescribeMeshOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMesh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DescribeMeshOutcomeCallable TcmClient::DescribeMeshCallable(const DescribeMeshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMeshOutcome()>>(
        [this, request]()
        {
            return this->DescribeMesh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::DescribeMeshListOutcome TcmClient::DescribeMeshList(const DescribeMeshListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMeshList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshListResponse rsp = DescribeMeshListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshListOutcome(rsp);
        else
            return DescribeMeshListOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshListOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshListAsync(const DescribeMeshListRequest& request, const DescribeMeshListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMeshList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DescribeMeshListOutcomeCallable TcmClient::DescribeMeshListCallable(const DescribeMeshListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMeshListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMeshList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

