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

#include <tencentcloud/mps/v20190612/model/AudioEnhanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AudioEnhanceConfig::AudioEnhanceConfig() :
    m_denoiseHasBeenSet(false),
    m_separateHasBeenSet(false),
    m_volumeBalanceHasBeenSet(false),
    m_beautifyHasBeenSet(false)
{
}

CoreInternalOutcome AudioEnhanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Denoise") && !value["Denoise"].IsNull())
    {
        if (!value["Denoise"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEnhanceConfig.Denoise` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_denoise.Deserialize(value["Denoise"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_denoiseHasBeenSet = true;
    }

    if (value.HasMember("Separate") && !value["Separate"].IsNull())
    {
        if (!value["Separate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEnhanceConfig.Separate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_separate.Deserialize(value["Separate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_separateHasBeenSet = true;
    }

    if (value.HasMember("VolumeBalance") && !value["VolumeBalance"].IsNull())
    {
        if (!value["VolumeBalance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEnhanceConfig.VolumeBalance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeBalance.Deserialize(value["VolumeBalance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeBalanceHasBeenSet = true;
    }

    if (value.HasMember("Beautify") && !value["Beautify"].IsNull())
    {
        if (!value["Beautify"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEnhanceConfig.Beautify` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_beautify.Deserialize(value["Beautify"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_beautifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioEnhanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_denoiseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Denoise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_denoise.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_separateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Separate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_separate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeBalance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_beautifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Beautify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_beautify.ToJsonObject(value[key.c_str()], allocator);
    }

}


AudioDenoiseConfig AudioEnhanceConfig::GetDenoise() const
{
    return m_denoise;
}

void AudioEnhanceConfig::SetDenoise(const AudioDenoiseConfig& _denoise)
{
    m_denoise = _denoise;
    m_denoiseHasBeenSet = true;
}

bool AudioEnhanceConfig::DenoiseHasBeenSet() const
{
    return m_denoiseHasBeenSet;
}

AudioSeparateConfig AudioEnhanceConfig::GetSeparate() const
{
    return m_separate;
}

void AudioEnhanceConfig::SetSeparate(const AudioSeparateConfig& _separate)
{
    m_separate = _separate;
    m_separateHasBeenSet = true;
}

bool AudioEnhanceConfig::SeparateHasBeenSet() const
{
    return m_separateHasBeenSet;
}

VolumeBalanceConfig AudioEnhanceConfig::GetVolumeBalance() const
{
    return m_volumeBalance;
}

void AudioEnhanceConfig::SetVolumeBalance(const VolumeBalanceConfig& _volumeBalance)
{
    m_volumeBalance = _volumeBalance;
    m_volumeBalanceHasBeenSet = true;
}

bool AudioEnhanceConfig::VolumeBalanceHasBeenSet() const
{
    return m_volumeBalanceHasBeenSet;
}

AudioBeautifyConfig AudioEnhanceConfig::GetBeautify() const
{
    return m_beautify;
}

void AudioEnhanceConfig::SetBeautify(const AudioBeautifyConfig& _beautify)
{
    m_beautify = _beautify;
    m_beautifyHasBeenSet = true;
}

bool AudioEnhanceConfig::BeautifyHasBeenSet() const
{
    return m_beautifyHasBeenSet;
}

