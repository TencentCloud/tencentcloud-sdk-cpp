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

#include <tencentcloud/csip/v20221121/model/ExportJobItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExportJobItem::ExportJobItem() :
    m_jobIDHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_exportJobStatusHasBeenSet(false),
    m_exportProgressHasBeenSet(false),
    m_failureMsgHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExportJobItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ExportJobStatus") && !value["ExportJobStatus"].IsNull())
    {
        if (!value["ExportJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.ExportJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportJobStatus = string(value["ExportJobStatus"].GetString());
        m_exportJobStatusHasBeenSet = true;
    }

    if (value.HasMember("ExportProgress") && !value["ExportProgress"].IsNull())
    {
        if (!value["ExportProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.ExportProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exportProgress = value["ExportProgress"].GetUint64();
        m_exportProgressHasBeenSet = true;
    }

    if (value.HasMember("FailureMsg") && !value["FailureMsg"].IsNull())
    {
        if (!value["FailureMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.FailureMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMsg = string(value["FailureMsg"].GetString());
        m_failureMsgHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.Timeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = string(value["Timeout"].GetString());
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportJobItem.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportJobItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_exportJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportJobStatus.c_str(), allocator).Move(), allocator);
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


string ExportJobItem::GetJobID() const
{
    return m_jobID;
}

void ExportJobItem::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool ExportJobItem::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

string ExportJobItem::GetJobName() const
{
    return m_jobName;
}

void ExportJobItem::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ExportJobItem::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string ExportJobItem::GetSource() const
{
    return m_source;
}

void ExportJobItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ExportJobItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ExportJobItem::GetExportJobStatus() const
{
    return m_exportJobStatus;
}

void ExportJobItem::SetExportJobStatus(const string& _exportJobStatus)
{
    m_exportJobStatus = _exportJobStatus;
    m_exportJobStatusHasBeenSet = true;
}

bool ExportJobItem::ExportJobStatusHasBeenSet() const
{
    return m_exportJobStatusHasBeenSet;
}

uint64_t ExportJobItem::GetExportProgress() const
{
    return m_exportProgress;
}

void ExportJobItem::SetExportProgress(const uint64_t& _exportProgress)
{
    m_exportProgress = _exportProgress;
    m_exportProgressHasBeenSet = true;
}

bool ExportJobItem::ExportProgressHasBeenSet() const
{
    return m_exportProgressHasBeenSet;
}

string ExportJobItem::GetFailureMsg() const
{
    return m_failureMsg;
}

void ExportJobItem::SetFailureMsg(const string& _failureMsg)
{
    m_failureMsg = _failureMsg;
    m_failureMsgHasBeenSet = true;
}

bool ExportJobItem::FailureMsgHasBeenSet() const
{
    return m_failureMsgHasBeenSet;
}

string ExportJobItem::GetTimeout() const
{
    return m_timeout;
}

void ExportJobItem::SetTimeout(const string& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ExportJobItem::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ExportJobItem::GetInsertTime() const
{
    return m_insertTime;
}

void ExportJobItem::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool ExportJobItem::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

