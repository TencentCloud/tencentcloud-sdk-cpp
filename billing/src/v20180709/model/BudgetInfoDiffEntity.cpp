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

#include <tencentcloud/billing/v20180709/model/BudgetInfoDiffEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetInfoDiffEntity::BudgetInfoDiffEntity() :
    m_propertyHasBeenSet(false),
    m_beforeHasBeenSet(false),
    m_afterHasBeenSet(false)
{
}

CoreInternalOutcome BudgetInfoDiffEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Property") && !value["Property"].IsNull())
    {
        if (!value["Property"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfoDiffEntity.Property` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_property = string(value["Property"].GetString());
        m_propertyHasBeenSet = true;
    }

    if (value.HasMember("Before") && !value["Before"].IsNull())
    {
        if (!value["Before"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfoDiffEntity.Before` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_before = string(value["Before"].GetString());
        m_beforeHasBeenSet = true;
    }

    if (value.HasMember("After") && !value["After"].IsNull())
    {
        if (!value["After"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfoDiffEntity.After` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_after = string(value["After"].GetString());
        m_afterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetInfoDiffEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Property";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_property.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Before";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_before.c_str(), allocator).Move(), allocator);
    }

    if (m_afterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "After";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_after.c_str(), allocator).Move(), allocator);
    }

}


string BudgetInfoDiffEntity::GetProperty() const
{
    return m_property;
}

void BudgetInfoDiffEntity::SetProperty(const string& _property)
{
    m_property = _property;
    m_propertyHasBeenSet = true;
}

bool BudgetInfoDiffEntity::PropertyHasBeenSet() const
{
    return m_propertyHasBeenSet;
}

string BudgetInfoDiffEntity::GetBefore() const
{
    return m_before;
}

void BudgetInfoDiffEntity::SetBefore(const string& _before)
{
    m_before = _before;
    m_beforeHasBeenSet = true;
}

bool BudgetInfoDiffEntity::BeforeHasBeenSet() const
{
    return m_beforeHasBeenSet;
}

string BudgetInfoDiffEntity::GetAfter() const
{
    return m_after;
}

void BudgetInfoDiffEntity::SetAfter(const string& _after)
{
    m_after = _after;
    m_afterHasBeenSet = true;
}

bool BudgetInfoDiffEntity::AfterHasBeenSet() const
{
    return m_afterHasBeenSet;
}

