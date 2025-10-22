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

#include <tencentcloud/mps/v20190612/model/RawSmartEraseParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RawSmartEraseParameter::RawSmartEraseParameter() :
    m_eraseTypeHasBeenSet(false),
    m_eraseSubtitleConfigHasBeenSet(false),
    m_eraseWatermarkConfigHasBeenSet(false),
    m_erasePrivacyConfigHasBeenSet(false)
{
}

CoreInternalOutcome RawSmartEraseParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EraseType") && !value["EraseType"].IsNull())
    {
        if (!value["EraseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartEraseParameter.EraseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseType = string(value["EraseType"].GetString());
        m_eraseTypeHasBeenSet = true;
    }

    if (value.HasMember("EraseSubtitleConfig") && !value["EraseSubtitleConfig"].IsNull())
    {
        if (!value["EraseSubtitleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartEraseParameter.EraseSubtitleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eraseSubtitleConfig.Deserialize(value["EraseSubtitleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eraseSubtitleConfigHasBeenSet = true;
    }

    if (value.HasMember("EraseWatermarkConfig") && !value["EraseWatermarkConfig"].IsNull())
    {
        if (!value["EraseWatermarkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartEraseParameter.EraseWatermarkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eraseWatermarkConfig.Deserialize(value["EraseWatermarkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eraseWatermarkConfigHasBeenSet = true;
    }

    if (value.HasMember("ErasePrivacyConfig") && !value["ErasePrivacyConfig"].IsNull())
    {
        if (!value["ErasePrivacyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawSmartEraseParameter.ErasePrivacyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_erasePrivacyConfig.Deserialize(value["ErasePrivacyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_erasePrivacyConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawSmartEraseParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eraseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseType.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseSubtitleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseSubtitleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseSubtitleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eraseWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseWatermarkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_erasePrivacyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErasePrivacyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_erasePrivacyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RawSmartEraseParameter::GetEraseType() const
{
    return m_eraseType;
}

void RawSmartEraseParameter::SetEraseType(const string& _eraseType)
{
    m_eraseType = _eraseType;
    m_eraseTypeHasBeenSet = true;
}

bool RawSmartEraseParameter::EraseTypeHasBeenSet() const
{
    return m_eraseTypeHasBeenSet;
}

SmartEraseSubtitleConfig RawSmartEraseParameter::GetEraseSubtitleConfig() const
{
    return m_eraseSubtitleConfig;
}

void RawSmartEraseParameter::SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig)
{
    m_eraseSubtitleConfig = _eraseSubtitleConfig;
    m_eraseSubtitleConfigHasBeenSet = true;
}

bool RawSmartEraseParameter::EraseSubtitleConfigHasBeenSet() const
{
    return m_eraseSubtitleConfigHasBeenSet;
}

SmartEraseWatermarkConfig RawSmartEraseParameter::GetEraseWatermarkConfig() const
{
    return m_eraseWatermarkConfig;
}

void RawSmartEraseParameter::SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig)
{
    m_eraseWatermarkConfig = _eraseWatermarkConfig;
    m_eraseWatermarkConfigHasBeenSet = true;
}

bool RawSmartEraseParameter::EraseWatermarkConfigHasBeenSet() const
{
    return m_eraseWatermarkConfigHasBeenSet;
}

SmartErasePrivacyConfig RawSmartEraseParameter::GetErasePrivacyConfig() const
{
    return m_erasePrivacyConfig;
}

void RawSmartEraseParameter::SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig)
{
    m_erasePrivacyConfig = _erasePrivacyConfig;
    m_erasePrivacyConfigHasBeenSet = true;
}

bool RawSmartEraseParameter::ErasePrivacyConfigHasBeenSet() const
{
    return m_erasePrivacyConfigHasBeenSet;
}

