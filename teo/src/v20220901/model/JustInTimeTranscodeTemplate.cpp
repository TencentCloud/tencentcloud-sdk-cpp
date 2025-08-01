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

#include <tencentcloud/teo/v20220901/model/JustInTimeTranscodeTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

JustInTimeTranscodeTemplate::JustInTimeTranscodeTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_videoStreamSwitchHasBeenSet(false),
    m_audioStreamSwitchHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome JustInTimeTranscodeTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VideoStreamSwitch") && !value["VideoStreamSwitch"].IsNull())
    {
        if (!value["VideoStreamSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.VideoStreamSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoStreamSwitch = string(value["VideoStreamSwitch"].GetString());
        m_videoStreamSwitchHasBeenSet = true;
    }

    if (value.HasMember("AudioStreamSwitch") && !value["AudioStreamSwitch"].IsNull())
    {
        if (!value["AudioStreamSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.AudioStreamSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioStreamSwitch = string(value["AudioStreamSwitch"].GetString());
        m_audioStreamSwitchHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplate") && !value["VideoTemplate"].IsNull())
    {
        if (!value["VideoTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.VideoTemplate` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.AudioTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTemplate.Deserialize(value["AudioTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTemplateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JustInTimeTranscodeTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JustInTimeTranscodeTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_videoStreamSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStreamSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoStreamSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_audioStreamSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStreamSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioStreamSwitch.c_str(), allocator).Move(), allocator);
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


string JustInTimeTranscodeTemplate::GetTemplateId() const
{
    return m_templateId;
}

void JustInTimeTranscodeTemplate::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetTemplateName() const
{
    return m_templateName;
}

void JustInTimeTranscodeTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetComment() const
{
    return m_comment;
}

void JustInTimeTranscodeTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetType() const
{
    return m_type;
}

void JustInTimeTranscodeTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetVideoStreamSwitch() const
{
    return m_videoStreamSwitch;
}

void JustInTimeTranscodeTemplate::SetVideoStreamSwitch(const string& _videoStreamSwitch)
{
    m_videoStreamSwitch = _videoStreamSwitch;
    m_videoStreamSwitchHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::VideoStreamSwitchHasBeenSet() const
{
    return m_videoStreamSwitchHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetAudioStreamSwitch() const
{
    return m_audioStreamSwitch;
}

void JustInTimeTranscodeTemplate::SetAudioStreamSwitch(const string& _audioStreamSwitch)
{
    m_audioStreamSwitch = _audioStreamSwitch;
    m_audioStreamSwitchHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::AudioStreamSwitchHasBeenSet() const
{
    return m_audioStreamSwitchHasBeenSet;
}

VideoTemplateInfo JustInTimeTranscodeTemplate::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void JustInTimeTranscodeTemplate::SetVideoTemplate(const VideoTemplateInfo& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfo JustInTimeTranscodeTemplate::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void JustInTimeTranscodeTemplate::SetAudioTemplate(const AudioTemplateInfo& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetCreateTime() const
{
    return m_createTime;
}

void JustInTimeTranscodeTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JustInTimeTranscodeTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void JustInTimeTranscodeTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JustInTimeTranscodeTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

