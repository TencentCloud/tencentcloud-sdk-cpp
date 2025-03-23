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

#include <tencentcloud/antiddos/v20200309/AntiddosClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Antiddos::V20200309;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-09";
    const string ENDPOINT = "antiddos.tencentcloudapi.com";
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region) :
    AntiddosClient(credential, region, ClientProfile())
{
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AntiddosClient::AssociateDDoSEipAddressOutcome AntiddosClient::AssociateDDoSEipAddress(const AssociateDDoSEipAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDDoSEipAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDDoSEipAddressResponse rsp = AssociateDDoSEipAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDDoSEipAddressOutcome(rsp);
        else
            return AssociateDDoSEipAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateDDoSEipAddressOutcome(outcome.GetError());
    }
}

void AntiddosClient::AssociateDDoSEipAddressAsync(const AssociateDDoSEipAddressRequest& request, const AssociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateDDoSEipAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::AssociateDDoSEipAddressOutcomeCallable AntiddosClient::AssociateDDoSEipAddressCallable(const AssociateDDoSEipAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateDDoSEipAddressOutcome()>>(
        [this, request]()
        {
            return this->AssociateDDoSEipAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::AssociateDDoSEipLoadBalancerOutcome AntiddosClient::AssociateDDoSEipLoadBalancer(const AssociateDDoSEipLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDDoSEipLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDDoSEipLoadBalancerResponse rsp = AssociateDDoSEipLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDDoSEipLoadBalancerOutcome(rsp);
        else
            return AssociateDDoSEipLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return AssociateDDoSEipLoadBalancerOutcome(outcome.GetError());
    }
}

void AntiddosClient::AssociateDDoSEipLoadBalancerAsync(const AssociateDDoSEipLoadBalancerRequest& request, const AssociateDDoSEipLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateDDoSEipLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::AssociateDDoSEipLoadBalancerOutcomeCallable AntiddosClient::AssociateDDoSEipLoadBalancerCallable(const AssociateDDoSEipLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateDDoSEipLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->AssociateDDoSEipLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateBlackWhiteIpListOutcome AntiddosClient::CreateBlackWhiteIpList(const CreateBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlackWhiteIpListResponse rsp = CreateBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlackWhiteIpListOutcome(rsp);
        else
            return CreateBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateBlackWhiteIpListAsync(const CreateBlackWhiteIpListRequest& request, const CreateBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateBlackWhiteIpListOutcomeCallable AntiddosClient::CreateBlackWhiteIpListCallable(const CreateBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->CreateBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateBoundIPOutcome AntiddosClient::CreateBoundIP(const CreateBoundIPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBoundIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBoundIPResponse rsp = CreateBoundIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBoundIPOutcome(rsp);
        else
            return CreateBoundIPOutcome(o.GetError());
    }
    else
    {
        return CreateBoundIPOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateBoundIPAsync(const CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBoundIP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateBoundIPOutcomeCallable AntiddosClient::CreateBoundIPCallable(const CreateBoundIPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBoundIPOutcome()>>(
        [this, request]()
        {
            return this->CreateBoundIP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateCCPrecisionPolicyOutcome AntiddosClient::CreateCCPrecisionPolicy(const CreateCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCPrecisionPolicyResponse rsp = CreateCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCPrecisionPolicyOutcome(rsp);
        else
            return CreateCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCCPrecisionPolicyAsync(const CreateCCPrecisionPolicyRequest& request, const CreateCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCPrecisionPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateCCPrecisionPolicyOutcomeCallable AntiddosClient::CreateCCPrecisionPolicyCallable(const CreateCCPrecisionPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCPrecisionPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateCCPrecisionPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateCCReqLimitPolicyOutcome AntiddosClient::CreateCCReqLimitPolicy(const CreateCCReqLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCReqLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCReqLimitPolicyResponse rsp = CreateCCReqLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCReqLimitPolicyOutcome(rsp);
        else
            return CreateCCReqLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCCReqLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCCReqLimitPolicyAsync(const CreateCCReqLimitPolicyRequest& request, const CreateCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCReqLimitPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateCCReqLimitPolicyOutcomeCallable AntiddosClient::CreateCCReqLimitPolicyCallable(const CreateCCReqLimitPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCReqLimitPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateCCReqLimitPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateCcBlackWhiteIpListOutcome AntiddosClient::CreateCcBlackWhiteIpList(const CreateCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcBlackWhiteIpListResponse rsp = CreateCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcBlackWhiteIpListOutcome(rsp);
        else
            return CreateCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCcBlackWhiteIpListAsync(const CreateCcBlackWhiteIpListRequest& request, const CreateCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCcBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateCcBlackWhiteIpListOutcomeCallable AntiddosClient::CreateCcBlackWhiteIpListCallable(const CreateCcBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCcBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->CreateCcBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateCcGeoIPBlockConfigOutcome AntiddosClient::CreateCcGeoIPBlockConfig(const CreateCcGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcGeoIPBlockConfigResponse rsp = CreateCcGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcGeoIPBlockConfigOutcome(rsp);
        else
            return CreateCcGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateCcGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCcGeoIPBlockConfigAsync(const CreateCcGeoIPBlockConfigRequest& request, const CreateCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCcGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateCcGeoIPBlockConfigOutcomeCallable AntiddosClient::CreateCcGeoIPBlockConfigCallable(const CreateCcGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCcGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateCcGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDDoSAIOutcome AntiddosClient::CreateDDoSAI(const CreateDDoSAIRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSAIResponse rsp = CreateDDoSAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSAIOutcome(rsp);
        else
            return CreateDDoSAIOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSAIOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSAIAsync(const CreateDDoSAIRequest& request, const CreateDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSAI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDDoSAIOutcomeCallable AntiddosClient::CreateDDoSAICallable(const CreateDDoSAIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSAIOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSAI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDDoSBlackWhiteIpListOutcome AntiddosClient::CreateDDoSBlackWhiteIpList(const CreateDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSBlackWhiteIpListResponse rsp = CreateDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSBlackWhiteIpListOutcome(rsp);
        else
            return CreateDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSBlackWhiteIpListAsync(const CreateDDoSBlackWhiteIpListRequest& request, const CreateDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::CreateDDoSBlackWhiteIpListCallable(const CreateDDoSBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDDoSConnectLimitOutcome AntiddosClient::CreateDDoSConnectLimit(const CreateDDoSConnectLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSConnectLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSConnectLimitResponse rsp = CreateDDoSConnectLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSConnectLimitOutcome(rsp);
        else
            return CreateDDoSConnectLimitOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSConnectLimitOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSConnectLimitAsync(const CreateDDoSConnectLimitRequest& request, const CreateDDoSConnectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSConnectLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDDoSConnectLimitOutcomeCallable AntiddosClient::CreateDDoSConnectLimitCallable(const CreateDDoSConnectLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSConnectLimitOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSConnectLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDDoSGeoIPBlockConfigOutcome AntiddosClient::CreateDDoSGeoIPBlockConfig(const CreateDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSGeoIPBlockConfigResponse rsp = CreateDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return CreateDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSGeoIPBlockConfigAsync(const CreateDDoSGeoIPBlockConfigRequest& request, const CreateDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::CreateDDoSGeoIPBlockConfigCallable(const CreateDDoSGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDDoSSpeedLimitConfigOutcome AntiddosClient::CreateDDoSSpeedLimitConfig(const CreateDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSSpeedLimitConfigResponse rsp = CreateDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSSpeedLimitConfigOutcome(rsp);
        else
            return CreateDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSSpeedLimitConfigAsync(const CreateDDoSSpeedLimitConfigRequest& request, const CreateDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSSpeedLimitConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::CreateDDoSSpeedLimitConfigCallable(const CreateDDoSSpeedLimitConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSSpeedLimitConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSSpeedLimitConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateDefaultAlarmThresholdOutcome AntiddosClient::CreateDefaultAlarmThreshold(const CreateDefaultAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultAlarmThresholdResponse rsp = CreateDefaultAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultAlarmThresholdOutcome(rsp);
        else
            return CreateDefaultAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultAlarmThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDefaultAlarmThresholdAsync(const CreateDefaultAlarmThresholdRequest& request, const CreateDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDefaultAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateDefaultAlarmThresholdOutcomeCallable AntiddosClient::CreateDefaultAlarmThresholdCallable(const CreateDefaultAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDefaultAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->CreateDefaultAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateIPAlarmThresholdConfigOutcome AntiddosClient::CreateIPAlarmThresholdConfig(const CreateIPAlarmThresholdConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIPAlarmThresholdConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIPAlarmThresholdConfigResponse rsp = CreateIPAlarmThresholdConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIPAlarmThresholdConfigOutcome(rsp);
        else
            return CreateIPAlarmThresholdConfigOutcome(o.GetError());
    }
    else
    {
        return CreateIPAlarmThresholdConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateIPAlarmThresholdConfigAsync(const CreateIPAlarmThresholdConfigRequest& request, const CreateIPAlarmThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIPAlarmThresholdConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateIPAlarmThresholdConfigOutcomeCallable AntiddosClient::CreateIPAlarmThresholdConfigCallable(const CreateIPAlarmThresholdConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIPAlarmThresholdConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateIPAlarmThresholdConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateL7RuleCertsOutcome AntiddosClient::CreateL7RuleCerts(const CreateL7RuleCertsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7RuleCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RuleCertsResponse rsp = CreateL7RuleCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RuleCertsOutcome(rsp);
        else
            return CreateL7RuleCertsOutcome(o.GetError());
    }
    else
    {
        return CreateL7RuleCertsOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateL7RuleCertsAsync(const CreateL7RuleCertsRequest& request, const CreateL7RuleCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7RuleCerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateL7RuleCertsOutcomeCallable AntiddosClient::CreateL7RuleCertsCallable(const CreateL7RuleCertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7RuleCertsOutcome()>>(
        [this, request]()
        {
            return this->CreateL7RuleCerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateNewL7RulesOutcome AntiddosClient::CreateNewL7Rules(const CreateNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNewL7RulesResponse rsp = CreateNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNewL7RulesOutcome(rsp);
        else
            return CreateNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return CreateNewL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateNewL7RulesAsync(const CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNewL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateNewL7RulesOutcomeCallable AntiddosClient::CreateNewL7RulesCallable(const CreateNewL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNewL7RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateNewL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreatePacketFilterConfigOutcome AntiddosClient::CreatePacketFilterConfig(const CreatePacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePacketFilterConfigResponse rsp = CreatePacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePacketFilterConfigOutcome(rsp);
        else
            return CreatePacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePacketFilterConfigAsync(const CreatePacketFilterConfigRequest& request, const CreatePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePacketFilterConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreatePacketFilterConfigOutcomeCallable AntiddosClient::CreatePacketFilterConfigCallable(const CreatePacketFilterConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePacketFilterConfigOutcome()>>(
        [this, request]()
        {
            return this->CreatePacketFilterConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreatePortAclConfigOutcome AntiddosClient::CreatePortAclConfig(const CreatePortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePortAclConfigResponse rsp = CreatePortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePortAclConfigOutcome(rsp);
        else
            return CreatePortAclConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePortAclConfigAsync(const CreatePortAclConfigRequest& request, const CreatePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePortAclConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreatePortAclConfigOutcomeCallable AntiddosClient::CreatePortAclConfigCallable(const CreatePortAclConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePortAclConfigOutcome()>>(
        [this, request]()
        {
            return this->CreatePortAclConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreatePortAclConfigListOutcome AntiddosClient::CreatePortAclConfigList(const CreatePortAclConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePortAclConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePortAclConfigListResponse rsp = CreatePortAclConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePortAclConfigListOutcome(rsp);
        else
            return CreatePortAclConfigListOutcome(o.GetError());
    }
    else
    {
        return CreatePortAclConfigListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePortAclConfigListAsync(const CreatePortAclConfigListRequest& request, const CreatePortAclConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePortAclConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreatePortAclConfigListOutcomeCallable AntiddosClient::CreatePortAclConfigListCallable(const CreatePortAclConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePortAclConfigListOutcome()>>(
        [this, request]()
        {
            return this->CreatePortAclConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateProtocolBlockConfigOutcome AntiddosClient::CreateProtocolBlockConfig(const CreateProtocolBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProtocolBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProtocolBlockConfigResponse rsp = CreateProtocolBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProtocolBlockConfigOutcome(rsp);
        else
            return CreateProtocolBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateProtocolBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateProtocolBlockConfigAsync(const CreateProtocolBlockConfigRequest& request, const CreateProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProtocolBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateProtocolBlockConfigOutcomeCallable AntiddosClient::CreateProtocolBlockConfigCallable(const CreateProtocolBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProtocolBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateProtocolBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateSchedulingDomainOutcome AntiddosClient::CreateSchedulingDomain(const CreateSchedulingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedulingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchedulingDomainResponse rsp = CreateSchedulingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchedulingDomainOutcome(rsp);
        else
            return CreateSchedulingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateSchedulingDomainOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateSchedulingDomainAsync(const CreateSchedulingDomainRequest& request, const CreateSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchedulingDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateSchedulingDomainOutcomeCallable AntiddosClient::CreateSchedulingDomainCallable(const CreateSchedulingDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSchedulingDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateSchedulingDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateWaterPrintConfigOutcome AntiddosClient::CreateWaterPrintConfig(const CreateWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWaterPrintConfigResponse rsp = CreateWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWaterPrintConfigOutcome(rsp);
        else
            return CreateWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return CreateWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateWaterPrintConfigAsync(const CreateWaterPrintConfigRequest& request, const CreateWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWaterPrintConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateWaterPrintConfigOutcomeCallable AntiddosClient::CreateWaterPrintConfigCallable(const CreateWaterPrintConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWaterPrintConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateWaterPrintConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::CreateWaterPrintKeyOutcome AntiddosClient::CreateWaterPrintKey(const CreateWaterPrintKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWaterPrintKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWaterPrintKeyResponse rsp = CreateWaterPrintKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWaterPrintKeyOutcome(rsp);
        else
            return CreateWaterPrintKeyOutcome(o.GetError());
    }
    else
    {
        return CreateWaterPrintKeyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateWaterPrintKeyAsync(const CreateWaterPrintKeyRequest& request, const CreateWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWaterPrintKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::CreateWaterPrintKeyOutcomeCallable AntiddosClient::CreateWaterPrintKeyCallable(const CreateWaterPrintKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWaterPrintKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateWaterPrintKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCCLevelPolicyOutcome AntiddosClient::DeleteCCLevelPolicy(const DeleteCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCLevelPolicyResponse rsp = DeleteCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCLevelPolicyOutcome(rsp);
        else
            return DeleteCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCLevelPolicyAsync(const DeleteCCLevelPolicyRequest& request, const DeleteCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCLevelPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCCLevelPolicyOutcomeCallable AntiddosClient::DeleteCCLevelPolicyCallable(const DeleteCCLevelPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCLevelPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCLevelPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCCPrecisionPolicyOutcome AntiddosClient::DeleteCCPrecisionPolicy(const DeleteCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCPrecisionPolicyResponse rsp = DeleteCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCPrecisionPolicyOutcome(rsp);
        else
            return DeleteCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCPrecisionPolicyAsync(const DeleteCCPrecisionPolicyRequest& request, const DeleteCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCPrecisionPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCCPrecisionPolicyOutcomeCallable AntiddosClient::DeleteCCPrecisionPolicyCallable(const DeleteCCPrecisionPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCPrecisionPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCPrecisionPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCCRequestLimitPolicyOutcome AntiddosClient::DeleteCCRequestLimitPolicy(const DeleteCCRequestLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCRequestLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCRequestLimitPolicyResponse rsp = DeleteCCRequestLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCRequestLimitPolicyOutcome(rsp);
        else
            return DeleteCCRequestLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCRequestLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCRequestLimitPolicyAsync(const DeleteCCRequestLimitPolicyRequest& request, const DeleteCCRequestLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCRequestLimitPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCCRequestLimitPolicyOutcomeCallable AntiddosClient::DeleteCCRequestLimitPolicyCallable(const DeleteCCRequestLimitPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCRequestLimitPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCRequestLimitPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCCThresholdPolicyOutcome AntiddosClient::DeleteCCThresholdPolicy(const DeleteCCThresholdPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCThresholdPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCThresholdPolicyResponse rsp = DeleteCCThresholdPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCThresholdPolicyOutcome(rsp);
        else
            return DeleteCCThresholdPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCThresholdPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCThresholdPolicyAsync(const DeleteCCThresholdPolicyRequest& request, const DeleteCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCThresholdPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCCThresholdPolicyOutcomeCallable AntiddosClient::DeleteCCThresholdPolicyCallable(const DeleteCCThresholdPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCThresholdPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCThresholdPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCcBlackWhiteIpListOutcome AntiddosClient::DeleteCcBlackWhiteIpList(const DeleteCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcBlackWhiteIpListResponse rsp = DeleteCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcBlackWhiteIpListOutcome(rsp);
        else
            return DeleteCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DeleteCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCcBlackWhiteIpListAsync(const DeleteCcBlackWhiteIpListRequest& request, const DeleteCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCcBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCcBlackWhiteIpListOutcomeCallable AntiddosClient::DeleteCcBlackWhiteIpListCallable(const DeleteCcBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCcBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DeleteCcBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteCcGeoIPBlockConfigOutcome AntiddosClient::DeleteCcGeoIPBlockConfig(const DeleteCcGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcGeoIPBlockConfigResponse rsp = DeleteCcGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcGeoIPBlockConfigOutcome(rsp);
        else
            return DeleteCcGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteCcGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCcGeoIPBlockConfigAsync(const DeleteCcGeoIPBlockConfigRequest& request, const DeleteCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCcGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteCcGeoIPBlockConfigOutcomeCallable AntiddosClient::DeleteCcGeoIPBlockConfigCallable(const DeleteCcGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCcGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteCcGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteDDoSBlackWhiteIpListOutcome AntiddosClient::DeleteDDoSBlackWhiteIpList(const DeleteDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSBlackWhiteIpListResponse rsp = DeleteDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSBlackWhiteIpListOutcome(rsp);
        else
            return DeleteDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSBlackWhiteIpListAsync(const DeleteDDoSBlackWhiteIpListRequest& request, const DeleteDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDDoSBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::DeleteDDoSBlackWhiteIpListCallable(const DeleteDDoSBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDDoSBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DeleteDDoSBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteDDoSGeoIPBlockConfigOutcome AntiddosClient::DeleteDDoSGeoIPBlockConfig(const DeleteDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSGeoIPBlockConfigResponse rsp = DeleteDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return DeleteDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSGeoIPBlockConfigAsync(const DeleteDDoSGeoIPBlockConfigRequest& request, const DeleteDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDDoSGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::DeleteDDoSGeoIPBlockConfigCallable(const DeleteDDoSGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDDoSGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteDDoSGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteDDoSSpeedLimitConfigOutcome AntiddosClient::DeleteDDoSSpeedLimitConfig(const DeleteDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSSpeedLimitConfigResponse rsp = DeleteDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSSpeedLimitConfigOutcome(rsp);
        else
            return DeleteDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSSpeedLimitConfigAsync(const DeleteDDoSSpeedLimitConfigRequest& request, const DeleteDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDDoSSpeedLimitConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::DeleteDDoSSpeedLimitConfigCallable(const DeleteDDoSSpeedLimitConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDDoSSpeedLimitConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteDDoSSpeedLimitConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeletePacketFilterConfigOutcome AntiddosClient::DeletePacketFilterConfig(const DeletePacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePacketFilterConfigResponse rsp = DeletePacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePacketFilterConfigOutcome(rsp);
        else
            return DeletePacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeletePacketFilterConfigAsync(const DeletePacketFilterConfigRequest& request, const DeletePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePacketFilterConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeletePacketFilterConfigOutcomeCallable AntiddosClient::DeletePacketFilterConfigCallable(const DeletePacketFilterConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePacketFilterConfigOutcome()>>(
        [this, request]()
        {
            return this->DeletePacketFilterConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeletePortAclConfigOutcome AntiddosClient::DeletePortAclConfig(const DeletePortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePortAclConfigResponse rsp = DeletePortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePortAclConfigOutcome(rsp);
        else
            return DeletePortAclConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeletePortAclConfigAsync(const DeletePortAclConfigRequest& request, const DeletePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePortAclConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeletePortAclConfigOutcomeCallable AntiddosClient::DeletePortAclConfigCallable(const DeletePortAclConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePortAclConfigOutcome()>>(
        [this, request]()
        {
            return this->DeletePortAclConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteWaterPrintConfigOutcome AntiddosClient::DeleteWaterPrintConfig(const DeleteWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWaterPrintConfigResponse rsp = DeleteWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWaterPrintConfigOutcome(rsp);
        else
            return DeleteWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteWaterPrintConfigAsync(const DeleteWaterPrintConfigRequest& request, const DeleteWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWaterPrintConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteWaterPrintConfigOutcomeCallable AntiddosClient::DeleteWaterPrintConfigCallable(const DeleteWaterPrintConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWaterPrintConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteWaterPrintConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DeleteWaterPrintKeyOutcome AntiddosClient::DeleteWaterPrintKey(const DeleteWaterPrintKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWaterPrintKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWaterPrintKeyResponse rsp = DeleteWaterPrintKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWaterPrintKeyOutcome(rsp);
        else
            return DeleteWaterPrintKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteWaterPrintKeyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteWaterPrintKeyAsync(const DeleteWaterPrintKeyRequest& request, const DeleteWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWaterPrintKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteWaterPrintKeyOutcomeCallable AntiddosClient::DeleteWaterPrintKeyCallable(const DeleteWaterPrintKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWaterPrintKeyOutcome()>>(
        [this, request]()
        {
            return this->DeleteWaterPrintKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBGPIPL7RulesOutcome AntiddosClient::DescribeBGPIPL7Rules(const DescribeBGPIPL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBGPIPL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBGPIPL7RulesResponse rsp = DescribeBGPIPL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBGPIPL7RulesOutcome(rsp);
        else
            return DescribeBGPIPL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBGPIPL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBGPIPL7RulesAsync(const DescribeBGPIPL7RulesRequest& request, const DescribeBGPIPL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBGPIPL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBGPIPL7RulesOutcomeCallable AntiddosClient::DescribeBGPIPL7RulesCallable(const DescribeBGPIPL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBGPIPL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBGPIPL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBasicDeviceStatusOutcome AntiddosClient::DescribeBasicDeviceStatus(const DescribeBasicDeviceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicDeviceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicDeviceStatusResponse rsp = DescribeBasicDeviceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicDeviceStatusOutcome(rsp);
        else
            return DescribeBasicDeviceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicDeviceStatusOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBasicDeviceStatusAsync(const DescribeBasicDeviceStatusRequest& request, const DescribeBasicDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicDeviceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBasicDeviceStatusOutcomeCallable AntiddosClient::DescribeBasicDeviceStatusCallable(const DescribeBasicDeviceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicDeviceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicDeviceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBgpBizTrendOutcome AntiddosClient::DescribeBgpBizTrend(const DescribeBgpBizTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBgpBizTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBgpBizTrendResponse rsp = DescribeBgpBizTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBgpBizTrendOutcome(rsp);
        else
            return DescribeBgpBizTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBgpBizTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBgpBizTrendAsync(const DescribeBgpBizTrendRequest& request, const DescribeBgpBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBgpBizTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBgpBizTrendOutcomeCallable AntiddosClient::DescribeBgpBizTrendCallable(const DescribeBgpBizTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBgpBizTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeBgpBizTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBizHttpStatusOutcome AntiddosClient::DescribeBizHttpStatus(const DescribeBizHttpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizHttpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizHttpStatusResponse rsp = DescribeBizHttpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizHttpStatusOutcome(rsp);
        else
            return DescribeBizHttpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBizHttpStatusOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizHttpStatusAsync(const DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizHttpStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBizHttpStatusOutcomeCallable AntiddosClient::DescribeBizHttpStatusCallable(const DescribeBizHttpStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizHttpStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizHttpStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBizMonitorTrendOutcome AntiddosClient::DescribeBizMonitorTrend(const DescribeBizMonitorTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizMonitorTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizMonitorTrendResponse rsp = DescribeBizMonitorTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizMonitorTrendOutcome(rsp);
        else
            return DescribeBizMonitorTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBizMonitorTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizMonitorTrendAsync(const DescribeBizMonitorTrendRequest& request, const DescribeBizMonitorTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizMonitorTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBizMonitorTrendOutcomeCallable AntiddosClient::DescribeBizMonitorTrendCallable(const DescribeBizMonitorTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizMonitorTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizMonitorTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeBizTrendOutcome AntiddosClient::DescribeBizTrend(const DescribeBizTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizTrendResponse rsp = DescribeBizTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizTrendOutcome(rsp);
        else
            return DescribeBizTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBizTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizTrendAsync(const DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBizTrendOutcomeCallable AntiddosClient::DescribeBizTrendCallable(const DescribeBizTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCLevelListOutcome AntiddosClient::DescribeCCLevelList(const DescribeCCLevelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCLevelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCLevelListResponse rsp = DescribeCCLevelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCLevelListOutcome(rsp);
        else
            return DescribeCCLevelListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCLevelListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCLevelListAsync(const DescribeCCLevelListRequest& request, const DescribeCCLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCLevelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCLevelListOutcomeCallable AntiddosClient::DescribeCCLevelListCallable(const DescribeCCLevelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCLevelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCLevelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCLevelPolicyOutcome AntiddosClient::DescribeCCLevelPolicy(const DescribeCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCLevelPolicyResponse rsp = DescribeCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCLevelPolicyOutcome(rsp);
        else
            return DescribeCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCLevelPolicyAsync(const DescribeCCLevelPolicyRequest& request, const DescribeCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCLevelPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCLevelPolicyOutcomeCallable AntiddosClient::DescribeCCLevelPolicyCallable(const DescribeCCLevelPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCLevelPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCLevelPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCPrecisionPlyListOutcome AntiddosClient::DescribeCCPrecisionPlyList(const DescribeCCPrecisionPlyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCPrecisionPlyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCPrecisionPlyListResponse rsp = DescribeCCPrecisionPlyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCPrecisionPlyListOutcome(rsp);
        else
            return DescribeCCPrecisionPlyListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCPrecisionPlyListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCPrecisionPlyListAsync(const DescribeCCPrecisionPlyListRequest& request, const DescribeCCPrecisionPlyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCPrecisionPlyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCPrecisionPlyListOutcomeCallable AntiddosClient::DescribeCCPrecisionPlyListCallable(const DescribeCCPrecisionPlyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCPrecisionPlyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCPrecisionPlyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCReqLimitPolicyListOutcome AntiddosClient::DescribeCCReqLimitPolicyList(const DescribeCCReqLimitPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCReqLimitPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCReqLimitPolicyListResponse rsp = DescribeCCReqLimitPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCReqLimitPolicyListOutcome(rsp);
        else
            return DescribeCCReqLimitPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCReqLimitPolicyListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCReqLimitPolicyListAsync(const DescribeCCReqLimitPolicyListRequest& request, const DescribeCCReqLimitPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCReqLimitPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCReqLimitPolicyListOutcomeCallable AntiddosClient::DescribeCCReqLimitPolicyListCallable(const DescribeCCReqLimitPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCReqLimitPolicyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCReqLimitPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCThresholdListOutcome AntiddosClient::DescribeCCThresholdList(const DescribeCCThresholdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCThresholdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCThresholdListResponse rsp = DescribeCCThresholdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCThresholdListOutcome(rsp);
        else
            return DescribeCCThresholdListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCThresholdListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCThresholdListAsync(const DescribeCCThresholdListRequest& request, const DescribeCCThresholdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCThresholdList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCThresholdListOutcomeCallable AntiddosClient::DescribeCCThresholdListCallable(const DescribeCCThresholdListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCThresholdListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCThresholdList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCCTrendOutcome AntiddosClient::DescribeCCTrend(const DescribeCCTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCTrendResponse rsp = DescribeCCTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCTrendOutcome(rsp);
        else
            return DescribeCCTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeCCTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCTrendAsync(const DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCCTrendOutcomeCallable AntiddosClient::DescribeCCTrendCallable(const DescribeCCTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCcBlackWhiteIpListOutcome AntiddosClient::DescribeCcBlackWhiteIpList(const DescribeCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcBlackWhiteIpListResponse rsp = DescribeCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcBlackWhiteIpListOutcome(rsp);
        else
            return DescribeCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCcBlackWhiteIpListAsync(const DescribeCcBlackWhiteIpListRequest& request, const DescribeCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCcBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeCcBlackWhiteIpListCallable(const DescribeCcBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeCcGeoIPBlockConfigListOutcome AntiddosClient::DescribeCcGeoIPBlockConfigList(const DescribeCcGeoIPBlockConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcGeoIPBlockConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcGeoIPBlockConfigListResponse rsp = DescribeCcGeoIPBlockConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcGeoIPBlockConfigListOutcome(rsp);
        else
            return DescribeCcGeoIPBlockConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeCcGeoIPBlockConfigListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCcGeoIPBlockConfigListAsync(const DescribeCcGeoIPBlockConfigListRequest& request, const DescribeCcGeoIPBlockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcGeoIPBlockConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeCcGeoIPBlockConfigListOutcomeCallable AntiddosClient::DescribeCcGeoIPBlockConfigListCallable(const DescribeCcGeoIPBlockConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcGeoIPBlockConfigListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcGeoIPBlockConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeDDoSBlackWhiteIpListOutcome AntiddosClient::DescribeDDoSBlackWhiteIpList(const DescribeDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlackWhiteIpListResponse rsp = DescribeDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlackWhiteIpListOutcome(rsp);
        else
            return DescribeDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSBlackWhiteIpListAsync(const DescribeDDoSBlackWhiteIpListRequest& request, const DescribeDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeDDoSBlackWhiteIpListCallable(const DescribeDDoSBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeDDoSConnectLimitListOutcome AntiddosClient::DescribeDDoSConnectLimitList(const DescribeDDoSConnectLimitListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSConnectLimitList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSConnectLimitListResponse rsp = DescribeDDoSConnectLimitListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSConnectLimitListOutcome(rsp);
        else
            return DescribeDDoSConnectLimitListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSConnectLimitListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSConnectLimitListAsync(const DescribeDDoSConnectLimitListRequest& request, const DescribeDDoSConnectLimitListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSConnectLimitList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeDDoSConnectLimitListOutcomeCallable AntiddosClient::DescribeDDoSConnectLimitListCallable(const DescribeDDoSConnectLimitListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSConnectLimitListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSConnectLimitList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeDDoSTrendOutcome AntiddosClient::DescribeDDoSTrend(const DescribeDDoSTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSTrendResponse rsp = DescribeDDoSTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSTrendOutcome(rsp);
        else
            return DescribeDDoSTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSTrendAsync(const DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeDDoSTrendOutcomeCallable AntiddosClient::DescribeDDoSTrendCallable(const DescribeDDoSTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeDefaultAlarmThresholdOutcome AntiddosClient::DescribeDefaultAlarmThreshold(const DescribeDefaultAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultAlarmThresholdResponse rsp = DescribeDefaultAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultAlarmThresholdOutcome(rsp);
        else
            return DescribeDefaultAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultAlarmThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDefaultAlarmThresholdAsync(const DescribeDefaultAlarmThresholdRequest& request, const DescribeDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeDefaultAlarmThresholdOutcomeCallable AntiddosClient::DescribeDefaultAlarmThresholdCallable(const DescribeDefaultAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeIpBlockListOutcome AntiddosClient::DescribeIpBlockList(const DescribeIpBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpBlockListResponse rsp = DescribeIpBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpBlockListOutcome(rsp);
        else
            return DescribeIpBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeIpBlockListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeIpBlockListAsync(const DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeIpBlockListOutcomeCallable AntiddosClient::DescribeIpBlockListCallable(const DescribeIpBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpBlockListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeL7RulesBySSLCertIdOutcome AntiddosClient::DescribeL7RulesBySSLCertId(const DescribeL7RulesBySSLCertIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7RulesBySSLCertId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7RulesBySSLCertIdResponse rsp = DescribeL7RulesBySSLCertIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7RulesBySSLCertIdOutcome(rsp);
        else
            return DescribeL7RulesBySSLCertIdOutcome(o.GetError());
    }
    else
    {
        return DescribeL7RulesBySSLCertIdOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeL7RulesBySSLCertIdAsync(const DescribeL7RulesBySSLCertIdRequest& request, const DescribeL7RulesBySSLCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7RulesBySSLCertId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeL7RulesBySSLCertIdOutcomeCallable AntiddosClient::DescribeL7RulesBySSLCertIdCallable(const DescribeL7RulesBySSLCertIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7RulesBySSLCertIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7RulesBySSLCertId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListBGPIPInstancesOutcome AntiddosClient::DescribeListBGPIPInstances(const DescribeListBGPIPInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBGPIPInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBGPIPInstancesResponse rsp = DescribeListBGPIPInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBGPIPInstancesOutcome(rsp);
        else
            return DescribeListBGPIPInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeListBGPIPInstancesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBGPIPInstancesAsync(const DescribeListBGPIPInstancesRequest& request, const DescribeListBGPIPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListBGPIPInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListBGPIPInstancesOutcomeCallable AntiddosClient::DescribeListBGPIPInstancesCallable(const DescribeListBGPIPInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListBGPIPInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeListBGPIPInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListBGPInstancesOutcome AntiddosClient::DescribeListBGPInstances(const DescribeListBGPInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBGPInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBGPInstancesResponse rsp = DescribeListBGPInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBGPInstancesOutcome(rsp);
        else
            return DescribeListBGPInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeListBGPInstancesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBGPInstancesAsync(const DescribeListBGPInstancesRequest& request, const DescribeListBGPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListBGPInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListBGPInstancesOutcomeCallable AntiddosClient::DescribeListBGPInstancesCallable(const DescribeListBGPInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListBGPInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeListBGPInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListBlackWhiteIpListOutcome AntiddosClient::DescribeListBlackWhiteIpList(const DescribeListBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBlackWhiteIpListResponse rsp = DescribeListBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBlackWhiteIpListOutcome(rsp);
        else
            return DescribeListBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeListBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBlackWhiteIpListAsync(const DescribeListBlackWhiteIpListRequest& request, const DescribeListBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeListBlackWhiteIpListCallable(const DescribeListBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeListBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListDDoSAIOutcome AntiddosClient::DescribeListDDoSAI(const DescribeListDDoSAIRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSAIResponse rsp = DescribeListDDoSAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSAIOutcome(rsp);
        else
            return DescribeListDDoSAIOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSAIOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSAIAsync(const DescribeListDDoSAIRequest& request, const DescribeListDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListDDoSAI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListDDoSAIOutcomeCallable AntiddosClient::DescribeListDDoSAICallable(const DescribeListDDoSAIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListDDoSAIOutcome()>>(
        [this, request]()
        {
            return this->DescribeListDDoSAI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListDDoSGeoIPBlockConfigOutcome AntiddosClient::DescribeListDDoSGeoIPBlockConfig(const DescribeListDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSGeoIPBlockConfigResponse rsp = DescribeListDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return DescribeListDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSGeoIPBlockConfigAsync(const DescribeListDDoSGeoIPBlockConfigRequest& request, const DescribeListDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListDDoSGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::DescribeListDDoSGeoIPBlockConfigCallable(const DescribeListDDoSGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListDDoSGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListDDoSGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListDDoSSpeedLimitConfigOutcome AntiddosClient::DescribeListDDoSSpeedLimitConfig(const DescribeListDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSSpeedLimitConfigResponse rsp = DescribeListDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSSpeedLimitConfigOutcome(rsp);
        else
            return DescribeListDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSSpeedLimitConfigAsync(const DescribeListDDoSSpeedLimitConfigRequest& request, const DescribeListDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListDDoSSpeedLimitConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::DescribeListDDoSSpeedLimitConfigCallable(const DescribeListDDoSSpeedLimitConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListDDoSSpeedLimitConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListDDoSSpeedLimitConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListIPAlarmConfigOutcome AntiddosClient::DescribeListIPAlarmConfig(const DescribeListIPAlarmConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListIPAlarmConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListIPAlarmConfigResponse rsp = DescribeListIPAlarmConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListIPAlarmConfigOutcome(rsp);
        else
            return DescribeListIPAlarmConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListIPAlarmConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListIPAlarmConfigAsync(const DescribeListIPAlarmConfigRequest& request, const DescribeListIPAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListIPAlarmConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListIPAlarmConfigOutcomeCallable AntiddosClient::DescribeListIPAlarmConfigCallable(const DescribeListIPAlarmConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListIPAlarmConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListIPAlarmConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListListenerOutcome AntiddosClient::DescribeListListener(const DescribeListListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListListenerResponse rsp = DescribeListListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListListenerOutcome(rsp);
        else
            return DescribeListListenerOutcome(o.GetError());
    }
    else
    {
        return DescribeListListenerOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListListenerAsync(const DescribeListListenerRequest& request, const DescribeListListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListListenerOutcomeCallable AntiddosClient::DescribeListListenerCallable(const DescribeListListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListListenerOutcome()>>(
        [this, request]()
        {
            return this->DescribeListListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListPacketFilterConfigOutcome AntiddosClient::DescribeListPacketFilterConfig(const DescribeListPacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListPacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListPacketFilterConfigResponse rsp = DescribeListPacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListPacketFilterConfigOutcome(rsp);
        else
            return DescribeListPacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListPacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListPacketFilterConfigAsync(const DescribeListPacketFilterConfigRequest& request, const DescribeListPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListPacketFilterConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListPacketFilterConfigOutcomeCallable AntiddosClient::DescribeListPacketFilterConfigCallable(const DescribeListPacketFilterConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListPacketFilterConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListPacketFilterConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListPortAclListOutcome AntiddosClient::DescribeListPortAclList(const DescribeListPortAclListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListPortAclList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListPortAclListResponse rsp = DescribeListPortAclListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListPortAclListOutcome(rsp);
        else
            return DescribeListPortAclListOutcome(o.GetError());
    }
    else
    {
        return DescribeListPortAclListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListPortAclListAsync(const DescribeListPortAclListRequest& request, const DescribeListPortAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListPortAclList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListPortAclListOutcomeCallable AntiddosClient::DescribeListPortAclListCallable(const DescribeListPortAclListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListPortAclListOutcome()>>(
        [this, request]()
        {
            return this->DescribeListPortAclList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListProtocolBlockConfigOutcome AntiddosClient::DescribeListProtocolBlockConfig(const DescribeListProtocolBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListProtocolBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListProtocolBlockConfigResponse rsp = DescribeListProtocolBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListProtocolBlockConfigOutcome(rsp);
        else
            return DescribeListProtocolBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListProtocolBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListProtocolBlockConfigAsync(const DescribeListProtocolBlockConfigRequest& request, const DescribeListProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListProtocolBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListProtocolBlockConfigOutcomeCallable AntiddosClient::DescribeListProtocolBlockConfigCallable(const DescribeListProtocolBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListProtocolBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListProtocolBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListSchedulingDomainOutcome AntiddosClient::DescribeListSchedulingDomain(const DescribeListSchedulingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListSchedulingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListSchedulingDomainResponse rsp = DescribeListSchedulingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListSchedulingDomainOutcome(rsp);
        else
            return DescribeListSchedulingDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeListSchedulingDomainOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListSchedulingDomainAsync(const DescribeListSchedulingDomainRequest& request, const DescribeListSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListSchedulingDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListSchedulingDomainOutcomeCallable AntiddosClient::DescribeListSchedulingDomainCallable(const DescribeListSchedulingDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListSchedulingDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeListSchedulingDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeListWaterPrintConfigOutcome AntiddosClient::DescribeListWaterPrintConfig(const DescribeListWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListWaterPrintConfigResponse rsp = DescribeListWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListWaterPrintConfigOutcome(rsp);
        else
            return DescribeListWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListWaterPrintConfigAsync(const DescribeListWaterPrintConfigRequest& request, const DescribeListWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListWaterPrintConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListWaterPrintConfigOutcomeCallable AntiddosClient::DescribeListWaterPrintConfigCallable(const DescribeListWaterPrintConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListWaterPrintConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListWaterPrintConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeNewL7RulesOutcome AntiddosClient::DescribeNewL7Rules(const DescribeNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL7RulesResponse rsp = DescribeNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL7RulesOutcome(rsp);
        else
            return DescribeNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeNewL7RulesAsync(const DescribeNewL7RulesRequest& request, const DescribeNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeNewL7RulesOutcomeCallable AntiddosClient::DescribeNewL7RulesCallable(const DescribeNewL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeNewL7RulesErrHealthOutcome AntiddosClient::DescribeNewL7RulesErrHealth(const DescribeNewL7RulesErrHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL7RulesErrHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL7RulesErrHealthResponse rsp = DescribeNewL7RulesErrHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL7RulesErrHealthOutcome(rsp);
        else
            return DescribeNewL7RulesErrHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL7RulesErrHealthOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeNewL7RulesErrHealthAsync(const DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewL7RulesErrHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeNewL7RulesErrHealthOutcomeCallable AntiddosClient::DescribeNewL7RulesErrHealthCallable(const DescribeNewL7RulesErrHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewL7RulesErrHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewL7RulesErrHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeOverviewAttackTrendOutcome AntiddosClient::DescribeOverviewAttackTrend(const DescribeOverviewAttackTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewAttackTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewAttackTrendResponse rsp = DescribeOverviewAttackTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewAttackTrendOutcome(rsp);
        else
            return DescribeOverviewAttackTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewAttackTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewAttackTrendAsync(const DescribeOverviewAttackTrendRequest& request, const DescribeOverviewAttackTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewAttackTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeOverviewAttackTrendOutcomeCallable AntiddosClient::DescribeOverviewAttackTrendCallable(const DescribeOverviewAttackTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewAttackTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewAttackTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeOverviewCCTrendOutcome AntiddosClient::DescribeOverviewCCTrend(const DescribeOverviewCCTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewCCTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewCCTrendResponse rsp = DescribeOverviewCCTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewCCTrendOutcome(rsp);
        else
            return DescribeOverviewCCTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewCCTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewCCTrendAsync(const DescribeOverviewCCTrendRequest& request, const DescribeOverviewCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewCCTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeOverviewCCTrendOutcomeCallable AntiddosClient::DescribeOverviewCCTrendCallable(const DescribeOverviewCCTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewCCTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewCCTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeOverviewDDoSEventListOutcome AntiddosClient::DescribeOverviewDDoSEventList(const DescribeOverviewDDoSEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewDDoSEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewDDoSEventListResponse rsp = DescribeOverviewDDoSEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewDDoSEventListOutcome(rsp);
        else
            return DescribeOverviewDDoSEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewDDoSEventListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewDDoSEventListAsync(const DescribeOverviewDDoSEventListRequest& request, const DescribeOverviewDDoSEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewDDoSEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeOverviewDDoSEventListOutcomeCallable AntiddosClient::DescribeOverviewDDoSEventListCallable(const DescribeOverviewDDoSEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewDDoSEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewDDoSEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeOverviewDDoSTrendOutcome AntiddosClient::DescribeOverviewDDoSTrend(const DescribeOverviewDDoSTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewDDoSTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewDDoSTrendResponse rsp = DescribeOverviewDDoSTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewDDoSTrendOutcome(rsp);
        else
            return DescribeOverviewDDoSTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewDDoSTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewDDoSTrendAsync(const DescribeOverviewDDoSTrendRequest& request, const DescribeOverviewDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewDDoSTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeOverviewDDoSTrendOutcomeCallable AntiddosClient::DescribeOverviewDDoSTrendCallable(const DescribeOverviewDDoSTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewDDoSTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewDDoSTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribeOverviewIndexOutcome AntiddosClient::DescribeOverviewIndex(const DescribeOverviewIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewIndexResponse rsp = DescribeOverviewIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewIndexOutcome(rsp);
        else
            return DescribeOverviewIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewIndexOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewIndexAsync(const DescribeOverviewIndexRequest& request, const DescribeOverviewIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeOverviewIndexOutcomeCallable AntiddosClient::DescribeOverviewIndexCallable(const DescribeOverviewIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DescribePendingRiskInfoOutcome AntiddosClient::DescribePendingRiskInfo(const DescribePendingRiskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePendingRiskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePendingRiskInfoResponse rsp = DescribePendingRiskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePendingRiskInfoOutcome(rsp);
        else
            return DescribePendingRiskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePendingRiskInfoOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribePendingRiskInfoAsync(const DescribePendingRiskInfoRequest& request, const DescribePendingRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePendingRiskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribePendingRiskInfoOutcomeCallable AntiddosClient::DescribePendingRiskInfoCallable(const DescribePendingRiskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePendingRiskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePendingRiskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::DisassociateDDoSEipAddressOutcome AntiddosClient::DisassociateDDoSEipAddress(const DisassociateDDoSEipAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateDDoSEipAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateDDoSEipAddressResponse rsp = DisassociateDDoSEipAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateDDoSEipAddressOutcome(rsp);
        else
            return DisassociateDDoSEipAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateDDoSEipAddressOutcome(outcome.GetError());
    }
}

void AntiddosClient::DisassociateDDoSEipAddressAsync(const DisassociateDDoSEipAddressRequest& request, const DisassociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateDDoSEipAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DisassociateDDoSEipAddressOutcomeCallable AntiddosClient::DisassociateDDoSEipAddressCallable(const DisassociateDDoSEipAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateDDoSEipAddressOutcome()>>(
        [this, request]()
        {
            return this->DisassociateDDoSEipAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyCCLevelPolicyOutcome AntiddosClient::ModifyCCLevelPolicy(const ModifyCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCLevelPolicyResponse rsp = ModifyCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCLevelPolicyOutcome(rsp);
        else
            return ModifyCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCLevelPolicyAsync(const ModifyCCLevelPolicyRequest& request, const ModifyCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCLevelPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyCCLevelPolicyOutcomeCallable AntiddosClient::ModifyCCLevelPolicyCallable(const ModifyCCLevelPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCLevelPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCLevelPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyCCPrecisionPolicyOutcome AntiddosClient::ModifyCCPrecisionPolicy(const ModifyCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCPrecisionPolicyResponse rsp = ModifyCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCPrecisionPolicyOutcome(rsp);
        else
            return ModifyCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCPrecisionPolicyAsync(const ModifyCCPrecisionPolicyRequest& request, const ModifyCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCPrecisionPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyCCPrecisionPolicyOutcomeCallable AntiddosClient::ModifyCCPrecisionPolicyCallable(const ModifyCCPrecisionPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCPrecisionPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCPrecisionPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyCCReqLimitPolicyOutcome AntiddosClient::ModifyCCReqLimitPolicy(const ModifyCCReqLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCReqLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCReqLimitPolicyResponse rsp = ModifyCCReqLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCReqLimitPolicyOutcome(rsp);
        else
            return ModifyCCReqLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCReqLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCReqLimitPolicyAsync(const ModifyCCReqLimitPolicyRequest& request, const ModifyCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCReqLimitPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyCCReqLimitPolicyOutcomeCallable AntiddosClient::ModifyCCReqLimitPolicyCallable(const ModifyCCReqLimitPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCReqLimitPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCReqLimitPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyCCThresholdPolicyOutcome AntiddosClient::ModifyCCThresholdPolicy(const ModifyCCThresholdPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCThresholdPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCThresholdPolicyResponse rsp = ModifyCCThresholdPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCThresholdPolicyOutcome(rsp);
        else
            return ModifyCCThresholdPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCThresholdPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCThresholdPolicyAsync(const ModifyCCThresholdPolicyRequest& request, const ModifyCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCThresholdPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyCCThresholdPolicyOutcomeCallable AntiddosClient::ModifyCCThresholdPolicyCallable(const ModifyCCThresholdPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCThresholdPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCThresholdPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyCcBlackWhiteIpListOutcome AntiddosClient::ModifyCcBlackWhiteIpList(const ModifyCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcBlackWhiteIpListResponse rsp = ModifyCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcBlackWhiteIpListOutcome(rsp);
        else
            return ModifyCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return ModifyCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCcBlackWhiteIpListAsync(const ModifyCcBlackWhiteIpListRequest& request, const ModifyCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCcBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyCcBlackWhiteIpListOutcomeCallable AntiddosClient::ModifyCcBlackWhiteIpListCallable(const ModifyCcBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCcBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->ModifyCcBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDDoSBlackWhiteIpListOutcome AntiddosClient::ModifyDDoSBlackWhiteIpList(const ModifyDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSBlackWhiteIpListResponse rsp = ModifyDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSBlackWhiteIpListOutcome(rsp);
        else
            return ModifyDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSBlackWhiteIpListAsync(const ModifyDDoSBlackWhiteIpListRequest& request, const ModifyDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::ModifyDDoSBlackWhiteIpListCallable(const ModifyDDoSBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSBlackWhiteIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDDoSGeoIPBlockConfigOutcome AntiddosClient::ModifyDDoSGeoIPBlockConfig(const ModifyDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSGeoIPBlockConfigResponse rsp = ModifyDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return ModifyDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSGeoIPBlockConfigAsync(const ModifyDDoSGeoIPBlockConfigRequest& request, const ModifyDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSGeoIPBlockConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::ModifyDDoSGeoIPBlockConfigCallable(const ModifyDDoSGeoIPBlockConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSGeoIPBlockConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSGeoIPBlockConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDDoSLevelOutcome AntiddosClient::ModifyDDoSLevel(const ModifyDDoSLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSLevelResponse rsp = ModifyDDoSLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSLevelOutcome(rsp);
        else
            return ModifyDDoSLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSLevelOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSLevelAsync(const ModifyDDoSLevelRequest& request, const ModifyDDoSLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDDoSLevelOutcomeCallable AntiddosClient::ModifyDDoSLevelCallable(const ModifyDDoSLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDDoSSpeedLimitConfigOutcome AntiddosClient::ModifyDDoSSpeedLimitConfig(const ModifyDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSSpeedLimitConfigResponse rsp = ModifyDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSSpeedLimitConfigOutcome(rsp);
        else
            return ModifyDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSSpeedLimitConfigAsync(const ModifyDDoSSpeedLimitConfigRequest& request, const ModifyDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSSpeedLimitConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::ModifyDDoSSpeedLimitConfigCallable(const ModifyDDoSSpeedLimitConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSSpeedLimitConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSSpeedLimitConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDDoSThresholdOutcome AntiddosClient::ModifyDDoSThreshold(const ModifyDDoSThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSThresholdResponse rsp = ModifyDDoSThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSThresholdOutcome(rsp);
        else
            return ModifyDDoSThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSThresholdAsync(const ModifyDDoSThresholdRequest& request, const ModifyDDoSThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDDoSThresholdOutcomeCallable AntiddosClient::ModifyDDoSThresholdCallable(const ModifyDDoSThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyDomainUsrNameOutcome AntiddosClient::ModifyDomainUsrName(const ModifyDomainUsrNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUsrName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUsrNameResponse rsp = ModifyDomainUsrNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUsrNameOutcome(rsp);
        else
            return ModifyDomainUsrNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUsrNameOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDomainUsrNameAsync(const ModifyDomainUsrNameRequest& request, const ModifyDomainUsrNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainUsrName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyDomainUsrNameOutcomeCallable AntiddosClient::ModifyDomainUsrNameCallable(const ModifyDomainUsrNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainUsrNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainUsrName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyNewDomainRulesOutcome AntiddosClient::ModifyNewDomainRules(const ModifyNewDomainRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNewDomainRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNewDomainRulesResponse rsp = ModifyNewDomainRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNewDomainRulesOutcome(rsp);
        else
            return ModifyNewDomainRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNewDomainRulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyNewDomainRulesAsync(const ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNewDomainRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyNewDomainRulesOutcomeCallable AntiddosClient::ModifyNewDomainRulesCallable(const ModifyNewDomainRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNewDomainRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNewDomainRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyPacketFilterConfigOutcome AntiddosClient::ModifyPacketFilterConfig(const ModifyPacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPacketFilterConfigResponse rsp = ModifyPacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPacketFilterConfigOutcome(rsp);
        else
            return ModifyPacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyPacketFilterConfigAsync(const ModifyPacketFilterConfigRequest& request, const ModifyPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPacketFilterConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyPacketFilterConfigOutcomeCallable AntiddosClient::ModifyPacketFilterConfigCallable(const ModifyPacketFilterConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPacketFilterConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyPacketFilterConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::ModifyPortAclConfigOutcome AntiddosClient::ModifyPortAclConfig(const ModifyPortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPortAclConfigResponse rsp = ModifyPortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPortAclConfigOutcome(rsp);
        else
            return ModifyPortAclConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyPortAclConfigAsync(const ModifyPortAclConfigRequest& request, const ModifyPortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPortAclConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyPortAclConfigOutcomeCallable AntiddosClient::ModifyPortAclConfigCallable(const ModifyPortAclConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPortAclConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyPortAclConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AntiddosClient::SwitchWaterPrintConfigOutcome AntiddosClient::SwitchWaterPrintConfig(const SwitchWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchWaterPrintConfigResponse rsp = SwitchWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchWaterPrintConfigOutcome(rsp);
        else
            return SwitchWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return SwitchWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::SwitchWaterPrintConfigAsync(const SwitchWaterPrintConfigRequest& request, const SwitchWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchWaterPrintConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::SwitchWaterPrintConfigOutcomeCallable AntiddosClient::SwitchWaterPrintConfigCallable(const SwitchWaterPrintConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchWaterPrintConfigOutcome()>>(
        [this, request]()
        {
            return this->SwitchWaterPrintConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

