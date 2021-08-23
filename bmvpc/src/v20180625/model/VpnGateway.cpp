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

#include <tencentcloud/bmvpc/v20180625/model/VpnGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpnGateway::VpnGateway() :
    m_vpnGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpnConnNumHasBeenSet(false)
{
}

CoreInternalOutcome VpnGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayName") && !value["VpnGatewayName"].IsNull())
    {
        if (!value["VpnGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayName = string(value["VpnGatewayName"].GetString());
        m_vpnGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpnConnNum") && !value["VpnConnNum"].IsNull())
    {
        if (!value["VpnConnNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnConnNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnNum = value["VpnConnNum"].GetUint64();
        m_vpnConnNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpnGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
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

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpnConnNum, allocator);
    }

}


string VpnGateway::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void VpnGateway::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool VpnGateway::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string VpnGateway::GetVpcId() const
{
    return m_vpcId;
}

void VpnGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpnGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpnGateway::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void VpnGateway::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool VpnGateway::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

string VpnGateway::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void VpnGateway::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool VpnGateway::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string VpnGateway::GetVpcName() const
{
    return m_vpcName;
}

void VpnGateway::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpnGateway::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

uint64_t VpnGateway::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void VpnGateway::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool VpnGateway::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string VpnGateway::GetState() const
{
    return m_state;
}

void VpnGateway::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpnGateway::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string VpnGateway::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void VpnGateway::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool VpnGateway::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string VpnGateway::GetCreateTime() const
{
    return m_createTime;
}

void VpnGateway::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpnGateway::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VpnGateway::GetZone() const
{
    return m_zone;
}

void VpnGateway::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpnGateway::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t VpnGateway::GetVpnConnNum() const
{
    return m_vpnConnNum;
}

void VpnGateway::SetVpnConnNum(const uint64_t& _vpnConnNum)
{
    m_vpnConnNum = _vpnConnNum;
    m_vpnConnNumHasBeenSet = true;
}

bool VpnGateway::VpnConnNumHasBeenSet() const
{
    return m_vpnConnNumHasBeenSet;
}

