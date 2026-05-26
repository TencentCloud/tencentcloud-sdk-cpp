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

#include <tencentcloud/iotexplorer/v20190423/model/SeeCompHighlightConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeCompHighlightConfig::SeeCompHighlightConfig() :
    m_disableHighlightHasBeenSet(false),
    m_detectTypesHasBeenSet(false),
    m_enableSummaryHasBeenSet(false),
    m_keyFramesNumHasBeenSet(false)
{
}

CoreInternalOutcome SeeCompHighlightConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisableHighlight") && !value["DisableHighlight"].IsNull())
    {
        if (!value["DisableHighlight"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCompHighlightConfig.DisableHighlight` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableHighlight = value["DisableHighlight"].GetBool();
        m_disableHighlightHasBeenSet = true;
    }

    if (value.HasMember("DetectTypes") && !value["DetectTypes"].IsNull())
    {
        if (!value["DetectTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeCompHighlightConfig.DetectTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectTypes.push_back((*itr).GetString());
        }
        m_detectTypesHasBeenSet = true;
    }

    if (value.HasMember("EnableSummary") && !value["EnableSummary"].IsNull())
    {
        if (!value["EnableSummary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCompHighlightConfig.EnableSummary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSummary = value["EnableSummary"].GetBool();
        m_enableSummaryHasBeenSet = true;
    }

    if (value.HasMember("KeyFramesNum") && !value["KeyFramesNum"].IsNull())
    {
        if (!value["KeyFramesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCompHighlightConfig.KeyFramesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyFramesNum = value["KeyFramesNum"].GetInt64();
        m_keyFramesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeCompHighlightConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disableHighlightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHighlight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableHighlight, allocator);
    }

    if (m_detectTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectTypes.begin(); itr != m_detectTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSummary, allocator);
    }

    if (m_keyFramesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyFramesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyFramesNum, allocator);
    }

}


bool SeeCompHighlightConfig::GetDisableHighlight() const
{
    return m_disableHighlight;
}

void SeeCompHighlightConfig::SetDisableHighlight(const bool& _disableHighlight)
{
    m_disableHighlight = _disableHighlight;
    m_disableHighlightHasBeenSet = true;
}

bool SeeCompHighlightConfig::DisableHighlightHasBeenSet() const
{
    return m_disableHighlightHasBeenSet;
}

vector<string> SeeCompHighlightConfig::GetDetectTypes() const
{
    return m_detectTypes;
}

void SeeCompHighlightConfig::SetDetectTypes(const vector<string>& _detectTypes)
{
    m_detectTypes = _detectTypes;
    m_detectTypesHasBeenSet = true;
}

bool SeeCompHighlightConfig::DetectTypesHasBeenSet() const
{
    return m_detectTypesHasBeenSet;
}

bool SeeCompHighlightConfig::GetEnableSummary() const
{
    return m_enableSummary;
}

void SeeCompHighlightConfig::SetEnableSummary(const bool& _enableSummary)
{
    m_enableSummary = _enableSummary;
    m_enableSummaryHasBeenSet = true;
}

bool SeeCompHighlightConfig::EnableSummaryHasBeenSet() const
{
    return m_enableSummaryHasBeenSet;
}

int64_t SeeCompHighlightConfig::GetKeyFramesNum() const
{
    return m_keyFramesNum;
}

void SeeCompHighlightConfig::SetKeyFramesNum(const int64_t& _keyFramesNum)
{
    m_keyFramesNum = _keyFramesNum;
    m_keyFramesNumHasBeenSet = true;
}

bool SeeCompHighlightConfig::KeyFramesNumHasBeenSet() const
{
    return m_keyFramesNumHasBeenSet;
}

