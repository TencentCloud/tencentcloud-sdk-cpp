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
    m_outputVideoSecondCoefficientHasBeenSet(false),
    m_outputImageCoefficientHasBeenSet(false),
    m_inputAudioTokenCoefficientHasBeenSet(false),
    m_inputCachedAudioTokenCoefficientHasBeenSet(false),
    m_inputImageTokenCoefficientHasBeenSet(false),
    m_inputCachedImageTokenCoefficientHasBeenSet(false),
    m_outputAudioTokenCoefficientHasBeenSet(false)
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

    if (value.HasMember("OutputImageCoefficient") && !value["OutputImageCoefficient"].IsNull())
    {
        if (!value["OutputImageCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.OutputImageCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputImageCoefficient = value["OutputImageCoefficient"].GetDouble();
        m_outputImageCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputAudioTokenCoefficient") && !value["InputAudioTokenCoefficient"].IsNull())
    {
        if (!value["InputAudioTokenCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputAudioTokenCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputAudioTokenCoefficient = value["InputAudioTokenCoefficient"].GetDouble();
        m_inputAudioTokenCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputCachedAudioTokenCoefficient") && !value["InputCachedAudioTokenCoefficient"].IsNull())
    {
        if (!value["InputCachedAudioTokenCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputCachedAudioTokenCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCachedAudioTokenCoefficient = value["InputCachedAudioTokenCoefficient"].GetDouble();
        m_inputCachedAudioTokenCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputImageTokenCoefficient") && !value["InputImageTokenCoefficient"].IsNull())
    {
        if (!value["InputImageTokenCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputImageTokenCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputImageTokenCoefficient = value["InputImageTokenCoefficient"].GetDouble();
        m_inputImageTokenCoefficientHasBeenSet = true;
    }

    if (value.HasMember("InputCachedImageTokenCoefficient") && !value["InputCachedImageTokenCoefficient"].IsNull())
    {
        if (!value["InputCachedImageTokenCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.InputCachedImageTokenCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputCachedImageTokenCoefficient = value["InputCachedImageTokenCoefficient"].GetDouble();
        m_inputCachedImageTokenCoefficientHasBeenSet = true;
    }

    if (value.HasMember("OutputAudioTokenCoefficient") && !value["OutputAudioTokenCoefficient"].IsNull())
    {
        if (!value["OutputAudioTokenCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coefficient.OutputAudioTokenCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputAudioTokenCoefficient = value["OutputAudioTokenCoefficient"].GetDouble();
        m_outputAudioTokenCoefficientHasBeenSet = true;
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

    if (m_outputImageCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputImageCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputImageCoefficient, allocator);
    }

    if (m_inputAudioTokenCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputAudioTokenCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputAudioTokenCoefficient, allocator);
    }

    if (m_inputCachedAudioTokenCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCachedAudioTokenCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCachedAudioTokenCoefficient, allocator);
    }

    if (m_inputImageTokenCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImageTokenCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputImageTokenCoefficient, allocator);
    }

    if (m_inputCachedImageTokenCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCachedImageTokenCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCachedImageTokenCoefficient, allocator);
    }

    if (m_outputAudioTokenCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAudioTokenCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputAudioTokenCoefficient, allocator);
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

double Coefficient::GetOutputImageCoefficient() const
{
    return m_outputImageCoefficient;
}

void Coefficient::SetOutputImageCoefficient(const double& _outputImageCoefficient)
{
    m_outputImageCoefficient = _outputImageCoefficient;
    m_outputImageCoefficientHasBeenSet = true;
}

bool Coefficient::OutputImageCoefficientHasBeenSet() const
{
    return m_outputImageCoefficientHasBeenSet;
}

double Coefficient::GetInputAudioTokenCoefficient() const
{
    return m_inputAudioTokenCoefficient;
}

void Coefficient::SetInputAudioTokenCoefficient(const double& _inputAudioTokenCoefficient)
{
    m_inputAudioTokenCoefficient = _inputAudioTokenCoefficient;
    m_inputAudioTokenCoefficientHasBeenSet = true;
}

bool Coefficient::InputAudioTokenCoefficientHasBeenSet() const
{
    return m_inputAudioTokenCoefficientHasBeenSet;
}

double Coefficient::GetInputCachedAudioTokenCoefficient() const
{
    return m_inputCachedAudioTokenCoefficient;
}

void Coefficient::SetInputCachedAudioTokenCoefficient(const double& _inputCachedAudioTokenCoefficient)
{
    m_inputCachedAudioTokenCoefficient = _inputCachedAudioTokenCoefficient;
    m_inputCachedAudioTokenCoefficientHasBeenSet = true;
}

bool Coefficient::InputCachedAudioTokenCoefficientHasBeenSet() const
{
    return m_inputCachedAudioTokenCoefficientHasBeenSet;
}

double Coefficient::GetInputImageTokenCoefficient() const
{
    return m_inputImageTokenCoefficient;
}

void Coefficient::SetInputImageTokenCoefficient(const double& _inputImageTokenCoefficient)
{
    m_inputImageTokenCoefficient = _inputImageTokenCoefficient;
    m_inputImageTokenCoefficientHasBeenSet = true;
}

bool Coefficient::InputImageTokenCoefficientHasBeenSet() const
{
    return m_inputImageTokenCoefficientHasBeenSet;
}

double Coefficient::GetInputCachedImageTokenCoefficient() const
{
    return m_inputCachedImageTokenCoefficient;
}

void Coefficient::SetInputCachedImageTokenCoefficient(const double& _inputCachedImageTokenCoefficient)
{
    m_inputCachedImageTokenCoefficient = _inputCachedImageTokenCoefficient;
    m_inputCachedImageTokenCoefficientHasBeenSet = true;
}

bool Coefficient::InputCachedImageTokenCoefficientHasBeenSet() const
{
    return m_inputCachedImageTokenCoefficientHasBeenSet;
}

double Coefficient::GetOutputAudioTokenCoefficient() const
{
    return m_outputAudioTokenCoefficient;
}

void Coefficient::SetOutputAudioTokenCoefficient(const double& _outputAudioTokenCoefficient)
{
    m_outputAudioTokenCoefficient = _outputAudioTokenCoefficient;
    m_outputAudioTokenCoefficientHasBeenSet = true;
}

bool Coefficient::OutputAudioTokenCoefficientHasBeenSet() const
{
    return m_outputAudioTokenCoefficientHasBeenSet;
}

