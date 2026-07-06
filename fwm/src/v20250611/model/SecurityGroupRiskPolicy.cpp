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

#include <tencentcloud/fwm/v20250611/model/SecurityGroupRiskPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

SecurityGroupRiskPolicy::SecurityGroupRiskPolicy() :
    m_policyIndexHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceTemplateHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_addressTemplateHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupRiskPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyIndex") && !value["PolicyIndex"].IsNull())
    {
        if (!value["PolicyIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.PolicyIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyIndex = value["PolicyIndex"].GetInt64();
        m_policyIndexHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplate") && !value["ServiceTemplate"].IsNull())
    {
        if (!value["ServiceTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.ServiceTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceTemplate.Deserialize(value["ServiceTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceTemplateHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplate") && !value["AddressTemplate"].IsNull())
    {
        if (!value["AddressTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.AddressTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addressTemplate.Deserialize(value["AddressTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressTemplateHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRiskPolicy.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupRiskPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyIndex, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


int64_t SecurityGroupRiskPolicy::GetPolicyIndex() const
{
    return m_policyIndex;
}

void SecurityGroupRiskPolicy::SetPolicyIndex(const int64_t& _policyIndex)
{
    m_policyIndex = _policyIndex;
    m_policyIndexHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::PolicyIndexHasBeenSet() const
{
    return m_policyIndexHasBeenSet;
}

string SecurityGroupRiskPolicy::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupRiskPolicy::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupRiskPolicy::GetPort() const
{
    return m_port;
}

void SecurityGroupRiskPolicy::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

ServiceTemplateSpecification SecurityGroupRiskPolicy::GetServiceTemplate() const
{
    return m_serviceTemplate;
}

void SecurityGroupRiskPolicy::SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate)
{
    m_serviceTemplate = _serviceTemplate;
    m_serviceTemplateHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::ServiceTemplateHasBeenSet() const
{
    return m_serviceTemplateHasBeenSet;
}

string SecurityGroupRiskPolicy::GetCidrBlock() const
{
    return m_cidrBlock;
}

void SecurityGroupRiskPolicy::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string SecurityGroupRiskPolicy::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void SecurityGroupRiskPolicy::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

string SecurityGroupRiskPolicy::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroupRiskPolicy::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

AddressTemplateSpecification SecurityGroupRiskPolicy::GetAddressTemplate() const
{
    return m_addressTemplate;
}

void SecurityGroupRiskPolicy::SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate)
{
    m_addressTemplate = _addressTemplate;
    m_addressTemplateHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::AddressTemplateHasBeenSet() const
{
    return m_addressTemplateHasBeenSet;
}

string SecurityGroupRiskPolicy::GetAction() const
{
    return m_action;
}

void SecurityGroupRiskPolicy::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityGroupRiskPolicy::GetPolicyDescription() const
{
    return m_policyDescription;
}

void SecurityGroupRiskPolicy::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

string SecurityGroupRiskPolicy::GetVersion() const
{
    return m_version;
}

void SecurityGroupRiskPolicy::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SecurityGroupRiskPolicy::GetDirection() const
{
    return m_direction;
}

void SecurityGroupRiskPolicy::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string SecurityGroupRiskPolicy::GetModifyTime() const
{
    return m_modifyTime;
}

void SecurityGroupRiskPolicy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string SecurityGroupRiskPolicy::GetRegion() const
{
    return m_region;
}

void SecurityGroupRiskPolicy::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SecurityGroupRiskPolicy::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

