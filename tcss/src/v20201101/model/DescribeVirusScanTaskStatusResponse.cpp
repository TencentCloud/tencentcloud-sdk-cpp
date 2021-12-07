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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanTaskStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusScanTaskStatusResponse::DescribeVirusScanTaskStatusResponse() :
    m_containerTotalHasBeenSet(false),
    m_riskContainerCntHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_containerScanCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_leftSecondsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusScanTaskStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ContainerTotal") && !rsp["ContainerTotal"].IsNull())
    {
        if (!rsp["ContainerTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerTotal = rsp["ContainerTotal"].GetUint64();
        m_containerTotalHasBeenSet = true;
    }

    if (rsp.HasMember("RiskContainerCnt") && !rsp["RiskContainerCnt"].IsNull())
    {
        if (!rsp["RiskContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerCnt = rsp["RiskContainerCnt"].GetUint64();
        m_riskContainerCntHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Schedule") && !rsp["Schedule"].IsNull())
    {
        if (!rsp["Schedule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Schedule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_schedule = rsp["Schedule"].GetUint64();
        m_scheduleHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerScanCnt") && !rsp["ContainerScanCnt"].IsNull())
    {
        if (!rsp["ContainerScanCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerScanCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerScanCnt = rsp["ContainerScanCnt"].GetUint64();
        m_containerScanCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCnt") && !rsp["RiskCnt"].IsNull())
    {
        if (!rsp["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = rsp["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (rsp.HasMember("LeftSeconds") && !rsp["LeftSeconds"].IsNull())
    {
        if (!rsp["LeftSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftSeconds = rsp["LeftSeconds"].GetUint64();
        m_leftSecondsHasBeenSet = true;
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

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanType") && !rsp["ScanType"].IsNull())
    {
        if (!rsp["ScanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanType = string(rsp["ScanType"].GetString());
        m_scanTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusScanTaskStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_containerTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerTotal, allocator);
    }

    if (m_riskContainerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerCnt, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schedule, allocator);
    }

    if (m_containerScanCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerScanCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerScanCnt, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_leftSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftSeconds, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeVirusScanTaskStatusResponse::GetContainerTotal() const
{
    return m_containerTotal;
}

bool DescribeVirusScanTaskStatusResponse::ContainerTotalHasBeenSet() const
{
    return m_containerTotalHasBeenSet;
}

uint64_t DescribeVirusScanTaskStatusResponse::GetRiskContainerCnt() const
{
    return m_riskContainerCnt;
}

bool DescribeVirusScanTaskStatusResponse::RiskContainerCntHasBeenSet() const
{
    return m_riskContainerCntHasBeenSet;
}

string DescribeVirusScanTaskStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVirusScanTaskStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeVirusScanTaskStatusResponse::GetSchedule() const
{
    return m_schedule;
}

bool DescribeVirusScanTaskStatusResponse::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

uint64_t DescribeVirusScanTaskStatusResponse::GetContainerScanCnt() const
{
    return m_containerScanCnt;
}

bool DescribeVirusScanTaskStatusResponse::ContainerScanCntHasBeenSet() const
{
    return m_containerScanCntHasBeenSet;
}

uint64_t DescribeVirusScanTaskStatusResponse::GetRiskCnt() const
{
    return m_riskCnt;
}

bool DescribeVirusScanTaskStatusResponse::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

uint64_t DescribeVirusScanTaskStatusResponse::GetLeftSeconds() const
{
    return m_leftSeconds;
}

bool DescribeVirusScanTaskStatusResponse::LeftSecondsHasBeenSet() const
{
    return m_leftSecondsHasBeenSet;
}

string DescribeVirusScanTaskStatusResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeVirusScanTaskStatusResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeVirusScanTaskStatusResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeVirusScanTaskStatusResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeVirusScanTaskStatusResponse::GetScanType() const
{
    return m_scanType;
}

bool DescribeVirusScanTaskStatusResponse::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}


