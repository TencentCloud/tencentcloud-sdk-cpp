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

#include <tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeUsageRankListResponse::DescribeUsageRankListResponse() :
    m_dimensionHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_metricKeysHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_topListHasBeenSet(false),
    m_pageStatsHasBeenSet(false),
    m_totalStatsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUsageRankListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Dimension") && !rsp["Dimension"].IsNull())
    {
        if (!rsp["Dimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimension = string(rsp["Dimension"].GetString());
        m_dimensionHasBeenSet = true;
    }

    if (rsp.HasMember("MetricType") && !rsp["MetricType"].IsNull())
    {
        if (!rsp["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(rsp["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MetricKeys") && !rsp["MetricKeys"].IsNull())
    {
        if (!rsp["MetricKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricKeys` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MetricKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metricKeys.push_back((*itr).GetString());
        }
        m_metricKeysHasBeenSet = true;
    }

    if (rsp.HasMember("ViewName") && !rsp["ViewName"].IsNull())
    {
        if (!rsp["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(rsp["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
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

    if (rsp.HasMember("Timestamps") && !rsp["Timestamps"].IsNull())
    {
        if (!rsp["Timestamps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Timestamps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Timestamps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamps.push_back((*itr).GetInt64());
        }
        m_timestampsHasBeenSet = true;
    }

    if (rsp.HasMember("TopList") && !rsp["TopList"].IsNull())
    {
        if (!rsp["TopList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageRankItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topList.push_back(item);
        }
        m_topListHasBeenSet = true;
    }

    if (rsp.HasMember("PageStats") && !rsp["PageStats"].IsNull())
    {
        if (!rsp["PageStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PageStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pageStats.Deserialize(rsp["PageStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pageStatsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalStats") && !rsp["TotalStats"].IsNull())
    {
        if (!rsp["TotalStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TotalStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalStats.Deserialize(rsp["TotalStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalStatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUsageRankListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricKeys.begin(); itr != m_metricKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
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

    if (m_timestampsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamps.begin(); itr != m_timestamps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_topListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topList.begin(); itr != m_topList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageStats.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalStats.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeUsageRankListResponse::GetDimension() const
{
    return m_dimension;
}

bool DescribeUsageRankListResponse::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeUsageRankListResponse::GetMetricType() const
{
    return m_metricType;
}

bool DescribeUsageRankListResponse::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

vector<string> DescribeUsageRankListResponse::GetMetricKeys() const
{
    return m_metricKeys;
}

bool DescribeUsageRankListResponse::MetricKeysHasBeenSet() const
{
    return m_metricKeysHasBeenSet;
}

string DescribeUsageRankListResponse::GetViewName() const
{
    return m_viewName;
}

bool DescribeUsageRankListResponse::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

int64_t DescribeUsageRankListResponse::GetPeriod() const
{
    return m_period;
}

bool DescribeUsageRankListResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeUsageRankListResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeUsageRankListResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeUsageRankListResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeUsageRankListResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeUsageRankListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeUsageRankListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeUsageRankListResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeUsageRankListResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeUsageRankListResponse::GetLimit() const
{
    return m_limit;
}

bool DescribeUsageRankListResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeUsageRankListResponse::GetTimestamps() const
{
    return m_timestamps;
}

bool DescribeUsageRankListResponse::TimestampsHasBeenSet() const
{
    return m_timestampsHasBeenSet;
}

vector<UsageRankItem> DescribeUsageRankListResponse::GetTopList() const
{
    return m_topList;
}

bool DescribeUsageRankListResponse::TopListHasBeenSet() const
{
    return m_topListHasBeenSet;
}

UsageStats DescribeUsageRankListResponse::GetPageStats() const
{
    return m_pageStats;
}

bool DescribeUsageRankListResponse::PageStatsHasBeenSet() const
{
    return m_pageStatsHasBeenSet;
}

UsageStats DescribeUsageRankListResponse::GetTotalStats() const
{
    return m_totalStats;
}

bool DescribeUsageRankListResponse::TotalStatsHasBeenSet() const
{
    return m_totalStatsHasBeenSet;
}


