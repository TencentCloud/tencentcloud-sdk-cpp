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

#include <tencentcloud/tcss/v20201101/model/ExportJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ExportJobInfo::ExportJobInfo() :
    m_jobIDHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_exportStatusHasBeenSet(false),
    m_exportProgressHasBeenSet(false),
    m_failureMsgHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExportJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ExportStatus") && !value["ExportStatus"].IsNull())
    {
        if (!value["ExportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.ExportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportStatus = string(value["ExportStatus"].GetString());
        m_exportStatusHasBeenSet = true;
    }

    if (value.HasMember("ExportProgress") && !value["ExportProgress"].IsNull())
    {
        if (!value["ExportProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.ExportProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exportProgress = value["ExportProgress"].GetInt64();
        m_exportProgressHasBeenSet = true;
    }

    if (value.HasMember("FailureMsg") && !value["FailureMsg"].IsNull())
    {
        if (!value["FailureMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.FailureMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMsg = string(value["FailureMsg"].GetString());
        m_failureMsgHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.Timeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = string(value["Timeout"].GetString());
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobID.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_exportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_exportProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exportProgress, allocator);
    }

    if (m_failureMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeout.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

}


string ExportJobInfo::GetJobID() const
{
    return m_jobID;
}

void ExportJobInfo::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool ExportJobInfo::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

string ExportJobInfo::GetJobName() const
{
    return m_jobName;
}

void ExportJobInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ExportJobInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string ExportJobInfo::GetSource() const
{
    return m_source;
}

void ExportJobInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ExportJobInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ExportJobInfo::GetExportStatus() const
{
    return m_exportStatus;
}

void ExportJobInfo::SetExportStatus(const string& _exportStatus)
{
    m_exportStatus = _exportStatus;
    m_exportStatusHasBeenSet = true;
}

bool ExportJobInfo::ExportStatusHasBeenSet() const
{
    return m_exportStatusHasBeenSet;
}

int64_t ExportJobInfo::GetExportProgress() const
{
    return m_exportProgress;
}

void ExportJobInfo::SetExportProgress(const int64_t& _exportProgress)
{
    m_exportProgress = _exportProgress;
    m_exportProgressHasBeenSet = true;
}

bool ExportJobInfo::ExportProgressHasBeenSet() const
{
    return m_exportProgressHasBeenSet;
}

string ExportJobInfo::GetFailureMsg() const
{
    return m_failureMsg;
}

void ExportJobInfo::SetFailureMsg(const string& _failureMsg)
{
    m_failureMsg = _failureMsg;
    m_failureMsgHasBeenSet = true;
}

bool ExportJobInfo::FailureMsgHasBeenSet() const
{
    return m_failureMsgHasBeenSet;
}

string ExportJobInfo::GetTimeout() const
{
    return m_timeout;
}

void ExportJobInfo::SetTimeout(const string& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ExportJobInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ExportJobInfo::GetInsertTime() const
{
    return m_insertTime;
}

void ExportJobInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool ExportJobInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

