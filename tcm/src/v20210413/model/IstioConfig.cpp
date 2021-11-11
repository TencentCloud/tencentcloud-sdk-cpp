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
    m_tracingHasBeenSet(false)
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

