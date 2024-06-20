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

#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AdaptiveDynamicStreamingTemplate::AdaptiveDynamicStreamingTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_streamInfosHasBeenSet(false),
    m_disableHigherVideoBitrateHasBeenSet(false),
    m_disableHigherVideoResolutionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_pureAudioHasBeenSet(false),
    m_segmentTypeHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("StreamInfos") && !value["StreamInfos"].IsNull())
    {
        if (!value["StreamInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.StreamInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdaptiveStreamTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_streamInfos.push_back(item);
        }
        m_streamInfosHasBeenSet = true;
    }

    if (value.HasMember("DisableHigherVideoBitrate") && !value["DisableHigherVideoBitrate"].IsNull())
    {
        if (!value["DisableHigherVideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.DisableHigherVideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableHigherVideoBitrate = value["DisableHigherVideoBitrate"].GetUint64();
        m_disableHigherVideoBitrateHasBeenSet = true;
    }

    if (value.HasMember("DisableHigherVideoResolution") && !value["DisableHigherVideoResolution"].IsNull())
    {
        if (!value["DisableHigherVideoResolution"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.DisableHigherVideoResolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableHigherVideoResolution = value["DisableHigherVideoResolution"].GetUint64();
        m_disableHigherVideoResolutionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PureAudio") && !value["PureAudio"].IsNull())
    {
        if (!value["PureAudio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.PureAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pureAudio = value["PureAudio"].GetUint64();
        m_pureAudioHasBeenSet = true;
    }

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTemplate.SegmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = string(value["SegmentType"].GetString());
        m_segmentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_streamInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamInfos.begin(); itr != m_streamInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disableHigherVideoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHigherVideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHigherVideoBitrate, allocator);
    }

    if (m_disableHigherVideoResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHigherVideoResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHigherVideoResolution, allocator);
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

    if (m_pureAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pureAudio, allocator);
    }

    if (m_segmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AdaptiveDynamicStreamingTemplate::GetDefinition() const
{
    return m_definition;
}

void AdaptiveDynamicStreamingTemplate::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetType() const
{
    return m_type;
}

void AdaptiveDynamicStreamingTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetName() const
{
    return m_name;
}

void AdaptiveDynamicStreamingTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetComment() const
{
    return m_comment;
}

void AdaptiveDynamicStreamingTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetFormat() const
{
    return m_format;
}

void AdaptiveDynamicStreamingTemplate::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<AdaptiveStreamTemplate> AdaptiveDynamicStreamingTemplate::GetStreamInfos() const
{
    return m_streamInfos;
}

void AdaptiveDynamicStreamingTemplate::SetStreamInfos(const vector<AdaptiveStreamTemplate>& _streamInfos)
{
    m_streamInfos = _streamInfos;
    m_streamInfosHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::StreamInfosHasBeenSet() const
{
    return m_streamInfosHasBeenSet;
}

uint64_t AdaptiveDynamicStreamingTemplate::GetDisableHigherVideoBitrate() const
{
    return m_disableHigherVideoBitrate;
}

void AdaptiveDynamicStreamingTemplate::SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate)
{
    m_disableHigherVideoBitrate = _disableHigherVideoBitrate;
    m_disableHigherVideoBitrateHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::DisableHigherVideoBitrateHasBeenSet() const
{
    return m_disableHigherVideoBitrateHasBeenSet;
}

uint64_t AdaptiveDynamicStreamingTemplate::GetDisableHigherVideoResolution() const
{
    return m_disableHigherVideoResolution;
}

void AdaptiveDynamicStreamingTemplate::SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution)
{
    m_disableHigherVideoResolution = _disableHigherVideoResolution;
    m_disableHigherVideoResolutionHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::DisableHigherVideoResolutionHasBeenSet() const
{
    return m_disableHigherVideoResolutionHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetCreateTime() const
{
    return m_createTime;
}

void AdaptiveDynamicStreamingTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void AdaptiveDynamicStreamingTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t AdaptiveDynamicStreamingTemplate::GetPureAudio() const
{
    return m_pureAudio;
}

void AdaptiveDynamicStreamingTemplate::SetPureAudio(const uint64_t& _pureAudio)
{
    m_pureAudio = _pureAudio;
    m_pureAudioHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::PureAudioHasBeenSet() const
{
    return m_pureAudioHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetSegmentType() const
{
    return m_segmentType;
}

void AdaptiveDynamicStreamingTemplate::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

