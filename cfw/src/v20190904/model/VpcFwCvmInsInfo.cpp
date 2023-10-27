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

#include <tencentcloud/cfw/v20190904/model/VpcFwCvmInsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwCvmInsInfo::VpcFwCvmInsInfo() :
    m_fwInsIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionZhHasBeenSet(false),
    m_regionDetailHasBeenSet(false),
    m_zoneZhHasBeenSet(false),
    m_zoneZhBackHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneBakHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwCvmInsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionZh") && !value["RegionZh"].IsNull())
    {
        if (!value["RegionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.RegionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionZh = string(value["RegionZh"].GetString());
        m_regionZhHasBeenSet = true;
    }

    if (value.HasMember("RegionDetail") && !value["RegionDetail"].IsNull())
    {
        if (!value["RegionDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.RegionDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDetail = string(value["RegionDetail"].GetString());
        m_regionDetailHasBeenSet = true;
    }

    if (value.HasMember("ZoneZh") && !value["ZoneZh"].IsNull())
    {
        if (!value["ZoneZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.ZoneZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZh = string(value["ZoneZh"].GetString());
        m_zoneZhHasBeenSet = true;
    }

    if (value.HasMember("ZoneZhBack") && !value["ZoneZhBack"].IsNull())
    {
        if (!value["ZoneZhBack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.ZoneZhBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZhBack = string(value["ZoneZhBack"].GetString());
        m_zoneZhBackHasBeenSet = true;
    }

    if (value.HasMember("BandWidth") && !value["BandWidth"].IsNull())
    {
        if (!value["BandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.BandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandWidth = value["BandWidth"].GetInt64();
        m_bandWidthHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneBak") && !value["ZoneBak"].IsNull())
    {
        if (!value["ZoneBak"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwCvmInsInfo.ZoneBak` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneBak = string(value["ZoneBak"].GetString());
        m_zoneBakHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwCvmInsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionZh.c_str(), allocator).Move(), allocator);
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

    if (m_zoneZhBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZhBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZhBack.c_str(), allocator).Move(), allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneBak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneBak.c_str(), allocator).Move(), allocator);
    }

}


string VpcFwCvmInsInfo::GetFwInsId() const
{
    return m_fwInsId;
}

void VpcFwCvmInsInfo::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool VpcFwCvmInsInfo::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

string VpcFwCvmInsInfo::GetRegion() const
{
    return m_region;
}

void VpcFwCvmInsInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VpcFwCvmInsInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string VpcFwCvmInsInfo::GetRegionZh() const
{
    return m_regionZh;
}

void VpcFwCvmInsInfo::SetRegionZh(const string& _regionZh)
{
    m_regionZh = _regionZh;
    m_regionZhHasBeenSet = true;
}

bool VpcFwCvmInsInfo::RegionZhHasBeenSet() const
{
    return m_regionZhHasBeenSet;
}

string VpcFwCvmInsInfo::GetRegionDetail() const
{
    return m_regionDetail;
}

void VpcFwCvmInsInfo::SetRegionDetail(const string& _regionDetail)
{
    m_regionDetail = _regionDetail;
    m_regionDetailHasBeenSet = true;
}

bool VpcFwCvmInsInfo::RegionDetailHasBeenSet() const
{
    return m_regionDetailHasBeenSet;
}

string VpcFwCvmInsInfo::GetZoneZh() const
{
    return m_zoneZh;
}

void VpcFwCvmInsInfo::SetZoneZh(const string& _zoneZh)
{
    m_zoneZh = _zoneZh;
    m_zoneZhHasBeenSet = true;
}

bool VpcFwCvmInsInfo::ZoneZhHasBeenSet() const
{
    return m_zoneZhHasBeenSet;
}

string VpcFwCvmInsInfo::GetZoneZhBack() const
{
    return m_zoneZhBack;
}

void VpcFwCvmInsInfo::SetZoneZhBack(const string& _zoneZhBack)
{
    m_zoneZhBack = _zoneZhBack;
    m_zoneZhBackHasBeenSet = true;
}

bool VpcFwCvmInsInfo::ZoneZhBackHasBeenSet() const
{
    return m_zoneZhBackHasBeenSet;
}

int64_t VpcFwCvmInsInfo::GetBandWidth() const
{
    return m_bandWidth;
}

void VpcFwCvmInsInfo::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool VpcFwCvmInsInfo::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

string VpcFwCvmInsInfo::GetZone() const
{
    return m_zone;
}

void VpcFwCvmInsInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpcFwCvmInsInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string VpcFwCvmInsInfo::GetZoneBak() const
{
    return m_zoneBak;
}

void VpcFwCvmInsInfo::SetZoneBak(const string& _zoneBak)
{
    m_zoneBak = _zoneBak;
    m_zoneBakHasBeenSet = true;
}

bool VpcFwCvmInsInfo::ZoneBakHasBeenSet() const
{
    return m_zoneBakHasBeenSet;
}

