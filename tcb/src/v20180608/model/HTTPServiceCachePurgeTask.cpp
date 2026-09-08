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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceCachePurgeTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceCachePurgeTask::HTTPServiceCachePurgeTask() :
    m_cacheTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_purgeTypeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceCachePurgeTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheType") && !value["CacheType"].IsNull())
    {
        if (!value["CacheType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.CacheType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheType = string(value["CacheType"].GetString());
        m_cacheTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PurgeType") && !value["PurgeType"].IsNull())
    {
        if (!value["PurgeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.PurgeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purgeType = string(value["PurgeType"].GetString());
        m_purgeTypeHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targets.push_back((*itr).GetString());
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCachePurgeTask.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceCachePurgeTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cacheTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_purgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purgeType.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
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


string HTTPServiceCachePurgeTask::GetCacheType() const
{
    return m_cacheType;
}

void HTTPServiceCachePurgeTask::SetCacheType(const string& _cacheType)
{
    m_cacheType = _cacheType;
    m_cacheTypeHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::CacheTypeHasBeenSet() const
{
    return m_cacheTypeHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetTaskId() const
{
    return m_taskId;
}

void HTTPServiceCachePurgeTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetStatus() const
{
    return m_status;
}

void HTTPServiceCachePurgeTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetPurgeType() const
{
    return m_purgeType;
}

void HTTPServiceCachePurgeTask::SetPurgeType(const string& _purgeType)
{
    m_purgeType = _purgeType;
    m_purgeTypeHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::PurgeTypeHasBeenSet() const
{
    return m_purgeTypeHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetMethod() const
{
    return m_method;
}

void HTTPServiceCachePurgeTask::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<string> HTTPServiceCachePurgeTask::GetTargets() const
{
    return m_targets;
}

void HTTPServiceCachePurgeTask::SetTargets(const vector<string>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetFailReason() const
{
    return m_failReason;
}

void HTTPServiceCachePurgeTask::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetCreateTime() const
{
    return m_createTime;
}

void HTTPServiceCachePurgeTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HTTPServiceCachePurgeTask::GetUpdateTime() const
{
    return m_updateTime;
}

void HTTPServiceCachePurgeTask::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HTTPServiceCachePurgeTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

