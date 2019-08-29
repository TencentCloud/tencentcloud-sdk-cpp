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

#include <tencentcloud/bmvpc/v20180625/BmvpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bmvpc::V20180625;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-25";
    const string ENDPOINT = "bmvpc.tencentcloudapi.com";
}

BmvpcClient::BmvpcClient(const Credential &credential, const string &region) :
    BmvpcClient(credential, region, ClientProfile())
{
}

BmvpcClient::BmvpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmvpcClient::AcceptVpcPeerConnectionOutcome BmvpcClient::AcceptVpcPeerConnection(const AcceptVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptVpcPeerConnectionResponse rsp = AcceptVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptVpcPeerConnectionOutcome(rsp);
        else
            return AcceptVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return AcceptVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::AcceptVpcPeerConnectionAsync(const AcceptVpcPeerConnectionRequest& request, const AcceptVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptVpcPeerConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::AcceptVpcPeerConnectionOutcomeCallable BmvpcClient::AcceptVpcPeerConnectionCallable(const AcceptVpcPeerConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptVpcPeerConnectionOutcome()>>(
        [this, request]()
        {
            return this->AcceptVpcPeerConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::AsyncRegisterIpsOutcome BmvpcClient::AsyncRegisterIps(const AsyncRegisterIpsRequest &request)
{
    auto outcome = MakeRequest(request, "AsyncRegisterIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AsyncRegisterIpsResponse rsp = AsyncRegisterIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AsyncRegisterIpsOutcome(rsp);
        else
            return AsyncRegisterIpsOutcome(o.GetError());
    }
    else
    {
        return AsyncRegisterIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::AsyncRegisterIpsAsync(const AsyncRegisterIpsRequest& request, const AsyncRegisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AsyncRegisterIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::AsyncRegisterIpsOutcomeCallable BmvpcClient::AsyncRegisterIpsCallable(const AsyncRegisterIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AsyncRegisterIpsOutcome()>>(
        [this, request]()
        {
            return this->AsyncRegisterIps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::BindEipsToNatGatewayOutcome BmvpcClient::BindEipsToNatGateway(const BindEipsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindEipsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEipsToNatGatewayResponse rsp = BindEipsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEipsToNatGatewayOutcome(rsp);
        else
            return BindEipsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindEipsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindEipsToNatGatewayAsync(const BindEipsToNatGatewayRequest& request, const BindEipsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindEipsToNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::BindEipsToNatGatewayOutcomeCallable BmvpcClient::BindEipsToNatGatewayCallable(const BindEipsToNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindEipsToNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->BindEipsToNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::BindIpsToNatGatewayOutcome BmvpcClient::BindIpsToNatGateway(const BindIpsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindIpsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindIpsToNatGatewayResponse rsp = BindIpsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindIpsToNatGatewayOutcome(rsp);
        else
            return BindIpsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindIpsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindIpsToNatGatewayAsync(const BindIpsToNatGatewayRequest& request, const BindIpsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindIpsToNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::BindIpsToNatGatewayOutcomeCallable BmvpcClient::BindIpsToNatGatewayCallable(const BindIpsToNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindIpsToNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->BindIpsToNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::BindSubnetsToNatGatewayOutcome BmvpcClient::BindSubnetsToNatGateway(const BindSubnetsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindSubnetsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSubnetsToNatGatewayResponse rsp = BindSubnetsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSubnetsToNatGatewayOutcome(rsp);
        else
            return BindSubnetsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindSubnetsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindSubnetsToNatGatewayAsync(const BindSubnetsToNatGatewayRequest& request, const BindSubnetsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindSubnetsToNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::BindSubnetsToNatGatewayOutcomeCallable BmvpcClient::BindSubnetsToNatGatewayCallable(const BindSubnetsToNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindSubnetsToNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->BindSubnetsToNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateCustomerGatewayOutcome BmvpcClient::CreateCustomerGateway(const CreateCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomerGatewayResponse rsp = CreateCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomerGatewayOutcome(rsp);
        else
            return CreateCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCustomerGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomerGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateCustomerGatewayOutcomeCallable BmvpcClient::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomerGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomerGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateDockerSubnetWithVlanOutcome BmvpcClient::CreateDockerSubnetWithVlan(const CreateDockerSubnetWithVlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDockerSubnetWithVlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDockerSubnetWithVlanResponse rsp = CreateDockerSubnetWithVlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDockerSubnetWithVlanOutcome(rsp);
        else
            return CreateDockerSubnetWithVlanOutcome(o.GetError());
    }
    else
    {
        return CreateDockerSubnetWithVlanOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateDockerSubnetWithVlanAsync(const CreateDockerSubnetWithVlanRequest& request, const CreateDockerSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDockerSubnetWithVlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateDockerSubnetWithVlanOutcomeCallable BmvpcClient::CreateDockerSubnetWithVlanCallable(const CreateDockerSubnetWithVlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDockerSubnetWithVlanOutcome()>>(
        [this, request]()
        {
            return this->CreateDockerSubnetWithVlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateHostedInterfaceOutcome BmvpcClient::CreateHostedInterface(const CreateHostedInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostedInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostedInterfaceResponse rsp = CreateHostedInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostedInterfaceOutcome(rsp);
        else
            return CreateHostedInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateHostedInterfaceOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateHostedInterfaceAsync(const CreateHostedInterfaceRequest& request, const CreateHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHostedInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateHostedInterfaceOutcomeCallable BmvpcClient::CreateHostedInterfaceCallable(const CreateHostedInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostedInterfaceOutcome()>>(
        [this, request]()
        {
            return this->CreateHostedInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateInterfacesOutcome BmvpcClient::CreateInterfaces(const CreateInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInterfacesResponse rsp = CreateInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInterfacesOutcome(rsp);
        else
            return CreateInterfacesOutcome(o.GetError());
    }
    else
    {
        return CreateInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateInterfacesAsync(const CreateInterfacesRequest& request, const CreateInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateInterfacesOutcomeCallable BmvpcClient::CreateInterfacesCallable(const CreateInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInterfacesOutcome()>>(
        [this, request]()
        {
            return this->CreateInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateNatGatewayOutcome BmvpcClient::CreateNatGateway(const CreateNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewayResponse rsp = CreateNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewayOutcome(rsp);
        else
            return CreateNatGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateNatGatewayOutcomeCallable BmvpcClient::CreateNatGatewayCallable(const CreateNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateRoutePoliciesOutcome BmvpcClient::CreateRoutePolicies(const CreateRoutePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutePoliciesResponse rsp = CreateRoutePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutePoliciesOutcome(rsp);
        else
            return CreateRoutePoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutePoliciesOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateRoutePoliciesAsync(const CreateRoutePoliciesRequest& request, const CreateRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoutePolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateRoutePoliciesOutcomeCallable BmvpcClient::CreateRoutePoliciesCallable(const CreateRoutePoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoutePoliciesOutcome()>>(
        [this, request]()
        {
            return this->CreateRoutePolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateSubnetOutcome BmvpcClient::CreateSubnet(const CreateSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubnetResponse rsp = CreateSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubnetOutcome(rsp);
        else
            return CreateSubnetOutcome(o.GetError());
    }
    else
    {
        return CreateSubnetOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateSubnetOutcomeCallable BmvpcClient::CreateSubnetCallable(const CreateSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubnetOutcome()>>(
        [this, request]()
        {
            return this->CreateSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateVirtualSubnetWithVlanOutcome BmvpcClient::CreateVirtualSubnetWithVlan(const CreateVirtualSubnetWithVlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVirtualSubnetWithVlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVirtualSubnetWithVlanResponse rsp = CreateVirtualSubnetWithVlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVirtualSubnetWithVlanOutcome(rsp);
        else
            return CreateVirtualSubnetWithVlanOutcome(o.GetError());
    }
    else
    {
        return CreateVirtualSubnetWithVlanOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateVirtualSubnetWithVlanAsync(const CreateVirtualSubnetWithVlanRequest& request, const CreateVirtualSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVirtualSubnetWithVlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateVirtualSubnetWithVlanOutcomeCallable BmvpcClient::CreateVirtualSubnetWithVlanCallable(const CreateVirtualSubnetWithVlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVirtualSubnetWithVlanOutcome()>>(
        [this, request]()
        {
            return this->CreateVirtualSubnetWithVlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateVpcOutcome BmvpcClient::CreateVpc(const CreateVpcRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcResponse rsp = CreateVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcOutcome(rsp);
        else
            return CreateVpcOutcome(o.GetError());
    }
    else
    {
        return CreateVpcOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateVpcOutcomeCallable BmvpcClient::CreateVpcCallable(const CreateVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpcOutcome()>>(
        [this, request]()
        {
            return this->CreateVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::CreateVpcPeerConnectionOutcome BmvpcClient::CreateVpcPeerConnection(const CreateVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcPeerConnectionResponse rsp = CreateVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcPeerConnectionOutcome(rsp);
        else
            return CreateVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateVpcPeerConnectionAsync(const CreateVpcPeerConnectionRequest& request, const CreateVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpcPeerConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::CreateVpcPeerConnectionOutcomeCallable BmvpcClient::CreateVpcPeerConnectionCallable(const CreateVpcPeerConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpcPeerConnectionOutcome()>>(
        [this, request]()
        {
            return this->CreateVpcPeerConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteCustomerGatewayOutcome BmvpcClient::DeleteCustomerGateway(const DeleteCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomerGatewayResponse rsp = DeleteCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomerGatewayOutcome(rsp);
        else
            return DeleteCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomerGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomerGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteCustomerGatewayOutcomeCallable BmvpcClient::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomerGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomerGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteHostedInterfaceOutcome BmvpcClient::DeleteHostedInterface(const DeleteHostedInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHostedInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostedInterfaceResponse rsp = DeleteHostedInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostedInterfaceOutcome(rsp);
        else
            return DeleteHostedInterfaceOutcome(o.GetError());
    }
    else
    {
        return DeleteHostedInterfaceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteHostedInterfaceAsync(const DeleteHostedInterfaceRequest& request, const DeleteHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHostedInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteHostedInterfaceOutcomeCallable BmvpcClient::DeleteHostedInterfaceCallable(const DeleteHostedInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHostedInterfaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteHostedInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteHostedInterfacesOutcome BmvpcClient::DeleteHostedInterfaces(const DeleteHostedInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHostedInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostedInterfacesResponse rsp = DeleteHostedInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostedInterfacesOutcome(rsp);
        else
            return DeleteHostedInterfacesOutcome(o.GetError());
    }
    else
    {
        return DeleteHostedInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteHostedInterfacesAsync(const DeleteHostedInterfacesRequest& request, const DeleteHostedInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHostedInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteHostedInterfacesOutcomeCallable BmvpcClient::DeleteHostedInterfacesCallable(const DeleteHostedInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHostedInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteHostedInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteInterfacesOutcome BmvpcClient::DeleteInterfaces(const DeleteInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInterfacesResponse rsp = DeleteInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInterfacesOutcome(rsp);
        else
            return DeleteInterfacesOutcome(o.GetError());
    }
    else
    {
        return DeleteInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteInterfacesAsync(const DeleteInterfacesRequest& request, const DeleteInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteInterfacesOutcomeCallable BmvpcClient::DeleteInterfacesCallable(const DeleteInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteNatGatewayOutcome BmvpcClient::DeleteNatGateway(const DeleteNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewayResponse rsp = DeleteNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewayOutcome(rsp);
        else
            return DeleteNatGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteNatGatewayOutcomeCallable BmvpcClient::DeleteNatGatewayCallable(const DeleteNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteRoutePolicyOutcome BmvpcClient::DeleteRoutePolicy(const DeleteRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutePolicyResponse rsp = DeleteRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutePolicyOutcome(rsp);
        else
            return DeleteRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutePolicyOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteRoutePolicyAsync(const DeleteRoutePolicyRequest& request, const DeleteRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoutePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteRoutePolicyOutcomeCallable BmvpcClient::DeleteRoutePolicyCallable(const DeleteRoutePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoutePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoutePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteSubnetOutcome BmvpcClient::DeleteSubnet(const DeleteSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubnetResponse rsp = DeleteSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubnetOutcome(rsp);
        else
            return DeleteSubnetOutcome(o.GetError());
    }
    else
    {
        return DeleteSubnetOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteSubnetOutcomeCallable BmvpcClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSubnetOutcome()>>(
        [this, request]()
        {
            return this->DeleteSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteVirtualIpOutcome BmvpcClient::DeleteVirtualIp(const DeleteVirtualIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVirtualIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVirtualIpResponse rsp = DeleteVirtualIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVirtualIpOutcome(rsp);
        else
            return DeleteVirtualIpOutcome(o.GetError());
    }
    else
    {
        return DeleteVirtualIpOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVirtualIpAsync(const DeleteVirtualIpRequest& request, const DeleteVirtualIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVirtualIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteVirtualIpOutcomeCallable BmvpcClient::DeleteVirtualIpCallable(const DeleteVirtualIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVirtualIpOutcome()>>(
        [this, request]()
        {
            return this->DeleteVirtualIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteVpcOutcome BmvpcClient::DeleteVpc(const DeleteVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcResponse rsp = DeleteVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcOutcome(rsp);
        else
            return DeleteVpcOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteVpcOutcomeCallable BmvpcClient::DeleteVpcCallable(const DeleteVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpcOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteVpcPeerConnectionOutcome BmvpcClient::DeleteVpcPeerConnection(const DeleteVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcPeerConnectionResponse rsp = DeleteVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcPeerConnectionOutcome(rsp);
        else
            return DeleteVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVpcPeerConnectionAsync(const DeleteVpcPeerConnectionRequest& request, const DeleteVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpcPeerConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteVpcPeerConnectionOutcomeCallable BmvpcClient::DeleteVpcPeerConnectionCallable(const DeleteVpcPeerConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpcPeerConnectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpcPeerConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteVpnConnectionOutcome BmvpcClient::DeleteVpnConnection(const DeleteVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnConnectionResponse rsp = DeleteVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnConnectionOutcome(rsp);
        else
            return DeleteVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpnConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteVpnConnectionOutcomeCallable BmvpcClient::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpnConnectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpnConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeleteVpnGatewayOutcome BmvpcClient::DeleteVpnGateway(const DeleteVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnGatewayResponse rsp = DeleteVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnGatewayOutcome(rsp);
        else
            return DeleteVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeleteVpnGatewayOutcomeCallable BmvpcClient::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DeregisterIpsOutcome BmvpcClient::DeregisterIps(const DeregisterIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterIpsResponse rsp = DeregisterIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterIpsOutcome(rsp);
        else
            return DeregisterIpsOutcome(o.GetError());
    }
    else
    {
        return DeregisterIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeregisterIpsAsync(const DeregisterIpsRequest& request, const DeregisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DeregisterIpsOutcomeCallable BmvpcClient::DeregisterIpsCallable(const DeregisterIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterIpsOutcome()>>(
        [this, request]()
        {
            return this->DeregisterIps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeCustomerGatewaysOutcome BmvpcClient::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerGatewaysResponse rsp = DescribeCustomerGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerGatewaysOutcome(rsp);
        else
            return DescribeCustomerGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerGatewaysOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeCustomerGatewaysOutcomeCallable BmvpcClient::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeNatGatewaysOutcome BmvpcClient::DescribeNatGateways(const DescribeNatGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewaysResponse rsp = DescribeNatGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewaysOutcome(rsp);
        else
            return DescribeNatGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewaysOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeNatGatewaysOutcomeCallable BmvpcClient::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeNatSubnetsOutcome BmvpcClient::DescribeNatSubnets(const DescribeNatSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatSubnetsResponse rsp = DescribeNatSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatSubnetsOutcome(rsp);
        else
            return DescribeNatSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeNatSubnetsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeNatSubnetsAsync(const DescribeNatSubnetsRequest& request, const DescribeNatSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeNatSubnetsOutcomeCallable BmvpcClient::DescribeNatSubnetsCallable(const DescribeNatSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeRoutePoliciesOutcome BmvpcClient::DescribeRoutePolicies(const DescribeRoutePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoutePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoutePoliciesResponse rsp = DescribeRoutePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoutePoliciesOutcome(rsp);
        else
            return DescribeRoutePoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeRoutePoliciesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeRoutePoliciesAsync(const DescribeRoutePoliciesRequest& request, const DescribeRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoutePolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeRoutePoliciesOutcomeCallable BmvpcClient::DescribeRoutePoliciesCallable(const DescribeRoutePoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoutePoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoutePolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeRouteTablesOutcome BmvpcClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTablesResponse rsp = DescribeRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTablesOutcome(rsp);
        else
            return DescribeRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTablesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeRouteTablesOutcomeCallable BmvpcClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeSubnetAvailableIpsOutcome BmvpcClient::DescribeSubnetAvailableIps(const DescribeSubnetAvailableIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAvailableIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAvailableIpsResponse rsp = DescribeSubnetAvailableIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAvailableIpsOutcome(rsp);
        else
            return DescribeSubnetAvailableIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAvailableIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetAvailableIpsAsync(const DescribeSubnetAvailableIpsRequest& request, const DescribeSubnetAvailableIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetAvailableIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeSubnetAvailableIpsOutcomeCallable BmvpcClient::DescribeSubnetAvailableIpsCallable(const DescribeSubnetAvailableIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetAvailableIpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetAvailableIps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeSubnetByDeviceOutcome BmvpcClient::DescribeSubnetByDevice(const DescribeSubnetByDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetByDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetByDeviceResponse rsp = DescribeSubnetByDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetByDeviceOutcome(rsp);
        else
            return DescribeSubnetByDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetByDeviceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetByDeviceAsync(const DescribeSubnetByDeviceRequest& request, const DescribeSubnetByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetByDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeSubnetByDeviceOutcomeCallable BmvpcClient::DescribeSubnetByDeviceCallable(const DescribeSubnetByDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetByDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetByDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeSubnetByHostedDeviceOutcome BmvpcClient::DescribeSubnetByHostedDevice(const DescribeSubnetByHostedDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetByHostedDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetByHostedDeviceResponse rsp = DescribeSubnetByHostedDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetByHostedDeviceOutcome(rsp);
        else
            return DescribeSubnetByHostedDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetByHostedDeviceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetByHostedDeviceAsync(const DescribeSubnetByHostedDeviceRequest& request, const DescribeSubnetByHostedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetByHostedDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeSubnetByHostedDeviceOutcomeCallable BmvpcClient::DescribeSubnetByHostedDeviceCallable(const DescribeSubnetByHostedDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetByHostedDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetByHostedDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeSubnetsOutcome BmvpcClient::DescribeSubnets(const DescribeSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetsResponse rsp = DescribeSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetsOutcome(rsp);
        else
            return DescribeSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeSubnetsOutcomeCallable BmvpcClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeTaskStatusOutcome BmvpcClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeTaskStatusOutcomeCallable BmvpcClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpcPeerConnectionsOutcome BmvpcClient::DescribeVpcPeerConnections(const DescribeVpcPeerConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcPeerConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcPeerConnectionsResponse rsp = DescribeVpcPeerConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcPeerConnectionsOutcome(rsp);
        else
            return DescribeVpcPeerConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcPeerConnectionsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcPeerConnectionsAsync(const DescribeVpcPeerConnectionsRequest& request, const DescribeVpcPeerConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcPeerConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpcPeerConnectionsOutcomeCallable BmvpcClient::DescribeVpcPeerConnectionsCallable(const DescribeVpcPeerConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcPeerConnectionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcPeerConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpcQuotaOutcome BmvpcClient::DescribeVpcQuota(const DescribeVpcQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcQuotaResponse rsp = DescribeVpcQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcQuotaOutcome(rsp);
        else
            return DescribeVpcQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcQuotaOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcQuotaAsync(const DescribeVpcQuotaRequest& request, const DescribeVpcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpcQuotaOutcomeCallable BmvpcClient::DescribeVpcQuotaCallable(const DescribeVpcQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpcResourceOutcome BmvpcClient::DescribeVpcResource(const DescribeVpcResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcResourceResponse rsp = DescribeVpcResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcResourceOutcome(rsp);
        else
            return DescribeVpcResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcResourceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcResourceAsync(const DescribeVpcResourceRequest& request, const DescribeVpcResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpcResourceOutcomeCallable BmvpcClient::DescribeVpcResourceCallable(const DescribeVpcResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpcViewOutcome BmvpcClient::DescribeVpcView(const DescribeVpcViewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcView");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcViewResponse rsp = DescribeVpcViewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcViewOutcome(rsp);
        else
            return DescribeVpcViewOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcViewOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcViewAsync(const DescribeVpcViewRequest& request, const DescribeVpcViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcView(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpcViewOutcomeCallable BmvpcClient::DescribeVpcViewCallable(const DescribeVpcViewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcViewOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcView(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpcsOutcome BmvpcClient::DescribeVpcs(const DescribeVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcsResponse rsp = DescribeVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcsOutcome(rsp);
        else
            return DescribeVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpcsOutcomeCallable BmvpcClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpnConnectionsOutcome BmvpcClient::DescribeVpnConnections(const DescribeVpnConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnConnectionsResponse rsp = DescribeVpnConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnConnectionsOutcome(rsp);
        else
            return DescribeVpnConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnConnectionsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpnConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpnConnectionsOutcomeCallable BmvpcClient::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpnConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DescribeVpnGatewaysOutcome BmvpcClient::DescribeVpnGateways(const DescribeVpnGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewaysResponse rsp = DescribeVpnGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewaysOutcome(rsp);
        else
            return DescribeVpnGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewaysOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpnGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DescribeVpnGatewaysOutcomeCallable BmvpcClient::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpnGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpnGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::DownloadCustomerGatewayConfigurationOutcome BmvpcClient::DownloadCustomerGatewayConfiguration(const DownloadCustomerGatewayConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCustomerGatewayConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCustomerGatewayConfigurationResponse rsp = DownloadCustomerGatewayConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCustomerGatewayConfigurationOutcome(rsp);
        else
            return DownloadCustomerGatewayConfigurationOutcome(o.GetError());
    }
    else
    {
        return DownloadCustomerGatewayConfigurationOutcome(outcome.GetError());
    }
}

void BmvpcClient::DownloadCustomerGatewayConfigurationAsync(const DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadCustomerGatewayConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::DownloadCustomerGatewayConfigurationOutcomeCallable BmvpcClient::DownloadCustomerGatewayConfigurationCallable(const DownloadCustomerGatewayConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadCustomerGatewayConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DownloadCustomerGatewayConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyCustomerGatewayAttributeOutcome BmvpcClient::ModifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomerGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomerGatewayAttributeResponse rsp = ModifyCustomerGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomerGatewayAttributeOutcome(rsp);
        else
            return ModifyCustomerGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomerGatewayAttributeOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomerGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyCustomerGatewayAttributeOutcomeCallable BmvpcClient::ModifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomerGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomerGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyRoutePolicyOutcome BmvpcClient::ModifyRoutePolicy(const ModifyRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoutePolicyResponse rsp = ModifyRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoutePolicyOutcome(rsp);
        else
            return ModifyRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyRoutePolicyOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyRoutePolicyAsync(const ModifyRoutePolicyRequest& request, const ModifyRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoutePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyRoutePolicyOutcomeCallable BmvpcClient::ModifyRoutePolicyCallable(const ModifyRoutePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoutePolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoutePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyRouteTableOutcome BmvpcClient::ModifyRouteTable(const ModifyRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRouteTableResponse rsp = ModifyRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRouteTableOutcome(rsp);
        else
            return ModifyRouteTableOutcome(o.GetError());
    }
    else
    {
        return ModifyRouteTableOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyRouteTableAsync(const ModifyRouteTableRequest& request, const ModifyRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyRouteTableOutcomeCallable BmvpcClient::ModifyRouteTableCallable(const ModifyRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRouteTableOutcome()>>(
        [this, request]()
        {
            return this->ModifyRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifySubnetAttributeOutcome BmvpcClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubnetAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubnetAttributeResponse rsp = ModifySubnetAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubnetAttributeOutcome(rsp);
        else
            return ModifySubnetAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySubnetAttributeOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubnetAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifySubnetAttributeOutcomeCallable BmvpcClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubnetAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySubnetAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifySubnetDHCPRelayOutcome BmvpcClient::ModifySubnetDHCPRelay(const ModifySubnetDHCPRelayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubnetDHCPRelay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubnetDHCPRelayResponse rsp = ModifySubnetDHCPRelayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubnetDHCPRelayOutcome(rsp);
        else
            return ModifySubnetDHCPRelayOutcome(o.GetError());
    }
    else
    {
        return ModifySubnetDHCPRelayOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifySubnetDHCPRelayAsync(const ModifySubnetDHCPRelayRequest& request, const ModifySubnetDHCPRelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubnetDHCPRelay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifySubnetDHCPRelayOutcomeCallable BmvpcClient::ModifySubnetDHCPRelayCallable(const ModifySubnetDHCPRelayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubnetDHCPRelayOutcome()>>(
        [this, request]()
        {
            return this->ModifySubnetDHCPRelay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyVpcAttributeOutcome BmvpcClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAttributeResponse rsp = ModifyVpcAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAttributeOutcome(rsp);
        else
            return ModifyVpcAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAttributeOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyVpcAttributeOutcomeCallable BmvpcClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyVpcPeerConnectionOutcome BmvpcClient::ModifyVpcPeerConnection(const ModifyVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcPeerConnectionResponse rsp = ModifyVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcPeerConnectionOutcome(rsp);
        else
            return ModifyVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyVpcPeerConnectionAsync(const ModifyVpcPeerConnectionRequest& request, const ModifyVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcPeerConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyVpcPeerConnectionOutcomeCallable BmvpcClient::ModifyVpcPeerConnectionCallable(const ModifyVpcPeerConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcPeerConnectionOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcPeerConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyVpnConnectionAttributeOutcome BmvpcClient::ModifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnConnectionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnConnectionAttributeResponse rsp = ModifyVpnConnectionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnConnectionAttributeOutcome(rsp);
        else
            return ModifyVpnConnectionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnConnectionAttributeOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpnConnectionAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyVpnConnectionAttributeOutcomeCallable BmvpcClient::ModifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpnConnectionAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpnConnectionAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ModifyVpnGatewayAttributeOutcome BmvpcClient::ModifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayAttributeResponse rsp = ModifyVpnGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayAttributeOutcome(rsp);
        else
            return ModifyVpnGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayAttributeOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpnGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ModifyVpnGatewayAttributeOutcomeCallable BmvpcClient::ModifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpnGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpnGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::RejectVpcPeerConnectionOutcome BmvpcClient::RejectVpcPeerConnection(const RejectVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "RejectVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectVpcPeerConnectionResponse rsp = RejectVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectVpcPeerConnectionOutcome(rsp);
        else
            return RejectVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return RejectVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::RejectVpcPeerConnectionAsync(const RejectVpcPeerConnectionRequest& request, const RejectVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RejectVpcPeerConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::RejectVpcPeerConnectionOutcomeCallable BmvpcClient::RejectVpcPeerConnectionCallable(const RejectVpcPeerConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RejectVpcPeerConnectionOutcome()>>(
        [this, request]()
        {
            return this->RejectVpcPeerConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::ResetVpnConnectionOutcome BmvpcClient::ResetVpnConnection(const ResetVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ResetVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetVpnConnectionResponse rsp = ResetVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetVpnConnectionOutcome(rsp);
        else
            return ResetVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return ResetVpnConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::ResetVpnConnectionAsync(const ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetVpnConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::ResetVpnConnectionOutcomeCallable BmvpcClient::ResetVpnConnectionCallable(const ResetVpnConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetVpnConnectionOutcome()>>(
        [this, request]()
        {
            return this->ResetVpnConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::UnbindEipsFromNatGatewayOutcome BmvpcClient::UnbindEipsFromNatGateway(const UnbindEipsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEipsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEipsFromNatGatewayResponse rsp = UnbindEipsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEipsFromNatGatewayOutcome(rsp);
        else
            return UnbindEipsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindEipsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindEipsFromNatGatewayAsync(const UnbindEipsFromNatGatewayRequest& request, const UnbindEipsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindEipsFromNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::UnbindEipsFromNatGatewayOutcomeCallable BmvpcClient::UnbindEipsFromNatGatewayCallable(const UnbindEipsFromNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindEipsFromNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->UnbindEipsFromNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::UnbindIpsFromNatGatewayOutcome BmvpcClient::UnbindIpsFromNatGateway(const UnbindIpsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindIpsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindIpsFromNatGatewayResponse rsp = UnbindIpsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindIpsFromNatGatewayOutcome(rsp);
        else
            return UnbindIpsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindIpsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindIpsFromNatGatewayAsync(const UnbindIpsFromNatGatewayRequest& request, const UnbindIpsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindIpsFromNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::UnbindIpsFromNatGatewayOutcomeCallable BmvpcClient::UnbindIpsFromNatGatewayCallable(const UnbindIpsFromNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindIpsFromNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->UnbindIpsFromNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::UnbindSubnetsFromNatGatewayOutcome BmvpcClient::UnbindSubnetsFromNatGateway(const UnbindSubnetsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindSubnetsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindSubnetsFromNatGatewayResponse rsp = UnbindSubnetsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindSubnetsFromNatGatewayOutcome(rsp);
        else
            return UnbindSubnetsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindSubnetsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindSubnetsFromNatGatewayAsync(const UnbindSubnetsFromNatGatewayRequest& request, const UnbindSubnetsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindSubnetsFromNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::UnbindSubnetsFromNatGatewayOutcomeCallable BmvpcClient::UnbindSubnetsFromNatGatewayCallable(const UnbindSubnetsFromNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindSubnetsFromNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->UnbindSubnetsFromNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmvpcClient::UpgradeNatGatewayOutcome BmvpcClient::UpgradeNatGateway(const UpgradeNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeNatGatewayResponse rsp = UpgradeNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeNatGatewayOutcome(rsp);
        else
            return UpgradeNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UpgradeNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UpgradeNatGatewayAsync(const UpgradeNatGatewayRequest& request, const UpgradeNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmvpcClient::UpgradeNatGatewayOutcomeCallable BmvpcClient::UpgradeNatGatewayCallable(const UpgradeNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->UpgradeNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

