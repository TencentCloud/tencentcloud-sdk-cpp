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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::CreateEngineOutcome TseClient::CreateEngine(const CreateEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEngineResponse rsp = CreateEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEngineOutcome(rsp);
        else
            return CreateEngineOutcome(o.GetError());
    }
    else
    {
        return CreateEngineOutcome(outcome.GetError());
    }
}

void TseClient::CreateEngineAsync(const CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateEngineOutcomeCallable TseClient::CreateEngineCallable(const CreateEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEngineOutcome()>>(
        [this, request]()
        {
            return this->CreateEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteEngineOutcome TseClient::DeleteEngine(const DeleteEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEngineResponse rsp = DeleteEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEngineOutcome(rsp);
        else
            return DeleteEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteEngineOutcome(outcome.GetError());
    }
}

void TseClient::DeleteEngineAsync(const DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteEngineOutcomeCallable TseClient::DeleteEngineCallable(const DeleteEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEngineOutcome()>>(
        [this, request]()
        {
            return this->DeleteEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcome TseClient::DescribeCloudNativeAPIGatewayNodes(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayNodesResponse rsp = DescribeCloudNativeAPIGatewayNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayNodesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayNodesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayNodesAsync(const DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayNodesCallable(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosReplicasOutcome TseClient::DescribeNacosReplicas(const DescribeNacosReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosReplicasResponse rsp = DescribeNacosReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosReplicasOutcome(rsp);
        else
            return DescribeNacosReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosReplicasAsync(const DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosReplicasOutcomeCallable TseClient::DescribeNacosReplicasCallable(const DescribeNacosReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosServerInterfacesOutcome TseClient::DescribeNacosServerInterfaces(const DescribeNacosServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosServerInterfacesResponse rsp = DescribeNacosServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosServerInterfacesOutcome(rsp);
        else
            return DescribeNacosServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosServerInterfacesAsync(const DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosServerInterfacesOutcomeCallable TseClient::DescribeNacosServerInterfacesCallable(const DescribeNacosServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstanceAccessAddressOutcome TseClient::DescribeSREInstanceAccessAddress(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstanceAccessAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstanceAccessAddressResponse rsp = DescribeSREInstanceAccessAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstanceAccessAddressOutcome(rsp);
        else
            return DescribeSREInstanceAccessAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstanceAccessAddressOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstanceAccessAddressAsync(const DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstanceAccessAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstanceAccessAddressOutcomeCallable TseClient::DescribeSREInstanceAccessAddressCallable(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstanceAccessAddressOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstanceAccessAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstancesOutcome TseClient::DescribeSREInstances(const DescribeSREInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstancesResponse rsp = DescribeSREInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstancesOutcome(rsp);
        else
            return DescribeSREInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstancesAsync(const DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstancesOutcomeCallable TseClient::DescribeSREInstancesCallable(const DescribeSREInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperReplicasOutcome TseClient::DescribeZookeeperReplicas(const DescribeZookeeperReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperReplicasResponse rsp = DescribeZookeeperReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperReplicasOutcome(rsp);
        else
            return DescribeZookeeperReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperReplicasAsync(const DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperReplicasOutcomeCallable TseClient::DescribeZookeeperReplicasCallable(const DescribeZookeeperReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperServerInterfacesOutcome TseClient::DescribeZookeeperServerInterfaces(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperServerInterfacesResponse rsp = DescribeZookeeperServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperServerInterfacesOutcome(rsp);
        else
            return DescribeZookeeperServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperServerInterfacesAsync(const DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperServerInterfacesOutcomeCallable TseClient::DescribeZookeeperServerInterfacesCallable(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateEngineInternetAccessOutcome TseClient::UpdateEngineInternetAccess(const UpdateEngineInternetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEngineInternetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEngineInternetAccessResponse rsp = UpdateEngineInternetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEngineInternetAccessOutcome(rsp);
        else
            return UpdateEngineInternetAccessOutcome(o.GetError());
    }
    else
    {
        return UpdateEngineInternetAccessOutcome(outcome.GetError());
    }
}

void TseClient::UpdateEngineInternetAccessAsync(const UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEngineInternetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateEngineInternetAccessOutcomeCallable TseClient::UpdateEngineInternetAccessCallable(const UpdateEngineInternetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEngineInternetAccessOutcome()>>(
        [this, request]()
        {
            return this->UpdateEngineInternetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

