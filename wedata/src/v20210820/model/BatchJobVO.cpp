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

#include <tencentcloud/wedata/v20210820/model/BatchJobVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchJobVO::BatchJobVO() :
    m_jobIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

CoreInternalOutcome BatchJobVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchJobVO.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchJobVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

}


int64_t BatchJobVO::GetJobId() const
{
    return m_jobId;
}

void BatchJobVO::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool BatchJobVO::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string BatchJobVO::GetJobType() const
{
    return m_jobType;
}

void BatchJobVO::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool BatchJobVO::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string BatchJobVO::GetStatus() const
{
    return m_status;
}

void BatchJobVO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchJobVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchJobVO::GetCreateTime() const
{
    return m_createTime;
}

void BatchJobVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BatchJobVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BatchJobVO::GetOwnerName() const
{
    return m_ownerName;
}

void BatchJobVO::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool BatchJobVO::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string BatchJobVO::GetProjectId() const
{
    return m_projectId;
}

void BatchJobVO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchJobVO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BatchJobVO::GetOwnerId() const
{
    return m_ownerId;
}

void BatchJobVO::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool BatchJobVO::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

