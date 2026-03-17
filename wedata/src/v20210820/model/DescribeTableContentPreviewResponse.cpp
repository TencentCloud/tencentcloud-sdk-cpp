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

#include <tencentcloud/wedata/v20210820/model/DescribeTableContentPreviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableContentPreviewResponse::DescribeTableContentPreviewResponse() :
    m_columnNamesHasBeenSet(false),
    m_tableRecordSetHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_asyncStateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTableContentPreviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ColumnNames") && !rsp["ColumnNames"].IsNull())
    {
        if (!rsp["ColumnNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ColumnNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columnNames.push_back((*itr).GetString());
        }
        m_columnNamesHasBeenSet = true;
    }

    if (rsp.HasMember("TableRecordSet") && !rsp["TableRecordSet"].IsNull())
    {
        if (!rsp["TableRecordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableRecordSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TableRecordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableRecordSet.push_back(item);
        }
        m_tableRecordSetHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncState") && !rsp["AsyncState"].IsNull())
    {
        if (!rsp["AsyncState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncState = rsp["AsyncState"].GetInt64();
        m_asyncStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTableContentPreviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_columnNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columnNames.begin(); itr != m_columnNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableRecordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRecordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableRecordSet.begin(); itr != m_tableRecordSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncState, allocator);
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


vector<string> DescribeTableContentPreviewResponse::GetColumnNames() const
{
    return m_columnNames;
}

bool DescribeTableContentPreviewResponse::ColumnNamesHasBeenSet() const
{
    return m_columnNamesHasBeenSet;
}

vector<TableRecord> DescribeTableContentPreviewResponse::GetTableRecordSet() const
{
    return m_tableRecordSet;
}

bool DescribeTableContentPreviewResponse::TableRecordSetHasBeenSet() const
{
    return m_tableRecordSetHasBeenSet;
}

string DescribeTableContentPreviewResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeTableContentPreviewResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeTableContentPreviewResponse::GetAsyncState() const
{
    return m_asyncState;
}

bool DescribeTableContentPreviewResponse::AsyncStateHasBeenSet() const
{
    return m_asyncStateHasBeenSet;
}


