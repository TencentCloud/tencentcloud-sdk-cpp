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

#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeConcurrencyUsageResponse::DescribeConcurrencyUsageResponse() :
    m_availableConcurrencyHasBeenSet(false),
    m_concurrencyPeakHasBeenSet(false),
    m_exceedUsageTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConcurrencyUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AvailableConcurrency") && !rsp["AvailableConcurrency"].IsNull())
    {
        if (!rsp["AvailableConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableConcurrency = rsp["AvailableConcurrency"].GetUint64();
        m_availableConcurrencyHasBeenSet = true;
    }

    if (rsp.HasMember("ConcurrencyPeak") && !rsp["ConcurrencyPeak"].IsNull())
    {
        if (!rsp["ConcurrencyPeak"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyPeak` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrencyPeak = rsp["ConcurrencyPeak"].GetUint64();
        m_concurrencyPeakHasBeenSet = true;
    }

    if (rsp.HasMember("ExceedUsageTime") && !rsp["ExceedUsageTime"].IsNull())
    {
        if (!rsp["ExceedUsageTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceedUsageTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exceedUsageTime = rsp["ExceedUsageTime"].GetUint64();
        m_exceedUsageTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConcurrencyUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_availableConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableConcurrency, allocator);
    }

    if (m_concurrencyPeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyPeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrencyPeak, allocator);
    }

    if (m_exceedUsageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceedUsageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceedUsageTime, allocator);
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


uint64_t DescribeConcurrencyUsageResponse::GetAvailableConcurrency() const
{
    return m_availableConcurrency;
}

bool DescribeConcurrencyUsageResponse::AvailableConcurrencyHasBeenSet() const
{
    return m_availableConcurrencyHasBeenSet;
}

uint64_t DescribeConcurrencyUsageResponse::GetConcurrencyPeak() const
{
    return m_concurrencyPeak;
}

bool DescribeConcurrencyUsageResponse::ConcurrencyPeakHasBeenSet() const
{
    return m_concurrencyPeakHasBeenSet;
}

uint64_t DescribeConcurrencyUsageResponse::GetExceedUsageTime() const
{
    return m_exceedUsageTime;
}

bool DescribeConcurrencyUsageResponse::ExceedUsageTimeHasBeenSet() const
{
    return m_exceedUsageTimeHasBeenSet;
}


