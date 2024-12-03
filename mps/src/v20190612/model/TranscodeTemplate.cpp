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

#include <tencentcloud/mps/v20190612/model/TranscodeTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TranscodeTemplate::TranscodeTemplate() :
    m_definitionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false),
    m_containerTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_enhanceConfigHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.Definition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_definition = string(value["Definition"].GetString());
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplate") && !value["VideoTemplate"].IsNull())
    {
        if (!value["VideoTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.VideoTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoTemplate.Deserialize(value["VideoTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoTemplateHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplate") && !value["AudioTemplate"].IsNull())
    {
        if (!value["AudioTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.AudioTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTemplate.Deserialize(value["AudioTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTemplateHasBeenSet = true;
    }

    if (value.HasMember("TEHDConfig") && !value["TEHDConfig"].IsNull())
    {
        if (!value["TEHDConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.TEHDConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tEHDConfig.Deserialize(value["TEHDConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tEHDConfigHasBeenSet = true;
    }

    if (value.HasMember("ContainerType") && !value["ContainerType"].IsNull())
    {
        if (!value["ContainerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.ContainerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerType = string(value["ContainerType"].GetString());
        m_containerTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EnhanceConfig") && !value["EnhanceConfig"].IsNull())
    {
        if (!value["EnhanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.EnhanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhanceConfig.Deserialize(value["EnhanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhanceConfigHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTemplate.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_definition.c_str(), allocator).Move(), allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
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

    if (m_removeVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_videoTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tEHDConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerType.c_str(), allocator).Move(), allocator);
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

    if (m_enhanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

}


string TranscodeTemplate::GetDefinition() const
{
    return m_definition;
}

void TranscodeTemplate::SetDefinition(const string& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool TranscodeTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string TranscodeTemplate::GetContainer() const
{
    return m_container;
}

void TranscodeTemplate::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool TranscodeTemplate::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string TranscodeTemplate::GetName() const
{
    return m_name;
}

void TranscodeTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TranscodeTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TranscodeTemplate::GetComment() const
{
    return m_comment;
}

void TranscodeTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool TranscodeTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string TranscodeTemplate::GetType() const
{
    return m_type;
}

void TranscodeTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TranscodeTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t TranscodeTemplate::GetRemoveVideo() const
{
    return m_removeVideo;
}

void TranscodeTemplate::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool TranscodeTemplate::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t TranscodeTemplate::GetRemoveAudio() const
{
    return m_removeAudio;
}

void TranscodeTemplate::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool TranscodeTemplate::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoTemplateInfo TranscodeTemplate::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void TranscodeTemplate::SetVideoTemplate(const VideoTemplateInfo& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool TranscodeTemplate::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfo TranscodeTemplate::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void TranscodeTemplate::SetAudioTemplate(const AudioTemplateInfo& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool TranscodeTemplate::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

TEHDConfig TranscodeTemplate::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void TranscodeTemplate::SetTEHDConfig(const TEHDConfig& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool TranscodeTemplate::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}

string TranscodeTemplate::GetContainerType() const
{
    return m_containerType;
}

void TranscodeTemplate::SetContainerType(const string& _containerType)
{
    m_containerType = _containerType;
    m_containerTypeHasBeenSet = true;
}

bool TranscodeTemplate::ContainerTypeHasBeenSet() const
{
    return m_containerTypeHasBeenSet;
}

string TranscodeTemplate::GetCreateTime() const
{
    return m_createTime;
}

void TranscodeTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TranscodeTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TranscodeTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void TranscodeTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TranscodeTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

EnhanceConfig TranscodeTemplate::GetEnhanceConfig() const
{
    return m_enhanceConfig;
}

void TranscodeTemplate::SetEnhanceConfig(const EnhanceConfig& _enhanceConfig)
{
    m_enhanceConfig = _enhanceConfig;
    m_enhanceConfigHasBeenSet = true;
}

bool TranscodeTemplate::EnhanceConfigHasBeenSet() const
{
    return m_enhanceConfigHasBeenSet;
}

string TranscodeTemplate::GetAliasName() const
{
    return m_aliasName;
}

void TranscodeTemplate::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool TranscodeTemplate::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

