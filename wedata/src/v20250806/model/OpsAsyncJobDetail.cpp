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

#include <tencentcloud/wedata/v20250806/model/OpsAsyncJobDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

OpsAsyncJobDetail::OpsAsyncJobDetail() :
    m_projectIdHasBeenSet(false),
    m_asyncIdHasBeenSet(false),
    m_asyncTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_totalSubProcessCountHasBeenSet(false),
    m_finishedSubProcessCountHasBeenSet(false),
    m_successSubProcessCountHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome OpsAsyncJobDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AsyncId") && !value["AsyncId"].IsNull())
    {
        if (!value["AsyncId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.AsyncId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncId = string(value["AsyncId"].GetString());
        m_asyncIdHasBeenSet = true;
    }

    if (value.HasMember("AsyncType") && !value["AsyncType"].IsNull())
    {
        if (!value["AsyncType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.AsyncType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncType = string(value["AsyncType"].GetString());
        m_asyncTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("TotalSubProcessCount") && !value["TotalSubProcessCount"].IsNull())
    {
        if (!value["TotalSubProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.TotalSubProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSubProcessCount = value["TotalSubProcessCount"].GetUint64();
        m_totalSubProcessCountHasBeenSet = true;
    }

    if (value.HasMember("FinishedSubProcessCount") && !value["FinishedSubProcessCount"].IsNull())
    {
        if (!value["FinishedSubProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.FinishedSubProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedSubProcessCount = value["FinishedSubProcessCount"].GetUint64();
        m_finishedSubProcessCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessSubProcessCount") && !value["SuccessSubProcessCount"].IsNull())
    {
        if (!value["SuccessSubProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.SuccessSubProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successSubProcessCount = value["SuccessSubProcessCount"].GetUint64();
        m_successSubProcessCountHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncJobDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsAsyncJobDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSubProcessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSubProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSubProcessCount, allocator);
    }

    if (m_finishedSubProcessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedSubProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedSubProcessCount, allocator);
    }

    if (m_successSubProcessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessSubProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successSubProcessCount, allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string OpsAsyncJobDetail::GetProjectId() const
{
    return m_projectId;
}

void OpsAsyncJobDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool OpsAsyncJobDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string OpsAsyncJobDetail::GetAsyncId() const
{
    return m_asyncId;
}

void OpsAsyncJobDetail::SetAsyncId(const string& _asyncId)
{
    m_asyncId = _asyncId;
    m_asyncIdHasBeenSet = true;
}

bool OpsAsyncJobDetail::AsyncIdHasBeenSet() const
{
    return m_asyncIdHasBeenSet;
}

string OpsAsyncJobDetail::GetAsyncType() const
{
    return m_asyncType;
}

void OpsAsyncJobDetail::SetAsyncType(const string& _asyncType)
{
    m_asyncType = _asyncType;
    m_asyncTypeHasBeenSet = true;
}

bool OpsAsyncJobDetail::AsyncTypeHasBeenSet() const
{
    return m_asyncTypeHasBeenSet;
}

string OpsAsyncJobDetail::GetStatus() const
{
    return m_status;
}

void OpsAsyncJobDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OpsAsyncJobDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OpsAsyncJobDetail::GetErrorDesc() const
{
    return m_errorDesc;
}

void OpsAsyncJobDetail::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool OpsAsyncJobDetail::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

uint64_t OpsAsyncJobDetail::GetTotalSubProcessCount() const
{
    return m_totalSubProcessCount;
}

void OpsAsyncJobDetail::SetTotalSubProcessCount(const uint64_t& _totalSubProcessCount)
{
    m_totalSubProcessCount = _totalSubProcessCount;
    m_totalSubProcessCountHasBeenSet = true;
}

bool OpsAsyncJobDetail::TotalSubProcessCountHasBeenSet() const
{
    return m_totalSubProcessCountHasBeenSet;
}

uint64_t OpsAsyncJobDetail::GetFinishedSubProcessCount() const
{
    return m_finishedSubProcessCount;
}

void OpsAsyncJobDetail::SetFinishedSubProcessCount(const uint64_t& _finishedSubProcessCount)
{
    m_finishedSubProcessCount = _finishedSubProcessCount;
    m_finishedSubProcessCountHasBeenSet = true;
}

bool OpsAsyncJobDetail::FinishedSubProcessCountHasBeenSet() const
{
    return m_finishedSubProcessCountHasBeenSet;
}

uint64_t OpsAsyncJobDetail::GetSuccessSubProcessCount() const
{
    return m_successSubProcessCount;
}

void OpsAsyncJobDetail::SetSuccessSubProcessCount(const uint64_t& _successSubProcessCount)
{
    m_successSubProcessCount = _successSubProcessCount;
    m_successSubProcessCountHasBeenSet = true;
}

bool OpsAsyncJobDetail::SuccessSubProcessCountHasBeenSet() const
{
    return m_successSubProcessCountHasBeenSet;
}

string OpsAsyncJobDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void OpsAsyncJobDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool OpsAsyncJobDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string OpsAsyncJobDetail::GetCreateTime() const
{
    return m_createTime;
}

void OpsAsyncJobDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OpsAsyncJobDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OpsAsyncJobDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void OpsAsyncJobDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OpsAsyncJobDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

