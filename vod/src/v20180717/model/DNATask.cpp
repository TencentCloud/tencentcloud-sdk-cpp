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

#include <tencentcloud/vod/v20180717/model/DNATask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DNATask::DNATask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome DNATask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNATask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNATask.Output` is not array type"));

        const rapidjson::Value &tmpValue = value["Output"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DNATaskOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_output.push_back(item);
        }
        m_outputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNATask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errCodeExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCodeExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCodeExt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_output.begin(); itr != m_output.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DNATask::GetTaskId() const
{
    return m_taskId;
}

void DNATask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DNATask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DNATask::GetStatus() const
{
    return m_status;
}

void DNATask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DNATask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DNATask::GetErrCode() const
{
    return m_errCode;
}

void DNATask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool DNATask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string DNATask::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void DNATask::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool DNATask::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string DNATask::GetMessage() const
{
    return m_message;
}

void DNATask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DNATask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DNATask::GetFileId() const
{
    return m_fileId;
}

void DNATask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool DNATask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

vector<DNATaskOutput> DNATask::GetOutput() const
{
    return m_output;
}

void DNATask::SetOutput(const vector<DNATaskOutput>& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool DNATask::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

