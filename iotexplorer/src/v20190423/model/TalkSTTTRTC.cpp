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

#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTTRTC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkSTTTRTC::TalkSTTTRTC() :
    m_languageHasBeenSet(false),
    m_vADSilenceTimeHasBeenSet(false),
    m_vADLevelHasBeenSet(false)
{
}

CoreInternalOutcome TalkSTTTRTC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTTRTC.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("VADSilenceTime") && !value["VADSilenceTime"].IsNull())
    {
        if (!value["VADSilenceTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTTRTC.VADSilenceTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vADSilenceTime = value["VADSilenceTime"].GetInt64();
        m_vADSilenceTimeHasBeenSet = true;
    }

    if (value.HasMember("VADLevel") && !value["VADLevel"].IsNull())
    {
        if (!value["VADLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTTRTC.VADLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vADLevel = value["VADLevel"].GetInt64();
        m_vADLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkSTTTRTC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_vADSilenceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VADSilenceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vADSilenceTime, allocator);
    }

    if (m_vADLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VADLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vADLevel, allocator);
    }

}


string TalkSTTTRTC::GetLanguage() const
{
    return m_language;
}

void TalkSTTTRTC::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool TalkSTTTRTC::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

int64_t TalkSTTTRTC::GetVADSilenceTime() const
{
    return m_vADSilenceTime;
}

void TalkSTTTRTC::SetVADSilenceTime(const int64_t& _vADSilenceTime)
{
    m_vADSilenceTime = _vADSilenceTime;
    m_vADSilenceTimeHasBeenSet = true;
}

bool TalkSTTTRTC::VADSilenceTimeHasBeenSet() const
{
    return m_vADSilenceTimeHasBeenSet;
}

int64_t TalkSTTTRTC::GetVADLevel() const
{
    return m_vADLevel;
}

void TalkSTTTRTC::SetVADLevel(const int64_t& _vADLevel)
{
    m_vADLevel = _vADLevel;
    m_vADLevelHasBeenSet = true;
}

bool TalkSTTTRTC::VADLevelHasBeenSet() const
{
    return m_vADLevelHasBeenSet;
}

