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

#include <tencentcloud/cdb/v20170320/model/ImportRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ImportRecord::ImportRecord() :
    m_statusHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_workIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_processHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false)
{
}

CoreInternalOutcome ImportRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkId") && !value["WorkId"].IsNull())
    {
        if (!value["WorkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.WorkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workId = string(value["WorkId"].GetString());
        m_workIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.Process` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_process = value["Process"].GetInt64();
        m_processHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportRecord.AsyncRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = string(value["AsyncRequestId"].GetString());
        m_asyncRequestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImportRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_process, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncRequestId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ImportRecord::GetStatus() const
{
    return m_status;
}

void ImportRecord::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImportRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ImportRecord::GetCode() const
{
    return m_code;
}

void ImportRecord::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ImportRecord::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t ImportRecord::GetCostTime() const
{
    return m_costTime;
}

void ImportRecord::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool ImportRecord::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string ImportRecord::GetInstanceId() const
{
    return m_instanceId;
}

void ImportRecord::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ImportRecord::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ImportRecord::GetWorkId() const
{
    return m_workId;
}

void ImportRecord::SetWorkId(const string& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool ImportRecord::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string ImportRecord::GetFileName() const
{
    return m_fileName;
}

void ImportRecord::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ImportRecord::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t ImportRecord::GetProcess() const
{
    return m_process;
}

void ImportRecord::SetProcess(const int64_t& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool ImportRecord::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

string ImportRecord::GetCreateTime() const
{
    return m_createTime;
}

void ImportRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImportRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ImportRecord::GetFileSize() const
{
    return m_fileSize;
}

void ImportRecord::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ImportRecord::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ImportRecord::GetMessage() const
{
    return m_message;
}

void ImportRecord::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ImportRecord::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t ImportRecord::GetJobId() const
{
    return m_jobId;
}

void ImportRecord::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ImportRecord::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ImportRecord::GetDbName() const
{
    return m_dbName;
}

void ImportRecord::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ImportRecord::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string ImportRecord::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void ImportRecord::SetAsyncRequestId(const string& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool ImportRecord::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

