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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusManualScanEstimateTimeoutResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusManualScanEstimateTimeoutResponse::DescribeVirusManualScanEstimateTimeoutResponse() :
    m_timeoutHasBeenSet(false),
    m_containerScanConcurrencyCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusManualScanEstimateTimeoutResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetDouble();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerScanConcurrencyCount") && !rsp["ContainerScanConcurrencyCount"].IsNull())
    {
        if (!rsp["ContainerScanConcurrencyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerScanConcurrencyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerScanConcurrencyCount = rsp["ContainerScanConcurrencyCount"].GetUint64();
        m_containerScanConcurrencyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusManualScanEstimateTimeoutResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_containerScanConcurrencyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerScanConcurrencyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerScanConcurrencyCount, allocator);
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


double DescribeVirusManualScanEstimateTimeoutResponse::GetTimeout() const
{
    return m_timeout;
}

bool DescribeVirusManualScanEstimateTimeoutResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t DescribeVirusManualScanEstimateTimeoutResponse::GetContainerScanConcurrencyCount() const
{
    return m_containerScanConcurrencyCount;
}

bool DescribeVirusManualScanEstimateTimeoutResponse::ContainerScanConcurrencyCountHasBeenSet() const
{
    return m_containerScanConcurrencyCountHasBeenSet;
}


