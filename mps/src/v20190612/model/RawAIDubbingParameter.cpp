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

#include <tencentcloud/mps/v20190612/model/RawAIDubbingParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RawAIDubbingParameter::RawAIDubbingParameter() :
    m_translateConfigHasBeenSet(false),
    m_subtitleConfigHasBeenSet(false),
    m_dubbingConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome RawAIDubbingParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranslateConfig") && !value["TranslateConfig"].IsNull())
    {
        if (!value["TranslateConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawAIDubbingParameter.TranslateConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_translateConfig.Deserialize(value["TranslateConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_translateConfigHasBeenSet = true;
    }

    if (value.HasMember("SubtitleConfig") && !value["SubtitleConfig"].IsNull())
    {
        if (!value["SubtitleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawAIDubbingParameter.SubtitleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleConfig.Deserialize(value["SubtitleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleConfigHasBeenSet = true;
    }

    if (value.HasMember("DubbingConfig") && !value["DubbingConfig"].IsNull())
    {
        if (!value["DubbingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawAIDubbingParameter.DubbingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dubbingConfig.Deserialize(value["DubbingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dubbingConfigHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawAIDubbingParameter.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawAIDubbingParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_translateConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translateConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dubbingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DubbingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dubbingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


DubbingTranslateConfig RawAIDubbingParameter::GetTranslateConfig() const
{
    return m_translateConfig;
}

void RawAIDubbingParameter::SetTranslateConfig(const DubbingTranslateConfig& _translateConfig)
{
    m_translateConfig = _translateConfig;
    m_translateConfigHasBeenSet = true;
}

bool RawAIDubbingParameter::TranslateConfigHasBeenSet() const
{
    return m_translateConfigHasBeenSet;
}

DubbingSubtitleConfig RawAIDubbingParameter::GetSubtitleConfig() const
{
    return m_subtitleConfig;
}

void RawAIDubbingParameter::SetSubtitleConfig(const DubbingSubtitleConfig& _subtitleConfig)
{
    m_subtitleConfig = _subtitleConfig;
    m_subtitleConfigHasBeenSet = true;
}

bool RawAIDubbingParameter::SubtitleConfigHasBeenSet() const
{
    return m_subtitleConfigHasBeenSet;
}

DubbingConfig RawAIDubbingParameter::GetDubbingConfig() const
{
    return m_dubbingConfig;
}

void RawAIDubbingParameter::SetDubbingConfig(const DubbingConfig& _dubbingConfig)
{
    m_dubbingConfig = _dubbingConfig;
    m_dubbingConfigHasBeenSet = true;
}

bool RawAIDubbingParameter::DubbingConfigHasBeenSet() const
{
    return m_dubbingConfigHasBeenSet;
}

DubbingOutputConfig RawAIDubbingParameter::GetOutputConfig() const
{
    return m_outputConfig;
}

void RawAIDubbingParameter::SetOutputConfig(const DubbingOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool RawAIDubbingParameter::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

