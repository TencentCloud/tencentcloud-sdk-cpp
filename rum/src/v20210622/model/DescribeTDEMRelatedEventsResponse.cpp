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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMRelatedEventsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMRelatedEventsResponse::DescribeTDEMRelatedEventsResponse() :
    m_eventsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_hasMoreHasBeenSet(false),
    m_categoryCountsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMRelatedEventsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Events") && !rsp["Events"].IsNull())
    {
        if (!rsp["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Events` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExplorationEventItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Limit") && !rsp["Limit"].IsNull())
    {
        if (!rsp["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = rsp["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (rsp.HasMember("HasMore") && !rsp["HasMore"].IsNull())
    {
        if (!rsp["HasMore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasMore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasMore = rsp["HasMore"].GetBool();
        m_hasMoreHasBeenSet = true;
    }

    if (rsp.HasMember("CategoryCounts") && !rsp["CategoryCounts"].IsNull())
    {
        if (!rsp["CategoryCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryCounts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CategoryCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryCounts.push_back(item);
        }
        m_categoryCountsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMRelatedEventsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_hasMoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasMore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasMore, allocator);
    }

    if (m_categoryCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryCounts.begin(); itr != m_categoryCounts.end(); ++itr, ++i)
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


vector<ExplorationEventItem> DescribeTDEMRelatedEventsResponse::GetEvents() const
{
    return m_events;
}

bool DescribeTDEMRelatedEventsResponse::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeTDEMRelatedEventsResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsResponse::GetLimit() const
{
    return m_limit;
}

bool DescribeTDEMRelatedEventsResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeTDEMRelatedEventsResponse::GetHasMore() const
{
    return m_hasMore;
}

bool DescribeTDEMRelatedEventsResponse::HasMoreHasBeenSet() const
{
    return m_hasMoreHasBeenSet;
}

vector<IntKeyValue> DescribeTDEMRelatedEventsResponse::GetCategoryCounts() const
{
    return m_categoryCounts;
}

bool DescribeTDEMRelatedEventsResponse::CategoryCountsHasBeenSet() const
{
    return m_categoryCountsHasBeenSet;
}


