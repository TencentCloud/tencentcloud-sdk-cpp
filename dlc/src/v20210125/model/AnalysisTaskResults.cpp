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

#include <tencentcloud/dlc/v20210125/model/AnalysisTaskResults.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AnalysisTaskResults::AnalysisTaskResults() :
    m_idHasBeenSet(false),
    m_instanceStartTimeHasBeenSet(false),
    m_instanceCompleteTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_jobTimeSumHasBeenSet(false),
    m_taskTimeSumHasBeenSet(false),
    m_inputRecordsSumHasBeenSet(false),
    m_inputBytesSumHasBeenSet(false),
    m_outputRecordsSumHasBeenSet(false),
    m_outputBytesSumHasBeenSet(false),
    m_shuffleReadBytesSumHasBeenSet(false),
    m_shuffleReadRecordsSumHasBeenSet(false),
    m_analysisStatusHasBeenSet(false),
    m_outputFilesNumHasBeenSet(false),
    m_outputSmallFilesNumHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisTaskResults::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceStartTime") && !value["InstanceStartTime"].IsNull())
    {
        if (!value["InstanceStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.InstanceStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStartTime = value["InstanceStartTime"].GetInt64();
        m_instanceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCompleteTime") && !value["InstanceCompleteTime"].IsNull())
    {
        if (!value["InstanceCompleteTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.InstanceCompleteTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCompleteTime = value["InstanceCompleteTime"].GetInt64();
        m_instanceCompleteTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("JobTimeSum") && !value["JobTimeSum"].IsNull())
    {
        if (!value["JobTimeSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.JobTimeSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobTimeSum = value["JobTimeSum"].GetInt64();
        m_jobTimeSumHasBeenSet = true;
    }

    if (value.HasMember("TaskTimeSum") && !value["TaskTimeSum"].IsNull())
    {
        if (!value["TaskTimeSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.TaskTimeSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTimeSum = value["TaskTimeSum"].GetInt64();
        m_taskTimeSumHasBeenSet = true;
    }

    if (value.HasMember("InputRecordsSum") && !value["InputRecordsSum"].IsNull())
    {
        if (!value["InputRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.InputRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputRecordsSum = value["InputRecordsSum"].GetInt64();
        m_inputRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("InputBytesSum") && !value["InputBytesSum"].IsNull())
    {
        if (!value["InputBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.InputBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputBytesSum = value["InputBytesSum"].GetInt64();
        m_inputBytesSumHasBeenSet = true;
    }

    if (value.HasMember("OutputRecordsSum") && !value["OutputRecordsSum"].IsNull())
    {
        if (!value["OutputRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.OutputRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputRecordsSum = value["OutputRecordsSum"].GetInt64();
        m_outputRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("OutputBytesSum") && !value["OutputBytesSum"].IsNull())
    {
        if (!value["OutputBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.OutputBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputBytesSum = value["OutputBytesSum"].GetInt64();
        m_outputBytesSumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadBytesSum") && !value["ShuffleReadBytesSum"].IsNull())
    {
        if (!value["ShuffleReadBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.ShuffleReadBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadBytesSum = value["ShuffleReadBytesSum"].GetInt64();
        m_shuffleReadBytesSumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadRecordsSum") && !value["ShuffleReadRecordsSum"].IsNull())
    {
        if (!value["ShuffleReadRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.ShuffleReadRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadRecordsSum = value["ShuffleReadRecordsSum"].GetInt64();
        m_shuffleReadRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("AnalysisStatus") && !value["AnalysisStatus"].IsNull())
    {
        if (!value["AnalysisStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.AnalysisStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisStatus = string(value["AnalysisStatus"].GetString());
        m_analysisStatusHasBeenSet = true;
    }

    if (value.HasMember("OutputFilesNum") && !value["OutputFilesNum"].IsNull())
    {
        if (!value["OutputFilesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.OutputFilesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputFilesNum = value["OutputFilesNum"].GetInt64();
        m_outputFilesNumHasBeenSet = true;
    }

    if (value.HasMember("OutputSmallFilesNum") && !value["OutputSmallFilesNum"].IsNull())
    {
        if (!value["OutputSmallFilesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisTaskResults.OutputSmallFilesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputSmallFilesNum = value["OutputSmallFilesNum"].GetInt64();
        m_outputSmallFilesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisTaskResults::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStartTime, allocator);
    }

    if (m_instanceCompleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCompleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCompleteTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobTimeSum, allocator);
    }

    if (m_taskTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTimeSum, allocator);
    }

    if (m_inputRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputRecordsSum, allocator);
    }

    if (m_inputBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputBytesSum, allocator);
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

    if (m_analysisStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisStatus.c_str(), allocator).Move(), allocator);
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

}


string AnalysisTaskResults::GetId() const
{
    return m_id;
}

void AnalysisTaskResults::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AnalysisTaskResults::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AnalysisTaskResults::GetInstanceStartTime() const
{
    return m_instanceStartTime;
}

void AnalysisTaskResults::SetInstanceStartTime(const int64_t& _instanceStartTime)
{
    m_instanceStartTime = _instanceStartTime;
    m_instanceStartTimeHasBeenSet = true;
}

bool AnalysisTaskResults::InstanceStartTimeHasBeenSet() const
{
    return m_instanceStartTimeHasBeenSet;
}

int64_t AnalysisTaskResults::GetInstanceCompleteTime() const
{
    return m_instanceCompleteTime;
}

void AnalysisTaskResults::SetInstanceCompleteTime(const int64_t& _instanceCompleteTime)
{
    m_instanceCompleteTime = _instanceCompleteTime;
    m_instanceCompleteTimeHasBeenSet = true;
}

bool AnalysisTaskResults::InstanceCompleteTimeHasBeenSet() const
{
    return m_instanceCompleteTimeHasBeenSet;
}

int64_t AnalysisTaskResults::GetState() const
{
    return m_state;
}

void AnalysisTaskResults::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AnalysisTaskResults::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AnalysisTaskResults::GetSQL() const
{
    return m_sQL;
}

void AnalysisTaskResults::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool AnalysisTaskResults::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

string AnalysisTaskResults::GetDataEngineName() const
{
    return m_dataEngineName;
}

void AnalysisTaskResults::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool AnalysisTaskResults::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

int64_t AnalysisTaskResults::GetJobTimeSum() const
{
    return m_jobTimeSum;
}

void AnalysisTaskResults::SetJobTimeSum(const int64_t& _jobTimeSum)
{
    m_jobTimeSum = _jobTimeSum;
    m_jobTimeSumHasBeenSet = true;
}

bool AnalysisTaskResults::JobTimeSumHasBeenSet() const
{
    return m_jobTimeSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetTaskTimeSum() const
{
    return m_taskTimeSum;
}

void AnalysisTaskResults::SetTaskTimeSum(const int64_t& _taskTimeSum)
{
    m_taskTimeSum = _taskTimeSum;
    m_taskTimeSumHasBeenSet = true;
}

bool AnalysisTaskResults::TaskTimeSumHasBeenSet() const
{
    return m_taskTimeSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetInputRecordsSum() const
{
    return m_inputRecordsSum;
}

void AnalysisTaskResults::SetInputRecordsSum(const int64_t& _inputRecordsSum)
{
    m_inputRecordsSum = _inputRecordsSum;
    m_inputRecordsSumHasBeenSet = true;
}

bool AnalysisTaskResults::InputRecordsSumHasBeenSet() const
{
    return m_inputRecordsSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetInputBytesSum() const
{
    return m_inputBytesSum;
}

void AnalysisTaskResults::SetInputBytesSum(const int64_t& _inputBytesSum)
{
    m_inputBytesSum = _inputBytesSum;
    m_inputBytesSumHasBeenSet = true;
}

bool AnalysisTaskResults::InputBytesSumHasBeenSet() const
{
    return m_inputBytesSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetOutputRecordsSum() const
{
    return m_outputRecordsSum;
}

void AnalysisTaskResults::SetOutputRecordsSum(const int64_t& _outputRecordsSum)
{
    m_outputRecordsSum = _outputRecordsSum;
    m_outputRecordsSumHasBeenSet = true;
}

bool AnalysisTaskResults::OutputRecordsSumHasBeenSet() const
{
    return m_outputRecordsSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetOutputBytesSum() const
{
    return m_outputBytesSum;
}

void AnalysisTaskResults::SetOutputBytesSum(const int64_t& _outputBytesSum)
{
    m_outputBytesSum = _outputBytesSum;
    m_outputBytesSumHasBeenSet = true;
}

bool AnalysisTaskResults::OutputBytesSumHasBeenSet() const
{
    return m_outputBytesSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetShuffleReadBytesSum() const
{
    return m_shuffleReadBytesSum;
}

void AnalysisTaskResults::SetShuffleReadBytesSum(const int64_t& _shuffleReadBytesSum)
{
    m_shuffleReadBytesSum = _shuffleReadBytesSum;
    m_shuffleReadBytesSumHasBeenSet = true;
}

bool AnalysisTaskResults::ShuffleReadBytesSumHasBeenSet() const
{
    return m_shuffleReadBytesSumHasBeenSet;
}

int64_t AnalysisTaskResults::GetShuffleReadRecordsSum() const
{
    return m_shuffleReadRecordsSum;
}

void AnalysisTaskResults::SetShuffleReadRecordsSum(const int64_t& _shuffleReadRecordsSum)
{
    m_shuffleReadRecordsSum = _shuffleReadRecordsSum;
    m_shuffleReadRecordsSumHasBeenSet = true;
}

bool AnalysisTaskResults::ShuffleReadRecordsSumHasBeenSet() const
{
    return m_shuffleReadRecordsSumHasBeenSet;
}

string AnalysisTaskResults::GetAnalysisStatus() const
{
    return m_analysisStatus;
}

void AnalysisTaskResults::SetAnalysisStatus(const string& _analysisStatus)
{
    m_analysisStatus = _analysisStatus;
    m_analysisStatusHasBeenSet = true;
}

bool AnalysisTaskResults::AnalysisStatusHasBeenSet() const
{
    return m_analysisStatusHasBeenSet;
}

int64_t AnalysisTaskResults::GetOutputFilesNum() const
{
    return m_outputFilesNum;
}

void AnalysisTaskResults::SetOutputFilesNum(const int64_t& _outputFilesNum)
{
    m_outputFilesNum = _outputFilesNum;
    m_outputFilesNumHasBeenSet = true;
}

bool AnalysisTaskResults::OutputFilesNumHasBeenSet() const
{
    return m_outputFilesNumHasBeenSet;
}

int64_t AnalysisTaskResults::GetOutputSmallFilesNum() const
{
    return m_outputSmallFilesNum;
}

void AnalysisTaskResults::SetOutputSmallFilesNum(const int64_t& _outputSmallFilesNum)
{
    m_outputSmallFilesNum = _outputSmallFilesNum;
    m_outputSmallFilesNumHasBeenSet = true;
}

bool AnalysisTaskResults::OutputSmallFilesNumHasBeenSet() const
{
    return m_outputSmallFilesNumHasBeenSet;
}

