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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageScanStatusResponse::DescribeAssetImageScanStatusResponse() :
    m_imageTotalHasBeenSet(false),
    m_imageScanCntHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_leftSecondsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageScanStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageTotal") && !rsp["ImageTotal"].IsNull())
    {
        if (!rsp["ImageTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageTotal = rsp["ImageTotal"].GetUint64();
        m_imageTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ImageScanCnt") && !rsp["ImageScanCnt"].IsNull())
    {
        if (!rsp["ImageScanCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageScanCnt = rsp["ImageScanCnt"].GetUint64();
        m_imageScanCntHasBeenSet = true;
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

    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCount") && !rsp["RiskCount"].IsNull())
    {
        if (!rsp["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = rsp["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeAssetImageScanStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageTotal, allocator);
    }

    if (m_imageScanCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageScanCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageScanCnt, allocator);
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

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_leftSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftSeconds, allocator);
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


uint64_t DescribeAssetImageScanStatusResponse::GetImageTotal() const
{
    return m_imageTotal;
}

bool DescribeAssetImageScanStatusResponse::ImageTotalHasBeenSet() const
{
    return m_imageTotalHasBeenSet;
}

uint64_t DescribeAssetImageScanStatusResponse::GetImageScanCnt() const
{
    return m_imageScanCnt;
}

bool DescribeAssetImageScanStatusResponse::ImageScanCntHasBeenSet() const
{
    return m_imageScanCntHasBeenSet;
}

string DescribeAssetImageScanStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetImageScanStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeAssetImageScanStatusResponse::GetSchedule() const
{
    return m_schedule;
}

bool DescribeAssetImageScanStatusResponse::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

uint64_t DescribeAssetImageScanStatusResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool DescribeAssetImageScanStatusResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

uint64_t DescribeAssetImageScanStatusResponse::GetRiskCount() const
{
    return m_riskCount;
}

bool DescribeAssetImageScanStatusResponse::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t DescribeAssetImageScanStatusResponse::GetLeftSeconds() const
{
    return m_leftSeconds;
}

bool DescribeAssetImageScanStatusResponse::LeftSecondsHasBeenSet() const
{
    return m_leftSecondsHasBeenSet;
}


