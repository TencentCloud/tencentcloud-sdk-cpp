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

