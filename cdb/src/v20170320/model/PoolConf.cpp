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

#include <tencentcloud/cdb/v20170320/model/PoolConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

PoolConf::PoolConf() :
    m_connectionPoolTypeHasBeenSet(false),
    m_maxPoolConnectionTimeOutHasBeenSet(false),
    m_minPoolConnectionTimeOutHasBeenSet(false)
{
}

CoreInternalOutcome PoolConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectionPoolType") && !value["ConnectionPoolType"].IsNull())
    {
        if (!value["ConnectionPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PoolConf.ConnectionPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolType = string(value["ConnectionPoolType"].GetString());
        m_connectionPoolTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxPoolConnectionTimeOut") && !value["MaxPoolConnectionTimeOut"].IsNull())
    {
        if (!value["MaxPoolConnectionTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolConf.MaxPoolConnectionTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPoolConnectionTimeOut = value["MaxPoolConnectionTimeOut"].GetInt64();
        m_maxPoolConnectionTimeOutHasBeenSet = true;
    }

    if (value.HasMember("MinPoolConnectionTimeOut") && !value["MinPoolConnectionTimeOut"].IsNull())
    {
        if (!value["MinPoolConnectionTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolConf.MinPoolConnectionTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minPoolConnectionTimeOut = value["MinPoolConnectionTimeOut"].GetInt64();
        m_minPoolConnectionTimeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PoolConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxPoolConnectionTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPoolConnectionTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPoolConnectionTimeOut, allocator);
    }

    if (m_minPoolConnectionTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPoolConnectionTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPoolConnectionTimeOut, allocator);
    }

}


string PoolConf::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void PoolConf::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool PoolConf::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

int64_t PoolConf::GetMaxPoolConnectionTimeOut() const
{
    return m_maxPoolConnectionTimeOut;
}

void PoolConf::SetMaxPoolConnectionTimeOut(const int64_t& _maxPoolConnectionTimeOut)
{
    m_maxPoolConnectionTimeOut = _maxPoolConnectionTimeOut;
    m_maxPoolConnectionTimeOutHasBeenSet = true;
}

bool PoolConf::MaxPoolConnectionTimeOutHasBeenSet() const
{
    return m_maxPoolConnectionTimeOutHasBeenSet;
}

int64_t PoolConf::GetMinPoolConnectionTimeOut() const
{
    return m_minPoolConnectionTimeOut;
}

void PoolConf::SetMinPoolConnectionTimeOut(const int64_t& _minPoolConnectionTimeOut)
{
    m_minPoolConnectionTimeOut = _minPoolConnectionTimeOut;
    m_minPoolConnectionTimeOutHasBeenSet = true;
}

bool PoolConf::MinPoolConnectionTimeOutHasBeenSet() const
{
    return m_minPoolConnectionTimeOutHasBeenSet;
}

