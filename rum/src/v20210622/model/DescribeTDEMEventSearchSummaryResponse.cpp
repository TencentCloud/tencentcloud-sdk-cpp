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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMEventSearchSummaryResponse::DescribeTDEMEventSearchSummaryResponse() :
    m_categoryCountsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_visitorsHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_intervalSecHasBeenSet(false),
    m_seriesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMEventSearchSummaryResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Visitors") && !rsp["Visitors"].IsNull())
    {
        if (!rsp["Visitors"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Visitors` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitors = rsp["Visitors"].GetInt64();
        m_visitorsHasBeenSet = true;
    }

    if (rsp.HasMember("Users") && !rsp["Users"].IsNull())
    {
        if (!rsp["Users"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Users` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_users = rsp["Users"].GetInt64();
        m_usersHasBeenSet = true;
    }

    if (rsp.HasMember("IntervalSec") && !rsp["IntervalSec"].IsNull())
    {
        if (!rsp["IntervalSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntervalSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalSec = rsp["IntervalSec"].GetInt64();
        m_intervalSecHasBeenSet = true;
    }

    if (rsp.HasMember("Series") && !rsp["Series"].IsNull())
    {
        if (!rsp["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Series` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventSearchSeriesPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_series.push_back(item);
        }
        m_seriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMEventSearchSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_visitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitors, allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_users, allocator);
    }

    if (m_intervalSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalSec, allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
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


vector<IntKeyValue> DescribeTDEMEventSearchSummaryResponse::GetCategoryCounts() const
{
    return m_categoryCounts;
}

bool DescribeTDEMEventSearchSummaryResponse::CategoryCountsHasBeenSet() const
{
    return m_categoryCountsHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryResponse::GetTotal() const
{
    return m_total;
}

bool DescribeTDEMEventSearchSummaryResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryResponse::GetVisitors() const
{
    return m_visitors;
}

bool DescribeTDEMEventSearchSummaryResponse::VisitorsHasBeenSet() const
{
    return m_visitorsHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryResponse::GetUsers() const
{
    return m_users;
}

bool DescribeTDEMEventSearchSummaryResponse::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryResponse::GetIntervalSec() const
{
    return m_intervalSec;
}

bool DescribeTDEMEventSearchSummaryResponse::IntervalSecHasBeenSet() const
{
    return m_intervalSecHasBeenSet;
}

vector<EventSearchSeriesPoint> DescribeTDEMEventSearchSummaryResponse::GetSeries() const
{
    return m_series;
}

bool DescribeTDEMEventSearchSummaryResponse::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}


