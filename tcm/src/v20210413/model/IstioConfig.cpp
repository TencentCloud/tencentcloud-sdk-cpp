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

#include <tencentcloud/tcm/v20210413/model/IstioConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

IstioConfig::IstioConfig() :
    m_outboundTrafficPolicyHasBeenSet(false),
    m_tracingHasBeenSet(false),
    m_disablePolicyChecksHasBeenSet(false),
    m_enablePilotHTTPHasBeenSet(false),
    m_disableHTTPRetryHasBeenSet(false),
    m_smartDNSHasBeenSet(false)
{
}

CoreInternalOutcome IstioConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutboundTrafficPolicy") && !value["OutboundTrafficPolicy"].IsNull())
    {
        if (!value["OutboundTrafficPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.OutboundTrafficPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundTrafficPolicy = string(value["OutboundTrafficPolicy"].GetString());
        m_outboundTrafficPolicyHasBeenSet = true;
    }

    if (value.HasMember("Tracing") && !value["Tracing"].IsNull())
    {
        if (!value["Tracing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.Tracing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tracing.Deserialize(value["Tracing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tracingHasBeenSet = true;
    }

    if (value.HasMember("DisablePolicyChecks") && !value["DisablePolicyChecks"].IsNull())
    {
        if (!value["DisablePolicyChecks"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.DisablePolicyChecks` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disablePolicyChecks = value["DisablePolicyChecks"].GetBool();
        m_disablePolicyChecksHasBeenSet = true;
    }

    if (value.HasMember("EnablePilotHTTP") && !value["EnablePilotHTTP"].IsNull())
    {
        if (!value["EnablePilotHTTP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.EnablePilotHTTP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePilotHTTP = value["EnablePilotHTTP"].GetBool();
        m_enablePilotHTTPHasBeenSet = true;
    }

    if (value.HasMember("DisableHTTPRetry") && !value["DisableHTTPRetry"].IsNull())
    {
        if (!value["DisableHTTPRetry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.DisableHTTPRetry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableHTTPRetry = value["DisableHTTPRetry"].GetBool();
        m_disableHTTPRetryHasBeenSet = true;
    }

    if (value.HasMember("SmartDNS") && !value["SmartDNS"].IsNull())
    {
        if (!value["SmartDNS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IstioConfig.SmartDNS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartDNS.Deserialize(value["SmartDNS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartDNSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IstioConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outboundTrafficPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundTrafficPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outboundTrafficPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_tracingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tracing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tracing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disablePolicyChecksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisablePolicyChecks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disablePolicyChecks, allocator);
    }

    if (m_enablePilotHTTPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePilotHTTP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePilotHTTP, allocator);
    }

    if (m_disableHTTPRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHTTPRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHTTPRetry, allocator);
    }

    if (m_smartDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartDNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartDNS.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IstioConfig::GetOutboundTrafficPolicy() const
{
    return m_outboundTrafficPolicy;
}

void IstioConfig::SetOutboundTrafficPolicy(const string& _outboundTrafficPolicy)
{
    m_outboundTrafficPolicy = _outboundTrafficPolicy;
    m_outboundTrafficPolicyHasBeenSet = true;
}

bool IstioConfig::OutboundTrafficPolicyHasBeenSet() const
{
    return m_outboundTrafficPolicyHasBeenSet;
}

TracingConfig IstioConfig::GetTracing() const
{
    return m_tracing;
}

void IstioConfig::SetTracing(const TracingConfig& _tracing)
{
    m_tracing = _tracing;
    m_tracingHasBeenSet = true;
}

bool IstioConfig::TracingHasBeenSet() const
{
    return m_tracingHasBeenSet;
}

bool IstioConfig::GetDisablePolicyChecks() const
{
    return m_disablePolicyChecks;
}

void IstioConfig::SetDisablePolicyChecks(const bool& _disablePolicyChecks)
{
    m_disablePolicyChecks = _disablePolicyChecks;
    m_disablePolicyChecksHasBeenSet = true;
}

bool IstioConfig::DisablePolicyChecksHasBeenSet() const
{
    return m_disablePolicyChecksHasBeenSet;
}

bool IstioConfig::GetEnablePilotHTTP() const
{
    return m_enablePilotHTTP;
}

void IstioConfig::SetEnablePilotHTTP(const bool& _enablePilotHTTP)
{
    m_enablePilotHTTP = _enablePilotHTTP;
    m_enablePilotHTTPHasBeenSet = true;
}

bool IstioConfig::EnablePilotHTTPHasBeenSet() const
{
    return m_enablePilotHTTPHasBeenSet;
}

bool IstioConfig::GetDisableHTTPRetry() const
{
    return m_disableHTTPRetry;
}

void IstioConfig::SetDisableHTTPRetry(const bool& _disableHTTPRetry)
{
    m_disableHTTPRetry = _disableHTTPRetry;
    m_disableHTTPRetryHasBeenSet = true;
}

bool IstioConfig::DisableHTTPRetryHasBeenSet() const
{
    return m_disableHTTPRetryHasBeenSet;
}

SmartDNSConfig IstioConfig::GetSmartDNS() const
{
    return m_smartDNS;
}

void IstioConfig::SetSmartDNS(const SmartDNSConfig& _smartDNS)
{
    m_smartDNS = _smartDNS;
    m_smartDNSHasBeenSet = true;
}

bool IstioConfig::SmartDNSHasBeenSet() const
{
    return m_smartDNSHasBeenSet;
}

