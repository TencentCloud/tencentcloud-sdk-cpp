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

#include <tencentcloud/mps/v20190612/model/DubbingTranslateConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DubbingTranslateConfig::DubbingTranslateConfig() :
    m_videoSrcLanguageHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false),
    m_simplifyTranslationHasBeenSet(false)
{
}

CoreInternalOutcome DubbingTranslateConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoSrcLanguage") && !value["VideoSrcLanguage"].IsNull())
    {
        if (!value["VideoSrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingTranslateConfig.VideoSrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSrcLanguage = string(value["VideoSrcLanguage"].GetString());
        m_videoSrcLanguageHasBeenSet = true;
    }

    if (value.HasMember("TranslateDstLanguage") && !value["TranslateDstLanguage"].IsNull())
    {
        if (!value["TranslateDstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingTranslateConfig.TranslateDstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateDstLanguage = string(value["TranslateDstLanguage"].GetString());
        m_translateDstLanguageHasBeenSet = true;
    }

    if (value.HasMember("SimplifyTranslation") && !value["SimplifyTranslation"].IsNull())
    {
        if (!value["SimplifyTranslation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingTranslateConfig.SimplifyTranslation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_simplifyTranslation = string(value["SimplifyTranslation"].GetString());
        m_simplifyTranslationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DubbingTranslateConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoSrcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoSrcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_translateDstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateDstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateDstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_simplifyTranslationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimplifyTranslation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_simplifyTranslation.c_str(), allocator).Move(), allocator);
    }

}


string DubbingTranslateConfig::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void DubbingTranslateConfig::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool DubbingTranslateConfig::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string DubbingTranslateConfig::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void DubbingTranslateConfig::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool DubbingTranslateConfig::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}

string DubbingTranslateConfig::GetSimplifyTranslation() const
{
    return m_simplifyTranslation;
}

void DubbingTranslateConfig::SetSimplifyTranslation(const string& _simplifyTranslation)
{
    m_simplifyTranslation = _simplifyTranslation;
    m_simplifyTranslationHasBeenSet = true;
}

bool DubbingTranslateConfig::SimplifyTranslationHasBeenSet() const
{
    return m_simplifyTranslationHasBeenSet;
}

