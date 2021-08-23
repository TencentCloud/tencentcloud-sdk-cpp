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

#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribeFleetStatisticSummaryResponse::DescribeFleetStatisticSummaryResponse() :
    m_totalUsedTimeSecondsHasBeenSet(false),
    m_totalUsedFlowMegaBytesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFleetStatisticSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalUsedTimeSeconds") && !rsp["TotalUsedTimeSeconds"].IsNull())
    {
        if (!rsp["TotalUsedTimeSeconds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalUsedTimeSeconds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedTimeSeconds = string(rsp["TotalUsedTimeSeconds"].GetString());
        m_totalUsedTimeSecondsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalUsedFlowMegaBytes") && !rsp["TotalUsedFlowMegaBytes"].IsNull())
    {
        if (!rsp["TotalUsedFlowMegaBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalUsedFlowMegaBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedFlowMegaBytes = rsp["TotalUsedFlowMegaBytes"].GetDouble();
        m_totalUsedFlowMegaBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFleetStatisticSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalUsedTimeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedTimeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalUsedTimeSeconds.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedFlowMegaBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedFlowMegaBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsedFlowMegaBytes, allocator);
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


string DescribeFleetStatisticSummaryResponse::GetTotalUsedTimeSeconds() const
{
    return m_totalUsedTimeSeconds;
}

bool DescribeFleetStatisticSummaryResponse::TotalUsedTimeSecondsHasBeenSet() const
{
    return m_totalUsedTimeSecondsHasBeenSet;
}

double DescribeFleetStatisticSummaryResponse::GetTotalUsedFlowMegaBytes() const
{
    return m_totalUsedFlowMegaBytes;
}

bool DescribeFleetStatisticSummaryResponse::TotalUsedFlowMegaBytesHasBeenSet() const
{
    return m_totalUsedFlowMegaBytesHasBeenSet;
}


