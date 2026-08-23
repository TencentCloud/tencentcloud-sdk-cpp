/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryAssetOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeImageRegistryAssetOverviewResponse::DescribeImageRegistryAssetOverviewResponse() :
    m_imageCntHasBeenSet(false),
    m_imageScannedCntHasBeenSet(false),
    m_componentCntHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_sensitiveCntHasBeenSet(false),
    m_timedScanTaskConfigCntHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_usedQuotaHasBeenSet(false),
    m_remainingQuotaHasBeenSet(false),
    m_trialQuotaHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageRegistryAssetOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageCnt") && !rsp["ImageCnt"].IsNull())
    {
        if (!rsp["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = rsp["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageScannedCnt") && !rsp["ImageScannedCnt"].IsNull())
    {
        if (!rsp["ImageScannedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScannedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageScannedCnt = rsp["ImageScannedCnt"].GetUint64();
        m_imageScannedCntHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentCnt") && !rsp["ComponentCnt"].IsNull())
    {
        if (!rsp["ComponentCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentCnt = rsp["ComponentCnt"].GetUint64();
        m_componentCntHasBeenSet = true;
    }

    if (rsp.HasMember("VulCnt") && !rsp["VulCnt"].IsNull())
    {
        if (!rsp["VulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCnt = rsp["VulCnt"].GetUint64();
        m_vulCntHasBeenSet = true;
    }

    if (rsp.HasMember("VirusCnt") && !rsp["VirusCnt"].IsNull())
    {
        if (!rsp["VirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusCnt = rsp["VirusCnt"].GetUint64();
        m_virusCntHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveCnt") && !rsp["SensitiveCnt"].IsNull())
    {
        if (!rsp["SensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCnt = rsp["SensitiveCnt"].GetUint64();
        m_sensitiveCntHasBeenSet = true;
    }

    if (rsp.HasMember("TimedScanTaskConfigCnt") && !rsp["TimedScanTaskConfigCnt"].IsNull())
    {
        if (!rsp["TimedScanTaskConfigCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimedScanTaskConfigCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timedScanTaskConfigCnt = rsp["TimedScanTaskConfigCnt"].GetUint64();
        m_timedScanTaskConfigCntHasBeenSet = true;
    }

    if (rsp.HasMember("TotalQuota") && !rsp["TotalQuota"].IsNull())
    {
        if (!rsp["TotalQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = rsp["TotalQuota"].GetUint64();
        m_totalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("UsedQuota") && !rsp["UsedQuota"].IsNull())
    {
        if (!rsp["UsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQuota = rsp["UsedQuota"].GetUint64();
        m_usedQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingQuota") && !rsp["RemainingQuota"].IsNull())
    {
        if (!rsp["RemainingQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingQuota = rsp["RemainingQuota"].GetUint64();
        m_remainingQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("TrialQuota") && !rsp["TrialQuota"].IsNull())
    {
        if (!rsp["TrialQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrialQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialQuota = rsp["TrialQuota"].GetUint64();
        m_trialQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageRegistryAssetOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_imageScannedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageScannedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageScannedCnt, allocator);
    }

    if (m_componentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentCnt, allocator);
    }

    if (m_vulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCnt, allocator);
    }

    if (m_virusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virusCnt, allocator);
    }

    if (m_sensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCnt, allocator);
    }

    if (m_timedScanTaskConfigCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedScanTaskConfigCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timedScanTaskConfigCnt, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_usedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQuota, allocator);
    }

    if (m_remainingQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingQuota, allocator);
    }

    if (m_trialQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialQuota, allocator);
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


uint64_t DescribeImageRegistryAssetOverviewResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetImageScannedCnt() const
{
    return m_imageScannedCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::ImageScannedCntHasBeenSet() const
{
    return m_imageScannedCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetComponentCnt() const
{
    return m_componentCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::ComponentCntHasBeenSet() const
{
    return m_componentCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetVulCnt() const
{
    return m_vulCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetVirusCnt() const
{
    return m_virusCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetSensitiveCnt() const
{
    return m_sensitiveCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::SensitiveCntHasBeenSet() const
{
    return m_sensitiveCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetTimedScanTaskConfigCnt() const
{
    return m_timedScanTaskConfigCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::TimedScanTaskConfigCntHasBeenSet() const
{
    return m_timedScanTaskConfigCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetTotalQuota() const
{
    return m_totalQuota;
}

bool DescribeImageRegistryAssetOverviewResponse::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetUsedQuota() const
{
    return m_usedQuota;
}

bool DescribeImageRegistryAssetOverviewResponse::UsedQuotaHasBeenSet() const
{
    return m_usedQuotaHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetRemainingQuota() const
{
    return m_remainingQuota;
}

bool DescribeImageRegistryAssetOverviewResponse::RemainingQuotaHasBeenSet() const
{
    return m_remainingQuotaHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetTrialQuota() const
{
    return m_trialQuota;
}

bool DescribeImageRegistryAssetOverviewResponse::TrialQuotaHasBeenSet() const
{
    return m_trialQuotaHasBeenSet;
}


