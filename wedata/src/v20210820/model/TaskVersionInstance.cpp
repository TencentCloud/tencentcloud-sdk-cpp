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

#include <tencentcloud/wedata/v20210820/model/TaskVersionInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskVersionInstance::TaskVersionInstance() :
    m_instanceVersionHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_changeTypeHasBeenSet(false),
    m_submitterUinHasBeenSet(false),
    m_instanceDateHasBeenSet(false),
    m_instanceStatusHasBeenSet(false)
{
}

CoreInternalOutcome TaskVersionInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.InstanceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = value["InstanceVersion"].GetInt64();
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("VersionDesc") && !value["VersionDesc"].IsNull())
    {
        if (!value["VersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.VersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionDesc = string(value["VersionDesc"].GetString());
        m_versionDescHasBeenSet = true;
    }

    if (value.HasMember("ChangeType") && !value["ChangeType"].IsNull())
    {
        if (!value["ChangeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.ChangeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changeType = value["ChangeType"].GetInt64();
        m_changeTypeHasBeenSet = true;
    }

    if (value.HasMember("SubmitterUin") && !value["SubmitterUin"].IsNull())
    {
        if (!value["SubmitterUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.SubmitterUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitterUin = string(value["SubmitterUin"].GetString());
        m_submitterUinHasBeenSet = true;
    }

    if (value.HasMember("InstanceDate") && !value["InstanceDate"].IsNull())
    {
        if (!value["InstanceDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.InstanceDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDate = string(value["InstanceDate"].GetString());
        m_instanceDateHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionInstance.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskVersionInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceVersion, allocator);
    }

    if (m_versionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_changeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changeType, allocator);
    }

    if (m_submitterUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitterUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitterUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDate.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

}


int64_t TaskVersionInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void TaskVersionInstance::SetInstanceVersion(const int64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool TaskVersionInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string TaskVersionInstance::GetVersionDesc() const
{
    return m_versionDesc;
}

void TaskVersionInstance::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool TaskVersionInstance::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

int64_t TaskVersionInstance::GetChangeType() const
{
    return m_changeType;
}

void TaskVersionInstance::SetChangeType(const int64_t& _changeType)
{
    m_changeType = _changeType;
    m_changeTypeHasBeenSet = true;
}

bool TaskVersionInstance::ChangeTypeHasBeenSet() const
{
    return m_changeTypeHasBeenSet;
}

string TaskVersionInstance::GetSubmitterUin() const
{
    return m_submitterUin;
}

void TaskVersionInstance::SetSubmitterUin(const string& _submitterUin)
{
    m_submitterUin = _submitterUin;
    m_submitterUinHasBeenSet = true;
}

bool TaskVersionInstance::SubmitterUinHasBeenSet() const
{
    return m_submitterUinHasBeenSet;
}

string TaskVersionInstance::GetInstanceDate() const
{
    return m_instanceDate;
}

void TaskVersionInstance::SetInstanceDate(const string& _instanceDate)
{
    m_instanceDate = _instanceDate;
    m_instanceDateHasBeenSet = true;
}

bool TaskVersionInstance::InstanceDateHasBeenSet() const
{
    return m_instanceDateHasBeenSet;
}

int64_t TaskVersionInstance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void TaskVersionInstance::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool TaskVersionInstance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

