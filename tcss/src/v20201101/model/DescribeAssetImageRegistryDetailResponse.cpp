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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageRegistryDetailResponse::DescribeAssetImageRegistryDetailResponse() :
    m_imageDigestHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_sentiveInfoCntHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_scanVirusErrorHasBeenSet(false),
    m_scanVulErrorHasBeenSet(false),
    m_layerInfoHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_scanRiskErrorHasBeenSet(false),
    m_scanVirusProgressHasBeenSet(false),
    m_scanVulProgressHasBeenSet(false),
    m_scanRiskProgressHasBeenSet(false),
    m_scanRemainTimeHasBeenSet(false),
    m_cveStatusHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_virusStatusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_imageCreateTimeHasBeenSet(false),
    m_sensitiveInfoCntHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageRegistryDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageDigest") && !rsp["ImageDigest"].IsNull())
    {
        if (!rsp["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(rsp["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRepoAddress") && !rsp["ImageRepoAddress"].IsNull())
    {
        if (!rsp["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(rsp["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryType") && !rsp["RegistryType"].IsNull())
    {
        if (!rsp["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(rsp["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
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

    if (rsp.HasMember("ImageTag") && !rsp["ImageTag"].IsNull())
    {
        if (!rsp["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(rsp["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
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

    if (rsp.HasMember("ScanStatus") && !rsp["ScanStatus"].IsNull())
    {
        if (!rsp["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(rsp["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
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

    if (rsp.HasMember("RiskCnt") && !rsp["RiskCnt"].IsNull())
    {
        if (!rsp["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = rsp["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (rsp.HasMember("SentiveInfoCnt") && !rsp["SentiveInfoCnt"].IsNull())
    {
        if (!rsp["SentiveInfoCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SentiveInfoCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sentiveInfoCnt = rsp["SentiveInfoCnt"].GetUint64();
        m_sentiveInfoCntHasBeenSet = true;
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

    if (rsp.HasMember("LayerInfo") && !rsp["LayerInfo"].IsNull())
    {
        if (!rsp["LayerInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerInfo = string(rsp["LayerInfo"].GetString());
        m_layerInfoHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
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

    if (rsp.HasMember("ScanRemainTime") && !rsp["ScanRemainTime"].IsNull())
    {
        if (!rsp["ScanRemainTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRemainTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRemainTime = rsp["ScanRemainTime"].GetUint64();
        m_scanRemainTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CveStatus") && !rsp["CveStatus"].IsNull())
    {
        if (!rsp["CveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveStatus = string(rsp["CveStatus"].GetString());
        m_cveStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RiskStatus") && !rsp["RiskStatus"].IsNull())
    {
        if (!rsp["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(rsp["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VirusStatus") && !rsp["VirusStatus"].IsNull())
    {
        if (!rsp["VirusStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusStatus = string(rsp["VirusStatus"].GetString());
        m_virusStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuthorized") && !rsp["IsAuthorized"].IsNull())
    {
        if (!rsp["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = rsp["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSize") && !rsp["ImageSize"].IsNull())
    {
        if (!rsp["ImageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = rsp["ImageSize"].GetUint64();
        m_imageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageId") && !rsp["ImageId"].IsNull())
    {
        if (!rsp["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(rsp["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryRegion") && !rsp["RegistryRegion"].IsNull())
    {
        if (!rsp["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(rsp["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCreateTime") && !rsp["ImageCreateTime"].IsNull())
    {
        if (!rsp["ImageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreateTime = string(rsp["ImageCreateTime"].GetString());
        m_imageCreateTimeHasBeenSet = true;
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

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageRegistryDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRepoAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepoAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepoAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
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

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_sentiveInfoCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentiveInfoCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentiveInfoCnt, allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
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

    if (m_layerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_scanRiskErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRiskError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanRiskError.c_str(), allocator).Move(), allocator);
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

    if (m_scanRemainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRemainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRemainTime, allocator);
    }

    if (m_cveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_virusStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveInfoCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveInfoCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveInfoCnt, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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


string DescribeAssetImageRegistryDetailResponse::GetImageDigest() const
{
    return m_imageDigest;
}

bool DescribeAssetImageRegistryDetailResponse::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

bool DescribeAssetImageRegistryDetailResponse::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetRegistryType() const
{
    return m_registryType;
}

bool DescribeAssetImageRegistryDetailResponse::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeAssetImageRegistryDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetImageTag() const
{
    return m_imageTag;
}

bool DescribeAssetImageRegistryDetailResponse::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeAssetImageRegistryDetailResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetScanStatus() const
{
    return m_scanStatus;
}

bool DescribeAssetImageRegistryDetailResponse::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetVulCnt() const
{
    return m_vulCnt;
}

bool DescribeAssetImageRegistryDetailResponse::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetVirusCnt() const
{
    return m_virusCnt;
}

bool DescribeAssetImageRegistryDetailResponse::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetRiskCnt() const
{
    return m_riskCnt;
}

bool DescribeAssetImageRegistryDetailResponse::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetSentiveInfoCnt() const
{
    return m_sentiveInfoCnt;
}

bool DescribeAssetImageRegistryDetailResponse::SentiveInfoCntHasBeenSet() const
{
    return m_sentiveInfoCntHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetOsName() const
{
    return m_osName;
}

bool DescribeAssetImageRegistryDetailResponse::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetScanVirusError() const
{
    return m_scanVirusError;
}

bool DescribeAssetImageRegistryDetailResponse::ScanVirusErrorHasBeenSet() const
{
    return m_scanVirusErrorHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetScanVulError() const
{
    return m_scanVulError;
}

bool DescribeAssetImageRegistryDetailResponse::ScanVulErrorHasBeenSet() const
{
    return m_scanVulErrorHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetLayerInfo() const
{
    return m_layerInfo;
}

bool DescribeAssetImageRegistryDetailResponse::LayerInfoHasBeenSet() const
{
    return m_layerInfoHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeAssetImageRegistryDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeAssetImageRegistryDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeAssetImageRegistryDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetScanRiskError() const
{
    return m_scanRiskError;
}

bool DescribeAssetImageRegistryDetailResponse::ScanRiskErrorHasBeenSet() const
{
    return m_scanRiskErrorHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetScanVirusProgress() const
{
    return m_scanVirusProgress;
}

bool DescribeAssetImageRegistryDetailResponse::ScanVirusProgressHasBeenSet() const
{
    return m_scanVirusProgressHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetScanVulProgress() const
{
    return m_scanVulProgress;
}

bool DescribeAssetImageRegistryDetailResponse::ScanVulProgressHasBeenSet() const
{
    return m_scanVulProgressHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetScanRiskProgress() const
{
    return m_scanRiskProgress;
}

bool DescribeAssetImageRegistryDetailResponse::ScanRiskProgressHasBeenSet() const
{
    return m_scanRiskProgressHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetScanRemainTime() const
{
    return m_scanRemainTime;
}

bool DescribeAssetImageRegistryDetailResponse::ScanRemainTimeHasBeenSet() const
{
    return m_scanRemainTimeHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetCveStatus() const
{
    return m_cveStatus;
}

bool DescribeAssetImageRegistryDetailResponse::CveStatusHasBeenSet() const
{
    return m_cveStatusHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetRiskStatus() const
{
    return m_riskStatus;
}

bool DescribeAssetImageRegistryDetailResponse::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetVirusStatus() const
{
    return m_virusStatus;
}

bool DescribeAssetImageRegistryDetailResponse::VirusStatusHasBeenSet() const
{
    return m_virusStatusHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeAssetImageRegistryDetailResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetIsAuthorized() const
{
    return m_isAuthorized;
}

bool DescribeAssetImageRegistryDetailResponse::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetImageSize() const
{
    return m_imageSize;
}

bool DescribeAssetImageRegistryDetailResponse::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetImageId() const
{
    return m_imageId;
}

bool DescribeAssetImageRegistryDetailResponse::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetRegistryRegion() const
{
    return m_registryRegion;
}

bool DescribeAssetImageRegistryDetailResponse::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string DescribeAssetImageRegistryDetailResponse::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

bool DescribeAssetImageRegistryDetailResponse::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetSensitiveInfoCnt() const
{
    return m_sensitiveInfoCnt;
}

bool DescribeAssetImageRegistryDetailResponse::SensitiveInfoCntHasBeenSet() const
{
    return m_sensitiveInfoCntHasBeenSet;
}

uint64_t DescribeAssetImageRegistryDetailResponse::GetId() const
{
    return m_id;
}

bool DescribeAssetImageRegistryDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


