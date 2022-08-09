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

#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBgpBizTrendResponse::DescribeBgpBizTrendResponse() :
    m_dataListHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_maxDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBgpBizTrendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataList") && !rsp["DataList"].IsNull())
    {
        if (!rsp["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataList.push_back((*itr).GetUint64());
        }
        m_dataListHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
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

    if (rsp.HasMember("MaxData") && !rsp["MaxData"].IsNull())
    {
        if (!rsp["MaxData"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxData` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxData = rsp["MaxData"].GetUint64();
        m_maxDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBgpBizTrendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxData, allocator);
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


vector<uint64_t> DescribeBgpBizTrendResponse::GetDataList() const
{
    return m_dataList;
}

bool DescribeBgpBizTrendResponse::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

uint64_t DescribeBgpBizTrendResponse::GetTotal() const
{
    return m_total;
}

bool DescribeBgpBizTrendResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string DescribeBgpBizTrendResponse::GetMetricName() const
{
    return m_metricName;
}

bool DescribeBgpBizTrendResponse::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t DescribeBgpBizTrendResponse::GetMaxData() const
{
    return m_maxData;
}

bool DescribeBgpBizTrendResponse::MaxDataHasBeenSet() const
{
    return m_maxDataHasBeenSet;
}


