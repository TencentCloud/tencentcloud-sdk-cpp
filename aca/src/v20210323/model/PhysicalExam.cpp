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

#include <tencentcloud/aca/v20210323/model/PhysicalExam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

PhysicalExam::PhysicalExam() :
    m_pulseHasBeenSet(false),
    m_breatheHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_bodyTemperatureHasBeenSet(false),
    m_diastolicPressureHasBeenSet(false),
    m_systolicPressureHasBeenSet(false)
{
}

CoreInternalOutcome PhysicalExam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pulse") && !value["Pulse"].IsNull())
    {
        if (!value["Pulse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.Pulse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pulse = string(value["Pulse"].GetString());
        m_pulseHasBeenSet = true;
    }

    if (value.HasMember("Breathe") && !value["Breathe"].IsNull())
    {
        if (!value["Breathe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.Breathe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_breathe = string(value["Breathe"].GetString());
        m_breatheHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.Weight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weight = string(value["Weight"].GetString());
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("BodyTemperature") && !value["BodyTemperature"].IsNull())
    {
        if (!value["BodyTemperature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.BodyTemperature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyTemperature = string(value["BodyTemperature"].GetString());
        m_bodyTemperatureHasBeenSet = true;
    }

    if (value.HasMember("DiastolicPressure") && !value["DiastolicPressure"].IsNull())
    {
        if (!value["DiastolicPressure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.DiastolicPressure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diastolicPressure = string(value["DiastolicPressure"].GetString());
        m_diastolicPressureHasBeenSet = true;
    }

    if (value.HasMember("SystolicPressure") && !value["SystolicPressure"].IsNull())
    {
        if (!value["SystolicPressure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExam.SystolicPressure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systolicPressure = string(value["SystolicPressure"].GetString());
        m_systolicPressureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhysicalExam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pulseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pulse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pulse.c_str(), allocator).Move(), allocator);
    }

    if (m_breatheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Breathe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_breathe.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weight.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyTemperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyTemperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyTemperature.c_str(), allocator).Move(), allocator);
    }

    if (m_diastolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiastolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diastolicPressure.c_str(), allocator).Move(), allocator);
    }

    if (m_systolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systolicPressure.c_str(), allocator).Move(), allocator);
    }

}


string PhysicalExam::GetPulse() const
{
    return m_pulse;
}

void PhysicalExam::SetPulse(const string& _pulse)
{
    m_pulse = _pulse;
    m_pulseHasBeenSet = true;
}

bool PhysicalExam::PulseHasBeenSet() const
{
    return m_pulseHasBeenSet;
}

string PhysicalExam::GetBreathe() const
{
    return m_breathe;
}

void PhysicalExam::SetBreathe(const string& _breathe)
{
    m_breathe = _breathe;
    m_breatheHasBeenSet = true;
}

bool PhysicalExam::BreatheHasBeenSet() const
{
    return m_breatheHasBeenSet;
}

string PhysicalExam::GetWeight() const
{
    return m_weight;
}

void PhysicalExam::SetWeight(const string& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool PhysicalExam::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string PhysicalExam::GetBodyTemperature() const
{
    return m_bodyTemperature;
}

void PhysicalExam::SetBodyTemperature(const string& _bodyTemperature)
{
    m_bodyTemperature = _bodyTemperature;
    m_bodyTemperatureHasBeenSet = true;
}

bool PhysicalExam::BodyTemperatureHasBeenSet() const
{
    return m_bodyTemperatureHasBeenSet;
}

string PhysicalExam::GetDiastolicPressure() const
{
    return m_diastolicPressure;
}

void PhysicalExam::SetDiastolicPressure(const string& _diastolicPressure)
{
    m_diastolicPressure = _diastolicPressure;
    m_diastolicPressureHasBeenSet = true;
}

bool PhysicalExam::DiastolicPressureHasBeenSet() const
{
    return m_diastolicPressureHasBeenSet;
}

string PhysicalExam::GetSystolicPressure() const
{
    return m_systolicPressure;
}

void PhysicalExam::SetSystolicPressure(const string& _systolicPressure)
{
    m_systolicPressure = _systolicPressure;
    m_systolicPressureHasBeenSet = true;
}

bool PhysicalExam::SystolicPressureHasBeenSet() const
{
    return m_systolicPressureHasBeenSet;
}

