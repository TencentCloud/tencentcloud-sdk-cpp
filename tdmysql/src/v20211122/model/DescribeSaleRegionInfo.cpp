/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeSaleRegionInfo::DescribeSaleRegionInfo() :
    m_regionHasBeenSet(false),
    m_zoneListHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_availableZoneNumHasBeenSet(false),
    m_isSupportedLogReplicaHasBeenSet(false),
    m_zoneGroupHasBeenSet(false),
    m_isSupportServerlessHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSaleRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ZoneList") && !value["ZoneList"].IsNull())
    {
        if (!value["ZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.ZoneList` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeSaleZonesInfo item;
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

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("AvailableZoneNum") && !value["AvailableZoneNum"].IsNull())
    {
        if (!value["AvailableZoneNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.AvailableZoneNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableZoneNum = value["AvailableZoneNum"].GetInt64();
        m_availableZoneNumHasBeenSet = true;
    }

    if (value.HasMember("IsSupportedLogReplica") && !value["IsSupportedLogReplica"].IsNull())
    {
        if (!value["IsSupportedLogReplica"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.IsSupportedLogReplica` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportedLogReplica = value["IsSupportedLogReplica"].GetBool();
        m_isSupportedLogReplicaHasBeenSet = true;
    }

    if (value.HasMember("ZoneGroup") && !value["ZoneGroup"].IsNull())
    {
        if (!value["ZoneGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.ZoneGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeSaleZonesGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneGroup.push_back(item);
        }
        m_zoneGroupHasBeenSet = true;
    }

    if (value.HasMember("IsSupportServerless") && !value["IsSupportServerless"].IsNull())
    {
        if (!value["IsSupportServerless"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleRegionInfo.IsSupportServerless` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportServerless = value["IsSupportServerless"].GetBool();
        m_isSupportServerlessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSaleRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_availableZoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableZoneNum, allocator);
    }

    if (m_isSupportedLogReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportedLogReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportedLogReplica, allocator);
    }

    if (m_zoneGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneGroup.begin(); itr != m_zoneGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isSupportServerlessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportServerless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportServerless, allocator);
    }

}


string DescribeSaleRegionInfo::GetRegion() const
{
    return m_region;
}

void DescribeSaleRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeSaleRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<DescribeSaleZonesInfo> DescribeSaleRegionInfo::GetZoneList() const
{
    return m_zoneList;
}

void DescribeSaleRegionInfo::SetZoneList(const vector<DescribeSaleZonesInfo>& _zoneList)
{
    m_zoneList = _zoneList;
    m_zoneListHasBeenSet = true;
}

bool DescribeSaleRegionInfo::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

string DescribeSaleRegionInfo::GetRegionName() const
{
    return m_regionName;
}

void DescribeSaleRegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool DescribeSaleRegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

int64_t DescribeSaleRegionInfo::GetEnable() const
{
    return m_enable;
}

void DescribeSaleRegionInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescribeSaleRegionInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DescribeSaleRegionInfo::GetAvailableZoneNum() const
{
    return m_availableZoneNum;
}

void DescribeSaleRegionInfo::SetAvailableZoneNum(const int64_t& _availableZoneNum)
{
    m_availableZoneNum = _availableZoneNum;
    m_availableZoneNumHasBeenSet = true;
}

bool DescribeSaleRegionInfo::AvailableZoneNumHasBeenSet() const
{
    return m_availableZoneNumHasBeenSet;
}

bool DescribeSaleRegionInfo::GetIsSupportedLogReplica() const
{
    return m_isSupportedLogReplica;
}

void DescribeSaleRegionInfo::SetIsSupportedLogReplica(const bool& _isSupportedLogReplica)
{
    m_isSupportedLogReplica = _isSupportedLogReplica;
    m_isSupportedLogReplicaHasBeenSet = true;
}

bool DescribeSaleRegionInfo::IsSupportedLogReplicaHasBeenSet() const
{
    return m_isSupportedLogReplicaHasBeenSet;
}

vector<DescribeSaleZonesGroup> DescribeSaleRegionInfo::GetZoneGroup() const
{
    return m_zoneGroup;
}

void DescribeSaleRegionInfo::SetZoneGroup(const vector<DescribeSaleZonesGroup>& _zoneGroup)
{
    m_zoneGroup = _zoneGroup;
    m_zoneGroupHasBeenSet = true;
}

bool DescribeSaleRegionInfo::ZoneGroupHasBeenSet() const
{
    return m_zoneGroupHasBeenSet;
}

bool DescribeSaleRegionInfo::GetIsSupportServerless() const
{
    return m_isSupportServerless;
}

void DescribeSaleRegionInfo::SetIsSupportServerless(const bool& _isSupportServerless)
{
    m_isSupportServerless = _isSupportServerless;
    m_isSupportServerlessHasBeenSet = true;
}

bool DescribeSaleRegionInfo::IsSupportServerlessHasBeenSet() const
{
    return m_isSupportServerlessHasBeenSet;
}

