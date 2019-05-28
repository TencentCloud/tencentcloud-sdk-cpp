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
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EipNumQuota") && !rsp["EipNumQuota"].IsNull())
    {
        if (!rsp["EipNumQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EipNumQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eipNumQuota = rsp["EipNumQuota"].GetInt64();
        m_eipNumQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentEipNum") && !rsp["CurrentEipNum"].IsNull())
    {
        if (!rsp["CurrentEipNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentEipNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentEipNum = rsp["CurrentEipNum"].GetInt64();
        m_currentEipNumHasBeenSet = true;
    }

    if (rsp.HasMember("DailyApplyCount") && !rsp["DailyApplyCount"].IsNull())
    {
        if (!rsp["DailyApplyCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DailyApplyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyApplyCount = rsp["DailyApplyCount"].GetInt64();
        m_dailyApplyCountHasBeenSet = true;
    }

    if (rsp.HasMember("DailyApplyQuota") && !rsp["DailyApplyQuota"].IsNull())
    {
        if (!rsp["DailyApplyQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DailyApplyQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyApplyQuota = rsp["DailyApplyQuota"].GetInt64();
        m_dailyApplyQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("BatchApplyMax") && !rsp["BatchApplyMax"].IsNull())
    {
        if (!rsp["BatchApplyMax"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BatchApplyMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchApplyMax = rsp["BatchApplyMax"].GetInt64();
        m_batchApplyMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


