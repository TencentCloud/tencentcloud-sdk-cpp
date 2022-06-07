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

#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailStructuredResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeDatasetDetailStructuredResponse::DescribeDatasetDetailStructuredResponse() :
    m_totalCountHasBeenSet(false),
    m_columnNamesHasBeenSet(false),
    m_rowItemsHasBeenSet(false),
    m_rowTextsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatasetDetailStructuredResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
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

    if (rsp.HasMember("RowItems") && !rsp["RowItems"].IsNull())
    {
        if (!rsp["RowItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RowItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RowItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RowItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rowItems.push_back(item);
        }
        m_rowItemsHasBeenSet = true;
    }

    if (rsp.HasMember("RowTexts") && !rsp["RowTexts"].IsNull())
    {
        if (!rsp["RowTexts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RowTexts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RowTexts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rowTexts.push_back((*itr).GetString());
        }
        m_rowTextsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDatasetDetailStructuredResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

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

    if (m_rowItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rowItems.begin(); itr != m_rowItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rowTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rowTexts.begin(); itr != m_rowTexts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t DescribeDatasetDetailStructuredResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDatasetDetailStructuredResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> DescribeDatasetDetailStructuredResponse::GetColumnNames() const
{
    return m_columnNames;
}

bool DescribeDatasetDetailStructuredResponse::ColumnNamesHasBeenSet() const
{
    return m_columnNamesHasBeenSet;
}

vector<RowItem> DescribeDatasetDetailStructuredResponse::GetRowItems() const
{
    return m_rowItems;
}

bool DescribeDatasetDetailStructuredResponse::RowItemsHasBeenSet() const
{
    return m_rowItemsHasBeenSet;
}

vector<string> DescribeDatasetDetailStructuredResponse::GetRowTexts() const
{
    return m_rowTexts;
}

bool DescribeDatasetDetailStructuredResponse::RowTextsHasBeenSet() const
{
    return m_rowTextsHasBeenSet;
}


