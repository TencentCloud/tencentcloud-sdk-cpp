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

#include <tencentcloud/postgres/v20170312/model/ProxyAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxyAddress::ProxyAddress() :
    m_addressIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_connectionPoolLimitHasBeenSet(false)
{
}

CoreInternalOutcome ProxyAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPool") && !value["ConnectionPool"].IsNull())
    {
        if (!value["ConnectionPool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ConnectionPool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPool = value["ConnectionPool"].GetBool();
        m_connectionPoolHasBeenSet = true;
    }

    if (value.HasMember("Routes") && !value["Routes"].IsNull())
    {
        if (!value["Routes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Routes` is not array type"));

        const rapidjson::Value &tmpValue = value["Routes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routes.push_back(item);
        }
        m_routesHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolLimit") && !value["ConnectionPoolLimit"].IsNull())
    {
        if (!value["ConnectionPoolLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ConnectionPoolLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolLimit = value["ConnectionPoolLimit"].GetUint64();
        m_connectionPoolLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPool, allocator);
    }

    if (m_routesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Routes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routes.begin(); itr != m_routes.end(); ++itr, ++i)
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

}


string ProxyAddress::GetAddressId() const
{
    return m_addressId;
}

void ProxyAddress::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool ProxyAddress::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string ProxyAddress::GetVip() const
{
    return m_vip;
}

void ProxyAddress::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ProxyAddress::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t ProxyAddress::GetVport() const
{
    return m_vport;
}

void ProxyAddress::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ProxyAddress::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string ProxyAddress::GetVpcId() const
{
    return m_vpcId;
}

void ProxyAddress::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ProxyAddress::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ProxyAddress::GetSubnetId() const
{
    return m_subnetId;
}

void ProxyAddress::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ProxyAddress::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ProxyAddress::GetDescription() const
{
    return m_description;
}

void ProxyAddress::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProxyAddress::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ProxyAddress::GetConnectionPool() const
{
    return m_connectionPool;
}

void ProxyAddress::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool ProxyAddress::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

vector<ProxyRoute> ProxyAddress::GetRoutes() const
{
    return m_routes;
}

void ProxyAddress::SetRoutes(const vector<ProxyRoute>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool ProxyAddress::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

uint64_t ProxyAddress::GetConnectionPoolLimit() const
{
    return m_connectionPoolLimit;
}

void ProxyAddress::SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit)
{
    m_connectionPoolLimit = _connectionPoolLimit;
    m_connectionPoolLimitHasBeenSet = true;
}

bool ProxyAddress::ConnectionPoolLimitHasBeenSet() const
{
    return m_connectionPoolLimitHasBeenSet;
}

