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

#include <tencentcloud/dlc/v20210125/model/TrainingTuningParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TrainingTuningParams::TrainingTuningParams() :
    m_fineTuneTypeHasBeenSet(false),
    m_loraRankHasBeenSet(false),
    m_loraAlphaHasBeenSet(false),
    m_loraDropoutHasBeenSet(false),
    m_loraTargetHasBeenSet(false),
    m_trainingModeHasBeenSet(false),
    m_epochsHasBeenSet(false),
    m_learningRateHasBeenSet(false),
    m_perDeviceBatchSizeHasBeenSet(false),
    m_gradientAccumulationStepsHasBeenSet(false),
    m_cutoffLenHasBeenSet(false),
    m_maxSamplesHasBeenSet(false),
    m_gradientCheckPointingHasBeenSet(false),
    m_lrSchedulerHasBeenSet(false),
    m_warmupRatioHasBeenSet(false),
    m_dPOBetaHasBeenSet(false),
    m_dPOLossHasBeenSet(false),
    m_rewardFunctionCodeHasBeenSet(false),
    m_rewardFunctionCosPathHasBeenSet(false),
    m_kLCoefficientHasBeenSet(false),
    m_numSamplesPerPromptHasBeenSet(false),
    m_maxResponseLengthHasBeenSet(false),
    m_rollOutTemperatureHasBeenSet(false),
    m_rollOutBackendHasBeenSet(false),
    m_clipRatioHasBeenSet(false),
    m_pPOMiniBatchSizeHasBeenSet(false),
    m_pPOEpochsHasBeenSet(false),
    m_trainBatchSizeHasBeenSet(false),
    m_tensorModelParallelSizeHasBeenSet(false),
    m_gpuMemoryUtilizationHasBeenSet(false)
{
}

CoreInternalOutcome TrainingTuningParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FineTuneType") && !value["FineTuneType"].IsNull())
    {
        if (!value["FineTuneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.FineTuneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fineTuneType = string(value["FineTuneType"].GetString());
        m_fineTuneTypeHasBeenSet = true;
    }

    if (value.HasMember("LoraRank") && !value["LoraRank"].IsNull())
    {
        if (!value["LoraRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LoraRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loraRank = value["LoraRank"].GetInt64();
        m_loraRankHasBeenSet = true;
    }

    if (value.HasMember("LoraAlpha") && !value["LoraAlpha"].IsNull())
    {
        if (!value["LoraAlpha"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LoraAlpha` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loraAlpha = value["LoraAlpha"].GetInt64();
        m_loraAlphaHasBeenSet = true;
    }

    if (value.HasMember("LoraDropout") && !value["LoraDropout"].IsNull())
    {
        if (!value["LoraDropout"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LoraDropout` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loraDropout = value["LoraDropout"].GetDouble();
        m_loraDropoutHasBeenSet = true;
    }

    if (value.HasMember("LoraTarget") && !value["LoraTarget"].IsNull())
    {
        if (!value["LoraTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LoraTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraTarget = string(value["LoraTarget"].GetString());
        m_loraTargetHasBeenSet = true;
    }

    if (value.HasMember("TrainingMode") && !value["TrainingMode"].IsNull())
    {
        if (!value["TrainingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.TrainingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingMode = string(value["TrainingMode"].GetString());
        m_trainingModeHasBeenSet = true;
    }

    if (value.HasMember("Epochs") && !value["Epochs"].IsNull())
    {
        if (!value["Epochs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.Epochs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_epochs = value["Epochs"].GetInt64();
        m_epochsHasBeenSet = true;
    }

    if (value.HasMember("LearningRate") && !value["LearningRate"].IsNull())
    {
        if (!value["LearningRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LearningRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_learningRate = value["LearningRate"].GetDouble();
        m_learningRateHasBeenSet = true;
    }

    if (value.HasMember("PerDeviceBatchSize") && !value["PerDeviceBatchSize"].IsNull())
    {
        if (!value["PerDeviceBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.PerDeviceBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perDeviceBatchSize = value["PerDeviceBatchSize"].GetInt64();
        m_perDeviceBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("GradientAccumulationSteps") && !value["GradientAccumulationSteps"].IsNull())
    {
        if (!value["GradientAccumulationSteps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.GradientAccumulationSteps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gradientAccumulationSteps = value["GradientAccumulationSteps"].GetInt64();
        m_gradientAccumulationStepsHasBeenSet = true;
    }

    if (value.HasMember("CutoffLen") && !value["CutoffLen"].IsNull())
    {
        if (!value["CutoffLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.CutoffLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cutoffLen = value["CutoffLen"].GetInt64();
        m_cutoffLenHasBeenSet = true;
    }

    if (value.HasMember("MaxSamples") && !value["MaxSamples"].IsNull())
    {
        if (!value["MaxSamples"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.MaxSamples` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSamples = value["MaxSamples"].GetInt64();
        m_maxSamplesHasBeenSet = true;
    }

    if (value.HasMember("GradientCheckPointing") && !value["GradientCheckPointing"].IsNull())
    {
        if (!value["GradientCheckPointing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.GradientCheckPointing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gradientCheckPointing = value["GradientCheckPointing"].GetBool();
        m_gradientCheckPointingHasBeenSet = true;
    }

    if (value.HasMember("LrScheduler") && !value["LrScheduler"].IsNull())
    {
        if (!value["LrScheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.LrScheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lrScheduler = string(value["LrScheduler"].GetString());
        m_lrSchedulerHasBeenSet = true;
    }

    if (value.HasMember("WarmupRatio") && !value["WarmupRatio"].IsNull())
    {
        if (!value["WarmupRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.WarmupRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_warmupRatio = value["WarmupRatio"].GetDouble();
        m_warmupRatioHasBeenSet = true;
    }

    if (value.HasMember("DPOBeta") && !value["DPOBeta"].IsNull())
    {
        if (!value["DPOBeta"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.DPOBeta` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dPOBeta = value["DPOBeta"].GetDouble();
        m_dPOBetaHasBeenSet = true;
    }

    if (value.HasMember("DPOLoss") && !value["DPOLoss"].IsNull())
    {
        if (!value["DPOLoss"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.DPOLoss` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dPOLoss = string(value["DPOLoss"].GetString());
        m_dPOLossHasBeenSet = true;
    }

    if (value.HasMember("RewardFunctionCode") && !value["RewardFunctionCode"].IsNull())
    {
        if (!value["RewardFunctionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.RewardFunctionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewardFunctionCode = string(value["RewardFunctionCode"].GetString());
        m_rewardFunctionCodeHasBeenSet = true;
    }

    if (value.HasMember("RewardFunctionCosPath") && !value["RewardFunctionCosPath"].IsNull())
    {
        if (!value["RewardFunctionCosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.RewardFunctionCosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewardFunctionCosPath = string(value["RewardFunctionCosPath"].GetString());
        m_rewardFunctionCosPathHasBeenSet = true;
    }

    if (value.HasMember("KLCoefficient") && !value["KLCoefficient"].IsNull())
    {
        if (!value["KLCoefficient"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.KLCoefficient` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_kLCoefficient = value["KLCoefficient"].GetDouble();
        m_kLCoefficientHasBeenSet = true;
    }

    if (value.HasMember("NumSamplesPerPrompt") && !value["NumSamplesPerPrompt"].IsNull())
    {
        if (!value["NumSamplesPerPrompt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.NumSamplesPerPrompt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numSamplesPerPrompt = value["NumSamplesPerPrompt"].GetInt64();
        m_numSamplesPerPromptHasBeenSet = true;
    }

    if (value.HasMember("MaxResponseLength") && !value["MaxResponseLength"].IsNull())
    {
        if (!value["MaxResponseLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.MaxResponseLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResponseLength = value["MaxResponseLength"].GetInt64();
        m_maxResponseLengthHasBeenSet = true;
    }

    if (value.HasMember("RollOutTemperature") && !value["RollOutTemperature"].IsNull())
    {
        if (!value["RollOutTemperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.RollOutTemperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rollOutTemperature = value["RollOutTemperature"].GetDouble();
        m_rollOutTemperatureHasBeenSet = true;
    }

    if (value.HasMember("RollOutBackend") && !value["RollOutBackend"].IsNull())
    {
        if (!value["RollOutBackend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.RollOutBackend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollOutBackend = string(value["RollOutBackend"].GetString());
        m_rollOutBackendHasBeenSet = true;
    }

    if (value.HasMember("ClipRatio") && !value["ClipRatio"].IsNull())
    {
        if (!value["ClipRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.ClipRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clipRatio = value["ClipRatio"].GetDouble();
        m_clipRatioHasBeenSet = true;
    }

    if (value.HasMember("PPOMiniBatchSize") && !value["PPOMiniBatchSize"].IsNull())
    {
        if (!value["PPOMiniBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.PPOMiniBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pPOMiniBatchSize = value["PPOMiniBatchSize"].GetInt64();
        m_pPOMiniBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("PPOEpochs") && !value["PPOEpochs"].IsNull())
    {
        if (!value["PPOEpochs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.PPOEpochs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pPOEpochs = value["PPOEpochs"].GetInt64();
        m_pPOEpochsHasBeenSet = true;
    }

    if (value.HasMember("TrainBatchSize") && !value["TrainBatchSize"].IsNull())
    {
        if (!value["TrainBatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.TrainBatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trainBatchSize = value["TrainBatchSize"].GetInt64();
        m_trainBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("TensorModelParallelSize") && !value["TensorModelParallelSize"].IsNull())
    {
        if (!value["TensorModelParallelSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.TensorModelParallelSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tensorModelParallelSize = value["TensorModelParallelSize"].GetInt64();
        m_tensorModelParallelSizeHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryUtilization") && !value["GpuMemoryUtilization"].IsNull())
    {
        if (!value["GpuMemoryUtilization"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTuningParams.GpuMemoryUtilization` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryUtilization = value["GpuMemoryUtilization"].GetDouble();
        m_gpuMemoryUtilizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingTuningParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fineTuneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FineTuneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fineTuneType.c_str(), allocator).Move(), allocator);
    }

    if (m_loraRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraRank, allocator);
    }

    if (m_loraAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraAlpha, allocator);
    }

    if (m_loraDropoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraDropout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraDropout, allocator);
    }

    if (m_loraTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_epochsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Epochs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_epochs, allocator);
    }

    if (m_learningRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LearningRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_learningRate, allocator);
    }

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

    if (m_cutoffLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutoffLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cutoffLen, allocator);
    }

    if (m_maxSamplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSamples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSamples, allocator);
    }

    if (m_gradientCheckPointingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradientCheckPointing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradientCheckPointing, allocator);
    }

    if (m_lrSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LrScheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lrScheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_warmupRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmupRatio, allocator);
    }

    if (m_dPOBetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DPOBeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dPOBeta, allocator);
    }

    if (m_dPOLossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DPOLoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dPOLoss.c_str(), allocator).Move(), allocator);
    }

    if (m_rewardFunctionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewardFunctionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewardFunctionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_rewardFunctionCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewardFunctionCosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewardFunctionCosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_kLCoefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KLCoefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kLCoefficient, allocator);
    }

    if (m_numSamplesPerPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumSamplesPerPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numSamplesPerPrompt, allocator);
    }

    if (m_maxResponseLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResponseLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResponseLength, allocator);
    }

    if (m_rollOutTemperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollOutTemperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollOutTemperature, allocator);
    }

    if (m_rollOutBackendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollOutBackend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollOutBackend.c_str(), allocator).Move(), allocator);
    }

    if (m_clipRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clipRatio, allocator);
    }

    if (m_pPOMiniBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PPOMiniBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pPOMiniBatchSize, allocator);
    }

    if (m_pPOEpochsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PPOEpochs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pPOEpochs, allocator);
    }

    if (m_trainBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trainBatchSize, allocator);
    }

    if (m_tensorModelParallelSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorModelParallelSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tensorModelParallelSize, allocator);
    }

    if (m_gpuMemoryUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemoryUtilization, allocator);
    }

}


string TrainingTuningParams::GetFineTuneType() const
{
    return m_fineTuneType;
}

void TrainingTuningParams::SetFineTuneType(const string& _fineTuneType)
{
    m_fineTuneType = _fineTuneType;
    m_fineTuneTypeHasBeenSet = true;
}

bool TrainingTuningParams::FineTuneTypeHasBeenSet() const
{
    return m_fineTuneTypeHasBeenSet;
}

int64_t TrainingTuningParams::GetLoraRank() const
{
    return m_loraRank;
}

void TrainingTuningParams::SetLoraRank(const int64_t& _loraRank)
{
    m_loraRank = _loraRank;
    m_loraRankHasBeenSet = true;
}

bool TrainingTuningParams::LoraRankHasBeenSet() const
{
    return m_loraRankHasBeenSet;
}

int64_t TrainingTuningParams::GetLoraAlpha() const
{
    return m_loraAlpha;
}

void TrainingTuningParams::SetLoraAlpha(const int64_t& _loraAlpha)
{
    m_loraAlpha = _loraAlpha;
    m_loraAlphaHasBeenSet = true;
}

bool TrainingTuningParams::LoraAlphaHasBeenSet() const
{
    return m_loraAlphaHasBeenSet;
}

double TrainingTuningParams::GetLoraDropout() const
{
    return m_loraDropout;
}

void TrainingTuningParams::SetLoraDropout(const double& _loraDropout)
{
    m_loraDropout = _loraDropout;
    m_loraDropoutHasBeenSet = true;
}

bool TrainingTuningParams::LoraDropoutHasBeenSet() const
{
    return m_loraDropoutHasBeenSet;
}

string TrainingTuningParams::GetLoraTarget() const
{
    return m_loraTarget;
}

void TrainingTuningParams::SetLoraTarget(const string& _loraTarget)
{
    m_loraTarget = _loraTarget;
    m_loraTargetHasBeenSet = true;
}

bool TrainingTuningParams::LoraTargetHasBeenSet() const
{
    return m_loraTargetHasBeenSet;
}

string TrainingTuningParams::GetTrainingMode() const
{
    return m_trainingMode;
}

void TrainingTuningParams::SetTrainingMode(const string& _trainingMode)
{
    m_trainingMode = _trainingMode;
    m_trainingModeHasBeenSet = true;
}

bool TrainingTuningParams::TrainingModeHasBeenSet() const
{
    return m_trainingModeHasBeenSet;
}

int64_t TrainingTuningParams::GetEpochs() const
{
    return m_epochs;
}

void TrainingTuningParams::SetEpochs(const int64_t& _epochs)
{
    m_epochs = _epochs;
    m_epochsHasBeenSet = true;
}

bool TrainingTuningParams::EpochsHasBeenSet() const
{
    return m_epochsHasBeenSet;
}

double TrainingTuningParams::GetLearningRate() const
{
    return m_learningRate;
}

void TrainingTuningParams::SetLearningRate(const double& _learningRate)
{
    m_learningRate = _learningRate;
    m_learningRateHasBeenSet = true;
}

bool TrainingTuningParams::LearningRateHasBeenSet() const
{
    return m_learningRateHasBeenSet;
}

int64_t TrainingTuningParams::GetPerDeviceBatchSize() const
{
    return m_perDeviceBatchSize;
}

void TrainingTuningParams::SetPerDeviceBatchSize(const int64_t& _perDeviceBatchSize)
{
    m_perDeviceBatchSize = _perDeviceBatchSize;
    m_perDeviceBatchSizeHasBeenSet = true;
}

bool TrainingTuningParams::PerDeviceBatchSizeHasBeenSet() const
{
    return m_perDeviceBatchSizeHasBeenSet;
}

int64_t TrainingTuningParams::GetGradientAccumulationSteps() const
{
    return m_gradientAccumulationSteps;
}

void TrainingTuningParams::SetGradientAccumulationSteps(const int64_t& _gradientAccumulationSteps)
{
    m_gradientAccumulationSteps = _gradientAccumulationSteps;
    m_gradientAccumulationStepsHasBeenSet = true;
}

bool TrainingTuningParams::GradientAccumulationStepsHasBeenSet() const
{
    return m_gradientAccumulationStepsHasBeenSet;
}

int64_t TrainingTuningParams::GetCutoffLen() const
{
    return m_cutoffLen;
}

void TrainingTuningParams::SetCutoffLen(const int64_t& _cutoffLen)
{
    m_cutoffLen = _cutoffLen;
    m_cutoffLenHasBeenSet = true;
}

bool TrainingTuningParams::CutoffLenHasBeenSet() const
{
    return m_cutoffLenHasBeenSet;
}

int64_t TrainingTuningParams::GetMaxSamples() const
{
    return m_maxSamples;
}

void TrainingTuningParams::SetMaxSamples(const int64_t& _maxSamples)
{
    m_maxSamples = _maxSamples;
    m_maxSamplesHasBeenSet = true;
}

bool TrainingTuningParams::MaxSamplesHasBeenSet() const
{
    return m_maxSamplesHasBeenSet;
}

bool TrainingTuningParams::GetGradientCheckPointing() const
{
    return m_gradientCheckPointing;
}

void TrainingTuningParams::SetGradientCheckPointing(const bool& _gradientCheckPointing)
{
    m_gradientCheckPointing = _gradientCheckPointing;
    m_gradientCheckPointingHasBeenSet = true;
}

bool TrainingTuningParams::GradientCheckPointingHasBeenSet() const
{
    return m_gradientCheckPointingHasBeenSet;
}

string TrainingTuningParams::GetLrScheduler() const
{
    return m_lrScheduler;
}

void TrainingTuningParams::SetLrScheduler(const string& _lrScheduler)
{
    m_lrScheduler = _lrScheduler;
    m_lrSchedulerHasBeenSet = true;
}

bool TrainingTuningParams::LrSchedulerHasBeenSet() const
{
    return m_lrSchedulerHasBeenSet;
}

double TrainingTuningParams::GetWarmupRatio() const
{
    return m_warmupRatio;
}

void TrainingTuningParams::SetWarmupRatio(const double& _warmupRatio)
{
    m_warmupRatio = _warmupRatio;
    m_warmupRatioHasBeenSet = true;
}

bool TrainingTuningParams::WarmupRatioHasBeenSet() const
{
    return m_warmupRatioHasBeenSet;
}

double TrainingTuningParams::GetDPOBeta() const
{
    return m_dPOBeta;
}

void TrainingTuningParams::SetDPOBeta(const double& _dPOBeta)
{
    m_dPOBeta = _dPOBeta;
    m_dPOBetaHasBeenSet = true;
}

bool TrainingTuningParams::DPOBetaHasBeenSet() const
{
    return m_dPOBetaHasBeenSet;
}

string TrainingTuningParams::GetDPOLoss() const
{
    return m_dPOLoss;
}

void TrainingTuningParams::SetDPOLoss(const string& _dPOLoss)
{
    m_dPOLoss = _dPOLoss;
    m_dPOLossHasBeenSet = true;
}

bool TrainingTuningParams::DPOLossHasBeenSet() const
{
    return m_dPOLossHasBeenSet;
}

string TrainingTuningParams::GetRewardFunctionCode() const
{
    return m_rewardFunctionCode;
}

void TrainingTuningParams::SetRewardFunctionCode(const string& _rewardFunctionCode)
{
    m_rewardFunctionCode = _rewardFunctionCode;
    m_rewardFunctionCodeHasBeenSet = true;
}

bool TrainingTuningParams::RewardFunctionCodeHasBeenSet() const
{
    return m_rewardFunctionCodeHasBeenSet;
}

string TrainingTuningParams::GetRewardFunctionCosPath() const
{
    return m_rewardFunctionCosPath;
}

void TrainingTuningParams::SetRewardFunctionCosPath(const string& _rewardFunctionCosPath)
{
    m_rewardFunctionCosPath = _rewardFunctionCosPath;
    m_rewardFunctionCosPathHasBeenSet = true;
}

bool TrainingTuningParams::RewardFunctionCosPathHasBeenSet() const
{
    return m_rewardFunctionCosPathHasBeenSet;
}

double TrainingTuningParams::GetKLCoefficient() const
{
    return m_kLCoefficient;
}

void TrainingTuningParams::SetKLCoefficient(const double& _kLCoefficient)
{
    m_kLCoefficient = _kLCoefficient;
    m_kLCoefficientHasBeenSet = true;
}

bool TrainingTuningParams::KLCoefficientHasBeenSet() const
{
    return m_kLCoefficientHasBeenSet;
}

int64_t TrainingTuningParams::GetNumSamplesPerPrompt() const
{
    return m_numSamplesPerPrompt;
}

void TrainingTuningParams::SetNumSamplesPerPrompt(const int64_t& _numSamplesPerPrompt)
{
    m_numSamplesPerPrompt = _numSamplesPerPrompt;
    m_numSamplesPerPromptHasBeenSet = true;
}

bool TrainingTuningParams::NumSamplesPerPromptHasBeenSet() const
{
    return m_numSamplesPerPromptHasBeenSet;
}

int64_t TrainingTuningParams::GetMaxResponseLength() const
{
    return m_maxResponseLength;
}

void TrainingTuningParams::SetMaxResponseLength(const int64_t& _maxResponseLength)
{
    m_maxResponseLength = _maxResponseLength;
    m_maxResponseLengthHasBeenSet = true;
}

bool TrainingTuningParams::MaxResponseLengthHasBeenSet() const
{
    return m_maxResponseLengthHasBeenSet;
}

double TrainingTuningParams::GetRollOutTemperature() const
{
    return m_rollOutTemperature;
}

void TrainingTuningParams::SetRollOutTemperature(const double& _rollOutTemperature)
{
    m_rollOutTemperature = _rollOutTemperature;
    m_rollOutTemperatureHasBeenSet = true;
}

bool TrainingTuningParams::RollOutTemperatureHasBeenSet() const
{
    return m_rollOutTemperatureHasBeenSet;
}

string TrainingTuningParams::GetRollOutBackend() const
{
    return m_rollOutBackend;
}

void TrainingTuningParams::SetRollOutBackend(const string& _rollOutBackend)
{
    m_rollOutBackend = _rollOutBackend;
    m_rollOutBackendHasBeenSet = true;
}

bool TrainingTuningParams::RollOutBackendHasBeenSet() const
{
    return m_rollOutBackendHasBeenSet;
}

double TrainingTuningParams::GetClipRatio() const
{
    return m_clipRatio;
}

void TrainingTuningParams::SetClipRatio(const double& _clipRatio)
{
    m_clipRatio = _clipRatio;
    m_clipRatioHasBeenSet = true;
}

bool TrainingTuningParams::ClipRatioHasBeenSet() const
{
    return m_clipRatioHasBeenSet;
}

int64_t TrainingTuningParams::GetPPOMiniBatchSize() const
{
    return m_pPOMiniBatchSize;
}

void TrainingTuningParams::SetPPOMiniBatchSize(const int64_t& _pPOMiniBatchSize)
{
    m_pPOMiniBatchSize = _pPOMiniBatchSize;
    m_pPOMiniBatchSizeHasBeenSet = true;
}

bool TrainingTuningParams::PPOMiniBatchSizeHasBeenSet() const
{
    return m_pPOMiniBatchSizeHasBeenSet;
}

int64_t TrainingTuningParams::GetPPOEpochs() const
{
    return m_pPOEpochs;
}

void TrainingTuningParams::SetPPOEpochs(const int64_t& _pPOEpochs)
{
    m_pPOEpochs = _pPOEpochs;
    m_pPOEpochsHasBeenSet = true;
}

bool TrainingTuningParams::PPOEpochsHasBeenSet() const
{
    return m_pPOEpochsHasBeenSet;
}

int64_t TrainingTuningParams::GetTrainBatchSize() const
{
    return m_trainBatchSize;
}

void TrainingTuningParams::SetTrainBatchSize(const int64_t& _trainBatchSize)
{
    m_trainBatchSize = _trainBatchSize;
    m_trainBatchSizeHasBeenSet = true;
}

bool TrainingTuningParams::TrainBatchSizeHasBeenSet() const
{
    return m_trainBatchSizeHasBeenSet;
}

int64_t TrainingTuningParams::GetTensorModelParallelSize() const
{
    return m_tensorModelParallelSize;
}

void TrainingTuningParams::SetTensorModelParallelSize(const int64_t& _tensorModelParallelSize)
{
    m_tensorModelParallelSize = _tensorModelParallelSize;
    m_tensorModelParallelSizeHasBeenSet = true;
}

bool TrainingTuningParams::TensorModelParallelSizeHasBeenSet() const
{
    return m_tensorModelParallelSizeHasBeenSet;
}

double TrainingTuningParams::GetGpuMemoryUtilization() const
{
    return m_gpuMemoryUtilization;
}

void TrainingTuningParams::SetGpuMemoryUtilization(const double& _gpuMemoryUtilization)
{
    m_gpuMemoryUtilization = _gpuMemoryUtilization;
    m_gpuMemoryUtilizationHasBeenSet = true;
}

bool TrainingTuningParams::GpuMemoryUtilizationHasBeenSet() const
{
    return m_gpuMemoryUtilizationHasBeenSet;
}

