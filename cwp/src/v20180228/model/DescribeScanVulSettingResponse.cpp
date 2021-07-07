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

#include <tencentcloud/cwp/v20180228/model/DescribeScanVulSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeScanVulSettingResponse::DescribeScanVulSettingResponse() :
    m_vulCategoriesHasBeenSet(false),
    m_vulLevelsHasBeenSet(false),
    m_timerIntervalHasBeenSet(false),
    m_timerTimeHasBeenSet(false),
    m_vulEmergencyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_enableScanHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_clickTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanVulSettingResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("VulCategories") && !rsp["VulCategories"].IsNull())
    {
        if (!rsp["VulCategories"].IsString())
        {
            return CoreInternalOutcome(Error("response `VulCategories` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategories = string(rsp["VulCategories"].GetString());
        m_vulCategoriesHasBeenSet = true;
    }

    if (rsp.HasMember("VulLevels") && !rsp["VulLevels"].IsNull())
    {
        if (!rsp["VulLevels"].IsString())
        {
            return CoreInternalOutcome(Error("response `VulLevels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevels = string(rsp["VulLevels"].GetString());
        m_vulLevelsHasBeenSet = true;
    }

    if (rsp.HasMember("TimerInterval") && !rsp["TimerInterval"].IsNull())
    {
        if (!rsp["TimerInterval"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TimerInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timerInterval = rsp["TimerInterval"].GetUint64();
        m_timerIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("TimerTime") && !rsp["TimerTime"].IsNull())
    {
        if (!rsp["TimerTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerTime = string(rsp["TimerTime"].GetString());
        m_timerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VulEmergency") && !rsp["VulEmergency"].IsNull())
    {
        if (!rsp["VulEmergency"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulEmergency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulEmergency = rsp["VulEmergency"].GetUint64();
        m_vulEmergencyHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EnableScan") && !rsp["EnableScan"].IsNull())
    {
        if (!rsp["EnableScan"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EnableScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableScan = rsp["EnableScan"].GetUint64();
        m_enableScanHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ClickTimeout") && !rsp["ClickTimeout"].IsNull())
    {
        if (!rsp["ClickTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClickTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clickTimeout = rsp["ClickTimeout"].GetUint64();
        m_clickTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeScanVulSettingResponse::GetVulCategories() const
{
    return m_vulCategories;
}

bool DescribeScanVulSettingResponse::VulCategoriesHasBeenSet() const
{
    return m_vulCategoriesHasBeenSet;
}

string DescribeScanVulSettingResponse::GetVulLevels() const
{
    return m_vulLevels;
}

bool DescribeScanVulSettingResponse::VulLevelsHasBeenSet() const
{
    return m_vulLevelsHasBeenSet;
}

uint64_t DescribeScanVulSettingResponse::GetTimerInterval() const
{
    return m_timerInterval;
}

bool DescribeScanVulSettingResponse::TimerIntervalHasBeenSet() const
{
    return m_timerIntervalHasBeenSet;
}

string DescribeScanVulSettingResponse::GetTimerTime() const
{
    return m_timerTime;
}

bool DescribeScanVulSettingResponse::TimerTimeHasBeenSet() const
{
    return m_timerTimeHasBeenSet;
}

uint64_t DescribeScanVulSettingResponse::GetVulEmergency() const
{
    return m_vulEmergency;
}

bool DescribeScanVulSettingResponse::VulEmergencyHasBeenSet() const
{
    return m_vulEmergencyHasBeenSet;
}

string DescribeScanVulSettingResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeScanVulSettingResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeScanVulSettingResponse::GetEnableScan() const
{
    return m_enableScan;
}

bool DescribeScanVulSettingResponse::EnableScanHasBeenSet() const
{
    return m_enableScanHasBeenSet;
}

string DescribeScanVulSettingResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeScanVulSettingResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeScanVulSettingResponse::GetClickTimeout() const
{
    return m_clickTimeout;
}

bool DescribeScanVulSettingResponse::ClickTimeoutHasBeenSet() const
{
    return m_clickTimeoutHasBeenSet;
}


