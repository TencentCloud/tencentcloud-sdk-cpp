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

#include <tencentcloud/tcss/v20201101/model/DescribeTcssSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeTcssSummaryResponse::DescribeTcssSummaryResponse() :
    m_imageCntHasBeenSet(false),
    m_scannedImageCntHasBeenSet(false),
    m_unScannedImageCntHasBeenSet(false),
    m_localImageCntHasBeenSet(false),
    m_repositoryImageCntHasBeenSet(false),
    m_riskLocalImageCntHasBeenSet(false),
    m_riskRepositoryImageCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_riskContainerCntHasBeenSet(false),
    m_clusterCntHasBeenSet(false),
    m_riskClusterCntHasBeenSet(false),
    m_unScannedVulCntHasBeenSet(false),
    m_riskVulCntHasBeenSet(false),
    m_unScannedBaseLineCntHasBeenSet(false),
    m_riskBaseLineCntHasBeenSet(false),
    m_runtimeUnhandleEventCntHasBeenSet(false),
    m_unScannedClusterCntHasBeenSet(false),
    m_scanImageStatusHasBeenSet(false),
    m_scanClusterStatusHasBeenSet(false),
    m_scanBaseLineStatusHasBeenSet(false),
    m_scanVulStatusHasBeenSet(false),
    m_vulRiskImageCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTcssSummaryResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ScannedImageCnt") && !rsp["ScannedImageCnt"].IsNull())
    {
        if (!rsp["ScannedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScannedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scannedImageCnt = rsp["ScannedImageCnt"].GetUint64();
        m_scannedImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnScannedImageCnt") && !rsp["UnScannedImageCnt"].IsNull())
    {
        if (!rsp["UnScannedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnScannedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unScannedImageCnt = rsp["UnScannedImageCnt"].GetUint64();
        m_unScannedImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("LocalImageCnt") && !rsp["LocalImageCnt"].IsNull())
    {
        if (!rsp["LocalImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageCnt = rsp["LocalImageCnt"].GetUint64();
        m_localImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("RepositoryImageCnt") && !rsp["RepositoryImageCnt"].IsNull())
    {
        if (!rsp["RepositoryImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryImageCnt = rsp["RepositoryImageCnt"].GetUint64();
        m_repositoryImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLocalImageCnt") && !rsp["RiskLocalImageCnt"].IsNull())
    {
        if (!rsp["RiskLocalImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLocalImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLocalImageCnt = rsp["RiskLocalImageCnt"].GetUint64();
        m_riskLocalImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskRepositoryImageCnt") && !rsp["RiskRepositoryImageCnt"].IsNull())
    {
        if (!rsp["RiskRepositoryImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRepositoryImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskRepositoryImageCnt = rsp["RiskRepositoryImageCnt"].GetUint64();
        m_riskRepositoryImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerCnt") && !rsp["ContainerCnt"].IsNull())
    {
        if (!rsp["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = rsp["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
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

    if (rsp.HasMember("ClusterCnt") && !rsp["ClusterCnt"].IsNull())
    {
        if (!rsp["ClusterCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCnt = rsp["ClusterCnt"].GetUint64();
        m_clusterCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskClusterCnt") && !rsp["RiskClusterCnt"].IsNull())
    {
        if (!rsp["RiskClusterCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskClusterCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskClusterCnt = rsp["RiskClusterCnt"].GetUint64();
        m_riskClusterCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnScannedVulCnt") && !rsp["UnScannedVulCnt"].IsNull())
    {
        if (!rsp["UnScannedVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnScannedVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unScannedVulCnt = rsp["UnScannedVulCnt"].GetUint64();
        m_unScannedVulCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskVulCnt") && !rsp["RiskVulCnt"].IsNull())
    {
        if (!rsp["RiskVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskVulCnt = rsp["RiskVulCnt"].GetUint64();
        m_riskVulCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnScannedBaseLineCnt") && !rsp["UnScannedBaseLineCnt"].IsNull())
    {
        if (!rsp["UnScannedBaseLineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnScannedBaseLineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unScannedBaseLineCnt = rsp["UnScannedBaseLineCnt"].GetUint64();
        m_unScannedBaseLineCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskBaseLineCnt") && !rsp["RiskBaseLineCnt"].IsNull())
    {
        if (!rsp["RiskBaseLineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskBaseLineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskBaseLineCnt = rsp["RiskBaseLineCnt"].GetUint64();
        m_riskBaseLineCntHasBeenSet = true;
    }

    if (rsp.HasMember("RuntimeUnhandleEventCnt") && !rsp["RuntimeUnhandleEventCnt"].IsNull())
    {
        if (!rsp["RuntimeUnhandleEventCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeUnhandleEventCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeUnhandleEventCnt = rsp["RuntimeUnhandleEventCnt"].GetUint64();
        m_runtimeUnhandleEventCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnScannedClusterCnt") && !rsp["UnScannedClusterCnt"].IsNull())
    {
        if (!rsp["UnScannedClusterCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnScannedClusterCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unScannedClusterCnt = rsp["UnScannedClusterCnt"].GetUint64();
        m_unScannedClusterCntHasBeenSet = true;
    }

    if (rsp.HasMember("ScanImageStatus") && !rsp["ScanImageStatus"].IsNull())
    {
        if (!rsp["ScanImageStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanImageStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanImageStatus = rsp["ScanImageStatus"].GetBool();
        m_scanImageStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ScanClusterStatus") && !rsp["ScanClusterStatus"].IsNull())
    {
        if (!rsp["ScanClusterStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanClusterStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanClusterStatus = rsp["ScanClusterStatus"].GetBool();
        m_scanClusterStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ScanBaseLineStatus") && !rsp["ScanBaseLineStatus"].IsNull())
    {
        if (!rsp["ScanBaseLineStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanBaseLineStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanBaseLineStatus = rsp["ScanBaseLineStatus"].GetBool();
        m_scanBaseLineStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVulStatus") && !rsp["ScanVulStatus"].IsNull())
    {
        if (!rsp["ScanVulStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVulStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulStatus = rsp["ScanVulStatus"].GetBool();
        m_scanVulStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VulRiskImageCnt") && !rsp["VulRiskImageCnt"].IsNull())
    {
        if (!rsp["VulRiskImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulRiskImageCnt = rsp["VulRiskImageCnt"].GetUint64();
        m_vulRiskImageCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTcssSummaryResponse::ToJsonString() const
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

    if (m_scannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedImageCnt, allocator);
    }

    if (m_unScannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unScannedImageCnt, allocator);
    }

    if (m_localImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localImageCnt, allocator);
    }

    if (m_repositoryImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repositoryImageCnt, allocator);
    }

    if (m_riskLocalImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLocalImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLocalImageCnt, allocator);
    }

    if (m_riskRepositoryImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRepositoryImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskRepositoryImageCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_riskContainerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerCnt, allocator);
    }

    if (m_clusterCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterCnt, allocator);
    }

    if (m_riskClusterCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskClusterCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskClusterCnt, allocator);
    }

    if (m_unScannedVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnScannedVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unScannedVulCnt, allocator);
    }

    if (m_riskVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskVulCnt, allocator);
    }

    if (m_unScannedBaseLineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnScannedBaseLineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unScannedBaseLineCnt, allocator);
    }

    if (m_riskBaseLineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskBaseLineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskBaseLineCnt, allocator);
    }

    if (m_runtimeUnhandleEventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeUnhandleEventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeUnhandleEventCnt, allocator);
    }

    if (m_unScannedClusterCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnScannedClusterCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unScannedClusterCnt, allocator);
    }

    if (m_scanImageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanImageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanImageStatus, allocator);
    }

    if (m_scanClusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanClusterStatus, allocator);
    }

    if (m_scanBaseLineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanBaseLineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanBaseLineStatus, allocator);
    }

    if (m_scanVulStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVulStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVulStatus, allocator);
    }

    if (m_vulRiskImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRiskImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulRiskImageCnt, allocator);
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


uint64_t DescribeTcssSummaryResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribeTcssSummaryResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetScannedImageCnt() const
{
    return m_scannedImageCnt;
}

bool DescribeTcssSummaryResponse::ScannedImageCntHasBeenSet() const
{
    return m_scannedImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetUnScannedImageCnt() const
{
    return m_unScannedImageCnt;
}

bool DescribeTcssSummaryResponse::UnScannedImageCntHasBeenSet() const
{
    return m_unScannedImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetLocalImageCnt() const
{
    return m_localImageCnt;
}

bool DescribeTcssSummaryResponse::LocalImageCntHasBeenSet() const
{
    return m_localImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRepositoryImageCnt() const
{
    return m_repositoryImageCnt;
}

bool DescribeTcssSummaryResponse::RepositoryImageCntHasBeenSet() const
{
    return m_repositoryImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskLocalImageCnt() const
{
    return m_riskLocalImageCnt;
}

bool DescribeTcssSummaryResponse::RiskLocalImageCntHasBeenSet() const
{
    return m_riskLocalImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskRepositoryImageCnt() const
{
    return m_riskRepositoryImageCnt;
}

bool DescribeTcssSummaryResponse::RiskRepositoryImageCntHasBeenSet() const
{
    return m_riskRepositoryImageCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetContainerCnt() const
{
    return m_containerCnt;
}

bool DescribeTcssSummaryResponse::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskContainerCnt() const
{
    return m_riskContainerCnt;
}

bool DescribeTcssSummaryResponse::RiskContainerCntHasBeenSet() const
{
    return m_riskContainerCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetClusterCnt() const
{
    return m_clusterCnt;
}

bool DescribeTcssSummaryResponse::ClusterCntHasBeenSet() const
{
    return m_clusterCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskClusterCnt() const
{
    return m_riskClusterCnt;
}

bool DescribeTcssSummaryResponse::RiskClusterCntHasBeenSet() const
{
    return m_riskClusterCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetUnScannedVulCnt() const
{
    return m_unScannedVulCnt;
}

bool DescribeTcssSummaryResponse::UnScannedVulCntHasBeenSet() const
{
    return m_unScannedVulCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskVulCnt() const
{
    return m_riskVulCnt;
}

bool DescribeTcssSummaryResponse::RiskVulCntHasBeenSet() const
{
    return m_riskVulCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetUnScannedBaseLineCnt() const
{
    return m_unScannedBaseLineCnt;
}

bool DescribeTcssSummaryResponse::UnScannedBaseLineCntHasBeenSet() const
{
    return m_unScannedBaseLineCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRiskBaseLineCnt() const
{
    return m_riskBaseLineCnt;
}

bool DescribeTcssSummaryResponse::RiskBaseLineCntHasBeenSet() const
{
    return m_riskBaseLineCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetRuntimeUnhandleEventCnt() const
{
    return m_runtimeUnhandleEventCnt;
}

bool DescribeTcssSummaryResponse::RuntimeUnhandleEventCntHasBeenSet() const
{
    return m_runtimeUnhandleEventCntHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetUnScannedClusterCnt() const
{
    return m_unScannedClusterCnt;
}

bool DescribeTcssSummaryResponse::UnScannedClusterCntHasBeenSet() const
{
    return m_unScannedClusterCntHasBeenSet;
}

bool DescribeTcssSummaryResponse::GetScanImageStatus() const
{
    return m_scanImageStatus;
}

bool DescribeTcssSummaryResponse::ScanImageStatusHasBeenSet() const
{
    return m_scanImageStatusHasBeenSet;
}

bool DescribeTcssSummaryResponse::GetScanClusterStatus() const
{
    return m_scanClusterStatus;
}

bool DescribeTcssSummaryResponse::ScanClusterStatusHasBeenSet() const
{
    return m_scanClusterStatusHasBeenSet;
}

bool DescribeTcssSummaryResponse::GetScanBaseLineStatus() const
{
    return m_scanBaseLineStatus;
}

bool DescribeTcssSummaryResponse::ScanBaseLineStatusHasBeenSet() const
{
    return m_scanBaseLineStatusHasBeenSet;
}

bool DescribeTcssSummaryResponse::GetScanVulStatus() const
{
    return m_scanVulStatus;
}

bool DescribeTcssSummaryResponse::ScanVulStatusHasBeenSet() const
{
    return m_scanVulStatusHasBeenSet;
}

uint64_t DescribeTcssSummaryResponse::GetVulRiskImageCnt() const
{
    return m_vulRiskImageCnt;
}

bool DescribeTcssSummaryResponse::VulRiskImageCntHasBeenSet() const
{
    return m_vulRiskImageCntHasBeenSet;
}


