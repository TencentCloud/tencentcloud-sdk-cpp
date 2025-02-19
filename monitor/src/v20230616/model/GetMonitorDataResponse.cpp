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

#include <tencentcloud/monitor/v20230616/model/GetMonitorDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

GetMonitorDataResponse::GetMonitorDataResponse() :
    m_periodHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dataPointsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_msgHasBeenSet(false)
{
}

CoreInternalOutcome GetMonitorDataResponse::Deserialize(const string &payload)
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
        if (!rsp["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("MetricName") && !rsp["MetricName"].IsNull())
    {
        if (!rsp["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(rsp["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (rsp.HasMember("DataPoints") && !rsp["DataPoints"].IsNull())
    {
        if (!rsp["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataPoints.push_back(item);
        }
        m_dataPointsHasBeenSet = true;
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

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetMonitorDataResponse::ToJsonString() const
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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataPoints.begin(); itr != m_dataPoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
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


uint64_t GetMonitorDataResponse::GetPeriod() const
{
    return m_period;
}

bool GetMonitorDataResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string GetMonitorDataResponse::GetMetricName() const
{
    return m_metricName;
}

bool GetMonitorDataResponse::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<DataPoint> GetMonitorDataResponse::GetDataPoints() const
{
    return m_dataPoints;
}

bool GetMonitorDataResponse::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}

string GetMonitorDataResponse::GetStartTime() const
{
    return m_startTime;
}

bool GetMonitorDataResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetMonitorDataResponse::GetEndTime() const
{
    return m_endTime;
}

bool GetMonitorDataResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetMonitorDataResponse::GetMsg() const
{
    return m_msg;
}

bool GetMonitorDataResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}


