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

#include <tencentcloud/omics/v20221128/model/RunMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunMetadata::RunMetadata() :
    m_runTypeHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_callNameHasBeenSet(false),
    m_scatterIndexHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_preprocessHasBeenSet(false),
    m_postProcessHasBeenSet(false),
    m_callCachedHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_stdoutHasBeenSet(false),
    m_stderrHasBeenSet(false),
    m_metaHasBeenSet(false)
{
}

CoreInternalOutcome RunMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("CallName") && !value["CallName"].IsNull())
    {
        if (!value["CallName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.CallName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callName = string(value["CallName"].GetString());
        m_callNameHasBeenSet = true;
    }

    if (value.HasMember("ScatterIndex") && !value["ScatterIndex"].IsNull())
    {
        if (!value["ScatterIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.ScatterIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scatterIndex = string(value["ScatterIndex"].GetString());
        m_scatterIndexHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("Preprocess") && !value["Preprocess"].IsNull())
    {
        if (!value["Preprocess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Preprocess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preprocess = value["Preprocess"].GetBool();
        m_preprocessHasBeenSet = true;
    }

    if (value.HasMember("PostProcess") && !value["PostProcess"].IsNull())
    {
        if (!value["PostProcess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.PostProcess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_postProcess = value["PostProcess"].GetBool();
        m_postProcessHasBeenSet = true;
    }

    if (value.HasMember("CallCached") && !value["CallCached"].IsNull())
    {
        if (!value["CallCached"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.CallCached` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_callCached = value["CallCached"].GetBool();
        m_callCachedHasBeenSet = true;
    }

    if (value.HasMember("WorkDir") && !value["WorkDir"].IsNull())
    {
        if (!value["WorkDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.WorkDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workDir = string(value["WorkDir"].GetString());
        m_workDirHasBeenSet = true;
    }

    if (value.HasMember("Stdout") && !value["Stdout"].IsNull())
    {
        if (!value["Stdout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Stdout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdout = string(value["Stdout"].GetString());
        m_stdoutHasBeenSet = true;
    }

    if (value.HasMember("Stderr") && !value["Stderr"].IsNull())
    {
        if (!value["Stderr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Stderr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderr = string(value["Stderr"].GetString());
        m_stderrHasBeenSet = true;
    }

    if (value.HasMember("Meta") && !value["Meta"].IsNull())
    {
        if (!value["Meta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunMetadata.Meta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_meta = string(value["Meta"].GetString());
        m_metaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_callNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callName.c_str(), allocator).Move(), allocator);
    }

    if (m_scatterIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScatterIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scatterIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_preprocessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Preprocess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preprocess, allocator);
    }

    if (m_postProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postProcess, allocator);
    }

    if (m_callCachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCached, allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_stdoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stdout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdout.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stderr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderr.c_str(), allocator).Move(), allocator);
    }

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_meta.c_str(), allocator).Move(), allocator);
    }

}


string RunMetadata::GetRunType() const
{
    return m_runType;
}

void RunMetadata::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool RunMetadata::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

string RunMetadata::GetRunId() const
{
    return m_runId;
}

void RunMetadata::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool RunMetadata::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

string RunMetadata::GetParentId() const
{
    return m_parentId;
}

void RunMetadata::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool RunMetadata::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string RunMetadata::GetJobId() const
{
    return m_jobId;
}

void RunMetadata::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool RunMetadata::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string RunMetadata::GetCallName() const
{
    return m_callName;
}

void RunMetadata::SetCallName(const string& _callName)
{
    m_callName = _callName;
    m_callNameHasBeenSet = true;
}

bool RunMetadata::CallNameHasBeenSet() const
{
    return m_callNameHasBeenSet;
}

string RunMetadata::GetScatterIndex() const
{
    return m_scatterIndex;
}

void RunMetadata::SetScatterIndex(const string& _scatterIndex)
{
    m_scatterIndex = _scatterIndex;
    m_scatterIndexHasBeenSet = true;
}

bool RunMetadata::ScatterIndexHasBeenSet() const
{
    return m_scatterIndexHasBeenSet;
}

string RunMetadata::GetInput() const
{
    return m_input;
}

void RunMetadata::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool RunMetadata::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string RunMetadata::GetOutput() const
{
    return m_output;
}

void RunMetadata::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool RunMetadata::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string RunMetadata::GetStatus() const
{
    return m_status;
}

void RunMetadata::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunMetadata::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RunMetadata::GetErrorMessage() const
{
    return m_errorMessage;
}

void RunMetadata::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool RunMetadata::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string RunMetadata::GetStartTime() const
{
    return m_startTime;
}

void RunMetadata::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RunMetadata::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RunMetadata::GetSubmitTime() const
{
    return m_submitTime;
}

void RunMetadata::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool RunMetadata::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string RunMetadata::GetEndTime() const
{
    return m_endTime;
}

void RunMetadata::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RunMetadata::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RunMetadata::GetCommand() const
{
    return m_command;
}

void RunMetadata::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool RunMetadata::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string RunMetadata::GetRuntime() const
{
    return m_runtime;
}

void RunMetadata::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool RunMetadata::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

bool RunMetadata::GetPreprocess() const
{
    return m_preprocess;
}

void RunMetadata::SetPreprocess(const bool& _preprocess)
{
    m_preprocess = _preprocess;
    m_preprocessHasBeenSet = true;
}

bool RunMetadata::PreprocessHasBeenSet() const
{
    return m_preprocessHasBeenSet;
}

bool RunMetadata::GetPostProcess() const
{
    return m_postProcess;
}

void RunMetadata::SetPostProcess(const bool& _postProcess)
{
    m_postProcess = _postProcess;
    m_postProcessHasBeenSet = true;
}

bool RunMetadata::PostProcessHasBeenSet() const
{
    return m_postProcessHasBeenSet;
}

bool RunMetadata::GetCallCached() const
{
    return m_callCached;
}

void RunMetadata::SetCallCached(const bool& _callCached)
{
    m_callCached = _callCached;
    m_callCachedHasBeenSet = true;
}

bool RunMetadata::CallCachedHasBeenSet() const
{
    return m_callCachedHasBeenSet;
}

string RunMetadata::GetWorkDir() const
{
    return m_workDir;
}

void RunMetadata::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool RunMetadata::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

string RunMetadata::GetStdout() const
{
    return m_stdout;
}

void RunMetadata::SetStdout(const string& _stdout)
{
    m_stdout = _stdout;
    m_stdoutHasBeenSet = true;
}

bool RunMetadata::StdoutHasBeenSet() const
{
    return m_stdoutHasBeenSet;
}

string RunMetadata::GetStderr() const
{
    return m_stderr;
}

void RunMetadata::SetStderr(const string& _stderr)
{
    m_stderr = _stderr;
    m_stderrHasBeenSet = true;
}

bool RunMetadata::StderrHasBeenSet() const
{
    return m_stderrHasBeenSet;
}

string RunMetadata::GetMeta() const
{
    return m_meta;
}

void RunMetadata::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool RunMetadata::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

