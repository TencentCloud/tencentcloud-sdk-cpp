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

#include <tencentcloud/cme/v20191029/model/MediaTrackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaTrackItem::MediaTrackItem() :
    m_typeHasBeenSet(false),
    m_videoItemHasBeenSet(false),
    m_audioItemHasBeenSet(false),
    m_emptyItemHasBeenSet(false),
    m_transitionItemHasBeenSet(false)
{
}

CoreInternalOutcome MediaTrackItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTrackItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VideoItem") && !value["VideoItem"].IsNull())
    {
        if (!value["VideoItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTrackItem.VideoItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoItem.Deserialize(value["VideoItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoItemHasBeenSet = true;
    }

    if (value.HasMember("AudioItem") && !value["AudioItem"].IsNull())
    {
        if (!value["AudioItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTrackItem.AudioItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioItem.Deserialize(value["AudioItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioItemHasBeenSet = true;
    }

    if (value.HasMember("EmptyItem") && !value["EmptyItem"].IsNull())
    {
        if (!value["EmptyItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTrackItem.EmptyItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emptyItem.Deserialize(value["EmptyItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyItemHasBeenSet = true;
    }

    if (value.HasMember("TransitionItem") && !value["TransitionItem"].IsNull())
    {
        if (!value["TransitionItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTrackItem.TransitionItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transitionItem.Deserialize(value["TransitionItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transitionItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTrackItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_videoItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emptyItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emptyItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transitionItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transitionItem.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaTrackItem::GetType() const
{
    return m_type;
}

void MediaTrackItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaTrackItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

VideoTrackItem MediaTrackItem::GetVideoItem() const
{
    return m_videoItem;
}

void MediaTrackItem::SetVideoItem(const VideoTrackItem& _videoItem)
{
    m_videoItem = _videoItem;
    m_videoItemHasBeenSet = true;
}

bool MediaTrackItem::VideoItemHasBeenSet() const
{
    return m_videoItemHasBeenSet;
}

AudioTrackItem MediaTrackItem::GetAudioItem() const
{
    return m_audioItem;
}

void MediaTrackItem::SetAudioItem(const AudioTrackItem& _audioItem)
{
    m_audioItem = _audioItem;
    m_audioItemHasBeenSet = true;
}

bool MediaTrackItem::AudioItemHasBeenSet() const
{
    return m_audioItemHasBeenSet;
}

EmptyTrackItem MediaTrackItem::GetEmptyItem() const
{
    return m_emptyItem;
}

void MediaTrackItem::SetEmptyItem(const EmptyTrackItem& _emptyItem)
{
    m_emptyItem = _emptyItem;
    m_emptyItemHasBeenSet = true;
}

bool MediaTrackItem::EmptyItemHasBeenSet() const
{
    return m_emptyItemHasBeenSet;
}

MediaTransitionItem MediaTrackItem::GetTransitionItem() const
{
    return m_transitionItem;
}

void MediaTrackItem::SetTransitionItem(const MediaTransitionItem& _transitionItem)
{
    m_transitionItem = _transitionItem;
    m_transitionItemHasBeenSet = true;
}

bool MediaTrackItem::TransitionItemHasBeenSet() const
{
    return m_transitionItemHasBeenSet;
}

