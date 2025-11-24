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

#include <tencentcloud/mps/v20190612/model/ProcessImageTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProcessImageTemplate::ProcessImageTemplate() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_processImageConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProcessImageTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ProcessImageConfig") && !value["ProcessImageConfig"].IsNull())
    {
        if (!value["ProcessImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.ProcessImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_processImageConfig.Deserialize(value["ProcessImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processImageConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessImageTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_processImageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processImageConfig.ToJsonObject(value[key.c_str()], allocator);
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


int64_t ProcessImageTemplate::GetDefinition() const
{
    return m_definition;
}

void ProcessImageTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ProcessImageTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ProcessImageTemplate::GetName() const
{
    return m_name;
}

void ProcessImageTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProcessImageTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProcessImageTemplate::GetComment() const
{
    return m_comment;
}

void ProcessImageTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ProcessImageTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ProcessImageTemplate::GetType() const
{
    return m_type;
}

void ProcessImageTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProcessImageTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ImageTaskInput ProcessImageTemplate::GetProcessImageConfig() const
{
    return m_processImageConfig;
}

void ProcessImageTemplate::SetProcessImageConfig(const ImageTaskInput& _processImageConfig)
{
    m_processImageConfig = _processImageConfig;
    m_processImageConfigHasBeenSet = true;
}

bool ProcessImageTemplate::ProcessImageConfigHasBeenSet() const
{
    return m_processImageConfigHasBeenSet;
}

string ProcessImageTemplate::GetCreateTime() const
{
    return m_createTime;
}

void ProcessImageTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProcessImageTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProcessImageTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void ProcessImageTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProcessImageTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

