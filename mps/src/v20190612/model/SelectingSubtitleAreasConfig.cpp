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

#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SelectingSubtitleAreasConfig::SelectingSubtitleAreasConfig() :
    m_autoAreasHasBeenSet(false),
    m_sampleWidthHasBeenSet(false),
    m_sampleHeightHasBeenSet(false)
{
}

CoreInternalOutcome SelectingSubtitleAreasConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoAreas") && !value["AutoAreas"].IsNull())
    {
        if (!value["AutoAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SelectingSubtitleAreasConfig.AutoAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EraseArea item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoAreas.push_back(item);
        }
        m_autoAreasHasBeenSet = true;
    }

    if (value.HasMember("SampleWidth") && !value["SampleWidth"].IsNull())
    {
        if (!value["SampleWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectingSubtitleAreasConfig.SampleWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleWidth = value["SampleWidth"].GetUint64();
        m_sampleWidthHasBeenSet = true;
    }

    if (value.HasMember("SampleHeight") && !value["SampleHeight"].IsNull())
    {
        if (!value["SampleHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectingSubtitleAreasConfig.SampleHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleHeight = value["SampleHeight"].GetUint64();
        m_sampleHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectingSubtitleAreasConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoAreas.begin(); itr != m_autoAreas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<EraseArea> SelectingSubtitleAreasConfig::GetAutoAreas() const
{
    return m_autoAreas;
}

void SelectingSubtitleAreasConfig::SetAutoAreas(const vector<EraseArea>& _autoAreas)
{
    m_autoAreas = _autoAreas;
    m_autoAreasHasBeenSet = true;
}

bool SelectingSubtitleAreasConfig::AutoAreasHasBeenSet() const
{
    return m_autoAreasHasBeenSet;
}

uint64_t SelectingSubtitleAreasConfig::GetSampleWidth() const
{
    return m_sampleWidth;
}

void SelectingSubtitleAreasConfig::SetSampleWidth(const uint64_t& _sampleWidth)
{
    m_sampleWidth = _sampleWidth;
    m_sampleWidthHasBeenSet = true;
}

bool SelectingSubtitleAreasConfig::SampleWidthHasBeenSet() const
{
    return m_sampleWidthHasBeenSet;
}

uint64_t SelectingSubtitleAreasConfig::GetSampleHeight() const
{
    return m_sampleHeight;
}

void SelectingSubtitleAreasConfig::SetSampleHeight(const uint64_t& _sampleHeight)
{
    m_sampleHeight = _sampleHeight;
    m_sampleHeightHasBeenSet = true;
}

bool SelectingSubtitleAreasConfig::SampleHeightHasBeenSet() const
{
    return m_sampleHeightHasBeenSet;
}

