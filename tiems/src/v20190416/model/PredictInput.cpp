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

#include <tencentcloud/tiems/v20190416/model/PredictInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

PredictInput::PredictInput() :
    m_inputPathHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_inputDataFormatHasBeenSet(false),
    m_outputDataFormatHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_signatureNameHasBeenSet(false)
{
}

CoreInternalOutcome PredictInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (value.HasMember("InputDataFormat") && !value["InputDataFormat"].IsNull())
    {
        if (!value["InputDataFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.InputDataFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDataFormat = string(value["InputDataFormat"].GetString());
        m_inputDataFormatHasBeenSet = true;
    }

    if (value.HasMember("OutputDataFormat") && !value["OutputDataFormat"].IsNull())
    {
        if (!value["OutputDataFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.OutputDataFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDataFormat = string(value["OutputDataFormat"].GetString());
        m_outputDataFormatHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.BatchSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetUint64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("SignatureName") && !value["SignatureName"].IsNull())
    {
        if (!value["SignatureName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PredictInput.SignatureName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureName = string(value["SignatureName"].GetString());
        m_signatureNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PredictInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inputDataFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDataFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDataFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDataFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDataFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDataFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_signatureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureName.c_str(), allocator).Move(), allocator);
    }

}


string PredictInput::GetInputPath() const
{
    return m_inputPath;
}

void PredictInput::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool PredictInput::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

string PredictInput::GetOutputPath() const
{
    return m_outputPath;
}

void PredictInput::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool PredictInput::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

string PredictInput::GetInputDataFormat() const
{
    return m_inputDataFormat;
}

void PredictInput::SetInputDataFormat(const string& _inputDataFormat)
{
    m_inputDataFormat = _inputDataFormat;
    m_inputDataFormatHasBeenSet = true;
}

bool PredictInput::InputDataFormatHasBeenSet() const
{
    return m_inputDataFormatHasBeenSet;
}

string PredictInput::GetOutputDataFormat() const
{
    return m_outputDataFormat;
}

void PredictInput::SetOutputDataFormat(const string& _outputDataFormat)
{
    m_outputDataFormat = _outputDataFormat;
    m_outputDataFormatHasBeenSet = true;
}

bool PredictInput::OutputDataFormatHasBeenSet() const
{
    return m_outputDataFormatHasBeenSet;
}

uint64_t PredictInput::GetBatchSize() const
{
    return m_batchSize;
}

void PredictInput::SetBatchSize(const uint64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool PredictInput::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

string PredictInput::GetSignatureName() const
{
    return m_signatureName;
}

void PredictInput::SetSignatureName(const string& _signatureName)
{
    m_signatureName = _signatureName;
    m_signatureNameHasBeenSet = true;
}

bool PredictInput::SignatureNameHasBeenSet() const
{
    return m_signatureNameHasBeenSet;
}

