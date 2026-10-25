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

#include <tencentcloud/dbbrain/v20210527/model/DescribeBlockingTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeBlockingTrendResponse::DescribeBlockingTrendResponse() :
    m_granularityHasBeenSet(false),
    m_granularityMsHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBlockingTrendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Granularity") && !rsp["Granularity"].IsNull())
    {
        if (!rsp["Granularity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Granularity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_granularity = string(rsp["Granularity"].GetString());
        m_granularityHasBeenSet = true;
    }

    if (rsp.HasMember("GranularityMs") && !rsp["GranularityMs"].IsNull())
    {
        if (!rsp["GranularityMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GranularityMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_granularityMs = rsp["GranularityMs"].GetInt64();
        m_granularityMsHasBeenSet = true;
    }

    if (rsp.HasMember("DataPoints") && !rsp["DataPoints"].IsNull())
    {
        if (!rsp["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockingTrendPoint item;
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


    return CoreInternalOutcome(true);
}

string DescribeBlockingTrendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GranularityMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_granularityMs, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeBlockingTrendResponse::GetGranularity() const
{
    return m_granularity;
}

bool DescribeBlockingTrendResponse::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

int64_t DescribeBlockingTrendResponse::GetGranularityMs() const
{
    return m_granularityMs;
}

bool DescribeBlockingTrendResponse::GranularityMsHasBeenSet() const
{
    return m_granularityMsHasBeenSet;
}

vector<BlockingTrendPoint> DescribeBlockingTrendResponse::GetDataPoints() const
{
    return m_dataPoints;
}

bool DescribeBlockingTrendResponse::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}


