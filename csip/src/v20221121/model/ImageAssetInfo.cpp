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

#include <tencentcloud/csip/v20221121/model/ImageAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageAssetInfo::ImageAssetInfo() :
    m_imageRepoAddressHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_sensitiveCntHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
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
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_lowLevelVirusCntHasBeenSet(false),
    m_mediumLevelVirusCntHasBeenSet(false),
    m_highLevelVirusCntHasBeenSet(false),
    m_criticalLevelVirusCntHasBeenSet(false),
    m_emergencyVulCntHasBeenSet(false),
    m_lowLevelSensitiveCntHasBeenSet(false),
    m_mediumLevelSensitiveCntHasBeenSet(false),
    m_highLevelSensitiveCntHasBeenSet(false),
    m_criticalLevelSensitiveCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_scanFailReasonHasBeenSet(false),
    m_scanSolutionHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_scanTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageRepoAddress") && !value["ImageRepoAddress"].IsNull())
    {
        if (!value["ImageRepoAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageRepoAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepoAddress = string(value["ImageRepoAddress"].GetString());
        m_imageRepoAddressHasBeenSet = true;
    }

    if (value.HasMember("ImageDigest") && !value["ImageDigest"].IsNull())
    {
        if (!value["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(value["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetUint64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("VulCnt") && !value["VulCnt"].IsNull())
    {
        if (!value["VulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.VulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCnt = value["VulCnt"].GetUint64();
        m_vulCntHasBeenSet = true;
    }

    if (value.HasMember("VirusCnt") && !value["VirusCnt"].IsNull())
    {
        if (!value["VirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.VirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusCnt = value["VirusCnt"].GetUint64();
        m_virusCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCnt") && !value["SensitiveCnt"].IsNull())
    {
        if (!value["SensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.SensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCnt = value["SensitiveCnt"].GetUint64();
        m_sensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageCreateTime") && !value["ImageCreateTime"].IsNull())
    {
        if (!value["ImageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ImageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreateTime = string(value["ImageCreateTime"].GetString());
        m_imageCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVulCnt") && !value["LowLevelVulCnt"].IsNull())
    {
        if (!value["LowLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.LowLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCnt = value["LowLevelVulCnt"].GetUint64();
        m_lowLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVulCnt") && !value["MediumLevelVulCnt"].IsNull())
    {
        if (!value["MediumLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.MediumLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCnt = value["MediumLevelVulCnt"].GetUint64();
        m_mediumLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVulCnt") && !value["HighLevelVulCnt"].IsNull())
    {
        if (!value["HighLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.HighLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCnt = value["HighLevelVulCnt"].GetUint64();
        m_highLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVulCnt") && !value["CriticalLevelVulCnt"].IsNull())
    {
        if (!value["CriticalLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.CriticalLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCnt = value["CriticalLevelVulCnt"].GetUint64();
        m_criticalLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVirusCnt") && !value["LowLevelVirusCnt"].IsNull())
    {
        if (!value["LowLevelVirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.LowLevelVirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVirusCnt = value["LowLevelVirusCnt"].GetUint64();
        m_lowLevelVirusCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVirusCnt") && !value["MediumLevelVirusCnt"].IsNull())
    {
        if (!value["MediumLevelVirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.MediumLevelVirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVirusCnt = value["MediumLevelVirusCnt"].GetUint64();
        m_mediumLevelVirusCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVirusCnt") && !value["HighLevelVirusCnt"].IsNull())
    {
        if (!value["HighLevelVirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.HighLevelVirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVirusCnt = value["HighLevelVirusCnt"].GetUint64();
        m_highLevelVirusCntHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVirusCnt") && !value["CriticalLevelVirusCnt"].IsNull())
    {
        if (!value["CriticalLevelVirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.CriticalLevelVirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVirusCnt = value["CriticalLevelVirusCnt"].GetUint64();
        m_criticalLevelVirusCntHasBeenSet = true;
    }

    if (value.HasMember("EmergencyVulCnt") && !value["EmergencyVulCnt"].IsNull())
    {
        if (!value["EmergencyVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.EmergencyVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyVulCnt = value["EmergencyVulCnt"].GetUint64();
        m_emergencyVulCntHasBeenSet = true;
    }

    if (value.HasMember("LowLevelSensitiveCnt") && !value["LowLevelSensitiveCnt"].IsNull())
    {
        if (!value["LowLevelSensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.LowLevelSensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelSensitiveCnt = value["LowLevelSensitiveCnt"].GetUint64();
        m_lowLevelSensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelSensitiveCnt") && !value["MediumLevelSensitiveCnt"].IsNull())
    {
        if (!value["MediumLevelSensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.MediumLevelSensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelSensitiveCnt = value["MediumLevelSensitiveCnt"].GetUint64();
        m_mediumLevelSensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelSensitiveCnt") && !value["HighLevelSensitiveCnt"].IsNull())
    {
        if (!value["HighLevelSensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.HighLevelSensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelSensitiveCnt = value["HighLevelSensitiveCnt"].GetUint64();
        m_highLevelSensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelSensitiveCnt") && !value["CriticalLevelSensitiveCnt"].IsNull())
    {
        if (!value["CriticalLevelSensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.CriticalLevelSensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelSensitiveCnt = value["CriticalLevelSensitiveCnt"].GetUint64();
        m_criticalLevelSensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("RiskCnt") && !value["RiskCnt"].IsNull())
    {
        if (!value["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = value["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (value.HasMember("ScanFailReason") && !value["ScanFailReason"].IsNull())
    {
        if (!value["ScanFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ScanFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanFailReason = string(value["ScanFailReason"].GetString());
        m_scanFailReasonHasBeenSet = true;
    }

    if (value.HasMember("ScanSolution") && !value["ScanSolution"].IsNull())
    {
        if (!value["ScanSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ScanSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanSolution = string(value["ScanSolution"].GetString());
        m_scanSolutionHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("ScanTaskId") && !value["ScanTaskId"].IsNull())
    {
        if (!value["ScanTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssetInfo.ScanTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTaskId = value["ScanTaskId"].GetUint64();
        m_scanTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageRepoAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepoAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepoAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
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

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
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

    if (m_sensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCnt, allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_lowLevelVirusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVirusCnt, allocator);
    }

    if (m_mediumLevelVirusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVirusCnt, allocator);
    }

    if (m_highLevelVirusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVirusCnt, allocator);
    }

    if (m_criticalLevelVirusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVirusCnt, allocator);
    }

    if (m_emergencyVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyVulCnt, allocator);
    }

    if (m_lowLevelSensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelSensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelSensitiveCnt, allocator);
    }

    if (m_mediumLevelSensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelSensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelSensitiveCnt, allocator);
    }

    if (m_highLevelSensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelSensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelSensitiveCnt, allocator);
    }

    if (m_criticalLevelSensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelSensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelSensitiveCnt, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_scanFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_scanSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scanTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTaskId, allocator);
    }

}


string ImageAssetInfo::GetImageRepoAddress() const
{
    return m_imageRepoAddress;
}

void ImageAssetInfo::SetImageRepoAddress(const string& _imageRepoAddress)
{
    m_imageRepoAddress = _imageRepoAddress;
    m_imageRepoAddressHasBeenSet = true;
}

bool ImageAssetInfo::ImageRepoAddressHasBeenSet() const
{
    return m_imageRepoAddressHasBeenSet;
}

string ImageAssetInfo::GetImageDigest() const
{
    return m_imageDigest;
}

void ImageAssetInfo::SetImageDigest(const string& _imageDigest)
{
    m_imageDigest = _imageDigest;
    m_imageDigestHasBeenSet = true;
}

bool ImageAssetInfo::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string ImageAssetInfo::GetRegistryType() const
{
    return m_registryType;
}

void ImageAssetInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageAssetInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ImageAssetInfo::GetImageName() const
{
    return m_imageName;
}

void ImageAssetInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageAssetInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImageAssetInfo::GetImageTag() const
{
    return m_imageTag;
}

void ImageAssetInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ImageAssetInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

uint64_t ImageAssetInfo::GetImageSize() const
{
    return m_imageSize;
}

void ImageAssetInfo::SetImageSize(const uint64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool ImageAssetInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string ImageAssetInfo::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void ImageAssetInfo::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool ImageAssetInfo::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string ImageAssetInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void ImageAssetInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ImageAssetInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t ImageAssetInfo::GetVulCnt() const
{
    return m_vulCnt;
}

void ImageAssetInfo::SetVulCnt(const uint64_t& _vulCnt)
{
    m_vulCnt = _vulCnt;
    m_vulCntHasBeenSet = true;
}

bool ImageAssetInfo::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetVirusCnt() const
{
    return m_virusCnt;
}

void ImageAssetInfo::SetVirusCnt(const uint64_t& _virusCnt)
{
    m_virusCnt = _virusCnt;
    m_virusCntHasBeenSet = true;
}

bool ImageAssetInfo::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetSensitiveCnt() const
{
    return m_sensitiveCnt;
}

void ImageAssetInfo::SetSensitiveCnt(const uint64_t& _sensitiveCnt)
{
    m_sensitiveCnt = _sensitiveCnt;
    m_sensitiveCntHasBeenSet = true;
}

bool ImageAssetInfo::SensitiveCntHasBeenSet() const
{
    return m_sensitiveCntHasBeenSet;
}

string ImageAssetInfo::GetOsName() const
{
    return m_osName;
}

void ImageAssetInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ImageAssetInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ImageAssetInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ImageAssetInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ImageAssetInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ImageAssetInfo::GetInstanceName() const
{
    return m_instanceName;
}

void ImageAssetInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ImageAssetInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ImageAssetInfo::GetNamespace() const
{
    return m_namespace;
}

void ImageAssetInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ImageAssetInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

uint64_t ImageAssetInfo::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void ImageAssetInfo::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool ImageAssetInfo::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

string ImageAssetInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ImageAssetInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ImageAssetInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string ImageAssetInfo::GetId() const
{
    return m_id;
}

void ImageAssetInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageAssetInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageAssetInfo::GetImageId() const
{
    return m_imageId;
}

void ImageAssetInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageAssetInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageAssetInfo::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

void ImageAssetInfo::SetImageCreateTime(const string& _imageCreateTime)
{
    m_imageCreateTime = _imageCreateTime;
    m_imageCreateTimeHasBeenSet = true;
}

bool ImageAssetInfo::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
}

bool ImageAssetInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void ImageAssetInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool ImageAssetInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

uint64_t ImageAssetInfo::GetLowLevelVulCnt() const
{
    return m_lowLevelVulCnt;
}

void ImageAssetInfo::SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt)
{
    m_lowLevelVulCnt = _lowLevelVulCnt;
    m_lowLevelVulCntHasBeenSet = true;
}

bool ImageAssetInfo::LowLevelVulCntHasBeenSet() const
{
    return m_lowLevelVulCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetMediumLevelVulCnt() const
{
    return m_mediumLevelVulCnt;
}

void ImageAssetInfo::SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt)
{
    m_mediumLevelVulCnt = _mediumLevelVulCnt;
    m_mediumLevelVulCntHasBeenSet = true;
}

bool ImageAssetInfo::MediumLevelVulCntHasBeenSet() const
{
    return m_mediumLevelVulCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetHighLevelVulCnt() const
{
    return m_highLevelVulCnt;
}

void ImageAssetInfo::SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt)
{
    m_highLevelVulCnt = _highLevelVulCnt;
    m_highLevelVulCntHasBeenSet = true;
}

bool ImageAssetInfo::HighLevelVulCntHasBeenSet() const
{
    return m_highLevelVulCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetCriticalLevelVulCnt() const
{
    return m_criticalLevelVulCnt;
}

void ImageAssetInfo::SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt)
{
    m_criticalLevelVulCnt = _criticalLevelVulCnt;
    m_criticalLevelVulCntHasBeenSet = true;
}

bool ImageAssetInfo::CriticalLevelVulCntHasBeenSet() const
{
    return m_criticalLevelVulCntHasBeenSet;
}

string ImageAssetInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageAssetInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageAssetInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageAssetInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageAssetInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageAssetInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageAssetInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageAssetInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageAssetInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageAssetInfo::GetLowLevelVirusCnt() const
{
    return m_lowLevelVirusCnt;
}

void ImageAssetInfo::SetLowLevelVirusCnt(const uint64_t& _lowLevelVirusCnt)
{
    m_lowLevelVirusCnt = _lowLevelVirusCnt;
    m_lowLevelVirusCntHasBeenSet = true;
}

bool ImageAssetInfo::LowLevelVirusCntHasBeenSet() const
{
    return m_lowLevelVirusCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetMediumLevelVirusCnt() const
{
    return m_mediumLevelVirusCnt;
}

void ImageAssetInfo::SetMediumLevelVirusCnt(const uint64_t& _mediumLevelVirusCnt)
{
    m_mediumLevelVirusCnt = _mediumLevelVirusCnt;
    m_mediumLevelVirusCntHasBeenSet = true;
}

bool ImageAssetInfo::MediumLevelVirusCntHasBeenSet() const
{
    return m_mediumLevelVirusCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetHighLevelVirusCnt() const
{
    return m_highLevelVirusCnt;
}

void ImageAssetInfo::SetHighLevelVirusCnt(const uint64_t& _highLevelVirusCnt)
{
    m_highLevelVirusCnt = _highLevelVirusCnt;
    m_highLevelVirusCntHasBeenSet = true;
}

bool ImageAssetInfo::HighLevelVirusCntHasBeenSet() const
{
    return m_highLevelVirusCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetCriticalLevelVirusCnt() const
{
    return m_criticalLevelVirusCnt;
}

void ImageAssetInfo::SetCriticalLevelVirusCnt(const uint64_t& _criticalLevelVirusCnt)
{
    m_criticalLevelVirusCnt = _criticalLevelVirusCnt;
    m_criticalLevelVirusCntHasBeenSet = true;
}

bool ImageAssetInfo::CriticalLevelVirusCntHasBeenSet() const
{
    return m_criticalLevelVirusCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetEmergencyVulCnt() const
{
    return m_emergencyVulCnt;
}

void ImageAssetInfo::SetEmergencyVulCnt(const uint64_t& _emergencyVulCnt)
{
    m_emergencyVulCnt = _emergencyVulCnt;
    m_emergencyVulCntHasBeenSet = true;
}

bool ImageAssetInfo::EmergencyVulCntHasBeenSet() const
{
    return m_emergencyVulCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetLowLevelSensitiveCnt() const
{
    return m_lowLevelSensitiveCnt;
}

void ImageAssetInfo::SetLowLevelSensitiveCnt(const uint64_t& _lowLevelSensitiveCnt)
{
    m_lowLevelSensitiveCnt = _lowLevelSensitiveCnt;
    m_lowLevelSensitiveCntHasBeenSet = true;
}

bool ImageAssetInfo::LowLevelSensitiveCntHasBeenSet() const
{
    return m_lowLevelSensitiveCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetMediumLevelSensitiveCnt() const
{
    return m_mediumLevelSensitiveCnt;
}

void ImageAssetInfo::SetMediumLevelSensitiveCnt(const uint64_t& _mediumLevelSensitiveCnt)
{
    m_mediumLevelSensitiveCnt = _mediumLevelSensitiveCnt;
    m_mediumLevelSensitiveCntHasBeenSet = true;
}

bool ImageAssetInfo::MediumLevelSensitiveCntHasBeenSet() const
{
    return m_mediumLevelSensitiveCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetHighLevelSensitiveCnt() const
{
    return m_highLevelSensitiveCnt;
}

void ImageAssetInfo::SetHighLevelSensitiveCnt(const uint64_t& _highLevelSensitiveCnt)
{
    m_highLevelSensitiveCnt = _highLevelSensitiveCnt;
    m_highLevelSensitiveCntHasBeenSet = true;
}

bool ImageAssetInfo::HighLevelSensitiveCntHasBeenSet() const
{
    return m_highLevelSensitiveCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetCriticalLevelSensitiveCnt() const
{
    return m_criticalLevelSensitiveCnt;
}

void ImageAssetInfo::SetCriticalLevelSensitiveCnt(const uint64_t& _criticalLevelSensitiveCnt)
{
    m_criticalLevelSensitiveCnt = _criticalLevelSensitiveCnt;
    m_criticalLevelSensitiveCntHasBeenSet = true;
}

bool ImageAssetInfo::CriticalLevelSensitiveCntHasBeenSet() const
{
    return m_criticalLevelSensitiveCntHasBeenSet;
}

uint64_t ImageAssetInfo::GetRiskCnt() const
{
    return m_riskCnt;
}

void ImageAssetInfo::SetRiskCnt(const uint64_t& _riskCnt)
{
    m_riskCnt = _riskCnt;
    m_riskCntHasBeenSet = true;
}

bool ImageAssetInfo::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

string ImageAssetInfo::GetScanFailReason() const
{
    return m_scanFailReason;
}

void ImageAssetInfo::SetScanFailReason(const string& _scanFailReason)
{
    m_scanFailReason = _scanFailReason;
    m_scanFailReasonHasBeenSet = true;
}

bool ImageAssetInfo::ScanFailReasonHasBeenSet() const
{
    return m_scanFailReasonHasBeenSet;
}

string ImageAssetInfo::GetScanSolution() const
{
    return m_scanSolution;
}

void ImageAssetInfo::SetScanSolution(const string& _scanSolution)
{
    m_scanSolution = _scanSolution;
    m_scanSolutionHasBeenSet = true;
}

bool ImageAssetInfo::ScanSolutionHasBeenSet() const
{
    return m_scanSolutionHasBeenSet;
}

RegionInfo ImageAssetInfo::GetRegionInfo() const
{
    return m_regionInfo;
}

void ImageAssetInfo::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool ImageAssetInfo::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

uint64_t ImageAssetInfo::GetScanTaskId() const
{
    return m_scanTaskId;
}

void ImageAssetInfo::SetScanTaskId(const uint64_t& _scanTaskId)
{
    m_scanTaskId = _scanTaskId;
    m_scanTaskIdHasBeenSet = true;
}

bool ImageAssetInfo::ScanTaskIdHasBeenSet() const
{
    return m_scanTaskIdHasBeenSet;
}

