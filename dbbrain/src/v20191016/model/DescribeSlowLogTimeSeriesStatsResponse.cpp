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

#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace rapidjson;
using namespace std;

DescribeSlowLogTimeSeriesStatsResponse::DescribeSlowLogTimeSeriesStatsResponse() :
    m_periodHasBeenSet(false),
    m_timeSeriesHasBeenSet(false),
    m_seriesDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSlowLogTimeSeriesStatsResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSeries") && !rsp["TimeSeries"].IsNull())
    {
        if (!rsp["TimeSeries"].IsArray())
            return CoreInternalOutcome(Error("response `TimeSeries` is not array type"));

        const Value &tmpValue = rsp["TimeSeries"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeSlice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeSeries.push_back(item);
        }
        m_timeSeriesHasBeenSet = true;
    }

    if (rsp.HasMember("SeriesData") && !rsp["SeriesData"].IsNull())
    {
        if (!rsp["SeriesData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SeriesData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seriesData.Deserialize(rsp["SeriesData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seriesDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeSlowLogTimeSeriesStatsResponse::GetPeriod() const
{
    return m_period;
}

bool DescribeSlowLogTimeSeriesStatsResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<TimeSlice> DescribeSlowLogTimeSeriesStatsResponse::GetTimeSeries() const
{
    return m_timeSeries;
}

bool DescribeSlowLogTimeSeriesStatsResponse::TimeSeriesHasBeenSet() const
{
    return m_timeSeriesHasBeenSet;
}

MonitorMetricSeriesData DescribeSlowLogTimeSeriesStatsResponse::GetSeriesData() const
{
    return m_seriesData;
}

bool DescribeSlowLogTimeSeriesStatsResponse::SeriesDataHasBeenSet() const
{
    return m_seriesDataHasBeenSet;
}


