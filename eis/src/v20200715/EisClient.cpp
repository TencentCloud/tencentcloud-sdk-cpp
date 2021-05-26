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

#include <tencentcloud/eis/v20200715/EisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eis::V20200715;
using namespace TencentCloud::Eis::V20200715::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-15";
    const string ENDPOINT = "eis.tencentcloudapi.com";
}

EisClient::EisClient(const Credential &credential, const string &region) :
    EisClient(credential, region, ClientProfile())
{
}

EisClient::EisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EisClient::DescribeEisConnectorConfigOutcome EisClient::DescribeEisConnectorConfig(const DescribeEisConnectorConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEisConnectorConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEisConnectorConfigResponse rsp = DescribeEisConnectorConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEisConnectorConfigOutcome(rsp);
        else
            return DescribeEisConnectorConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeEisConnectorConfigOutcome(outcome.GetError());
    }
}

void EisClient::DescribeEisConnectorConfigAsync(const DescribeEisConnectorConfigRequest& request, const DescribeEisConnectorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEisConnectorConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::DescribeEisConnectorConfigOutcomeCallable EisClient::DescribeEisConnectorConfigCallable(const DescribeEisConnectorConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEisConnectorConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeEisConnectorConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::ListEisConnectorOperationsOutcome EisClient::ListEisConnectorOperations(const ListEisConnectorOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListEisConnectorOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEisConnectorOperationsResponse rsp = ListEisConnectorOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEisConnectorOperationsOutcome(rsp);
        else
            return ListEisConnectorOperationsOutcome(o.GetError());
    }
    else
    {
        return ListEisConnectorOperationsOutcome(outcome.GetError());
    }
}

void EisClient::ListEisConnectorOperationsAsync(const ListEisConnectorOperationsRequest& request, const ListEisConnectorOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEisConnectorOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::ListEisConnectorOperationsOutcomeCallable EisClient::ListEisConnectorOperationsCallable(const ListEisConnectorOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEisConnectorOperationsOutcome()>>(
        [this, request]()
        {
            return this->ListEisConnectorOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::ListEisConnectorsOutcome EisClient::ListEisConnectors(const ListEisConnectorsRequest &request)
{
    auto outcome = MakeRequest(request, "ListEisConnectors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEisConnectorsResponse rsp = ListEisConnectorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEisConnectorsOutcome(rsp);
        else
            return ListEisConnectorsOutcome(o.GetError());
    }
    else
    {
        return ListEisConnectorsOutcome(outcome.GetError());
    }
}

void EisClient::ListEisConnectorsAsync(const ListEisConnectorsRequest& request, const ListEisConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEisConnectors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::ListEisConnectorsOutcomeCallable EisClient::ListEisConnectorsCallable(const ListEisConnectorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEisConnectorsOutcome()>>(
        [this, request]()
        {
            return this->ListEisConnectors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

