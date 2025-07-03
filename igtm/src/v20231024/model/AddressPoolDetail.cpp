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

#include <tencentcloud/igtm/v20231024/model/AddressPoolDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

AddressPoolDetail::AddressPoolDetail() :
    m_poolIdHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_addrTypeHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false),
    m_monitorIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome AddressPoolDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PoolId") && !value["PoolId"].IsNull())
    {
        if (!value["PoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.PoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = value["PoolId"].GetUint64();
        m_poolIdHasBeenSet = true;
    }

    if (value.HasMember("PoolName") && !value["PoolName"].IsNull())
    {
        if (!value["PoolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.PoolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poolName = string(value["PoolName"].GetString());
        m_poolNameHasBeenSet = true;
    }

    if (value.HasMember("AddrType") && !value["AddrType"].IsNull())
    {
        if (!value["AddrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.AddrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addrType = string(value["AddrType"].GetString());
        m_addrTypeHasBeenSet = true;
    }

    if (value.HasMember("TrafficStrategy") && !value["TrafficStrategy"].IsNull())
    {
        if (!value["TrafficStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.TrafficStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficStrategy = string(value["TrafficStrategy"].GetString());
        m_trafficStrategyHasBeenSet = true;
    }

    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.MonitorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = value["MonitorId"].GetUint64();
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressPoolDetail.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressPoolDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


uint64_t AddressPoolDetail::GetPoolId() const
{
    return m_poolId;
}

void AddressPoolDetail::SetPoolId(const uint64_t& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool AddressPoolDetail::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

string AddressPoolDetail::GetPoolName() const
{
    return m_poolName;
}

void AddressPoolDetail::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool AddressPoolDetail::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

string AddressPoolDetail::GetAddrType() const
{
    return m_addrType;
}

void AddressPoolDetail::SetAddrType(const string& _addrType)
{
    m_addrType = _addrType;
    m_addrTypeHasBeenSet = true;
}

bool AddressPoolDetail::AddrTypeHasBeenSet() const
{
    return m_addrTypeHasBeenSet;
}

string AddressPoolDetail::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void AddressPoolDetail::SetTrafficStrategy(const string& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool AddressPoolDetail::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

uint64_t AddressPoolDetail::GetMonitorId() const
{
    return m_monitorId;
}

void AddressPoolDetail::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool AddressPoolDetail::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string AddressPoolDetail::GetCreatedOn() const
{
    return m_createdOn;
}

void AddressPoolDetail::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool AddressPoolDetail::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string AddressPoolDetail::GetUpdatedOn() const
{
    return m_updatedOn;
}

void AddressPoolDetail::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool AddressPoolDetail::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

