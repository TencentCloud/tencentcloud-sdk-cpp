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

#include <tencentcloud/cvm/v20170312/model/PrePaidQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

PrePaidQuota::PrePaidQuota() :
    m_usedQuotaHasBeenSet(false),
    m_onceQuotaHasBeenSet(false),
    m_remainingQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome PrePaidQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedQuota") && !value["UsedQuota"].IsNull())
    {
        if (!value["UsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrePaidQuota.UsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQuota = value["UsedQuota"].GetUint64();
        m_usedQuotaHasBeenSet = true;
    }

    if (value.HasMember("OnceQuota") && !value["OnceQuota"].IsNull())
    {
        if (!value["OnceQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrePaidQuota.OnceQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onceQuota = value["OnceQuota"].GetUint64();
        m_onceQuotaHasBeenSet = true;
    }

    if (value.HasMember("RemainingQuota") && !value["RemainingQuota"].IsNull())
    {
        if (!value["RemainingQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrePaidQuota.RemainingQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingQuota = value["RemainingQuota"].GetUint64();
        m_remainingQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrePaidQuota.TotalQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetUint64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrePaidQuota.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrePaidQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQuota, allocator);
    }

    if (m_onceQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnceQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onceQuota, allocator);
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


uint64_t PrePaidQuota::GetUsedQuota() const
{
    return m_usedQuota;
}

void PrePaidQuota::SetUsedQuota(const uint64_t& _usedQuota)
{
    m_usedQuota = _usedQuota;
    m_usedQuotaHasBeenSet = true;
}

bool PrePaidQuota::UsedQuotaHasBeenSet() const
{
    return m_usedQuotaHasBeenSet;
}

uint64_t PrePaidQuota::GetOnceQuota() const
{
    return m_onceQuota;
}

void PrePaidQuota::SetOnceQuota(const uint64_t& _onceQuota)
{
    m_onceQuota = _onceQuota;
    m_onceQuotaHasBeenSet = true;
}

bool PrePaidQuota::OnceQuotaHasBeenSet() const
{
    return m_onceQuotaHasBeenSet;
}

uint64_t PrePaidQuota::GetRemainingQuota() const
{
    return m_remainingQuota;
}

void PrePaidQuota::SetRemainingQuota(const uint64_t& _remainingQuota)
{
    m_remainingQuota = _remainingQuota;
    m_remainingQuotaHasBeenSet = true;
}

bool PrePaidQuota::RemainingQuotaHasBeenSet() const
{
    return m_remainingQuotaHasBeenSet;
}

uint64_t PrePaidQuota::GetTotalQuota() const
{
    return m_totalQuota;
}

void PrePaidQuota::SetTotalQuota(const uint64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool PrePaidQuota::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

string PrePaidQuota::GetZone() const
{
    return m_zone;
}

void PrePaidQuota::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PrePaidQuota::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

