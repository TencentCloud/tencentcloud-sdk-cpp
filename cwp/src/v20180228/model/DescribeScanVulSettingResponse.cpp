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
    m_clickTimeoutHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_scanMethodHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanVulSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulCategories") && !rsp["VulCategories"].IsNull())
    {
        if (!rsp["VulCategories"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulCategories` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategories = string(rsp["VulCategories"].GetString());
        m_vulCategoriesHasBeenSet = true;
    }

    if (rsp.HasMember("VulLevels") && !rsp["VulLevels"].IsNull())
    {
        if (!rsp["VulLevels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevels = string(rsp["VulLevels"].GetString());
        m_vulLevelsHasBeenSet = true;
    }

    if (rsp.HasMember("TimerInterval") && !rsp["TimerInterval"].IsNull())
    {
        if (!rsp["TimerInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timerInterval = rsp["TimerInterval"].GetUint64();
        m_timerIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("TimerTime") && !rsp["TimerTime"].IsNull())
    {
        if (!rsp["TimerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerTime = string(rsp["TimerTime"].GetString());
        m_timerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VulEmergency") && !rsp["VulEmergency"].IsNull())
    {
        if (!rsp["VulEmergency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulEmergency = rsp["VulEmergency"].GetUint64();
        m_vulEmergencyHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EnableScan") && !rsp["EnableScan"].IsNull())
    {
        if (!rsp["EnableScan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableScan = rsp["EnableScan"].GetUint64();
        m_enableScanHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ClickTimeout") && !rsp["ClickTimeout"].IsNull())
    {
        if (!rsp["ClickTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clickTimeout = rsp["ClickTimeout"].GetUint64();
        m_clickTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("Uuids") && !rsp["Uuids"].IsNull())
    {
        if (!rsp["Uuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Uuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Uuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uuids.push_back((*itr).GetString());
        }
        m_uuidsHasBeenSet = true;
    }

    if (rsp.HasMember("ScanMethod") && !rsp["ScanMethod"].IsNull())
    {
        if (!rsp["ScanMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanMethod = rsp["ScanMethod"].GetUint64();
        m_scanMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScanVulSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCategories.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevels.c_str(), allocator).Move(), allocator);
    }

    if (m_timerIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timerInterval, allocator);
    }

    if (m_timerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulEmergencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulEmergency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulEmergency, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableScan, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clickTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickTimeout, allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanMethod, allocator);
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

vector<string> DescribeScanVulSettingResponse::GetUuids() const
{
    return m_uuids;
}

bool DescribeScanVulSettingResponse::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

uint64_t DescribeScanVulSettingResponse::GetScanMethod() const
{
    return m_scanMethod;
}

bool DescribeScanVulSettingResponse::ScanMethodHasBeenSet() const
{
    return m_scanMethodHasBeenSet;
}


