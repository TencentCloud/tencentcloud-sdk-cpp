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

#include <tencentcloud/ags/v20250920/model/AccountQuotaOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

AccountQuotaOverview::AccountQuotaOverview() :
    m_quotaHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome AccountQuotaOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountQuotaOverview.Quota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quota.Deserialize(value["Quota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountQuotaOverview.Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(value["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountQuotaOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

}


QuotaResourceInfo AccountQuotaOverview::GetQuota() const
{
    return m_quota;
}

void AccountQuotaOverview::SetQuota(const QuotaResourceInfo& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool AccountQuotaOverview::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

QuotaResourceInfo AccountQuotaOverview::GetUsage() const
{
    return m_usage;
}

void AccountQuotaOverview::SetUsage(const QuotaResourceInfo& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool AccountQuotaOverview::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

