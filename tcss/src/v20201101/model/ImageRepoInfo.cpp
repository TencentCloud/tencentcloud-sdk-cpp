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

#include <tencentcloud/tcss/v20201101/model/ImageRepoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageRepoInfo::ImageRepoInfo() :
    m_imageDigestHasBeenSet(false),
    m_imageRepoAddressHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_sentiveInfoCntHasBeenSet(false),
    m_isTrustImageHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_scanVirusErrorHasBeenSet(false),
    m_scanVulErrorHasBeenSet(false),
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
    m_registryRegionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageCreateTimeHasBeenSet(false),
    m_isLatestImageHasBeenSet(false),
    m_lowLevelVulCntHasBeenSet(false),
    m_mediumLevelVulCntHasBeenSet(false),
    m_highLevelVulCntHasBeenSet(false),
    m_criticalLevelVulCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_componentCntHasBeenSet(false),
    m_isRunningHasBeenSet(false),
    m_hasNeedFixVulHasBeenSet(false),
    m_sensitiveInfoCntHasBeenSet(false),
    m_recommendedFixHasBeenSet(false)
{
}

CoreInternalOutcome ImageRepoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageDigest") && !value["ImageDigest"].IsNull())
    {
        if (!value["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(value["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetUint64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("VulCnt") && !value["VulCnt"].IsNull())
    {
        if (!value["VulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.VulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCnt = value["VulCnt"].GetUint64();
        m_vulCntHasBeenSet = true;
    }

    if (value.HasMember("VirusCnt") && !value["VirusCnt"].IsNull())
    {
        if (!value["VirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.VirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusCnt = value["VirusCnt"].GetUint64();
        m_virusCntHasBeenSet = true;
    }

    if (value.HasMember("RiskCnt") && !value["RiskCnt"].IsNull())
    {
        if (!value["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = value["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (value.HasMember("SentiveInfoCnt") && !value["SentiveInfoCnt"].IsNull())
    {
        if (!value["SentiveInfoCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.SentiveInfoCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sentiveInfoCnt = value["SentiveInfoCnt"].GetUint64();
        m_sentiveInfoCntHasBeenSet = true;
    }

    if (value.HasMember("IsTrustImage") && !value["IsTrustImage"].IsNull())
    {
        if (!value["IsTrustImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.IsTrustImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrustImage = value["IsTrustImage"].GetBool();
        m_isTrustImageHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("ScanVirusError") && !value["ScanVirusError"].IsNull())
    {
        if (!value["ScanVirusError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanVirusError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirusError = string(value["ScanVirusError"].GetString());
        m_scanVirusErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanVulError") && !value["ScanVulError"].IsNull())
    {
        if (!value["ScanVulError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanVulError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulError = string(value["ScanVulError"].GetString());
        m_scanVulErrorHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ScanRiskError") && !value["ScanRiskError"].IsNull())
    {
        if (!value["ScanRiskError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanRiskError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanRiskError = string(value["ScanRiskError"].GetString());
        m_scanRiskErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanVirusProgress") && !value["ScanVirusProgress"].IsNull())
    {
        if (!value["ScanVirusProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanVirusProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirusProgress = value["ScanVirusProgress"].GetUint64();
        m_scanVirusProgressHasBeenSet = true;
    }

    if (value.HasMember("ScanVulProgress") && !value["ScanVulProgress"].IsNull())
    {
        if (!value["ScanVulProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanVulProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulProgress = value["ScanVulProgress"].GetUint64();
        m_scanVulProgressHasBeenSet = true;
    }

    if (value.HasMember("ScanRiskProgress") && !value["ScanRiskProgress"].IsNull())
    {
        if (!value["ScanRiskProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanRiskProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRiskProgress = value["ScanRiskProgress"].GetUint64();
        m_scanRiskProgressHasBeenSet = true;
    }

    if (value.HasMember("ScanRemainTime") && !value["ScanRemainTime"].IsNull())
    {
        if (!value["ScanRemainTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ScanRemainTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRemainTime = value["ScanRemainTime"].GetUint64();
        m_scanRemainTimeHasBeenSet = true;
    }

    if (value.HasMember("CveStatus") && !value["CveStatus"].IsNull())
    {
        if (!value["CveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.CveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveStatus = string(value["CveStatus"].GetString());
        m_cveStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("VirusStatus") && !value["VirusStatus"].IsNull())
    {
        if (!value["VirusStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.VirusStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusStatus = string(value["VirusStatus"].GetString());
        m_virusStatusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageCreateTime") && !value["ImageCreateTime"].IsNull())
    {
        if (!value["ImageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ImageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreateTime = string(value["ImageCreateTime"].GetString());
        m_imageCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVulCnt") && !value["LowLevelVulCnt"].IsNull())
    {
        if (!value["LowLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.LowLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCnt = value["LowLevelVulCnt"].GetUint64();
        m_lowLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVulCnt") && !value["MediumLevelVulCnt"].IsNull())
    {
        if (!value["MediumLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.MediumLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCnt = value["MediumLevelVulCnt"].GetUint64();
        m_mediumLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVulCnt") && !value["HighLevelVulCnt"].IsNull())
    {
        if (!value["HighLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.HighLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCnt = value["HighLevelVulCnt"].GetUint64();
        m_highLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVulCnt") && !value["CriticalLevelVulCnt"].IsNull())
    {
        if (!value["CriticalLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.CriticalLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCnt = value["CriticalLevelVulCnt"].GetUint64();
        m_criticalLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("ComponentCnt") && !value["ComponentCnt"].IsNull())
    {
        if (!value["ComponentCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.ComponentCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentCnt = value["ComponentCnt"].GetUint64();
        m_componentCntHasBeenSet = true;
    }

    if (value.HasMember("IsRunning") && !value["IsRunning"].IsNull())
    {
        if (!value["IsRunning"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.IsRunning` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRunning = value["IsRunning"].GetBool();
        m_isRunningHasBeenSet = true;
    }

    if (value.HasMember("HasNeedFixVul") && !value["HasNeedFixVul"].IsNull())
    {
        if (!value["HasNeedFixVul"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.HasNeedFixVul` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasNeedFixVul = value["HasNeedFixVul"].GetBool();
        m_hasNeedFixVulHasBeenSet = true;
    }

    if (value.HasMember("SensitiveInfoCnt") && !value["SensitiveInfoCnt"].IsNull())
    {
        if (!value["SensitiveInfoCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.SensitiveInfoCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveInfoCnt = value["SensitiveInfoCnt"].GetUint64();
        m_sensitiveInfoCntHasBeenSet = true;
    }

    if (value.HasMember("RecommendedFix") && !value["RecommendedFix"].IsNull())
    {
        if (!value["RecommendedFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoInfo.RecommendedFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recommendedFix = value["RecommendedFix"].GetBool();
        m_recommendedFixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRepoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
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

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isLatestImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestImage, allocator);
    }

    if (m_lowLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulCnt, allocator);
    }

    if (m_mediumLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulCnt, allocator);
    }

    if (m_highLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulCnt, allocator);
    }

    if (m_criticalLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_componentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentCnt, allocator);
    }

    if (m_isRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRunning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRunning, allocator);
    }

    if (m_hasNeedFixVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasNeedFixVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasNeedFixVul, allocator);
    }

    if (m_sensitiveInfoCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveInfoCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveInfoCnt, allocator);
    }

    if (m_recommendedFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendedFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendedFix, allocator);
    }

}


string ImageRepoInfo::GetImageDigest() const
{
    return m_imageDigest;
}

void ImageRepoInfo::SetImageDigest(const string& _imageDigest)
{
    m_imageDigest = _imageDigest;
    m_imageDigestHasBeenSet = true;
}

bool ImageRepoInfo::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string ImageRepoInfo::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void ImageRepoInfo::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool ImageRepoInfo::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

string ImageRepoInfo::GetRegistryType() const
{
    return m_registryType;
}

void ImageRepoInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageRepoInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ImageRepoInfo::GetImageName() const
{
    return m_imageName;
}

void ImageRepoInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageRepoInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImageRepoInfo::GetImageTag() const
{
    return m_imageTag;
}

void ImageRepoInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ImageRepoInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

uint64_t ImageRepoInfo::GetImageSize() const
{
    return m_imageSize;
}

void ImageRepoInfo::SetImageSize(const uint64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool ImageRepoInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string ImageRepoInfo::GetScanTime() const
{
    return m_scanTime;
}

void ImageRepoInfo::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool ImageRepoInfo::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string ImageRepoInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void ImageRepoInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ImageRepoInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t ImageRepoInfo::GetVulCnt() const
{
    return m_vulCnt;
}

void ImageRepoInfo::SetVulCnt(const uint64_t& _vulCnt)
{
    m_vulCnt = _vulCnt;
    m_vulCntHasBeenSet = true;
}

bool ImageRepoInfo::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetVirusCnt() const
{
    return m_virusCnt;
}

void ImageRepoInfo::SetVirusCnt(const uint64_t& _virusCnt)
{
    m_virusCnt = _virusCnt;
    m_virusCntHasBeenSet = true;
}

bool ImageRepoInfo::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetRiskCnt() const
{
    return m_riskCnt;
}

void ImageRepoInfo::SetRiskCnt(const uint64_t& _riskCnt)
{
    m_riskCnt = _riskCnt;
    m_riskCntHasBeenSet = true;
}

bool ImageRepoInfo::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetSentiveInfoCnt() const
{
    return m_sentiveInfoCnt;
}

void ImageRepoInfo::SetSentiveInfoCnt(const uint64_t& _sentiveInfoCnt)
{
    m_sentiveInfoCnt = _sentiveInfoCnt;
    m_sentiveInfoCntHasBeenSet = true;
}

bool ImageRepoInfo::SentiveInfoCntHasBeenSet() const
{
    return m_sentiveInfoCntHasBeenSet;
}

bool ImageRepoInfo::GetIsTrustImage() const
{
    return m_isTrustImage;
}

void ImageRepoInfo::SetIsTrustImage(const bool& _isTrustImage)
{
    m_isTrustImage = _isTrustImage;
    m_isTrustImageHasBeenSet = true;
}

bool ImageRepoInfo::IsTrustImageHasBeenSet() const
{
    return m_isTrustImageHasBeenSet;
}

string ImageRepoInfo::GetOsName() const
{
    return m_osName;
}

void ImageRepoInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ImageRepoInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ImageRepoInfo::GetScanVirusError() const
{
    return m_scanVirusError;
}

void ImageRepoInfo::SetScanVirusError(const string& _scanVirusError)
{
    m_scanVirusError = _scanVirusError;
    m_scanVirusErrorHasBeenSet = true;
}

bool ImageRepoInfo::ScanVirusErrorHasBeenSet() const
{
    return m_scanVirusErrorHasBeenSet;
}

string ImageRepoInfo::GetScanVulError() const
{
    return m_scanVulError;
}

void ImageRepoInfo::SetScanVulError(const string& _scanVulError)
{
    m_scanVulError = _scanVulError;
    m_scanVulErrorHasBeenSet = true;
}

bool ImageRepoInfo::ScanVulErrorHasBeenSet() const
{
    return m_scanVulErrorHasBeenSet;
}

string ImageRepoInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ImageRepoInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ImageRepoInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ImageRepoInfo::GetInstanceName() const
{
    return m_instanceName;
}

void ImageRepoInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ImageRepoInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ImageRepoInfo::GetNamespace() const
{
    return m_namespace;
}

void ImageRepoInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ImageRepoInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ImageRepoInfo::GetScanRiskError() const
{
    return m_scanRiskError;
}

void ImageRepoInfo::SetScanRiskError(const string& _scanRiskError)
{
    m_scanRiskError = _scanRiskError;
    m_scanRiskErrorHasBeenSet = true;
}

bool ImageRepoInfo::ScanRiskErrorHasBeenSet() const
{
    return m_scanRiskErrorHasBeenSet;
}

uint64_t ImageRepoInfo::GetScanVirusProgress() const
{
    return m_scanVirusProgress;
}

void ImageRepoInfo::SetScanVirusProgress(const uint64_t& _scanVirusProgress)
{
    m_scanVirusProgress = _scanVirusProgress;
    m_scanVirusProgressHasBeenSet = true;
}

bool ImageRepoInfo::ScanVirusProgressHasBeenSet() const
{
    return m_scanVirusProgressHasBeenSet;
}

uint64_t ImageRepoInfo::GetScanVulProgress() const
{
    return m_scanVulProgress;
}

void ImageRepoInfo::SetScanVulProgress(const uint64_t& _scanVulProgress)
{
    m_scanVulProgress = _scanVulProgress;
    m_scanVulProgressHasBeenSet = true;
}

bool ImageRepoInfo::ScanVulProgressHasBeenSet() const
{
    return m_scanVulProgressHasBeenSet;
}

uint64_t ImageRepoInfo::GetScanRiskProgress() const
{
    return m_scanRiskProgress;
}

void ImageRepoInfo::SetScanRiskProgress(const uint64_t& _scanRiskProgress)
{
    m_scanRiskProgress = _scanRiskProgress;
    m_scanRiskProgressHasBeenSet = true;
}

bool ImageRepoInfo::ScanRiskProgressHasBeenSet() const
{
    return m_scanRiskProgressHasBeenSet;
}

uint64_t ImageRepoInfo::GetScanRemainTime() const
{
    return m_scanRemainTime;
}

void ImageRepoInfo::SetScanRemainTime(const uint64_t& _scanRemainTime)
{
    m_scanRemainTime = _scanRemainTime;
    m_scanRemainTimeHasBeenSet = true;
}

bool ImageRepoInfo::ScanRemainTimeHasBeenSet() const
{
    return m_scanRemainTimeHasBeenSet;
}

string ImageRepoInfo::GetCveStatus() const
{
    return m_cveStatus;
}

void ImageRepoInfo::SetCveStatus(const string& _cveStatus)
{
    m_cveStatus = _cveStatus;
    m_cveStatusHasBeenSet = true;
}

bool ImageRepoInfo::CveStatusHasBeenSet() const
{
    return m_cveStatusHasBeenSet;
}

string ImageRepoInfo::GetRiskStatus() const
{
    return m_riskStatus;
}

void ImageRepoInfo::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool ImageRepoInfo::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

string ImageRepoInfo::GetVirusStatus() const
{
    return m_virusStatus;
}

void ImageRepoInfo::SetVirusStatus(const string& _virusStatus)
{
    m_virusStatus = _virusStatus;
    m_virusStatusHasBeenSet = true;
}

bool ImageRepoInfo::VirusStatusHasBeenSet() const
{
    return m_virusStatusHasBeenSet;
}

uint64_t ImageRepoInfo::GetProgress() const
{
    return m_progress;
}

void ImageRepoInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ImageRepoInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t ImageRepoInfo::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void ImageRepoInfo::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool ImageRepoInfo::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

string ImageRepoInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ImageRepoInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ImageRepoInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

uint64_t ImageRepoInfo::GetId() const
{
    return m_id;
}

void ImageRepoInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageRepoInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageRepoInfo::GetImageId() const
{
    return m_imageId;
}

void ImageRepoInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageRepoInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageRepoInfo::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

void ImageRepoInfo::SetImageCreateTime(const string& _imageCreateTime)
{
    m_imageCreateTime = _imageCreateTime;
    m_imageCreateTimeHasBeenSet = true;
}

bool ImageRepoInfo::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
}

bool ImageRepoInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void ImageRepoInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool ImageRepoInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

uint64_t ImageRepoInfo::GetLowLevelVulCnt() const
{
    return m_lowLevelVulCnt;
}

void ImageRepoInfo::SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt)
{
    m_lowLevelVulCnt = _lowLevelVulCnt;
    m_lowLevelVulCntHasBeenSet = true;
}

bool ImageRepoInfo::LowLevelVulCntHasBeenSet() const
{
    return m_lowLevelVulCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetMediumLevelVulCnt() const
{
    return m_mediumLevelVulCnt;
}

void ImageRepoInfo::SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt)
{
    m_mediumLevelVulCnt = _mediumLevelVulCnt;
    m_mediumLevelVulCntHasBeenSet = true;
}

bool ImageRepoInfo::MediumLevelVulCntHasBeenSet() const
{
    return m_mediumLevelVulCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetHighLevelVulCnt() const
{
    return m_highLevelVulCnt;
}

void ImageRepoInfo::SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt)
{
    m_highLevelVulCnt = _highLevelVulCnt;
    m_highLevelVulCntHasBeenSet = true;
}

bool ImageRepoInfo::HighLevelVulCntHasBeenSet() const
{
    return m_highLevelVulCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetCriticalLevelVulCnt() const
{
    return m_criticalLevelVulCnt;
}

void ImageRepoInfo::SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt)
{
    m_criticalLevelVulCnt = _criticalLevelVulCnt;
    m_criticalLevelVulCntHasBeenSet = true;
}

bool ImageRepoInfo::CriticalLevelVulCntHasBeenSet() const
{
    return m_criticalLevelVulCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void ImageRepoInfo::SetContainerCnt(const uint64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool ImageRepoInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

uint64_t ImageRepoInfo::GetComponentCnt() const
{
    return m_componentCnt;
}

void ImageRepoInfo::SetComponentCnt(const uint64_t& _componentCnt)
{
    m_componentCnt = _componentCnt;
    m_componentCntHasBeenSet = true;
}

bool ImageRepoInfo::ComponentCntHasBeenSet() const
{
    return m_componentCntHasBeenSet;
}

bool ImageRepoInfo::GetIsRunning() const
{
    return m_isRunning;
}

void ImageRepoInfo::SetIsRunning(const bool& _isRunning)
{
    m_isRunning = _isRunning;
    m_isRunningHasBeenSet = true;
}

bool ImageRepoInfo::IsRunningHasBeenSet() const
{
    return m_isRunningHasBeenSet;
}

bool ImageRepoInfo::GetHasNeedFixVul() const
{
    return m_hasNeedFixVul;
}

void ImageRepoInfo::SetHasNeedFixVul(const bool& _hasNeedFixVul)
{
    m_hasNeedFixVul = _hasNeedFixVul;
    m_hasNeedFixVulHasBeenSet = true;
}

bool ImageRepoInfo::HasNeedFixVulHasBeenSet() const
{
    return m_hasNeedFixVulHasBeenSet;
}

uint64_t ImageRepoInfo::GetSensitiveInfoCnt() const
{
    return m_sensitiveInfoCnt;
}

void ImageRepoInfo::SetSensitiveInfoCnt(const uint64_t& _sensitiveInfoCnt)
{
    m_sensitiveInfoCnt = _sensitiveInfoCnt;
    m_sensitiveInfoCntHasBeenSet = true;
}

bool ImageRepoInfo::SensitiveInfoCntHasBeenSet() const
{
    return m_sensitiveInfoCntHasBeenSet;
}

bool ImageRepoInfo::GetRecommendedFix() const
{
    return m_recommendedFix;
}

void ImageRepoInfo::SetRecommendedFix(const bool& _recommendedFix)
{
    m_recommendedFix = _recommendedFix;
    m_recommendedFixHasBeenSet = true;
}

bool ImageRepoInfo::RecommendedFixHasBeenSet() const
{
    return m_recommendedFixHasBeenSet;
}

