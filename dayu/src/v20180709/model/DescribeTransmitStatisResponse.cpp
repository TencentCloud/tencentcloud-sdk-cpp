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

#include <tencentcloud/dayu/v20180709/model/DescribeTransmitStatisResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeTransmitStatisResponse::DescribeTransmitStatisResponse() :
    m_inDataListHasBeenSet(false),
    m_outDataListHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTransmitStatisResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InDataList") && !rsp["InDataList"].IsNull())
    {
        if (!rsp["InDataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InDataList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InDataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inDataList.push_back((*itr).GetDouble());
        }
        m_inDataListHasBeenSet = true;
    }

    if (rsp.HasMember("OutDataList") && !rsp["OutDataList"].IsNull())
    {
        if (!rsp["OutDataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutDataList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OutDataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outDataList.push_back((*itr).GetDouble());
        }
        m_outDataListHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeTransmitStatisResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_inDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inDataList.begin(); itr != m_inDataList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_outDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outDataList.begin(); itr != m_outDataList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
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


vector<double> DescribeTransmitStatisResponse::GetInDataList() const
{
    return m_inDataList;
}

bool DescribeTransmitStatisResponse::InDataListHasBeenSet() const
{
    return m_inDataListHasBeenSet;
}

vector<double> DescribeTransmitStatisResponse::GetOutDataList() const
{
    return m_outDataList;
}

bool DescribeTransmitStatisResponse::OutDataListHasBeenSet() const
{
    return m_outDataListHasBeenSet;
}

string DescribeTransmitStatisResponse::GetMetricName() const
{
    return m_metricName;
}

bool DescribeTransmitStatisResponse::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}


