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

#include <tencentcloud/mps/v20190612/model/AigcVideoExtraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcVideoExtraParam::AigcVideoExtraParam() :
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_enableAudioHasBeenSet(false),
    m_offPeakHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoExtraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoExtraParam.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoExtraParam.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("LogoAdd") && !value["LogoAdd"].IsNull())
    {
        if (!value["LogoAdd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoExtraParam.LogoAdd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logoAdd = value["LogoAdd"].GetInt64();
        m_logoAddHasBeenSet = true;
    }

    if (value.HasMember("EnableAudio") && !value["EnableAudio"].IsNull())
    {
        if (!value["EnableAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoExtraParam.EnableAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAudio = value["EnableAudio"].GetBool();
        m_enableAudioHasBeenSet = true;
    }

    if (value.HasMember("OffPeak") && !value["OffPeak"].IsNull())
    {
        if (!value["OffPeak"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoExtraParam.OffPeak` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_offPeak = value["OffPeak"].GetBool();
        m_offPeakHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoExtraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_offPeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffPeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offPeak, allocator);
    }

}


string AigcVideoExtraParam::GetResolution() const
{
    return m_resolution;
}

void AigcVideoExtraParam::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AigcVideoExtraParam::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string AigcVideoExtraParam::GetAspectRatio() const
{
    return m_aspectRatio;
}

void AigcVideoExtraParam::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool AigcVideoExtraParam::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

int64_t AigcVideoExtraParam::GetLogoAdd() const
{
    return m_logoAdd;
}

void AigcVideoExtraParam::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool AigcVideoExtraParam::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

bool AigcVideoExtraParam::GetEnableAudio() const
{
    return m_enableAudio;
}

void AigcVideoExtraParam::SetEnableAudio(const bool& _enableAudio)
{
    m_enableAudio = _enableAudio;
    m_enableAudioHasBeenSet = true;
}

bool AigcVideoExtraParam::EnableAudioHasBeenSet() const
{
    return m_enableAudioHasBeenSet;
}

bool AigcVideoExtraParam::GetOffPeak() const
{
    return m_offPeak;
}

void AigcVideoExtraParam::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool AigcVideoExtraParam::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}

