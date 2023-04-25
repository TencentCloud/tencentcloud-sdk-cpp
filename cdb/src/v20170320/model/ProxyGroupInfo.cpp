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

#include <tencentcloud/cdb/v20170320/model/ProxyGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyGroupInfo::ProxyGroupInfo() :
    m_proxyGroupIdHasBeenSet(false),
    m_proxyVersionHasBeenSet(false),
    m_supportUpgradeProxyVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_proxyNodeHasBeenSet(false),
    m_proxyAddressHasBeenSet(false),
    m_connectionPoolLimitHasBeenSet(false),
    m_supportCreateProxyAddressHasBeenSet(false),
    m_supportUpgradeProxyMysqlVersionHasBeenSet(false)
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

    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (value.HasMember("SupportUpgradeProxyVersion") && !value["SupportUpgradeProxyVersion"].IsNull())
    {
        if (!value["SupportUpgradeProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.SupportUpgradeProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportUpgradeProxyVersion = string(value["SupportUpgradeProxyVersion"].GetString());
        m_supportUpgradeProxyVersionHasBeenSet = true;
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

    if (value.HasMember("ProxyNode") && !value["ProxyNode"].IsNull())
    {
        if (!value["ProxyNode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyNode` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyNode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyNode.push_back(item);
        }
        m_proxyNodeHasBeenSet = true;
    }

    if (value.HasMember("ProxyAddress") && !value["ProxyAddress"].IsNull())
    {
        if (!value["ProxyAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyAddress.push_back(item);
        }
        m_proxyAddressHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolLimit") && !value["ConnectionPoolLimit"].IsNull())
    {
        if (!value["ConnectionPoolLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ConnectionPoolLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolLimit = value["ConnectionPoolLimit"].GetUint64();
        m_connectionPoolLimitHasBeenSet = true;
    }

    if (value.HasMember("SupportCreateProxyAddress") && !value["SupportCreateProxyAddress"].IsNull())
    {
        if (!value["SupportCreateProxyAddress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.SupportCreateProxyAddress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportCreateProxyAddress = value["SupportCreateProxyAddress"].GetBool();
        m_supportCreateProxyAddressHasBeenSet = true;
    }

    if (value.HasMember("SupportUpgradeProxyMysqlVersion") && !value["SupportUpgradeProxyMysqlVersion"].IsNull())
    {
        if (!value["SupportUpgradeProxyMysqlVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.SupportUpgradeProxyMysqlVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportUpgradeProxyMysqlVersion = string(value["SupportUpgradeProxyMysqlVersion"].GetString());
        m_supportUpgradeProxyMysqlVersionHasBeenSet = true;
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

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportUpgradeProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportUpgradeProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportUpgradeProxyVersion.c_str(), allocator).Move(), allocator);
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

    if (m_proxyNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNode.begin(); itr != m_proxyNode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyAddress.begin(); itr != m_proxyAddress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connectionPoolLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPoolLimit, allocator);
    }

    if (m_supportCreateProxyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportCreateProxyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportCreateProxyAddress, allocator);
    }

    if (m_supportUpgradeProxyMysqlVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportUpgradeProxyMysqlVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportUpgradeProxyMysqlVersion.c_str(), allocator).Move(), allocator);
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

string ProxyGroupInfo::GetSupportUpgradeProxyVersion() const
{
    return m_supportUpgradeProxyVersion;
}

void ProxyGroupInfo::SetSupportUpgradeProxyVersion(const string& _supportUpgradeProxyVersion)
{
    m_supportUpgradeProxyVersion = _supportUpgradeProxyVersion;
    m_supportUpgradeProxyVersionHasBeenSet = true;
}

bool ProxyGroupInfo::SupportUpgradeProxyVersionHasBeenSet() const
{
    return m_supportUpgradeProxyVersionHasBeenSet;
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

vector<ProxyNode> ProxyGroupInfo::GetProxyNode() const
{
    return m_proxyNode;
}

void ProxyGroupInfo::SetProxyNode(const vector<ProxyNode>& _proxyNode)
{
    m_proxyNode = _proxyNode;
    m_proxyNodeHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyNodeHasBeenSet() const
{
    return m_proxyNodeHasBeenSet;
}

vector<ProxyAddress> ProxyGroupInfo::GetProxyAddress() const
{
    return m_proxyAddress;
}

void ProxyGroupInfo::SetProxyAddress(const vector<ProxyAddress>& _proxyAddress)
{
    m_proxyAddress = _proxyAddress;
    m_proxyAddressHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyAddressHasBeenSet() const
{
    return m_proxyAddressHasBeenSet;
}

uint64_t ProxyGroupInfo::GetConnectionPoolLimit() const
{
    return m_connectionPoolLimit;
}

void ProxyGroupInfo::SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit)
{
    m_connectionPoolLimit = _connectionPoolLimit;
    m_connectionPoolLimitHasBeenSet = true;
}

bool ProxyGroupInfo::ConnectionPoolLimitHasBeenSet() const
{
    return m_connectionPoolLimitHasBeenSet;
}

bool ProxyGroupInfo::GetSupportCreateProxyAddress() const
{
    return m_supportCreateProxyAddress;
}

void ProxyGroupInfo::SetSupportCreateProxyAddress(const bool& _supportCreateProxyAddress)
{
    m_supportCreateProxyAddress = _supportCreateProxyAddress;
    m_supportCreateProxyAddressHasBeenSet = true;
}

bool ProxyGroupInfo::SupportCreateProxyAddressHasBeenSet() const
{
    return m_supportCreateProxyAddressHasBeenSet;
}

string ProxyGroupInfo::GetSupportUpgradeProxyMysqlVersion() const
{
    return m_supportUpgradeProxyMysqlVersion;
}

void ProxyGroupInfo::SetSupportUpgradeProxyMysqlVersion(const string& _supportUpgradeProxyMysqlVersion)
{
    m_supportUpgradeProxyMysqlVersion = _supportUpgradeProxyMysqlVersion;
    m_supportUpgradeProxyMysqlVersionHasBeenSet = true;
}

bool ProxyGroupInfo::SupportUpgradeProxyMysqlVersionHasBeenSet() const
{
    return m_supportUpgradeProxyMysqlVersionHasBeenSet;
}

