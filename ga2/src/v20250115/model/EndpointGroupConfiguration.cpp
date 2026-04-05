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

#include <tencentcloud/ga2/v20250115/model/EndpointGroupConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

EndpointGroupConfiguration::EndpointGroupConfiguration() :
    m_nameHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_checkSendContextHasBeenSet(false),
    m_checkRecvContextHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_checkDomainHasBeenSet(false),
    m_checkPathHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_statusMaskHasBeenSet(false),
    m_portOverridesHasBeenSet(false),
    m_ispTypeHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome EndpointGroupConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupRegion") && !value["EndpointGroupRegion"].IsNull())
    {
        if (!value["EndpointGroupRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.EndpointGroupRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupRegion = string(value["EndpointGroupRegion"].GetString());
        m_endpointGroupRegionHasBeenSet = true;
    }

    if (value.HasMember("EndpointConfigurations") && !value["EndpointConfigurations"].IsNull())
    {
        if (!value["EndpointConfigurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.EndpointConfigurations` is not array type"));

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

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CheckPort") && !value["CheckPort"].IsNull())
    {
        if (!value["CheckPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkPort = string(value["CheckPort"].GetString());
        m_checkPortHasBeenSet = true;
    }

    if (value.HasMember("ContextType") && !value["ContextType"].IsNull())
    {
        if (!value["ContextType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.ContextType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextType = string(value["ContextType"].GetString());
        m_contextTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckSendContext") && !value["CheckSendContext"].IsNull())
    {
        if (!value["CheckSendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckSendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkSendContext = string(value["CheckSendContext"].GetString());
        m_checkSendContextHasBeenSet = true;
    }

    if (value.HasMember("CheckRecvContext") && !value["CheckRecvContext"].IsNull())
    {
        if (!value["CheckRecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckRecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkRecvContext = string(value["CheckRecvContext"].GetString());
        m_checkRecvContextHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckInterval") && !value["HealthCheckInterval"].IsNull())
    {
        if (!value["HealthCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.HealthCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckInterval = value["HealthCheckInterval"].GetUint64();
        m_healthCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyThreshold") && !value["UnhealthyThreshold"].IsNull())
    {
        if (!value["UnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.UnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyThreshold = value["UnhealthyThreshold"].GetUint64();
        m_unhealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthyThreshold") && !value["HealthyThreshold"].IsNull())
    {
        if (!value["HealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.HealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyThreshold = value["HealthyThreshold"].GetUint64();
        m_healthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.ForwardProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = string(value["ForwardProtocol"].GetString());
        m_forwardProtocolHasBeenSet = true;
    }

    if (value.HasMember("CheckDomain") && !value["CheckDomain"].IsNull())
    {
        if (!value["CheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkDomain = string(value["CheckDomain"].GetString());
        m_checkDomainHasBeenSet = true;
    }

    if (value.HasMember("CheckPath") && !value["CheckPath"].IsNull())
    {
        if (!value["CheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkPath = string(value["CheckPath"].GetString());
        m_checkPathHasBeenSet = true;
    }

    if (value.HasMember("CheckMethod") && !value["CheckMethod"].IsNull())
    {
        if (!value["CheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMethod = string(value["CheckMethod"].GetString());
        m_checkMethodHasBeenSet = true;
    }

    if (value.HasMember("StatusMask") && !value["StatusMask"].IsNull())
    {
        if (!value["StatusMask"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.StatusMask` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusMask"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusMask.push_back((*itr).GetString());
        }
        m_statusMaskHasBeenSet = true;
    }

    if (value.HasMember("PortOverrides") && !value["PortOverrides"].IsNull())
    {
        if (!value["PortOverrides"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.PortOverrides` is not array type"));

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

    if (value.HasMember("IspType") && !value["IspType"].IsNull())
    {
        if (!value["IspType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.IspType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispType = string(value["IspType"].GetString());
        m_ispTypeHasBeenSet = true;
    }

    if (value.HasMember("CipherPolicyId") && !value["CipherPolicyId"].IsNull())
    {
        if (!value["CipherPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointGroupConfiguration.CipherPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherPolicyId = string(value["CipherPolicyId"].GetString());
        m_cipherPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointGroupConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkPort.c_str(), allocator).Move(), allocator);
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

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
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


string EndpointGroupConfiguration::GetName() const
{
    return m_name;
}

void EndpointGroupConfiguration::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EndpointGroupConfiguration::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EndpointGroupConfiguration::GetEndpointGroupRegion() const
{
    return m_endpointGroupRegion;
}

void EndpointGroupConfiguration::SetEndpointGroupRegion(const string& _endpointGroupRegion)
{
    m_endpointGroupRegion = _endpointGroupRegion;
    m_endpointGroupRegionHasBeenSet = true;
}

bool EndpointGroupConfiguration::EndpointGroupRegionHasBeenSet() const
{
    return m_endpointGroupRegionHasBeenSet;
}

vector<EndpointConfigurations> EndpointGroupConfiguration::GetEndpointConfigurations() const
{
    return m_endpointConfigurations;
}

void EndpointGroupConfiguration::SetEndpointConfigurations(const vector<EndpointConfigurations>& _endpointConfigurations)
{
    m_endpointConfigurations = _endpointConfigurations;
    m_endpointConfigurationsHasBeenSet = true;
}

bool EndpointGroupConfiguration::EndpointConfigurationsHasBeenSet() const
{
    return m_endpointConfigurationsHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckType() const
{
    return m_checkType;
}

void EndpointGroupConfiguration::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string EndpointGroupConfiguration::GetDescription() const
{
    return m_description;
}

void EndpointGroupConfiguration::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EndpointGroupConfiguration::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckPort() const
{
    return m_checkPort;
}

void EndpointGroupConfiguration::SetCheckPort(const string& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string EndpointGroupConfiguration::GetContextType() const
{
    return m_contextType;
}

void EndpointGroupConfiguration::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool EndpointGroupConfiguration::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckSendContext() const
{
    return m_checkSendContext;
}

void EndpointGroupConfiguration::SetCheckSendContext(const string& _checkSendContext)
{
    m_checkSendContext = _checkSendContext;
    m_checkSendContextHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckSendContextHasBeenSet() const
{
    return m_checkSendContextHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckRecvContext() const
{
    return m_checkRecvContext;
}

void EndpointGroupConfiguration::SetCheckRecvContext(const string& _checkRecvContext)
{
    m_checkRecvContext = _checkRecvContext;
    m_checkRecvContextHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckRecvContextHasBeenSet() const
{
    return m_checkRecvContextHasBeenSet;
}

bool EndpointGroupConfiguration::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void EndpointGroupConfiguration::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool EndpointGroupConfiguration::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

uint64_t EndpointGroupConfiguration::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void EndpointGroupConfiguration::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool EndpointGroupConfiguration::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t EndpointGroupConfiguration::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void EndpointGroupConfiguration::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool EndpointGroupConfiguration::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

uint64_t EndpointGroupConfiguration::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void EndpointGroupConfiguration::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool EndpointGroupConfiguration::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

uint64_t EndpointGroupConfiguration::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void EndpointGroupConfiguration::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool EndpointGroupConfiguration::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

string EndpointGroupConfiguration::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void EndpointGroupConfiguration::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool EndpointGroupConfiguration::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckDomain() const
{
    return m_checkDomain;
}

void EndpointGroupConfiguration::SetCheckDomain(const string& _checkDomain)
{
    m_checkDomain = _checkDomain;
    m_checkDomainHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckDomainHasBeenSet() const
{
    return m_checkDomainHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckPath() const
{
    return m_checkPath;
}

void EndpointGroupConfiguration::SetCheckPath(const string& _checkPath)
{
    m_checkPath = _checkPath;
    m_checkPathHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckPathHasBeenSet() const
{
    return m_checkPathHasBeenSet;
}

string EndpointGroupConfiguration::GetCheckMethod() const
{
    return m_checkMethod;
}

void EndpointGroupConfiguration::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool EndpointGroupConfiguration::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

vector<string> EndpointGroupConfiguration::GetStatusMask() const
{
    return m_statusMask;
}

void EndpointGroupConfiguration::SetStatusMask(const vector<string>& _statusMask)
{
    m_statusMask = _statusMask;
    m_statusMaskHasBeenSet = true;
}

bool EndpointGroupConfiguration::StatusMaskHasBeenSet() const
{
    return m_statusMaskHasBeenSet;
}

vector<PortOverride> EndpointGroupConfiguration::GetPortOverrides() const
{
    return m_portOverrides;
}

void EndpointGroupConfiguration::SetPortOverrides(const vector<PortOverride>& _portOverrides)
{
    m_portOverrides = _portOverrides;
    m_portOverridesHasBeenSet = true;
}

bool EndpointGroupConfiguration::PortOverridesHasBeenSet() const
{
    return m_portOverridesHasBeenSet;
}

string EndpointGroupConfiguration::GetIspType() const
{
    return m_ispType;
}

void EndpointGroupConfiguration::SetIspType(const string& _ispType)
{
    m_ispType = _ispType;
    m_ispTypeHasBeenSet = true;
}

bool EndpointGroupConfiguration::IspTypeHasBeenSet() const
{
    return m_ispTypeHasBeenSet;
}

string EndpointGroupConfiguration::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void EndpointGroupConfiguration::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool EndpointGroupConfiguration::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}

