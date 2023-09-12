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

#include <tencentcloud/mrs/v20200910/model/GeneralExaminationVitalSign.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GeneralExaminationVitalSign::GeneralExaminationVitalSign() :
    m_textHasBeenSet(false),
    m_bodyTemperatureHasBeenSet(false),
    m_pulseHasBeenSet(false),
    m_heartRateHasBeenSet(false),
    m_breathingRateHasBeenSet(false),
    m_bodyHeightHasBeenSet(false),
    m_bodyWeightHasBeenSet(false),
    m_bodyMassIndexHasBeenSet(false),
    m_waistlineHasBeenSet(false),
    m_bloodPressureHasBeenSet(false)
{
}

CoreInternalOutcome GeneralExaminationVitalSign::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("BodyTemperature") && !value["BodyTemperature"].IsNull())
    {
        if (!value["BodyTemperature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BodyTemperature` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyTemperature.Deserialize(value["BodyTemperature"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyTemperatureHasBeenSet = true;
    }

    if (value.HasMember("Pulse") && !value["Pulse"].IsNull())
    {
        if (!value["Pulse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.Pulse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pulse.Deserialize(value["Pulse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pulseHasBeenSet = true;
    }

    if (value.HasMember("HeartRate") && !value["HeartRate"].IsNull())
    {
        if (!value["HeartRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.HeartRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heartRate.Deserialize(value["HeartRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartRateHasBeenSet = true;
    }

    if (value.HasMember("BreathingRate") && !value["BreathingRate"].IsNull())
    {
        if (!value["BreathingRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BreathingRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_breathingRate.Deserialize(value["BreathingRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_breathingRateHasBeenSet = true;
    }

    if (value.HasMember("BodyHeight") && !value["BodyHeight"].IsNull())
    {
        if (!value["BodyHeight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BodyHeight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyHeight.Deserialize(value["BodyHeight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyHeightHasBeenSet = true;
    }

    if (value.HasMember("BodyWeight") && !value["BodyWeight"].IsNull())
    {
        if (!value["BodyWeight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BodyWeight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyWeight.Deserialize(value["BodyWeight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyWeightHasBeenSet = true;
    }

    if (value.HasMember("BodyMassIndex") && !value["BodyMassIndex"].IsNull())
    {
        if (!value["BodyMassIndex"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BodyMassIndex` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyMassIndex.Deserialize(value["BodyMassIndex"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyMassIndexHasBeenSet = true;
    }

    if (value.HasMember("Waistline") && !value["Waistline"].IsNull())
    {
        if (!value["Waistline"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.Waistline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waistline.Deserialize(value["Waistline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waistlineHasBeenSet = true;
    }

    if (value.HasMember("BloodPressure") && !value["BloodPressure"].IsNull())
    {
        if (!value["BloodPressure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSign.BloodPressure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bloodPressure.Deserialize(value["BloodPressure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bloodPressureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralExaminationVitalSign::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyTemperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyTemperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyTemperature.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pulseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pulse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pulse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heartRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heartRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_breathingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BreathingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_breathingRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyHeight.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyWeight.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyMassIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyMassIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyMassIndex.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waistlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waistline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waistline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bloodPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BloodPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bloodPressure.ToJsonObject(value[key.c_str()], allocator);
    }

}


ValueUnitItem GeneralExaminationVitalSign::GetText() const
{
    return m_text;
}

void GeneralExaminationVitalSign::SetText(const ValueUnitItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool GeneralExaminationVitalSign::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetBodyTemperature() const
{
    return m_bodyTemperature;
}

void GeneralExaminationVitalSign::SetBodyTemperature(const ValueUnitItem& _bodyTemperature)
{
    m_bodyTemperature = _bodyTemperature;
    m_bodyTemperatureHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BodyTemperatureHasBeenSet() const
{
    return m_bodyTemperatureHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetPulse() const
{
    return m_pulse;
}

void GeneralExaminationVitalSign::SetPulse(const ValueUnitItem& _pulse)
{
    m_pulse = _pulse;
    m_pulseHasBeenSet = true;
}

bool GeneralExaminationVitalSign::PulseHasBeenSet() const
{
    return m_pulseHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetHeartRate() const
{
    return m_heartRate;
}

void GeneralExaminationVitalSign::SetHeartRate(const ValueUnitItem& _heartRate)
{
    m_heartRate = _heartRate;
    m_heartRateHasBeenSet = true;
}

bool GeneralExaminationVitalSign::HeartRateHasBeenSet() const
{
    return m_heartRateHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetBreathingRate() const
{
    return m_breathingRate;
}

void GeneralExaminationVitalSign::SetBreathingRate(const ValueUnitItem& _breathingRate)
{
    m_breathingRate = _breathingRate;
    m_breathingRateHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BreathingRateHasBeenSet() const
{
    return m_breathingRateHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetBodyHeight() const
{
    return m_bodyHeight;
}

void GeneralExaminationVitalSign::SetBodyHeight(const ValueUnitItem& _bodyHeight)
{
    m_bodyHeight = _bodyHeight;
    m_bodyHeightHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BodyHeightHasBeenSet() const
{
    return m_bodyHeightHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetBodyWeight() const
{
    return m_bodyWeight;
}

void GeneralExaminationVitalSign::SetBodyWeight(const ValueUnitItem& _bodyWeight)
{
    m_bodyWeight = _bodyWeight;
    m_bodyWeightHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BodyWeightHasBeenSet() const
{
    return m_bodyWeightHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetBodyMassIndex() const
{
    return m_bodyMassIndex;
}

void GeneralExaminationVitalSign::SetBodyMassIndex(const ValueUnitItem& _bodyMassIndex)
{
    m_bodyMassIndex = _bodyMassIndex;
    m_bodyMassIndexHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BodyMassIndexHasBeenSet() const
{
    return m_bodyMassIndexHasBeenSet;
}

ValueUnitItem GeneralExaminationVitalSign::GetWaistline() const
{
    return m_waistline;
}

void GeneralExaminationVitalSign::SetWaistline(const ValueUnitItem& _waistline)
{
    m_waistline = _waistline;
    m_waistlineHasBeenSet = true;
}

bool GeneralExaminationVitalSign::WaistlineHasBeenSet() const
{
    return m_waistlineHasBeenSet;
}

GeneralExaminationVitalSignBloodPressure GeneralExaminationVitalSign::GetBloodPressure() const
{
    return m_bloodPressure;
}

void GeneralExaminationVitalSign::SetBloodPressure(const GeneralExaminationVitalSignBloodPressure& _bloodPressure)
{
    m_bloodPressure = _bloodPressure;
    m_bloodPressureHasBeenSet = true;
}

bool GeneralExaminationVitalSign::BloodPressureHasBeenSet() const
{
    return m_bloodPressureHasBeenSet;
}

