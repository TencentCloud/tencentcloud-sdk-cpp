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

#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

DescribeInstanceNodeInfoResponse::DescribeInstanceNodeInfoResponse() :
    m_proxyCountHasBeenSet(false),
    m_proxyHasBeenSet(false),
    m_redisCountHasBeenSet(false),
    m_redisHasBeenSet(false),
    m_tendisCountHasBeenSet(false),
    m_tendisHasBeenSet(false),
    m_keeWiDBCountHasBeenSet(false),
    m_keeWiDBHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceNodeInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProxyCount") && !rsp["ProxyCount"].IsNull())
    {
        if (!rsp["ProxyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyCount = rsp["ProxyCount"].GetInt64();
        m_proxyCountHasBeenSet = true;
    }

    if (rsp.HasMember("Proxy") && !rsp["Proxy"].IsNull())
    {
        if (!rsp["Proxy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Proxy` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Proxy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxy.push_back(item);
        }
        m_proxyHasBeenSet = true;
    }

    if (rsp.HasMember("RedisCount") && !rsp["RedisCount"].IsNull())
    {
        if (!rsp["RedisCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisCount = rsp["RedisCount"].GetInt64();
        m_redisCountHasBeenSet = true;
    }

    if (rsp.HasMember("Redis") && !rsp["Redis"].IsNull())
    {
        if (!rsp["Redis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Redis` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Redis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RedisNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_redis.push_back(item);
        }
        m_redisHasBeenSet = true;
    }

    if (rsp.HasMember("TendisCount") && !rsp["TendisCount"].IsNull())
    {
        if (!rsp["TendisCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TendisCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tendisCount = rsp["TendisCount"].GetInt64();
        m_tendisCountHasBeenSet = true;
    }

    if (rsp.HasMember("Tendis") && !rsp["Tendis"].IsNull())
    {
        if (!rsp["Tendis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tendis` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tendis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tendis.push_back(item);
        }
        m_tendisHasBeenSet = true;
    }

    if (rsp.HasMember("KeeWiDBCount") && !rsp["KeeWiDBCount"].IsNull())
    {
        if (!rsp["KeeWiDBCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KeeWiDBCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keeWiDBCount = rsp["KeeWiDBCount"].GetInt64();
        m_keeWiDBCountHasBeenSet = true;
    }

    if (rsp.HasMember("KeeWiDB") && !rsp["KeeWiDB"].IsNull())
    {
        if (!rsp["KeeWiDB"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeeWiDB` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KeeWiDB"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keeWiDB.push_back(item);
        }
        m_keeWiDBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceNodeInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_proxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxy.begin(); itr != m_proxy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_redisCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisCount, allocator);
    }

    if (m_redisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redis.begin(); itr != m_redis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tendisCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TendisCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tendisCount, allocator);
    }

    if (m_tendisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tendis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tendis.begin(); itr != m_tendis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keeWiDBCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeeWiDBCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keeWiDBCount, allocator);
    }

    if (m_keeWiDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeeWiDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keeWiDB.begin(); itr != m_keeWiDB.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeInstanceNodeInfoResponse::GetProxyCount() const
{
    return m_proxyCount;
}

bool DescribeInstanceNodeInfoResponse::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

vector<ProxyNodeInfo> DescribeInstanceNodeInfoResponse::GetProxy() const
{
    return m_proxy;
}

bool DescribeInstanceNodeInfoResponse::ProxyHasBeenSet() const
{
    return m_proxyHasBeenSet;
}

int64_t DescribeInstanceNodeInfoResponse::GetRedisCount() const
{
    return m_redisCount;
}

bool DescribeInstanceNodeInfoResponse::RedisCountHasBeenSet() const
{
    return m_redisCountHasBeenSet;
}

vector<RedisNodeInfo> DescribeInstanceNodeInfoResponse::GetRedis() const
{
    return m_redis;
}

bool DescribeInstanceNodeInfoResponse::RedisHasBeenSet() const
{
    return m_redisHasBeenSet;
}

int64_t DescribeInstanceNodeInfoResponse::GetTendisCount() const
{
    return m_tendisCount;
}

bool DescribeInstanceNodeInfoResponse::TendisCountHasBeenSet() const
{
    return m_tendisCountHasBeenSet;
}

vector<InstanceNodeInfo> DescribeInstanceNodeInfoResponse::GetTendis() const
{
    return m_tendis;
}

bool DescribeInstanceNodeInfoResponse::TendisHasBeenSet() const
{
    return m_tendisHasBeenSet;
}

int64_t DescribeInstanceNodeInfoResponse::GetKeeWiDBCount() const
{
    return m_keeWiDBCount;
}

bool DescribeInstanceNodeInfoResponse::KeeWiDBCountHasBeenSet() const
{
    return m_keeWiDBCountHasBeenSet;
}

vector<InstanceNodeInfo> DescribeInstanceNodeInfoResponse::GetKeeWiDB() const
{
    return m_keeWiDB;
}

bool DescribeInstanceNodeInfoResponse::KeeWiDBHasBeenSet() const
{
    return m_keeWiDBHasBeenSet;
}


