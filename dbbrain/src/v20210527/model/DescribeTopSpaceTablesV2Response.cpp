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

#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTablesV2Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeTopSpaceTablesV2Response::DescribeTopSpaceTablesV2Response() :
    m_mysqlObjectsHasBeenSet(false),
    m_postgresObjectsHasBeenSet(false),
    m_mongodbObjectsHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTopSpaceTablesV2Response::Deserialize(const string &payload)
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


    if (rsp.HasMember("MysqlObjects") && !rsp["MysqlObjects"].IsNull())
    {
        if (!rsp["MysqlObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MysqlObjects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MysqlObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MysqlSpaceObjectItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mysqlObjects.push_back(item);
        }
        m_mysqlObjectsHasBeenSet = true;
    }

    if (rsp.HasMember("PostgresObjects") && !rsp["PostgresObjects"].IsNull())
    {
        if (!rsp["PostgresObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostgresObjects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PostgresObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PostgresSpaceObjectItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_postgresObjects.push_back(item);
        }
        m_postgresObjectsHasBeenSet = true;
    }

    if (rsp.HasMember("MongodbObjects") && !rsp["MongodbObjects"].IsNull())
    {
        if (!rsp["MongodbObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongodbObjects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MongodbObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBTableSpaceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mongodbObjects.push_back(item);
        }
        m_mongodbObjectsHasBeenSet = true;
    }

    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = rsp["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTopSpaceTablesV2Response::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mysqlObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mysqlObjects.begin(); itr != m_mysqlObjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_postgresObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgresObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postgresObjects.begin(); itr != m_postgresObjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mongodbObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongodbObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mongodbObjects.begin(); itr != m_mongodbObjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
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


vector<MysqlSpaceObjectItem> DescribeTopSpaceTablesV2Response::GetMysqlObjects() const
{
    return m_mysqlObjects;
}

bool DescribeTopSpaceTablesV2Response::MysqlObjectsHasBeenSet() const
{
    return m_mysqlObjectsHasBeenSet;
}

vector<PostgresSpaceObjectItem> DescribeTopSpaceTablesV2Response::GetPostgresObjects() const
{
    return m_postgresObjects;
}

bool DescribeTopSpaceTablesV2Response::PostgresObjectsHasBeenSet() const
{
    return m_postgresObjectsHasBeenSet;
}

vector<MongoDBTableSpaceItem> DescribeTopSpaceTablesV2Response::GetMongodbObjects() const
{
    return m_mongodbObjects;
}

bool DescribeTopSpaceTablesV2Response::MongodbObjectsHasBeenSet() const
{
    return m_mongodbObjectsHasBeenSet;
}

int64_t DescribeTopSpaceTablesV2Response::GetTimestamp() const
{
    return m_timestamp;
}

bool DescribeTopSpaceTablesV2Response::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}


