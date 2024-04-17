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

#include <tencentcloud/ess/v20201111/model/OrgBillSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OrgBillSummary::OrgBillSummary() :
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_quotaTypeHasBeenSet(false)
{
}

CoreInternalOutcome OrgBillSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgBillSummary.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgBillSummary.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgBillSummary.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgBillSummary.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgBillSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgBillSummary::GetTotal() const
{
    return m_total;
}

void OrgBillSummary::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool OrgBillSummary::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t OrgBillSummary::GetUsed() const
{
    return m_used;
}

void OrgBillSummary::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool OrgBillSummary::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

int64_t OrgBillSummary::GetAvailable() const
{
    return m_available;
}

void OrgBillSummary::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool OrgBillSummary::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string OrgBillSummary::GetQuotaType() const
{
    return m_quotaType;
}

void OrgBillSummary::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool OrgBillSummary::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

