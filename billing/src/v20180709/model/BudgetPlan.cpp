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

#include <tencentcloud/billing/v20180709/model/BudgetPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetPlan::BudgetPlan() :
    m_dateDescHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome BudgetPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateDesc") && !value["DateDesc"].IsNull())
    {
        if (!value["DateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetPlan.DateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateDesc = string(value["DateDesc"].GetString());
        m_dateDescHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetPlan.Quota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quota = string(value["Quota"].GetString());
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quota.c_str(), allocator).Move(), allocator);
    }

}


string BudgetPlan::GetDateDesc() const
{
    return m_dateDesc;
}

void BudgetPlan::SetDateDesc(const string& _dateDesc)
{
    m_dateDesc = _dateDesc;
    m_dateDescHasBeenSet = true;
}

bool BudgetPlan::DateDescHasBeenSet() const
{
    return m_dateDescHasBeenSet;
}

string BudgetPlan::GetQuota() const
{
    return m_quota;
}

void BudgetPlan::SetQuota(const string& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool BudgetPlan::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

