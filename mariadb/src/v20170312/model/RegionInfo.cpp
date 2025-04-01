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

#include <tencentcloud/mariadb/v20170312/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneListHasBeenSet(false),
    m_availableChoiceHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneList") && !value["ZoneList"].IsNull())
    {
        if (!value["ZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionInfo.ZoneList` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZonesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneList.push_back(item);
        }
        m_zoneListHasBeenSet = true;
    }

    if (value.HasMember("AvailableChoice") && !value["AvailableChoice"].IsNull())
    {
        if (!value["AvailableChoice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionInfo.AvailableChoice` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableChoice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneChooseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_availableChoice.push_back(item);
        }
        m_availableChoiceHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneList.begin(); itr != m_zoneList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_availableChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableChoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availableChoice.begin(); itr != m_availableChoice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

}


string RegionInfo::GetRegion() const
{
    return m_region;
}

void RegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t RegionInfo::GetRegionId() const
{
    return m_regionId;
}

void RegionInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionInfo::GetRegionName() const
{
    return m_regionName;
}

void RegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<ZonesInfo> RegionInfo::GetZoneList() const
{
    return m_zoneList;
}

void RegionInfo::SetZoneList(const vector<ZonesInfo>& _zoneList)
{
    m_zoneList = _zoneList;
    m_zoneListHasBeenSet = true;
}

bool RegionInfo::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

vector<ZoneChooseInfo> RegionInfo::GetAvailableChoice() const
{
    return m_availableChoice;
}

void RegionInfo::SetAvailableChoice(const vector<ZoneChooseInfo>& _availableChoice)
{
    m_availableChoice = _availableChoice;
    m_availableChoiceHasBeenSet = true;
}

bool RegionInfo::AvailableChoiceHasBeenSet() const
{
    return m_availableChoiceHasBeenSet;
}

string RegionInfo::GetCpuType() const
{
    return m_cpuType;
}

void RegionInfo::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool RegionInfo::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

