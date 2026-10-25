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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEPercentileResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMSSEPercentileResponse::DescribeTDEMSSEPercentileResponse() :
    m_intervalSecHasBeenSet(false),
    m_averageHasBeenSet(false),
    m_p50HasBeenSet(false),
    m_p75HasBeenSet(false),
    m_p95HasBeenSet(false),
    m_p99HasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMSSEPercentileResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IntervalSec") && !rsp["IntervalSec"].IsNull())
    {
        if (!rsp["IntervalSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntervalSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalSec = rsp["IntervalSec"].GetInt64();
        m_intervalSecHasBeenSet = true;
    }

    if (rsp.HasMember("Average") && !rsp["Average"].IsNull())
    {
        if (!rsp["Average"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Average` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_average = rsp["Average"].GetDouble();
        m_averageHasBeenSet = true;
    }

    if (rsp.HasMember("P50") && !rsp["P50"].IsNull())
    {
        if (!rsp["P50"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P50` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p50 = rsp["P50"].GetDouble();
        m_p50HasBeenSet = true;
    }

    if (rsp.HasMember("P75") && !rsp["P75"].IsNull())
    {
        if (!rsp["P75"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P75` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p75 = rsp["P75"].GetDouble();
        m_p75HasBeenSet = true;
    }

    if (rsp.HasMember("P95") && !rsp["P95"].IsNull())
    {
        if (!rsp["P95"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P95` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95 = rsp["P95"].GetDouble();
        m_p95HasBeenSet = true;
    }

    if (rsp.HasMember("P99") && !rsp["P99"].IsNull())
    {
        if (!rsp["P99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p99 = rsp["P99"].GetDouble();
        m_p99HasBeenSet = true;
    }

    if (rsp.HasMember("Points") && !rsp["Points"].IsNull())
    {
        if (!rsp["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Points` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TDEMSSEPercentilePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMSSEPercentileResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_intervalSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalSec, allocator);
    }

    if (m_averageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Average";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_average, allocator);
    }

    if (m_p50HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P50";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p50, allocator);
    }

    if (m_p75HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P75";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p75, allocator);
    }

    if (m_p95HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p95, allocator);
    }

    if (m_p99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p99, allocator);
    }

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
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


int64_t DescribeTDEMSSEPercentileResponse::GetIntervalSec() const
{
    return m_intervalSec;
}

bool DescribeTDEMSSEPercentileResponse::IntervalSecHasBeenSet() const
{
    return m_intervalSecHasBeenSet;
}

double DescribeTDEMSSEPercentileResponse::GetAverage() const
{
    return m_average;
}

bool DescribeTDEMSSEPercentileResponse::AverageHasBeenSet() const
{
    return m_averageHasBeenSet;
}

double DescribeTDEMSSEPercentileResponse::GetP50() const
{
    return m_p50;
}

bool DescribeTDEMSSEPercentileResponse::P50HasBeenSet() const
{
    return m_p50HasBeenSet;
}

double DescribeTDEMSSEPercentileResponse::GetP75() const
{
    return m_p75;
}

bool DescribeTDEMSSEPercentileResponse::P75HasBeenSet() const
{
    return m_p75HasBeenSet;
}

double DescribeTDEMSSEPercentileResponse::GetP95() const
{
    return m_p95;
}

bool DescribeTDEMSSEPercentileResponse::P95HasBeenSet() const
{
    return m_p95HasBeenSet;
}

double DescribeTDEMSSEPercentileResponse::GetP99() const
{
    return m_p99;
}

bool DescribeTDEMSSEPercentileResponse::P99HasBeenSet() const
{
    return m_p99HasBeenSet;
}

vector<TDEMSSEPercentilePoint> DescribeTDEMSSEPercentileResponse::GetPoints() const
{
    return m_points;
}

bool DescribeTDEMSSEPercentileResponse::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}


