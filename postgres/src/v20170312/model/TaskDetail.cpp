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

#include <tencentcloud/postgres/v20170312/model/TaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

TaskDetail::TaskDetail() :
    m_currentStepHasBeenSet(false),
    m_allStepsHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchTimeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome TaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.CurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = string(value["CurrentStep"].GetString());
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("AllSteps") && !value["AllSteps"].IsNull())
    {
        if (!value["AllSteps"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.AllSteps` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allSteps = string(value["AllSteps"].GetString());
        m_allStepsHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("SwitchTag") && !value["SwitchTag"].IsNull())
    {
        if (!value["SwitchTag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.SwitchTag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switchTag = value["SwitchTag"].GetUint64();
        m_switchTagHasBeenSet = true;
    }

    if (value.HasMember("SwitchTime") && !value["SwitchTime"].IsNull())
    {
        if (!value["SwitchTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.SwitchTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchTime = string(value["SwitchTime"].GetString());
        m_switchTimeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_allStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allSteps.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchTime.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string TaskDetail::GetCurrentStep() const
{
    return m_currentStep;
}

void TaskDetail::SetCurrentStep(const string& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool TaskDetail::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

string TaskDetail::GetAllSteps() const
{
    return m_allSteps;
}

void TaskDetail::SetAllSteps(const string& _allSteps)
{
    m_allSteps = _allSteps;
    m_allStepsHasBeenSet = true;
}

bool TaskDetail::AllStepsHasBeenSet() const
{
    return m_allStepsHasBeenSet;
}

string TaskDetail::GetInput() const
{
    return m_input;
}

void TaskDetail::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool TaskDetail::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string TaskDetail::GetOutput() const
{
    return m_output;
}

void TaskDetail::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool TaskDetail::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

uint64_t TaskDetail::GetSwitchTag() const
{
    return m_switchTag;
}

void TaskDetail::SetSwitchTag(const uint64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool TaskDetail::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string TaskDetail::GetSwitchTime() const
{
    return m_switchTime;
}

void TaskDetail::SetSwitchTime(const string& _switchTime)
{
    m_switchTime = _switchTime;
    m_switchTimeHasBeenSet = true;
}

bool TaskDetail::SwitchTimeHasBeenSet() const
{
    return m_switchTimeHasBeenSet;
}

string TaskDetail::GetMessage() const
{
    return m_message;
}

void TaskDetail::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TaskDetail::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

