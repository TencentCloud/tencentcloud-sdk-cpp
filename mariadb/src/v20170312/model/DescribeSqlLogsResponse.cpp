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

#include <tencentcloud/mariadb/v20170312/model/DescribeSqlLogsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeSqlLogsResponse::DescribeSqlLogsResponse() :
    m_totalCountHasBeenSet(false),
    m_startOffsetHasBeenSet(false),
    m_endOffsetHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sqlItemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSqlLogsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("StartOffset") && !rsp["StartOffset"].IsNull())
    {
        if (!rsp["StartOffset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StartOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startOffset = rsp["StartOffset"].GetUint64();
        m_startOffsetHasBeenSet = true;
    }

    if (rsp.HasMember("EndOffset") && !rsp["EndOffset"].IsNull())
    {
        if (!rsp["EndOffset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EndOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endOffset = rsp["EndOffset"].GetUint64();
        m_endOffsetHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (rsp.HasMember("SqlItems") && !rsp["SqlItems"].IsNull())
    {
        if (!rsp["SqlItems"].IsArray())
            return CoreInternalOutcome(Error("response `SqlItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SqlItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlLogItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sqlItems.push_back(item);
        }
        m_sqlItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSqlLogsResponse::ToJsonString() const
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

    if (m_startOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startOffset, allocator);
    }

    if (m_endOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endOffset, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_sqlItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sqlItems.begin(); itr != m_sqlItems.end(); ++itr, ++i)
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


uint64_t DescribeSqlLogsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeSqlLogsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeSqlLogsResponse::GetStartOffset() const
{
    return m_startOffset;
}

bool DescribeSqlLogsResponse::StartOffsetHasBeenSet() const
{
    return m_startOffsetHasBeenSet;
}

uint64_t DescribeSqlLogsResponse::GetEndOffset() const
{
    return m_endOffset;
}

bool DescribeSqlLogsResponse::EndOffsetHasBeenSet() const
{
    return m_endOffsetHasBeenSet;
}

uint64_t DescribeSqlLogsResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeSqlLogsResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSqlLogsResponse::GetCount() const
{
    return m_count;
}

bool DescribeSqlLogsResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<SqlLogItem> DescribeSqlLogsResponse::GetSqlItems() const
{
    return m_sqlItems;
}

bool DescribeSqlLogsResponse::SqlItemsHasBeenSet() const
{
    return m_sqlItemsHasBeenSet;
}


