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
    m_trialQuotaHasBeenSet(false),
    m_riskImageCntHasBeenSet(false),
    m_cICDImageCntHasBeenSet(false),
    m_cICDImageScannedCntHasBeenSet(false),
    m_riskCICDImageCntHasBeenSet(false),
    m_secretFileCntHasBeenSet(false),
    m_buildRiskCntHasBeenSet(false)
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

    if (rsp.HasMember("RiskImageCnt") && !rsp["RiskImageCnt"].IsNull())
    {
        if (!rsp["RiskImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskImageCnt = rsp["RiskImageCnt"].GetUint64();
        m_riskImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("CICDImageCnt") && !rsp["CICDImageCnt"].IsNull())
    {
        if (!rsp["CICDImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cICDImageCnt = rsp["CICDImageCnt"].GetUint64();
        m_cICDImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("CICDImageScannedCnt") && !rsp["CICDImageScannedCnt"].IsNull())
    {
        if (!rsp["CICDImageScannedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDImageScannedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cICDImageScannedCnt = rsp["CICDImageScannedCnt"].GetUint64();
        m_cICDImageScannedCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCICDImageCnt") && !rsp["RiskCICDImageCnt"].IsNull())
    {
        if (!rsp["RiskCICDImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCICDImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCICDImageCnt = rsp["RiskCICDImageCnt"].GetUint64();
        m_riskCICDImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("SecretFileCnt") && !rsp["SecretFileCnt"].IsNull())
    {
        if (!rsp["SecretFileCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretFileCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secretFileCnt = rsp["SecretFileCnt"].GetUint64();
        m_secretFileCntHasBeenSet = true;
    }

    if (rsp.HasMember("BuildRiskCnt") && !rsp["BuildRiskCnt"].IsNull())
    {
        if (!rsp["BuildRiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BuildRiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildRiskCnt = rsp["BuildRiskCnt"].GetUint64();
        m_buildRiskCntHasBeenSet = true;
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

    if (m_riskImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskImageCnt, allocator);
    }

    if (m_cICDImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CICDImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cICDImageCnt, allocator);
    }

    if (m_cICDImageScannedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CICDImageScannedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cICDImageScannedCnt, allocator);
    }

    if (m_riskCICDImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCICDImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCICDImageCnt, allocator);
    }

    if (m_secretFileCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretFileCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretFileCnt, allocator);
    }

    if (m_buildRiskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildRiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildRiskCnt, allocator);
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

uint64_t DescribeImageRegistryAssetOverviewResponse::GetRiskImageCnt() const
{
    return m_riskImageCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::RiskImageCntHasBeenSet() const
{
    return m_riskImageCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetCICDImageCnt() const
{
    return m_cICDImageCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::CICDImageCntHasBeenSet() const
{
    return m_cICDImageCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetCICDImageScannedCnt() const
{
    return m_cICDImageScannedCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::CICDImageScannedCntHasBeenSet() const
{
    return m_cICDImageScannedCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetRiskCICDImageCnt() const
{
    return m_riskCICDImageCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::RiskCICDImageCntHasBeenSet() const
{
    return m_riskCICDImageCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetSecretFileCnt() const
{
    return m_secretFileCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::SecretFileCntHasBeenSet() const
{
    return m_secretFileCntHasBeenSet;
}

uint64_t DescribeImageRegistryAssetOverviewResponse::GetBuildRiskCnt() const
{
    return m_buildRiskCnt;
}

bool DescribeImageRegistryAssetOverviewResponse::BuildRiskCntHasBeenSet() const
{
    return m_buildRiskCntHasBeenSet;
}


