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

#include <tencentcloud/live/v20180801/model/SceneVideoExtraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SceneVideoExtraParam::SceneVideoExtraParam() :
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_offPeakHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_enableAudioHasBeenSet(false),
    m_enableBgmHasBeenSet(false),
    m_enablePromptEnhanceHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

CoreInternalOutcome SceneVideoExtraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("OffPeak") && !value["OffPeak"].IsNull())
    {
        if (!value["OffPeak"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.OffPeak` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_offPeak = value["OffPeak"].GetBool();
        m_offPeakHasBeenSet = true;
    }

    if (value.HasMember("LogoAdd") && !value["LogoAdd"].IsNull())
    {
        if (!value["LogoAdd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.LogoAdd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logoAdd = value["LogoAdd"].GetBool();
        m_logoAddHasBeenSet = true;
    }

    if (value.HasMember("EnableAudio") && !value["EnableAudio"].IsNull())
    {
        if (!value["EnableAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.EnableAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAudio = value["EnableAudio"].GetBool();
        m_enableAudioHasBeenSet = true;
    }

    if (value.HasMember("EnableBgm") && !value["EnableBgm"].IsNull())
    {
        if (!value["EnableBgm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.EnableBgm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBgm = value["EnableBgm"].GetBool();
        m_enableBgmHasBeenSet = true;
    }

    if (value.HasMember("EnablePromptEnhance") && !value["EnablePromptEnhance"].IsNull())
    {
        if (!value["EnablePromptEnhance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.EnablePromptEnhance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePromptEnhance = value["EnablePromptEnhance"].GetBool();
        m_enablePromptEnhanceHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoExtraParam.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneVideoExtraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_offPeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffPeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offPeak, allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_enableAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAudio, allocator);
    }

    if (m_enableBgmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBgm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBgm, allocator);
    }

    if (m_enablePromptEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePromptEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePromptEnhance, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

}


string SceneVideoExtraParam::GetResolution() const
{
    return m_resolution;
}

void SceneVideoExtraParam::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SceneVideoExtraParam::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string SceneVideoExtraParam::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SceneVideoExtraParam::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SceneVideoExtraParam::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

bool SceneVideoExtraParam::GetOffPeak() const
{
    return m_offPeak;
}

void SceneVideoExtraParam::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool SceneVideoExtraParam::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}

bool SceneVideoExtraParam::GetLogoAdd() const
{
    return m_logoAdd;
}

void SceneVideoExtraParam::SetLogoAdd(const bool& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SceneVideoExtraParam::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

bool SceneVideoExtraParam::GetEnableAudio() const
{
    return m_enableAudio;
}

void SceneVideoExtraParam::SetEnableAudio(const bool& _enableAudio)
{
    m_enableAudio = _enableAudio;
    m_enableAudioHasBeenSet = true;
}

bool SceneVideoExtraParam::EnableAudioHasBeenSet() const
{
    return m_enableAudioHasBeenSet;
}

bool SceneVideoExtraParam::GetEnableBgm() const
{
    return m_enableBgm;
}

void SceneVideoExtraParam::SetEnableBgm(const bool& _enableBgm)
{
    m_enableBgm = _enableBgm;
    m_enableBgmHasBeenSet = true;
}

bool SceneVideoExtraParam::EnableBgmHasBeenSet() const
{
    return m_enableBgmHasBeenSet;
}

bool SceneVideoExtraParam::GetEnablePromptEnhance() const
{
    return m_enablePromptEnhance;
}

void SceneVideoExtraParam::SetEnablePromptEnhance(const bool& _enablePromptEnhance)
{
    m_enablePromptEnhance = _enablePromptEnhance;
    m_enablePromptEnhanceHasBeenSet = true;
}

bool SceneVideoExtraParam::EnablePromptEnhanceHasBeenSet() const
{
    return m_enablePromptEnhanceHasBeenSet;
}

string SceneVideoExtraParam::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SceneVideoExtraParam::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SceneVideoExtraParam::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

