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

#include <tencentcloud/bmvpc/v20180625/model/VpnConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpnConnection::VpnConnection() :
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnConnectionNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_preShareKeyHasBeenSet(false),
    m_vpnProtoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_netStatusHasBeenSet(false),
    m_securityPolicyDatabaseSetHasBeenSet(false),
    m_iKEOptionsSpecificationHasBeenSet(false),
    m_iPSECOptionsSpecificationHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_customerGatewayNameHasBeenSet(false),
    m_destinationCidrHasBeenSet(false),
    m_sourceCidrHasBeenSet(false)
{
}

CoreInternalOutcome VpnConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpnConnectionId") && !value["VpnConnectionId"].IsNull())
    {
        if (!value["VpnConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpnConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnectionId = string(value["VpnConnectionId"].GetString());
        m_vpnConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("VpnConnectionName") && !value["VpnConnectionName"].IsNull())
    {
        if (!value["VpnConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpnConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnectionName = string(value["VpnConnectionName"].GetString());
        m_vpnConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerGatewayId") && !value["CustomerGatewayId"].IsNull())
    {
        if (!value["CustomerGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.CustomerGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerGatewayId = string(value["CustomerGatewayId"].GetString());
        m_customerGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("PreShareKey") && !value["PreShareKey"].IsNull())
    {
        if (!value["PreShareKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.PreShareKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preShareKey = string(value["PreShareKey"].GetString());
        m_preShareKeyHasBeenSet = true;
    }

    if (value.HasMember("VpnProto") && !value["VpnProto"].IsNull())
    {
        if (!value["VpnProto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpnProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnProto = string(value["VpnProto"].GetString());
        m_vpnProtoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("NetStatus") && !value["NetStatus"].IsNull())
    {
        if (!value["NetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.NetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netStatus = string(value["NetStatus"].GetString());
        m_netStatusHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicyDatabaseSet") && !value["SecurityPolicyDatabaseSet"].IsNull())
    {
        if (!value["SecurityPolicyDatabaseSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpnConnection.SecurityPolicyDatabaseSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityPolicyDatabaseSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityPolicyDatabase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityPolicyDatabaseSet.push_back(item);
        }
        m_securityPolicyDatabaseSetHasBeenSet = true;
    }

    if (value.HasMember("IKEOptionsSpecification") && !value["IKEOptionsSpecification"].IsNull())
    {
        if (!value["IKEOptionsSpecification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.IKEOptionsSpecification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iKEOptionsSpecification.Deserialize(value["IKEOptionsSpecification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iKEOptionsSpecificationHasBeenSet = true;
    }

    if (value.HasMember("IPSECOptionsSpecification") && !value["IPSECOptionsSpecification"].IsNull())
    {
        if (!value["IPSECOptionsSpecification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.IPSECOptionsSpecification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPSECOptionsSpecification.Deserialize(value["IPSECOptionsSpecification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPSECOptionsSpecificationHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayName") && !value["VpnGatewayName"].IsNull())
    {
        if (!value["VpnGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.VpnGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayName = string(value["VpnGatewayName"].GetString());
        m_vpnGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("CustomerGatewayName") && !value["CustomerGatewayName"].IsNull())
    {
        if (!value["CustomerGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnection.CustomerGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerGatewayName = string(value["CustomerGatewayName"].GetString());
        m_customerGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidr") && !value["DestinationCidr"].IsNull())
    {
        if (!value["DestinationCidr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpnConnection.DestinationCidr` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationCidr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_destinationCidr.push_back((*itr).GetString());
        }
        m_destinationCidrHasBeenSet = true;
    }

    if (value.HasMember("SourceCidr") && !value["SourceCidr"].IsNull())
    {
        if (!value["SourceCidr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpnConnection.SourceCidr` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceCidr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceCidr.push_back((*itr).GetString());
        }
        m_sourceCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpnConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpnConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_preShareKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreShareKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preShareKey.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnProto.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_netStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyDatabaseSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyDatabaseSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityPolicyDatabaseSet.begin(); itr != m_securityPolicyDatabaseSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iKEOptionsSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IKEOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iKEOptionsSpecification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPSECOptionsSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSECOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPSECOptionsSpecification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationCidr.begin(); itr != m_destinationCidr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceCidr.begin(); itr != m_sourceCidr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VpnConnection::GetVpnConnectionId() const
{
    return m_vpnConnectionId;
}

void VpnConnection::SetVpnConnectionId(const string& _vpnConnectionId)
{
    m_vpnConnectionId = _vpnConnectionId;
    m_vpnConnectionIdHasBeenSet = true;
}

bool VpnConnection::VpnConnectionIdHasBeenSet() const
{
    return m_vpnConnectionIdHasBeenSet;
}

string VpnConnection::GetVpnConnectionName() const
{
    return m_vpnConnectionName;
}

void VpnConnection::SetVpnConnectionName(const string& _vpnConnectionName)
{
    m_vpnConnectionName = _vpnConnectionName;
    m_vpnConnectionNameHasBeenSet = true;
}

bool VpnConnection::VpnConnectionNameHasBeenSet() const
{
    return m_vpnConnectionNameHasBeenSet;
}

string VpnConnection::GetVpcId() const
{
    return m_vpcId;
}

void VpnConnection::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpnConnection::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpnConnection::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void VpnConnection::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool VpnConnection::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string VpnConnection::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void VpnConnection::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool VpnConnection::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

string VpnConnection::GetPreShareKey() const
{
    return m_preShareKey;
}

void VpnConnection::SetPreShareKey(const string& _preShareKey)
{
    m_preShareKey = _preShareKey;
    m_preShareKeyHasBeenSet = true;
}

bool VpnConnection::PreShareKeyHasBeenSet() const
{
    return m_preShareKeyHasBeenSet;
}

string VpnConnection::GetVpnProto() const
{
    return m_vpnProto;
}

void VpnConnection::SetVpnProto(const string& _vpnProto)
{
    m_vpnProto = _vpnProto;
    m_vpnProtoHasBeenSet = true;
}

bool VpnConnection::VpnProtoHasBeenSet() const
{
    return m_vpnProtoHasBeenSet;
}

string VpnConnection::GetCreateTime() const
{
    return m_createTime;
}

void VpnConnection::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpnConnection::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VpnConnection::GetState() const
{
    return m_state;
}

void VpnConnection::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpnConnection::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string VpnConnection::GetNetStatus() const
{
    return m_netStatus;
}

void VpnConnection::SetNetStatus(const string& _netStatus)
{
    m_netStatus = _netStatus;
    m_netStatusHasBeenSet = true;
}

bool VpnConnection::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}

vector<SecurityPolicyDatabase> VpnConnection::GetSecurityPolicyDatabaseSet() const
{
    return m_securityPolicyDatabaseSet;
}

void VpnConnection::SetSecurityPolicyDatabaseSet(const vector<SecurityPolicyDatabase>& _securityPolicyDatabaseSet)
{
    m_securityPolicyDatabaseSet = _securityPolicyDatabaseSet;
    m_securityPolicyDatabaseSetHasBeenSet = true;
}

bool VpnConnection::SecurityPolicyDatabaseSetHasBeenSet() const
{
    return m_securityPolicyDatabaseSetHasBeenSet;
}

IKEOptionsSpecification VpnConnection::GetIKEOptionsSpecification() const
{
    return m_iKEOptionsSpecification;
}

void VpnConnection::SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification)
{
    m_iKEOptionsSpecification = _iKEOptionsSpecification;
    m_iKEOptionsSpecificationHasBeenSet = true;
}

bool VpnConnection::IKEOptionsSpecificationHasBeenSet() const
{
    return m_iKEOptionsSpecificationHasBeenSet;
}

IPSECOptionsSpecification VpnConnection::GetIPSECOptionsSpecification() const
{
    return m_iPSECOptionsSpecification;
}

void VpnConnection::SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification)
{
    m_iPSECOptionsSpecification = _iPSECOptionsSpecification;
    m_iPSECOptionsSpecificationHasBeenSet = true;
}

bool VpnConnection::IPSECOptionsSpecificationHasBeenSet() const
{
    return m_iPSECOptionsSpecificationHasBeenSet;
}

string VpnConnection::GetZone() const
{
    return m_zone;
}

void VpnConnection::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpnConnection::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string VpnConnection::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void VpnConnection::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool VpnConnection::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string VpnConnection::GetVpcName() const
{
    return m_vpcName;
}

void VpnConnection::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpnConnection::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string VpnConnection::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void VpnConnection::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool VpnConnection::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

string VpnConnection::GetCustomerGatewayName() const
{
    return m_customerGatewayName;
}

void VpnConnection::SetCustomerGatewayName(const string& _customerGatewayName)
{
    m_customerGatewayName = _customerGatewayName;
    m_customerGatewayNameHasBeenSet = true;
}

bool VpnConnection::CustomerGatewayNameHasBeenSet() const
{
    return m_customerGatewayNameHasBeenSet;
}

vector<string> VpnConnection::GetDestinationCidr() const
{
    return m_destinationCidr;
}

void VpnConnection::SetDestinationCidr(const vector<string>& _destinationCidr)
{
    m_destinationCidr = _destinationCidr;
    m_destinationCidrHasBeenSet = true;
}

bool VpnConnection::DestinationCidrHasBeenSet() const
{
    return m_destinationCidrHasBeenSet;
}

vector<string> VpnConnection::GetSourceCidr() const
{
    return m_sourceCidr;
}

void VpnConnection::SetSourceCidr(const vector<string>& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool VpnConnection::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

