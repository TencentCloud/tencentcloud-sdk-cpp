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

#include <tencentcloud/cii/v20201210/CiiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cii::V20201210;
using namespace TencentCloud::Cii::V20201210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-10";
    const string ENDPOINT = "cii.tencentcloudapi.com";
}

CiiClient::CiiClient(const Credential &credential, const string &region) :
    CiiClient(credential, region, ClientProfile())
{
}

CiiClient::CiiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiiClient::CreateStructureTaskOutcome CiiClient::CreateStructureTask(const CreateStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStructureTaskResponse rsp = CreateStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStructureTaskOutcome(rsp);
        else
            return CreateStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateStructureTaskAsync(const CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStructureTaskRequest&;
    using Resp = CreateStructureTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStructureTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::CreateStructureTaskOutcomeCallable CiiClient::CreateStructureTaskCallable(const CreateStructureTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStructureTaskOutcome>>();
    CreateStructureTaskAsync(
    request,
    [prom](
        const CiiClient*,
        const CreateStructureTaskRequest&,
        CreateStructureTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructCompareDataOutcome CiiClient::DescribeStructCompareData(const DescribeStructCompareDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructCompareData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructCompareDataResponse rsp = DescribeStructCompareDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructCompareDataOutcome(rsp);
        else
            return DescribeStructCompareDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStructCompareDataOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructCompareDataAsync(const DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructCompareDataRequest&;
    using Resp = DescribeStructCompareDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructCompareData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructCompareDataOutcomeCallable CiiClient::DescribeStructCompareDataCallable(const DescribeStructCompareDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructCompareDataOutcome>>();
    DescribeStructCompareDataAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructCompareDataRequest&,
        DescribeStructCompareDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructureTaskResultOutcome CiiClient::DescribeStructureTaskResult(const DescribeStructureTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureTaskResultResponse rsp = DescribeStructureTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureTaskResultOutcome(rsp);
        else
            return DescribeStructureTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureTaskResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureTaskResultAsync(const DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructureTaskResultRequest&;
    using Resp = DescribeStructureTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructureTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructureTaskResultOutcomeCallable CiiClient::DescribeStructureTaskResultCallable(const DescribeStructureTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructureTaskResultOutcome>>();
    DescribeStructureTaskResultAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructureTaskResultRequest&,
        DescribeStructureTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

