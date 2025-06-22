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

#include <tencentcloud/live/v20180801/model/CloudEffectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CloudEffectInfo::CloudEffectInfo() :
    m_idHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_previewImageUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CloudEffectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("PreviewImageUrl") && !value["PreviewImageUrl"].IsNull())
    {
        if (!value["PreviewImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.PreviewImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewImageUrl = string(value["PreviewImageUrl"].GetString());
        m_previewImageUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudEffectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_previewImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string CloudEffectInfo::GetId() const
{
    return m_id;
}

void CloudEffectInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CloudEffectInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CloudEffectInfo::GetPrompt() const
{
    return m_prompt;
}

void CloudEffectInfo::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CloudEffectInfo::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CloudEffectInfo::GetFlag() const
{
    return m_flag;
}

void CloudEffectInfo::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool CloudEffectInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string CloudEffectInfo::GetPreviewImageUrl() const
{
    return m_previewImageUrl;
}

void CloudEffectInfo::SetPreviewImageUrl(const string& _previewImageUrl)
{
    m_previewImageUrl = _previewImageUrl;
    m_previewImageUrlHasBeenSet = true;
}

bool CloudEffectInfo::PreviewImageUrlHasBeenSet() const
{
    return m_previewImageUrlHasBeenSet;
}

string CloudEffectInfo::GetType() const
{
    return m_type;
}

void CloudEffectInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudEffectInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudEffectInfo::GetCreateTime() const
{
    return m_createTime;
}

void CloudEffectInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudEffectInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudEffectInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudEffectInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudEffectInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

