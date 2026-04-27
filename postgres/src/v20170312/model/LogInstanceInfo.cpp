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

#include <tencentcloud/postgres/v20170312/model/LogInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

LogInstanceInfo::LogInstanceInfo() :
    m_instanceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_isSupportAuditHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_auditTypeHasBeenSet(false)
{
}

CoreInternalOutcome LogInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("IsSupportAudit") && !value["IsSupportAudit"].IsNull())
    {
        if (!value["IsSupportAudit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.IsSupportAudit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportAudit = value["IsSupportAudit"].GetInt64();
        m_isSupportAuditHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AuditType") && !value["AuditType"].IsNull())
    {
        if (!value["AuditType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstanceInfo.AuditType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditType = string(value["AuditType"].GetString());
        m_auditTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportAudit, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditType.c_str(), allocator).Move(), allocator);
    }

}


string LogInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void LogInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool LogInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t LogInstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void LogInstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LogInstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<Tag> LogInstanceInfo::GetTagList() const
{
    return m_tagList;
}

void LogInstanceInfo::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool LogInstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string LogInstanceInfo::GetEngine() const
{
    return m_engine;
}

void LogInstanceInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool LogInstanceInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string LogInstanceInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void LogInstanceInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool LogInstanceInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string LogInstanceInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void LogInstanceInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool LogInstanceInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t LogInstanceInfo::GetIsSupportAudit() const
{
    return m_isSupportAudit;
}

void LogInstanceInfo::SetIsSupportAudit(const int64_t& _isSupportAudit)
{
    m_isSupportAudit = _isSupportAudit;
    m_isSupportAuditHasBeenSet = true;
}

bool LogInstanceInfo::IsSupportAuditHasBeenSet() const
{
    return m_isSupportAuditHasBeenSet;
}

string LogInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void LogInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LogInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LogInstanceInfo::GetAuditType() const
{
    return m_auditType;
}

void LogInstanceInfo::SetAuditType(const string& _auditType)
{
    m_auditType = _auditType;
    m_auditTypeHasBeenSet = true;
}

bool LogInstanceInfo::AuditTypeHasBeenSet() const
{
    return m_auditTypeHasBeenSet;
}

