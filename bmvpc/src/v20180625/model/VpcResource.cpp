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

#include <tencentcloud/bmvpc/v20180625/model/VpcResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpcResource::VpcResource() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_subnetNumHasBeenSet(false),
    m_natNumHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_monitorFlagHasBeenSet(false),
    m_cpmNumHasBeenSet(false),
    m_leaveIpNumHasBeenSet(false),
    m_lbNumHasBeenSet(false),
    m_trafficMirrorNumHasBeenSet(false),
    m_eipNumHasBeenSet(false),
    m_plgwNumHasBeenSet(false),
    m_plvpNumHasBeenSet(false),
    m_sslVpnGwNumHasBeenSet(false),
    m_vpcPeerNumHasBeenSet(false),
    m_ipsecVpnGwNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isOldHasBeenSet(false),
    m_ccnServiceNumHasBeenSet(false),
    m_vpcPeerLimitToAllRegionHasBeenSet(false),
    m_vpcPeerLimitToSameRegionHasBeenSet(false),
    m_intVpcIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetNum") && !value["SubnetNum"].IsNull())
    {
        if (!value["SubnetNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.SubnetNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetNum = value["SubnetNum"].GetUint64();
        m_subnetNumHasBeenSet = true;
    }

    if (value.HasMember("NatNum") && !value["NatNum"].IsNull())
    {
        if (!value["NatNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.NatNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_natNum = value["NatNum"].GetUint64();
        m_natNumHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("MonitorFlag") && !value["MonitorFlag"].IsNull())
    {
        if (!value["MonitorFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.MonitorFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_monitorFlag = value["MonitorFlag"].GetBool();
        m_monitorFlagHasBeenSet = true;
    }

    if (value.HasMember("CpmNum") && !value["CpmNum"].IsNull())
    {
        if (!value["CpmNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.CpmNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmNum = value["CpmNum"].GetUint64();
        m_cpmNumHasBeenSet = true;
    }

    if (value.HasMember("LeaveIpNum") && !value["LeaveIpNum"].IsNull())
    {
        if (!value["LeaveIpNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.LeaveIpNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leaveIpNum = value["LeaveIpNum"].GetUint64();
        m_leaveIpNumHasBeenSet = true;
    }

    if (value.HasMember("LbNum") && !value["LbNum"].IsNull())
    {
        if (!value["LbNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.LbNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbNum = value["LbNum"].GetUint64();
        m_lbNumHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorNum") && !value["TrafficMirrorNum"].IsNull())
    {
        if (!value["TrafficMirrorNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.TrafficMirrorNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorNum = value["TrafficMirrorNum"].GetUint64();
        m_trafficMirrorNumHasBeenSet = true;
    }

    if (value.HasMember("EipNum") && !value["EipNum"].IsNull())
    {
        if (!value["EipNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.EipNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eipNum = value["EipNum"].GetUint64();
        m_eipNumHasBeenSet = true;
    }

    if (value.HasMember("PlgwNum") && !value["PlgwNum"].IsNull())
    {
        if (!value["PlgwNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.PlgwNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_plgwNum = value["PlgwNum"].GetUint64();
        m_plgwNumHasBeenSet = true;
    }

    if (value.HasMember("PlvpNum") && !value["PlvpNum"].IsNull())
    {
        if (!value["PlvpNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.PlvpNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_plvpNum = value["PlvpNum"].GetUint64();
        m_plvpNumHasBeenSet = true;
    }

    if (value.HasMember("SslVpnGwNum") && !value["SslVpnGwNum"].IsNull())
    {
        if (!value["SslVpnGwNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.SslVpnGwNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnGwNum = value["SslVpnGwNum"].GetUint64();
        m_sslVpnGwNumHasBeenSet = true;
    }

    if (value.HasMember("VpcPeerNum") && !value["VpcPeerNum"].IsNull())
    {
        if (!value["VpcPeerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.VpcPeerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPeerNum = value["VpcPeerNum"].GetUint64();
        m_vpcPeerNumHasBeenSet = true;
    }

    if (value.HasMember("IpsecVpnGwNum") && !value["IpsecVpnGwNum"].IsNull())
    {
        if (!value["IpsecVpnGwNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.IpsecVpnGwNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipsecVpnGwNum = value["IpsecVpnGwNum"].GetUint64();
        m_ipsecVpnGwNumHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsOld") && !value["IsOld"].IsNull())
    {
        if (!value["IsOld"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.IsOld` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOld = value["IsOld"].GetBool();
        m_isOldHasBeenSet = true;
    }

    if (value.HasMember("CcnServiceNum") && !value["CcnServiceNum"].IsNull())
    {
        if (!value["CcnServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.CcnServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ccnServiceNum = value["CcnServiceNum"].GetUint64();
        m_ccnServiceNumHasBeenSet = true;
    }

    if (value.HasMember("VpcPeerLimitToAllRegion") && !value["VpcPeerLimitToAllRegion"].IsNull())
    {
        if (!value["VpcPeerLimitToAllRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.VpcPeerLimitToAllRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPeerLimitToAllRegion = value["VpcPeerLimitToAllRegion"].GetUint64();
        m_vpcPeerLimitToAllRegionHasBeenSet = true;
    }

    if (value.HasMember("VpcPeerLimitToSameRegion") && !value["VpcPeerLimitToSameRegion"].IsNull())
    {
        if (!value["VpcPeerLimitToSameRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.VpcPeerLimitToSameRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPeerLimitToSameRegion = value["VpcPeerLimitToSameRegion"].GetUint64();
        m_vpcPeerLimitToSameRegionHasBeenSet = true;
    }

    if (value.HasMember("IntVpcId") && !value["IntVpcId"].IsNull())
    {
        if (!value["IntVpcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcResource.IntVpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intVpcId = value["IntVpcId"].GetUint64();
        m_intVpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetNum, allocator);
    }

    if (m_natNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natNum, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorFlag, allocator);
    }

    if (m_cpmNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmNum, allocator);
    }

    if (m_leaveIpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeaveIpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leaveIpNum, allocator);
    }

    if (m_lbNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbNum, allocator);
    }

    if (m_trafficMirrorNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficMirrorNum, allocator);
    }

    if (m_eipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipNum, allocator);
    }

    if (m_plgwNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlgwNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_plgwNum, allocator);
    }

    if (m_plvpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlvpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_plvpNum, allocator);
    }

    if (m_sslVpnGwNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnGwNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sslVpnGwNum, allocator);
    }

    if (m_vpcPeerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcPeerNum, allocator);
    }

    if (m_ipsecVpnGwNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpsecVpnGwNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipsecVpnGwNum, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isOldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOld, allocator);
    }

    if (m_ccnServiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccnServiceNum, allocator);
    }

    if (m_vpcPeerLimitToAllRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerLimitToAllRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcPeerLimitToAllRegion, allocator);
    }

    if (m_vpcPeerLimitToSameRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerLimitToSameRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcPeerLimitToSameRegion, allocator);
    }

    if (m_intVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intVpcId, allocator);
    }

}


string VpcResource::GetVpcId() const
{
    return m_vpcId;
}

void VpcResource::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcResource::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcResource::GetVpcName() const
{
    return m_vpcName;
}

void VpcResource::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpcResource::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string VpcResource::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcResource::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcResource::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t VpcResource::GetSubnetNum() const
{
    return m_subnetNum;
}

void VpcResource::SetSubnetNum(const uint64_t& _subnetNum)
{
    m_subnetNum = _subnetNum;
    m_subnetNumHasBeenSet = true;
}

bool VpcResource::SubnetNumHasBeenSet() const
{
    return m_subnetNumHasBeenSet;
}

uint64_t VpcResource::GetNatNum() const
{
    return m_natNum;
}

void VpcResource::SetNatNum(const uint64_t& _natNum)
{
    m_natNum = _natNum;
    m_natNumHasBeenSet = true;
}

bool VpcResource::NatNumHasBeenSet() const
{
    return m_natNumHasBeenSet;
}

string VpcResource::GetState() const
{
    return m_state;
}

void VpcResource::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpcResource::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool VpcResource::GetMonitorFlag() const
{
    return m_monitorFlag;
}

void VpcResource::SetMonitorFlag(const bool& _monitorFlag)
{
    m_monitorFlag = _monitorFlag;
    m_monitorFlagHasBeenSet = true;
}

bool VpcResource::MonitorFlagHasBeenSet() const
{
    return m_monitorFlagHasBeenSet;
}

uint64_t VpcResource::GetCpmNum() const
{
    return m_cpmNum;
}

void VpcResource::SetCpmNum(const uint64_t& _cpmNum)
{
    m_cpmNum = _cpmNum;
    m_cpmNumHasBeenSet = true;
}

bool VpcResource::CpmNumHasBeenSet() const
{
    return m_cpmNumHasBeenSet;
}

uint64_t VpcResource::GetLeaveIpNum() const
{
    return m_leaveIpNum;
}

void VpcResource::SetLeaveIpNum(const uint64_t& _leaveIpNum)
{
    m_leaveIpNum = _leaveIpNum;
    m_leaveIpNumHasBeenSet = true;
}

bool VpcResource::LeaveIpNumHasBeenSet() const
{
    return m_leaveIpNumHasBeenSet;
}

uint64_t VpcResource::GetLbNum() const
{
    return m_lbNum;
}

void VpcResource::SetLbNum(const uint64_t& _lbNum)
{
    m_lbNum = _lbNum;
    m_lbNumHasBeenSet = true;
}

bool VpcResource::LbNumHasBeenSet() const
{
    return m_lbNumHasBeenSet;
}

uint64_t VpcResource::GetTrafficMirrorNum() const
{
    return m_trafficMirrorNum;
}

void VpcResource::SetTrafficMirrorNum(const uint64_t& _trafficMirrorNum)
{
    m_trafficMirrorNum = _trafficMirrorNum;
    m_trafficMirrorNumHasBeenSet = true;
}

bool VpcResource::TrafficMirrorNumHasBeenSet() const
{
    return m_trafficMirrorNumHasBeenSet;
}

uint64_t VpcResource::GetEipNum() const
{
    return m_eipNum;
}

void VpcResource::SetEipNum(const uint64_t& _eipNum)
{
    m_eipNum = _eipNum;
    m_eipNumHasBeenSet = true;
}

bool VpcResource::EipNumHasBeenSet() const
{
    return m_eipNumHasBeenSet;
}

uint64_t VpcResource::GetPlgwNum() const
{
    return m_plgwNum;
}

void VpcResource::SetPlgwNum(const uint64_t& _plgwNum)
{
    m_plgwNum = _plgwNum;
    m_plgwNumHasBeenSet = true;
}

bool VpcResource::PlgwNumHasBeenSet() const
{
    return m_plgwNumHasBeenSet;
}

uint64_t VpcResource::GetPlvpNum() const
{
    return m_plvpNum;
}

void VpcResource::SetPlvpNum(const uint64_t& _plvpNum)
{
    m_plvpNum = _plvpNum;
    m_plvpNumHasBeenSet = true;
}

bool VpcResource::PlvpNumHasBeenSet() const
{
    return m_plvpNumHasBeenSet;
}

uint64_t VpcResource::GetSslVpnGwNum() const
{
    return m_sslVpnGwNum;
}

void VpcResource::SetSslVpnGwNum(const uint64_t& _sslVpnGwNum)
{
    m_sslVpnGwNum = _sslVpnGwNum;
    m_sslVpnGwNumHasBeenSet = true;
}

bool VpcResource::SslVpnGwNumHasBeenSet() const
{
    return m_sslVpnGwNumHasBeenSet;
}

uint64_t VpcResource::GetVpcPeerNum() const
{
    return m_vpcPeerNum;
}

void VpcResource::SetVpcPeerNum(const uint64_t& _vpcPeerNum)
{
    m_vpcPeerNum = _vpcPeerNum;
    m_vpcPeerNumHasBeenSet = true;
}

bool VpcResource::VpcPeerNumHasBeenSet() const
{
    return m_vpcPeerNumHasBeenSet;
}

uint64_t VpcResource::GetIpsecVpnGwNum() const
{
    return m_ipsecVpnGwNum;
}

void VpcResource::SetIpsecVpnGwNum(const uint64_t& _ipsecVpnGwNum)
{
    m_ipsecVpnGwNum = _ipsecVpnGwNum;
    m_ipsecVpnGwNumHasBeenSet = true;
}

bool VpcResource::IpsecVpnGwNumHasBeenSet() const
{
    return m_ipsecVpnGwNumHasBeenSet;
}

string VpcResource::GetZone() const
{
    return m_zone;
}

void VpcResource::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpcResource::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string VpcResource::GetCreateTime() const
{
    return m_createTime;
}

void VpcResource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpcResource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool VpcResource::GetIsOld() const
{
    return m_isOld;
}

void VpcResource::SetIsOld(const bool& _isOld)
{
    m_isOld = _isOld;
    m_isOldHasBeenSet = true;
}

bool VpcResource::IsOldHasBeenSet() const
{
    return m_isOldHasBeenSet;
}

uint64_t VpcResource::GetCcnServiceNum() const
{
    return m_ccnServiceNum;
}

void VpcResource::SetCcnServiceNum(const uint64_t& _ccnServiceNum)
{
    m_ccnServiceNum = _ccnServiceNum;
    m_ccnServiceNumHasBeenSet = true;
}

bool VpcResource::CcnServiceNumHasBeenSet() const
{
    return m_ccnServiceNumHasBeenSet;
}

uint64_t VpcResource::GetVpcPeerLimitToAllRegion() const
{
    return m_vpcPeerLimitToAllRegion;
}

void VpcResource::SetVpcPeerLimitToAllRegion(const uint64_t& _vpcPeerLimitToAllRegion)
{
    m_vpcPeerLimitToAllRegion = _vpcPeerLimitToAllRegion;
    m_vpcPeerLimitToAllRegionHasBeenSet = true;
}

bool VpcResource::VpcPeerLimitToAllRegionHasBeenSet() const
{
    return m_vpcPeerLimitToAllRegionHasBeenSet;
}

uint64_t VpcResource::GetVpcPeerLimitToSameRegion() const
{
    return m_vpcPeerLimitToSameRegion;
}

void VpcResource::SetVpcPeerLimitToSameRegion(const uint64_t& _vpcPeerLimitToSameRegion)
{
    m_vpcPeerLimitToSameRegion = _vpcPeerLimitToSameRegion;
    m_vpcPeerLimitToSameRegionHasBeenSet = true;
}

bool VpcResource::VpcPeerLimitToSameRegionHasBeenSet() const
{
    return m_vpcPeerLimitToSameRegionHasBeenSet;
}

uint64_t VpcResource::GetIntVpcId() const
{
    return m_intVpcId;
}

void VpcResource::SetIntVpcId(const uint64_t& _intVpcId)
{
    m_intVpcId = _intVpcId;
    m_intVpcIdHasBeenSet = true;
}

bool VpcResource::IntVpcIdHasBeenSet() const
{
    return m_intVpcIdHasBeenSet;
}

