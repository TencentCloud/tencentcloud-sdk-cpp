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

#include <tencentcloud/mps/v20190612/model/ContentReviewTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ContentReviewTemplateItem::ContentReviewTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_pornConfigureHasBeenSet(false),
    m_terrorismConfigureHasBeenSet(false),
    m_politicalConfigureHasBeenSet(false),
    m_prohibitedConfigureHasBeenSet(false),
    m_userDefineConfigureHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ContentReviewTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("PornConfigure") && !value["PornConfigure"].IsNull())
    {
        if (!value["PornConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.PornConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornConfigure.Deserialize(value["PornConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornConfigureHasBeenSet = true;
    }

    if (value.HasMember("TerrorismConfigure") && !value["TerrorismConfigure"].IsNull())
    {
        if (!value["TerrorismConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.TerrorismConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismConfigure.Deserialize(value["TerrorismConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismConfigureHasBeenSet = true;
    }

    if (value.HasMember("PoliticalConfigure") && !value["PoliticalConfigure"].IsNull())
    {
        if (!value["PoliticalConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.PoliticalConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalConfigure.Deserialize(value["PoliticalConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalConfigureHasBeenSet = true;
    }

    if (value.HasMember("ProhibitedConfigure") && !value["ProhibitedConfigure"].IsNull())
    {
        if (!value["ProhibitedConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.ProhibitedConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prohibitedConfigure.Deserialize(value["ProhibitedConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prohibitedConfigureHasBeenSet = true;
    }

    if (value.HasMember("UserDefineConfigure") && !value["UserDefineConfigure"].IsNull())
    {
        if (!value["UserDefineConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.UserDefineConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userDefineConfigure.Deserialize(value["UserDefineConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userDefineConfigureHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentReviewTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pornConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prohibitedConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProhibitedConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prohibitedConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userDefineConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userDefineConfigure.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t ContentReviewTemplateItem::GetDefinition() const
{
    return m_definition;
}

void ContentReviewTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ContentReviewTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ContentReviewTemplateItem::GetName() const
{
    return m_name;
}

void ContentReviewTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContentReviewTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContentReviewTemplateItem::GetComment() const
{
    return m_comment;
}

void ContentReviewTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ContentReviewTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

PornConfigureInfo ContentReviewTemplateItem::GetPornConfigure() const
{
    return m_pornConfigure;
}

void ContentReviewTemplateItem::SetPornConfigure(const PornConfigureInfo& _pornConfigure)
{
    m_pornConfigure = _pornConfigure;
    m_pornConfigureHasBeenSet = true;
}

bool ContentReviewTemplateItem::PornConfigureHasBeenSet() const
{
    return m_pornConfigureHasBeenSet;
}

TerrorismConfigureInfo ContentReviewTemplateItem::GetTerrorismConfigure() const
{
    return m_terrorismConfigure;
}

void ContentReviewTemplateItem::SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure)
{
    m_terrorismConfigure = _terrorismConfigure;
    m_terrorismConfigureHasBeenSet = true;
}

bool ContentReviewTemplateItem::TerrorismConfigureHasBeenSet() const
{
    return m_terrorismConfigureHasBeenSet;
}

PoliticalConfigureInfo ContentReviewTemplateItem::GetPoliticalConfigure() const
{
    return m_politicalConfigure;
}

void ContentReviewTemplateItem::SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure)
{
    m_politicalConfigure = _politicalConfigure;
    m_politicalConfigureHasBeenSet = true;
}

bool ContentReviewTemplateItem::PoliticalConfigureHasBeenSet() const
{
    return m_politicalConfigureHasBeenSet;
}

ProhibitedConfigureInfo ContentReviewTemplateItem::GetProhibitedConfigure() const
{
    return m_prohibitedConfigure;
}

void ContentReviewTemplateItem::SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure)
{
    m_prohibitedConfigure = _prohibitedConfigure;
    m_prohibitedConfigureHasBeenSet = true;
}

bool ContentReviewTemplateItem::ProhibitedConfigureHasBeenSet() const
{
    return m_prohibitedConfigureHasBeenSet;
}

UserDefineConfigureInfo ContentReviewTemplateItem::GetUserDefineConfigure() const
{
    return m_userDefineConfigure;
}

void ContentReviewTemplateItem::SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure)
{
    m_userDefineConfigure = _userDefineConfigure;
    m_userDefineConfigureHasBeenSet = true;
}

bool ContentReviewTemplateItem::UserDefineConfigureHasBeenSet() const
{
    return m_userDefineConfigureHasBeenSet;
}

string ContentReviewTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void ContentReviewTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ContentReviewTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ContentReviewTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ContentReviewTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ContentReviewTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ContentReviewTemplateItem::GetType() const
{
    return m_type;
}

void ContentReviewTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContentReviewTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

