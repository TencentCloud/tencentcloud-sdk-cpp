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

#include <tencentcloud/clb/v20180317/model/ModifyBudgetAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyBudgetAttributesRequest::ModifyBudgetAttributesRequest() :
    m_budgetIdHasBeenSet(false),
    m_budgetConfigsHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false)
{
}

string ModifyBudgetAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_budgetConfigs.begin(); itr != m_budgetConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBudgetAttributesRequest::GetBudgetId() const
{
    return m_budgetId;
}

void ModifyBudgetAttributesRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool ModifyBudgetAttributesRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

vector<BudgetConfigInput> ModifyBudgetAttributesRequest::GetBudgetConfigs() const
{
    return m_budgetConfigs;
}

void ModifyBudgetAttributesRequest::SetBudgetConfigs(const vector<BudgetConfigInput>& _budgetConfigs)
{
    m_budgetConfigs = _budgetConfigs;
    m_budgetConfigsHasBeenSet = true;
}

bool ModifyBudgetAttributesRequest::BudgetConfigsHasBeenSet() const
{
    return m_budgetConfigsHasBeenSet;
}

string ModifyBudgetAttributesRequest::GetBudgetName() const
{
    return m_budgetName;
}

void ModifyBudgetAttributesRequest::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool ModifyBudgetAttributesRequest::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

RateLimitConfigForBudget ModifyBudgetAttributesRequest::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void ModifyBudgetAttributesRequest::SetRateLimitConfig(const RateLimitConfigForBudget& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool ModifyBudgetAttributesRequest::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}


