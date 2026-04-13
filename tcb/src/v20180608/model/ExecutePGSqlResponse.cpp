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

#include <tencentcloud/tcb/v20180608/model/ExecutePGSqlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ExecutePGSqlResponse::ExecutePGSqlResponse() :
    m_affectedRowsHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_executionTimeMsHasBeenSet(false)
{
}

CoreInternalOutcome ExecutePGSqlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AffectedRows") && !rsp["AffectedRows"].IsNull())
    {
        if (!rsp["AffectedRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedRows = rsp["AffectedRows"].GetInt64();
        m_affectedRowsHasBeenSet = true;
    }

    if (rsp.HasMember("Columns") && !rsp["Columns"].IsNull())
    {
        if (!rsp["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Columns` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columns.push_back((*itr).GetString());
        }
        m_columnsHasBeenSet = true;
    }

    if (rsp.HasMember("Rows") && !rsp["Rows"].IsNull())
    {
        if (!rsp["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rows` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rows.push_back((*itr).GetString());
        }
        m_rowsHasBeenSet = true;
    }

    if (rsp.HasMember("ExecutionTimeMs") && !rsp["ExecutionTimeMs"].IsNull())
    {
        if (!rsp["ExecutionTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTimeMs = rsp["ExecutionTimeMs"].GetInt64();
        m_executionTimeMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ExecutePGSqlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_affectedRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedRows, allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_executionTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionTimeMs, allocator);
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


int64_t ExecutePGSqlResponse::GetAffectedRows() const
{
    return m_affectedRows;
}

bool ExecutePGSqlResponse::AffectedRowsHasBeenSet() const
{
    return m_affectedRowsHasBeenSet;
}

vector<string> ExecutePGSqlResponse::GetColumns() const
{
    return m_columns;
}

bool ExecutePGSqlResponse::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<string> ExecutePGSqlResponse::GetRows() const
{
    return m_rows;
}

bool ExecutePGSqlResponse::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

int64_t ExecutePGSqlResponse::GetExecutionTimeMs() const
{
    return m_executionTimeMs;
}

bool ExecutePGSqlResponse::ExecutionTimeMsHasBeenSet() const
{
    return m_executionTimeMsHasBeenSet;
}


