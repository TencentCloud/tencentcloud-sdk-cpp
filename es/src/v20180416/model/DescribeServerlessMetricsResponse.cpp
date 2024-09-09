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

#include <tencentcloud/es/v20180416/model/DescribeServerlessMetricsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeServerlessMetricsResponse::DescribeServerlessMetricsResponse() :
    m_storageHasBeenSet(false),
    m_indexTrafficHasBeenSet(false),
    m_readReqTimesHasBeenSet(false),
    m_writeReqTimesHasBeenSet(false),
    m_docCountHasBeenSet(false),
    m_metricMapListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServerlessMetricsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Storage") && !rsp["Storage"].IsNull())
    {
        if (!rsp["Storage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Storage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storage = rsp["Storage"].GetDouble();
        m_storageHasBeenSet = true;
    }

    if (rsp.HasMember("IndexTraffic") && !rsp["IndexTraffic"].IsNull())
    {
        if (!rsp["IndexTraffic"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `IndexTraffic` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexTraffic = rsp["IndexTraffic"].GetDouble();
        m_indexTrafficHasBeenSet = true;
    }

    if (rsp.HasMember("ReadReqTimes") && !rsp["ReadReqTimes"].IsNull())
    {
        if (!rsp["ReadReqTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadReqTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readReqTimes = rsp["ReadReqTimes"].GetInt64();
        m_readReqTimesHasBeenSet = true;
    }

    if (rsp.HasMember("WriteReqTimes") && !rsp["WriteReqTimes"].IsNull())
    {
        if (!rsp["WriteReqTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WriteReqTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeReqTimes = rsp["WriteReqTimes"].GetInt64();
        m_writeReqTimesHasBeenSet = true;
    }

    if (rsp.HasMember("DocCount") && !rsp["DocCount"].IsNull())
    {
        if (!rsp["DocCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_docCount = rsp["DocCount"].GetInt64();
        m_docCountHasBeenSet = true;
    }

    if (rsp.HasMember("MetricMapList") && !rsp["MetricMapList"].IsNull())
    {
        if (!rsp["MetricMapList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricMapList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MetricMapList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricMapByIndexId item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricMapList.push_back(item);
        }
        m_metricMapListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServerlessMetricsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_indexTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexTraffic, allocator);
    }

    if (m_readReqTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadReqTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readReqTimes, allocator);
    }

    if (m_writeReqTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteReqTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeReqTimes, allocator);
    }

    if (m_docCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docCount, allocator);
    }

    if (m_metricMapListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricMapList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricMapList.begin(); itr != m_metricMapList.end(); ++itr, ++i)
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


double DescribeServerlessMetricsResponse::GetStorage() const
{
    return m_storage;
}

bool DescribeServerlessMetricsResponse::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

double DescribeServerlessMetricsResponse::GetIndexTraffic() const
{
    return m_indexTraffic;
}

bool DescribeServerlessMetricsResponse::IndexTrafficHasBeenSet() const
{
    return m_indexTrafficHasBeenSet;
}

int64_t DescribeServerlessMetricsResponse::GetReadReqTimes() const
{
    return m_readReqTimes;
}

bool DescribeServerlessMetricsResponse::ReadReqTimesHasBeenSet() const
{
    return m_readReqTimesHasBeenSet;
}

int64_t DescribeServerlessMetricsResponse::GetWriteReqTimes() const
{
    return m_writeReqTimes;
}

bool DescribeServerlessMetricsResponse::WriteReqTimesHasBeenSet() const
{
    return m_writeReqTimesHasBeenSet;
}

int64_t DescribeServerlessMetricsResponse::GetDocCount() const
{
    return m_docCount;
}

bool DescribeServerlessMetricsResponse::DocCountHasBeenSet() const
{
    return m_docCountHasBeenSet;
}

vector<MetricMapByIndexId> DescribeServerlessMetricsResponse::GetMetricMapList() const
{
    return m_metricMapList;
}

bool DescribeServerlessMetricsResponse::MetricMapListHasBeenSet() const
{
    return m_metricMapListHasBeenSet;
}


