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

#include <tencentcloud/essbasic/v20210526/model/TemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

TemplateInfo::TemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_recipientsHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_isPromoterHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdOnHasBeenSet(false)
{
}

CoreInternalOutcome TemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("SignComponents") && !value["SignComponents"].IsNull())
    {
        if (!value["SignComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.SignComponents` is not array type"));

        const rapidjson::Value &tmpValue = value["SignComponents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_signComponents.push_back(item);
        }
        m_signComponentsHasBeenSet = true;
    }

    if (value.HasMember("Recipients") && !value["Recipients"].IsNull())
    {
        if (!value["Recipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Recipients` is not array type"));

        const rapidjson::Value &tmpValue = value["Recipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Recipient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recipients.push_back(item);
        }
        m_recipientsHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = value["TemplateType"].GetInt64();
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("IsPromoter") && !value["IsPromoter"].IsNull())
    {
        if (!value["IsPromoter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.IsPromoter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPromoter = value["IsPromoter"].GetBool();
        m_isPromoterHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signComponents.begin(); itr != m_signComponents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recipients.begin(); itr != m_recipients.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateType, allocator);
    }

    if (m_isPromoterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPromoter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPromoter, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

}


string TemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void TemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void TemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool TemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string TemplateInfo::GetDescription() const
{
    return m_description;
}

void TemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Component> TemplateInfo::GetComponents() const
{
    return m_components;
}

void TemplateInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool TemplateInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<Component> TemplateInfo::GetSignComponents() const
{
    return m_signComponents;
}

void TemplateInfo::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool TemplateInfo::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

vector<Recipient> TemplateInfo::GetRecipients() const
{
    return m_recipients;
}

void TemplateInfo::SetRecipients(const vector<Recipient>& _recipients)
{
    m_recipients = _recipients;
    m_recipientsHasBeenSet = true;
}

bool TemplateInfo::RecipientsHasBeenSet() const
{
    return m_recipientsHasBeenSet;
}

int64_t TemplateInfo::GetTemplateType() const
{
    return m_templateType;
}

void TemplateInfo::SetTemplateType(const int64_t& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool TemplateInfo::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

bool TemplateInfo::GetIsPromoter() const
{
    return m_isPromoter;
}

void TemplateInfo::SetIsPromoter(const bool& _isPromoter)
{
    m_isPromoter = _isPromoter;
    m_isPromoterHasBeenSet = true;
}

bool TemplateInfo::IsPromoterHasBeenSet() const
{
    return m_isPromoterHasBeenSet;
}

string TemplateInfo::GetCreator() const
{
    return m_creator;
}

void TemplateInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TemplateInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TemplateInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void TemplateInfo::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool TemplateInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

