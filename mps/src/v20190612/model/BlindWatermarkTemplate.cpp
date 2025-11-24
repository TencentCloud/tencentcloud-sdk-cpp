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

#include <tencentcloud/mps/v20190612/model/BlindWatermarkTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BlindWatermarkTemplate::BlindWatermarkTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_textContentHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BlindWatermarkTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TextContent") && !value["TextContent"].IsNull())
    {
        if (!value["TextContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.TextContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textContent = string(value["TextContent"].GetString());
        m_textContentHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlindWatermarkTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_textContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textContent.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

}


int64_t BlindWatermarkTemplate::GetDefinition() const
{
    return m_definition;
}

void BlindWatermarkTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool BlindWatermarkTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string BlindWatermarkTemplate::GetType() const
{
    return m_type;
}

void BlindWatermarkTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BlindWatermarkTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BlindWatermarkTemplate::GetName() const
{
    return m_name;
}

void BlindWatermarkTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BlindWatermarkTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BlindWatermarkTemplate::GetTextContent() const
{
    return m_textContent;
}

void BlindWatermarkTemplate::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool BlindWatermarkTemplate::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}

string BlindWatermarkTemplate::GetComment() const
{
    return m_comment;
}

void BlindWatermarkTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool BlindWatermarkTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string BlindWatermarkTemplate::GetCreateTime() const
{
    return m_createTime;
}

void BlindWatermarkTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BlindWatermarkTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BlindWatermarkTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void BlindWatermarkTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BlindWatermarkTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

