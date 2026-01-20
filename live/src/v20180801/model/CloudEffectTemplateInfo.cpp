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

#include <tencentcloud/live/v20180801/model/CloudEffectTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CloudEffectTemplateInfo::CloudEffectTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_coverImageUrlHasBeenSet(false),
    m_videoRatioHasBeenSet(false)
{
}

CoreInternalOutcome CloudEffectTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectTemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectTemplateInfo.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverImageUrl") && !value["CoverImageUrl"].IsNull())
    {
        if (!value["CoverImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectTemplateInfo.CoverImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverImageUrl = string(value["CoverImageUrl"].GetString());
        m_coverImageUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoRatio") && !value["VideoRatio"].IsNull())
    {
        if (!value["VideoRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudEffectTemplateInfo.VideoRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoRatio = string(value["VideoRatio"].GetString());
        m_videoRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudEffectTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoRatio.c_str(), allocator).Move(), allocator);
    }

}


string CloudEffectTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void CloudEffectTemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CloudEffectTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CloudEffectTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void CloudEffectTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CloudEffectTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CloudEffectTemplateInfo::GetVideoUrl() const
{
    return m_videoUrl;
}

void CloudEffectTemplateInfo::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool CloudEffectTemplateInfo::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string CloudEffectTemplateInfo::GetCoverImageUrl() const
{
    return m_coverImageUrl;
}

void CloudEffectTemplateInfo::SetCoverImageUrl(const string& _coverImageUrl)
{
    m_coverImageUrl = _coverImageUrl;
    m_coverImageUrlHasBeenSet = true;
}

bool CloudEffectTemplateInfo::CoverImageUrlHasBeenSet() const
{
    return m_coverImageUrlHasBeenSet;
}

string CloudEffectTemplateInfo::GetVideoRatio() const
{
    return m_videoRatio;
}

void CloudEffectTemplateInfo::SetVideoRatio(const string& _videoRatio)
{
    m_videoRatio = _videoRatio;
    m_videoRatioHasBeenSet = true;
}

bool CloudEffectTemplateInfo::VideoRatioHasBeenSet() const
{
    return m_videoRatioHasBeenSet;
}

