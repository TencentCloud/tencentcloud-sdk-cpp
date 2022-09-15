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

#include <tencentcloud/mna/v20210119/model/GetFlowStatisticResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetFlowStatisticResponse::GetFlowStatisticResponse() :
    m_netDetailsHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_avgValueHasBeenSet(false),
    m_totalValueHasBeenSet(false)
{
}

CoreInternalOutcome GetFlowStatisticResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetDetails") && !rsp["NetDetails"].IsNull())
    {
        if (!rsp["NetDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netDetails.push_back(item);
        }
        m_netDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("MaxValue") && !rsp["MaxValue"].IsNull())
    {
        if (!rsp["MaxValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MaxValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = rsp["MaxValue"].GetDouble();
        m_maxValueHasBeenSet = true;
    }

    if (rsp.HasMember("AvgValue") && !rsp["AvgValue"].IsNull())
    {
        if (!rsp["AvgValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvgValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgValue = rsp["AvgValue"].GetDouble();
        m_avgValueHasBeenSet = true;
    }

    if (rsp.HasMember("TotalValue") && !rsp["TotalValue"].IsNull())
    {
        if (!rsp["TotalValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalValue = rsp["TotalValue"].GetDouble();
        m_totalValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFlowStatisticResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_netDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netDetails.begin(); itr != m_netDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_avgValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgValue, allocator);
    }

    if (m_totalValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalValue, allocator);
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


vector<NetDetails> GetFlowStatisticResponse::GetNetDetails() const
{
    return m_netDetails;
}

bool GetFlowStatisticResponse::NetDetailsHasBeenSet() const
{
    return m_netDetailsHasBeenSet;
}

double GetFlowStatisticResponse::GetMaxValue() const
{
    return m_maxValue;
}

bool GetFlowStatisticResponse::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

double GetFlowStatisticResponse::GetAvgValue() const
{
    return m_avgValue;
}

bool GetFlowStatisticResponse::AvgValueHasBeenSet() const
{
    return m_avgValueHasBeenSet;
}

double GetFlowStatisticResponse::GetTotalValue() const
{
    return m_totalValue;
}

bool GetFlowStatisticResponse::TotalValueHasBeenSet() const
{
    return m_totalValueHasBeenSet;
}


