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

#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeSaleZonesGroup::DescribeSaleZonesGroup() :
    m_zoneNumHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_supportTypesHasBeenSet(false),
    m_availableDiskTypesHasBeenSet(false),
    m_isSupportServerlessHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSaleZonesGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneNum") && !value["ZoneNum"].IsNull())
    {
        if (!value["ZoneNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesGroup.ZoneNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneNum = value["ZoneNum"].GetInt64();
        m_zoneNumHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesGroup.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("SupportTypes") && !value["SupportTypes"].IsNull())
    {
        if (!value["SupportTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesGroup.SupportTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportTypes.push_back((*itr).GetString());
        }
        m_supportTypesHasBeenSet = true;
    }

    if (value.HasMember("AvailableDiskTypes") && !value["AvailableDiskTypes"].IsNull())
    {
        if (!value["AvailableDiskTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesGroup.AvailableDiskTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableDiskTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableDiskTypes.push_back((*itr).GetString());
        }
        m_availableDiskTypesHasBeenSet = true;
    }

    if (value.HasMember("IsSupportServerless") && !value["IsSupportServerless"].IsNull())
    {
        if (!value["IsSupportServerless"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesGroup.IsSupportServerless` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportServerless = value["IsSupportServerless"].GetBool();
        m_isSupportServerlessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSaleZonesGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneNum, allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportTypes.begin(); itr != m_supportTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_availableDiskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableDiskTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableDiskTypes.begin(); itr != m_availableDiskTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeSaleZonesGroup::GetZoneNum() const
{
    return m_zoneNum;
}

void DescribeSaleZonesGroup::SetZoneNum(const int64_t& _zoneNum)
{
    m_zoneNum = _zoneNum;
    m_zoneNumHasBeenSet = true;
}

bool DescribeSaleZonesGroup::ZoneNumHasBeenSet() const
{
    return m_zoneNumHasBeenSet;
}

vector<string> DescribeSaleZonesGroup::GetZones() const
{
    return m_zones;
}

void DescribeSaleZonesGroup::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool DescribeSaleZonesGroup::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<string> DescribeSaleZonesGroup::GetSupportTypes() const
{
    return m_supportTypes;
}

void DescribeSaleZonesGroup::SetSupportTypes(const vector<string>& _supportTypes)
{
    m_supportTypes = _supportTypes;
    m_supportTypesHasBeenSet = true;
}

bool DescribeSaleZonesGroup::SupportTypesHasBeenSet() const
{
    return m_supportTypesHasBeenSet;
}

vector<string> DescribeSaleZonesGroup::GetAvailableDiskTypes() const
{
    return m_availableDiskTypes;
}

void DescribeSaleZonesGroup::SetAvailableDiskTypes(const vector<string>& _availableDiskTypes)
{
    m_availableDiskTypes = _availableDiskTypes;
    m_availableDiskTypesHasBeenSet = true;
}

bool DescribeSaleZonesGroup::AvailableDiskTypesHasBeenSet() const
{
    return m_availableDiskTypesHasBeenSet;
}

bool DescribeSaleZonesGroup::GetIsSupportServerless() const
{
    return m_isSupportServerless;
}

void DescribeSaleZonesGroup::SetIsSupportServerless(const bool& _isSupportServerless)
{
    m_isSupportServerless = _isSupportServerless;
    m_isSupportServerlessHasBeenSet = true;
}

bool DescribeSaleZonesGroup::IsSupportServerlessHasBeenSet() const
{
    return m_isSupportServerlessHasBeenSet;
}

