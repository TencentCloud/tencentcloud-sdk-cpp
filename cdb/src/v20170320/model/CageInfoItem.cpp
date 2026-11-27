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

#include <tencentcloud/cdb/v20170320/model/CageInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CageInfoItem::CageInfoItem() :
    m_cageIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_cageNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false)
{
}

CoreInternalOutcome CageInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CageId") && !value["CageId"].IsNull())
    {
        if (!value["CageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.CageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageId = string(value["CageId"].GetString());
        m_cageIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("CageName") && !value["CageName"].IsNull())
    {
        if (!value["CageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.CageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageName = string(value["CageName"].GetString());
        m_cageNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CageInfoItem.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetUint64());
        }
        m_zoneIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CageInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_cageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string CageInfoItem::GetCageId() const
{
    return m_cageId;
}

void CageInfoItem::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool CageInfoItem::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

uint64_t CageInfoItem::GetZoneId() const
{
    return m_zoneId;
}

void CageInfoItem::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CageInfoItem::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CageInfoItem::GetCageName() const
{
    return m_cageName;
}

void CageInfoItem::SetCageName(const string& _cageName)
{
    m_cageName = _cageName;
    m_cageNameHasBeenSet = true;
}

bool CageInfoItem::CageNameHasBeenSet() const
{
    return m_cageNameHasBeenSet;
}

string CageInfoItem::GetStatus() const
{
    return m_status;
}

void CageInfoItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CageInfoItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CageInfoItem::GetDeviceType() const
{
    return m_deviceType;
}

void CageInfoItem::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CageInfoItem::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

vector<uint64_t> CageInfoItem::GetZoneIds() const
{
    return m_zoneIds;
}

void CageInfoItem::SetZoneIds(const vector<uint64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool CageInfoItem::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

