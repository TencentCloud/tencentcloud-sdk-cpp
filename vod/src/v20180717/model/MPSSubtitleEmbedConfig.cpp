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

#include <tencentcloud/vod/v20180717/model/MPSSubtitleEmbedConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSubtitleEmbedConfig::MPSSubtitleEmbedConfig() :
    m_fontTypeHasBeenSet(false),
    m_fontPathHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontSizeUnitHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false),
    m_posXHasBeenSet(false),
    m_posXUnitHasBeenSet(false),
    m_posYHasBeenSet(false),
    m_posYUnitHasBeenSet(false),
    m_subtitleBoardConfigHasBeenSet(false),
    m_subtitleLayoutConfigHasBeenSet(false),
    m_subtitleOutlineConfigHasBeenSet(false),
    m_subtitleShadowConfigHasBeenSet(false),
    m_sampleWidthHasBeenSet(false),
    m_sampleHeightHasBeenSet(false)
{
}

CoreInternalOutcome MPSSubtitleEmbedConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontPath") && !value["FontPath"].IsNull())
    {
        if (!value["FontPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontPath = string(value["FontPath"].GetString());
        m_fontPathHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetInt64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontSizeUnit") && !value["FontSizeUnit"].IsNull())
    {
        if (!value["FontSizeUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontSizeUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSizeUnit = value["FontSizeUnit"].GetInt64();
        m_fontSizeUnitHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }

    if (value.HasMember("PosX") && !value["PosX"].IsNull())
    {
        if (!value["PosX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.PosX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posX = value["PosX"].GetInt64();
        m_posXHasBeenSet = true;
    }

    if (value.HasMember("PosXUnit") && !value["PosXUnit"].IsNull())
    {
        if (!value["PosXUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.PosXUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posXUnit = value["PosXUnit"].GetInt64();
        m_posXUnitHasBeenSet = true;
    }

    if (value.HasMember("PosY") && !value["PosY"].IsNull())
    {
        if (!value["PosY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.PosY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posY = value["PosY"].GetInt64();
        m_posYHasBeenSet = true;
    }

    if (value.HasMember("PosYUnit") && !value["PosYUnit"].IsNull())
    {
        if (!value["PosYUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.PosYUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posYUnit = value["PosYUnit"].GetInt64();
        m_posYUnitHasBeenSet = true;
    }

    if (value.HasMember("SubtitleBoardConfig") && !value["SubtitleBoardConfig"].IsNull())
    {
        if (!value["SubtitleBoardConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SubtitleBoardConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleBoardConfig.Deserialize(value["SubtitleBoardConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleBoardConfigHasBeenSet = true;
    }

    if (value.HasMember("SubtitleLayoutConfig") && !value["SubtitleLayoutConfig"].IsNull())
    {
        if (!value["SubtitleLayoutConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SubtitleLayoutConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleLayoutConfig.Deserialize(value["SubtitleLayoutConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleLayoutConfigHasBeenSet = true;
    }

    if (value.HasMember("SubtitleOutlineConfig") && !value["SubtitleOutlineConfig"].IsNull())
    {
        if (!value["SubtitleOutlineConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SubtitleOutlineConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleOutlineConfig.Deserialize(value["SubtitleOutlineConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleOutlineConfigHasBeenSet = true;
    }

    if (value.HasMember("SubtitleShadowConfig") && !value["SubtitleShadowConfig"].IsNull())
    {
        if (!value["SubtitleShadowConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SubtitleShadowConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleShadowConfig.Deserialize(value["SubtitleShadowConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleShadowConfigHasBeenSet = true;
    }

    if (value.HasMember("SampleWidth") && !value["SampleWidth"].IsNull())
    {
        if (!value["SampleWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SampleWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleWidth = value["SampleWidth"].GetInt64();
        m_sampleWidthHasBeenSet = true;
    }

    if (value.HasMember("SampleHeight") && !value["SampleHeight"].IsNull())
    {
        if (!value["SampleHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleEmbedConfig.SampleHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleHeight = value["SampleHeight"].GetInt64();
        m_sampleHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSubtitleEmbedConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fontTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontType.c_str(), allocator).Move(), allocator);
    }

    if (m_fontPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontPath.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontSizeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSizeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSizeUnit, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontAlpha, allocator);
    }

    if (m_posXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posX, allocator);
    }

    if (m_posXUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosXUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posXUnit, allocator);
    }

    if (m_posYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posY, allocator);
    }

    if (m_posYUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosYUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posYUnit, allocator);
    }

    if (m_subtitleBoardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleBoardConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleBoardConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleLayoutConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleLayoutConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleLayoutConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleOutlineConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleOutlineConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleOutlineConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleShadowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleShadowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleShadowConfig.ToJsonObject(value[key.c_str()], allocator);
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


string MPSSubtitleEmbedConfig::GetFontType() const
{
    return m_fontType;
}

void MPSSubtitleEmbedConfig::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string MPSSubtitleEmbedConfig::GetFontPath() const
{
    return m_fontPath;
}

void MPSSubtitleEmbedConfig::SetFontPath(const string& _fontPath)
{
    m_fontPath = _fontPath;
    m_fontPathHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontPathHasBeenSet() const
{
    return m_fontPathHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetFontSize() const
{
    return m_fontSize;
}

void MPSSubtitleEmbedConfig::SetFontSize(const int64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetFontSizeUnit() const
{
    return m_fontSizeUnit;
}

void MPSSubtitleEmbedConfig::SetFontSizeUnit(const int64_t& _fontSizeUnit)
{
    m_fontSizeUnit = _fontSizeUnit;
    m_fontSizeUnitHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontSizeUnitHasBeenSet() const
{
    return m_fontSizeUnitHasBeenSet;
}

string MPSSubtitleEmbedConfig::GetFontColor() const
{
    return m_fontColor;
}

void MPSSubtitleEmbedConfig::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double MPSSubtitleEmbedConfig::GetFontAlpha() const
{
    return m_fontAlpha;
}

void MPSSubtitleEmbedConfig::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetPosX() const
{
    return m_posX;
}

void MPSSubtitleEmbedConfig::SetPosX(const int64_t& _posX)
{
    m_posX = _posX;
    m_posXHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::PosXHasBeenSet() const
{
    return m_posXHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetPosXUnit() const
{
    return m_posXUnit;
}

void MPSSubtitleEmbedConfig::SetPosXUnit(const int64_t& _posXUnit)
{
    m_posXUnit = _posXUnit;
    m_posXUnitHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::PosXUnitHasBeenSet() const
{
    return m_posXUnitHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetPosY() const
{
    return m_posY;
}

void MPSSubtitleEmbedConfig::SetPosY(const int64_t& _posY)
{
    m_posY = _posY;
    m_posYHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::PosYHasBeenSet() const
{
    return m_posYHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetPosYUnit() const
{
    return m_posYUnit;
}

void MPSSubtitleEmbedConfig::SetPosYUnit(const int64_t& _posYUnit)
{
    m_posYUnit = _posYUnit;
    m_posYUnitHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::PosYUnitHasBeenSet() const
{
    return m_posYUnitHasBeenSet;
}

MPSSubtitleBoardConfig MPSSubtitleEmbedConfig::GetSubtitleBoardConfig() const
{
    return m_subtitleBoardConfig;
}

void MPSSubtitleEmbedConfig::SetSubtitleBoardConfig(const MPSSubtitleBoardConfig& _subtitleBoardConfig)
{
    m_subtitleBoardConfig = _subtitleBoardConfig;
    m_subtitleBoardConfigHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SubtitleBoardConfigHasBeenSet() const
{
    return m_subtitleBoardConfigHasBeenSet;
}

MPSSubtitleLayoutConfig MPSSubtitleEmbedConfig::GetSubtitleLayoutConfig() const
{
    return m_subtitleLayoutConfig;
}

void MPSSubtitleEmbedConfig::SetSubtitleLayoutConfig(const MPSSubtitleLayoutConfig& _subtitleLayoutConfig)
{
    m_subtitleLayoutConfig = _subtitleLayoutConfig;
    m_subtitleLayoutConfigHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SubtitleLayoutConfigHasBeenSet() const
{
    return m_subtitleLayoutConfigHasBeenSet;
}

MPSSubtitleOutlineConfig MPSSubtitleEmbedConfig::GetSubtitleOutlineConfig() const
{
    return m_subtitleOutlineConfig;
}

void MPSSubtitleEmbedConfig::SetSubtitleOutlineConfig(const MPSSubtitleOutlineConfig& _subtitleOutlineConfig)
{
    m_subtitleOutlineConfig = _subtitleOutlineConfig;
    m_subtitleOutlineConfigHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SubtitleOutlineConfigHasBeenSet() const
{
    return m_subtitleOutlineConfigHasBeenSet;
}

MPSSubtitleShadowConfig MPSSubtitleEmbedConfig::GetSubtitleShadowConfig() const
{
    return m_subtitleShadowConfig;
}

void MPSSubtitleEmbedConfig::SetSubtitleShadowConfig(const MPSSubtitleShadowConfig& _subtitleShadowConfig)
{
    m_subtitleShadowConfig = _subtitleShadowConfig;
    m_subtitleShadowConfigHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SubtitleShadowConfigHasBeenSet() const
{
    return m_subtitleShadowConfigHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetSampleWidth() const
{
    return m_sampleWidth;
}

void MPSSubtitleEmbedConfig::SetSampleWidth(const int64_t& _sampleWidth)
{
    m_sampleWidth = _sampleWidth;
    m_sampleWidthHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SampleWidthHasBeenSet() const
{
    return m_sampleWidthHasBeenSet;
}

int64_t MPSSubtitleEmbedConfig::GetSampleHeight() const
{
    return m_sampleHeight;
}

void MPSSubtitleEmbedConfig::SetSampleHeight(const int64_t& _sampleHeight)
{
    m_sampleHeight = _sampleHeight;
    m_sampleHeightHasBeenSet = true;
}

bool MPSSubtitleEmbedConfig::SampleHeightHasBeenSet() const
{
    return m_sampleHeightHasBeenSet;
}

