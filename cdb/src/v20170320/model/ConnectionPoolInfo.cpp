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

#include <tencentcloud/cdb/v20170320/model/ConnectionPoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ConnectionPoolInfo::ConnectionPoolInfo() :
    m_connectionPoolHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_poolConnectionTimeOutHasBeenSet(false)
{
}

CoreInternalOutcome ConnectionPoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectionPool") && !value["ConnectionPool"].IsNull())
    {
        if (!value["ConnectionPool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionPoolInfo.ConnectionPool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPool = value["ConnectionPool"].GetBool();
        m_connectionPoolHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolType") && !value["ConnectionPoolType"].IsNull())
    {
        if (!value["ConnectionPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionPoolInfo.ConnectionPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolType = string(value["ConnectionPoolType"].GetString());
        m_connectionPoolTypeHasBeenSet = true;
    }

    if (value.HasMember("PoolConnectionTimeOut") && !value["PoolConnectionTimeOut"].IsNull())
    {
        if (!value["PoolConnectionTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionPoolInfo.PoolConnectionTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_poolConnectionTimeOut = value["PoolConnectionTimeOut"].GetInt64();
        m_poolConnectionTimeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectionPoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPool, allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_poolConnectionTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolConnectionTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolConnectionTimeOut, allocator);
    }

}


bool ConnectionPoolInfo::GetConnectionPool() const
{
    return m_connectionPool;
}

void ConnectionPoolInfo::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool ConnectionPoolInfo::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

string ConnectionPoolInfo::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ConnectionPoolInfo::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ConnectionPoolInfo::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

int64_t ConnectionPoolInfo::GetPoolConnectionTimeOut() const
{
    return m_poolConnectionTimeOut;
}

void ConnectionPoolInfo::SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut)
{
    m_poolConnectionTimeOut = _poolConnectionTimeOut;
    m_poolConnectionTimeOutHasBeenSet = true;
}

bool ConnectionPoolInfo::PoolConnectionTimeOutHasBeenSet() const
{
    return m_poolConnectionTimeOutHasBeenSet;
}

