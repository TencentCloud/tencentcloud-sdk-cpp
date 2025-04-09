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

#include <tencentcloud/tcss/v20201101/model/ImagesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImagesInfo::ImagesInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_hostCntHasBeenSet(false),
    m_superNodeCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_isTrustImageHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_agentErrorHasBeenSet(false),
    m_scanErrorHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanVirusErrorHasBeenSet(false),
    m_scanVulErrorHasBeenSet(false),
    m_scanRiskErrorHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false),
    m_componentCntHasBeenSet(false),
    m_criticalLevelVulCntHasBeenSet(false),
    m_highLevelVulCntHasBeenSet(false),
    m_mediumLevelVulCntHasBeenSet(false),
    m_lowLevelVulCntHasBeenSet(false),
    m_isLatestImageHasBeenSet(false),
    m_recommendedFixHasBeenSet(false)
{
}

CoreInternalOutcome ImagesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("HostCnt") && !value["HostCnt"].IsNull())
    {
        if (!value["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = value["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
    }

    if (value.HasMember("SuperNodeCnt") && !value["SuperNodeCnt"].IsNull())
    {
        if (!value["SuperNodeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.SuperNodeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCnt = value["SuperNodeCnt"].GetUint64();
        m_superNodeCntHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("VulCnt") && !value["VulCnt"].IsNull())
    {
        if (!value["VulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.VulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCnt = value["VulCnt"].GetUint64();
        m_vulCntHasBeenSet = true;
    }

    if (value.HasMember("VirusCnt") && !value["VirusCnt"].IsNull())
    {
        if (!value["VirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.VirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusCnt = value["VirusCnt"].GetUint64();
        m_virusCntHasBeenSet = true;
    }

    if (value.HasMember("RiskCnt") && !value["RiskCnt"].IsNull())
    {
        if (!value["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = value["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (value.HasMember("IsTrustImage") && !value["IsTrustImage"].IsNull())
    {
        if (!value["IsTrustImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.IsTrustImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrustImage = value["IsTrustImage"].GetBool();
        m_isTrustImageHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("AgentError") && !value["AgentError"].IsNull())
    {
        if (!value["AgentError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.AgentError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentError = string(value["AgentError"].GetString());
        m_agentErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanError") && !value["ScanError"].IsNull())
    {
        if (!value["ScanError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanError = string(value["ScanError"].GetString());
        m_scanErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanVirusError") && !value["ScanVirusError"].IsNull())
    {
        if (!value["ScanVirusError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanVirusError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirusError = string(value["ScanVirusError"].GetString());
        m_scanVirusErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanVulError") && !value["ScanVulError"].IsNull())
    {
        if (!value["ScanVulError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanVulError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanVulError = string(value["ScanVulError"].GetString());
        m_scanVulErrorHasBeenSet = true;
    }

    if (value.HasMember("ScanRiskError") && !value["ScanRiskError"].IsNull())
    {
        if (!value["ScanRiskError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ScanRiskError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanRiskError = string(value["ScanRiskError"].GetString());
        m_scanRiskErrorHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.IsSuggest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = value["IsSuggest"].GetUint64();
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("ComponentCnt") && !value["ComponentCnt"].IsNull())
    {
        if (!value["ComponentCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.ComponentCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentCnt = value["ComponentCnt"].GetUint64();
        m_componentCntHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVulCnt") && !value["CriticalLevelVulCnt"].IsNull())
    {
        if (!value["CriticalLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.CriticalLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCnt = value["CriticalLevelVulCnt"].GetUint64();
        m_criticalLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVulCnt") && !value["HighLevelVulCnt"].IsNull())
    {
        if (!value["HighLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.HighLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCnt = value["HighLevelVulCnt"].GetUint64();
        m_highLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVulCnt") && !value["MediumLevelVulCnt"].IsNull())
    {
        if (!value["MediumLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.MediumLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCnt = value["MediumLevelVulCnt"].GetUint64();
        m_mediumLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVulCnt") && !value["LowLevelVulCnt"].IsNull())
    {
        if (!value["LowLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.LowLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCnt = value["LowLevelVulCnt"].GetUint64();
        m_lowLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("IsLatestImage") && !value["IsLatestImage"].IsNull())
    {
        if (!value["IsLatestImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.IsLatestImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestImage = value["IsLatestImage"].GetBool();
        m_isLatestImageHasBeenSet = true;
    }

    if (value.HasMember("RecommendedFix") && !value["RecommendedFix"].IsNull())
    {
        if (!value["RecommendedFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesInfo.RecommendedFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recommendedFix = value["RecommendedFix"].GetBool();
        m_recommendedFixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImagesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_superNodeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
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

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
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

    if (m_isSuggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuggest, allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

    if (m_componentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentCnt, allocator);
    }

    if (m_criticalLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulCnt, allocator);
    }

    if (m_highLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulCnt, allocator);
    }

    if (m_mediumLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulCnt, allocator);
    }

    if (m_lowLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulCnt, allocator);
    }

    if (m_isLatestImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestImage, allocator);
    }

    if (m_recommendedFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendedFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendedFix, allocator);
    }

}


string ImagesInfo::GetImageID() const
{
    return m_imageID;
}

void ImagesInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ImagesInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string ImagesInfo::GetImageName() const
{
    return m_imageName;
}

void ImagesInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImagesInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImagesInfo::GetCreateTime() const
{
    return m_createTime;
}

void ImagesInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImagesInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ImagesInfo::GetSize() const
{
    return m_size;
}

void ImagesInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImagesInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t ImagesInfo::GetHostCnt() const
{
    return m_hostCnt;
}

void ImagesInfo::SetHostCnt(const uint64_t& _hostCnt)
{
    m_hostCnt = _hostCnt;
    m_hostCntHasBeenSet = true;
}

bool ImagesInfo::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}

uint64_t ImagesInfo::GetSuperNodeCnt() const
{
    return m_superNodeCnt;
}

void ImagesInfo::SetSuperNodeCnt(const uint64_t& _superNodeCnt)
{
    m_superNodeCnt = _superNodeCnt;
    m_superNodeCntHasBeenSet = true;
}

bool ImagesInfo::SuperNodeCntHasBeenSet() const
{
    return m_superNodeCntHasBeenSet;
}

uint64_t ImagesInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void ImagesInfo::SetContainerCnt(const uint64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool ImagesInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

string ImagesInfo::GetScanTime() const
{
    return m_scanTime;
}

void ImagesInfo::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool ImagesInfo::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t ImagesInfo::GetVulCnt() const
{
    return m_vulCnt;
}

void ImagesInfo::SetVulCnt(const uint64_t& _vulCnt)
{
    m_vulCnt = _vulCnt;
    m_vulCntHasBeenSet = true;
}

bool ImagesInfo::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

uint64_t ImagesInfo::GetVirusCnt() const
{
    return m_virusCnt;
}

void ImagesInfo::SetVirusCnt(const uint64_t& _virusCnt)
{
    m_virusCnt = _virusCnt;
    m_virusCntHasBeenSet = true;
}

bool ImagesInfo::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t ImagesInfo::GetRiskCnt() const
{
    return m_riskCnt;
}

void ImagesInfo::SetRiskCnt(const uint64_t& _riskCnt)
{
    m_riskCnt = _riskCnt;
    m_riskCntHasBeenSet = true;
}

bool ImagesInfo::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

bool ImagesInfo::GetIsTrustImage() const
{
    return m_isTrustImage;
}

void ImagesInfo::SetIsTrustImage(const bool& _isTrustImage)
{
    m_isTrustImage = _isTrustImage;
    m_isTrustImageHasBeenSet = true;
}

bool ImagesInfo::IsTrustImageHasBeenSet() const
{
    return m_isTrustImageHasBeenSet;
}

string ImagesInfo::GetOsName() const
{
    return m_osName;
}

void ImagesInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ImagesInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ImagesInfo::GetAgentError() const
{
    return m_agentError;
}

void ImagesInfo::SetAgentError(const string& _agentError)
{
    m_agentError = _agentError;
    m_agentErrorHasBeenSet = true;
}

bool ImagesInfo::AgentErrorHasBeenSet() const
{
    return m_agentErrorHasBeenSet;
}

string ImagesInfo::GetScanError() const
{
    return m_scanError;
}

void ImagesInfo::SetScanError(const string& _scanError)
{
    m_scanError = _scanError;
    m_scanErrorHasBeenSet = true;
}

bool ImagesInfo::ScanErrorHasBeenSet() const
{
    return m_scanErrorHasBeenSet;
}

string ImagesInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void ImagesInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ImagesInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

string ImagesInfo::GetScanVirusError() const
{
    return m_scanVirusError;
}

void ImagesInfo::SetScanVirusError(const string& _scanVirusError)
{
    m_scanVirusError = _scanVirusError;
    m_scanVirusErrorHasBeenSet = true;
}

bool ImagesInfo::ScanVirusErrorHasBeenSet() const
{
    return m_scanVirusErrorHasBeenSet;
}

string ImagesInfo::GetScanVulError() const
{
    return m_scanVulError;
}

void ImagesInfo::SetScanVulError(const string& _scanVulError)
{
    m_scanVulError = _scanVulError;
    m_scanVulErrorHasBeenSet = true;
}

bool ImagesInfo::ScanVulErrorHasBeenSet() const
{
    return m_scanVulErrorHasBeenSet;
}

string ImagesInfo::GetScanRiskError() const
{
    return m_scanRiskError;
}

void ImagesInfo::SetScanRiskError(const string& _scanRiskError)
{
    m_scanRiskError = _scanRiskError;
    m_scanRiskErrorHasBeenSet = true;
}

bool ImagesInfo::ScanRiskErrorHasBeenSet() const
{
    return m_scanRiskErrorHasBeenSet;
}

uint64_t ImagesInfo::GetIsSuggest() const
{
    return m_isSuggest;
}

void ImagesInfo::SetIsSuggest(const uint64_t& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool ImagesInfo::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

uint64_t ImagesInfo::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void ImagesInfo::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool ImagesInfo::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

uint64_t ImagesInfo::GetComponentCnt() const
{
    return m_componentCnt;
}

void ImagesInfo::SetComponentCnt(const uint64_t& _componentCnt)
{
    m_componentCnt = _componentCnt;
    m_componentCntHasBeenSet = true;
}

bool ImagesInfo::ComponentCntHasBeenSet() const
{
    return m_componentCntHasBeenSet;
}

uint64_t ImagesInfo::GetCriticalLevelVulCnt() const
{
    return m_criticalLevelVulCnt;
}

void ImagesInfo::SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt)
{
    m_criticalLevelVulCnt = _criticalLevelVulCnt;
    m_criticalLevelVulCntHasBeenSet = true;
}

bool ImagesInfo::CriticalLevelVulCntHasBeenSet() const
{
    return m_criticalLevelVulCntHasBeenSet;
}

uint64_t ImagesInfo::GetHighLevelVulCnt() const
{
    return m_highLevelVulCnt;
}

void ImagesInfo::SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt)
{
    m_highLevelVulCnt = _highLevelVulCnt;
    m_highLevelVulCntHasBeenSet = true;
}

bool ImagesInfo::HighLevelVulCntHasBeenSet() const
{
    return m_highLevelVulCntHasBeenSet;
}

uint64_t ImagesInfo::GetMediumLevelVulCnt() const
{
    return m_mediumLevelVulCnt;
}

void ImagesInfo::SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt)
{
    m_mediumLevelVulCnt = _mediumLevelVulCnt;
    m_mediumLevelVulCntHasBeenSet = true;
}

bool ImagesInfo::MediumLevelVulCntHasBeenSet() const
{
    return m_mediumLevelVulCntHasBeenSet;
}

uint64_t ImagesInfo::GetLowLevelVulCnt() const
{
    return m_lowLevelVulCnt;
}

void ImagesInfo::SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt)
{
    m_lowLevelVulCnt = _lowLevelVulCnt;
    m_lowLevelVulCntHasBeenSet = true;
}

bool ImagesInfo::LowLevelVulCntHasBeenSet() const
{
    return m_lowLevelVulCntHasBeenSet;
}

bool ImagesInfo::GetIsLatestImage() const
{
    return m_isLatestImage;
}

void ImagesInfo::SetIsLatestImage(const bool& _isLatestImage)
{
    m_isLatestImage = _isLatestImage;
    m_isLatestImageHasBeenSet = true;
}

bool ImagesInfo::IsLatestImageHasBeenSet() const
{
    return m_isLatestImageHasBeenSet;
}

bool ImagesInfo::GetRecommendedFix() const
{
    return m_recommendedFix;
}

void ImagesInfo::SetRecommendedFix(const bool& _recommendedFix)
{
    m_recommendedFix = _recommendedFix;
    m_recommendedFixHasBeenSet = true;
}

bool ImagesInfo::RecommendedFixHasBeenSet() const
{
    return m_recommendedFixHasBeenSet;
}

