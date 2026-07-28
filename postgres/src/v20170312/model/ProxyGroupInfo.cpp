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

#include <tencentcloud/postgres/v20170312/model/ProxyGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxyGroupInfo::ProxyGroupInfo() :
    m_proxyGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proxyVersionHasBeenSet(false),
    m_connectionPoolLimitHasBeenSet(false),
    m_proxyNodeSetHasBeenSet(false),
    m_proxyAddressSetHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyGroupId") && !value["ProxyGroupId"].IsNull())
    {
        if (!value["ProxyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyGroupId = string(value["ProxyGroupId"].GetString());
        m_proxyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolLimit") && !value["ConnectionPoolLimit"].IsNull())
    {
        if (!value["ConnectionPoolLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ConnectionPoolLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolLimit = value["ConnectionPoolLimit"].GetInt64();
        m_connectionPoolLimitHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeSet") && !value["ProxyNodeSet"].IsNull())
    {
        if (!value["ProxyNodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyNodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyNodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyNodeSet.push_back(item);
        }
        m_proxyNodeSetHasBeenSet = true;
    }

    if (value.HasMember("ProxyAddressSet") && !value["ProxyAddressSet"].IsNull())
    {
        if (!value["ProxyAddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyAddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyAddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyAddressSet.push_back(item);
        }
        m_proxyAddressSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPoolLimit, allocator);
    }

    if (m_proxyNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNodeSet.begin(); itr != m_proxyNodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyAddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyAddressSet.begin(); itr != m_proxyAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ProxyGroupInfo::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ProxyGroupInfo::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ProxyGroupInfo::GetStatus() const
{
    return m_status;
}

void ProxyGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyGroupInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void ProxyGroupInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool ProxyGroupInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string ProxyGroupInfo::GetDescription() const
{
    return m_description;
}

void ProxyGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProxyGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ProxyGroupInfo::GetProxyVersion() const
{
    return m_proxyVersion;
}

void ProxyGroupInfo::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

int64_t ProxyGroupInfo::GetConnectionPoolLimit() const
{
    return m_connectionPoolLimit;
}

void ProxyGroupInfo::SetConnectionPoolLimit(const int64_t& _connectionPoolLimit)
{
    m_connectionPoolLimit = _connectionPoolLimit;
    m_connectionPoolLimitHasBeenSet = true;
}

bool ProxyGroupInfo::ConnectionPoolLimitHasBeenSet() const
{
    return m_connectionPoolLimitHasBeenSet;
}

vector<ProxyNode> ProxyGroupInfo::GetProxyNodeSet() const
{
    return m_proxyNodeSet;
}

void ProxyGroupInfo::SetProxyNodeSet(const vector<ProxyNode>& _proxyNodeSet)
{
    m_proxyNodeSet = _proxyNodeSet;
    m_proxyNodeSetHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyNodeSetHasBeenSet() const
{
    return m_proxyNodeSetHasBeenSet;
}

vector<ProxyAddress> ProxyGroupInfo::GetProxyAddressSet() const
{
    return m_proxyAddressSet;
}

void ProxyGroupInfo::SetProxyAddressSet(const vector<ProxyAddress>& _proxyAddressSet)
{
    m_proxyAddressSet = _proxyAddressSet;
    m_proxyAddressSetHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyAddressSetHasBeenSet() const
{
    return m_proxyAddressSetHasBeenSet;
}

string ProxyGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProxyGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProxyGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

