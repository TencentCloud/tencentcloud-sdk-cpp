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

#include <tencentcloud/dlc/v20210125/model/TrainingParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TrainingParams::TrainingParams() :
    m_perDeviceBatchSizeHasBeenSet(false),
    m_gradientAccumulationStepsHasBeenSet(false),
    m_gradientCheckpointingHasBeenSet(false),
    m_cutoffLenHasBeenSet(false),
    m_learningRateHasBeenSet(false),
    m_epochsHasBeenSet(false),
    m_loraRankHasBeenSet(false),
    m_warmupRatioHasBeenSet(false),
    m_trainBatchSizeHasBeenSet(false),
    m_pPOMiniBatchSizeHasBeenSet(false),
    m_gpuMemoryUtilizationHasBeenSet(false),
    m_maxResponseLengthHasBeenSet(false),
    m_numSamplesPerPromptHasBeenSet(false)
{
}

CoreInternalOutcome TrainingParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PerDeviceBatchSize") && !value["PerDeviceBatchSize"].IsNull())
    {
        if (!value["PerDeviceBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.PerDeviceBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perDeviceBatchSize = value["PerDeviceBatchSize"].GetInt64();
        m_perDeviceBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("GradientAccumulationSteps") && !value["GradientAccumulationSteps"].IsNull())
    {
        if (!value["GradientAccumulationSteps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.GradientAccumulationSteps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gradientAccumulationSteps = value["GradientAccumulationSteps"].GetInt64();
        m_gradientAccumulationStepsHasBeenSet = true;
    }

    if (value.HasMember("GradientCheckpointing") && !value["GradientCheckpointing"].IsNull())
    {
        if (!value["GradientCheckpointing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.GradientCheckpointing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gradientCheckpointing = value["GradientCheckpointing"].GetBool();
        m_gradientCheckpointingHasBeenSet = true;
    }

    if (value.HasMember("CutoffLen") && !value["CutoffLen"].IsNull())
    {
        if (!value["CutoffLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.CutoffLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cutoffLen = value["CutoffLen"].GetInt64();
        m_cutoffLenHasBeenSet = true;
    }

    if (value.HasMember("LearningRate") && !value["LearningRate"].IsNull())
    {
        if (!value["LearningRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.LearningRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_learningRate = value["LearningRate"].GetDouble();
        m_learningRateHasBeenSet = true;
    }

    if (value.HasMember("Epochs") && !value["Epochs"].IsNull())
    {
        if (!value["Epochs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.Epochs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_epochs = value["Epochs"].GetInt64();
        m_epochsHasBeenSet = true;
    }

    if (value.HasMember("LoraRank") && !value["LoraRank"].IsNull())
    {
        if (!value["LoraRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.LoraRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loraRank = value["LoraRank"].GetInt64();
        m_loraRankHasBeenSet = true;
    }

    if (value.HasMember("WarmupRatio") && !value["WarmupRatio"].IsNull())
    {
        if (!value["WarmupRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.WarmupRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_warmupRatio = value["WarmupRatio"].GetDouble();
        m_warmupRatioHasBeenSet = true;
    }

    if (value.HasMember("TrainBatchSize") && !value["TrainBatchSize"].IsNull())
    {
        if (!value["TrainBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.TrainBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trainBatchSize = value["TrainBatchSize"].GetInt64();
        m_trainBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("PPOMiniBatchSize") && !value["PPOMiniBatchSize"].IsNull())
    {
        if (!value["PPOMiniBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.PPOMiniBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pPOMiniBatchSize = value["PPOMiniBatchSize"].GetInt64();
        m_pPOMiniBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryUtilization") && !value["GpuMemoryUtilization"].IsNull())
    {
        if (!value["GpuMemoryUtilization"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.GpuMemoryUtilization` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryUtilization = value["GpuMemoryUtilization"].GetDouble();
        m_gpuMemoryUtilizationHasBeenSet = true;
    }

    if (value.HasMember("MaxResponseLength") && !value["MaxResponseLength"].IsNull())
    {
        if (!value["MaxResponseLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.MaxResponseLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResponseLength = value["MaxResponseLength"].GetInt64();
        m_maxResponseLengthHasBeenSet = true;
    }

    if (value.HasMember("NumSamplesPerPrompt") && !value["NumSamplesPerPrompt"].IsNull())
    {
        if (!value["NumSamplesPerPrompt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingParams.NumSamplesPerPrompt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numSamplesPerPrompt = value["NumSamplesPerPrompt"].GetInt64();
        m_numSamplesPerPromptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_perDeviceBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerDeviceBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_perDeviceBatchSize, allocator);
    }

    if (m_gradientAccumulationStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradientAccumulationSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradientAccumulationSteps, allocator);
    }

    if (m_gradientCheckpointingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradientCheckpointing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradientCheckpointing, allocator);
    }

    if (m_cutoffLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutoffLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cutoffLen, allocator);
    }

    if (m_learningRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LearningRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_learningRate, allocator);
    }

    if (m_epochsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Epochs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_epochs, allocator);
    }

    if (m_loraRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraRank, allocator);
    }

    if (m_warmupRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmupRatio, allocator);
    }

    if (m_trainBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trainBatchSize, allocator);
    }

    if (m_pPOMiniBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PPOMiniBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pPOMiniBatchSize, allocator);
    }

    if (m_gpuMemoryUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemoryUtilization, allocator);
    }

    if (m_maxResponseLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResponseLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResponseLength, allocator);
    }

    if (m_numSamplesPerPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumSamplesPerPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numSamplesPerPrompt, allocator);
    }

}


int64_t TrainingParams::GetPerDeviceBatchSize() const
{
    return m_perDeviceBatchSize;
}

void TrainingParams::SetPerDeviceBatchSize(const int64_t& _perDeviceBatchSize)
{
    m_perDeviceBatchSize = _perDeviceBatchSize;
    m_perDeviceBatchSizeHasBeenSet = true;
}

bool TrainingParams::PerDeviceBatchSizeHasBeenSet() const
{
    return m_perDeviceBatchSizeHasBeenSet;
}

int64_t TrainingParams::GetGradientAccumulationSteps() const
{
    return m_gradientAccumulationSteps;
}

void TrainingParams::SetGradientAccumulationSteps(const int64_t& _gradientAccumulationSteps)
{
    m_gradientAccumulationSteps = _gradientAccumulationSteps;
    m_gradientAccumulationStepsHasBeenSet = true;
}

bool TrainingParams::GradientAccumulationStepsHasBeenSet() const
{
    return m_gradientAccumulationStepsHasBeenSet;
}

bool TrainingParams::GetGradientCheckpointing() const
{
    return m_gradientCheckpointing;
}

void TrainingParams::SetGradientCheckpointing(const bool& _gradientCheckpointing)
{
    m_gradientCheckpointing = _gradientCheckpointing;
    m_gradientCheckpointingHasBeenSet = true;
}

bool TrainingParams::GradientCheckpointingHasBeenSet() const
{
    return m_gradientCheckpointingHasBeenSet;
}

int64_t TrainingParams::GetCutoffLen() const
{
    return m_cutoffLen;
}

void TrainingParams::SetCutoffLen(const int64_t& _cutoffLen)
{
    m_cutoffLen = _cutoffLen;
    m_cutoffLenHasBeenSet = true;
}

bool TrainingParams::CutoffLenHasBeenSet() const
{
    return m_cutoffLenHasBeenSet;
}

double TrainingParams::GetLearningRate() const
{
    return m_learningRate;
}

void TrainingParams::SetLearningRate(const double& _learningRate)
{
    m_learningRate = _learningRate;
    m_learningRateHasBeenSet = true;
}

bool TrainingParams::LearningRateHasBeenSet() const
{
    return m_learningRateHasBeenSet;
}

int64_t TrainingParams::GetEpochs() const
{
    return m_epochs;
}

void TrainingParams::SetEpochs(const int64_t& _epochs)
{
    m_epochs = _epochs;
    m_epochsHasBeenSet = true;
}

bool TrainingParams::EpochsHasBeenSet() const
{
    return m_epochsHasBeenSet;
}

int64_t TrainingParams::GetLoraRank() const
{
    return m_loraRank;
}

void TrainingParams::SetLoraRank(const int64_t& _loraRank)
{
    m_loraRank = _loraRank;
    m_loraRankHasBeenSet = true;
}

bool TrainingParams::LoraRankHasBeenSet() const
{
    return m_loraRankHasBeenSet;
}

double TrainingParams::GetWarmupRatio() const
{
    return m_warmupRatio;
}

void TrainingParams::SetWarmupRatio(const double& _warmupRatio)
{
    m_warmupRatio = _warmupRatio;
    m_warmupRatioHasBeenSet = true;
}

bool TrainingParams::WarmupRatioHasBeenSet() const
{
    return m_warmupRatioHasBeenSet;
}

int64_t TrainingParams::GetTrainBatchSize() const
{
    return m_trainBatchSize;
}

void TrainingParams::SetTrainBatchSize(const int64_t& _trainBatchSize)
{
    m_trainBatchSize = _trainBatchSize;
    m_trainBatchSizeHasBeenSet = true;
}

bool TrainingParams::TrainBatchSizeHasBeenSet() const
{
    return m_trainBatchSizeHasBeenSet;
}

int64_t TrainingParams::GetPPOMiniBatchSize() const
{
    return m_pPOMiniBatchSize;
}

void TrainingParams::SetPPOMiniBatchSize(const int64_t& _pPOMiniBatchSize)
{
    m_pPOMiniBatchSize = _pPOMiniBatchSize;
    m_pPOMiniBatchSizeHasBeenSet = true;
}

bool TrainingParams::PPOMiniBatchSizeHasBeenSet() const
{
    return m_pPOMiniBatchSizeHasBeenSet;
}

double TrainingParams::GetGpuMemoryUtilization() const
{
    return m_gpuMemoryUtilization;
}

void TrainingParams::SetGpuMemoryUtilization(const double& _gpuMemoryUtilization)
{
    m_gpuMemoryUtilization = _gpuMemoryUtilization;
    m_gpuMemoryUtilizationHasBeenSet = true;
}

bool TrainingParams::GpuMemoryUtilizationHasBeenSet() const
{
    return m_gpuMemoryUtilizationHasBeenSet;
}

int64_t TrainingParams::GetMaxResponseLength() const
{
    return m_maxResponseLength;
}

void TrainingParams::SetMaxResponseLength(const int64_t& _maxResponseLength)
{
    m_maxResponseLength = _maxResponseLength;
    m_maxResponseLengthHasBeenSet = true;
}

bool TrainingParams::MaxResponseLengthHasBeenSet() const
{
    return m_maxResponseLengthHasBeenSet;
}

int64_t TrainingParams::GetNumSamplesPerPrompt() const
{
    return m_numSamplesPerPrompt;
}

void TrainingParams::SetNumSamplesPerPrompt(const int64_t& _numSamplesPerPrompt)
{
    m_numSamplesPerPrompt = _numSamplesPerPrompt;
    m_numSamplesPerPromptHasBeenSet = true;
}

bool TrainingParams::NumSamplesPerPromptHasBeenSet() const
{
    return m_numSamplesPerPromptHasBeenSet;
}

