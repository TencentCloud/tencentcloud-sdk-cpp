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

#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AdaptiveDynamicStreamingTemplate::AdaptiveDynamicStreamingTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_drmTypeHasBeenSet(false),
    m_videoTrackTemplateSetHasBeenSet(false),
    m_audioTrackTemplateSetHasBeenSet(false),
    m_disableHigherVideoBitrateHasBeenSet(false),
    m_disableHigherVideoResolutionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("DrmType") && !value["DrmType"].IsNull())
    {
        if (!value["DrmType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.DrmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drmType = string(value["DrmType"].GetString());
        m_drmTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoTrackTemplateSet") && !value["VideoTrackTemplateSet"].IsNull())
    {
        if (!value["VideoTrackTemplateSet"].IsArray())
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.VideoTrackTemplateSet` is not array type"));

        const Value &tmpValue = value["VideoTrackTemplateSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoTrackTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoTrackTemplateSet.push_back(item);
        }
        m_videoTrackTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("AudioTrackTemplateSet") && !value["AudioTrackTemplateSet"].IsNull())
    {
        if (!value["AudioTrackTemplateSet"].IsArray())
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.AudioTrackTemplateSet` is not array type"));

        const Value &tmpValue = value["AudioTrackTemplateSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTrackTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioTrackTemplateSet.push_back(item);
        }
        m_audioTrackTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("DisableHigherVideoBitrate") && !value["DisableHigherVideoBitrate"].IsNull())
    {
        if (!value["DisableHigherVideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.DisableHigherVideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableHigherVideoBitrate = value["DisableHigherVideoBitrate"].GetUint64();
        m_disableHigherVideoBitrateHasBeenSet = true;
    }

    if (value.HasMember("DisableHigherVideoResolution") && !value["DisableHigherVideoResolution"].IsNull())
    {
        if (!value["DisableHigherVideoResolution"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.DisableHigherVideoResolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableHigherVideoResolution = value["DisableHigherVideoResolution"].GetUint64();
        m_disableHigherVideoResolutionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
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

    if (m_packageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_drmTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_videoTrackTemplateSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTrackTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoTrackTemplateSet.begin(); itr != m_videoTrackTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioTrackTemplateSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTrackTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTrackTemplateSet.begin(); itr != m_audioTrackTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disableHigherVideoBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableHigherVideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHigherVideoBitrate, allocator);
    }

    if (m_disableHigherVideoResolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableHigherVideoResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHigherVideoResolution, allocator);
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

string AdaptiveDynamicStreamingTemplate::GetPackageType() const
{
    return m_packageType;
}

void AdaptiveDynamicStreamingTemplate::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string AdaptiveDynamicStreamingTemplate::GetDrmType() const
{
    return m_drmType;
}

void AdaptiveDynamicStreamingTemplate::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

vector<VideoTrackTemplateInfo> AdaptiveDynamicStreamingTemplate::GetVideoTrackTemplateSet() const
{
    return m_videoTrackTemplateSet;
}

void AdaptiveDynamicStreamingTemplate::SetVideoTrackTemplateSet(const vector<VideoTrackTemplateInfo>& _videoTrackTemplateSet)
{
    m_videoTrackTemplateSet = _videoTrackTemplateSet;
    m_videoTrackTemplateSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::VideoTrackTemplateSetHasBeenSet() const
{
    return m_videoTrackTemplateSetHasBeenSet;
}

vector<AudioTrackTemplateInfo> AdaptiveDynamicStreamingTemplate::GetAudioTrackTemplateSet() const
{
    return m_audioTrackTemplateSet;
}

void AdaptiveDynamicStreamingTemplate::SetAudioTrackTemplateSet(const vector<AudioTrackTemplateInfo>& _audioTrackTemplateSet)
{
    m_audioTrackTemplateSet = _audioTrackTemplateSet;
    m_audioTrackTemplateSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTemplate::AudioTrackTemplateSetHasBeenSet() const
{
    return m_audioTrackTemplateSetHasBeenSet;
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

