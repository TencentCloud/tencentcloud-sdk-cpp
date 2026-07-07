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

#include <tencentcloud/clb/v20180317/model/Coefficient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

Coefficient::Coefficient() :
    m_inputCachedCoefficientHasBeenSet(false),
    m_inputCoefficientHasBeenSet(false),
    m_outputCoefficientHasBeenSet(false)
{
}

CoreInternalOutcome Coefficient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputCachedCoefficient") && !value["InputCachedCoefficient"].IsNull())
    {
        if (!value["InputCachedCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputCachedCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCachedCoefficient = value["InputCachedCoefficient"].GetDouble();
        m_inputCachedCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputCoefficient") && !value["InputCoefficient"].IsNull())
    {
        if (!value["InputCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCoefficient = value["InputCoefficient"].GetDouble();
        m_inputCoefficientHasBeenSet = true;
    }

    if (value.HasMember("OutputCoefficient") && !value["OutputCoefficient"].IsNull())
    {
        if (!value["OutputCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.OutputCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputCoefficient = value["OutputCoefficient"].GetDouble();
        m_outputCoefficientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Coefficient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputCachedCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCachedCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCachedCoefficient, allocator);
    }

    if (m_inputCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCoefficient, allocator);
    }

    if (m_outputCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputCoefficient, allocator);
    }

}


double Coefficient::GetInputCachedCoefficient() const
{
    return m_inputCachedCoefficient;
}

void Coefficient::SetInputCachedCoefficient(const double& _inputCachedCoefficient)
{
    m_inputCachedCoefficient = _inputCachedCoefficient;
    m_inputCachedCoefficientHasBeenSet = true;
}

bool Coefficient::InputCachedCoefficientHasBeenSet() const
{
    return m_inputCachedCoefficientHasBeenSet;
}

double Coefficient::GetInputCoefficient() const
{
    return m_inputCoefficient;
}

void Coefficient::SetInputCoefficient(const double& _inputCoefficient)
{
    m_inputCoefficient = _inputCoefficient;
    m_inputCoefficientHasBeenSet = true;
}

bool Coefficient::InputCoefficientHasBeenSet() const
{
    return m_inputCoefficientHasBeenSet;
}

double Coefficient::GetOutputCoefficient() const
{
    return m_outputCoefficient;
}

void Coefficient::SetOutputCoefficient(const double& _outputCoefficient)
{
    m_outputCoefficient = _outputCoefficient;
    m_outputCoefficientHasBeenSet = true;
}

bool Coefficient::OutputCoefficientHasBeenSet() const
{
    return m_outputCoefficientHasBeenSet;
}

