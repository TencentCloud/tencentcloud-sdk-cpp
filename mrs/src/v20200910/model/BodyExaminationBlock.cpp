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

#include <tencentcloud/mrs/v20200910/model/BodyExaminationBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BodyExaminationBlock::BodyExaminationBlock() :
    m_bodyTemperatureHasBeenSet(false),
    m_pulseHasBeenSet(false),
    m_breatheHasBeenSet(false),
    m_bloodPressureHasBeenSet(false)
{
}

CoreInternalOutcome BodyExaminationBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BodyTemperature") && !value["BodyTemperature"].IsNull())
    {
        if (!value["BodyTemperature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BodyExaminationBlock.BodyTemperature` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BodyExaminationBlock.Pulse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pulse.Deserialize(value["Pulse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pulseHasBeenSet = true;
    }

    if (value.HasMember("Breathe") && !value["Breathe"].IsNull())
    {
        if (!value["Breathe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BodyExaminationBlock.Breathe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_breathe.Deserialize(value["Breathe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_breatheHasBeenSet = true;
    }

    if (value.HasMember("BloodPressure") && !value["BloodPressure"].IsNull())
    {
        if (!value["BloodPressure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BodyExaminationBlock.BloodPressure` is not object type").SetRequestId(requestId));
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

void BodyExaminationBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_breatheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Breathe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_breathe.ToJsonObject(value[key.c_str()], allocator);
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


BodyTemperatureBlock BodyExaminationBlock::GetBodyTemperature() const
{
    return m_bodyTemperature;
}

void BodyExaminationBlock::SetBodyTemperature(const BodyTemperatureBlock& _bodyTemperature)
{
    m_bodyTemperature = _bodyTemperature;
    m_bodyTemperatureHasBeenSet = true;
}

bool BodyExaminationBlock::BodyTemperatureHasBeenSet() const
{
    return m_bodyTemperatureHasBeenSet;
}

BodyTemperatureBlock BodyExaminationBlock::GetPulse() const
{
    return m_pulse;
}

void BodyExaminationBlock::SetPulse(const BodyTemperatureBlock& _pulse)
{
    m_pulse = _pulse;
    m_pulseHasBeenSet = true;
}

bool BodyExaminationBlock::PulseHasBeenSet() const
{
    return m_pulseHasBeenSet;
}

BodyTemperatureBlock BodyExaminationBlock::GetBreathe() const
{
    return m_breathe;
}

void BodyExaminationBlock::SetBreathe(const BodyTemperatureBlock& _breathe)
{
    m_breathe = _breathe;
    m_breatheHasBeenSet = true;
}

bool BodyExaminationBlock::BreatheHasBeenSet() const
{
    return m_breatheHasBeenSet;
}

BloodPressureBlock BodyExaminationBlock::GetBloodPressure() const
{
    return m_bloodPressure;
}

void BodyExaminationBlock::SetBloodPressure(const BloodPressureBlock& _bloodPressure)
{
    m_bloodPressure = _bloodPressure;
    m_bloodPressureHasBeenSet = true;
}

bool BodyExaminationBlock::BloodPressureHasBeenSet() const
{
    return m_bloodPressureHasBeenSet;
}

