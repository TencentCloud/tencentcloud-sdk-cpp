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

#include <tencentcloud/vpc/v20170312/model/DirectConnectGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DirectConnectGateway::DirectConnectGateway() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkInstanceIdHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_directConnectGatewayIpHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_ccnRouteTypeHasBeenSet(false),
    m_enableBGPHasBeenSet(false),
    m_enableBGPCommunityHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectGateway::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayName") && !value["DirectConnectGatewayName"].IsNull())
    {
        if (!value["DirectConnectGatewayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.DirectConnectGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayName = string(value["DirectConnectGatewayName"].GetString());
        m_directConnectGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkInstanceId") && !value["NetworkInstanceId"].IsNull())
    {
        if (!value["NetworkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.NetworkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceId = string(value["NetworkInstanceId"].GetString());
        m_networkInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayIp") && !value["DirectConnectGatewayIp"].IsNull())
    {
        if (!value["DirectConnectGatewayIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.DirectConnectGatewayIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayIp = string(value["DirectConnectGatewayIp"].GetString());
        m_directConnectGatewayIpHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CcnRouteType") && !value["CcnRouteType"].IsNull())
    {
        if (!value["CcnRouteType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.CcnRouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnRouteType = string(value["CcnRouteType"].GetString());
        m_ccnRouteTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableBGP") && !value["EnableBGP"].IsNull())
    {
        if (!value["EnableBGP"].IsBool())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.EnableBGP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGP = value["EnableBGP"].GetBool();
        m_enableBGPHasBeenSet = true;
    }

    if (value.HasMember("EnableBGPCommunity") && !value["EnableBGPCommunity"].IsNull())
    {
        if (!value["EnableBGPCommunity"].IsBool())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGateway.EnableBGPCommunity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGPCommunity = value["EnableBGPCommunity"].GetBool();
        m_enableBGPCommunityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectGateway::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_directConnectGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectGatewayIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRouteTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnRouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ccnRouteType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBGPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableBGP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBGP, allocator);
    }

    if (m_enableBGPCommunityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableBGPCommunity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBGPCommunity, allocator);
    }

}


string DirectConnectGateway::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectGateway::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectGateway::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void DirectConnectGateway::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string DirectConnectGateway::GetVpcId() const
{
    return m_vpcId;
}

void DirectConnectGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DirectConnectGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DirectConnectGateway::GetNetworkType() const
{
    return m_networkType;
}

void DirectConnectGateway::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DirectConnectGateway::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DirectConnectGateway::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void DirectConnectGateway::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool DirectConnectGateway::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string DirectConnectGateway::GetGatewayType() const
{
    return m_gatewayType;
}

void DirectConnectGateway::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool DirectConnectGateway::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string DirectConnectGateway::GetCreateTime() const
{
    return m_createTime;
}

void DirectConnectGateway::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DirectConnectGateway::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DirectConnectGateway::GetDirectConnectGatewayIp() const
{
    return m_directConnectGatewayIp;
}

void DirectConnectGateway::SetDirectConnectGatewayIp(const string& _directConnectGatewayIp)
{
    m_directConnectGatewayIp = _directConnectGatewayIp;
    m_directConnectGatewayIpHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayIpHasBeenSet() const
{
    return m_directConnectGatewayIpHasBeenSet;
}

string DirectConnectGateway::GetCcnId() const
{
    return m_ccnId;
}

void DirectConnectGateway::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DirectConnectGateway::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string DirectConnectGateway::GetCcnRouteType() const
{
    return m_ccnRouteType;
}

void DirectConnectGateway::SetCcnRouteType(const string& _ccnRouteType)
{
    m_ccnRouteType = _ccnRouteType;
    m_ccnRouteTypeHasBeenSet = true;
}

bool DirectConnectGateway::CcnRouteTypeHasBeenSet() const
{
    return m_ccnRouteTypeHasBeenSet;
}

bool DirectConnectGateway::GetEnableBGP() const
{
    return m_enableBGP;
}

void DirectConnectGateway::SetEnableBGP(const bool& _enableBGP)
{
    m_enableBGP = _enableBGP;
    m_enableBGPHasBeenSet = true;
}

bool DirectConnectGateway::EnableBGPHasBeenSet() const
{
    return m_enableBGPHasBeenSet;
}

bool DirectConnectGateway::GetEnableBGPCommunity() const
{
    return m_enableBGPCommunity;
}

void DirectConnectGateway::SetEnableBGPCommunity(const bool& _enableBGPCommunity)
{
    m_enableBGPCommunity = _enableBGPCommunity;
    m_enableBGPCommunityHasBeenSet = true;
}

bool DirectConnectGateway::EnableBGPCommunityHasBeenSet() const
{
    return m_enableBGPCommunityHasBeenSet;
}

