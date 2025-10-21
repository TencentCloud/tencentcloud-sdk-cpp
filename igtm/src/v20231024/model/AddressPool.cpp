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

#include <tencentcloud/igtm/v20231024/model/AddressPool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

AddressPool::AddressPool() :
    m_poolIdHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_addrTypeHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false),
    m_monitorIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addressNumHasBeenSet(false),
    m_monitorGroupNumHasBeenSet(false),
    m_monitorTaskNumHasBeenSet(false),
    m_instanceInfoHasBeenSet(false),
    m_addressSetHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome AddressPool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PoolId") && !value["PoolId"].IsNull())
    {
        if (!value["PoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.PoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = value["PoolId"].GetUint64();
        m_poolIdHasBeenSet = true;
    }

    if (value.HasMember("PoolName") && !value["PoolName"].IsNull())
    {
        if (!value["PoolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.PoolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poolName = string(value["PoolName"].GetString());
        m_poolNameHasBeenSet = true;
    }

    if (value.HasMember("AddrType") && !value["AddrType"].IsNull())
    {
        if (!value["AddrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.AddrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addrType = string(value["AddrType"].GetString());
        m_addrTypeHasBeenSet = true;
    }

    if (value.HasMember("TrafficStrategy") && !value["TrafficStrategy"].IsNull())
    {
        if (!value["TrafficStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.TrafficStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficStrategy = string(value["TrafficStrategy"].GetString());
        m_trafficStrategyHasBeenSet = true;
    }

    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.MonitorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = value["MonitorId"].GetUint64();
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddressNum") && !value["AddressNum"].IsNull())
    {
        if (!value["AddressNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.AddressNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressNum = value["AddressNum"].GetInt64();
        m_addressNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorGroupNum") && !value["MonitorGroupNum"].IsNull())
    {
        if (!value["MonitorGroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.MonitorGroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorGroupNum = value["MonitorGroupNum"].GetInt64();
        m_monitorGroupNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorTaskNum") && !value["MonitorTaskNum"].IsNull())
    {
        if (!value["MonitorTaskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.MonitorTaskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorTaskNum = value["MonitorTaskNum"].GetInt64();
        m_monitorTaskNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddressPool.InstanceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceInfo.push_back(item);
        }
        m_instanceInfoHasBeenSet = true;
    }

    if (value.HasMember("AddressSet") && !value["AddressSet"].IsNull())
    {
        if (!value["AddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddressPool.AddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Address item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addressSet.push_back(item);
        }
        m_addressSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPool.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressPool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolId, allocator);
    }

    if (m_poolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poolName.c_str(), allocator).Move(), allocator);
    }

    if (m_addrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addrType.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressNum, allocator);
    }

    if (m_monitorGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorGroupNum, allocator);
    }

    if (m_monitorTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorTaskNum, allocator);
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInfo.begin(); itr != m_instanceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_addressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressSet.begin(); itr != m_addressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AddressPool::GetPoolId() const
{
    return m_poolId;
}

void AddressPool::SetPoolId(const uint64_t& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool AddressPool::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

string AddressPool::GetPoolName() const
{
    return m_poolName;
}

void AddressPool::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool AddressPool::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

string AddressPool::GetAddrType() const
{
    return m_addrType;
}

void AddressPool::SetAddrType(const string& _addrType)
{
    m_addrType = _addrType;
    m_addrTypeHasBeenSet = true;
}

bool AddressPool::AddrTypeHasBeenSet() const
{
    return m_addrTypeHasBeenSet;
}

string AddressPool::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void AddressPool::SetTrafficStrategy(const string& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool AddressPool::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

uint64_t AddressPool::GetMonitorId() const
{
    return m_monitorId;
}

void AddressPool::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool AddressPool::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string AddressPool::GetStatus() const
{
    return m_status;
}

void AddressPool::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AddressPool::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AddressPool::GetAddressNum() const
{
    return m_addressNum;
}

void AddressPool::SetAddressNum(const int64_t& _addressNum)
{
    m_addressNum = _addressNum;
    m_addressNumHasBeenSet = true;
}

bool AddressPool::AddressNumHasBeenSet() const
{
    return m_addressNumHasBeenSet;
}

int64_t AddressPool::GetMonitorGroupNum() const
{
    return m_monitorGroupNum;
}

void AddressPool::SetMonitorGroupNum(const int64_t& _monitorGroupNum)
{
    m_monitorGroupNum = _monitorGroupNum;
    m_monitorGroupNumHasBeenSet = true;
}

bool AddressPool::MonitorGroupNumHasBeenSet() const
{
    return m_monitorGroupNumHasBeenSet;
}

int64_t AddressPool::GetMonitorTaskNum() const
{
    return m_monitorTaskNum;
}

void AddressPool::SetMonitorTaskNum(const int64_t& _monitorTaskNum)
{
    m_monitorTaskNum = _monitorTaskNum;
    m_monitorTaskNumHasBeenSet = true;
}

bool AddressPool::MonitorTaskNumHasBeenSet() const
{
    return m_monitorTaskNumHasBeenSet;
}

vector<InstanceInfo> AddressPool::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void AddressPool::SetInstanceInfo(const vector<InstanceInfo>& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool AddressPool::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

vector<Address> AddressPool::GetAddressSet() const
{
    return m_addressSet;
}

void AddressPool::SetAddressSet(const vector<Address>& _addressSet)
{
    m_addressSet = _addressSet;
    m_addressSetHasBeenSet = true;
}

bool AddressPool::AddressSetHasBeenSet() const
{
    return m_addressSetHasBeenSet;
}

string AddressPool::GetCreatedOn() const
{
    return m_createdOn;
}

void AddressPool::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool AddressPool::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string AddressPool::GetUpdatedOn() const
{
    return m_updatedOn;
}

void AddressPool::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool AddressPool::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

