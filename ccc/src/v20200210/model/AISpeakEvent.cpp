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

#include <tencentcloud/ccc/v20200210/model/AISpeakEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AISpeakEvent::AISpeakEvent() :
    m_canBeInterruptedHasBeenSet(false),
    m_spokenTextHasBeenSet(false),
    m_spokenTypeHasBeenSet(false),
    m_latencyMetricsHasBeenSet(false)
{
}

CoreInternalOutcome AISpeakEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanBeInterrupted") && !value["CanBeInterrupted"].IsNull())
    {
        if (!value["CanBeInterrupted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AISpeakEvent.CanBeInterrupted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canBeInterrupted = value["CanBeInterrupted"].GetBool();
        m_canBeInterruptedHasBeenSet = true;
    }

    if (value.HasMember("SpokenText") && !value["SpokenText"].IsNull())
    {
        if (!value["SpokenText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AISpeakEvent.SpokenText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spokenText = string(value["SpokenText"].GetString());
        m_spokenTextHasBeenSet = true;
    }

    if (value.HasMember("SpokenType") && !value["SpokenType"].IsNull())
    {
        if (!value["SpokenType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AISpeakEvent.SpokenType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spokenType = string(value["SpokenType"].GetString());
        m_spokenTypeHasBeenSet = true;
    }

    if (value.HasMember("LatencyMetrics") && !value["LatencyMetrics"].IsNull())
    {
        if (!value["LatencyMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AISpeakEvent.LatencyMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latencyMetrics.Deserialize(value["LatencyMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latencyMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AISpeakEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canBeInterruptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBeInterrupted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canBeInterrupted, allocator);
    }

    if (m_spokenTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpokenText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spokenText.c_str(), allocator).Move(), allocator);
    }

    if (m_spokenTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpokenType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spokenType.c_str(), allocator).Move(), allocator);
    }

    if (m_latencyMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latencyMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AISpeakEvent::GetCanBeInterrupted() const
{
    return m_canBeInterrupted;
}

void AISpeakEvent::SetCanBeInterrupted(const bool& _canBeInterrupted)
{
    m_canBeInterrupted = _canBeInterrupted;
    m_canBeInterruptedHasBeenSet = true;
}

bool AISpeakEvent::CanBeInterruptedHasBeenSet() const
{
    return m_canBeInterruptedHasBeenSet;
}

string AISpeakEvent::GetSpokenText() const
{
    return m_spokenText;
}

void AISpeakEvent::SetSpokenText(const string& _spokenText)
{
    m_spokenText = _spokenText;
    m_spokenTextHasBeenSet = true;
}

bool AISpeakEvent::SpokenTextHasBeenSet() const
{
    return m_spokenTextHasBeenSet;
}

string AISpeakEvent::GetSpokenType() const
{
    return m_spokenType;
}

void AISpeakEvent::SetSpokenType(const string& _spokenType)
{
    m_spokenType = _spokenType;
    m_spokenTypeHasBeenSet = true;
}

bool AISpeakEvent::SpokenTypeHasBeenSet() const
{
    return m_spokenTypeHasBeenSet;
}

AICallLatencyMetrics AISpeakEvent::GetLatencyMetrics() const
{
    return m_latencyMetrics;
}

void AISpeakEvent::SetLatencyMetrics(const AICallLatencyMetrics& _latencyMetrics)
{
    m_latencyMetrics = _latencyMetrics;
    m_latencyMetricsHasBeenSet = true;
}

bool AISpeakEvent::LatencyMetricsHasBeenSet() const
{
    return m_latencyMetricsHasBeenSet;
}

