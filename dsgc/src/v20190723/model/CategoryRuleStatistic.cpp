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

#include <tencentcloud/dsgc/v20190723/model/CategoryRuleStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CategoryRuleStatistic::CategoryRuleStatistic() :
    m_categoryIdHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_categoryNameHasBeenSet(false)
{
}

CoreInternalOutcome CategoryRuleStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRuleStatistic.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRuleStatistic.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRuleStatistic.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryRuleStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CategoryRuleStatistic::GetCategoryId() const
{
    return m_categoryId;
}

void CategoryRuleStatistic::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CategoryRuleStatistic::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

uint64_t CategoryRuleStatistic::GetRuleCount() const
{
    return m_ruleCount;
}

void CategoryRuleStatistic::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool CategoryRuleStatistic::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

string CategoryRuleStatistic::GetCategoryName() const
{
    return m_categoryName;
}

void CategoryRuleStatistic::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool CategoryRuleStatistic::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

