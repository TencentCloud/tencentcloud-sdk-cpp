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

#include <tencentcloud/vod/v20180717/model/AudioTrackTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AudioTrackTemplateInfo::AudioTrackTemplateInfo() :
    m_definitionHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_audioChannelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AudioTrackTemplateInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.SampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetUint64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("AudioChannel") && !value["AudioChannel"].IsNull())
    {
        if (!value["AudioChannel"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.AudioChannel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannel = value["AudioChannel"].GetInt64();
        m_audioChannelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackTemplateInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTrackTemplateInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_codecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_audioChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioChannel, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t AudioTrackTemplateInfo::GetDefinition() const
{
    return m_definition;
}

void AudioTrackTemplateInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AudioTrackTemplateInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AudioTrackTemplateInfo::GetCodec() const
{
    return m_codec;
}

void AudioTrackTemplateInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioTrackTemplateInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t AudioTrackTemplateInfo::GetBitrate() const
{
    return m_bitrate;
}

void AudioTrackTemplateInfo::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool AudioTrackTemplateInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t AudioTrackTemplateInfo::GetSampleRate() const
{
    return m_sampleRate;
}

void AudioTrackTemplateInfo::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AudioTrackTemplateInfo::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string AudioTrackTemplateInfo::GetType() const
{
    return m_type;
}

void AudioTrackTemplateInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AudioTrackTemplateInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AudioTrackTemplateInfo::GetName() const
{
    return m_name;
}

void AudioTrackTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AudioTrackTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AudioTrackTemplateInfo::GetComment() const
{
    return m_comment;
}

void AudioTrackTemplateInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AudioTrackTemplateInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t AudioTrackTemplateInfo::GetAudioChannel() const
{
    return m_audioChannel;
}

void AudioTrackTemplateInfo::SetAudioChannel(const int64_t& _audioChannel)
{
    m_audioChannel = _audioChannel;
    m_audioChannelHasBeenSet = true;
}

bool AudioTrackTemplateInfo::AudioChannelHasBeenSet() const
{
    return m_audioChannelHasBeenSet;
}

string AudioTrackTemplateInfo::GetCreateTime() const
{
    return m_createTime;
}

void AudioTrackTemplateInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AudioTrackTemplateInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AudioTrackTemplateInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AudioTrackTemplateInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AudioTrackTemplateInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

