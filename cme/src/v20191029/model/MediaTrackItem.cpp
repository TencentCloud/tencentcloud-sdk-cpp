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
using namespace rapidjson;
using namespace std;

MediaTrackItem::MediaTrackItem() :
    m_typeHasBeenSet(false),
    m_videoItemHasBeenSet(false),
    m_audioItemHasBeenSet(false),
    m_emptyItemHasBeenSet(false)
{
}

CoreInternalOutcome MediaTrackItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaTrackItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VideoItem") && !value["VideoItem"].IsNull())
    {
        if (!value["VideoItem"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaTrackItem.VideoItem` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `MediaTrackItem.AudioItem` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `MediaTrackItem.EmptyItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emptyItem.Deserialize(value["EmptyItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTrackItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_videoItemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioItemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_audioItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emptyItemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmptyItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_emptyItem.ToJsonObject(value[key.c_str()], allocator);
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

