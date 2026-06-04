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

#include <tencentcloud/adp/v20260520/model/PluginOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginOperation::PluginOperation() :
    m_allowExternalAccessHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_categoryKeyHasBeenSet(false),
    m_introductionHasBeenSet(false),
    m_isRecommendedHasBeenSet(false)
{
}

CoreInternalOutcome PluginOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllowExternalAccess") && !value["AllowExternalAccess"].IsNull())
    {
        if (!value["AllowExternalAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginOperation.AllowExternalAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowExternalAccess = value["AllowExternalAccess"].GetBool();
        m_allowExternalAccessHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginOperation.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("CategoryKey") && !value["CategoryKey"].IsNull())
    {
        if (!value["CategoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginOperation.CategoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryKey = string(value["CategoryKey"].GetString());
        m_categoryKeyHasBeenSet = true;
    }

    if (value.HasMember("Introduction") && !value["Introduction"].IsNull())
    {
        if (!value["Introduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginOperation.Introduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introduction = string(value["Introduction"].GetString());
        m_introductionHasBeenSet = true;
    }

    if (value.HasMember("IsRecommended") && !value["IsRecommended"].IsNull())
    {
        if (!value["IsRecommended"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginOperation.IsRecommended` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRecommended = value["IsRecommended"].GetBool();
        m_isRecommendedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allowExternalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowExternalAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowExternalAccess, allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

    if (m_categoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_introductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Introduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introduction.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecommendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecommended";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecommended, allocator);
    }

}


bool PluginOperation::GetAllowExternalAccess() const
{
    return m_allowExternalAccess;
}

void PluginOperation::SetAllowExternalAccess(const bool& _allowExternalAccess)
{
    m_allowExternalAccess = _allowExternalAccess;
    m_allowExternalAccessHasBeenSet = true;
}

bool PluginOperation::AllowExternalAccessHasBeenSet() const
{
    return m_allowExternalAccessHasBeenSet;
}

int64_t PluginOperation::GetBillingType() const
{
    return m_billingType;
}

void PluginOperation::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool PluginOperation::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

string PluginOperation::GetCategoryKey() const
{
    return m_categoryKey;
}

void PluginOperation::SetCategoryKey(const string& _categoryKey)
{
    m_categoryKey = _categoryKey;
    m_categoryKeyHasBeenSet = true;
}

bool PluginOperation::CategoryKeyHasBeenSet() const
{
    return m_categoryKeyHasBeenSet;
}

string PluginOperation::GetIntroduction() const
{
    return m_introduction;
}

void PluginOperation::SetIntroduction(const string& _introduction)
{
    m_introduction = _introduction;
    m_introductionHasBeenSet = true;
}

bool PluginOperation::IntroductionHasBeenSet() const
{
    return m_introductionHasBeenSet;
}

bool PluginOperation::GetIsRecommended() const
{
    return m_isRecommended;
}

void PluginOperation::SetIsRecommended(const bool& _isRecommended)
{
    m_isRecommended = _isRecommended;
    m_isRecommendedHasBeenSet = true;
}

bool PluginOperation::IsRecommendedHasBeenSet() const
{
    return m_isRecommendedHasBeenSet;
}

