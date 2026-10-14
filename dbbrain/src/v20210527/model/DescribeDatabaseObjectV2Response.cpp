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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDatabaseObjectV2Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDatabaseObjectV2Response::DescribeDatabaseObjectV2Response() :
    m_indexDDLsHasBeenSet(false),
    m_tableDDLHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_tableStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatabaseObjectV2Response::Deserialize(const string &payload)
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


    if (rsp.HasMember("IndexDDLs") && !rsp["IndexDDLs"].IsNull())
    {
        if (!rsp["IndexDDLs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexDDLs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IndexDDLs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndexDDLInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexDDLs.push_back(item);
        }
        m_indexDDLsHasBeenSet = true;
    }

    if (rsp.HasMember("TableDDL") && !rsp["TableDDL"].IsNull())
    {
        if (!rsp["TableDDL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableDDL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableDDL = string(rsp["TableDDL"].GetString());
        m_tableDDLHasBeenSet = true;
    }

    if (rsp.HasMember("TableName") && !rsp["TableName"].IsNull())
    {
        if (!rsp["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(rsp["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (rsp.HasMember("TableSchema") && !rsp["TableSchema"].IsNull())
    {
        if (!rsp["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(rsp["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (rsp.HasMember("TableStatistics") && !rsp["TableStatistics"].IsNull())
    {
        if (!rsp["TableStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableStatistics.Deserialize(rsp["TableStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDatabaseObjectV2Response::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_indexDDLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexDDLs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexDDLs.begin(); itr != m_indexDDLs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableDDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableDDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableDDL.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableStatistics.ToJsonObject(value[key.c_str()], allocator);
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


vector<IndexDDLInfo> DescribeDatabaseObjectV2Response::GetIndexDDLs() const
{
    return m_indexDDLs;
}

bool DescribeDatabaseObjectV2Response::IndexDDLsHasBeenSet() const
{
    return m_indexDDLsHasBeenSet;
}

string DescribeDatabaseObjectV2Response::GetTableDDL() const
{
    return m_tableDDL;
}

bool DescribeDatabaseObjectV2Response::TableDDLHasBeenSet() const
{
    return m_tableDDLHasBeenSet;
}

string DescribeDatabaseObjectV2Response::GetTableName() const
{
    return m_tableName;
}

bool DescribeDatabaseObjectV2Response::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeDatabaseObjectV2Response::GetTableSchema() const
{
    return m_tableSchema;
}

bool DescribeDatabaseObjectV2Response::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

TableStatistics DescribeDatabaseObjectV2Response::GetTableStatistics() const
{
    return m_tableStatistics;
}

bool DescribeDatabaseObjectV2Response::TableStatisticsHasBeenSet() const
{
    return m_tableStatisticsHasBeenSet;
}


