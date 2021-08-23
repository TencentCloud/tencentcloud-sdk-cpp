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
using namespace std;

DescribeSlowLogTimeSeriesStatsResponse::DescribeSlowLogTimeSeriesStatsResponse() :
    m_periodHasBeenSet(false),
    m_timeSeriesHasBeenSet(false),
    m_seriesDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSlowLogTimeSeriesStatsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSeries") && !rsp["TimeSeries"].IsNull())
    {
        if (!rsp["TimeSeries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeSeries` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TimeSeries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `SeriesData` is not object type").SetRequestId(requestId));
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

string DescribeSlowLogTimeSeriesStatsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_timeSeriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSeries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeSeries.begin(); itr != m_timeSeries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_seriesDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seriesData.ToJsonObject(value[key.c_str()], allocator);
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


