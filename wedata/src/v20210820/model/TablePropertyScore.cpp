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

#include <tencentcloud/wedata/v20210820/model/TablePropertyScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TablePropertyScore::TablePropertyScore() :
    m_tableIdHasBeenSet(false),
    m_dayTimeHasBeenSet(false),
    m_integrityHasBeenSet(false),
    m_safetyHasBeenSet(false),
    m_timelinessHasBeenSet(false),
    m_stabilityHasBeenSet(false),
    m_normativeHasBeenSet(false),
    m_averageHasBeenSet(false)
{
}

CoreInternalOutcome TablePropertyScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DayTime") && !value["DayTime"].IsNull())
    {
        if (!value["DayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.DayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayTime = string(value["DayTime"].GetString());
        m_dayTimeHasBeenSet = true;
    }

    if (value.HasMember("Integrity") && !value["Integrity"].IsNull())
    {
        if (!value["Integrity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Integrity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_integrity = value["Integrity"].GetDouble();
        m_integrityHasBeenSet = true;
    }

    if (value.HasMember("Safety") && !value["Safety"].IsNull())
    {
        if (!value["Safety"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Safety` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_safety = value["Safety"].GetDouble();
        m_safetyHasBeenSet = true;
    }

    if (value.HasMember("Timeliness") && !value["Timeliness"].IsNull())
    {
        if (!value["Timeliness"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Timeliness` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeliness = value["Timeliness"].GetDouble();
        m_timelinessHasBeenSet = true;
    }

    if (value.HasMember("Stability") && !value["Stability"].IsNull())
    {
        if (!value["Stability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Stability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_stability = value["Stability"].GetDouble();
        m_stabilityHasBeenSet = true;
    }

    if (value.HasMember("Normative") && !value["Normative"].IsNull())
    {
        if (!value["Normative"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Normative` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_normative = value["Normative"].GetDouble();
        m_normativeHasBeenSet = true;
    }

    if (value.HasMember("Average") && !value["Average"].IsNull())
    {
        if (!value["Average"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TablePropertyScore.Average` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_average = value["Average"].GetDouble();
        m_averageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TablePropertyScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_dayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_integrityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Integrity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_integrity, allocator);
    }

    if (m_safetyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Safety";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safety, allocator);
    }

    if (m_timelinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeliness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeliness, allocator);
    }

    if (m_stabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stability, allocator);
    }

    if (m_normativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Normative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normative, allocator);
    }

    if (m_averageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Average";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_average, allocator);
    }

}


string TablePropertyScore::GetTableId() const
{
    return m_tableId;
}

void TablePropertyScore::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TablePropertyScore::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TablePropertyScore::GetDayTime() const
{
    return m_dayTime;
}

void TablePropertyScore::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool TablePropertyScore::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

double TablePropertyScore::GetIntegrity() const
{
    return m_integrity;
}

void TablePropertyScore::SetIntegrity(const double& _integrity)
{
    m_integrity = _integrity;
    m_integrityHasBeenSet = true;
}

bool TablePropertyScore::IntegrityHasBeenSet() const
{
    return m_integrityHasBeenSet;
}

double TablePropertyScore::GetSafety() const
{
    return m_safety;
}

void TablePropertyScore::SetSafety(const double& _safety)
{
    m_safety = _safety;
    m_safetyHasBeenSet = true;
}

bool TablePropertyScore::SafetyHasBeenSet() const
{
    return m_safetyHasBeenSet;
}

double TablePropertyScore::GetTimeliness() const
{
    return m_timeliness;
}

void TablePropertyScore::SetTimeliness(const double& _timeliness)
{
    m_timeliness = _timeliness;
    m_timelinessHasBeenSet = true;
}

bool TablePropertyScore::TimelinessHasBeenSet() const
{
    return m_timelinessHasBeenSet;
}

double TablePropertyScore::GetStability() const
{
    return m_stability;
}

void TablePropertyScore::SetStability(const double& _stability)
{
    m_stability = _stability;
    m_stabilityHasBeenSet = true;
}

bool TablePropertyScore::StabilityHasBeenSet() const
{
    return m_stabilityHasBeenSet;
}

double TablePropertyScore::GetNormative() const
{
    return m_normative;
}

void TablePropertyScore::SetNormative(const double& _normative)
{
    m_normative = _normative;
    m_normativeHasBeenSet = true;
}

bool TablePropertyScore::NormativeHasBeenSet() const
{
    return m_normativeHasBeenSet;
}

double TablePropertyScore::GetAverage() const
{
    return m_average;
}

void TablePropertyScore::SetAverage(const double& _average)
{
    m_average = _average;
    m_averageHasBeenSet = true;
}

bool TablePropertyScore::AverageHasBeenSet() const
{
    return m_averageHasBeenSet;
}

