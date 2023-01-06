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

#include <tencentcloud/trtc/v20190722/model/LayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

LayoutParams::LayoutParams() :
    m_templateHasBeenSet(false),
    m_mainVideoUserIdHasBeenSet(false),
    m_mainVideoStreamTypeHasBeenSet(false),
    m_smallVideoLayoutParamsHasBeenSet(false),
    m_mainVideoRightAlignHasBeenSet(false),
    m_mixVideoUidsHasBeenSet(false),
    m_presetLayoutConfigHasBeenSet(false),
    m_placeHolderModeHasBeenSet(false),
    m_pureAudioHoldPlaceModeHasBeenSet(false),
    m_waterMarkParamsHasBeenSet(false),
    m_renderModeHasBeenSet(false)
{
}

CoreInternalOutcome LayoutParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.Template` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_template = value["Template"].GetUint64();
        m_templateHasBeenSet = true;
    }

    if (value.HasMember("MainVideoUserId") && !value["MainVideoUserId"].IsNull())
    {
        if (!value["MainVideoUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.MainVideoUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainVideoUserId = string(value["MainVideoUserId"].GetString());
        m_mainVideoUserIdHasBeenSet = true;
    }

    if (value.HasMember("MainVideoStreamType") && !value["MainVideoStreamType"].IsNull())
    {
        if (!value["MainVideoStreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.MainVideoStreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainVideoStreamType = value["MainVideoStreamType"].GetUint64();
        m_mainVideoStreamTypeHasBeenSet = true;
    }

    if (value.HasMember("SmallVideoLayoutParams") && !value["SmallVideoLayoutParams"].IsNull())
    {
        if (!value["SmallVideoLayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.SmallVideoLayoutParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smallVideoLayoutParams.Deserialize(value["SmallVideoLayoutParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smallVideoLayoutParamsHasBeenSet = true;
    }

    if (value.HasMember("MainVideoRightAlign") && !value["MainVideoRightAlign"].IsNull())
    {
        if (!value["MainVideoRightAlign"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.MainVideoRightAlign` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainVideoRightAlign = value["MainVideoRightAlign"].GetUint64();
        m_mainVideoRightAlignHasBeenSet = true;
    }

    if (value.HasMember("MixVideoUids") && !value["MixVideoUids"].IsNull())
    {
        if (!value["MixVideoUids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LayoutParams.MixVideoUids` is not array type"));

        const rapidjson::Value &tmpValue = value["MixVideoUids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mixVideoUids.push_back((*itr).GetString());
        }
        m_mixVideoUidsHasBeenSet = true;
    }

    if (value.HasMember("PresetLayoutConfig") && !value["PresetLayoutConfig"].IsNull())
    {
        if (!value["PresetLayoutConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LayoutParams.PresetLayoutConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetLayoutConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PresetLayoutConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetLayoutConfig.push_back(item);
        }
        m_presetLayoutConfigHasBeenSet = true;
    }

    if (value.HasMember("PlaceHolderMode") && !value["PlaceHolderMode"].IsNull())
    {
        if (!value["PlaceHolderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.PlaceHolderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_placeHolderMode = value["PlaceHolderMode"].GetUint64();
        m_placeHolderModeHasBeenSet = true;
    }

    if (value.HasMember("PureAudioHoldPlaceMode") && !value["PureAudioHoldPlaceMode"].IsNull())
    {
        if (!value["PureAudioHoldPlaceMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.PureAudioHoldPlaceMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pureAudioHoldPlaceMode = value["PureAudioHoldPlaceMode"].GetUint64();
        m_pureAudioHoldPlaceModeHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkParams") && !value["WaterMarkParams"].IsNull())
    {
        if (!value["WaterMarkParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.WaterMarkParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterMarkParams.Deserialize(value["WaterMarkParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterMarkParamsHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LayoutParams.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LayoutParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_template, allocator);
    }

    if (m_mainVideoUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVideoUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainVideoUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_mainVideoStreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVideoStreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainVideoStreamType, allocator);
    }

    if (m_smallVideoLayoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallVideoLayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smallVideoLayoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mainVideoRightAlignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVideoRightAlign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainVideoRightAlign, allocator);
    }

    if (m_mixVideoUidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixVideoUids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mixVideoUids.begin(); itr != m_mixVideoUids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_presetLayoutConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetLayoutConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetLayoutConfig.begin(); itr != m_presetLayoutConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_placeHolderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceHolderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_placeHolderMode, allocator);
    }

    if (m_pureAudioHoldPlaceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudioHoldPlaceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pureAudioHoldPlaceMode, allocator);
    }

    if (m_waterMarkParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterMarkParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

}


uint64_t LayoutParams::GetTemplate() const
{
    return m_template;
}

void LayoutParams::SetTemplate(const uint64_t& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool LayoutParams::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

string LayoutParams::GetMainVideoUserId() const
{
    return m_mainVideoUserId;
}

void LayoutParams::SetMainVideoUserId(const string& _mainVideoUserId)
{
    m_mainVideoUserId = _mainVideoUserId;
    m_mainVideoUserIdHasBeenSet = true;
}

bool LayoutParams::MainVideoUserIdHasBeenSet() const
{
    return m_mainVideoUserIdHasBeenSet;
}

uint64_t LayoutParams::GetMainVideoStreamType() const
{
    return m_mainVideoStreamType;
}

void LayoutParams::SetMainVideoStreamType(const uint64_t& _mainVideoStreamType)
{
    m_mainVideoStreamType = _mainVideoStreamType;
    m_mainVideoStreamTypeHasBeenSet = true;
}

bool LayoutParams::MainVideoStreamTypeHasBeenSet() const
{
    return m_mainVideoStreamTypeHasBeenSet;
}

SmallVideoLayoutParams LayoutParams::GetSmallVideoLayoutParams() const
{
    return m_smallVideoLayoutParams;
}

void LayoutParams::SetSmallVideoLayoutParams(const SmallVideoLayoutParams& _smallVideoLayoutParams)
{
    m_smallVideoLayoutParams = _smallVideoLayoutParams;
    m_smallVideoLayoutParamsHasBeenSet = true;
}

bool LayoutParams::SmallVideoLayoutParamsHasBeenSet() const
{
    return m_smallVideoLayoutParamsHasBeenSet;
}

uint64_t LayoutParams::GetMainVideoRightAlign() const
{
    return m_mainVideoRightAlign;
}

void LayoutParams::SetMainVideoRightAlign(const uint64_t& _mainVideoRightAlign)
{
    m_mainVideoRightAlign = _mainVideoRightAlign;
    m_mainVideoRightAlignHasBeenSet = true;
}

bool LayoutParams::MainVideoRightAlignHasBeenSet() const
{
    return m_mainVideoRightAlignHasBeenSet;
}

vector<string> LayoutParams::GetMixVideoUids() const
{
    return m_mixVideoUids;
}

void LayoutParams::SetMixVideoUids(const vector<string>& _mixVideoUids)
{
    m_mixVideoUids = _mixVideoUids;
    m_mixVideoUidsHasBeenSet = true;
}

bool LayoutParams::MixVideoUidsHasBeenSet() const
{
    return m_mixVideoUidsHasBeenSet;
}

vector<PresetLayoutConfig> LayoutParams::GetPresetLayoutConfig() const
{
    return m_presetLayoutConfig;
}

void LayoutParams::SetPresetLayoutConfig(const vector<PresetLayoutConfig>& _presetLayoutConfig)
{
    m_presetLayoutConfig = _presetLayoutConfig;
    m_presetLayoutConfigHasBeenSet = true;
}

bool LayoutParams::PresetLayoutConfigHasBeenSet() const
{
    return m_presetLayoutConfigHasBeenSet;
}

uint64_t LayoutParams::GetPlaceHolderMode() const
{
    return m_placeHolderMode;
}

void LayoutParams::SetPlaceHolderMode(const uint64_t& _placeHolderMode)
{
    m_placeHolderMode = _placeHolderMode;
    m_placeHolderModeHasBeenSet = true;
}

bool LayoutParams::PlaceHolderModeHasBeenSet() const
{
    return m_placeHolderModeHasBeenSet;
}

uint64_t LayoutParams::GetPureAudioHoldPlaceMode() const
{
    return m_pureAudioHoldPlaceMode;
}

void LayoutParams::SetPureAudioHoldPlaceMode(const uint64_t& _pureAudioHoldPlaceMode)
{
    m_pureAudioHoldPlaceMode = _pureAudioHoldPlaceMode;
    m_pureAudioHoldPlaceModeHasBeenSet = true;
}

bool LayoutParams::PureAudioHoldPlaceModeHasBeenSet() const
{
    return m_pureAudioHoldPlaceModeHasBeenSet;
}

WaterMarkParams LayoutParams::GetWaterMarkParams() const
{
    return m_waterMarkParams;
}

void LayoutParams::SetWaterMarkParams(const WaterMarkParams& _waterMarkParams)
{
    m_waterMarkParams = _waterMarkParams;
    m_waterMarkParamsHasBeenSet = true;
}

bool LayoutParams::WaterMarkParamsHasBeenSet() const
{
    return m_waterMarkParamsHasBeenSet;
}

uint64_t LayoutParams::GetRenderMode() const
{
    return m_renderMode;
}

void LayoutParams::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool LayoutParams::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

