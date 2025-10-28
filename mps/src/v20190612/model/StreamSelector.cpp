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

#include <tencentcloud/mps/v20190612/model/StreamSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

StreamSelector::StreamSelector() :
    m_selectorTypeHasBeenSet(false),
    m_pidSelectorHasBeenSet(false),
    m_trackSelectorHasBeenSet(false)
{
}

CoreInternalOutcome StreamSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectorType") && !value["SelectorType"].IsNull())
    {
        if (!value["SelectorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamSelector.SelectorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectorType = string(value["SelectorType"].GetString());
        m_selectorTypeHasBeenSet = true;
    }

    if (value.HasMember("PidSelector") && !value["PidSelector"].IsNull())
    {
        if (!value["PidSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamSelector.PidSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pidSelector.Deserialize(value["PidSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pidSelectorHasBeenSet = true;
    }

    if (value.HasMember("TrackSelector") && !value["TrackSelector"].IsNull())
    {
        if (!value["TrackSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamSelector.TrackSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trackSelector.Deserialize(value["TrackSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trackSelectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selectorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectorType.c_str(), allocator).Move(), allocator);
    }

    if (m_pidSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PidSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pidSelector.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trackSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trackSelector.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StreamSelector::GetSelectorType() const
{
    return m_selectorType;
}

void StreamSelector::SetSelectorType(const string& _selectorType)
{
    m_selectorType = _selectorType;
    m_selectorTypeHasBeenSet = true;
}

bool StreamSelector::SelectorTypeHasBeenSet() const
{
    return m_selectorTypeHasBeenSet;
}

PidSelector StreamSelector::GetPidSelector() const
{
    return m_pidSelector;
}

void StreamSelector::SetPidSelector(const PidSelector& _pidSelector)
{
    m_pidSelector = _pidSelector;
    m_pidSelectorHasBeenSet = true;
}

bool StreamSelector::PidSelectorHasBeenSet() const
{
    return m_pidSelectorHasBeenSet;
}

TrackSelector StreamSelector::GetTrackSelector() const
{
    return m_trackSelector;
}

void StreamSelector::SetTrackSelector(const TrackSelector& _trackSelector)
{
    m_trackSelector = _trackSelector;
    m_trackSelectorHasBeenSet = true;
}

bool StreamSelector::TrackSelectorHasBeenSet() const
{
    return m_trackSelectorHasBeenSet;
}

