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

#include <tencentcloud/cfs/v20190719/model/AvailableRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

AvailableRegion::AvailableRegion() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionStatusHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_regionCnNameHasBeenSet(false)
{
}

CoreInternalOutcome AvailableRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionStatus") && !value["RegionStatus"].IsNull())
    {
        if (!value["RegionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.RegionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionStatus = string(value["RegionStatus"].GetString());
        m_regionStatusHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvailableZone item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zones.push_back(item);
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("RegionCnName") && !value["RegionCnName"].IsNull())
    {
        if (!value["RegionCnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.RegionCnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCnName = string(value["RegionCnName"].GetString());
        m_regionCnNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionCnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCnName.c_str(), allocator).Move(), allocator);
    }

}


string AvailableRegion::GetRegion() const
{
    return m_region;
}

void AvailableRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AvailableRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AvailableRegion::GetRegionName() const
{
    return m_regionName;
}

void AvailableRegion::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AvailableRegion::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string AvailableRegion::GetRegionStatus() const
{
    return m_regionStatus;
}

void AvailableRegion::SetRegionStatus(const string& _regionStatus)
{
    m_regionStatus = _regionStatus;
    m_regionStatusHasBeenSet = true;
}

bool AvailableRegion::RegionStatusHasBeenSet() const
{
    return m_regionStatusHasBeenSet;
}

vector<AvailableZone> AvailableRegion::GetZones() const
{
    return m_zones;
}

void AvailableRegion::SetZones(const vector<AvailableZone>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool AvailableRegion::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string AvailableRegion::GetRegionCnName() const
{
    return m_regionCnName;
}

void AvailableRegion::SetRegionCnName(const string& _regionCnName)
{
    m_regionCnName = _regionCnName;
    m_regionCnNameHasBeenSet = true;
}

bool AvailableRegion::RegionCnNameHasBeenSet() const
{
    return m_regionCnNameHasBeenSet;
}

