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

#include <tencentcloud/cdb/v20170320/model/ModifyCDBProxyConnectionPoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyCDBProxyConnectionPoolRequest::ModifyCDBProxyConnectionPoolRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_poolConnectionTimeOutHasBeenSet(false)
{
}

string ModifyCDBProxyConnectionPoolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openConnectionPool, allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_poolConnectionTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolConnectionTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_poolConnectionTimeOut, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCDBProxyConnectionPoolRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyCDBProxyConnectionPoolRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyCDBProxyConnectionPoolRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

bool ModifyCDBProxyConnectionPoolRequest::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void ModifyCDBProxyConnectionPoolRequest::SetOpenConnectionPool(const bool& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool ModifyCDBProxyConnectionPoolRequest::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

string ModifyCDBProxyConnectionPoolRequest::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ModifyCDBProxyConnectionPoolRequest::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ModifyCDBProxyConnectionPoolRequest::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

int64_t ModifyCDBProxyConnectionPoolRequest::GetPoolConnectionTimeOut() const
{
    return m_poolConnectionTimeOut;
}

void ModifyCDBProxyConnectionPoolRequest::SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut)
{
    m_poolConnectionTimeOut = _poolConnectionTimeOut;
    m_poolConnectionTimeOutHasBeenSet = true;
}

bool ModifyCDBProxyConnectionPoolRequest::PoolConnectionTimeOutHasBeenSet() const
{
    return m_poolConnectionTimeOutHasBeenSet;
}


