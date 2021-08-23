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

#include <tencentcloud/tione/v20191022/model/AlgorithmSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

AlgorithmSpecification::AlgorithmSpecification() :
    m_trainingImageNameHasBeenSet(false),
    m_trainingInputModeHasBeenSet(false),
    m_algorithmNameHasBeenSet(false)
{
}

CoreInternalOutcome AlgorithmSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrainingImageName") && !value["TrainingImageName"].IsNull())
    {
        if (!value["TrainingImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmSpecification.TrainingImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingImageName = string(value["TrainingImageName"].GetString());
        m_trainingImageNameHasBeenSet = true;
    }

    if (value.HasMember("TrainingInputMode") && !value["TrainingInputMode"].IsNull())
    {
        if (!value["TrainingInputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmSpecification.TrainingInputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingInputMode = string(value["TrainingInputMode"].GetString());
        m_trainingInputModeHasBeenSet = true;
    }

    if (value.HasMember("AlgorithmName") && !value["AlgorithmName"].IsNull())
    {
        if (!value["AlgorithmName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmSpecification.AlgorithmName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithmName = string(value["AlgorithmName"].GetString());
        m_algorithmNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgorithmSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trainingImageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingImageName.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingInputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingInputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingInputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithmName.c_str(), allocator).Move(), allocator);
    }

}


string AlgorithmSpecification::GetTrainingImageName() const
{
    return m_trainingImageName;
}

void AlgorithmSpecification::SetTrainingImageName(const string& _trainingImageName)
{
    m_trainingImageName = _trainingImageName;
    m_trainingImageNameHasBeenSet = true;
}

bool AlgorithmSpecification::TrainingImageNameHasBeenSet() const
{
    return m_trainingImageNameHasBeenSet;
}

string AlgorithmSpecification::GetTrainingInputMode() const
{
    return m_trainingInputMode;
}

void AlgorithmSpecification::SetTrainingInputMode(const string& _trainingInputMode)
{
    m_trainingInputMode = _trainingInputMode;
    m_trainingInputModeHasBeenSet = true;
}

bool AlgorithmSpecification::TrainingInputModeHasBeenSet() const
{
    return m_trainingInputModeHasBeenSet;
}

string AlgorithmSpecification::GetAlgorithmName() const
{
    return m_algorithmName;
}

void AlgorithmSpecification::SetAlgorithmName(const string& _algorithmName)
{
    m_algorithmName = _algorithmName;
    m_algorithmNameHasBeenSet = true;
}

bool AlgorithmSpecification::AlgorithmNameHasBeenSet() const
{
    return m_algorithmNameHasBeenSet;
}

