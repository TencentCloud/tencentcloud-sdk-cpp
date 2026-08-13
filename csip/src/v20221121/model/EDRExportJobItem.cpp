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

#include <tencentcloud/csip/v20221121/model/EDRExportJobItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EDRExportJobItem::EDRExportJobItem() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_exportStatusHasBeenSet(false),
    m_exportProgressHasBeenSet(false),
    m_failureMsgHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome EDRExportJobItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ExportStatus") && !value["ExportStatus"].IsNull())
    {
        if (!value["ExportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.ExportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportStatus = string(value["ExportStatus"].GetString());
        m_exportStatusHasBeenSet = true;
    }

    if (value.HasMember("ExportProgress") && !value["ExportProgress"].IsNull())
    {
        if (!value["ExportProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.ExportProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exportProgress = value["ExportProgress"].GetInt64();
        m_exportProgressHasBeenSet = true;
    }

    if (value.HasMember("FailureMsg") && !value["FailureMsg"].IsNull())
    {
        if (!value["FailureMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.FailureMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMsg = string(value["FailureMsg"].GetString());
        m_failureMsgHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.Timeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = string(value["Timeout"].GetString());
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRExportJobItem.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EDRExportJobItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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


string EDRExportJobItem::GetJobId() const
{
    return m_jobId;
}

void EDRExportJobItem::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool EDRExportJobItem::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string EDRExportJobItem::GetJobName() const
{
    return m_jobName;
}

void EDRExportJobItem::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool EDRExportJobItem::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string EDRExportJobItem::GetSource() const
{
    return m_source;
}

void EDRExportJobItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool EDRExportJobItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string EDRExportJobItem::GetExportStatus() const
{
    return m_exportStatus;
}

void EDRExportJobItem::SetExportStatus(const string& _exportStatus)
{
    m_exportStatus = _exportStatus;
    m_exportStatusHasBeenSet = true;
}

bool EDRExportJobItem::ExportStatusHasBeenSet() const
{
    return m_exportStatusHasBeenSet;
}

int64_t EDRExportJobItem::GetExportProgress() const
{
    return m_exportProgress;
}

void EDRExportJobItem::SetExportProgress(const int64_t& _exportProgress)
{
    m_exportProgress = _exportProgress;
    m_exportProgressHasBeenSet = true;
}

bool EDRExportJobItem::ExportProgressHasBeenSet() const
{
    return m_exportProgressHasBeenSet;
}

string EDRExportJobItem::GetFailureMsg() const
{
    return m_failureMsg;
}

void EDRExportJobItem::SetFailureMsg(const string& _failureMsg)
{
    m_failureMsg = _failureMsg;
    m_failureMsgHasBeenSet = true;
}

bool EDRExportJobItem::FailureMsgHasBeenSet() const
{
    return m_failureMsgHasBeenSet;
}

string EDRExportJobItem::GetTimeout() const
{
    return m_timeout;
}

void EDRExportJobItem::SetTimeout(const string& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool EDRExportJobItem::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string EDRExportJobItem::GetInsertTime() const
{
    return m_insertTime;
}

void EDRExportJobItem::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool EDRExportJobItem::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

