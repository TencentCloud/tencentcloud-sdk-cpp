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
    m_inputCacheCreationCoefficientHasBeenSet(false),
    m_inputCoefficientHasBeenSet(false),
    m_outputCoefficientHasBeenSet(false),
    m_inputImageCoefficientHasBeenSet(false),
    m_inputVideoSecondCoefficientHasBeenSet(false),
    m_outputVideoSecondCoefficientHasBeenSet(false)
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

    if (value.HasMember("InputCacheCreationCoefficient") && !value["InputCacheCreationCoefficient"].IsNull())
    {
        if (!value["InputCacheCreationCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputCacheCreationCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCacheCreationCoefficient = value["InputCacheCreationCoefficient"].GetDouble();
        m_inputCacheCreationCoefficientHasBeenSet = true;
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

    if (value.HasMember("InputImageCoefficient") && !value["InputImageCoefficient"].IsNull())
    {
        if (!value["InputImageCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputImageCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputImageCoefficient = value["InputImageCoefficient"].GetDouble();
        m_inputImageCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputVideoSecondCoefficient") && !value["InputVideoSecondCoefficient"].IsNull())
    {
        if (!value["InputVideoSecondCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputVideoSecondCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputVideoSecondCoefficient = value["InputVideoSecondCoefficient"].GetDouble();
        m_inputVideoSecondCoefficientHasBeenSet = true;
    }

    if (value.HasMember("OutputVideoSecondCoefficient") && !value["OutputVideoSecondCoefficient"].IsNull())
    {
        if (!value["OutputVideoSecondCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.OutputVideoSecondCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputVideoSecondCoefficient = value["OutputVideoSecondCoefficient"].GetDouble();
        m_outputVideoSecondCoefficientHasBeenSet = true;
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

    if (m_inputCacheCreationCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCacheCreationCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCacheCreationCoefficient, allocator);
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

    if (m_inputImageCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImageCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputImageCoefficient, allocator);
    }

    if (m_inputVideoSecondCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputVideoSecondCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputVideoSecondCoefficient, allocator);
    }

    if (m_outputVideoSecondCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputVideoSecondCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputVideoSecondCoefficient, allocator);
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

double Coefficient::GetInputCacheCreationCoefficient() const
{
    return m_inputCacheCreationCoefficient;
}

void Coefficient::SetInputCacheCreationCoefficient(const double& _inputCacheCreationCoefficient)
{
    m_inputCacheCreationCoefficient = _inputCacheCreationCoefficient;
    m_inputCacheCreationCoefficientHasBeenSet = true;
}

bool Coefficient::InputCacheCreationCoefficientHasBeenSet() const
{
    return m_inputCacheCreationCoefficientHasBeenSet;
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

double Coefficient::GetInputImageCoefficient() const
{
    return m_inputImageCoefficient;
}

void Coefficient::SetInputImageCoefficient(const double& _inputImageCoefficient)
{
    m_inputImageCoefficient = _inputImageCoefficient;
    m_inputImageCoefficientHasBeenSet = true;
}

bool Coefficient::InputImageCoefficientHasBeenSet() const
{
    return m_inputImageCoefficientHasBeenSet;
}

double Coefficient::GetInputVideoSecondCoefficient() const
{
    return m_inputVideoSecondCoefficient;
}

void Coefficient::SetInputVideoSecondCoefficient(const double& _inputVideoSecondCoefficient)
{
    m_inputVideoSecondCoefficient = _inputVideoSecondCoefficient;
    m_inputVideoSecondCoefficientHasBeenSet = true;
}

bool Coefficient::InputVideoSecondCoefficientHasBeenSet() const
{
    return m_inputVideoSecondCoefficientHasBeenSet;
}

double Coefficient::GetOutputVideoSecondCoefficient() const
{
    return m_outputVideoSecondCoefficient;
}

void Coefficient::SetOutputVideoSecondCoefficient(const double& _outputVideoSecondCoefficient)
{
    m_outputVideoSecondCoefficient = _outputVideoSecondCoefficient;
    m_outputVideoSecondCoefficientHasBeenSet = true;
}

bool Coefficient::OutputVideoSecondCoefficientHasBeenSet() const
{
    return m_outputVideoSecondCoefficientHasBeenSet;
}

