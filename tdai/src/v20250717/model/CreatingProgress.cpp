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

#include <tencentcloud/tdai/v20250717/model/CreatingProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CreatingProgress::CreatingProgress() :
    m_totalStepsHasBeenSet(false),
    m_currentStepHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome CreatingProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalSteps") && !value["TotalSteps"].IsNull())
    {
        if (!value["TotalSteps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatingProgress.TotalSteps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSteps = value["TotalSteps"].GetInt64();
        m_totalStepsHasBeenSet = true;
    }

    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatingProgress.CurrentStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = value["CurrentStep"].GetInt64();
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("Steps") && !value["Steps"].IsNull())
    {
        if (!value["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreatingProgress.Steps` is not array type"));

        const rapidjson::Value &tmpValue = value["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreatingStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreatingProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSteps, allocator);
    }

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentStep, allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CreatingProgress::GetTotalSteps() const
{
    return m_totalSteps;
}

void CreatingProgress::SetTotalSteps(const int64_t& _totalSteps)
{
    m_totalSteps = _totalSteps;
    m_totalStepsHasBeenSet = true;
}

bool CreatingProgress::TotalStepsHasBeenSet() const
{
    return m_totalStepsHasBeenSet;
}

int64_t CreatingProgress::GetCurrentStep() const
{
    return m_currentStep;
}

void CreatingProgress::SetCurrentStep(const int64_t& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool CreatingProgress::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

vector<CreatingStepInfo> CreatingProgress::GetSteps() const
{
    return m_steps;
}

void CreatingProgress::SetSteps(const vector<CreatingStepInfo>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool CreatingProgress::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

