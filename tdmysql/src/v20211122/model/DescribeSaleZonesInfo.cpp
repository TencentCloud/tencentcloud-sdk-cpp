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

#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeSaleZonesInfo::DescribeSaleZonesInfo() :
    m_zoneHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_isDefaultMasterHasBeenSet(false),
    m_availableDiskTypesHasBeenSet(false),
    m_supportTypesHasBeenSet(false),
    m_isSupportServerlessHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSaleZonesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultMaster") && !value["IsDefaultMaster"].IsNull())
    {
        if (!value["IsDefaultMaster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.IsDefaultMaster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultMaster = value["IsDefaultMaster"].GetInt64();
        m_isDefaultMasterHasBeenSet = true;
    }

    if (value.HasMember("AvailableDiskTypes") && !value["AvailableDiskTypes"].IsNull())
    {
        if (!value["AvailableDiskTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.AvailableDiskTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableDiskTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableDiskTypes.push_back((*itr).GetString());
        }
        m_availableDiskTypesHasBeenSet = true;
    }

    if (value.HasMember("SupportTypes") && !value["SupportTypes"].IsNull())
    {
        if (!value["SupportTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.SupportTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportTypes.push_back((*itr).GetString());
        }
        m_supportTypesHasBeenSet = true;
    }

    if (value.HasMember("IsSupportServerless") && !value["IsSupportServerless"].IsNull())
    {
        if (!value["IsSupportServerless"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSaleZonesInfo.IsSupportServerless` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportServerless = value["IsSupportServerless"].GetBool();
        m_isSupportServerlessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSaleZonesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_isDefaultMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultMaster, allocator);
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

    if (m_isSupportServerlessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportServerless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportServerless, allocator);
    }

}


string DescribeSaleZonesInfo::GetZone() const
{
    return m_zone;
}

void DescribeSaleZonesInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeSaleZonesInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeSaleZonesInfo::GetZoneName() const
{
    return m_zoneName;
}

void DescribeSaleZonesInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool DescribeSaleZonesInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

int64_t DescribeSaleZonesInfo::GetEnable() const
{
    return m_enable;
}

void DescribeSaleZonesInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescribeSaleZonesInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DescribeSaleZonesInfo::GetIsDefaultMaster() const
{
    return m_isDefaultMaster;
}

void DescribeSaleZonesInfo::SetIsDefaultMaster(const int64_t& _isDefaultMaster)
{
    m_isDefaultMaster = _isDefaultMaster;
    m_isDefaultMasterHasBeenSet = true;
}

bool DescribeSaleZonesInfo::IsDefaultMasterHasBeenSet() const
{
    return m_isDefaultMasterHasBeenSet;
}

vector<string> DescribeSaleZonesInfo::GetAvailableDiskTypes() const
{
    return m_availableDiskTypes;
}

void DescribeSaleZonesInfo::SetAvailableDiskTypes(const vector<string>& _availableDiskTypes)
{
    m_availableDiskTypes = _availableDiskTypes;
    m_availableDiskTypesHasBeenSet = true;
}

bool DescribeSaleZonesInfo::AvailableDiskTypesHasBeenSet() const
{
    return m_availableDiskTypesHasBeenSet;
}

vector<string> DescribeSaleZonesInfo::GetSupportTypes() const
{
    return m_supportTypes;
}

void DescribeSaleZonesInfo::SetSupportTypes(const vector<string>& _supportTypes)
{
    m_supportTypes = _supportTypes;
    m_supportTypesHasBeenSet = true;
}

bool DescribeSaleZonesInfo::SupportTypesHasBeenSet() const
{
    return m_supportTypesHasBeenSet;
}

bool DescribeSaleZonesInfo::GetIsSupportServerless() const
{
    return m_isSupportServerless;
}

void DescribeSaleZonesInfo::SetIsSupportServerless(const bool& _isSupportServerless)
{
    m_isSupportServerless = _isSupportServerless;
    m_isSupportServerlessHasBeenSet = true;
}

bool DescribeSaleZonesInfo::IsSupportServerlessHasBeenSet() const
{
    return m_isSupportServerlessHasBeenSet;
}

