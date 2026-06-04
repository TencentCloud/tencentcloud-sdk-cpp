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

#include <tencentcloud/adp/v20260520/model/SkillClassification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillClassification::SkillClassification() :
    m_billingTypeHasBeenSet(false),
    m_builtinSourceHasBeenSet(false),
    m_categoryKeyHasBeenSet(false),
    m_createTypeHasBeenSet(false),
    m_providerTypeHasBeenSet(false),
    m_sourceLinkHasBeenSet(false)
{
}

CoreInternalOutcome SkillClassification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("BuiltinSource") && !value["BuiltinSource"].IsNull())
    {
        if (!value["BuiltinSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.BuiltinSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_builtinSource = value["BuiltinSource"].GetInt64();
        m_builtinSourceHasBeenSet = true;
    }

    if (value.HasMember("CategoryKey") && !value["CategoryKey"].IsNull())
    {
        if (!value["CategoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.CategoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryKey = string(value["CategoryKey"].GetString());
        m_categoryKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateType") && !value["CreateType"].IsNull())
    {
        if (!value["CreateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.CreateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createType = value["CreateType"].GetInt64();
        m_createTypeHasBeenSet = true;
    }

    if (value.HasMember("ProviderType") && !value["ProviderType"].IsNull())
    {
        if (!value["ProviderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.ProviderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = value["ProviderType"].GetInt64();
        m_providerTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceLink") && !value["SourceLink"].IsNull())
    {
        if (!value["SourceLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillClassification.SourceLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLink = string(value["SourceLink"].GetString());
        m_sourceLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillClassification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

    if (m_builtinSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuiltinSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_builtinSource, allocator);
    }

    if (m_categoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createType, allocator);
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerType, allocator);
    }

    if (m_sourceLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLink.c_str(), allocator).Move(), allocator);
    }

}


int64_t SkillClassification::GetBillingType() const
{
    return m_billingType;
}

void SkillClassification::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool SkillClassification::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

int64_t SkillClassification::GetBuiltinSource() const
{
    return m_builtinSource;
}

void SkillClassification::SetBuiltinSource(const int64_t& _builtinSource)
{
    m_builtinSource = _builtinSource;
    m_builtinSourceHasBeenSet = true;
}

bool SkillClassification::BuiltinSourceHasBeenSet() const
{
    return m_builtinSourceHasBeenSet;
}

string SkillClassification::GetCategoryKey() const
{
    return m_categoryKey;
}

void SkillClassification::SetCategoryKey(const string& _categoryKey)
{
    m_categoryKey = _categoryKey;
    m_categoryKeyHasBeenSet = true;
}

bool SkillClassification::CategoryKeyHasBeenSet() const
{
    return m_categoryKeyHasBeenSet;
}

int64_t SkillClassification::GetCreateType() const
{
    return m_createType;
}

void SkillClassification::SetCreateType(const int64_t& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool SkillClassification::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

int64_t SkillClassification::GetProviderType() const
{
    return m_providerType;
}

void SkillClassification::SetProviderType(const int64_t& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool SkillClassification::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string SkillClassification::GetSourceLink() const
{
    return m_sourceLink;
}

void SkillClassification::SetSourceLink(const string& _sourceLink)
{
    m_sourceLink = _sourceLink;
    m_sourceLinkHasBeenSet = true;
}

bool SkillClassification::SourceLinkHasBeenSet() const
{
    return m_sourceLinkHasBeenSet;
}

