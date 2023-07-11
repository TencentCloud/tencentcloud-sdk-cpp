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

#include <tencentcloud/ecm/v20190719/EcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecm::V20190719;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-19";
    const string ENDPOINT = "ecm.tencentcloudapi.com";
}

EcmClient::EcmClient(const Credential &credential, const string &region) :
    EcmClient(credential, region, ClientProfile())
{
}

EcmClient::EcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcmClient::AllocateAddressesOutcome EcmClient::AllocateAddresses(const AllocateAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateAddressesResponse rsp = AllocateAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateAddressesOutcome(rsp);
        else
            return AllocateAddressesOutcome(o.GetError());
    }
    else
    {
        return AllocateAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::AllocateAddressesAsync(const AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AllocateAddressesOutcomeCallable EcmClient::AllocateAddressesCallable(const AllocateAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateAddressesOutcome()>>(
        [this, request]()
        {
            return this->AllocateAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AllocateIpv6AddressesBandwidthOutcome EcmClient::AllocateIpv6AddressesBandwidth(const AllocateIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateIpv6AddressesBandwidthResponse rsp = AllocateIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateIpv6AddressesBandwidthOutcome(rsp);
        else
            return AllocateIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return AllocateIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::AllocateIpv6AddressesBandwidthAsync(const AllocateIpv6AddressesBandwidthRequest& request, const AllocateIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateIpv6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AllocateIpv6AddressesBandwidthOutcomeCallable EcmClient::AllocateIpv6AddressesBandwidthCallable(const AllocateIpv6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateIpv6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->AllocateIpv6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssignIpv6AddressesOutcome EcmClient::AssignIpv6Addresses(const AssignIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6AddressesResponse rsp = AssignIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6AddressesOutcome(rsp);
        else
            return AssignIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6AddressesOutcome(outcome.GetError());
    }
}

void EcmClient::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssignIpv6AddressesOutcomeCallable EcmClient::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssignIpv6CidrBlockOutcome EcmClient::AssignIpv6CidrBlock(const AssignIpv6CidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6CidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6CidrBlockResponse rsp = AssignIpv6CidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6CidrBlockOutcome(rsp);
        else
            return AssignIpv6CidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6CidrBlockOutcome(outcome.GetError());
    }
}

void EcmClient::AssignIpv6CidrBlockAsync(const AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6CidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssignIpv6CidrBlockOutcomeCallable EcmClient::AssignIpv6CidrBlockCallable(const AssignIpv6CidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6CidrBlockOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6CidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssignIpv6CidrBlocksOutcome EcmClient::AssignIpv6CidrBlocks(const AssignIpv6CidrBlocksRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6CidrBlocks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6CidrBlocksResponse rsp = AssignIpv6CidrBlocksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6CidrBlocksOutcome(rsp);
        else
            return AssignIpv6CidrBlocksOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6CidrBlocksOutcome(outcome.GetError());
    }
}

void EcmClient::AssignIpv6CidrBlocksAsync(const AssignIpv6CidrBlocksRequest& request, const AssignIpv6CidrBlocksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6CidrBlocks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssignIpv6CidrBlocksOutcomeCallable EcmClient::AssignIpv6CidrBlocksCallable(const AssignIpv6CidrBlocksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6CidrBlocksOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6CidrBlocks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssignIpv6SubnetCidrBlockOutcome EcmClient::AssignIpv6SubnetCidrBlock(const AssignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6SubnetCidrBlockResponse rsp = AssignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return AssignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void EcmClient::AssignIpv6SubnetCidrBlockAsync(const AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6SubnetCidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssignIpv6SubnetCidrBlockOutcomeCallable EcmClient::AssignIpv6SubnetCidrBlockCallable(const AssignIpv6SubnetCidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6SubnetCidrBlockOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6SubnetCidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssignPrivateIpAddressesOutcome EcmClient::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignPrivateIpAddressesResponse rsp = AssignPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignPrivateIpAddressesOutcome(rsp);
        else
            return AssignPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return AssignPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignPrivateIpAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssignPrivateIpAddressesOutcomeCallable EcmClient::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignPrivateIpAddressesOutcome()>>(
        [this, request]()
        {
            return this->AssignPrivateIpAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssociateAddressOutcome EcmClient::AssociateAddress(const AssociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateAddressResponse rsp = AssociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateAddressOutcome(rsp);
        else
            return AssociateAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateAddressOutcome(outcome.GetError());
    }
}

void EcmClient::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssociateAddressOutcomeCallable EcmClient::AssociateAddressCallable(const AssociateAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateAddressOutcome()>>(
        [this, request]()
        {
            return this->AssociateAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AssociateSecurityGroupsOutcome EcmClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AssociateSecurityGroupsOutcomeCallable EcmClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AttachDisksOutcome EcmClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void EcmClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AttachDisksOutcomeCallable EcmClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDisksOutcome()>>(
        [this, request]()
        {
            return this->AttachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::AttachNetworkInterfaceOutcome EcmClient::AttachNetworkInterface(const AttachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "AttachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachNetworkInterfaceResponse rsp = AttachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachNetworkInterfaceOutcome(rsp);
        else
            return AttachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return AttachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void EcmClient::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::AttachNetworkInterfaceOutcomeCallable EcmClient::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->AttachNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::BatchDeregisterTargetsOutcome EcmClient::BatchDeregisterTargets(const BatchDeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeregisterTargetsResponse rsp = BatchDeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeregisterTargetsOutcome(rsp);
        else
            return BatchDeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchDeregisterTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::BatchDeregisterTargetsAsync(const BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeregisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::BatchDeregisterTargetsOutcomeCallable EcmClient::BatchDeregisterTargetsCallable(const BatchDeregisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeregisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->BatchDeregisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::BatchModifyTargetWeightOutcome EcmClient::BatchModifyTargetWeight(const BatchModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetWeightResponse rsp = BatchModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetWeightOutcome(rsp);
        else
            return BatchModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetWeightOutcome(outcome.GetError());
    }
}

void EcmClient::BatchModifyTargetWeightAsync(const BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyTargetWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::BatchModifyTargetWeightOutcomeCallable EcmClient::BatchModifyTargetWeightCallable(const BatchModifyTargetWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyTargetWeightOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyTargetWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::BatchRegisterTargetsOutcome EcmClient::BatchRegisterTargets(const BatchRegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterTargetsResponse rsp = BatchRegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterTargetsOutcome(rsp);
        else
            return BatchRegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::BatchRegisterTargetsAsync(const BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRegisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::BatchRegisterTargetsOutcomeCallable EcmClient::BatchRegisterTargetsCallable(const BatchRegisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRegisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->BatchRegisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateDisksOutcome EcmClient::CreateDisks(const CreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisksResponse rsp = CreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisksOutcome(rsp);
        else
            return CreateDisksOutcome(o.GetError());
    }
    else
    {
        return CreateDisksOutcome(outcome.GetError());
    }
}

void EcmClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateDisksOutcomeCallable EcmClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDisksOutcome()>>(
        [this, request]()
        {
            return this->CreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateHaVipOutcome EcmClient::CreateHaVip(const CreateHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHaVipResponse rsp = CreateHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHaVipOutcome(rsp);
        else
            return CreateHaVipOutcome(o.GetError());
    }
    else
    {
        return CreateHaVipOutcome(outcome.GetError());
    }
}

void EcmClient::CreateHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHaVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateHaVipOutcomeCallable EcmClient::CreateHaVipCallable(const CreateHaVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
        [this, request]()
        {
            return this->CreateHaVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateImageOutcome EcmClient::CreateImage(const CreateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageResponse rsp = CreateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageOutcome(rsp);
        else
            return CreateImageOutcome(o.GetError());
    }
    else
    {
        return CreateImageOutcome(outcome.GetError());
    }
}

void EcmClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateImageOutcomeCallable EcmClient::CreateImageCallable(const CreateImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
        [this, request]()
        {
            return this->CreateImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateKeyPairOutcome EcmClient::CreateKeyPair(const CreateKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyPairResponse rsp = CreateKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyPairOutcome(rsp);
        else
            return CreateKeyPairOutcome(o.GetError());
    }
    else
    {
        return CreateKeyPairOutcome(outcome.GetError());
    }
}

void EcmClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKeyPair(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateKeyPairOutcomeCallable EcmClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
        [this, request]()
        {
            return this->CreateKeyPair(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateListenerOutcome EcmClient::CreateListener(const CreateListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateListenerResponse rsp = CreateListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateListenerOutcome(rsp);
        else
            return CreateListenerOutcome(o.GetError());
    }
    else
    {
        return CreateListenerOutcome(outcome.GetError());
    }
}

void EcmClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateListenerOutcomeCallable EcmClient::CreateListenerCallable(const CreateListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
        [this, request]()
        {
            return this->CreateListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateLoadBalancerOutcome EcmClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerResponse rsp = CreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerOutcome(rsp);
        else
            return CreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerOutcome(outcome.GetError());
    }
}

void EcmClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateLoadBalancerOutcomeCallable EcmClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateModuleOutcome EcmClient::CreateModule(const CreateModuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModuleResponse rsp = CreateModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModuleOutcome(rsp);
        else
            return CreateModuleOutcome(o.GetError());
    }
    else
    {
        return CreateModuleOutcome(outcome.GetError());
    }
}

void EcmClient::CreateModuleAsync(const CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateModuleOutcomeCallable EcmClient::CreateModuleCallable(const CreateModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModuleOutcome()>>(
        [this, request]()
        {
            return this->CreateModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateNetworkInterfaceOutcome EcmClient::CreateNetworkInterface(const CreateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkInterfaceResponse rsp = CreateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkInterfaceOutcome(rsp);
        else
            return CreateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void EcmClient::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateNetworkInterfaceOutcomeCallable EcmClient::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateRouteTableOutcome EcmClient::CreateRouteTable(const CreateRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRouteTableResponse rsp = CreateRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRouteTableOutcome(rsp);
        else
            return CreateRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateRouteTableOutcome(outcome.GetError());
    }
}

void EcmClient::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateRouteTableOutcomeCallable EcmClient::CreateRouteTableCallable(const CreateRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRouteTableOutcome()>>(
        [this, request]()
        {
            return this->CreateRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateRoutesOutcome EcmClient::CreateRoutes(const CreateRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutesResponse rsp = CreateRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutesOutcome(rsp);
        else
            return CreateRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::CreateRoutesAsync(const CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateRoutesOutcomeCallable EcmClient::CreateRoutesCallable(const CreateRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoutesOutcome()>>(
        [this, request]()
        {
            return this->CreateRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateSecurityGroupOutcome EcmClient::CreateSecurityGroup(const CreateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupResponse rsp = CreateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupOutcome(rsp);
        else
            return CreateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupOutcome(outcome.GetError());
    }
}

void EcmClient::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateSecurityGroupOutcomeCallable EcmClient::CreateSecurityGroupCallable(const CreateSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateSecurityGroupPoliciesOutcome EcmClient::CreateSecurityGroupPolicies(const CreateSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupPoliciesResponse rsp = CreateSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupPoliciesOutcome(rsp);
        else
            return CreateSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void EcmClient::CreateSecurityGroupPoliciesAsync(const CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateSecurityGroupPoliciesOutcomeCallable EcmClient::CreateSecurityGroupPoliciesCallable(const CreateSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::CreateSubnetOutcome EcmClient::CreateSubnet(const CreateSubnetRequest &request)
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

void EcmClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateSubnetOutcomeCallable EcmClient::CreateSubnetCallable(const CreateSubnetRequest &request)
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

EcmClient::CreateVpcOutcome EcmClient::CreateVpc(const CreateVpcRequest &request)
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

void EcmClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateVpcOutcomeCallable EcmClient::CreateVpcCallable(const CreateVpcRequest &request)
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

EcmClient::DeleteHaVipOutcome EcmClient::DeleteHaVip(const DeleteHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHaVipResponse rsp = DeleteHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHaVipOutcome(rsp);
        else
            return DeleteHaVipOutcome(o.GetError());
    }
    else
    {
        return DeleteHaVipOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHaVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteHaVipOutcomeCallable EcmClient::DeleteHaVipCallable(const DeleteHaVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHaVipOutcome()>>(
        [this, request]()
        {
            return this->DeleteHaVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteImageOutcome EcmClient::DeleteImage(const DeleteImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageResponse rsp = DeleteImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageOutcome(rsp);
        else
            return DeleteImageOutcome(o.GetError());
    }
    else
    {
        return DeleteImageOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteImageOutcomeCallable EcmClient::DeleteImageCallable(const DeleteImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
        [this, request]()
        {
            return this->DeleteImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteListenerOutcome EcmClient::DeleteListener(const DeleteListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenerResponse rsp = DeleteListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenerOutcome(rsp);
        else
            return DeleteListenerOutcome(o.GetError());
    }
    else
    {
        return DeleteListenerOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteListenerOutcomeCallable EcmClient::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
        [this, request]()
        {
            return this->DeleteListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteLoadBalancerOutcome EcmClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerResponse rsp = DeleteLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerOutcome(rsp);
        else
            return DeleteLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteLoadBalancerOutcomeCallable EcmClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteLoadBalancerListenersOutcome EcmClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerListenersResponse rsp = DeleteLoadBalancerListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerListenersOutcome(rsp);
        else
            return DeleteLoadBalancerListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerListenersOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancerListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteLoadBalancerListenersOutcomeCallable EcmClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerListenersOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancerListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteModuleOutcome EcmClient::DeleteModule(const DeleteModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModuleResponse rsp = DeleteModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModuleOutcome(rsp);
        else
            return DeleteModuleOutcome(o.GetError());
    }
    else
    {
        return DeleteModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteModuleAsync(const DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteModuleOutcomeCallable EcmClient::DeleteModuleCallable(const DeleteModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteNetworkInterfaceOutcome EcmClient::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkInterfaceResponse rsp = DeleteNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkInterfaceOutcome(rsp);
        else
            return DeleteNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkInterfaceOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteNetworkInterfaceOutcomeCallable EcmClient::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteRouteTableOutcome EcmClient::DeleteRouteTable(const DeleteRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteTableResponse rsp = DeleteRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteTableOutcome(rsp);
        else
            return DeleteRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteTableOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteRouteTableOutcomeCallable EcmClient::DeleteRouteTableCallable(const DeleteRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRouteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteRoutesOutcome EcmClient::DeleteRoutes(const DeleteRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutesResponse rsp = DeleteRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutesOutcome(rsp);
        else
            return DeleteRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteRoutesAsync(const DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteRoutesOutcomeCallable EcmClient::DeleteRoutesCallable(const DeleteRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoutesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteSecurityGroupOutcome EcmClient::DeleteSecurityGroup(const DeleteSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupResponse rsp = DeleteSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupOutcome(rsp);
        else
            return DeleteSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteSecurityGroupOutcomeCallable EcmClient::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteSecurityGroupPoliciesOutcome EcmClient::DeleteSecurityGroupPolicies(const DeleteSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupPoliciesResponse rsp = DeleteSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupPoliciesOutcome(rsp);
        else
            return DeleteSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteSecurityGroupPoliciesAsync(const DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteSecurityGroupPoliciesOutcomeCallable EcmClient::DeleteSecurityGroupPoliciesCallable(const DeleteSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteSnapshotsOutcome EcmClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteSnapshotsOutcomeCallable EcmClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteSubnetOutcome EcmClient::DeleteSubnet(const DeleteSubnetRequest &request)
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

void EcmClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteSubnetOutcomeCallable EcmClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
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

EcmClient::DeleteVpcOutcome EcmClient::DeleteVpc(const DeleteVpcRequest &request)
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

void EcmClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteVpcOutcomeCallable EcmClient::DeleteVpcCallable(const DeleteVpcRequest &request)
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

EcmClient::DescribeAddressQuotaOutcome EcmClient::DescribeAddressQuota(const DescribeAddressQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressQuotaResponse rsp = DescribeAddressQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressQuotaOutcome(rsp);
        else
            return DescribeAddressQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressQuotaOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeAddressQuotaAsync(const DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeAddressQuotaOutcomeCallable EcmClient::DescribeAddressQuotaCallable(const DescribeAddressQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeAddressesOutcome EcmClient::DescribeAddresses(const DescribeAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressesResponse rsp = DescribeAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressesOutcome(rsp);
        else
            return DescribeAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeAddressesOutcomeCallable EcmClient::DescribeAddressesCallable(const DescribeAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeBaseOverviewOutcome EcmClient::DescribeBaseOverview(const DescribeBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseOverviewResponse rsp = DescribeBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseOverviewOutcome(rsp);
        else
            return DescribeBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeBaseOverviewAsync(const DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeBaseOverviewOutcomeCallable EcmClient::DescribeBaseOverviewCallable(const DescribeBaseOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeConfigOutcome EcmClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeConfigOutcomeCallable EcmClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeCustomImageTaskOutcome EcmClient::DescribeCustomImageTask(const DescribeCustomImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomImageTaskResponse rsp = DescribeCustomImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomImageTaskOutcome(rsp);
        else
            return DescribeCustomImageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomImageTaskOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeCustomImageTaskAsync(const DescribeCustomImageTaskRequest& request, const DescribeCustomImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomImageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeCustomImageTaskOutcomeCallable EcmClient::DescribeCustomImageTaskCallable(const DescribeCustomImageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomImageTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomImageTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeDefaultSubnetOutcome EcmClient::DescribeDefaultSubnet(const DescribeDefaultSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultSubnetResponse rsp = DescribeDefaultSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultSubnetOutcome(rsp);
        else
            return DescribeDefaultSubnetOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultSubnetOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeDefaultSubnetAsync(const DescribeDefaultSubnetRequest& request, const DescribeDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeDefaultSubnetOutcomeCallable EcmClient::DescribeDefaultSubnetCallable(const DescribeDefaultSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultSubnetOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeDisksOutcome EcmClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeDisksOutcomeCallable EcmClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeHaVipsOutcome EcmClient::DescribeHaVips(const DescribeHaVipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHaVips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHaVipsResponse rsp = DescribeHaVipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHaVipsOutcome(rsp);
        else
            return DescribeHaVipsOutcome(o.GetError());
    }
    else
    {
        return DescribeHaVipsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHaVips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeHaVipsOutcomeCallable EcmClient::DescribeHaVipsCallable(const DescribeHaVipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHaVips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeImageOutcome EcmClient::DescribeImage(const DescribeImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageResponse rsp = DescribeImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageOutcome(rsp);
        else
            return DescribeImageOutcome(o.GetError());
    }
    else
    {
        return DescribeImageOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeImageOutcomeCallable EcmClient::DescribeImageCallable(const DescribeImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
        [this, request]()
        {
            return this->DescribeImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeImportImageOsOutcome EcmClient::DescribeImportImageOs(const DescribeImportImageOsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportImageOs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportImageOsResponse rsp = DescribeImportImageOsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportImageOsOutcome(rsp);
        else
            return DescribeImportImageOsOutcome(o.GetError());
    }
    else
    {
        return DescribeImportImageOsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeImportImageOsAsync(const DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImportImageOs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeImportImageOsOutcomeCallable EcmClient::DescribeImportImageOsCallable(const DescribeImportImageOsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImportImageOsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImportImageOs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstanceTypeConfigOutcome EcmClient::DescribeInstanceTypeConfig(const DescribeInstanceTypeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypeConfigResponse rsp = DescribeInstanceTypeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypeConfigOutcome(rsp);
        else
            return DescribeInstanceTypeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstanceTypeConfigAsync(const DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTypeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstanceTypeConfigOutcomeCallable EcmClient::DescribeInstanceTypeConfigCallable(const DescribeInstanceTypeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTypeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstanceVncUrlOutcome EcmClient::DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceVncUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceVncUrlResponse rsp = DescribeInstanceVncUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceVncUrlOutcome(rsp);
        else
            return DescribeInstanceVncUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceVncUrlOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceVncUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstanceVncUrlOutcomeCallable EcmClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceVncUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstancesOutcome EcmClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstancesOutcomeCallable EcmClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstancesDeniedActionsOutcome EcmClient::DescribeInstancesDeniedActions(const DescribeInstancesDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDeniedActionsResponse rsp = DescribeInstancesDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDeniedActionsOutcome(rsp);
        else
            return DescribeInstancesDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDeniedActionsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesDeniedActionsAsync(const DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstancesDeniedActionsOutcomeCallable EcmClient::DescribeInstancesDeniedActionsCallable(const DescribeInstancesDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeListenersOutcome EcmClient::DescribeListeners(const DescribeListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenersResponse rsp = DescribeListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenersOutcome(rsp);
        else
            return DescribeListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeListenersOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeListenersOutcomeCallable EcmClient::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeLoadBalanceTaskStatusOutcome EcmClient::DescribeLoadBalanceTaskStatus(const DescribeLoadBalanceTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalanceTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalanceTaskStatusResponse rsp = DescribeLoadBalanceTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalanceTaskStatusOutcome(rsp);
        else
            return DescribeLoadBalanceTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalanceTaskStatusOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeLoadBalanceTaskStatusAsync(const DescribeLoadBalanceTaskStatusRequest& request, const DescribeLoadBalanceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalanceTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeLoadBalanceTaskStatusOutcomeCallable EcmClient::DescribeLoadBalanceTaskStatusCallable(const DescribeLoadBalanceTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalanceTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalanceTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeLoadBalancersOutcome EcmClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeLoadBalancersOutcomeCallable EcmClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeModuleOutcome EcmClient::DescribeModule(const DescribeModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleResponse rsp = DescribeModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleOutcome(rsp);
        else
            return DescribeModuleOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleAsync(const DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeModuleOutcomeCallable EcmClient::DescribeModuleCallable(const DescribeModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeModuleDetailOutcome EcmClient::DescribeModuleDetail(const DescribeModuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleDetailResponse rsp = DescribeModuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleDetailOutcome(rsp);
        else
            return DescribeModuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleDetailOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleDetailAsync(const DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeModuleDetailOutcomeCallable EcmClient::DescribeModuleDetailCallable(const DescribeModuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeModuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeMonthPeakNetworkOutcome EcmClient::DescribeMonthPeakNetwork(const DescribeMonthPeakNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonthPeakNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonthPeakNetworkResponse rsp = DescribeMonthPeakNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonthPeakNetworkOutcome(rsp);
        else
            return DescribeMonthPeakNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribeMonthPeakNetworkOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeMonthPeakNetworkAsync(const DescribeMonthPeakNetworkRequest& request, const DescribeMonthPeakNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonthPeakNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeMonthPeakNetworkOutcomeCallable EcmClient::DescribeMonthPeakNetworkCallable(const DescribeMonthPeakNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonthPeakNetworkOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonthPeakNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeNetworkInterfacesOutcome EcmClient::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInterfacesResponse rsp = DescribeNetworkInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInterfacesOutcome(rsp);
        else
            return DescribeNetworkInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInterfacesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeNetworkInterfacesOutcomeCallable EcmClient::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeNodeOutcome EcmClient::DescribeNode(const DescribeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeResponse rsp = DescribeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeOutcome(rsp);
        else
            return DescribeNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeNodeAsync(const DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeNodeOutcomeCallable EcmClient::DescribeNodeCallable(const DescribeNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePackingQuotaGroupOutcome EcmClient::DescribePackingQuotaGroup(const DescribePackingQuotaGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackingQuotaGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackingQuotaGroupResponse rsp = DescribePackingQuotaGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackingQuotaGroupOutcome(rsp);
        else
            return DescribePackingQuotaGroupOutcome(o.GetError());
    }
    else
    {
        return DescribePackingQuotaGroupOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePackingQuotaGroupAsync(const DescribePackingQuotaGroupRequest& request, const DescribePackingQuotaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackingQuotaGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePackingQuotaGroupOutcomeCallable EcmClient::DescribePackingQuotaGroupCallable(const DescribePackingQuotaGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackingQuotaGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribePackingQuotaGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePeakBaseOverviewOutcome EcmClient::DescribePeakBaseOverview(const DescribePeakBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakBaseOverviewResponse rsp = DescribePeakBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakBaseOverviewOutcome(rsp);
        else
            return DescribePeakBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakBaseOverviewAsync(const DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakBaseOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePeakBaseOverviewOutcomeCallable EcmClient::DescribePeakBaseOverviewCallable(const DescribePeakBaseOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakBaseOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakBaseOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePeakNetworkOverviewOutcome EcmClient::DescribePeakNetworkOverview(const DescribePeakNetworkOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakNetworkOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakNetworkOverviewResponse rsp = DescribePeakNetworkOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakNetworkOverviewOutcome(rsp);
        else
            return DescribePeakNetworkOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakNetworkOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakNetworkOverviewAsync(const DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakNetworkOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePeakNetworkOverviewOutcomeCallable EcmClient::DescribePeakNetworkOverviewCallable(const DescribePeakNetworkOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakNetworkOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakNetworkOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePriceRunInstanceOutcome EcmClient::DescribePriceRunInstance(const DescribePriceRunInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePriceRunInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePriceRunInstanceResponse rsp = DescribePriceRunInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePriceRunInstanceOutcome(rsp);
        else
            return DescribePriceRunInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribePriceRunInstanceOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePriceRunInstanceAsync(const DescribePriceRunInstanceRequest& request, const DescribePriceRunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePriceRunInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePriceRunInstanceOutcomeCallable EcmClient::DescribePriceRunInstanceCallable(const DescribePriceRunInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePriceRunInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribePriceRunInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeRegionIpv6AddressesOutcome EcmClient::DescribeRegionIpv6Addresses(const DescribeRegionIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegionIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionIpv6AddressesResponse rsp = DescribeRegionIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionIpv6AddressesOutcome(rsp);
        else
            return DescribeRegionIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionIpv6AddressesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeRegionIpv6AddressesAsync(const DescribeRegionIpv6AddressesRequest& request, const DescribeRegionIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegionIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeRegionIpv6AddressesOutcomeCallable EcmClient::DescribeRegionIpv6AddressesCallable(const DescribeRegionIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegionIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeRouteConflictsOutcome EcmClient::DescribeRouteConflicts(const DescribeRouteConflictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteConflicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteConflictsResponse rsp = DescribeRouteConflictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteConflictsOutcome(rsp);
        else
            return DescribeRouteConflictsOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteConflictsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeRouteConflictsAsync(const DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteConflicts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeRouteConflictsOutcomeCallable EcmClient::DescribeRouteConflictsCallable(const DescribeRouteConflictsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteConflictsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteConflicts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeRouteTablesOutcome EcmClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
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

void EcmClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeRouteTablesOutcomeCallable EcmClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
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

EcmClient::DescribeSecurityGroupAssociationStatisticsOutcome EcmClient::DescribeSecurityGroupAssociationStatistics(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupAssociationStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupAssociationStatisticsResponse rsp = DescribeSecurityGroupAssociationStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupAssociationStatisticsOutcome(rsp);
        else
            return DescribeSecurityGroupAssociationStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupAssociationStatisticsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSecurityGroupAssociationStatisticsAsync(const DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupAssociationStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSecurityGroupAssociationStatisticsOutcomeCallable EcmClient::DescribeSecurityGroupAssociationStatisticsCallable(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAssociationStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupAssociationStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeSecurityGroupLimitsOutcome EcmClient::DescribeSecurityGroupLimits(const DescribeSecurityGroupLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupLimitsResponse rsp = DescribeSecurityGroupLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupLimitsOutcome(rsp);
        else
            return DescribeSecurityGroupLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupLimitsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSecurityGroupLimitsAsync(const DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSecurityGroupLimitsOutcomeCallable EcmClient::DescribeSecurityGroupLimitsCallable(const DescribeSecurityGroupLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeSecurityGroupPoliciesOutcome EcmClient::DescribeSecurityGroupPolicies(const DescribeSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupPoliciesResponse rsp = DescribeSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupPoliciesOutcome(rsp);
        else
            return DescribeSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSecurityGroupPoliciesAsync(const DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSecurityGroupPoliciesOutcomeCallable EcmClient::DescribeSecurityGroupPoliciesCallable(const DescribeSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeSecurityGroupsOutcome EcmClient::DescribeSecurityGroups(const DescribeSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupsResponse rsp = DescribeSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupsOutcome(rsp);
        else
            return DescribeSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSecurityGroupsOutcomeCallable EcmClient::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeSnapshotsOutcome EcmClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSnapshotsOutcomeCallable EcmClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeSubnetsOutcome EcmClient::DescribeSubnets(const DescribeSubnetsRequest &request)
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

void EcmClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeSubnetsOutcomeCallable EcmClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
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

EcmClient::DescribeTargetHealthOutcome EcmClient::DescribeTargetHealth(const DescribeTargetHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetHealthResponse rsp = DescribeTargetHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetHealthOutcome(rsp);
        else
            return DescribeTargetHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetHealthOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeTargetHealthOutcomeCallable EcmClient::DescribeTargetHealthCallable(const DescribeTargetHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeTargetsOutcome EcmClient::DescribeTargets(const DescribeTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetsResponse rsp = DescribeTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetsOutcome(rsp);
        else
            return DescribeTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTargetsAsync(const DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeTargetsOutcomeCallable EcmClient::DescribeTargetsCallable(const DescribeTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeTaskResultOutcome EcmClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeTaskResultOutcomeCallable EcmClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeTaskStatusOutcome EcmClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
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

void EcmClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeTaskStatusOutcomeCallable EcmClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
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

EcmClient::DescribeVpcsOutcome EcmClient::DescribeVpcs(const DescribeVpcsRequest &request)
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

void EcmClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeVpcsOutcomeCallable EcmClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
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

EcmClient::DetachDisksOutcome EcmClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void EcmClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DetachDisksOutcomeCallable EcmClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachDisksOutcome()>>(
        [this, request]()
        {
            return this->DetachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DetachNetworkInterfaceOutcome EcmClient::DetachNetworkInterface(const DetachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachNetworkInterfaceResponse rsp = DetachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachNetworkInterfaceOutcome(rsp);
        else
            return DetachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DetachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void EcmClient::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DetachNetworkInterfaceOutcomeCallable EcmClient::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->DetachNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DisableRoutesOutcome EcmClient::DisableRoutes(const DisableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRoutesResponse rsp = DisableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRoutesOutcome(rsp);
        else
            return DisableRoutesOutcome(o.GetError());
    }
    else
    {
        return DisableRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::DisableRoutesAsync(const DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DisableRoutesOutcomeCallable EcmClient::DisableRoutesCallable(const DisableRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableRoutesOutcome()>>(
        [this, request]()
        {
            return this->DisableRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DisassociateAddressOutcome EcmClient::DisassociateAddress(const DisassociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateAddressResponse rsp = DisassociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateAddressOutcome(rsp);
        else
            return DisassociateAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateAddressOutcome(outcome.GetError());
    }
}

void EcmClient::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DisassociateAddressOutcomeCallable EcmClient::DisassociateAddressCallable(const DisassociateAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateAddressOutcome()>>(
        [this, request]()
        {
            return this->DisassociateAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DisassociateInstancesKeyPairsOutcome EcmClient::DisassociateInstancesKeyPairs(const DisassociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateInstancesKeyPairsResponse rsp = DisassociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateInstancesKeyPairsOutcome(rsp);
        else
            return DisassociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DisassociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void EcmClient::DisassociateInstancesKeyPairsAsync(const DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateInstancesKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DisassociateInstancesKeyPairsOutcomeCallable EcmClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateInstancesKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateInstancesKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DisassociateSecurityGroupsOutcome EcmClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DisassociateSecurityGroupsOutcomeCallable EcmClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::EnableRoutesOutcome EcmClient::EnableRoutes(const EnableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableRoutesResponse rsp = EnableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableRoutesOutcome(rsp);
        else
            return EnableRoutesOutcome(o.GetError());
    }
    else
    {
        return EnableRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::EnableRoutesAsync(const EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::EnableRoutesOutcomeCallable EcmClient::EnableRoutesCallable(const EnableRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableRoutesOutcome()>>(
        [this, request]()
        {
            return this->EnableRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ImportCustomImageOutcome EcmClient::ImportCustomImage(const ImportCustomImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportCustomImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportCustomImageResponse rsp = ImportCustomImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportCustomImageOutcome(rsp);
        else
            return ImportCustomImageOutcome(o.GetError());
    }
    else
    {
        return ImportCustomImageOutcome(outcome.GetError());
    }
}

void EcmClient::ImportCustomImageAsync(const ImportCustomImageRequest& request, const ImportCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportCustomImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ImportCustomImageOutcomeCallable EcmClient::ImportCustomImageCallable(const ImportCustomImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportCustomImageOutcome()>>(
        [this, request]()
        {
            return this->ImportCustomImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ImportImageOutcome EcmClient::ImportImage(const ImportImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportImageResponse rsp = ImportImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportImageOutcome(rsp);
        else
            return ImportImageOutcome(o.GetError());
    }
    else
    {
        return ImportImageOutcome(outcome.GetError());
    }
}

void EcmClient::ImportImageAsync(const ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ImportImageOutcomeCallable EcmClient::ImportImageCallable(const ImportImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportImageOutcome()>>(
        [this, request]()
        {
            return this->ImportImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::MigrateNetworkInterfaceOutcome EcmClient::MigrateNetworkInterface(const MigrateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateNetworkInterfaceResponse rsp = MigrateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateNetworkInterfaceOutcome(rsp);
        else
            return MigrateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return MigrateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void EcmClient::MigrateNetworkInterfaceAsync(const MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigrateNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::MigrateNetworkInterfaceOutcomeCallable EcmClient::MigrateNetworkInterfaceCallable(const MigrateNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigrateNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->MigrateNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::MigratePrivateIpAddressOutcome EcmClient::MigratePrivateIpAddress(const MigratePrivateIpAddressRequest &request)
{
    auto outcome = MakeRequest(request, "MigratePrivateIpAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigratePrivateIpAddressResponse rsp = MigratePrivateIpAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigratePrivateIpAddressOutcome(rsp);
        else
            return MigratePrivateIpAddressOutcome(o.GetError());
    }
    else
    {
        return MigratePrivateIpAddressOutcome(outcome.GetError());
    }
}

void EcmClient::MigratePrivateIpAddressAsync(const MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigratePrivateIpAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::MigratePrivateIpAddressOutcomeCallable EcmClient::MigratePrivateIpAddressCallable(const MigratePrivateIpAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigratePrivateIpAddressOutcome()>>(
        [this, request]()
        {
            return this->MigratePrivateIpAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyAddressAttributeOutcome EcmClient::ModifyAddressAttribute(const ModifyAddressAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressAttributeResponse rsp = ModifyAddressAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressAttributeOutcome(rsp);
        else
            return ModifyAddressAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyAddressAttributeAsync(const ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyAddressAttributeOutcomeCallable EcmClient::ModifyAddressAttributeCallable(const ModifyAddressAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyAddressesBandwidthOutcome EcmClient::ModifyAddressesBandwidth(const ModifyAddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressesBandwidthResponse rsp = ModifyAddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressesBandwidthOutcome(rsp);
        else
            return ModifyAddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyAddressesBandwidthAsync(const ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyAddressesBandwidthOutcomeCallable EcmClient::ModifyAddressesBandwidthCallable(const ModifyAddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyDefaultSubnetOutcome EcmClient::ModifyDefaultSubnet(const ModifyDefaultSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultSubnetResponse rsp = ModifyDefaultSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultSubnetOutcome(rsp);
        else
            return ModifyDefaultSubnetOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultSubnetOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyDefaultSubnetAsync(const ModifyDefaultSubnetRequest& request, const ModifyDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyDefaultSubnetOutcomeCallable EcmClient::ModifyDefaultSubnetCallable(const ModifyDefaultSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultSubnetOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyHaVipAttributeOutcome EcmClient::ModifyHaVipAttribute(const ModifyHaVipAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHaVipAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHaVipAttributeResponse rsp = ModifyHaVipAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHaVipAttributeOutcome(rsp);
        else
            return ModifyHaVipAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHaVipAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHaVipAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyHaVipAttributeOutcomeCallable EcmClient::ModifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHaVipAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyImageAttributeOutcome EcmClient::ModifyImageAttribute(const ModifyImageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageAttributeResponse rsp = ModifyImageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageAttributeOutcome(rsp);
        else
            return ModifyImageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyImageAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyImageAttributeOutcomeCallable EcmClient::ModifyImageAttributeCallable(const ModifyImageAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyInstancesAttributeOutcome EcmClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyInstancesAttributeOutcomeCallable EcmClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyIpv6AddressesAttributeOutcome EcmClient::ModifyIpv6AddressesAttribute(const ModifyIpv6AddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpv6AddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpv6AddressesAttributeResponse rsp = ModifyIpv6AddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpv6AddressesAttributeOutcome(rsp);
        else
            return ModifyIpv6AddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyIpv6AddressesAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyIpv6AddressesAttributeAsync(const ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIpv6AddressesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyIpv6AddressesAttributeOutcomeCallable EcmClient::ModifyIpv6AddressesAttributeCallable(const ModifyIpv6AddressesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIpv6AddressesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyIpv6AddressesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyIpv6AddressesBandwidthOutcome EcmClient::ModifyIpv6AddressesBandwidth(const ModifyIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpv6AddressesBandwidthResponse rsp = ModifyIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpv6AddressesBandwidthOutcome(rsp);
        else
            return ModifyIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyIpv6AddressesBandwidthAsync(const ModifyIpv6AddressesBandwidthRequest& request, const ModifyIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIpv6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyIpv6AddressesBandwidthOutcomeCallable EcmClient::ModifyIpv6AddressesBandwidthCallable(const ModifyIpv6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIpv6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ModifyIpv6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyListenerOutcome EcmClient::ModifyListener(const ModifyListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyListenerResponse rsp = ModifyListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyListenerOutcome(rsp);
        else
            return ModifyListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyListenerOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyListenerOutcomeCallable EcmClient::ModifyListenerCallable(const ModifyListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyListenerOutcome()>>(
        [this, request]()
        {
            return this->ModifyListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyLoadBalancerAttributesOutcome EcmClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerAttributesResponse rsp = ModifyLoadBalancerAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerAttributesOutcome(rsp);
        else
            return ModifyLoadBalancerAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyLoadBalancerAttributesOutcomeCallable EcmClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleConfigOutcome EcmClient::ModifyModuleConfig(const ModifyModuleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleConfigResponse rsp = ModifyModuleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleConfigOutcome(rsp);
        else
            return ModifyModuleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleConfigOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleConfigAsync(const ModifyModuleConfigRequest& request, const ModifyModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleConfigOutcomeCallable EcmClient::ModifyModuleConfigCallable(const ModifyModuleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleDisableWanIpOutcome EcmClient::ModifyModuleDisableWanIp(const ModifyModuleDisableWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleDisableWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleDisableWanIpResponse rsp = ModifyModuleDisableWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleDisableWanIpOutcome(rsp);
        else
            return ModifyModuleDisableWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleDisableWanIpOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleDisableWanIpAsync(const ModifyModuleDisableWanIpRequest& request, const ModifyModuleDisableWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleDisableWanIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleDisableWanIpOutcomeCallable EcmClient::ModifyModuleDisableWanIpCallable(const ModifyModuleDisableWanIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleDisableWanIpOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleDisableWanIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleImageOutcome EcmClient::ModifyModuleImage(const ModifyModuleImageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleImageResponse rsp = ModifyModuleImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleImageOutcome(rsp);
        else
            return ModifyModuleImageOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleImageOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleImageAsync(const ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleImageOutcomeCallable EcmClient::ModifyModuleImageCallable(const ModifyModuleImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleImageOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleIpDirectOutcome EcmClient::ModifyModuleIpDirect(const ModifyModuleIpDirectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleIpDirect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleIpDirectResponse rsp = ModifyModuleIpDirectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleIpDirectOutcome(rsp);
        else
            return ModifyModuleIpDirectOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleIpDirectOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleIpDirectAsync(const ModifyModuleIpDirectRequest& request, const ModifyModuleIpDirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleIpDirect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleIpDirectOutcomeCallable EcmClient::ModifyModuleIpDirectCallable(const ModifyModuleIpDirectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleIpDirectOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleIpDirect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleNameOutcome EcmClient::ModifyModuleName(const ModifyModuleNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNameResponse rsp = ModifyModuleNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNameOutcome(rsp);
        else
            return ModifyModuleNameOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNameOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNameAsync(const ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleNameOutcomeCallable EcmClient::ModifyModuleNameCallable(const ModifyModuleNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleNetworkOutcome EcmClient::ModifyModuleNetwork(const ModifyModuleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNetworkResponse rsp = ModifyModuleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNetworkOutcome(rsp);
        else
            return ModifyModuleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNetworkOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNetworkAsync(const ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleNetworkOutcomeCallable EcmClient::ModifyModuleNetworkCallable(const ModifyModuleNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleNetworkOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleSecurityGroupsOutcome EcmClient::ModifyModuleSecurityGroups(const ModifyModuleSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleSecurityGroupsResponse rsp = ModifyModuleSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleSecurityGroupsOutcome(rsp);
        else
            return ModifyModuleSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleSecurityGroupsAsync(const ModifyModuleSecurityGroupsRequest& request, const ModifyModuleSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleSecurityGroupsOutcomeCallable EcmClient::ModifyModuleSecurityGroupsCallable(const ModifyModuleSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyPrivateIpAddressesAttributeOutcome EcmClient::ModifyPrivateIpAddressesAttribute(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateIpAddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateIpAddressesAttributeResponse rsp = ModifyPrivateIpAddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateIpAddressesAttributeOutcome(rsp);
        else
            return ModifyPrivateIpAddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateIpAddressesAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyPrivateIpAddressesAttributeAsync(const ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrivateIpAddressesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyPrivateIpAddressesAttributeOutcomeCallable EcmClient::ModifyPrivateIpAddressesAttributeCallable(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrivateIpAddressesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrivateIpAddressesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyRouteTableAttributeOutcome EcmClient::ModifyRouteTableAttribute(const ModifyRouteTableAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRouteTableAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRouteTableAttributeResponse rsp = ModifyRouteTableAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRouteTableAttributeOutcome(rsp);
        else
            return ModifyRouteTableAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyRouteTableAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyRouteTableAttributeAsync(const ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRouteTableAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyRouteTableAttributeOutcomeCallable EcmClient::ModifyRouteTableAttributeCallable(const ModifyRouteTableAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRouteTableAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyRouteTableAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifySecurityGroupAttributeOutcome EcmClient::ModifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupAttributeResponse rsp = ModifySecurityGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupAttributeOutcome(rsp);
        else
            return ModifySecurityGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifySecurityGroupAttributeOutcomeCallable EcmClient::ModifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifySecurityGroupPoliciesOutcome EcmClient::ModifySecurityGroupPolicies(const ModifySecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupPoliciesResponse rsp = ModifySecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupPoliciesOutcome(rsp);
        else
            return ModifySecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void EcmClient::ModifySecurityGroupPoliciesAsync(const ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifySecurityGroupPoliciesOutcomeCallable EcmClient::ModifySecurityGroupPoliciesCallable(const ModifySecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifySubnetAttributeOutcome EcmClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
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

void EcmClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubnetAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifySubnetAttributeOutcomeCallable EcmClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
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

EcmClient::ModifyTargetPortOutcome EcmClient::ModifyTargetPort(const ModifyTargetPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetPortResponse rsp = ModifyTargetPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetPortOutcome(rsp);
        else
            return ModifyTargetPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetPortOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyTargetPortAsync(const ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyTargetPortOutcomeCallable EcmClient::ModifyTargetPortCallable(const ModifyTargetPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyTargetWeightOutcome EcmClient::ModifyTargetWeight(const ModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetWeightResponse rsp = ModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetWeightOutcome(rsp);
        else
            return ModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetWeightOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyTargetWeightAsync(const ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyTargetWeightOutcomeCallable EcmClient::ModifyTargetWeightCallable(const ModifyTargetWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyVpcAttributeOutcome EcmClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
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

void EcmClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyVpcAttributeOutcomeCallable EcmClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
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

EcmClient::QueryVpcTaskResultOutcome EcmClient::QueryVpcTaskResult(const QueryVpcTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVpcTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVpcTaskResultResponse rsp = QueryVpcTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVpcTaskResultOutcome(rsp);
        else
            return QueryVpcTaskResultOutcome(o.GetError());
    }
    else
    {
        return QueryVpcTaskResultOutcome(outcome.GetError());
    }
}

void EcmClient::QueryVpcTaskResultAsync(const QueryVpcTaskResultRequest& request, const QueryVpcTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVpcTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::QueryVpcTaskResultOutcomeCallable EcmClient::QueryVpcTaskResultCallable(const QueryVpcTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVpcTaskResultOutcome()>>(
        [this, request]()
        {
            return this->QueryVpcTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::RebootInstancesOutcome EcmClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::RebootInstancesOutcomeCallable EcmClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReleaseAddressesOutcome EcmClient::ReleaseAddresses(const ReleaseAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseAddressesResponse rsp = ReleaseAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseAddressesOutcome(rsp);
        else
            return ReleaseAddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::ReleaseAddressesAsync(const ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReleaseAddressesOutcomeCallable EcmClient::ReleaseAddressesCallable(const ReleaseAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseAddressesOutcome()>>(
        [this, request]()
        {
            return this->ReleaseAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReleaseIpv6AddressesOutcome EcmClient::ReleaseIpv6Addresses(const ReleaseIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIpv6AddressesResponse rsp = ReleaseIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIpv6AddressesOutcome(rsp);
        else
            return ReleaseIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseIpv6AddressesOutcome(outcome.GetError());
    }
}

void EcmClient::ReleaseIpv6AddressesAsync(const ReleaseIpv6AddressesRequest& request, const ReleaseIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReleaseIpv6AddressesOutcomeCallable EcmClient::ReleaseIpv6AddressesCallable(const ReleaseIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->ReleaseIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReleaseIpv6AddressesBandwidthOutcome EcmClient::ReleaseIpv6AddressesBandwidth(const ReleaseIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIpv6AddressesBandwidthResponse rsp = ReleaseIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIpv6AddressesBandwidthOutcome(rsp);
        else
            return ReleaseIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ReleaseIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ReleaseIpv6AddressesBandwidthAsync(const ReleaseIpv6AddressesBandwidthRequest& request, const ReleaseIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseIpv6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReleaseIpv6AddressesBandwidthOutcomeCallable EcmClient::ReleaseIpv6AddressesBandwidthCallable(const ReleaseIpv6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseIpv6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ReleaseIpv6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::RemovePrivateIpAddressesOutcome EcmClient::RemovePrivateIpAddresses(const RemovePrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePrivateIpAddressesResponse rsp = RemovePrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePrivateIpAddressesOutcome(rsp);
        else
            return RemovePrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return RemovePrivateIpAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::RemovePrivateIpAddressesAsync(const RemovePrivateIpAddressesRequest& request, const RemovePrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemovePrivateIpAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::RemovePrivateIpAddressesOutcomeCallable EcmClient::RemovePrivateIpAddressesCallable(const RemovePrivateIpAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemovePrivateIpAddressesOutcome()>>(
        [this, request]()
        {
            return this->RemovePrivateIpAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReplaceRouteTableAssociationOutcome EcmClient::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRouteTableAssociation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRouteTableAssociationResponse rsp = ReplaceRouteTableAssociationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRouteTableAssociationOutcome(rsp);
        else
            return ReplaceRouteTableAssociationOutcome(o.GetError());
    }
    else
    {
        return ReplaceRouteTableAssociationOutcome(outcome.GetError());
    }
}

void EcmClient::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceRouteTableAssociation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReplaceRouteTableAssociationOutcomeCallable EcmClient::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceRouteTableAssociationOutcome()>>(
        [this, request]()
        {
            return this->ReplaceRouteTableAssociation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReplaceRoutesOutcome EcmClient::ReplaceRoutes(const ReplaceRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRoutesResponse rsp = ReplaceRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRoutesOutcome(rsp);
        else
            return ReplaceRoutesOutcome(o.GetError());
    }
    else
    {
        return ReplaceRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::ReplaceRoutesAsync(const ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReplaceRoutesOutcomeCallable EcmClient::ReplaceRoutesCallable(const ReplaceRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceRoutesOutcome()>>(
        [this, request]()
        {
            return this->ReplaceRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ReplaceSecurityGroupPolicyOutcome EcmClient::ReplaceSecurityGroupPolicy(const ReplaceSecurityGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceSecurityGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceSecurityGroupPolicyResponse rsp = ReplaceSecurityGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceSecurityGroupPolicyOutcome(rsp);
        else
            return ReplaceSecurityGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return ReplaceSecurityGroupPolicyOutcome(outcome.GetError());
    }
}

void EcmClient::ReplaceSecurityGroupPolicyAsync(const ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceSecurityGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ReplaceSecurityGroupPolicyOutcomeCallable EcmClient::ReplaceSecurityGroupPolicyCallable(const ReplaceSecurityGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceSecurityGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->ReplaceSecurityGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetInstancesOutcome EcmClient::ResetInstances(const ResetInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesResponse rsp = ResetInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesOutcome(rsp);
        else
            return ResetInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesAsync(const ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetInstancesOutcomeCallable EcmClient::ResetInstancesCallable(const ResetInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesOutcome()>>(
        [this, request]()
        {
            return this->ResetInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetInstancesMaxBandwidthOutcome EcmClient::ResetInstancesMaxBandwidth(const ResetInstancesMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesMaxBandwidthResponse rsp = ResetInstancesMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesMaxBandwidthOutcome(rsp);
        else
            return ResetInstancesMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesMaxBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesMaxBandwidthAsync(const ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetInstancesMaxBandwidthOutcomeCallable EcmClient::ResetInstancesMaxBandwidthCallable(const ResetInstancesMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetInstancesPasswordOutcome EcmClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetInstancesPasswordOutcomeCallable EcmClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetRoutesOutcome EcmClient::ResetRoutes(const ResetRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRoutesResponse rsp = ResetRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRoutesOutcome(rsp);
        else
            return ResetRoutesOutcome(o.GetError());
    }
    else
    {
        return ResetRoutesOutcome(outcome.GetError());
    }
}

void EcmClient::ResetRoutesAsync(const ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetRoutesOutcomeCallable EcmClient::ResetRoutesCallable(const ResetRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetRoutesOutcome()>>(
        [this, request]()
        {
            return this->ResetRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::RunInstancesOutcome EcmClient::RunInstances(const RunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesResponse rsp = RunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesOutcome(rsp);
        else
            return RunInstancesOutcome(o.GetError());
    }
    else
    {
        return RunInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::RunInstancesOutcomeCallable EcmClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunInstancesOutcome()>>(
        [this, request]()
        {
            return this->RunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::SetLoadBalancerSecurityGroupsOutcome EcmClient::SetLoadBalancerSecurityGroups(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerSecurityGroupsResponse rsp = SetLoadBalancerSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerSecurityGroupsOutcome(rsp);
        else
            return SetLoadBalancerSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::SetLoadBalancerSecurityGroupsAsync(const SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLoadBalancerSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::SetLoadBalancerSecurityGroupsOutcomeCallable EcmClient::SetLoadBalancerSecurityGroupsCallable(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLoadBalancerSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->SetLoadBalancerSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::SetSecurityGroupForLoadbalancersOutcome EcmClient::SetSecurityGroupForLoadbalancers(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto outcome = MakeRequest(request, "SetSecurityGroupForLoadbalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSecurityGroupForLoadbalancersResponse rsp = SetSecurityGroupForLoadbalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSecurityGroupForLoadbalancersOutcome(rsp);
        else
            return SetSecurityGroupForLoadbalancersOutcome(o.GetError());
    }
    else
    {
        return SetSecurityGroupForLoadbalancersOutcome(outcome.GetError());
    }
}

void EcmClient::SetSecurityGroupForLoadbalancersAsync(const SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetSecurityGroupForLoadbalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::SetSecurityGroupForLoadbalancersOutcomeCallable EcmClient::SetSecurityGroupForLoadbalancersCallable(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetSecurityGroupForLoadbalancersOutcome()>>(
        [this, request]()
        {
            return this->SetSecurityGroupForLoadbalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::StartInstancesOutcome EcmClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::StartInstancesOutcomeCallable EcmClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::StopInstancesOutcome EcmClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::StopInstancesOutcomeCallable EcmClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::TerminateDisksOutcome EcmClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void EcmClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::TerminateDisksOutcomeCallable EcmClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDisksOutcome()>>(
        [this, request]()
        {
            return this->TerminateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::TerminateInstancesOutcome EcmClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::TerminateInstancesOutcomeCallable EcmClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::UnassignIpv6SubnetCidrBlockOutcome EcmClient::UnassignIpv6SubnetCidrBlock(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6SubnetCidrBlockResponse rsp = UnassignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return UnassignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void EcmClient::UnassignIpv6SubnetCidrBlockAsync(const UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassignIpv6SubnetCidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::UnassignIpv6SubnetCidrBlockOutcomeCallable EcmClient::UnassignIpv6SubnetCidrBlockCallable(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassignIpv6SubnetCidrBlockOutcome()>>(
        [this, request]()
        {
            return this->UnassignIpv6SubnetCidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

