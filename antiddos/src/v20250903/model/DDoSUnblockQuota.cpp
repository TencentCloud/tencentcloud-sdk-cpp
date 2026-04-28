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

#include <tencentcloud/antiddos/v20250903/model/DDoSUnblockQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

DDoSUnblockQuota::DDoSUnblockQuota() :
    m_totalQuotaHasBeenSet(false),
    m_usedQuotaHasBeenSet(false),
    m_quotaStartTimeHasBeenSet(false),
    m_quotaEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DDoSUnblockQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUnblockQuota.TotalQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetUint64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("UsedQuota") && !value["UsedQuota"].IsNull())
    {
        if (!value["UsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUnblockQuota.UsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQuota = value["UsedQuota"].GetUint64();
        m_usedQuotaHasBeenSet = true;
    }

    if (value.HasMember("QuotaStartTime") && !value["QuotaStartTime"].IsNull())
    {
        if (!value["QuotaStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUnblockQuota.QuotaStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaStartTime = string(value["QuotaStartTime"].GetString());
        m_quotaStartTimeHasBeenSet = true;
    }

    if (value.HasMember("QuotaEndTime") && !value["QuotaEndTime"].IsNull())
    {
        if (!value["QuotaEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUnblockQuota.QuotaEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaEndTime = string(value["QuotaEndTime"].GetString());
        m_quotaEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSUnblockQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_usedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQuota, allocator);
    }

    if (m_quotaStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaEndTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DDoSUnblockQuota::GetTotalQuota() const
{
    return m_totalQuota;
}

void DDoSUnblockQuota::SetTotalQuota(const uint64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool DDoSUnblockQuota::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

uint64_t DDoSUnblockQuota::GetUsedQuota() const
{
    return m_usedQuota;
}

void DDoSUnblockQuota::SetUsedQuota(const uint64_t& _usedQuota)
{
    m_usedQuota = _usedQuota;
    m_usedQuotaHasBeenSet = true;
}

bool DDoSUnblockQuota::UsedQuotaHasBeenSet() const
{
    return m_usedQuotaHasBeenSet;
}

string DDoSUnblockQuota::GetQuotaStartTime() const
{
    return m_quotaStartTime;
}

void DDoSUnblockQuota::SetQuotaStartTime(const string& _quotaStartTime)
{
    m_quotaStartTime = _quotaStartTime;
    m_quotaStartTimeHasBeenSet = true;
}

bool DDoSUnblockQuota::QuotaStartTimeHasBeenSet() const
{
    return m_quotaStartTimeHasBeenSet;
}

string DDoSUnblockQuota::GetQuotaEndTime() const
{
    return m_quotaEndTime;
}

void DDoSUnblockQuota::SetQuotaEndTime(const string& _quotaEndTime)
{
    m_quotaEndTime = _quotaEndTime;
    m_quotaEndTimeHasBeenSet = true;
}

bool DDoSUnblockQuota::QuotaEndTimeHasBeenSet() const
{
    return m_quotaEndTimeHasBeenSet;
}

