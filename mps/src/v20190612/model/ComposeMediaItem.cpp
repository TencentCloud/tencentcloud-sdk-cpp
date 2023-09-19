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

#include <tencentcloud/mps/v20190612/model/ComposeMediaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeMediaItem::ComposeMediaItem() :
    m_typeHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_transitionHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_emptyHasBeenSet(false)
{
}

CoreInternalOutcome ComposeMediaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Video` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_video.Deserialize(value["Video"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Audio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audio.Deserialize(value["Audio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Transition") && !value["Transition"].IsNull())
    {
        if (!value["Transition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Transition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transition.Deserialize(value["Transition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transitionHasBeenSet = true;
    }

    if (value.HasMember("Subtitle") && !value["Subtitle"].IsNull())
    {
        if (!value["Subtitle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Subtitle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitle.Deserialize(value["Subtitle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleHasBeenSet = true;
    }

    if (value.HasMember("Empty") && !value["Empty"].IsNull())
    {
        if (!value["Empty"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaItem.Empty` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_empty.Deserialize(value["Empty"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeMediaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_video.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Empty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_empty.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ComposeMediaItem::GetType() const
{
    return m_type;
}

void ComposeMediaItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ComposeMediaItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ComposeVideoItem ComposeMediaItem::GetVideo() const
{
    return m_video;
}

void ComposeMediaItem::SetVideo(const ComposeVideoItem& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool ComposeMediaItem::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

ComposeAudioItem ComposeMediaItem::GetAudio() const
{
    return m_audio;
}

void ComposeMediaItem::SetAudio(const ComposeAudioItem& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool ComposeMediaItem::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

ComposeImageItem ComposeMediaItem::GetImage() const
{
    return m_image;
}

void ComposeMediaItem::SetImage(const ComposeImageItem& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ComposeMediaItem::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

ComposeTransitionItem ComposeMediaItem::GetTransition() const
{
    return m_transition;
}

void ComposeMediaItem::SetTransition(const ComposeTransitionItem& _transition)
{
    m_transition = _transition;
    m_transitionHasBeenSet = true;
}

bool ComposeMediaItem::TransitionHasBeenSet() const
{
    return m_transitionHasBeenSet;
}

ComposeSubtitleItem ComposeMediaItem::GetSubtitle() const
{
    return m_subtitle;
}

void ComposeMediaItem::SetSubtitle(const ComposeSubtitleItem& _subtitle)
{
    m_subtitle = _subtitle;
    m_subtitleHasBeenSet = true;
}

bool ComposeMediaItem::SubtitleHasBeenSet() const
{
    return m_subtitleHasBeenSet;
}

ComposeEmptyItem ComposeMediaItem::GetEmpty() const
{
    return m_empty;
}

void ComposeMediaItem::SetEmpty(const ComposeEmptyItem& _empty)
{
    m_empty = _empty;
    m_emptyHasBeenSet = true;
}

bool ComposeMediaItem::EmptyHasBeenSet() const
{
    return m_emptyHasBeenSet;
}

