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

#include <tencentcloud/es/v20180416/model/LogstashPipeline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogstashPipeline::LogstashPipeline() :
    m_pipelineIdHasBeenSet(false),
    m_pipelineDescHasBeenSet(false),
    m_configHasBeenSet(false),
    m_workersHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_batchDelayHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_queueMaxBytesHasBeenSet(false),
    m_queueCheckPointWritesHasBeenSet(false)
{
}

CoreInternalOutcome LogstashPipeline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PipelineId") && !value["PipelineId"].IsNull())
    {
        if (!value["PipelineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.PipelineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineId = string(value["PipelineId"].GetString());
        m_pipelineIdHasBeenSet = true;
    }

    if (value.HasMember("PipelineDesc") && !value["PipelineDesc"].IsNull())
    {
        if (!value["PipelineDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.PipelineDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineDesc = string(value["PipelineDesc"].GetString());
        m_pipelineDescHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Workers") && !value["Workers"].IsNull())
    {
        if (!value["Workers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.Workers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_workers = value["Workers"].GetUint64();
        m_workersHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.BatchSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetUint64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("BatchDelay") && !value["BatchDelay"].IsNull())
    {
        if (!value["BatchDelay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.BatchDelay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchDelay = value["BatchDelay"].GetUint64();
        m_batchDelayHasBeenSet = true;
    }

    if (value.HasMember("QueueType") && !value["QueueType"].IsNull())
    {
        if (!value["QueueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.QueueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = string(value["QueueType"].GetString());
        m_queueTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueMaxBytes") && !value["QueueMaxBytes"].IsNull())
    {
        if (!value["QueueMaxBytes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.QueueMaxBytes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueMaxBytes = string(value["QueueMaxBytes"].GetString());
        m_queueMaxBytesHasBeenSet = true;
    }

    if (value.HasMember("QueueCheckPointWrites") && !value["QueueCheckPointWrites"].IsNull())
    {
        if (!value["QueueCheckPointWrites"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashPipeline.QueueCheckPointWrites` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueCheckPointWrites = value["QueueCheckPointWrites"].GetUint64();
        m_queueCheckPointWritesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogstashPipeline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pipelineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pipelineId.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pipelineDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_workersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workers, allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_batchDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchDelay, allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueMaxBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueMaxBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueMaxBytes.c_str(), allocator).Move(), allocator);
    }

    if (m_queueCheckPointWritesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCheckPointWrites";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueCheckPointWrites, allocator);
    }

}


string LogstashPipeline::GetPipelineId() const
{
    return m_pipelineId;
}

void LogstashPipeline::SetPipelineId(const string& _pipelineId)
{
    m_pipelineId = _pipelineId;
    m_pipelineIdHasBeenSet = true;
}

bool LogstashPipeline::PipelineIdHasBeenSet() const
{
    return m_pipelineIdHasBeenSet;
}

string LogstashPipeline::GetPipelineDesc() const
{
    return m_pipelineDesc;
}

void LogstashPipeline::SetPipelineDesc(const string& _pipelineDesc)
{
    m_pipelineDesc = _pipelineDesc;
    m_pipelineDescHasBeenSet = true;
}

bool LogstashPipeline::PipelineDescHasBeenSet() const
{
    return m_pipelineDescHasBeenSet;
}

string LogstashPipeline::GetConfig() const
{
    return m_config;
}

void LogstashPipeline::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool LogstashPipeline::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

uint64_t LogstashPipeline::GetWorkers() const
{
    return m_workers;
}

void LogstashPipeline::SetWorkers(const uint64_t& _workers)
{
    m_workers = _workers;
    m_workersHasBeenSet = true;
}

bool LogstashPipeline::WorkersHasBeenSet() const
{
    return m_workersHasBeenSet;
}

uint64_t LogstashPipeline::GetBatchSize() const
{
    return m_batchSize;
}

void LogstashPipeline::SetBatchSize(const uint64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool LogstashPipeline::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

uint64_t LogstashPipeline::GetBatchDelay() const
{
    return m_batchDelay;
}

void LogstashPipeline::SetBatchDelay(const uint64_t& _batchDelay)
{
    m_batchDelay = _batchDelay;
    m_batchDelayHasBeenSet = true;
}

bool LogstashPipeline::BatchDelayHasBeenSet() const
{
    return m_batchDelayHasBeenSet;
}

string LogstashPipeline::GetQueueType() const
{
    return m_queueType;
}

void LogstashPipeline::SetQueueType(const string& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool LogstashPipeline::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string LogstashPipeline::GetQueueMaxBytes() const
{
    return m_queueMaxBytes;
}

void LogstashPipeline::SetQueueMaxBytes(const string& _queueMaxBytes)
{
    m_queueMaxBytes = _queueMaxBytes;
    m_queueMaxBytesHasBeenSet = true;
}

bool LogstashPipeline::QueueMaxBytesHasBeenSet() const
{
    return m_queueMaxBytesHasBeenSet;
}

uint64_t LogstashPipeline::GetQueueCheckPointWrites() const
{
    return m_queueCheckPointWrites;
}

void LogstashPipeline::SetQueueCheckPointWrites(const uint64_t& _queueCheckPointWrites)
{
    m_queueCheckPointWrites = _queueCheckPointWrites;
    m_queueCheckPointWritesHasBeenSet = true;
}

bool LogstashPipeline::QueueCheckPointWritesHasBeenSet() const
{
    return m_queueCheckPointWritesHasBeenSet;
}

