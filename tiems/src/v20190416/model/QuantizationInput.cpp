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

#include <tencentcloud/tiems/v20190416/model/QuantizationInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

QuantizationInput::QuantizationInput() :
    m_inputPathHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_convertTypeHasBeenSet(false)
{
}

CoreInternalOutcome QuantizationInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantizationInput.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantizationInput.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuantizationInput.BatchSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetUint64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantizationInput.Precision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_precision = string(value["Precision"].GetString());
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("ConvertType") && !value["ConvertType"].IsNull())
    {
        if (!value["ConvertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantizationInput.ConvertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_convertType = string(value["ConvertType"].GetString());
        m_convertTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuantizationInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_outputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_precision.c_str(), allocator).Move(), allocator);
    }

    if (m_convertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_convertType.c_str(), allocator).Move(), allocator);
    }

}


string QuantizationInput::GetInputPath() const
{
    return m_inputPath;
}

void QuantizationInput::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool QuantizationInput::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

string QuantizationInput::GetOutputPath() const
{
    return m_outputPath;
}

void QuantizationInput::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool QuantizationInput::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

uint64_t QuantizationInput::GetBatchSize() const
{
    return m_batchSize;
}

void QuantizationInput::SetBatchSize(const uint64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool QuantizationInput::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

string QuantizationInput::GetPrecision() const
{
    return m_precision;
}

void QuantizationInput::SetPrecision(const string& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool QuantizationInput::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

string QuantizationInput::GetConvertType() const
{
    return m_convertType;
}

void QuantizationInput::SetConvertType(const string& _convertType)
{
    m_convertType = _convertType;
    m_convertTypeHasBeenSet = true;
}

bool QuantizationInput::ConvertTypeHasBeenSet() const
{
    return m_convertTypeHasBeenSet;
}

