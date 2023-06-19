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

#include <tencentcloud/cynosdb/v20190107/model/ProxyConnectionPoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyConnectionPoolInfo::ProxyConnectionPoolInfo() :
    m_connectionPoolTimeOutHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyConnectionPoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectionPoolTimeOut") && !value["ConnectionPoolTimeOut"].IsNull())
    {
        if (!value["ConnectionPoolTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConnectionPoolInfo.ConnectionPoolTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolTimeOut = value["ConnectionPoolTimeOut"].GetInt64();
        m_connectionPoolTimeOutHasBeenSet = true;
    }

    if (value.HasMember("OpenConnectionPool") && !value["OpenConnectionPool"].IsNull())
    {
        if (!value["OpenConnectionPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConnectionPoolInfo.OpenConnectionPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openConnectionPool = string(value["OpenConnectionPool"].GetString());
        m_openConnectionPoolHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolType") && !value["ConnectionPoolType"].IsNull())
    {
        if (!value["ConnectionPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConnectionPoolInfo.ConnectionPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolType = string(value["ConnectionPoolType"].GetString());
        m_connectionPoolTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyConnectionPoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectionPoolTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPoolTimeOut, allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openConnectionPool.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

}


int64_t ProxyConnectionPoolInfo::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void ProxyConnectionPoolInfo::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool ProxyConnectionPoolInfo::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}

string ProxyConnectionPoolInfo::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void ProxyConnectionPoolInfo::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool ProxyConnectionPoolInfo::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

string ProxyConnectionPoolInfo::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ProxyConnectionPoolInfo::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ProxyConnectionPoolInfo::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

