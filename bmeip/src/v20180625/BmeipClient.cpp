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

#include <tencentcloud/bmeip/v20180625/BmeipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bmeip::V20180625;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-25";
    const string ENDPOINT = "bmeip.tencentcloudapi.com";
}

BmeipClient::BmeipClient(const Credential &credential, const string &region) :
    BmeipClient(credential, region, ClientProfile())
{
}

BmeipClient::BmeipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmeipClient::BindEipAclsOutcome BmeipClient::BindEipAcls(const BindEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "BindEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEipAclsResponse rsp = BindEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEipAclsOutcome(rsp);
        else
            return BindEipAclsOutcome(o.GetError());
    }
    else
    {
        return BindEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::BindEipAclsAsync(const BindEipAclsRequest& request, const BindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindEipAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::BindEipAclsOutcomeCallable BmeipClient::BindEipAclsCallable(const BindEipAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindEipAclsOutcome()>>(
        [this, request]()
        {
            return this->BindEipAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::BindHostedOutcome BmeipClient::BindHosted(const BindHostedRequest &request)
{
    auto outcome = MakeRequest(request, "BindHosted");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindHostedResponse rsp = BindHostedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindHostedOutcome(rsp);
        else
            return BindHostedOutcome(o.GetError());
    }
    else
    {
        return BindHostedOutcome(outcome.GetError());
    }
}

void BmeipClient::BindHostedAsync(const BindHostedRequest& request, const BindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindHosted(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::BindHostedOutcomeCallable BmeipClient::BindHostedCallable(const BindHostedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindHostedOutcome()>>(
        [this, request]()
        {
            return this->BindHosted(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::BindRsOutcome BmeipClient::BindRs(const BindRsRequest &request)
{
    auto outcome = MakeRequest(request, "BindRs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRsResponse rsp = BindRsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRsOutcome(rsp);
        else
            return BindRsOutcome(o.GetError());
    }
    else
    {
        return BindRsOutcome(outcome.GetError());
    }
}

void BmeipClient::BindRsAsync(const BindRsRequest& request, const BindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindRs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::BindRsOutcomeCallable BmeipClient::BindRsCallable(const BindRsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindRsOutcome()>>(
        [this, request]()
        {
            return this->BindRs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::BindVpcIpOutcome BmeipClient::BindVpcIp(const BindVpcIpRequest &request)
{
    auto outcome = MakeRequest(request, "BindVpcIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindVpcIpResponse rsp = BindVpcIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindVpcIpOutcome(rsp);
        else
            return BindVpcIpOutcome(o.GetError());
    }
    else
    {
        return BindVpcIpOutcome(outcome.GetError());
    }
}

void BmeipClient::BindVpcIpAsync(const BindVpcIpRequest& request, const BindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindVpcIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::BindVpcIpOutcomeCallable BmeipClient::BindVpcIpCallable(const BindVpcIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindVpcIpOutcome()>>(
        [this, request]()
        {
            return this->BindVpcIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::CreateEipOutcome BmeipClient::CreateEip(const CreateEipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEipResponse rsp = CreateEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEipOutcome(rsp);
        else
            return CreateEipOutcome(o.GetError());
    }
    else
    {
        return CreateEipOutcome(outcome.GetError());
    }
}

void BmeipClient::CreateEipAsync(const CreateEipRequest& request, const CreateEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::CreateEipOutcomeCallable BmeipClient::CreateEipCallable(const CreateEipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEipOutcome()>>(
        [this, request]()
        {
            return this->CreateEip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::CreateEipAclOutcome BmeipClient::CreateEipAcl(const CreateEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEipAclResponse rsp = CreateEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEipAclOutcome(rsp);
        else
            return CreateEipAclOutcome(o.GetError());
    }
    else
    {
        return CreateEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::CreateEipAclAsync(const CreateEipAclRequest& request, const CreateEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEipAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::CreateEipAclOutcomeCallable BmeipClient::CreateEipAclCallable(const CreateEipAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEipAclOutcome()>>(
        [this, request]()
        {
            return this->CreateEipAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DeleteEipOutcome BmeipClient::DeleteEip(const DeleteEipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEipResponse rsp = DeleteEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEipOutcome(rsp);
        else
            return DeleteEipOutcome(o.GetError());
    }
    else
    {
        return DeleteEipOutcome(outcome.GetError());
    }
}

void BmeipClient::DeleteEipAsync(const DeleteEipRequest& request, const DeleteEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DeleteEipOutcomeCallable BmeipClient::DeleteEipCallable(const DeleteEipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEipOutcome()>>(
        [this, request]()
        {
            return this->DeleteEip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DeleteEipAclOutcome BmeipClient::DeleteEipAcl(const DeleteEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEipAclResponse rsp = DeleteEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEipAclOutcome(rsp);
        else
            return DeleteEipAclOutcome(o.GetError());
    }
    else
    {
        return DeleteEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::DeleteEipAclAsync(const DeleteEipAclRequest& request, const DeleteEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEipAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DeleteEipAclOutcomeCallable BmeipClient::DeleteEipAclCallable(const DeleteEipAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEipAclOutcome()>>(
        [this, request]()
        {
            return this->DeleteEipAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DescribeEipAclsOutcome BmeipClient::DescribeEipAcls(const DescribeEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipAclsResponse rsp = DescribeEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipAclsOutcome(rsp);
        else
            return DescribeEipAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipAclsAsync(const DescribeEipAclsRequest& request, const DescribeEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEipAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DescribeEipAclsOutcomeCallable BmeipClient::DescribeEipAclsCallable(const DescribeEipAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEipAclsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEipAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DescribeEipQuotaOutcome BmeipClient::DescribeEipQuota(const DescribeEipQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipQuotaResponse rsp = DescribeEipQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipQuotaOutcome(rsp);
        else
            return DescribeEipQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEipQuotaOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipQuotaAsync(const DescribeEipQuotaRequest& request, const DescribeEipQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEipQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DescribeEipQuotaOutcomeCallable BmeipClient::DescribeEipQuotaCallable(const DescribeEipQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEipQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeEipQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DescribeEipTaskOutcome BmeipClient::DescribeEipTask(const DescribeEipTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipTaskResponse rsp = DescribeEipTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipTaskOutcome(rsp);
        else
            return DescribeEipTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeEipTaskOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipTaskAsync(const DescribeEipTaskRequest& request, const DescribeEipTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEipTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DescribeEipTaskOutcomeCallable BmeipClient::DescribeEipTaskCallable(const DescribeEipTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEipTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeEipTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::DescribeEipsOutcome BmeipClient::DescribeEips(const DescribeEipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipsResponse rsp = DescribeEipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipsOutcome(rsp);
        else
            return DescribeEipsOutcome(o.GetError());
    }
    else
    {
        return DescribeEipsOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipsAsync(const DescribeEipsRequest& request, const DescribeEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::DescribeEipsOutcomeCallable BmeipClient::DescribeEipsCallable(const DescribeEipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEipsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::ModifyEipAclOutcome BmeipClient::ModifyEipAcl(const ModifyEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipAclResponse rsp = ModifyEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipAclOutcome(rsp);
        else
            return ModifyEipAclOutcome(o.GetError());
    }
    else
    {
        return ModifyEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipAclAsync(const ModifyEipAclRequest& request, const ModifyEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEipAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::ModifyEipAclOutcomeCallable BmeipClient::ModifyEipAclCallable(const ModifyEipAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEipAclOutcome()>>(
        [this, request]()
        {
            return this->ModifyEipAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::ModifyEipChargeOutcome BmeipClient::ModifyEipCharge(const ModifyEipChargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipCharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipChargeResponse rsp = ModifyEipChargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipChargeOutcome(rsp);
        else
            return ModifyEipChargeOutcome(o.GetError());
    }
    else
    {
        return ModifyEipChargeOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipChargeAsync(const ModifyEipChargeRequest& request, const ModifyEipChargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEipCharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::ModifyEipChargeOutcomeCallable BmeipClient::ModifyEipChargeCallable(const ModifyEipChargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEipChargeOutcome()>>(
        [this, request]()
        {
            return this->ModifyEipCharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::ModifyEipNameOutcome BmeipClient::ModifyEipName(const ModifyEipNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipNameResponse rsp = ModifyEipNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipNameOutcome(rsp);
        else
            return ModifyEipNameOutcome(o.GetError());
    }
    else
    {
        return ModifyEipNameOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipNameAsync(const ModifyEipNameRequest& request, const ModifyEipNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEipName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::ModifyEipNameOutcomeCallable BmeipClient::ModifyEipNameCallable(const ModifyEipNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEipNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyEipName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::UnbindEipAclsOutcome BmeipClient::UnbindEipAcls(const UnbindEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEipAclsResponse rsp = UnbindEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEipAclsOutcome(rsp);
        else
            return UnbindEipAclsOutcome(o.GetError());
    }
    else
    {
        return UnbindEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindEipAclsAsync(const UnbindEipAclsRequest& request, const UnbindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindEipAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::UnbindEipAclsOutcomeCallable BmeipClient::UnbindEipAclsCallable(const UnbindEipAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindEipAclsOutcome()>>(
        [this, request]()
        {
            return this->UnbindEipAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::UnbindHostedOutcome BmeipClient::UnbindHosted(const UnbindHostedRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindHosted");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindHostedResponse rsp = UnbindHostedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindHostedOutcome(rsp);
        else
            return UnbindHostedOutcome(o.GetError());
    }
    else
    {
        return UnbindHostedOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindHostedAsync(const UnbindHostedRequest& request, const UnbindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindHosted(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::UnbindHostedOutcomeCallable BmeipClient::UnbindHostedCallable(const UnbindHostedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindHostedOutcome()>>(
        [this, request]()
        {
            return this->UnbindHosted(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::UnbindRsOutcome BmeipClient::UnbindRs(const UnbindRsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindRs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindRsResponse rsp = UnbindRsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindRsOutcome(rsp);
        else
            return UnbindRsOutcome(o.GetError());
    }
    else
    {
        return UnbindRsOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindRsAsync(const UnbindRsRequest& request, const UnbindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindRs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::UnbindRsOutcomeCallable BmeipClient::UnbindRsCallable(const UnbindRsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindRsOutcome()>>(
        [this, request]()
        {
            return this->UnbindRs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::UnbindRsListOutcome BmeipClient::UnbindRsList(const UnbindRsListRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindRsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindRsListResponse rsp = UnbindRsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindRsListOutcome(rsp);
        else
            return UnbindRsListOutcome(o.GetError());
    }
    else
    {
        return UnbindRsListOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindRsListAsync(const UnbindRsListRequest& request, const UnbindRsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindRsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::UnbindRsListOutcomeCallable BmeipClient::UnbindRsListCallable(const UnbindRsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindRsListOutcome()>>(
        [this, request]()
        {
            return this->UnbindRsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmeipClient::UnbindVpcIpOutcome BmeipClient::UnbindVpcIp(const UnbindVpcIpRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindVpcIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindVpcIpResponse rsp = UnbindVpcIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindVpcIpOutcome(rsp);
        else
            return UnbindVpcIpOutcome(o.GetError());
    }
    else
    {
        return UnbindVpcIpOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindVpcIpAsync(const UnbindVpcIpRequest& request, const UnbindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindVpcIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmeipClient::UnbindVpcIpOutcomeCallable BmeipClient::UnbindVpcIpCallable(const UnbindVpcIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindVpcIpOutcome()>>(
        [this, request]()
        {
            return this->UnbindVpcIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

