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

#include <tencentcloud/vod/v20180717/model/MPSSmartEraseTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSmartEraseTemplate::MPSSmartEraseTemplate() :
    m_nameHasBeenSet(false),
    m_eraseTypeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_eraseSubtitleConfigHasBeenSet(false),
    m_eraseWatermarkConfigHasBeenSet(false),
    m_erasePrivacyConfigHasBeenSet(false),
    m_sampleWidthHasBeenSet(false),
    m_sampleHeightHasBeenSet(false)
{
}

CoreInternalOutcome MPSSmartEraseTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EraseType") && !value["EraseType"].IsNull())
    {
        if (!value["EraseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.EraseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseType = string(value["EraseType"].GetString());
        m_eraseTypeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("EraseSubtitleConfig") && !value["EraseSubtitleConfig"].IsNull())
    {
        if (!value["EraseSubtitleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.EraseSubtitleConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.EraseWatermarkConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.ErasePrivacyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_erasePrivacyConfig.Deserialize(value["ErasePrivacyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_erasePrivacyConfigHasBeenSet = true;
    }

    if (value.HasMember("SampleWidth") && !value["SampleWidth"].IsNull())
    {
        if (!value["SampleWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.SampleWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleWidth = value["SampleWidth"].GetUint64();
        m_sampleWidthHasBeenSet = true;
    }

    if (value.HasMember("SampleHeight") && !value["SampleHeight"].IsNull())
    {
        if (!value["SampleHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseTemplate.SampleHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleHeight = value["SampleHeight"].GetUint64();
        m_sampleHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSmartEraseTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseType.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

    if (m_sampleWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleWidth, allocator);
    }

    if (m_sampleHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleHeight, allocator);
    }

}


string MPSSmartEraseTemplate::GetName() const
{
    return m_name;
}

void MPSSmartEraseTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MPSSmartEraseTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MPSSmartEraseTemplate::GetEraseType() const
{
    return m_eraseType;
}

void MPSSmartEraseTemplate::SetEraseType(const string& _eraseType)
{
    m_eraseType = _eraseType;
    m_eraseTypeHasBeenSet = true;
}

bool MPSSmartEraseTemplate::EraseTypeHasBeenSet() const
{
    return m_eraseTypeHasBeenSet;
}

string MPSSmartEraseTemplate::GetComment() const
{
    return m_comment;
}

void MPSSmartEraseTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool MPSSmartEraseTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

MPSSmartEraseSubtitleConfig MPSSmartEraseTemplate::GetEraseSubtitleConfig() const
{
    return m_eraseSubtitleConfig;
}

void MPSSmartEraseTemplate::SetEraseSubtitleConfig(const MPSSmartEraseSubtitleConfig& _eraseSubtitleConfig)
{
    m_eraseSubtitleConfig = _eraseSubtitleConfig;
    m_eraseSubtitleConfigHasBeenSet = true;
}

bool MPSSmartEraseTemplate::EraseSubtitleConfigHasBeenSet() const
{
    return m_eraseSubtitleConfigHasBeenSet;
}

MPSSmartEraseWatermarkConfig MPSSmartEraseTemplate::GetEraseWatermarkConfig() const
{
    return m_eraseWatermarkConfig;
}

void MPSSmartEraseTemplate::SetEraseWatermarkConfig(const MPSSmartEraseWatermarkConfig& _eraseWatermarkConfig)
{
    m_eraseWatermarkConfig = _eraseWatermarkConfig;
    m_eraseWatermarkConfigHasBeenSet = true;
}

bool MPSSmartEraseTemplate::EraseWatermarkConfigHasBeenSet() const
{
    return m_eraseWatermarkConfigHasBeenSet;
}

MPSSmartErasePrivacyConfig MPSSmartEraseTemplate::GetErasePrivacyConfig() const
{
    return m_erasePrivacyConfig;
}

void MPSSmartEraseTemplate::SetErasePrivacyConfig(const MPSSmartErasePrivacyConfig& _erasePrivacyConfig)
{
    m_erasePrivacyConfig = _erasePrivacyConfig;
    m_erasePrivacyConfigHasBeenSet = true;
}

bool MPSSmartEraseTemplate::ErasePrivacyConfigHasBeenSet() const
{
    return m_erasePrivacyConfigHasBeenSet;
}

uint64_t MPSSmartEraseTemplate::GetSampleWidth() const
{
    return m_sampleWidth;
}

void MPSSmartEraseTemplate::SetSampleWidth(const uint64_t& _sampleWidth)
{
    m_sampleWidth = _sampleWidth;
    m_sampleWidthHasBeenSet = true;
}

bool MPSSmartEraseTemplate::SampleWidthHasBeenSet() const
{
    return m_sampleWidthHasBeenSet;
}

uint64_t MPSSmartEraseTemplate::GetSampleHeight() const
{
    return m_sampleHeight;
}

void MPSSmartEraseTemplate::SetSampleHeight(const uint64_t& _sampleHeight)
{
    m_sampleHeight = _sampleHeight;
    m_sampleHeightHasBeenSet = true;
}

bool MPSSmartEraseTemplate::SampleHeightHasBeenSet() const
{
    return m_sampleHeightHasBeenSet;
}

