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

#include <tencentcloud/dbbrain/v20210527/model/DescribeTableSpaceDataV2Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeTableSpaceDataV2Response::DescribeTableSpaceDataV2Response() :
    m_mysqlTableSpaceDataHasBeenSet(false),
    m_postgresTableSpaceDataHasBeenSet(false),
    m_mongodbTableSpaceDataHasBeenSet(false),
    m_sqlServerTableSpaceDataHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTableSpaceDataV2Response::Deserialize(const string &payload)
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


    if (rsp.HasMember("MysqlTableSpaceData") && !rsp["MysqlTableSpaceData"].IsNull())
    {
        if (!rsp["MysqlTableSpaceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlTableSpaceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mysqlTableSpaceData.Deserialize(rsp["MysqlTableSpaceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mysqlTableSpaceDataHasBeenSet = true;
    }

    if (rsp.HasMember("PostgresTableSpaceData") && !rsp["PostgresTableSpaceData"].IsNull())
    {
        if (!rsp["PostgresTableSpaceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresTableSpaceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postgresTableSpaceData.Deserialize(rsp["PostgresTableSpaceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postgresTableSpaceDataHasBeenSet = true;
    }

    if (rsp.HasMember("MongodbTableSpaceData") && !rsp["MongodbTableSpaceData"].IsNull())
    {
        if (!rsp["MongodbTableSpaceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbTableSpaceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mongodbTableSpaceData.Deserialize(rsp["MongodbTableSpaceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mongodbTableSpaceDataHasBeenSet = true;
    }

    if (rsp.HasMember("SqlServerTableSpaceData") && !rsp["SqlServerTableSpaceData"].IsNull())
    {
        if (!rsp["SqlServerTableSpaceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SqlServerTableSpaceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sqlServerTableSpaceData.Deserialize(rsp["SqlServerTableSpaceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sqlServerTableSpaceDataHasBeenSet = true;
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

string DescribeTableSpaceDataV2Response::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mysqlTableSpaceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlTableSpaceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mysqlTableSpaceData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postgresTableSpaceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgresTableSpaceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgresTableSpaceData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mongodbTableSpaceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongodbTableSpaceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongodbTableSpaceData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sqlServerTableSpaceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlServerTableSpaceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sqlServerTableSpaceData.ToJsonObject(value[key.c_str()], allocator);
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


MysqlSpaceObjectItem DescribeTableSpaceDataV2Response::GetMysqlTableSpaceData() const
{
    return m_mysqlTableSpaceData;
}

bool DescribeTableSpaceDataV2Response::MysqlTableSpaceDataHasBeenSet() const
{
    return m_mysqlTableSpaceDataHasBeenSet;
}

PostgresSpaceObjectItem DescribeTableSpaceDataV2Response::GetPostgresTableSpaceData() const
{
    return m_postgresTableSpaceData;
}

bool DescribeTableSpaceDataV2Response::PostgresTableSpaceDataHasBeenSet() const
{
    return m_postgresTableSpaceDataHasBeenSet;
}

MongodbSpaceObjectItem DescribeTableSpaceDataV2Response::GetMongodbTableSpaceData() const
{
    return m_mongodbTableSpaceData;
}

bool DescribeTableSpaceDataV2Response::MongodbTableSpaceDataHasBeenSet() const
{
    return m_mongodbTableSpaceDataHasBeenSet;
}

SqlServerSpaceObjectItem DescribeTableSpaceDataV2Response::GetSqlServerTableSpaceData() const
{
    return m_sqlServerTableSpaceData;
}

bool DescribeTableSpaceDataV2Response::SqlServerTableSpaceDataHasBeenSet() const
{
    return m_sqlServerTableSpaceDataHasBeenSet;
}

int64_t DescribeTableSpaceDataV2Response::GetTimestamp() const
{
    return m_timestamp;
}

bool DescribeTableSpaceDataV2Response::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}


