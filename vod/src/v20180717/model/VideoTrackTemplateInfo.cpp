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

#include <tencentcloud/vod/v20180717/model/VideoTrackTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

VideoTrackTemplateInfo::VideoTrackTemplateInfo() :
    m_definitionHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome VideoTrackTemplateInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResolutionAdaptive") && !value["ResolutionAdaptive"].IsNull())
    {
        if (!value["ResolutionAdaptive"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.ResolutionAdaptive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAdaptive = string(value["ResolutionAdaptive"].GetString());
        m_resolutionAdaptiveHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.FillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = string(value["FillType"].GetString());
        m_fillTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoTrackTemplateInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoTrackTemplateInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_fpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
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

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionAdaptiveHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResolutionAdaptive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resolutionAdaptive.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fillType.c_str(), allocator).Move(), allocator);
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


int64_t VideoTrackTemplateInfo::GetDefinition() const
{
    return m_definition;
}

void VideoTrackTemplateInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool VideoTrackTemplateInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string VideoTrackTemplateInfo::GetCodec() const
{
    return m_codec;
}

void VideoTrackTemplateInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoTrackTemplateInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t VideoTrackTemplateInfo::GetFps() const
{
    return m_fps;
}

void VideoTrackTemplateInfo::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoTrackTemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t VideoTrackTemplateInfo::GetBitrate() const
{
    return m_bitrate;
}

void VideoTrackTemplateInfo::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoTrackTemplateInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string VideoTrackTemplateInfo::GetName() const
{
    return m_name;
}

void VideoTrackTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VideoTrackTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VideoTrackTemplateInfo::GetComment() const
{
    return m_comment;
}

void VideoTrackTemplateInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool VideoTrackTemplateInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string VideoTrackTemplateInfo::GetType() const
{
    return m_type;
}

void VideoTrackTemplateInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoTrackTemplateInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VideoTrackTemplateInfo::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void VideoTrackTemplateInfo::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool VideoTrackTemplateInfo::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

uint64_t VideoTrackTemplateInfo::GetWidth() const
{
    return m_width;
}

void VideoTrackTemplateInfo::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoTrackTemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t VideoTrackTemplateInfo::GetHeight() const
{
    return m_height;
}

void VideoTrackTemplateInfo::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoTrackTemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string VideoTrackTemplateInfo::GetFillType() const
{
    return m_fillType;
}

void VideoTrackTemplateInfo::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool VideoTrackTemplateInfo::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

string VideoTrackTemplateInfo::GetCreateTime() const
{
    return m_createTime;
}

void VideoTrackTemplateInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VideoTrackTemplateInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VideoTrackTemplateInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void VideoTrackTemplateInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VideoTrackTemplateInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

