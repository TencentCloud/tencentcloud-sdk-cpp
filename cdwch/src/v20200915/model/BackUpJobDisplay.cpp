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

#include <tencentcloud/cdwch/v20200915/model/BackUpJobDisplay.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

BackUpJobDisplay::BackUpJobDisplay() :
    m_jobIdHasBeenSet(false),
    m_snapshotHasBeenSet(false),
    m_backUpTypeHasBeenSet(false),
    m_backUpSizeHasBeenSet(false),
    m_backUpTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_jobStatusHasBeenSet(false)
{
}

CoreInternalOutcome BackUpJobDisplay::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Snapshot") && !value["Snapshot"].IsNull())
    {
        if (!value["Snapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.Snapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshot = string(value["Snapshot"].GetString());
        m_snapshotHasBeenSet = true;
    }

    if (value.HasMember("BackUpType") && !value["BackUpType"].IsNull())
    {
        if (!value["BackUpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backUpType = string(value["BackUpType"].GetString());
        m_backUpTypeHasBeenSet = true;
    }

    if (value.HasMember("BackUpSize") && !value["BackUpSize"].IsNull())
    {
        if (!value["BackUpSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backUpSize = value["BackUpSize"].GetInt64();
        m_backUpSizeHasBeenSet = true;
    }

    if (value.HasMember("BackUpTime") && !value["BackUpTime"].IsNull())
    {
        if (!value["BackUpTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.BackUpTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backUpTime = string(value["BackUpTime"].GetString());
        m_backUpTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpJobDisplay.JobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = string(value["JobStatus"].GetString());
        m_jobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackUpJobDisplay::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_snapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_backUpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backUpType.c_str(), allocator).Move(), allocator);
    }

    if (m_backUpSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpSize, allocator);
    }

    if (m_backUpTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backUpTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

}


int64_t BackUpJobDisplay::GetJobId() const
{
    return m_jobId;
}

void BackUpJobDisplay::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool BackUpJobDisplay::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string BackUpJobDisplay::GetSnapshot() const
{
    return m_snapshot;
}

void BackUpJobDisplay::SetSnapshot(const string& _snapshot)
{
    m_snapshot = _snapshot;
    m_snapshotHasBeenSet = true;
}

bool BackUpJobDisplay::SnapshotHasBeenSet() const
{
    return m_snapshotHasBeenSet;
}

string BackUpJobDisplay::GetBackUpType() const
{
    return m_backUpType;
}

void BackUpJobDisplay::SetBackUpType(const string& _backUpType)
{
    m_backUpType = _backUpType;
    m_backUpTypeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpTypeHasBeenSet() const
{
    return m_backUpTypeHasBeenSet;
}

int64_t BackUpJobDisplay::GetBackUpSize() const
{
    return m_backUpSize;
}

void BackUpJobDisplay::SetBackUpSize(const int64_t& _backUpSize)
{
    m_backUpSize = _backUpSize;
    m_backUpSizeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpSizeHasBeenSet() const
{
    return m_backUpSizeHasBeenSet;
}

string BackUpJobDisplay::GetBackUpTime() const
{
    return m_backUpTime;
}

void BackUpJobDisplay::SetBackUpTime(const string& _backUpTime)
{
    m_backUpTime = _backUpTime;
    m_backUpTimeHasBeenSet = true;
}

bool BackUpJobDisplay::BackUpTimeHasBeenSet() const
{
    return m_backUpTimeHasBeenSet;
}

string BackUpJobDisplay::GetExpireTime() const
{
    return m_expireTime;
}

void BackUpJobDisplay::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BackUpJobDisplay::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string BackUpJobDisplay::GetJobStatus() const
{
    return m_jobStatus;
}

void BackUpJobDisplay::SetJobStatus(const string& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool BackUpJobDisplay::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

