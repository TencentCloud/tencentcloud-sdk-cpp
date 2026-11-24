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

#include <tencentcloud/adp/v20260520/model/PromptTemplateProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplateProfile::PromptTemplateProfile() :
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptTemplateIdHasBeenSet(false),
    m_promptTemplateTypeHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_auditHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplateProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.Category` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_category.Deserialize(value["Category"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PromptTemplateId") && !value["PromptTemplateId"].IsNull())
    {
        if (!value["PromptTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.PromptTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptTemplateId = string(value["PromptTemplateId"].GetString());
        m_promptTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("PromptTemplateType") && !value["PromptTemplateType"].IsNull())
    {
        if (!value["PromptTemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.PromptTemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTemplateType = value["PromptTemplateType"].GetInt64();
        m_promptTemplateTypeHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateProfile.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplateProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_category.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptTemplateType, allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

}


PromptTemplateCategory PromptTemplateProfile::GetCategory() const
{
    return m_category;
}

void PromptTemplateProfile::SetCategory(const PromptTemplateCategory& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool PromptTemplateProfile::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string PromptTemplateProfile::GetDescription() const
{
    return m_description;
}

void PromptTemplateProfile::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PromptTemplateProfile::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PromptTemplateProfile::GetName() const
{
    return m_name;
}

void PromptTemplateProfile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PromptTemplateProfile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PromptTemplateProfile::GetPromptTemplateId() const
{
    return m_promptTemplateId;
}

void PromptTemplateProfile::SetPromptTemplateId(const string& _promptTemplateId)
{
    m_promptTemplateId = _promptTemplateId;
    m_promptTemplateIdHasBeenSet = true;
}

bool PromptTemplateProfile::PromptTemplateIdHasBeenSet() const
{
    return m_promptTemplateIdHasBeenSet;
}

int64_t PromptTemplateProfile::GetPromptTemplateType() const
{
    return m_promptTemplateType;
}

void PromptTemplateProfile::SetPromptTemplateType(const int64_t& _promptTemplateType)
{
    m_promptTemplateType = _promptTemplateType;
    m_promptTemplateTypeHasBeenSet = true;
}

bool PromptTemplateProfile::PromptTemplateTypeHasBeenSet() const
{
    return m_promptTemplateTypeHasBeenSet;
}

string PromptTemplateProfile::GetSpaceId() const
{
    return m_spaceId;
}

void PromptTemplateProfile::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool PromptTemplateProfile::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

Audit PromptTemplateProfile::GetAudit() const
{
    return m_audit;
}

void PromptTemplateProfile::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool PromptTemplateProfile::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

