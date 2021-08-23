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

#include <tencentcloud/bmvpc/v20180625/model/VpcPeerConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpcPeerConnection::VpcPeerConnection() :
    m_vpcIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_peerAppIdHasBeenSet(false),
    m_vpcPeerConnectionIdHasBeenSet(false),
    m_vpcPeerConnectionNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_vpcZoneHasBeenSet(false),
    m_peerVpcZoneHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_peerUinHasBeenSet(false),
    m_peerTypeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_peerRegionHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome VpcPeerConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("PeerVpcId") && !value["PeerVpcId"].IsNull())
    {
        if (!value["PeerVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerVpcId = string(value["PeerVpcId"].GetString());
        m_peerVpcIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PeerAppId") && !value["PeerAppId"].IsNull())
    {
        if (!value["PeerAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerAppId = string(value["PeerAppId"].GetString());
        m_peerAppIdHasBeenSet = true;
    }

    if (value.HasMember("VpcPeerConnectionId") && !value["VpcPeerConnectionId"].IsNull())
    {
        if (!value["VpcPeerConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.VpcPeerConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPeerConnectionId = string(value["VpcPeerConnectionId"].GetString());
        m_vpcPeerConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("VpcPeerConnectionName") && !value["VpcPeerConnectionName"].IsNull())
    {
        if (!value["VpcPeerConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.VpcPeerConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPeerConnectionName = string(value["VpcPeerConnectionName"].GetString());
        m_vpcPeerConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("VpcZone") && !value["VpcZone"].IsNull())
    {
        if (!value["VpcZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.VpcZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcZone = string(value["VpcZone"].GetString());
        m_vpcZoneHasBeenSet = true;
    }

    if (value.HasMember("PeerVpcZone") && !value["PeerVpcZone"].IsNull())
    {
        if (!value["PeerVpcZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerVpcZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerVpcZone = string(value["PeerVpcZone"].GetString());
        m_peerVpcZoneHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("PeerUin") && !value["PeerUin"].IsNull())
    {
        if (!value["PeerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_peerUin = value["PeerUin"].GetUint64();
        m_peerUinHasBeenSet = true;
    }

    if (value.HasMember("PeerType") && !value["PeerType"].IsNull())
    {
        if (!value["PeerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_peerType = value["PeerType"].GetUint64();
        m_peerTypeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PeerRegion") && !value["PeerRegion"].IsNull())
    {
        if (!value["PeerRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.PeerRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerRegion = string(value["PeerRegion"].GetString());
        m_peerRegionHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.DeleteFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetUint64();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPeerConnection.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcPeerConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcPeerConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcPeerConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcPeerConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcPeerConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcZone.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerVpcZone.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_peerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerUin, allocator);
    }

    if (m_peerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerType, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_peerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string VpcPeerConnection::GetVpcId() const
{
    return m_vpcId;
}

void VpcPeerConnection::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcPeerConnection::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcPeerConnection::GetPeerVpcId() const
{
    return m_peerVpcId;
}

void VpcPeerConnection::SetPeerVpcId(const string& _peerVpcId)
{
    m_peerVpcId = _peerVpcId;
    m_peerVpcIdHasBeenSet = true;
}

bool VpcPeerConnection::PeerVpcIdHasBeenSet() const
{
    return m_peerVpcIdHasBeenSet;
}

string VpcPeerConnection::GetAppId() const
{
    return m_appId;
}

void VpcPeerConnection::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VpcPeerConnection::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VpcPeerConnection::GetPeerAppId() const
{
    return m_peerAppId;
}

void VpcPeerConnection::SetPeerAppId(const string& _peerAppId)
{
    m_peerAppId = _peerAppId;
    m_peerAppIdHasBeenSet = true;
}

bool VpcPeerConnection::PeerAppIdHasBeenSet() const
{
    return m_peerAppIdHasBeenSet;
}

string VpcPeerConnection::GetVpcPeerConnectionId() const
{
    return m_vpcPeerConnectionId;
}

void VpcPeerConnection::SetVpcPeerConnectionId(const string& _vpcPeerConnectionId)
{
    m_vpcPeerConnectionId = _vpcPeerConnectionId;
    m_vpcPeerConnectionIdHasBeenSet = true;
}

bool VpcPeerConnection::VpcPeerConnectionIdHasBeenSet() const
{
    return m_vpcPeerConnectionIdHasBeenSet;
}

string VpcPeerConnection::GetVpcPeerConnectionName() const
{
    return m_vpcPeerConnectionName;
}

void VpcPeerConnection::SetVpcPeerConnectionName(const string& _vpcPeerConnectionName)
{
    m_vpcPeerConnectionName = _vpcPeerConnectionName;
    m_vpcPeerConnectionNameHasBeenSet = true;
}

bool VpcPeerConnection::VpcPeerConnectionNameHasBeenSet() const
{
    return m_vpcPeerConnectionNameHasBeenSet;
}

string VpcPeerConnection::GetState() const
{
    return m_state;
}

void VpcPeerConnection::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpcPeerConnection::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string VpcPeerConnection::GetVpcZone() const
{
    return m_vpcZone;
}

void VpcPeerConnection::SetVpcZone(const string& _vpcZone)
{
    m_vpcZone = _vpcZone;
    m_vpcZoneHasBeenSet = true;
}

bool VpcPeerConnection::VpcZoneHasBeenSet() const
{
    return m_vpcZoneHasBeenSet;
}

string VpcPeerConnection::GetPeerVpcZone() const
{
    return m_peerVpcZone;
}

void VpcPeerConnection::SetPeerVpcZone(const string& _peerVpcZone)
{
    m_peerVpcZone = _peerVpcZone;
    m_peerVpcZoneHasBeenSet = true;
}

bool VpcPeerConnection::PeerVpcZoneHasBeenSet() const
{
    return m_peerVpcZoneHasBeenSet;
}

uint64_t VpcPeerConnection::GetUin() const
{
    return m_uin;
}

void VpcPeerConnection::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool VpcPeerConnection::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t VpcPeerConnection::GetPeerUin() const
{
    return m_peerUin;
}

void VpcPeerConnection::SetPeerUin(const uint64_t& _peerUin)
{
    m_peerUin = _peerUin;
    m_peerUinHasBeenSet = true;
}

bool VpcPeerConnection::PeerUinHasBeenSet() const
{
    return m_peerUinHasBeenSet;
}

uint64_t VpcPeerConnection::GetPeerType() const
{
    return m_peerType;
}

void VpcPeerConnection::SetPeerType(const uint64_t& _peerType)
{
    m_peerType = _peerType;
    m_peerTypeHasBeenSet = true;
}

bool VpcPeerConnection::PeerTypeHasBeenSet() const
{
    return m_peerTypeHasBeenSet;
}

uint64_t VpcPeerConnection::GetBandwidth() const
{
    return m_bandwidth;
}

void VpcPeerConnection::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool VpcPeerConnection::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string VpcPeerConnection::GetRegion() const
{
    return m_region;
}

void VpcPeerConnection::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VpcPeerConnection::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string VpcPeerConnection::GetPeerRegion() const
{
    return m_peerRegion;
}

void VpcPeerConnection::SetPeerRegion(const string& _peerRegion)
{
    m_peerRegion = _peerRegion;
    m_peerRegionHasBeenSet = true;
}

bool VpcPeerConnection::PeerRegionHasBeenSet() const
{
    return m_peerRegionHasBeenSet;
}

uint64_t VpcPeerConnection::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void VpcPeerConnection::SetDeleteFlag(const uint64_t& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool VpcPeerConnection::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string VpcPeerConnection::GetCreateTime() const
{
    return m_createTime;
}

void VpcPeerConnection::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpcPeerConnection::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

