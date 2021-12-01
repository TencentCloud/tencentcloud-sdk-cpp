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

#include <tencentcloud/ivld/v20210903/model/MediaPreknownInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MediaPreknownInfo::MediaPreknownInfo() :
    m_mediaTypeHasBeenSet(false),
    m_mediaLabelHasBeenSet(false),
    m_mediaSecondLabelHasBeenSet(false),
    m_mediaLangHasBeenSet(false)
{
}

CoreInternalOutcome MediaPreknownInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaPreknownInfo.MediaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = value["MediaType"].GetInt64();
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("MediaLabel") && !value["MediaLabel"].IsNull())
    {
        if (!value["MediaLabel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaPreknownInfo.MediaLabel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaLabel = value["MediaLabel"].GetInt64();
        m_mediaLabelHasBeenSet = true;
    }

    if (value.HasMember("MediaSecondLabel") && !value["MediaSecondLabel"].IsNull())
    {
        if (!value["MediaSecondLabel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaPreknownInfo.MediaSecondLabel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaSecondLabel = value["MediaSecondLabel"].GetInt64();
        m_mediaSecondLabelHasBeenSet = true;
    }

    if (value.HasMember("MediaLang") && !value["MediaLang"].IsNull())
    {
        if (!value["MediaLang"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaPreknownInfo.MediaLang` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaLang = value["MediaLang"].GetInt64();
        m_mediaLangHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaPreknownInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaType, allocator);
    }

    if (m_mediaLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaLabel, allocator);
    }

    if (m_mediaSecondLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaSecondLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaSecondLabel, allocator);
    }

    if (m_mediaLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaLang, allocator);
    }

}


int64_t MediaPreknownInfo::GetMediaType() const
{
    return m_mediaType;
}

void MediaPreknownInfo::SetMediaType(const int64_t& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool MediaPreknownInfo::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

int64_t MediaPreknownInfo::GetMediaLabel() const
{
    return m_mediaLabel;
}

void MediaPreknownInfo::SetMediaLabel(const int64_t& _mediaLabel)
{
    m_mediaLabel = _mediaLabel;
    m_mediaLabelHasBeenSet = true;
}

bool MediaPreknownInfo::MediaLabelHasBeenSet() const
{
    return m_mediaLabelHasBeenSet;
}

int64_t MediaPreknownInfo::GetMediaSecondLabel() const
{
    return m_mediaSecondLabel;
}

void MediaPreknownInfo::SetMediaSecondLabel(const int64_t& _mediaSecondLabel)
{
    m_mediaSecondLabel = _mediaSecondLabel;
    m_mediaSecondLabelHasBeenSet = true;
}

bool MediaPreknownInfo::MediaSecondLabelHasBeenSet() const
{
    return m_mediaSecondLabelHasBeenSet;
}

int64_t MediaPreknownInfo::GetMediaLang() const
{
    return m_mediaLang;
}

void MediaPreknownInfo::SetMediaLang(const int64_t& _mediaLang)
{
    m_mediaLang = _mediaLang;
    m_mediaLangHasBeenSet = true;
}

bool MediaPreknownInfo::MediaLangHasBeenSet() const
{
    return m_mediaLangHasBeenSet;
}

