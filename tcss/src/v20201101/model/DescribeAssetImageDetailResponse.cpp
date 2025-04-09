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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageDetailResponse::DescribeAssetImageDetailResponse() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_hostCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_superNodeCntHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_sensitiveInfoCntHasBeenSet(false),
    m_isTrustImageHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_agentErrorHasBeenSet(false),
    m_scanErrorHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_buildHistoryHasBeenSet(false),
    m_scanVirusProgressHasBeenSet(false),
    m_scanVulProgressHasBeenSet(false),
    m_scanRiskProgressHasBeenSet(false),
    m_scanVirusErrorHasBeenSet(false),
    m_scanVulErrorHasBeenSet(false),
    m_scanRiskErrorHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remainScanTimeHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageID") && !rsp["ImageID"].IsNull())
    {
        if (!rsp["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(rsp["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (rsp.HasMember("ImageName") && !rsp["ImageName"].IsNull())
    {
        if (!rsp["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(rsp["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (rsp.HasMember("ImageDigest") && !rsp["ImageDigest"].IsNull())
    {
        if (!rsp["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(rsp["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (rsp.HasMember("HostCnt") && !rsp["HostCnt"].IsNull())
    {
        if (!rsp["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = rsp["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
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

    if (rsp.HasMember("SuperNodeCnt") && !rsp["SuperNodeCnt"].IsNull())
    {
        if (!rsp["SuperNodeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCnt = rsp["SuperNodeCnt"].GetUint64();
        m_superNodeCntHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(rsp["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
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

    if (rsp.HasMember("RiskCnt") && !rsp["RiskCnt"].IsNull())
    {
        if (!rsp["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = rsp["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveInfoCnt") && !rsp["SensitiveInfoCnt"].IsNull())
    {
        if (!rsp["SensitiveInfoCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveInfoCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveInfoCnt = rsp["SensitiveInfoCnt"].GetUint64();
        m_sensitiveInfoCntHasBeenSet = true;
    }

    if (rsp.HasMember("IsTrustImage") && !rsp["IsTrustImage"].IsNull())
    {
        if (!rsp["IsTrustImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsTrustImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrustImage = rsp["IsTrustImage"].GetBool();
        m_isTrustImageHasBeenSet = true;
    }

    if (rsp.HasMember("OsName") && !rsp["OsName"].IsNull())
    {
        if (!rsp["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(rsp["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (rsp.HasMember("AgentError") && !rsp["AgentError"].IsNull())
    {
        if (!rsp["AgentError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentError = string(rsp["AgentError"].GetString());
        m_agentErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ScanError") && !rsp["ScanError"].IsNull())
    {
        if (!rsp["ScanError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanError = string(rsp["ScanError"].GetString());
        m_scanErrorHasBeenSet = true;
    }

    if (rsp.HasMember("Architecture") && !rsp["Architecture"].IsNull())
    {
        if (!rsp["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(rsp["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (rsp.HasMember("Author") && !rsp["Author"].IsNull())
    {
        if (!rsp["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(rsp["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (rsp.HasMember("BuildHistory") && !rsp["BuildHistory"].IsNull())
    {
        if (!rsp["BuildHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildHistory = string(rsp["BuildHistory"].GetString());
        m_buildHistoryHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVirusProgress") && !rsp["ScanVirusProgress"].IsNull())
    {
        if (!rsp["ScanVirusProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVirusProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirusProgress = rsp["ScanVirusProgress"].GetUint64();
        m_scanVirusProgressHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVulProgress") && !rsp["ScanVulProgress"].IsNull())
    {
        if (!rsp["ScanVulProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVulProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulProgress = rsp["ScanVulProgress"].GetUint64();
        m_scanVulProgressHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRiskProgress") && !rsp["ScanRiskProgress"].IsNull())
    {
        if (!rsp["ScanRiskProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRiskProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRiskProgress = rsp["ScanRiskProgress"].GetUint64();
        m_scanRiskProgressHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVirusError") && !rsp["ScanVirusError"].IsNull())
    {
        if (!rsp["ScanVirusError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVirusError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirusError = string(rsp["ScanVirusError"].GetString());
        m_scanVirusErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVulError") && !rsp["ScanVulError"].IsNull())
    {
        if (!rsp["ScanVulError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVulError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulError = string(rsp["ScanVulError"].GetString());
        m_scanVulErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRiskError") && !rsp["ScanRiskError"].IsNull())
    {
        if (!rsp["ScanRiskError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRiskError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanRiskError = string(rsp["ScanRiskError"].GetString());
        m_scanRiskErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ScanStatus") && !rsp["ScanStatus"].IsNull())
    {
        if (!rsp["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(rsp["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("RemainScanTime") && !rsp["RemainScanTime"].IsNull())
    {
        if (!rsp["RemainScanTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainScanTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainScanTime = rsp["RemainScanTime"].GetUint64();
        m_remainScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuthorized") && !rsp["IsAuthorized"].IsNull())
    {
        if (!rsp["IsAuthorized"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuthorized` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = rsp["IsAuthorized"].GetInt64();
        m_isAuthorizedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_hostCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_superNodeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCnt, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCnt, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_sensitiveInfoCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveInfoCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveInfoCnt, allocator);
    }

    if (m_isTrustImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrustImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTrustImage, allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentError.c_str(), allocator).Move(), allocator);
    }

    if (m_scanErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanError.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_buildHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_scanVirusProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVirusProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVirusProgress, allocator);
    }

    if (m_scanVulProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVulProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVulProgress, allocator);
    }

    if (m_scanRiskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRiskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRiskProgress, allocator);
    }

    if (m_scanVirusErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVirusError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanVirusError.c_str(), allocator).Move(), allocator);
    }

    if (m_scanVulErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVulError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanVulError.c_str(), allocator).Move(), allocator);
    }

    if (m_scanRiskErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRiskError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanRiskError.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_virusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virusCnt, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remainScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainScanTime, allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
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


string DescribeAssetImageDetailResponse::GetImageID() const
{
    return m_imageID;
}

bool DescribeAssetImageDetailResponse::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeAssetImageDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetImageDigest() const
{
    return m_imageDigest;
}

bool DescribeAssetImageDetailResponse::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAssetImageDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetSize() const
{
    return m_size;
}

bool DescribeAssetImageDetailResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetHostCnt() const
{
    return m_hostCnt;
}

bool DescribeAssetImageDetailResponse::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetContainerCnt() const
{
    return m_containerCnt;
}

bool DescribeAssetImageDetailResponse::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetSuperNodeCnt() const
{
    return m_superNodeCnt;
}

bool DescribeAssetImageDetailResponse::SuperNodeCntHasBeenSet() const
{
    return m_superNodeCntHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeAssetImageDetailResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetVulCnt() const
{
    return m_vulCnt;
}

bool DescribeAssetImageDetailResponse::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetRiskCnt() const
{
    return m_riskCnt;
}

bool DescribeAssetImageDetailResponse::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetSensitiveInfoCnt() const
{
    return m_sensitiveInfoCnt;
}

bool DescribeAssetImageDetailResponse::SensitiveInfoCntHasBeenSet() const
{
    return m_sensitiveInfoCntHasBeenSet;
}

bool DescribeAssetImageDetailResponse::GetIsTrustImage() const
{
    return m_isTrustImage;
}

bool DescribeAssetImageDetailResponse::IsTrustImageHasBeenSet() const
{
    return m_isTrustImageHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetOsName() const
{
    return m_osName;
}

bool DescribeAssetImageDetailResponse::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetAgentError() const
{
    return m_agentError;
}

bool DescribeAssetImageDetailResponse::AgentErrorHasBeenSet() const
{
    return m_agentErrorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanError() const
{
    return m_scanError;
}

bool DescribeAssetImageDetailResponse::ScanErrorHasBeenSet() const
{
    return m_scanErrorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetArchitecture() const
{
    return m_architecture;
}

bool DescribeAssetImageDetailResponse::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetAuthor() const
{
    return m_author;
}

bool DescribeAssetImageDetailResponse::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetBuildHistory() const
{
    return m_buildHistory;
}

bool DescribeAssetImageDetailResponse::BuildHistoryHasBeenSet() const
{
    return m_buildHistoryHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetScanVirusProgress() const
{
    return m_scanVirusProgress;
}

bool DescribeAssetImageDetailResponse::ScanVirusProgressHasBeenSet() const
{
    return m_scanVirusProgressHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetScanVulProgress() const
{
    return m_scanVulProgress;
}

bool DescribeAssetImageDetailResponse::ScanVulProgressHasBeenSet() const
{
    return m_scanVulProgressHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetScanRiskProgress() const
{
    return m_scanRiskProgress;
}

bool DescribeAssetImageDetailResponse::ScanRiskProgressHasBeenSet() const
{
    return m_scanRiskProgressHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanVirusError() const
{
    return m_scanVirusError;
}

bool DescribeAssetImageDetailResponse::ScanVirusErrorHasBeenSet() const
{
    return m_scanVirusErrorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanVulError() const
{
    return m_scanVulError;
}

bool DescribeAssetImageDetailResponse::ScanVulErrorHasBeenSet() const
{
    return m_scanVulErrorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanRiskError() const
{
    return m_scanRiskError;
}

bool DescribeAssetImageDetailResponse::ScanRiskErrorHasBeenSet() const
{
    return m_scanRiskErrorHasBeenSet;
}

string DescribeAssetImageDetailResponse::GetScanStatus() const
{
    return m_scanStatus;
}

bool DescribeAssetImageDetailResponse::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetVirusCnt() const
{
    return m_virusCnt;
}

bool DescribeAssetImageDetailResponse::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetImageDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeAssetImageDetailResponse::GetRemainScanTime() const
{
    return m_remainScanTime;
}

bool DescribeAssetImageDetailResponse::RemainScanTimeHasBeenSet() const
{
    return m_remainScanTimeHasBeenSet;
}

int64_t DescribeAssetImageDetailResponse::GetIsAuthorized() const
{
    return m_isAuthorized;
}

bool DescribeAssetImageDetailResponse::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}


