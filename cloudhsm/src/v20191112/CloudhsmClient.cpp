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

#include <tencentcloud/cloudhsm/v20191112/CloudhsmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudhsm::V20191112;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-12";
    const string ENDPOINT = "cloudhsm.tencentcloudapi.com";
}

CloudhsmClient::CloudhsmClient(const Credential &credential, const string &region) :
    CloudhsmClient(credential, region, ClientProfile())
{
}

CloudhsmClient::CloudhsmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudhsmClient::DescribeHSMBySubnetIdOutcome CloudhsmClient::DescribeHSMBySubnetId(const DescribeHSMBySubnetIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHSMBySubnetId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHSMBySubnetIdResponse rsp = DescribeHSMBySubnetIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHSMBySubnetIdOutcome(rsp);
        else
            return DescribeHSMBySubnetIdOutcome(o.GetError());
    }
    else
    {
        return DescribeHSMBySubnetIdOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeHSMBySubnetIdAsync(const DescribeHSMBySubnetIdRequest& request, const DescribeHSMBySubnetIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHSMBySubnetIdRequest&;
    using Resp = DescribeHSMBySubnetIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHSMBySubnetId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeHSMBySubnetIdOutcomeCallable CloudhsmClient::DescribeHSMBySubnetIdCallable(const DescribeHSMBySubnetIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHSMBySubnetIdOutcome>>();
    DescribeHSMBySubnetIdAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeHSMBySubnetIdRequest&,
        DescribeHSMBySubnetIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeHSMByVpcIdOutcome CloudhsmClient::DescribeHSMByVpcId(const DescribeHSMByVpcIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHSMByVpcId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHSMByVpcIdResponse rsp = DescribeHSMByVpcIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHSMByVpcIdOutcome(rsp);
        else
            return DescribeHSMByVpcIdOutcome(o.GetError());
    }
    else
    {
        return DescribeHSMByVpcIdOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeHSMByVpcIdAsync(const DescribeHSMByVpcIdRequest& request, const DescribeHSMByVpcIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHSMByVpcIdRequest&;
    using Resp = DescribeHSMByVpcIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHSMByVpcId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeHSMByVpcIdOutcomeCallable CloudhsmClient::DescribeHSMByVpcIdCallable(const DescribeHSMByVpcIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHSMByVpcIdOutcome>>();
    DescribeHSMByVpcIdAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeHSMByVpcIdRequest&,
        DescribeHSMByVpcIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeSubnetOutcome CloudhsmClient::DescribeSubnet(const DescribeSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetResponse rsp = DescribeSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetOutcome(rsp);
        else
            return DescribeSubnetOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeSubnetAsync(const DescribeSubnetRequest& request, const DescribeSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetRequest&;
    using Resp = DescribeSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeSubnetOutcomeCallable CloudhsmClient::DescribeSubnetCallable(const DescribeSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetOutcome>>();
    DescribeSubnetAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeSubnetRequest&,
        DescribeSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeSupportedHsmOutcome CloudhsmClient::DescribeSupportedHsm(const DescribeSupportedHsmRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportedHsm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportedHsmResponse rsp = DescribeSupportedHsmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportedHsmOutcome(rsp);
        else
            return DescribeSupportedHsmOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportedHsmOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeSupportedHsmAsync(const DescribeSupportedHsmRequest& request, const DescribeSupportedHsmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportedHsmRequest&;
    using Resp = DescribeSupportedHsmResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportedHsm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeSupportedHsmOutcomeCallable CloudhsmClient::DescribeSupportedHsmCallable(const DescribeSupportedHsmRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportedHsmOutcome>>();
    DescribeSupportedHsmAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeSupportedHsmRequest&,
        DescribeSupportedHsmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeUsgOutcome CloudhsmClient::DescribeUsg(const DescribeUsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsgResponse rsp = DescribeUsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsgOutcome(rsp);
        else
            return DescribeUsgOutcome(o.GetError());
    }
    else
    {
        return DescribeUsgOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeUsgAsync(const DescribeUsgRequest& request, const DescribeUsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsgRequest&;
    using Resp = DescribeUsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeUsgOutcomeCallable CloudhsmClient::DescribeUsgCallable(const DescribeUsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsgOutcome>>();
    DescribeUsgAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeUsgRequest&,
        DescribeUsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeUsgRuleOutcome CloudhsmClient::DescribeUsgRule(const DescribeUsgRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsgRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsgRuleResponse rsp = DescribeUsgRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsgRuleOutcome(rsp);
        else
            return DescribeUsgRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeUsgRuleOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeUsgRuleAsync(const DescribeUsgRuleRequest& request, const DescribeUsgRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsgRuleRequest&;
    using Resp = DescribeUsgRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsgRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeUsgRuleOutcomeCallable CloudhsmClient::DescribeUsgRuleCallable(const DescribeUsgRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsgRuleOutcome>>();
    DescribeUsgRuleAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeUsgRuleRequest&,
        DescribeUsgRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeVpcOutcome CloudhsmClient::DescribeVpc(const DescribeVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcResponse rsp = DescribeVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcOutcome(rsp);
        else
            return DescribeVpcOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeVpcAsync(const DescribeVpcRequest& request, const DescribeVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcRequest&;
    using Resp = DescribeVpcResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeVpcOutcomeCallable CloudhsmClient::DescribeVpcCallable(const DescribeVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcOutcome>>();
    DescribeVpcAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeVpcRequest&,
        DescribeVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeVsmAttributesOutcome CloudhsmClient::DescribeVsmAttributes(const DescribeVsmAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVsmAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVsmAttributesResponse rsp = DescribeVsmAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVsmAttributesOutcome(rsp);
        else
            return DescribeVsmAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeVsmAttributesOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeVsmAttributesAsync(const DescribeVsmAttributesRequest& request, const DescribeVsmAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVsmAttributesRequest&;
    using Resp = DescribeVsmAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVsmAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeVsmAttributesOutcomeCallable CloudhsmClient::DescribeVsmAttributesCallable(const DescribeVsmAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVsmAttributesOutcome>>();
    DescribeVsmAttributesAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeVsmAttributesRequest&,
        DescribeVsmAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::DescribeVsmsOutcome CloudhsmClient::DescribeVsms(const DescribeVsmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVsms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVsmsResponse rsp = DescribeVsmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVsmsOutcome(rsp);
        else
            return DescribeVsmsOutcome(o.GetError());
    }
    else
    {
        return DescribeVsmsOutcome(outcome.GetError());
    }
}

void CloudhsmClient::DescribeVsmsAsync(const DescribeVsmsRequest& request, const DescribeVsmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVsmsRequest&;
    using Resp = DescribeVsmsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVsms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::DescribeVsmsOutcomeCallable CloudhsmClient::DescribeVsmsCallable(const DescribeVsmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVsmsOutcome>>();
    DescribeVsmsAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const DescribeVsmsRequest&,
        DescribeVsmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::GetAlarmEventOutcome CloudhsmClient::GetAlarmEvent(const GetAlarmEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmEventResponse rsp = GetAlarmEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmEventOutcome(rsp);
        else
            return GetAlarmEventOutcome(o.GetError());
    }
    else
    {
        return GetAlarmEventOutcome(outcome.GetError());
    }
}

void CloudhsmClient::GetAlarmEventAsync(const GetAlarmEventRequest& request, const GetAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAlarmEventRequest&;
    using Resp = GetAlarmEventResponse;

    DoRequestAsync<Req, Resp>(
        "GetAlarmEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::GetAlarmEventOutcomeCallable CloudhsmClient::GetAlarmEventCallable(const GetAlarmEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAlarmEventOutcome>>();
    GetAlarmEventAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const GetAlarmEventRequest&,
        GetAlarmEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::GetVsmMonitorInfoOutcome CloudhsmClient::GetVsmMonitorInfo(const GetVsmMonitorInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetVsmMonitorInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVsmMonitorInfoResponse rsp = GetVsmMonitorInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVsmMonitorInfoOutcome(rsp);
        else
            return GetVsmMonitorInfoOutcome(o.GetError());
    }
    else
    {
        return GetVsmMonitorInfoOutcome(outcome.GetError());
    }
}

void CloudhsmClient::GetVsmMonitorInfoAsync(const GetVsmMonitorInfoRequest& request, const GetVsmMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetVsmMonitorInfoRequest&;
    using Resp = GetVsmMonitorInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetVsmMonitorInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::GetVsmMonitorInfoOutcomeCallable CloudhsmClient::GetVsmMonitorInfoCallable(const GetVsmMonitorInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVsmMonitorInfoOutcome>>();
    GetVsmMonitorInfoAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const GetVsmMonitorInfoRequest&,
        GetVsmMonitorInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::InquiryPriceBuyVsmOutcome CloudhsmClient::InquiryPriceBuyVsm(const InquiryPriceBuyVsmRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceBuyVsm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceBuyVsmResponse rsp = InquiryPriceBuyVsmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceBuyVsmOutcome(rsp);
        else
            return InquiryPriceBuyVsmOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceBuyVsmOutcome(outcome.GetError());
    }
}

void CloudhsmClient::InquiryPriceBuyVsmAsync(const InquiryPriceBuyVsmRequest& request, const InquiryPriceBuyVsmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceBuyVsmRequest&;
    using Resp = InquiryPriceBuyVsmResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceBuyVsm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::InquiryPriceBuyVsmOutcomeCallable CloudhsmClient::InquiryPriceBuyVsmCallable(const InquiryPriceBuyVsmRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceBuyVsmOutcome>>();
    InquiryPriceBuyVsmAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const InquiryPriceBuyVsmRequest&,
        InquiryPriceBuyVsmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::ModifyAlarmEventOutcome CloudhsmClient::ModifyAlarmEvent(const ModifyAlarmEventRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmEventResponse rsp = ModifyAlarmEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmEventOutcome(rsp);
        else
            return ModifyAlarmEventOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmEventOutcome(outcome.GetError());
    }
}

void CloudhsmClient::ModifyAlarmEventAsync(const ModifyAlarmEventRequest& request, const ModifyAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmEventRequest&;
    using Resp = ModifyAlarmEventResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::ModifyAlarmEventOutcomeCallable CloudhsmClient::ModifyAlarmEventCallable(const ModifyAlarmEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmEventOutcome>>();
    ModifyAlarmEventAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const ModifyAlarmEventRequest&,
        ModifyAlarmEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudhsmClient::ModifyVsmAttributesOutcome CloudhsmClient::ModifyVsmAttributes(const ModifyVsmAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVsmAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVsmAttributesResponse rsp = ModifyVsmAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVsmAttributesOutcome(rsp);
        else
            return ModifyVsmAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyVsmAttributesOutcome(outcome.GetError());
    }
}

void CloudhsmClient::ModifyVsmAttributesAsync(const ModifyVsmAttributesRequest& request, const ModifyVsmAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVsmAttributesRequest&;
    using Resp = ModifyVsmAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVsmAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudhsmClient::ModifyVsmAttributesOutcomeCallable CloudhsmClient::ModifyVsmAttributesCallable(const ModifyVsmAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVsmAttributesOutcome>>();
    ModifyVsmAttributesAsync(
    request,
    [prom](
        const CloudhsmClient*,
        const ModifyVsmAttributesRequest&,
        ModifyVsmAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

