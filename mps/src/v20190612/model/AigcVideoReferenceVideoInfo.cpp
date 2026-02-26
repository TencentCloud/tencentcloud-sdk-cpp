/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceVideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcVideoReferenceVideoInfo::AigcVideoReferenceVideoInfo() :
    m_videoUrlHasBeenSet(false),
    m_referTypeHasBeenSet(false),
    m_keepOriginalSoundHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoReferenceVideoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoReferenceVideoInfo.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("ReferType") && !value["ReferType"].IsNull())
    {
        if (!value["ReferType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoReferenceVideoInfo.ReferType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referType = string(value["ReferType"].GetString());
        m_referTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepOriginalSound") && !value["KeepOriginalSound"].IsNull())
    {
        if (!value["KeepOriginalSound"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoReferenceVideoInfo.KeepOriginalSound` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepOriginalSound = string(value["KeepOriginalSound"].GetString());
        m_keepOriginalSoundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoReferenceVideoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_referTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referType.c_str(), allocator).Move(), allocator);
    }

    if (m_keepOriginalSoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepOriginalSound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepOriginalSound.c_str(), allocator).Move(), allocator);
    }

}


string AigcVideoReferenceVideoInfo::GetVideoUrl() const
{
    return m_videoUrl;
}

void AigcVideoReferenceVideoInfo::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool AigcVideoReferenceVideoInfo::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string AigcVideoReferenceVideoInfo::GetReferType() const
{
    return m_referType;
}

void AigcVideoReferenceVideoInfo::SetReferType(const string& _referType)
{
    m_referType = _referType;
    m_referTypeHasBeenSet = true;
}

bool AigcVideoReferenceVideoInfo::ReferTypeHasBeenSet() const
{
    return m_referTypeHasBeenSet;
}

string AigcVideoReferenceVideoInfo::GetKeepOriginalSound() const
{
    return m_keepOriginalSound;
}

void AigcVideoReferenceVideoInfo::SetKeepOriginalSound(const string& _keepOriginalSound)
{
    m_keepOriginalSound = _keepOriginalSound;
    m_keepOriginalSoundHasBeenSet = true;
}

bool AigcVideoReferenceVideoInfo::KeepOriginalSoundHasBeenSet() const
{
    return m_keepOriginalSoundHasBeenSet;
}

