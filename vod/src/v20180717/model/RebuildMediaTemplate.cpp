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

#include <tencentcloud/vod/v20180717/model/RebuildMediaTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RebuildMediaTemplate::RebuildMediaTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_rebuildVideoInfoHasBeenSet(false),
    m_rebuildAudioInfoHasBeenSet(false),
    m_targetVideoInfoHasBeenSet(false),
    m_targetAudioInfoHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RebuildMediaTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("RebuildVideoInfo") && !value["RebuildVideoInfo"].IsNull())
    {
        if (!value["RebuildVideoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.RebuildVideoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rebuildVideoInfo.Deserialize(value["RebuildVideoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rebuildVideoInfoHasBeenSet = true;
    }

    if (value.HasMember("RebuildAudioInfo") && !value["RebuildAudioInfo"].IsNull())
    {
        if (!value["RebuildAudioInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.RebuildAudioInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rebuildAudioInfo.Deserialize(value["RebuildAudioInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rebuildAudioInfoHasBeenSet = true;
    }

    if (value.HasMember("TargetVideoInfo") && !value["TargetVideoInfo"].IsNull())
    {
        if (!value["TargetVideoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.TargetVideoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetVideoInfo.Deserialize(value["TargetVideoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetVideoInfoHasBeenSet = true;
    }

    if (value.HasMember("TargetAudioInfo") && !value["TargetAudioInfo"].IsNull())
    {
        if (!value["TargetAudioInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.TargetAudioInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetAudioInfo.Deserialize(value["TargetAudioInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetAudioInfoHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebuildMediaTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_rebuildVideoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebuildVideoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rebuildVideoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rebuildAudioInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebuildAudioInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rebuildAudioInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetVideoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVideoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetVideoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetAudioInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAudioInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetAudioInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
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


int64_t RebuildMediaTemplate::GetDefinition() const
{
    return m_definition;
}

void RebuildMediaTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool RebuildMediaTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string RebuildMediaTemplate::GetType() const
{
    return m_type;
}

void RebuildMediaTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RebuildMediaTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RebuildMediaTemplate::GetName() const
{
    return m_name;
}

void RebuildMediaTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RebuildMediaTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RebuildMediaTemplate::GetComment() const
{
    return m_comment;
}

void RebuildMediaTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool RebuildMediaTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

RebuildVideoInfo RebuildMediaTemplate::GetRebuildVideoInfo() const
{
    return m_rebuildVideoInfo;
}

void RebuildMediaTemplate::SetRebuildVideoInfo(const RebuildVideoInfo& _rebuildVideoInfo)
{
    m_rebuildVideoInfo = _rebuildVideoInfo;
    m_rebuildVideoInfoHasBeenSet = true;
}

bool RebuildMediaTemplate::RebuildVideoInfoHasBeenSet() const
{
    return m_rebuildVideoInfoHasBeenSet;
}

RebuildAudioInfo RebuildMediaTemplate::GetRebuildAudioInfo() const
{
    return m_rebuildAudioInfo;
}

void RebuildMediaTemplate::SetRebuildAudioInfo(const RebuildAudioInfo& _rebuildAudioInfo)
{
    m_rebuildAudioInfo = _rebuildAudioInfo;
    m_rebuildAudioInfoHasBeenSet = true;
}

bool RebuildMediaTemplate::RebuildAudioInfoHasBeenSet() const
{
    return m_rebuildAudioInfoHasBeenSet;
}

RebuildMediaTargetVideoStream RebuildMediaTemplate::GetTargetVideoInfo() const
{
    return m_targetVideoInfo;
}

void RebuildMediaTemplate::SetTargetVideoInfo(const RebuildMediaTargetVideoStream& _targetVideoInfo)
{
    m_targetVideoInfo = _targetVideoInfo;
    m_targetVideoInfoHasBeenSet = true;
}

bool RebuildMediaTemplate::TargetVideoInfoHasBeenSet() const
{
    return m_targetVideoInfoHasBeenSet;
}

RebuildMediaTargetAudioStream RebuildMediaTemplate::GetTargetAudioInfo() const
{
    return m_targetAudioInfo;
}

void RebuildMediaTemplate::SetTargetAudioInfo(const RebuildMediaTargetAudioStream& _targetAudioInfo)
{
    m_targetAudioInfo = _targetAudioInfo;
    m_targetAudioInfoHasBeenSet = true;
}

bool RebuildMediaTemplate::TargetAudioInfoHasBeenSet() const
{
    return m_targetAudioInfoHasBeenSet;
}

string RebuildMediaTemplate::GetContainer() const
{
    return m_container;
}

void RebuildMediaTemplate::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool RebuildMediaTemplate::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t RebuildMediaTemplate::GetRemoveVideo() const
{
    return m_removeVideo;
}

void RebuildMediaTemplate::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool RebuildMediaTemplate::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t RebuildMediaTemplate::GetRemoveAudio() const
{
    return m_removeAudio;
}

void RebuildMediaTemplate::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool RebuildMediaTemplate::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

string RebuildMediaTemplate::GetCreateTime() const
{
    return m_createTime;
}

void RebuildMediaTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RebuildMediaTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RebuildMediaTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void RebuildMediaTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RebuildMediaTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

