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

#include <tencentcloud/cynosdb/v20190107/model/TaskProgressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TaskProgressInfo::TaskProgressInfo() :
    m_currentStepHasBeenSet(false),
    m_currentStepProgressHasBeenSet(false),
    m_currentStepRemainingTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskProgressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskProgressInfo.CurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = string(value["CurrentStep"].GetString());
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepProgress") && !value["CurrentStepProgress"].IsNull())
    {
        if (!value["CurrentStepProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskProgressInfo.CurrentStepProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepProgress = value["CurrentStepProgress"].GetInt64();
        m_currentStepProgressHasBeenSet = true;
    }

    if (value.HasMember("CurrentStepRemainingTime") && !value["CurrentStepRemainingTime"].IsNull())
    {
        if (!value["CurrentStepRemainingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskProgressInfo.CurrentStepRemainingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStepRemainingTime = string(value["CurrentStepRemainingTime"].GetString());
        m_currentStepRemainingTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskProgressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_currentStepProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStepProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentStepProgress, allocator);
    }

    if (m_currentStepRemainingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStepRemainingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStepRemainingTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskProgressInfo::GetCurrentStep() const
{
    return m_currentStep;
}

void TaskProgressInfo::SetCurrentStep(const string& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool TaskProgressInfo::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

int64_t TaskProgressInfo::GetCurrentStepProgress() const
{
    return m_currentStepProgress;
}

void TaskProgressInfo::SetCurrentStepProgress(const int64_t& _currentStepProgress)
{
    m_currentStepProgress = _currentStepProgress;
    m_currentStepProgressHasBeenSet = true;
}

bool TaskProgressInfo::CurrentStepProgressHasBeenSet() const
{
    return m_currentStepProgressHasBeenSet;
}

string TaskProgressInfo::GetCurrentStepRemainingTime() const
{
    return m_currentStepRemainingTime;
}

void TaskProgressInfo::SetCurrentStepRemainingTime(const string& _currentStepRemainingTime)
{
    m_currentStepRemainingTime = _currentStepRemainingTime;
    m_currentStepRemainingTimeHasBeenSet = true;
}

bool TaskProgressInfo::CurrentStepRemainingTimeHasBeenSet() const
{
    return m_currentStepRemainingTimeHasBeenSet;
}

