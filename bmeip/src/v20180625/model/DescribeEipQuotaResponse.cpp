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

#include <tencentcloud/bmeip/v20180625/model/DescribeEipQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

DescribeEipQuotaResponse::DescribeEipQuotaResponse() :
    m_eipNumQuotaHasBeenSet(false),
    m_currentEipNumHasBeenSet(false),
    m_dailyApplyCountHasBeenSet(false),
    m_dailyApplyQuotaHasBeenSet(false),
    m_batchApplyMaxHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEipQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EipNumQuota") && !rsp["EipNumQuota"].IsNull())
    {
        if (!rsp["EipNumQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipNumQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eipNumQuota = rsp["EipNumQuota"].GetInt64();
        m_eipNumQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentEipNum") && !rsp["CurrentEipNum"].IsNull())
    {
        if (!rsp["CurrentEipNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentEipNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentEipNum = rsp["CurrentEipNum"].GetInt64();
        m_currentEipNumHasBeenSet = true;
    }

    if (rsp.HasMember("DailyApplyCount") && !rsp["DailyApplyCount"].IsNull())
    {
        if (!rsp["DailyApplyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyApplyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyApplyCount = rsp["DailyApplyCount"].GetInt64();
        m_dailyApplyCountHasBeenSet = true;
    }

    if (rsp.HasMember("DailyApplyQuota") && !rsp["DailyApplyQuota"].IsNull())
    {
        if (!rsp["DailyApplyQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyApplyQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyApplyQuota = rsp["DailyApplyQuota"].GetInt64();
        m_dailyApplyQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("BatchApplyMax") && !rsp["BatchApplyMax"].IsNull())
    {
        if (!rsp["BatchApplyMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchApplyMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchApplyMax = rsp["BatchApplyMax"].GetInt64();
        m_batchApplyMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEipQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eipNumQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipNumQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipNumQuota, allocator);
    }

    if (m_currentEipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentEipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentEipNum, allocator);
    }

    if (m_dailyApplyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyApplyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyApplyCount, allocator);
    }

    if (m_dailyApplyQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyApplyQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyApplyQuota, allocator);
    }

    if (m_batchApplyMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchApplyMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchApplyMax, allocator);
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


int64_t DescribeEipQuotaResponse::GetEipNumQuota() const
{
    return m_eipNumQuota;
}

bool DescribeEipQuotaResponse::EipNumQuotaHasBeenSet() const
{
    return m_eipNumQuotaHasBeenSet;
}

int64_t DescribeEipQuotaResponse::GetCurrentEipNum() const
{
    return m_currentEipNum;
}

bool DescribeEipQuotaResponse::CurrentEipNumHasBeenSet() const
{
    return m_currentEipNumHasBeenSet;
}

int64_t DescribeEipQuotaResponse::GetDailyApplyCount() const
{
    return m_dailyApplyCount;
}

bool DescribeEipQuotaResponse::DailyApplyCountHasBeenSet() const
{
    return m_dailyApplyCountHasBeenSet;
}

int64_t DescribeEipQuotaResponse::GetDailyApplyQuota() const
{
    return m_dailyApplyQuota;
}

bool DescribeEipQuotaResponse::DailyApplyQuotaHasBeenSet() const
{
    return m_dailyApplyQuotaHasBeenSet;
}

int64_t DescribeEipQuotaResponse::GetBatchApplyMax() const
{
    return m_batchApplyMax;
}

bool DescribeEipQuotaResponse::BatchApplyMaxHasBeenSet() const
{
    return m_batchApplyMaxHasBeenSet;
}


