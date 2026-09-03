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

#include <tencentcloud/dlc/v20210125/model/CheckpointMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckpointMetrics::CheckpointMetrics() :
    m_epochHasBeenSet(false),
    m_stepHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_evalLossHasBeenSet(false),
    m_learningRateHasBeenSet(false),
    m_rawMetricsHasBeenSet(false)
{
}

CoreInternalOutcome CheckpointMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Epoch") && !value["Epoch"].IsNull())
    {
        if (!value["Epoch"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.Epoch` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_epoch = value["Epoch"].GetDouble();
        m_epochHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("EvalLoss") && !value["EvalLoss"].IsNull())
    {
        if (!value["EvalLoss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.EvalLoss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_evalLoss = value["EvalLoss"].GetDouble();
        m_evalLossHasBeenSet = true;
    }

    if (value.HasMember("LearningRate") && !value["LearningRate"].IsNull())
    {
        if (!value["LearningRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.LearningRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_learningRate = value["LearningRate"].GetDouble();
        m_learningRateHasBeenSet = true;
    }

    if (value.HasMember("RawMetrics") && !value["RawMetrics"].IsNull())
    {
        if (!value["RawMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckpointMetrics.RawMetrics` is not array type"));

        const rapidjson::Value &tmpValue = value["RawMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rawMetrics.push_back(item);
        }
        m_rawMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckpointMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_epochHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Epoch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_epoch, allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_evalLossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalLoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evalLoss, allocator);
    }

    if (m_learningRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LearningRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_learningRate, allocator);
    }

    if (m_rawMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rawMetrics.begin(); itr != m_rawMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double CheckpointMetrics::GetEpoch() const
{
    return m_epoch;
}

void CheckpointMetrics::SetEpoch(const double& _epoch)
{
    m_epoch = _epoch;
    m_epochHasBeenSet = true;
}

bool CheckpointMetrics::EpochHasBeenSet() const
{
    return m_epochHasBeenSet;
}

int64_t CheckpointMetrics::GetStep() const
{
    return m_step;
}

void CheckpointMetrics::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool CheckpointMetrics::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

double CheckpointMetrics::GetLoss() const
{
    return m_loss;
}

void CheckpointMetrics::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool CheckpointMetrics::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

double CheckpointMetrics::GetEvalLoss() const
{
    return m_evalLoss;
}

void CheckpointMetrics::SetEvalLoss(const double& _evalLoss)
{
    m_evalLoss = _evalLoss;
    m_evalLossHasBeenSet = true;
}

bool CheckpointMetrics::EvalLossHasBeenSet() const
{
    return m_evalLossHasBeenSet;
}

double CheckpointMetrics::GetLearningRate() const
{
    return m_learningRate;
}

void CheckpointMetrics::SetLearningRate(const double& _learningRate)
{
    m_learningRate = _learningRate;
    m_learningRateHasBeenSet = true;
}

bool CheckpointMetrics::LearningRateHasBeenSet() const
{
    return m_learningRateHasBeenSet;
}

vector<MetricItem> CheckpointMetrics::GetRawMetrics() const
{
    return m_rawMetrics;
}

void CheckpointMetrics::SetRawMetrics(const vector<MetricItem>& _rawMetrics)
{
    m_rawMetrics = _rawMetrics;
    m_rawMetricsHasBeenSet = true;
}

bool CheckpointMetrics::RawMetricsHasBeenSet() const
{
    return m_rawMetricsHasBeenSet;
}

