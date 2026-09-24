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

#include <tencentcloud/dlc/v20210125/model/DescribeJobResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeJobResultResponse::DescribeJobResultResponse() :
    m_totalHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_totalRowsHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_truncatedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (rsp.HasMember("Columns") && !rsp["Columns"].IsNull())
    {
        if (!rsp["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Columns` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRows") && !rsp["TotalRows"].IsNull())
    {
        if (!rsp["TotalRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRows = rsp["TotalRows"].GetInt64();
        m_totalRowsHasBeenSet = true;
    }

    if (rsp.HasMember("Rows") && !rsp["Rows"].IsNull())
    {
        if (!rsp["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rows` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rows.push_back(item);
        }
        m_rowsHasBeenSet = true;
    }

    if (rsp.HasMember("Truncated") && !rsp["Truncated"].IsNull())
    {
        if (!rsp["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = rsp["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRows, allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
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


int64_t DescribeJobResultResponse::GetTotal() const
{
    return m_total;
}

bool DescribeJobResultResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string DescribeJobResultResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeJobResultResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeJobResultResponse::GetState() const
{
    return m_state;
}

bool DescribeJobResultResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DescribeJobResultResponse::GetMessage() const
{
    return m_message;
}

bool DescribeJobResultResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<ResultColumn> DescribeJobResultResponse::GetColumns() const
{
    return m_columns;
}

bool DescribeJobResultResponse::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

int64_t DescribeJobResultResponse::GetTotalRows() const
{
    return m_totalRows;
}

bool DescribeJobResultResponse::TotalRowsHasBeenSet() const
{
    return m_totalRowsHasBeenSet;
}

vector<ResultRow> DescribeJobResultResponse::GetRows() const
{
    return m_rows;
}

bool DescribeJobResultResponse::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

bool DescribeJobResultResponse::GetTruncated() const
{
    return m_truncated;
}

bool DescribeJobResultResponse::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}


