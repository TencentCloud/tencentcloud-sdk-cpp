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

AntiddosClient::DeleteBlackWhiteIpListOutcome AntiddosClient::DeleteBlackWhiteIpList(const DeleteBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlackWhiteIpListResponse rsp = DeleteBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlackWhiteIpListOutcome(rsp);
        else
            return DeleteBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DeleteBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteBlackWhiteIpListAsync(const DeleteBlackWhiteIpListRequest& request, const DeleteBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DeleteBlackWhiteIpListOutcomeCallable AntiddosClient::DeleteBlackWhiteIpListCallable(const DeleteBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DeleteBlackWhiteIpList(request);
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

AntiddosClient::DescribeBlackWhiteIpListOutcome AntiddosClient::DescribeBlackWhiteIpList(const DescribeBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlackWhiteIpListResponse rsp = DescribeBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlackWhiteIpListOutcome(rsp);
        else
            return DescribeBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBlackWhiteIpListAsync(const DescribeBlackWhiteIpListRequest& request, const DescribeBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlackWhiteIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeBlackWhiteIpListCallable(const DescribeBlackWhiteIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlackWhiteIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlackWhiteIpList(request);
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

AntiddosClient::DescribeListProtectThresholdConfigOutcome AntiddosClient::DescribeListProtectThresholdConfig(const DescribeListProtectThresholdConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListProtectThresholdConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListProtectThresholdConfigResponse rsp = DescribeListProtectThresholdConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListProtectThresholdConfigOutcome(rsp);
        else
            return DescribeListProtectThresholdConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListProtectThresholdConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListProtectThresholdConfigAsync(const DescribeListProtectThresholdConfigRequest& request, const DescribeListProtectThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListProtectThresholdConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::DescribeListProtectThresholdConfigOutcomeCallable AntiddosClient::DescribeListProtectThresholdConfigCallable(const DescribeListProtectThresholdConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListProtectThresholdConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeListProtectThresholdConfig(request);
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

AntiddosClient::ModifyL7RulesEdgeOutcome AntiddosClient::ModifyL7RulesEdge(const ModifyL7RulesEdgeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7RulesEdge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7RulesEdgeResponse rsp = ModifyL7RulesEdgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7RulesEdgeOutcome(rsp);
        else
            return ModifyL7RulesEdgeOutcome(o.GetError());
    }
    else
    {
        return ModifyL7RulesEdgeOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyL7RulesEdgeAsync(const ModifyL7RulesEdgeRequest& request, const ModifyL7RulesEdgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7RulesEdge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AntiddosClient::ModifyL7RulesEdgeOutcomeCallable AntiddosClient::ModifyL7RulesEdgeCallable(const ModifyL7RulesEdgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7RulesEdgeOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7RulesEdge(request);
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

