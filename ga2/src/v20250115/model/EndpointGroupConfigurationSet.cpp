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

#include <tencentcloud/ga2/v20250115/model/EndpointGroupConfigurationSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

EndpointGroupConfigurationSet::EndpointGroupConfigurationSet() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_endpointGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_checkSendContextHasBeenSet(false),
    m_checkRecvContextHasBeenSet(false),
    m_checkDomainHasBeenSet(false),
    m_checkPathHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_statusMaskHasBeenSet(false),
    m_endpointGroupTypeHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_portOverridesHasBeenSet(false),
    m_virtualExistForwardingRuleFlagHasBeenSet(false),
    m_originPublicIpsHasBeenSet(false),
    m_ispTypeHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome EndpointGroupConfigurationSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupId") && !value["EndpointGroupId"].IsNull())
    {
        if (!value["EndpointGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.EndpointGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupId = string(value["EndpointGroupId"].GetString());
        m_endpointGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupRegion") && !value["EndpointGroupRegion"].IsNull())
    {
        if (!value["EndpointGroupRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.EndpointGroupRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupRegion = string(value["EndpointGroupRegion"].GetString());
        m_endpointGroupRegionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EndpointConfigurations") && !value["EndpointConfigurations"].IsNull())
    {
        if (!value["EndpointConfigurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.EndpointConfigurations` is not array type"));

        const rapidjson::Value &tmpValue = value["EndpointConfigurations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointConfigurations item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointConfigurations.push_back(item);
        }
        m_endpointConfigurationsHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckInterval") && !value["HealthCheckInterval"].IsNull())
    {
        if (!value["HealthCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.HealthCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckInterval = value["HealthCheckInterval"].GetUint64();
        m_healthCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyThreshold") && !value["UnhealthyThreshold"].IsNull())
    {
        if (!value["UnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.UnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyThreshold = value["UnhealthyThreshold"].GetUint64();
        m_unhealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthyThreshold") && !value["HealthyThreshold"].IsNull())
    {
        if (!value["HealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.HealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyThreshold = value["HealthyThreshold"].GetUint64();
        m_healthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckPort") && !value["CheckPort"].IsNull())
    {
        if (!value["CheckPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkPort = value["CheckPort"].GetUint64();
        m_checkPortHasBeenSet = true;
    }

    if (value.HasMember("ContextType") && !value["ContextType"].IsNull())
    {
        if (!value["ContextType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.ContextType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextType = string(value["ContextType"].GetString());
        m_contextTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckSendContext") && !value["CheckSendContext"].IsNull())
    {
        if (!value["CheckSendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckSendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkSendContext = string(value["CheckSendContext"].GetString());
        m_checkSendContextHasBeenSet = true;
    }

    if (value.HasMember("CheckRecvContext") && !value["CheckRecvContext"].IsNull())
    {
        if (!value["CheckRecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckRecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkRecvContext = string(value["CheckRecvContext"].GetString());
        m_checkRecvContextHasBeenSet = true;
    }

    if (value.HasMember("CheckDomain") && !value["CheckDomain"].IsNull())
    {
        if (!value["CheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkDomain = string(value["CheckDomain"].GetString());
        m_checkDomainHasBeenSet = true;
    }

    if (value.HasMember("CheckPath") && !value["CheckPath"].IsNull())
    {
        if (!value["CheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkPath = string(value["CheckPath"].GetString());
        m_checkPathHasBeenSet = true;
    }

    if (value.HasMember("CheckMethod") && !value["CheckMethod"].IsNull())
    {
        if (!value["CheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMethod = string(value["CheckMethod"].GetString());
        m_checkMethodHasBeenSet = true;
    }

    if (value.HasMember("StatusMask") && !value["StatusMask"].IsNull())
    {
        if (!value["StatusMask"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.StatusMask` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusMask"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusMask.push_back((*itr).GetString());
        }
        m_statusMaskHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupType") && !value["EndpointGroupType"].IsNull())
    {
        if (!value["EndpointGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.EndpointGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupType = string(value["EndpointGroupType"].GetString());
        m_endpointGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.ForwardProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = string(value["ForwardProtocol"].GetString());
        m_forwardProtocolHasBeenSet = true;
    }

    if (value.HasMember("PortOverrides") && !value["PortOverrides"].IsNull())
    {
        if (!value["PortOverrides"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.PortOverrides` is not array type"));

        const rapidjson::Value &tmpValue = value["PortOverrides"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortOverride item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portOverrides.push_back(item);
        }
        m_portOverridesHasBeenSet = true;
    }

    if (value.HasMember("VirtualExistForwardingRuleFlag") && !value["VirtualExistForwardingRuleFlag"].IsNull())
    {
        if (!value["VirtualExistForwardingRuleFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.VirtualExistForwardingRuleFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualExistForwardingRuleFlag = value["VirtualExistForwardingRuleFlag"].GetBool();
        m_virtualExistForwardingRuleFlagHasBeenSet = true;
    }

    if (value.HasMember("OriginPublicIps") && !value["OriginPublicIps"].IsNull())
    {
        if (!value["OriginPublicIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.OriginPublicIps` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginPublicIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originPublicIps.push_back((*itr).GetString());
        }
        m_originPublicIpsHasBeenSet = true;
    }

    if (value.HasMember("IspType") && !value["IspType"].IsNull())
    {
        if (!value["IspType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.IspType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispType = string(value["IspType"].GetString());
        m_ispTypeHasBeenSet = true;
    }

    if (value.HasMember("CipherPolicyId") && !value["CipherPolicyId"].IsNull())
    {
        if (!value["CipherPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfigurationSet.CipherPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherPolicyId = string(value["CipherPolicyId"].GetString());
        m_cipherPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointGroupConfigurationSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointGroupRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointConfigurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointConfigurations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointConfigurations.begin(); itr != m_endpointConfigurations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_unhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthyThreshold, allocator);
    }

    if (m_healthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyThreshold, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkPort, allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkSendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSendContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkSendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_checkRecvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRecvContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkRecvContext.c_str(), allocator).Move(), allocator);
    }

    if (m_checkDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkPath.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusMask.begin(); itr != m_statusMask.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_endpointGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortOverrides";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portOverrides.begin(); itr != m_portOverrides.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_virtualExistForwardingRuleFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualExistForwardingRuleFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualExistForwardingRuleFlag, allocator);
    }

    if (m_originPublicIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPublicIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originPublicIps.begin(); itr != m_originPublicIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispType.c_str(), allocator).Move(), allocator);
    }

    if (m_cipherPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherPolicyId.c_str(), allocator).Move(), allocator);
    }

}


string EndpointGroupConfigurationSet::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void EndpointGroupConfigurationSet::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string EndpointGroupConfigurationSet::GetListenerId() const
{
    return m_listenerId;
}

void EndpointGroupConfigurationSet::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string EndpointGroupConfigurationSet::GetEndpointGroupId() const
{
    return m_endpointGroupId;
}

void EndpointGroupConfigurationSet::SetEndpointGroupId(const string& _endpointGroupId)
{
    m_endpointGroupId = _endpointGroupId;
    m_endpointGroupIdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::EndpointGroupIdHasBeenSet() const
{
    return m_endpointGroupIdHasBeenSet;
}

string EndpointGroupConfigurationSet::GetName() const
{
    return m_name;
}

void EndpointGroupConfigurationSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EndpointGroupConfigurationSet::GetEndpointGroupRegion() const
{
    return m_endpointGroupRegion;
}

void EndpointGroupConfigurationSet::SetEndpointGroupRegion(const string& _endpointGroupRegion)
{
    m_endpointGroupRegion = _endpointGroupRegion;
    m_endpointGroupRegionHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::EndpointGroupRegionHasBeenSet() const
{
    return m_endpointGroupRegionHasBeenSet;
}

string EndpointGroupConfigurationSet::GetDescription() const
{
    return m_description;
}

void EndpointGroupConfigurationSet::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<EndpointConfigurations> EndpointGroupConfigurationSet::GetEndpointConfigurations() const
{
    return m_endpointConfigurations;
}

void EndpointGroupConfigurationSet::SetEndpointConfigurations(const vector<EndpointConfigurations>& _endpointConfigurations)
{
    m_endpointConfigurations = _endpointConfigurations;
    m_endpointConfigurationsHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::EndpointConfigurationsHasBeenSet() const
{
    return m_endpointConfigurationsHasBeenSet;
}

bool EndpointGroupConfigurationSet::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void EndpointGroupConfigurationSet::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

uint64_t EndpointGroupConfigurationSet::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void EndpointGroupConfigurationSet::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t EndpointGroupConfigurationSet::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void EndpointGroupConfigurationSet::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

uint64_t EndpointGroupConfigurationSet::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void EndpointGroupConfigurationSet::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

uint64_t EndpointGroupConfigurationSet::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void EndpointGroupConfigurationSet::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckType() const
{
    return m_checkType;
}

void EndpointGroupConfigurationSet::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

uint64_t EndpointGroupConfigurationSet::GetCheckPort() const
{
    return m_checkPort;
}

void EndpointGroupConfigurationSet::SetCheckPort(const uint64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string EndpointGroupConfigurationSet::GetContextType() const
{
    return m_contextType;
}

void EndpointGroupConfigurationSet::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckSendContext() const
{
    return m_checkSendContext;
}

void EndpointGroupConfigurationSet::SetCheckSendContext(const string& _checkSendContext)
{
    m_checkSendContext = _checkSendContext;
    m_checkSendContextHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckSendContextHasBeenSet() const
{
    return m_checkSendContextHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckRecvContext() const
{
    return m_checkRecvContext;
}

void EndpointGroupConfigurationSet::SetCheckRecvContext(const string& _checkRecvContext)
{
    m_checkRecvContext = _checkRecvContext;
    m_checkRecvContextHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckRecvContextHasBeenSet() const
{
    return m_checkRecvContextHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckDomain() const
{
    return m_checkDomain;
}

void EndpointGroupConfigurationSet::SetCheckDomain(const string& _checkDomain)
{
    m_checkDomain = _checkDomain;
    m_checkDomainHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckDomainHasBeenSet() const
{
    return m_checkDomainHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckPath() const
{
    return m_checkPath;
}

void EndpointGroupConfigurationSet::SetCheckPath(const string& _checkPath)
{
    m_checkPath = _checkPath;
    m_checkPathHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckPathHasBeenSet() const
{
    return m_checkPathHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCheckMethod() const
{
    return m_checkMethod;
}

void EndpointGroupConfigurationSet::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

vector<string> EndpointGroupConfigurationSet::GetStatusMask() const
{
    return m_statusMask;
}

void EndpointGroupConfigurationSet::SetStatusMask(const vector<string>& _statusMask)
{
    m_statusMask = _statusMask;
    m_statusMaskHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::StatusMaskHasBeenSet() const
{
    return m_statusMaskHasBeenSet;
}

string EndpointGroupConfigurationSet::GetEndpointGroupType() const
{
    return m_endpointGroupType;
}

void EndpointGroupConfigurationSet::SetEndpointGroupType(const string& _endpointGroupType)
{
    m_endpointGroupType = _endpointGroupType;
    m_endpointGroupTypeHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::EndpointGroupTypeHasBeenSet() const
{
    return m_endpointGroupTypeHasBeenSet;
}

string EndpointGroupConfigurationSet::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void EndpointGroupConfigurationSet::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

vector<PortOverride> EndpointGroupConfigurationSet::GetPortOverrides() const
{
    return m_portOverrides;
}

void EndpointGroupConfigurationSet::SetPortOverrides(const vector<PortOverride>& _portOverrides)
{
    m_portOverrides = _portOverrides;
    m_portOverridesHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::PortOverridesHasBeenSet() const
{
    return m_portOverridesHasBeenSet;
}

bool EndpointGroupConfigurationSet::GetVirtualExistForwardingRuleFlag() const
{
    return m_virtualExistForwardingRuleFlag;
}

void EndpointGroupConfigurationSet::SetVirtualExistForwardingRuleFlag(const bool& _virtualExistForwardingRuleFlag)
{
    m_virtualExistForwardingRuleFlag = _virtualExistForwardingRuleFlag;
    m_virtualExistForwardingRuleFlagHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::VirtualExistForwardingRuleFlagHasBeenSet() const
{
    return m_virtualExistForwardingRuleFlagHasBeenSet;
}

vector<string> EndpointGroupConfigurationSet::GetOriginPublicIps() const
{
    return m_originPublicIps;
}

void EndpointGroupConfigurationSet::SetOriginPublicIps(const vector<string>& _originPublicIps)
{
    m_originPublicIps = _originPublicIps;
    m_originPublicIpsHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::OriginPublicIpsHasBeenSet() const
{
    return m_originPublicIpsHasBeenSet;
}

string EndpointGroupConfigurationSet::GetIspType() const
{
    return m_ispType;
}

void EndpointGroupConfigurationSet::SetIspType(const string& _ispType)
{
    m_ispType = _ispType;
    m_ispTypeHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::IspTypeHasBeenSet() const
{
    return m_ispTypeHasBeenSet;
}

string EndpointGroupConfigurationSet::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void EndpointGroupConfigurationSet::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool EndpointGroupConfigurationSet::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}

