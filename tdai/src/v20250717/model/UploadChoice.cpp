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

#include <tencentcloud/tdai/v20250717/model/UploadChoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

UploadChoice::UploadChoice() :
    m_indexHasBeenSet(false),
    m_stepNoHasBeenSet(false),
    m_currentStepHasBeenSet(false),
    m_deltaHasBeenSet(false),
    m_finishReasonHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome UploadChoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.StepNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetInt64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.CurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = string(value["CurrentStep"].GetString());
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("Delta") && !value["Delta"].IsNull())
    {
        if (!value["Delta"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.Delta` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_delta.Deserialize(value["Delta"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deltaHasBeenSet = true;
    }

    if (value.HasMember("FinishReason") && !value["FinishReason"].IsNull())
    {
        if (!value["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(value["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadChoice.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadChoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_stepNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNo, allocator);
    }

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_deltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_delta.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_finishReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishReason.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


int64_t UploadChoice::GetIndex() const
{
    return m_index;
}

void UploadChoice::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool UploadChoice::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t UploadChoice::GetStepNo() const
{
    return m_stepNo;
}

void UploadChoice::SetStepNo(const int64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool UploadChoice::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string UploadChoice::GetCurrentStep() const
{
    return m_currentStep;
}

void UploadChoice::SetCurrentStep(const string& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool UploadChoice::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

UploadDelta UploadChoice::GetDelta() const
{
    return m_delta;
}

void UploadChoice::SetDelta(const UploadDelta& _delta)
{
    m_delta = _delta;
    m_deltaHasBeenSet = true;
}

bool UploadChoice::DeltaHasBeenSet() const
{
    return m_deltaHasBeenSet;
}

string UploadChoice::GetFinishReason() const
{
    return m_finishReason;
}

void UploadChoice::SetFinishReason(const string& _finishReason)
{
    m_finishReason = _finishReason;
    m_finishReasonHasBeenSet = true;
}

bool UploadChoice::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

string UploadChoice::GetErrorMessage() const
{
    return m_errorMessage;
}

void UploadChoice::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool UploadChoice::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

