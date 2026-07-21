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

#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

AssessDeviceRiskPremiumRsp::AssessDeviceRiskPremiumRsp() :
    m_decisionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

CoreInternalOutcome AssessDeviceRiskPremiumRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskPremiumRsp.Decision` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_decision.Deserialize(value["Decision"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_decisionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskPremiumRsp.Score` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_score.Deserialize(value["Score"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskPremiumRsp.Device` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_device.Deserialize(value["Device"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskPremiumRsp.Environment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environment.Deserialize(value["Environment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessDeviceRiskPremiumRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_decisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_decision.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_score.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_device.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(value[key.c_str()], allocator);
    }

}


Decision AssessDeviceRiskPremiumRsp::GetDecision() const
{
    return m_decision;
}

void AssessDeviceRiskPremiumRsp::SetDecision(const Decision& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool AssessDeviceRiskPremiumRsp::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

DataScore AssessDeviceRiskPremiumRsp::GetScore() const
{
    return m_score;
}

void AssessDeviceRiskPremiumRsp::SetScore(const DataScore& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AssessDeviceRiskPremiumRsp::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Device AssessDeviceRiskPremiumRsp::GetDevice() const
{
    return m_device;
}

void AssessDeviceRiskPremiumRsp::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool AssessDeviceRiskPremiumRsp::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

Environment AssessDeviceRiskPremiumRsp::GetEnvironment() const
{
    return m_environment;
}

void AssessDeviceRiskPremiumRsp::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AssessDeviceRiskPremiumRsp::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

