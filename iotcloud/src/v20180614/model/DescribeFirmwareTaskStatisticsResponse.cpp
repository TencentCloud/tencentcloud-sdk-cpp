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

#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeFirmwareTaskStatisticsResponse::DescribeFirmwareTaskStatisticsResponse() :
    m_successTotalHasBeenSet(false),
    m_failureTotalHasBeenSet(false),
    m_upgradingTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareTaskStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessTotal") && !rsp["SuccessTotal"].IsNull())
    {
        if (!rsp["SuccessTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successTotal = rsp["SuccessTotal"].GetUint64();
        m_successTotalHasBeenSet = true;
    }

    if (rsp.HasMember("FailureTotal") && !rsp["FailureTotal"].IsNull())
    {
        if (!rsp["FailureTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailureTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failureTotal = rsp["FailureTotal"].GetUint64();
        m_failureTotalHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradingTotal") && !rsp["UpgradingTotal"].IsNull())
    {
        if (!rsp["UpgradingTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradingTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradingTotal = rsp["UpgradingTotal"].GetUint64();
        m_upgradingTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFirmwareTaskStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successTotal, allocator);
    }

    if (m_failureTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureTotal, allocator);
    }

    if (m_upgradingTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradingTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradingTotal, allocator);
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


uint64_t DescribeFirmwareTaskStatisticsResponse::GetSuccessTotal() const
{
    return m_successTotal;
}

bool DescribeFirmwareTaskStatisticsResponse::SuccessTotalHasBeenSet() const
{
    return m_successTotalHasBeenSet;
}

uint64_t DescribeFirmwareTaskStatisticsResponse::GetFailureTotal() const
{
    return m_failureTotal;
}

bool DescribeFirmwareTaskStatisticsResponse::FailureTotalHasBeenSet() const
{
    return m_failureTotalHasBeenSet;
}

uint64_t DescribeFirmwareTaskStatisticsResponse::GetUpgradingTotal() const
{
    return m_upgradingTotal;
}

bool DescribeFirmwareTaskStatisticsResponse::UpgradingTotalHasBeenSet() const
{
    return m_upgradingTotalHasBeenSet;
}


