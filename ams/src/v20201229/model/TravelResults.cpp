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

#include <tencentcloud/ams/v20201229/model/TravelResults.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

TravelResults::TravelResults() :
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_audioRoleHasBeenSet(false),
    m_audioTextHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TravelResults::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("AudioRole") && !value["AudioRole"].IsNull())
    {
        if (!value["AudioRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.AudioRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioRole = string(value["AudioRole"].GetString());
        m_audioRoleHasBeenSet = true;
    }

    if (value.HasMember("AudioText") && !value["AudioText"].IsNull())
    {
        if (!value["AudioText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.AudioText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioText = string(value["AudioText"].GetString());
        m_audioTextHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TravelResults.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TravelResults::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_audioRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioRole.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioText.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string TravelResults::GetLabel() const
{
    return m_label;
}

void TravelResults::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool TravelResults::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string TravelResults::GetSubLabel() const
{
    return m_subLabel;
}

void TravelResults::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool TravelResults::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string TravelResults::GetRiskLevel() const
{
    return m_riskLevel;
}

void TravelResults::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool TravelResults::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string TravelResults::GetAudioRole() const
{
    return m_audioRole;
}

void TravelResults::SetAudioRole(const string& _audioRole)
{
    m_audioRole = _audioRole;
    m_audioRoleHasBeenSet = true;
}

bool TravelResults::AudioRoleHasBeenSet() const
{
    return m_audioRoleHasBeenSet;
}

string TravelResults::GetAudioText() const
{
    return m_audioText;
}

void TravelResults::SetAudioText(const string& _audioText)
{
    m_audioText = _audioText;
    m_audioTextHasBeenSet = true;
}

bool TravelResults::AudioTextHasBeenSet() const
{
    return m_audioTextHasBeenSet;
}

double TravelResults::GetStartTime() const
{
    return m_startTime;
}

void TravelResults::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TravelResults::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double TravelResults::GetEndTime() const
{
    return m_endTime;
}

void TravelResults::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TravelResults::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

