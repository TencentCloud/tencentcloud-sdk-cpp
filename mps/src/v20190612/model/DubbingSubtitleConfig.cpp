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

#include <tencentcloud/mps/v20190612/model/DubbingSubtitleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DubbingSubtitleConfig::DubbingSubtitleConfig() :
    m_subtitleSourceHasBeenSet(false),
    m_asrAssistOcrHasBeenSet(false),
    m_eraseOriginalSubtitleHasBeenSet(false),
    m_selectingSubtitleAreasConfigHasBeenSet(false)
{
}

CoreInternalOutcome DubbingSubtitleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleSource") && !value["SubtitleSource"].IsNull())
    {
        if (!value["SubtitleSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingSubtitleConfig.SubtitleSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleSource = string(value["SubtitleSource"].GetString());
        m_subtitleSourceHasBeenSet = true;
    }

    if (value.HasMember("AsrAssistOcr") && !value["AsrAssistOcr"].IsNull())
    {
        if (!value["AsrAssistOcr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingSubtitleConfig.AsrAssistOcr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrAssistOcr = string(value["AsrAssistOcr"].GetString());
        m_asrAssistOcrHasBeenSet = true;
    }

    if (value.HasMember("EraseOriginalSubtitle") && !value["EraseOriginalSubtitle"].IsNull())
    {
        if (!value["EraseOriginalSubtitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingSubtitleConfig.EraseOriginalSubtitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseOriginalSubtitle = string(value["EraseOriginalSubtitle"].GetString());
        m_eraseOriginalSubtitleHasBeenSet = true;
    }

    if (value.HasMember("SelectingSubtitleAreasConfig") && !value["SelectingSubtitleAreasConfig"].IsNull())
    {
        if (!value["SelectingSubtitleAreasConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingSubtitleConfig.SelectingSubtitleAreasConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectingSubtitleAreasConfig.Deserialize(value["SelectingSubtitleAreasConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectingSubtitleAreasConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DubbingSubtitleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleSource.c_str(), allocator).Move(), allocator);
    }

    if (m_asrAssistOcrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrAssistOcr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrAssistOcr.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseOriginalSubtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseOriginalSubtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseOriginalSubtitle.c_str(), allocator).Move(), allocator);
    }

    if (m_selectingSubtitleAreasConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectingSubtitleAreasConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectingSubtitleAreasConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DubbingSubtitleConfig::GetSubtitleSource() const
{
    return m_subtitleSource;
}

void DubbingSubtitleConfig::SetSubtitleSource(const string& _subtitleSource)
{
    m_subtitleSource = _subtitleSource;
    m_subtitleSourceHasBeenSet = true;
}

bool DubbingSubtitleConfig::SubtitleSourceHasBeenSet() const
{
    return m_subtitleSourceHasBeenSet;
}

string DubbingSubtitleConfig::GetAsrAssistOcr() const
{
    return m_asrAssistOcr;
}

void DubbingSubtitleConfig::SetAsrAssistOcr(const string& _asrAssistOcr)
{
    m_asrAssistOcr = _asrAssistOcr;
    m_asrAssistOcrHasBeenSet = true;
}

bool DubbingSubtitleConfig::AsrAssistOcrHasBeenSet() const
{
    return m_asrAssistOcrHasBeenSet;
}

string DubbingSubtitleConfig::GetEraseOriginalSubtitle() const
{
    return m_eraseOriginalSubtitle;
}

void DubbingSubtitleConfig::SetEraseOriginalSubtitle(const string& _eraseOriginalSubtitle)
{
    m_eraseOriginalSubtitle = _eraseOriginalSubtitle;
    m_eraseOriginalSubtitleHasBeenSet = true;
}

bool DubbingSubtitleConfig::EraseOriginalSubtitleHasBeenSet() const
{
    return m_eraseOriginalSubtitleHasBeenSet;
}

SelectingSubtitleAreasConfig DubbingSubtitleConfig::GetSelectingSubtitleAreasConfig() const
{
    return m_selectingSubtitleAreasConfig;
}

void DubbingSubtitleConfig::SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig)
{
    m_selectingSubtitleAreasConfig = _selectingSubtitleAreasConfig;
    m_selectingSubtitleAreasConfigHasBeenSet = true;
}

bool DubbingSubtitleConfig::SelectingSubtitleAreasConfigHasBeenSet() const
{
    return m_selectingSubtitleAreasConfigHasBeenSet;
}

