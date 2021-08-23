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

#include <tencentcloud/tci/v20190318/model/Function.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

Function::Function() :
    m_enableAllTextHasBeenSet(false),
    m_enableKeywordHasBeenSet(false),
    m_enableMuteDetectHasBeenSet(false),
    m_enableVadInfoHasBeenSet(false),
    m_enableVolumeHasBeenSet(false)
{
}

CoreInternalOutcome Function::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableAllText") && !value["EnableAllText"].IsNull())
    {
        if (!value["EnableAllText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Function.EnableAllText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAllText = value["EnableAllText"].GetBool();
        m_enableAllTextHasBeenSet = true;
    }

    if (value.HasMember("EnableKeyword") && !value["EnableKeyword"].IsNull())
    {
        if (!value["EnableKeyword"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Function.EnableKeyword` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableKeyword = value["EnableKeyword"].GetBool();
        m_enableKeywordHasBeenSet = true;
    }

    if (value.HasMember("EnableMuteDetect") && !value["EnableMuteDetect"].IsNull())
    {
        if (!value["EnableMuteDetect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Function.EnableMuteDetect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMuteDetect = value["EnableMuteDetect"].GetBool();
        m_enableMuteDetectHasBeenSet = true;
    }

    if (value.HasMember("EnableVadInfo") && !value["EnableVadInfo"].IsNull())
    {
        if (!value["EnableVadInfo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Function.EnableVadInfo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableVadInfo = value["EnableVadInfo"].GetBool();
        m_enableVadInfoHasBeenSet = true;
    }

    if (value.HasMember("EnableVolume") && !value["EnableVolume"].IsNull())
    {
        if (!value["EnableVolume"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Function.EnableVolume` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableVolume = value["EnableVolume"].GetBool();
        m_enableVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Function::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableAllTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAllText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAllText, allocator);
    }

    if (m_enableKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKeyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKeyword, allocator);
    }

    if (m_enableMuteDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMuteDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMuteDetect, allocator);
    }

    if (m_enableVadInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVadInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableVadInfo, allocator);
    }

    if (m_enableVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableVolume, allocator);
    }

}


bool Function::GetEnableAllText() const
{
    return m_enableAllText;
}

void Function::SetEnableAllText(const bool& _enableAllText)
{
    m_enableAllText = _enableAllText;
    m_enableAllTextHasBeenSet = true;
}

bool Function::EnableAllTextHasBeenSet() const
{
    return m_enableAllTextHasBeenSet;
}

bool Function::GetEnableKeyword() const
{
    return m_enableKeyword;
}

void Function::SetEnableKeyword(const bool& _enableKeyword)
{
    m_enableKeyword = _enableKeyword;
    m_enableKeywordHasBeenSet = true;
}

bool Function::EnableKeywordHasBeenSet() const
{
    return m_enableKeywordHasBeenSet;
}

bool Function::GetEnableMuteDetect() const
{
    return m_enableMuteDetect;
}

void Function::SetEnableMuteDetect(const bool& _enableMuteDetect)
{
    m_enableMuteDetect = _enableMuteDetect;
    m_enableMuteDetectHasBeenSet = true;
}

bool Function::EnableMuteDetectHasBeenSet() const
{
    return m_enableMuteDetectHasBeenSet;
}

bool Function::GetEnableVadInfo() const
{
    return m_enableVadInfo;
}

void Function::SetEnableVadInfo(const bool& _enableVadInfo)
{
    m_enableVadInfo = _enableVadInfo;
    m_enableVadInfoHasBeenSet = true;
}

bool Function::EnableVadInfoHasBeenSet() const
{
    return m_enableVadInfoHasBeenSet;
}

bool Function::GetEnableVolume() const
{
    return m_enableVolume;
}

void Function::SetEnableVolume(const bool& _enableVolume)
{
    m_enableVolume = _enableVolume;
    m_enableVolumeHasBeenSet = true;
}

bool Function::EnableVolumeHasBeenSet() const
{
    return m_enableVolumeHasBeenSet;
}

