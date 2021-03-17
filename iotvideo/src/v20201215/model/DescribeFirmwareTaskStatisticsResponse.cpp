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

#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

DescribeFirmwareTaskStatisticsResponse::DescribeFirmwareTaskStatisticsResponse() :
    m_successTotalHasBeenSet(false),
    m_failureTotalHasBeenSet(false),
    m_upgradingTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareTaskStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessTotal") && !rsp["SuccessTotal"].IsNull())
    {
        if (!rsp["SuccessTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SuccessTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successTotal = rsp["SuccessTotal"].GetUint64();
        m_successTotalHasBeenSet = true;
    }

    if (rsp.HasMember("FailureTotal") && !rsp["FailureTotal"].IsNull())
    {
        if (!rsp["FailureTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FailureTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failureTotal = rsp["FailureTotal"].GetUint64();
        m_failureTotalHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradingTotal") && !rsp["UpgradingTotal"].IsNull())
    {
        if (!rsp["UpgradingTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UpgradingTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradingTotal = rsp["UpgradingTotal"].GetUint64();
        m_upgradingTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


