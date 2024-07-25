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

#include <tencentcloud/vm/v20201229/model/SegmentCosUrlList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

SegmentCosUrlList::SegmentCosUrlList() :
    m_imageAllUrlHasBeenSet(false),
    m_audioAllUrlHasBeenSet(false),
    m_imageBlockUrlHasBeenSet(false),
    m_audioBlockUrlHasBeenSet(false),
    m_asrUrlHasBeenSet(false)
{
}

CoreInternalOutcome SegmentCosUrlList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageAllUrl") && !value["ImageAllUrl"].IsNull())
    {
        if (!value["ImageAllUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList.ImageAllUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageAllUrl = string(value["ImageAllUrl"].GetString());
        m_imageAllUrlHasBeenSet = true;
    }

    if (value.HasMember("AudioAllUrl") && !value["AudioAllUrl"].IsNull())
    {
        if (!value["AudioAllUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList.AudioAllUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioAllUrl = string(value["AudioAllUrl"].GetString());
        m_audioAllUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageBlockUrl") && !value["ImageBlockUrl"].IsNull())
    {
        if (!value["ImageBlockUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList.ImageBlockUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageBlockUrl = string(value["ImageBlockUrl"].GetString());
        m_imageBlockUrlHasBeenSet = true;
    }

    if (value.HasMember("AudioBlockUrl") && !value["AudioBlockUrl"].IsNull())
    {
        if (!value["AudioBlockUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList.AudioBlockUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioBlockUrl = string(value["AudioBlockUrl"].GetString());
        m_audioBlockUrlHasBeenSet = true;
    }

    if (value.HasMember("AsrUrl") && !value["AsrUrl"].IsNull())
    {
        if (!value["AsrUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList.AsrUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrUrl = string(value["AsrUrl"].GetString());
        m_asrUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentCosUrlList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageAllUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageAllUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageAllUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioAllUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioAllUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioAllUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBlockUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBlockUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageBlockUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBlockUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBlockUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioBlockUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_asrUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrUrl.c_str(), allocator).Move(), allocator);
    }

}


string SegmentCosUrlList::GetImageAllUrl() const
{
    return m_imageAllUrl;
}

void SegmentCosUrlList::SetImageAllUrl(const string& _imageAllUrl)
{
    m_imageAllUrl = _imageAllUrl;
    m_imageAllUrlHasBeenSet = true;
}

bool SegmentCosUrlList::ImageAllUrlHasBeenSet() const
{
    return m_imageAllUrlHasBeenSet;
}

string SegmentCosUrlList::GetAudioAllUrl() const
{
    return m_audioAllUrl;
}

void SegmentCosUrlList::SetAudioAllUrl(const string& _audioAllUrl)
{
    m_audioAllUrl = _audioAllUrl;
    m_audioAllUrlHasBeenSet = true;
}

bool SegmentCosUrlList::AudioAllUrlHasBeenSet() const
{
    return m_audioAllUrlHasBeenSet;
}

string SegmentCosUrlList::GetImageBlockUrl() const
{
    return m_imageBlockUrl;
}

void SegmentCosUrlList::SetImageBlockUrl(const string& _imageBlockUrl)
{
    m_imageBlockUrl = _imageBlockUrl;
    m_imageBlockUrlHasBeenSet = true;
}

bool SegmentCosUrlList::ImageBlockUrlHasBeenSet() const
{
    return m_imageBlockUrlHasBeenSet;
}

string SegmentCosUrlList::GetAudioBlockUrl() const
{
    return m_audioBlockUrl;
}

void SegmentCosUrlList::SetAudioBlockUrl(const string& _audioBlockUrl)
{
    m_audioBlockUrl = _audioBlockUrl;
    m_audioBlockUrlHasBeenSet = true;
}

bool SegmentCosUrlList::AudioBlockUrlHasBeenSet() const
{
    return m_audioBlockUrlHasBeenSet;
}

string SegmentCosUrlList::GetAsrUrl() const
{
    return m_asrUrl;
}

void SegmentCosUrlList::SetAsrUrl(const string& _asrUrl)
{
    m_asrUrl = _asrUrl;
    m_asrUrlHasBeenSet = true;
}

bool SegmentCosUrlList::AsrUrlHasBeenSet() const
{
    return m_asrUrlHasBeenSet;
}

