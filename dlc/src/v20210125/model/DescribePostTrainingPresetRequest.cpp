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

#include <tencentcloud/dlc/v20210125/model/DescribePostTrainingPresetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribePostTrainingPresetRequest::DescribePostTrainingPresetRequest() :
    m_modeHasBeenSet(false),
    m_trainingModeHasBeenSet(false),
    m_fineTuneTypeHasBeenSet(false),
    m_parameterSizeHasBeenSet(false)
{
}

string DescribePostTrainingPresetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_fineTuneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FineTuneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fineTuneType.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parameterSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePostTrainingPresetRequest::GetMode() const
{
    return m_mode;
}

void DescribePostTrainingPresetRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribePostTrainingPresetRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribePostTrainingPresetRequest::GetTrainingMode() const
{
    return m_trainingMode;
}

void DescribePostTrainingPresetRequest::SetTrainingMode(const string& _trainingMode)
{
    m_trainingMode = _trainingMode;
    m_trainingModeHasBeenSet = true;
}

bool DescribePostTrainingPresetRequest::TrainingModeHasBeenSet() const
{
    return m_trainingModeHasBeenSet;
}

string DescribePostTrainingPresetRequest::GetFineTuneType() const
{
    return m_fineTuneType;
}

void DescribePostTrainingPresetRequest::SetFineTuneType(const string& _fineTuneType)
{
    m_fineTuneType = _fineTuneType;
    m_fineTuneTypeHasBeenSet = true;
}

bool DescribePostTrainingPresetRequest::FineTuneTypeHasBeenSet() const
{
    return m_fineTuneTypeHasBeenSet;
}

double DescribePostTrainingPresetRequest::GetParameterSize() const
{
    return m_parameterSize;
}

void DescribePostTrainingPresetRequest::SetParameterSize(const double& _parameterSize)
{
    m_parameterSize = _parameterSize;
    m_parameterSizeHasBeenSet = true;
}

bool DescribePostTrainingPresetRequest::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}


