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

#include <tencentcloud/dbbrain/v20210527/model/RedisBigKeyTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisBigKeyTask::RedisBigKeyTask() :
    m_asyncRequestIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_shardIdsHasBeenSet(false)
{
}

CoreInternalOutcome RedisBigKeyTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.AsyncRequestId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetInt64();
        m_asyncRequestIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("ShardIds") && !value["ShardIds"].IsNull())
    {
        if (!value["ShardIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedisBigKeyTask.ShardIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardIds.push_back((*itr).GetInt64());
        }
        m_shardIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisBigKeyTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_shardIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardIds.begin(); itr != m_shardIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t RedisBigKeyTask::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void RedisBigKeyTask::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool RedisBigKeyTask::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

string RedisBigKeyTask::GetCreateTime() const
{
    return m_createTime;
}

void RedisBigKeyTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RedisBigKeyTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RedisBigKeyTask::GetStartTime() const
{
    return m_startTime;
}

void RedisBigKeyTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RedisBigKeyTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RedisBigKeyTask::GetEndTime() const
{
    return m_endTime;
}

void RedisBigKeyTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RedisBigKeyTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RedisBigKeyTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void RedisBigKeyTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool RedisBigKeyTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

int64_t RedisBigKeyTask::GetProgress() const
{
    return m_progress;
}

void RedisBigKeyTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RedisBigKeyTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<int64_t> RedisBigKeyTask::GetShardIds() const
{
    return m_shardIds;
}

void RedisBigKeyTask::SetShardIds(const vector<int64_t>& _shardIds)
{
    m_shardIds = _shardIds;
    m_shardIdsHasBeenSet = true;
}

bool RedisBigKeyTask::ShardIdsHasBeenSet() const
{
    return m_shardIdsHasBeenSet;
}

