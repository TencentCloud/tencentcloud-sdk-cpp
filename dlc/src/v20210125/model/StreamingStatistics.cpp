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

#include <tencentcloud/dlc/v20210125/model/StreamingStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StreamingStatistics::StreamingStatistics() :
    m_startTimeHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_numActiveReceiversHasBeenSet(false),
    m_numInactiveReceiversHasBeenSet(false),
    m_numActiveBatchesHasBeenSet(false),
    m_numRetainedCompletedBatchesHasBeenSet(false),
    m_numTotalCompletedBatchesHasBeenSet(false),
    m_averageInputRateHasBeenSet(false),
    m_averageSchedulingDelayHasBeenSet(false),
    m_averageProcessingTimeHasBeenSet(false),
    m_averageTotalDelayHasBeenSet(false)
{
}

CoreInternalOutcome StreamingStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.Receivers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_receivers = value["Receivers"].GetInt64();
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("NumActiveReceivers") && !value["NumActiveReceivers"].IsNull())
    {
        if (!value["NumActiveReceivers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.NumActiveReceivers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numActiveReceivers = value["NumActiveReceivers"].GetInt64();
        m_numActiveReceiversHasBeenSet = true;
    }

    if (value.HasMember("NumInactiveReceivers") && !value["NumInactiveReceivers"].IsNull())
    {
        if (!value["NumInactiveReceivers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.NumInactiveReceivers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numInactiveReceivers = value["NumInactiveReceivers"].GetInt64();
        m_numInactiveReceiversHasBeenSet = true;
    }

    if (value.HasMember("NumActiveBatches") && !value["NumActiveBatches"].IsNull())
    {
        if (!value["NumActiveBatches"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.NumActiveBatches` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numActiveBatches = value["NumActiveBatches"].GetInt64();
        m_numActiveBatchesHasBeenSet = true;
    }

    if (value.HasMember("NumRetainedCompletedBatches") && !value["NumRetainedCompletedBatches"].IsNull())
    {
        if (!value["NumRetainedCompletedBatches"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.NumRetainedCompletedBatches` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numRetainedCompletedBatches = value["NumRetainedCompletedBatches"].GetInt64();
        m_numRetainedCompletedBatchesHasBeenSet = true;
    }

    if (value.HasMember("NumTotalCompletedBatches") && !value["NumTotalCompletedBatches"].IsNull())
    {
        if (!value["NumTotalCompletedBatches"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.NumTotalCompletedBatches` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numTotalCompletedBatches = value["NumTotalCompletedBatches"].GetInt64();
        m_numTotalCompletedBatchesHasBeenSet = true;
    }

    if (value.HasMember("AverageInputRate") && !value["AverageInputRate"].IsNull())
    {
        if (!value["AverageInputRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.AverageInputRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageInputRate = value["AverageInputRate"].GetDouble();
        m_averageInputRateHasBeenSet = true;
    }

    if (value.HasMember("AverageSchedulingDelay") && !value["AverageSchedulingDelay"].IsNull())
    {
        if (!value["AverageSchedulingDelay"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.AverageSchedulingDelay` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageSchedulingDelay = value["AverageSchedulingDelay"].GetDouble();
        m_averageSchedulingDelayHasBeenSet = true;
    }

    if (value.HasMember("AverageProcessingTime") && !value["AverageProcessingTime"].IsNull())
    {
        if (!value["AverageProcessingTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.AverageProcessingTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageProcessingTime = value["AverageProcessingTime"].GetDouble();
        m_averageProcessingTimeHasBeenSet = true;
    }

    if (value.HasMember("AverageTotalDelay") && !value["AverageTotalDelay"].IsNull())
    {
        if (!value["AverageTotalDelay"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingStatistics.AverageTotalDelay` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageTotalDelay = value["AverageTotalDelay"].GetDouble();
        m_averageTotalDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamingStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receivers, allocator);
    }

    if (m_numActiveReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumActiveReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numActiveReceivers, allocator);
    }

    if (m_numInactiveReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumInactiveReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numInactiveReceivers, allocator);
    }

    if (m_numActiveBatchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumActiveBatches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numActiveBatches, allocator);
    }

    if (m_numRetainedCompletedBatchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRetainedCompletedBatches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRetainedCompletedBatches, allocator);
    }

    if (m_numTotalCompletedBatchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumTotalCompletedBatches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numTotalCompletedBatches, allocator);
    }

    if (m_averageInputRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageInputRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageInputRate, allocator);
    }

    if (m_averageSchedulingDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSchedulingDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSchedulingDelay, allocator);
    }

    if (m_averageProcessingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageProcessingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageProcessingTime, allocator);
    }

    if (m_averageTotalDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageTotalDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageTotalDelay, allocator);
    }

}


string StreamingStatistics::GetStartTime() const
{
    return m_startTime;
}

void StreamingStatistics::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool StreamingStatistics::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t StreamingStatistics::GetReceivers() const
{
    return m_receivers;
}

void StreamingStatistics::SetReceivers(const int64_t& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool StreamingStatistics::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

int64_t StreamingStatistics::GetNumActiveReceivers() const
{
    return m_numActiveReceivers;
}

void StreamingStatistics::SetNumActiveReceivers(const int64_t& _numActiveReceivers)
{
    m_numActiveReceivers = _numActiveReceivers;
    m_numActiveReceiversHasBeenSet = true;
}

bool StreamingStatistics::NumActiveReceiversHasBeenSet() const
{
    return m_numActiveReceiversHasBeenSet;
}

int64_t StreamingStatistics::GetNumInactiveReceivers() const
{
    return m_numInactiveReceivers;
}

void StreamingStatistics::SetNumInactiveReceivers(const int64_t& _numInactiveReceivers)
{
    m_numInactiveReceivers = _numInactiveReceivers;
    m_numInactiveReceiversHasBeenSet = true;
}

bool StreamingStatistics::NumInactiveReceiversHasBeenSet() const
{
    return m_numInactiveReceiversHasBeenSet;
}

int64_t StreamingStatistics::GetNumActiveBatches() const
{
    return m_numActiveBatches;
}

void StreamingStatistics::SetNumActiveBatches(const int64_t& _numActiveBatches)
{
    m_numActiveBatches = _numActiveBatches;
    m_numActiveBatchesHasBeenSet = true;
}

bool StreamingStatistics::NumActiveBatchesHasBeenSet() const
{
    return m_numActiveBatchesHasBeenSet;
}

int64_t StreamingStatistics::GetNumRetainedCompletedBatches() const
{
    return m_numRetainedCompletedBatches;
}

void StreamingStatistics::SetNumRetainedCompletedBatches(const int64_t& _numRetainedCompletedBatches)
{
    m_numRetainedCompletedBatches = _numRetainedCompletedBatches;
    m_numRetainedCompletedBatchesHasBeenSet = true;
}

bool StreamingStatistics::NumRetainedCompletedBatchesHasBeenSet() const
{
    return m_numRetainedCompletedBatchesHasBeenSet;
}

int64_t StreamingStatistics::GetNumTotalCompletedBatches() const
{
    return m_numTotalCompletedBatches;
}

void StreamingStatistics::SetNumTotalCompletedBatches(const int64_t& _numTotalCompletedBatches)
{
    m_numTotalCompletedBatches = _numTotalCompletedBatches;
    m_numTotalCompletedBatchesHasBeenSet = true;
}

bool StreamingStatistics::NumTotalCompletedBatchesHasBeenSet() const
{
    return m_numTotalCompletedBatchesHasBeenSet;
}

double StreamingStatistics::GetAverageInputRate() const
{
    return m_averageInputRate;
}

void StreamingStatistics::SetAverageInputRate(const double& _averageInputRate)
{
    m_averageInputRate = _averageInputRate;
    m_averageInputRateHasBeenSet = true;
}

bool StreamingStatistics::AverageInputRateHasBeenSet() const
{
    return m_averageInputRateHasBeenSet;
}

double StreamingStatistics::GetAverageSchedulingDelay() const
{
    return m_averageSchedulingDelay;
}

void StreamingStatistics::SetAverageSchedulingDelay(const double& _averageSchedulingDelay)
{
    m_averageSchedulingDelay = _averageSchedulingDelay;
    m_averageSchedulingDelayHasBeenSet = true;
}

bool StreamingStatistics::AverageSchedulingDelayHasBeenSet() const
{
    return m_averageSchedulingDelayHasBeenSet;
}

double StreamingStatistics::GetAverageProcessingTime() const
{
    return m_averageProcessingTime;
}

void StreamingStatistics::SetAverageProcessingTime(const double& _averageProcessingTime)
{
    m_averageProcessingTime = _averageProcessingTime;
    m_averageProcessingTimeHasBeenSet = true;
}

bool StreamingStatistics::AverageProcessingTimeHasBeenSet() const
{
    return m_averageProcessingTimeHasBeenSet;
}

double StreamingStatistics::GetAverageTotalDelay() const
{
    return m_averageTotalDelay;
}

void StreamingStatistics::SetAverageTotalDelay(const double& _averageTotalDelay)
{
    m_averageTotalDelay = _averageTotalDelay;
    m_averageTotalDelayHasBeenSet = true;
}

bool StreamingStatistics::AverageTotalDelayHasBeenSet() const
{
    return m_averageTotalDelayHasBeenSet;
}

