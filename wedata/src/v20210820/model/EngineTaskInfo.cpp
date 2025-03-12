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

#include <tencentcloud/wedata/v20210820/model/EngineTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EngineTaskInfo::EngineTaskInfo() :
    m_engineSubmitTimeHasBeenSet(false),
    m_engineExeTimeHasBeenSet(false),
    m_engineExeTimesHasBeenSet(false),
    m_cuConsumeHasBeenSet(false),
    m_resourceUsageHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineExeStatusHasBeenSet(false),
    m_taskKindHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskContentHasBeenSet(false),
    m_inputBytesSumHasBeenSet(false),
    m_shuffleReadBytesSumHasBeenSet(false),
    m_shuffleReadRecordsSumHasBeenSet(false),
    m_outputRecordsSumHasBeenSet(false),
    m_outputBytesSumHasBeenSet(false),
    m_outputFilesNumHasBeenSet(false),
    m_outputSmallFilesNumHasBeenSet(false),
    m_waitTimeHasBeenSet(false),
    m_queryResultTimeHasBeenSet(false),
    m_cmdArgsHasBeenSet(false)
{
}

CoreInternalOutcome EngineTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineSubmitTime") && !value["EngineSubmitTime"].IsNull())
    {
        if (!value["EngineSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.EngineSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSubmitTime = string(value["EngineSubmitTime"].GetString());
        m_engineSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("EngineExeTime") && !value["EngineExeTime"].IsNull())
    {
        if (!value["EngineExeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.EngineExeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeTime = string(value["EngineExeTime"].GetString());
        m_engineExeTimeHasBeenSet = true;
    }

    if (value.HasMember("EngineExeTimes") && !value["EngineExeTimes"].IsNull())
    {
        if (!value["EngineExeTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.EngineExeTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeTimes = value["EngineExeTimes"].GetUint64();
        m_engineExeTimesHasBeenSet = true;
    }

    if (value.HasMember("CuConsume") && !value["CuConsume"].IsNull())
    {
        if (!value["CuConsume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.CuConsume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cuConsume = value["CuConsume"].GetUint64();
        m_cuConsumeHasBeenSet = true;
    }

    if (value.HasMember("ResourceUsage") && !value["ResourceUsage"].IsNull())
    {
        if (!value["ResourceUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.ResourceUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUsage = value["ResourceUsage"].GetInt64();
        m_resourceUsageHasBeenSet = true;
    }

    if (value.HasMember("EngineName") && !value["EngineName"].IsNull())
    {
        if (!value["EngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.EngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineName = string(value["EngineName"].GetString());
        m_engineNameHasBeenSet = true;
    }

    if (value.HasMember("EngineExeStatus") && !value["EngineExeStatus"].IsNull())
    {
        if (!value["EngineExeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.EngineExeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeStatus = string(value["EngineExeStatus"].GetString());
        m_engineExeStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskKind") && !value["TaskKind"].IsNull())
    {
        if (!value["TaskKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.TaskKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKind = string(value["TaskKind"].GetString());
        m_taskKindHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskContent") && !value["TaskContent"].IsNull())
    {
        if (!value["TaskContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.TaskContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskContent = string(value["TaskContent"].GetString());
        m_taskContentHasBeenSet = true;
    }

    if (value.HasMember("InputBytesSum") && !value["InputBytesSum"].IsNull())
    {
        if (!value["InputBytesSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.InputBytesSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputBytesSum = value["InputBytesSum"].GetUint64();
        m_inputBytesSumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadBytesSum") && !value["ShuffleReadBytesSum"].IsNull())
    {
        if (!value["ShuffleReadBytesSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.ShuffleReadBytesSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadBytesSum = value["ShuffleReadBytesSum"].GetUint64();
        m_shuffleReadBytesSumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadRecordsSum") && !value["ShuffleReadRecordsSum"].IsNull())
    {
        if (!value["ShuffleReadRecordsSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.ShuffleReadRecordsSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadRecordsSum = value["ShuffleReadRecordsSum"].GetUint64();
        m_shuffleReadRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("OutputRecordsSum") && !value["OutputRecordsSum"].IsNull())
    {
        if (!value["OutputRecordsSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.OutputRecordsSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputRecordsSum = value["OutputRecordsSum"].GetUint64();
        m_outputRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("OutputBytesSum") && !value["OutputBytesSum"].IsNull())
    {
        if (!value["OutputBytesSum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.OutputBytesSum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputBytesSum = value["OutputBytesSum"].GetUint64();
        m_outputBytesSumHasBeenSet = true;
    }

    if (value.HasMember("OutputFilesNum") && !value["OutputFilesNum"].IsNull())
    {
        if (!value["OutputFilesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.OutputFilesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputFilesNum = value["OutputFilesNum"].GetUint64();
        m_outputFilesNumHasBeenSet = true;
    }

    if (value.HasMember("OutputSmallFilesNum") && !value["OutputSmallFilesNum"].IsNull())
    {
        if (!value["OutputSmallFilesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.OutputSmallFilesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputSmallFilesNum = value["OutputSmallFilesNum"].GetUint64();
        m_outputSmallFilesNumHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.WaitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = value["WaitTime"].GetUint64();
        m_waitTimeHasBeenSet = true;
    }

    if (value.HasMember("QueryResultTime") && !value["QueryResultTime"].IsNull())
    {
        if (!value["QueryResultTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.QueryResultTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queryResultTime = value["QueryResultTime"].GetUint64();
        m_queryResultTimeHasBeenSet = true;
    }

    if (value.HasMember("CmdArgs") && !value["CmdArgs"].IsNull())
    {
        if (!value["CmdArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineTaskInfo.CmdArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdArgs = string(value["CmdArgs"].GetString());
        m_cmdArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineExeTimes, allocator);
    }

    if (m_cuConsumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuConsume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuConsume, allocator);
    }

    if (m_resourceUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceUsage, allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKind.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskContent.c_str(), allocator).Move(), allocator);
    }

    if (m_inputBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputBytesSum, allocator);
    }

    if (m_shuffleReadBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleReadBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleReadBytesSum, allocator);
    }

    if (m_shuffleReadRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleReadRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleReadRecordsSum, allocator);
    }

    if (m_outputRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputRecordsSum, allocator);
    }

    if (m_outputBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputBytesSum, allocator);
    }

    if (m_outputFilesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFilesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputFilesNum, allocator);
    }

    if (m_outputSmallFilesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSmallFilesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputSmallFilesNum, allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitTime, allocator);
    }

    if (m_queryResultTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryResultTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryResultTime, allocator);
    }

    if (m_cmdArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdArgs.c_str(), allocator).Move(), allocator);
    }

}


string EngineTaskInfo::GetEngineSubmitTime() const
{
    return m_engineSubmitTime;
}

void EngineTaskInfo::SetEngineSubmitTime(const string& _engineSubmitTime)
{
    m_engineSubmitTime = _engineSubmitTime;
    m_engineSubmitTimeHasBeenSet = true;
}

bool EngineTaskInfo::EngineSubmitTimeHasBeenSet() const
{
    return m_engineSubmitTimeHasBeenSet;
}

string EngineTaskInfo::GetEngineExeTime() const
{
    return m_engineExeTime;
}

void EngineTaskInfo::SetEngineExeTime(const string& _engineExeTime)
{
    m_engineExeTime = _engineExeTime;
    m_engineExeTimeHasBeenSet = true;
}

bool EngineTaskInfo::EngineExeTimeHasBeenSet() const
{
    return m_engineExeTimeHasBeenSet;
}

uint64_t EngineTaskInfo::GetEngineExeTimes() const
{
    return m_engineExeTimes;
}

void EngineTaskInfo::SetEngineExeTimes(const uint64_t& _engineExeTimes)
{
    m_engineExeTimes = _engineExeTimes;
    m_engineExeTimesHasBeenSet = true;
}

bool EngineTaskInfo::EngineExeTimesHasBeenSet() const
{
    return m_engineExeTimesHasBeenSet;
}

uint64_t EngineTaskInfo::GetCuConsume() const
{
    return m_cuConsume;
}

void EngineTaskInfo::SetCuConsume(const uint64_t& _cuConsume)
{
    m_cuConsume = _cuConsume;
    m_cuConsumeHasBeenSet = true;
}

bool EngineTaskInfo::CuConsumeHasBeenSet() const
{
    return m_cuConsumeHasBeenSet;
}

int64_t EngineTaskInfo::GetResourceUsage() const
{
    return m_resourceUsage;
}

void EngineTaskInfo::SetResourceUsage(const int64_t& _resourceUsage)
{
    m_resourceUsage = _resourceUsage;
    m_resourceUsageHasBeenSet = true;
}

bool EngineTaskInfo::ResourceUsageHasBeenSet() const
{
    return m_resourceUsageHasBeenSet;
}

string EngineTaskInfo::GetEngineName() const
{
    return m_engineName;
}

void EngineTaskInfo::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool EngineTaskInfo::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

string EngineTaskInfo::GetEngineExeStatus() const
{
    return m_engineExeStatus;
}

void EngineTaskInfo::SetEngineExeStatus(const string& _engineExeStatus)
{
    m_engineExeStatus = _engineExeStatus;
    m_engineExeStatusHasBeenSet = true;
}

bool EngineTaskInfo::EngineExeStatusHasBeenSet() const
{
    return m_engineExeStatusHasBeenSet;
}

string EngineTaskInfo::GetTaskKind() const
{
    return m_taskKind;
}

void EngineTaskInfo::SetTaskKind(const string& _taskKind)
{
    m_taskKind = _taskKind;
    m_taskKindHasBeenSet = true;
}

bool EngineTaskInfo::TaskKindHasBeenSet() const
{
    return m_taskKindHasBeenSet;
}

string EngineTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void EngineTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool EngineTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string EngineTaskInfo::GetTaskContent() const
{
    return m_taskContent;
}

void EngineTaskInfo::SetTaskContent(const string& _taskContent)
{
    m_taskContent = _taskContent;
    m_taskContentHasBeenSet = true;
}

bool EngineTaskInfo::TaskContentHasBeenSet() const
{
    return m_taskContentHasBeenSet;
}

uint64_t EngineTaskInfo::GetInputBytesSum() const
{
    return m_inputBytesSum;
}

void EngineTaskInfo::SetInputBytesSum(const uint64_t& _inputBytesSum)
{
    m_inputBytesSum = _inputBytesSum;
    m_inputBytesSumHasBeenSet = true;
}

bool EngineTaskInfo::InputBytesSumHasBeenSet() const
{
    return m_inputBytesSumHasBeenSet;
}

uint64_t EngineTaskInfo::GetShuffleReadBytesSum() const
{
    return m_shuffleReadBytesSum;
}

void EngineTaskInfo::SetShuffleReadBytesSum(const uint64_t& _shuffleReadBytesSum)
{
    m_shuffleReadBytesSum = _shuffleReadBytesSum;
    m_shuffleReadBytesSumHasBeenSet = true;
}

bool EngineTaskInfo::ShuffleReadBytesSumHasBeenSet() const
{
    return m_shuffleReadBytesSumHasBeenSet;
}

uint64_t EngineTaskInfo::GetShuffleReadRecordsSum() const
{
    return m_shuffleReadRecordsSum;
}

void EngineTaskInfo::SetShuffleReadRecordsSum(const uint64_t& _shuffleReadRecordsSum)
{
    m_shuffleReadRecordsSum = _shuffleReadRecordsSum;
    m_shuffleReadRecordsSumHasBeenSet = true;
}

bool EngineTaskInfo::ShuffleReadRecordsSumHasBeenSet() const
{
    return m_shuffleReadRecordsSumHasBeenSet;
}

uint64_t EngineTaskInfo::GetOutputRecordsSum() const
{
    return m_outputRecordsSum;
}

void EngineTaskInfo::SetOutputRecordsSum(const uint64_t& _outputRecordsSum)
{
    m_outputRecordsSum = _outputRecordsSum;
    m_outputRecordsSumHasBeenSet = true;
}

bool EngineTaskInfo::OutputRecordsSumHasBeenSet() const
{
    return m_outputRecordsSumHasBeenSet;
}

uint64_t EngineTaskInfo::GetOutputBytesSum() const
{
    return m_outputBytesSum;
}

void EngineTaskInfo::SetOutputBytesSum(const uint64_t& _outputBytesSum)
{
    m_outputBytesSum = _outputBytesSum;
    m_outputBytesSumHasBeenSet = true;
}

bool EngineTaskInfo::OutputBytesSumHasBeenSet() const
{
    return m_outputBytesSumHasBeenSet;
}

uint64_t EngineTaskInfo::GetOutputFilesNum() const
{
    return m_outputFilesNum;
}

void EngineTaskInfo::SetOutputFilesNum(const uint64_t& _outputFilesNum)
{
    m_outputFilesNum = _outputFilesNum;
    m_outputFilesNumHasBeenSet = true;
}

bool EngineTaskInfo::OutputFilesNumHasBeenSet() const
{
    return m_outputFilesNumHasBeenSet;
}

uint64_t EngineTaskInfo::GetOutputSmallFilesNum() const
{
    return m_outputSmallFilesNum;
}

void EngineTaskInfo::SetOutputSmallFilesNum(const uint64_t& _outputSmallFilesNum)
{
    m_outputSmallFilesNum = _outputSmallFilesNum;
    m_outputSmallFilesNumHasBeenSet = true;
}

bool EngineTaskInfo::OutputSmallFilesNumHasBeenSet() const
{
    return m_outputSmallFilesNumHasBeenSet;
}

uint64_t EngineTaskInfo::GetWaitTime() const
{
    return m_waitTime;
}

void EngineTaskInfo::SetWaitTime(const uint64_t& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool EngineTaskInfo::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}

uint64_t EngineTaskInfo::GetQueryResultTime() const
{
    return m_queryResultTime;
}

void EngineTaskInfo::SetQueryResultTime(const uint64_t& _queryResultTime)
{
    m_queryResultTime = _queryResultTime;
    m_queryResultTimeHasBeenSet = true;
}

bool EngineTaskInfo::QueryResultTimeHasBeenSet() const
{
    return m_queryResultTimeHasBeenSet;
}

string EngineTaskInfo::GetCmdArgs() const
{
    return m_cmdArgs;
}

void EngineTaskInfo::SetCmdArgs(const string& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool EngineTaskInfo::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

