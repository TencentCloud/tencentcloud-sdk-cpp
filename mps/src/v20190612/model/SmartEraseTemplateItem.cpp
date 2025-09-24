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

#include <tencentcloud/mps/v20190612/model/SmartEraseTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartEraseTemplateItem::SmartEraseTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_eraseTypeHasBeenSet(false),
    m_eraseSubtitleConfigHasBeenSet(false),
    m_eraseWatermarkConfigHasBeenSet(false),
    m_erasePrivacyConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

CoreInternalOutcome SmartEraseTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EraseType") && !value["EraseType"].IsNull())
    {
        if (!value["EraseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.EraseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseType = string(value["EraseType"].GetString());
        m_eraseTypeHasBeenSet = true;
    }

    if (value.HasMember("EraseSubtitleConfig") && !value["EraseSubtitleConfig"].IsNull())
    {
        if (!value["EraseSubtitleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.EraseSubtitleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eraseSubtitleConfig.Deserialize(value["EraseSubtitleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eraseSubtitleConfigHasBeenSet = true;
    }

    if (value.HasMember("EraseWatermarkConfig") && !value["EraseWatermarkConfig"].IsNull())
    {
        if (!value["EraseWatermarkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.EraseWatermarkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eraseWatermarkConfig.Deserialize(value["EraseWatermarkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eraseWatermarkConfigHasBeenSet = true;
    }

    if (value.HasMember("ErasePrivacyConfig") && !value["ErasePrivacyConfig"].IsNull())
    {
        if (!value["ErasePrivacyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.ErasePrivacyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_erasePrivacyConfig.Deserialize(value["ErasePrivacyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_erasePrivacyConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplateItem.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartEraseTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseType.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseSubtitleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseSubtitleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseSubtitleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eraseWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseWatermarkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_erasePrivacyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErasePrivacyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_erasePrivacyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

}


int64_t SmartEraseTemplateItem::GetDefinition() const
{
    return m_definition;
}

void SmartEraseTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SmartEraseTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string SmartEraseTemplateItem::GetName() const
{
    return m_name;
}

void SmartEraseTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SmartEraseTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SmartEraseTemplateItem::GetComment() const
{
    return m_comment;
}

void SmartEraseTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SmartEraseTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string SmartEraseTemplateItem::GetType() const
{
    return m_type;
}

void SmartEraseTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SmartEraseTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SmartEraseTemplateItem::GetEraseType() const
{
    return m_eraseType;
}

void SmartEraseTemplateItem::SetEraseType(const string& _eraseType)
{
    m_eraseType = _eraseType;
    m_eraseTypeHasBeenSet = true;
}

bool SmartEraseTemplateItem::EraseTypeHasBeenSet() const
{
    return m_eraseTypeHasBeenSet;
}

SmartEraseSubtitleConfig SmartEraseTemplateItem::GetEraseSubtitleConfig() const
{
    return m_eraseSubtitleConfig;
}

void SmartEraseTemplateItem::SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig)
{
    m_eraseSubtitleConfig = _eraseSubtitleConfig;
    m_eraseSubtitleConfigHasBeenSet = true;
}

bool SmartEraseTemplateItem::EraseSubtitleConfigHasBeenSet() const
{
    return m_eraseSubtitleConfigHasBeenSet;
}

SmartEraseWatermarkConfig SmartEraseTemplateItem::GetEraseWatermarkConfig() const
{
    return m_eraseWatermarkConfig;
}

void SmartEraseTemplateItem::SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig)
{
    m_eraseWatermarkConfig = _eraseWatermarkConfig;
    m_eraseWatermarkConfigHasBeenSet = true;
}

bool SmartEraseTemplateItem::EraseWatermarkConfigHasBeenSet() const
{
    return m_eraseWatermarkConfigHasBeenSet;
}

SmartErasePrivacyConfig SmartEraseTemplateItem::GetErasePrivacyConfig() const
{
    return m_erasePrivacyConfig;
}

void SmartEraseTemplateItem::SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig)
{
    m_erasePrivacyConfig = _erasePrivacyConfig;
    m_erasePrivacyConfigHasBeenSet = true;
}

bool SmartEraseTemplateItem::ErasePrivacyConfigHasBeenSet() const
{
    return m_erasePrivacyConfigHasBeenSet;
}

string SmartEraseTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void SmartEraseTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SmartEraseTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SmartEraseTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SmartEraseTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SmartEraseTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SmartEraseTemplateItem::GetAliasName() const
{
    return m_aliasName;
}

void SmartEraseTemplateItem::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool SmartEraseTemplateItem::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

