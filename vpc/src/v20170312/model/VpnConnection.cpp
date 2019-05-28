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

#include <tencentcloud/vpc/v20170312/model/VpnConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

VpnConnection::VpnConnection() :
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnConnectionNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_preShareKeyHasBeenSet(false),
    m_vpnProtoHasBeenSet(false),
    m_encryptProtoHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_netStatusHasBeenSet(false),
    m_securityPolicyDatabaseSetHasBeenSet(false),
    m_iKEOptionsSpecificationHasBeenSet(false),
    m_iPSECOptionsSpecificationHasBeenSet(false)
{
}

CoreInternalOutcome VpnConnection::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpnConnectionId") && !value["VpnConnectionId"].IsNull())
    {
        if (!value["VpnConnectionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.VpnConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnectionId = string(value["VpnConnectionId"].GetString());
        m_vpnConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("VpnConnectionName") && !value["VpnConnectionName"].IsNull())
    {
        if (!value["VpnConnectionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.VpnConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnectionName = string(value["VpnConnectionName"].GetString());
        m_vpnConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerGatewayId") && !value["CustomerGatewayId"].IsNull())
    {
        if (!value["CustomerGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.CustomerGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerGatewayId = string(value["CustomerGatewayId"].GetString());
        m_customerGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("PreShareKey") && !value["PreShareKey"].IsNull())
    {
        if (!value["PreShareKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.PreShareKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preShareKey = string(value["PreShareKey"].GetString());
        m_preShareKeyHasBeenSet = true;
    }

    if (value.HasMember("VpnProto") && !value["VpnProto"].IsNull())
    {
        if (!value["VpnProto"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.VpnProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnProto = string(value["VpnProto"].GetString());
        m_vpnProtoHasBeenSet = true;
    }

    if (value.HasMember("EncryptProto") && !value["EncryptProto"].IsNull())
    {
        if (!value["EncryptProto"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.EncryptProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptProto = string(value["EncryptProto"].GetString());
        m_encryptProtoHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("NetStatus") && !value["NetStatus"].IsNull())
    {
        if (!value["NetStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnConnection.NetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netStatus = string(value["NetStatus"].GetString());
        m_netStatusHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicyDatabaseSet") && !value["SecurityPolicyDatabaseSet"].IsNull())
    {
        if (!value["SecurityPolicyDatabaseSet"].IsArray())
            return CoreInternalOutcome(Error("response `VpnConnection.SecurityPolicyDatabaseSet` is not array type"));

        const Value &tmpValue = value["SecurityPolicyDatabaseSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `VpnConnection.IKEOptionsSpecification` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `VpnConnection.IPSECOptionsSpecification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPSECOptionsSpecification.Deserialize(value["IPSECOptionsSpecification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPSECOptionsSpecificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpnConnection::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpnConnectionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnectionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_preShareKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreShareKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_preShareKey.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnProtoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnProto.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptProtoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EncryptProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_encryptProto.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_netStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_netStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyDatabaseSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityPolicyDatabaseSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityPolicyDatabaseSet.begin(); itr != m_securityPolicyDatabaseSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iKEOptionsSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IKEOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_iKEOptionsSpecification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPSECOptionsSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IPSECOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_iPSECOptionsSpecification.ToJsonObject(value[key.c_str()], allocator);
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

string VpnConnection::GetEncryptProto() const
{
    return m_encryptProto;
}

void VpnConnection::SetEncryptProto(const string& _encryptProto)
{
    m_encryptProto = _encryptProto;
    m_encryptProtoHasBeenSet = true;
}

bool VpnConnection::EncryptProtoHasBeenSet() const
{
    return m_encryptProtoHasBeenSet;
}

string VpnConnection::GetRouteType() const
{
    return m_routeType;
}

void VpnConnection::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool VpnConnection::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

string VpnConnection::GetCreatedTime() const
{
    return m_createdTime;
}

void VpnConnection::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpnConnection::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
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

