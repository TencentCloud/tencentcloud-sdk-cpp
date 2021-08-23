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

#include <tencentcloud/emr/v20190103/model/QuotaEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

QuotaEntity::QuotaEntity() :
    m_usedQuotaHasBeenSet(false),
    m_remainingQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome QuotaEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedQuota") && !value["UsedQuota"].IsNull())
    {
        if (!value["UsedQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaEntity.UsedQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQuota = value["UsedQuota"].GetInt64();
        m_usedQuotaHasBeenSet = true;
    }

    if (value.HasMember("RemainingQuota") && !value["RemainingQuota"].IsNull())
    {
        if (!value["RemainingQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaEntity.RemainingQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingQuota = value["RemainingQuota"].GetInt64();
        m_remainingQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaEntity.TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaEntity.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQuota, allocator);
    }

    if (m_remainingQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingQuota, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


int64_t QuotaEntity::GetUsedQuota() const
{
    return m_usedQuota;
}

void QuotaEntity::SetUsedQuota(const int64_t& _usedQuota)
{
    m_usedQuota = _usedQuota;
    m_usedQuotaHasBeenSet = true;
}

bool QuotaEntity::UsedQuotaHasBeenSet() const
{
    return m_usedQuotaHasBeenSet;
}

int64_t QuotaEntity::GetRemainingQuota() const
{
    return m_remainingQuota;
}

void QuotaEntity::SetRemainingQuota(const int64_t& _remainingQuota)
{
    m_remainingQuota = _remainingQuota;
    m_remainingQuotaHasBeenSet = true;
}

bool QuotaEntity::RemainingQuotaHasBeenSet() const
{
    return m_remainingQuotaHasBeenSet;
}

int64_t QuotaEntity::GetTotalQuota() const
{
    return m_totalQuota;
}

void QuotaEntity::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool QuotaEntity::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

string QuotaEntity::GetZone() const
{
    return m_zone;
}

void QuotaEntity::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool QuotaEntity::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

