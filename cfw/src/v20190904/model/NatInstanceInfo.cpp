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

#include <tencentcloud/cfw/v20190904/model/NatInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatInstanceInfo::NatInstanceInfo() :
    m_natinsIdHasBeenSet(false),
    m_natinsNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_fwModeHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_inFlowMaxHasBeenSet(false),
    m_outFlowMaxHasBeenSet(false),
    m_regionZhHasBeenSet(false),
    m_eipAddressHasBeenSet(false),
    m_vpcIpHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionDetailHasBeenSet(false),
    m_zoneZhHasBeenSet(false),
    m_zoneZhBakHasBeenSet(false)
{
}

CoreInternalOutcome NatInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatinsId") && !value["NatinsId"].IsNull())
    {
        if (!value["NatinsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.NatinsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsId = string(value["NatinsId"].GetString());
        m_natinsIdHasBeenSet = true;
    }

    if (value.HasMember("NatinsName") && !value["NatinsName"].IsNull())
    {
        if (!value["NatinsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.NatinsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natinsName = string(value["NatinsName"].GetString());
        m_natinsNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FwMode") && !value["FwMode"].IsNull())
    {
        if (!value["FwMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.FwMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwMode = value["FwMode"].GetInt64();
        m_fwModeHasBeenSet = true;
    }

    if (value.HasMember("BandWidth") && !value["BandWidth"].IsNull())
    {
        if (!value["BandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.BandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandWidth = value["BandWidth"].GetInt64();
        m_bandWidthHasBeenSet = true;
    }

    if (value.HasMember("InFlowMax") && !value["InFlowMax"].IsNull())
    {
        if (!value["InFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.InFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inFlowMax = value["InFlowMax"].GetInt64();
        m_inFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("OutFlowMax") && !value["OutFlowMax"].IsNull())
    {
        if (!value["OutFlowMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.OutFlowMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outFlowMax = value["OutFlowMax"].GetUint64();
        m_outFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("RegionZh") && !value["RegionZh"].IsNull())
    {
        if (!value["RegionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RegionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionZh = string(value["RegionZh"].GetString());
        m_regionZhHasBeenSet = true;
    }

    if (value.HasMember("EipAddress") && !value["EipAddress"].IsNull())
    {
        if (!value["EipAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.EipAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["EipAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eipAddress.push_back((*itr).GetString());
        }
        m_eipAddressHasBeenSet = true;
    }

    if (value.HasMember("VpcIp") && !value["VpcIp"].IsNull())
    {
        if (!value["VpcIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.VpcIp` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIp.push_back((*itr).GetString());
        }
        m_vpcIpHasBeenSet = true;
    }

    if (value.HasMember("Subnets") && !value["Subnets"].IsNull())
    {
        if (!value["Subnets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Subnets` is not array type"));

        const rapidjson::Value &tmpValue = value["Subnets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnets.push_back((*itr).GetString());
        }
        m_subnetsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RegionDetail") && !value["RegionDetail"].IsNull())
    {
        if (!value["RegionDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.RegionDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDetail = string(value["RegionDetail"].GetString());
        m_regionDetailHasBeenSet = true;
    }

    if (value.HasMember("ZoneZh") && !value["ZoneZh"].IsNull())
    {
        if (!value["ZoneZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ZoneZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZh = string(value["ZoneZh"].GetString());
        m_zoneZhHasBeenSet = true;
    }

    if (value.HasMember("ZoneZhBak") && !value["ZoneZhBak"].IsNull())
    {
        if (!value["ZoneZhBak"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatInstanceInfo.ZoneZhBak` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZhBak = string(value["ZoneZhBak"].GetString());
        m_zoneZhBakHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natinsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natinsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatinsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natinsName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_fwModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwMode, allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_inFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inFlowMax, allocator);
    }

    if (m_outFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outFlowMax, allocator);
    }

    if (m_regionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionZh.c_str(), allocator).Move(), allocator);
    }

    if (m_eipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipAddress.begin(); itr != m_eipAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIp.begin(); itr != m_vpcIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnets.begin(); itr != m_subnets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZh.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneZhBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZhBak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZhBak.c_str(), allocator).Move(), allocator);
    }

}


string NatInstanceInfo::GetNatinsId() const
{
    return m_natinsId;
}

void NatInstanceInfo::SetNatinsId(const string& _natinsId)
{
    m_natinsId = _natinsId;
    m_natinsIdHasBeenSet = true;
}

bool NatInstanceInfo::NatinsIdHasBeenSet() const
{
    return m_natinsIdHasBeenSet;
}

string NatInstanceInfo::GetNatinsName() const
{
    return m_natinsName;
}

void NatInstanceInfo::SetNatinsName(const string& _natinsName)
{
    m_natinsName = _natinsName;
    m_natinsNameHasBeenSet = true;
}

bool NatInstanceInfo::NatinsNameHasBeenSet() const
{
    return m_natinsNameHasBeenSet;
}

string NatInstanceInfo::GetRegion() const
{
    return m_region;
}

void NatInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t NatInstanceInfo::GetFwMode() const
{
    return m_fwMode;
}

void NatInstanceInfo::SetFwMode(const int64_t& _fwMode)
{
    m_fwMode = _fwMode;
    m_fwModeHasBeenSet = true;
}

bool NatInstanceInfo::FwModeHasBeenSet() const
{
    return m_fwModeHasBeenSet;
}

int64_t NatInstanceInfo::GetBandWidth() const
{
    return m_bandWidth;
}

void NatInstanceInfo::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool NatInstanceInfo::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t NatInstanceInfo::GetInFlowMax() const
{
    return m_inFlowMax;
}

void NatInstanceInfo::SetInFlowMax(const int64_t& _inFlowMax)
{
    m_inFlowMax = _inFlowMax;
    m_inFlowMaxHasBeenSet = true;
}

bool NatInstanceInfo::InFlowMaxHasBeenSet() const
{
    return m_inFlowMaxHasBeenSet;
}

uint64_t NatInstanceInfo::GetOutFlowMax() const
{
    return m_outFlowMax;
}

void NatInstanceInfo::SetOutFlowMax(const uint64_t& _outFlowMax)
{
    m_outFlowMax = _outFlowMax;
    m_outFlowMaxHasBeenSet = true;
}

bool NatInstanceInfo::OutFlowMaxHasBeenSet() const
{
    return m_outFlowMaxHasBeenSet;
}

string NatInstanceInfo::GetRegionZh() const
{
    return m_regionZh;
}

void NatInstanceInfo::SetRegionZh(const string& _regionZh)
{
    m_regionZh = _regionZh;
    m_regionZhHasBeenSet = true;
}

bool NatInstanceInfo::RegionZhHasBeenSet() const
{
    return m_regionZhHasBeenSet;
}

vector<string> NatInstanceInfo::GetEipAddress() const
{
    return m_eipAddress;
}

void NatInstanceInfo::SetEipAddress(const vector<string>& _eipAddress)
{
    m_eipAddress = _eipAddress;
    m_eipAddressHasBeenSet = true;
}

bool NatInstanceInfo::EipAddressHasBeenSet() const
{
    return m_eipAddressHasBeenSet;
}

vector<string> NatInstanceInfo::GetVpcIp() const
{
    return m_vpcIp;
}

void NatInstanceInfo::SetVpcIp(const vector<string>& _vpcIp)
{
    m_vpcIp = _vpcIp;
    m_vpcIpHasBeenSet = true;
}

bool NatInstanceInfo::VpcIpHasBeenSet() const
{
    return m_vpcIpHasBeenSet;
}

vector<string> NatInstanceInfo::GetSubnets() const
{
    return m_subnets;
}

void NatInstanceInfo::SetSubnets(const vector<string>& _subnets)
{
    m_subnets = _subnets;
    m_subnetsHasBeenSet = true;
}

bool NatInstanceInfo::SubnetsHasBeenSet() const
{
    return m_subnetsHasBeenSet;
}

int64_t NatInstanceInfo::GetStatus() const
{
    return m_status;
}

void NatInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NatInstanceInfo::GetRegionDetail() const
{
    return m_regionDetail;
}

void NatInstanceInfo::SetRegionDetail(const string& _regionDetail)
{
    m_regionDetail = _regionDetail;
    m_regionDetailHasBeenSet = true;
}

bool NatInstanceInfo::RegionDetailHasBeenSet() const
{
    return m_regionDetailHasBeenSet;
}

string NatInstanceInfo::GetZoneZh() const
{
    return m_zoneZh;
}

void NatInstanceInfo::SetZoneZh(const string& _zoneZh)
{
    m_zoneZh = _zoneZh;
    m_zoneZhHasBeenSet = true;
}

bool NatInstanceInfo::ZoneZhHasBeenSet() const
{
    return m_zoneZhHasBeenSet;
}

string NatInstanceInfo::GetZoneZhBak() const
{
    return m_zoneZhBak;
}

void NatInstanceInfo::SetZoneZhBak(const string& _zoneZhBak)
{
    m_zoneZhBak = _zoneZhBak;
    m_zoneZhBakHasBeenSet = true;
}

bool NatInstanceInfo::ZoneZhBakHasBeenSet() const
{
    return m_zoneZhBakHasBeenSet;
}

