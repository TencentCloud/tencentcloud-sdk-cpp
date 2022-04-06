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

#include <tencentcloud/ssa/v20180608/model/DescribeVulDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeVulDetailResponse::DescribeVulDetailResponse() :
    m_vulTypeHasBeenSet(false),
    m_subVulTypeHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_cvssHasBeenSet(false),
    m_cveHasBeenSet(false),
    m_cnvdHasBeenSet(false),
    m_cnnvdHasBeenSet(false),
    m_descHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_repairHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_impactAssetHasBeenSet(false),
    m_impactAssetNameHasBeenSet(false),
    m_isAssetDeletedHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_vulUrlHasBeenSet(false),
    m_ssaAssetCategoryHasBeenSet(false),
    m_vulPathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulType") && !rsp["VulType"].IsNull())
    {
        if (!rsp["VulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = rsp["VulType"].GetInt64();
        m_vulTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SubVulType") && !rsp["SubVulType"].IsNull())
    {
        if (!rsp["SubVulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubVulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subVulType = string(rsp["SubVulType"].GetString());
        m_subVulTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CvssScore") && !rsp["CvssScore"].IsNull())
    {
        if (!rsp["CvssScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvssScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = string(rsp["CvssScore"].GetString());
        m_cvssScoreHasBeenSet = true;
    }

    if (rsp.HasMember("Cvss") && !rsp["Cvss"].IsNull())
    {
        if (!rsp["Cvss"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cvss` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvss = string(rsp["Cvss"].GetString());
        m_cvssHasBeenSet = true;
    }

    if (rsp.HasMember("Cve") && !rsp["Cve"].IsNull())
    {
        if (!rsp["Cve"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cve` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cve = string(rsp["Cve"].GetString());
        m_cveHasBeenSet = true;
    }

    if (rsp.HasMember("Cnvd") && !rsp["Cnvd"].IsNull())
    {
        if (!rsp["Cnvd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cnvd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnvd = string(rsp["Cnvd"].GetString());
        m_cnvdHasBeenSet = true;
    }

    if (rsp.HasMember("Cnnvd") && !rsp["Cnnvd"].IsNull())
    {
        if (!rsp["Cnnvd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cnnvd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnnvd = string(rsp["Cnnvd"].GetString());
        m_cnnvdHasBeenSet = true;
    }

    if (rsp.HasMember("Desc") && !rsp["Desc"].IsNull())
    {
        if (!rsp["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(rsp["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (rsp.HasMember("Reference") && !rsp["Reference"].IsNull())
    {
        if (!rsp["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(rsp["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (rsp.HasMember("Repair") && !rsp["Repair"].IsNull())
    {
        if (!rsp["Repair"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Repair` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repair = string(rsp["Repair"].GetString());
        m_repairHasBeenSet = true;
    }

    if (rsp.HasMember("ReleaseTime") && !rsp["ReleaseTime"].IsNull())
    {
        if (!rsp["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(rsp["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ImpactAsset") && !rsp["ImpactAsset"].IsNull())
    {
        if (!rsp["ImpactAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactAsset = string(rsp["ImpactAsset"].GetString());
        m_impactAssetHasBeenSet = true;
    }

    if (rsp.HasMember("ImpactAssetName") && !rsp["ImpactAssetName"].IsNull())
    {
        if (!rsp["ImpactAssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactAssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactAssetName = string(rsp["ImpactAssetName"].GetString());
        m_impactAssetNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsAssetDeleted") && !rsp["IsAssetDeleted"].IsNull())
    {
        if (!rsp["IsAssetDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAssetDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAssetDeleted = rsp["IsAssetDeleted"].GetBool();
        m_isAssetDeletedHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("VulUrl") && !rsp["VulUrl"].IsNull())
    {
        if (!rsp["VulUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulUrl = string(rsp["VulUrl"].GetString());
        m_vulUrlHasBeenSet = true;
    }

    if (rsp.HasMember("SsaAssetCategory") && !rsp["SsaAssetCategory"].IsNull())
    {
        if (!rsp["SsaAssetCategory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsaAssetCategory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetCategory = rsp["SsaAssetCategory"].GetInt64();
        m_ssaAssetCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("VulPath") && !rsp["VulPath"].IsNull())
    {
        if (!rsp["VulPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulPath = string(rsp["VulPath"].GetString());
        m_vulPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulType, allocator);
    }

    if (m_subVulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubVulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subVulType.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvssScore.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cvss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvss.c_str(), allocator).Move(), allocator);
    }

    if (m_cveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cve.c_str(), allocator).Move(), allocator);
    }

    if (m_cnvdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnvd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnvd.c_str(), allocator).Move(), allocator);
    }

    if (m_cnnvdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnnvd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnnvd.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_repairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repair.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_impactAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_impactAssetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactAssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactAssetName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssetDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssetDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssetDeleted, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_vulUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAssetCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ssaAssetCategory, allocator);
    }

    if (m_vulPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulPath.c_str(), allocator).Move(), allocator);
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


int64_t DescribeVulDetailResponse::GetVulType() const
{
    return m_vulType;
}

bool DescribeVulDetailResponse::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string DescribeVulDetailResponse::GetSubVulType() const
{
    return m_subVulType;
}

bool DescribeVulDetailResponse::SubVulTypeHasBeenSet() const
{
    return m_subVulTypeHasBeenSet;
}

string DescribeVulDetailResponse::GetCvssScore() const
{
    return m_cvssScore;
}

bool DescribeVulDetailResponse::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string DescribeVulDetailResponse::GetCvss() const
{
    return m_cvss;
}

bool DescribeVulDetailResponse::CvssHasBeenSet() const
{
    return m_cvssHasBeenSet;
}

string DescribeVulDetailResponse::GetCve() const
{
    return m_cve;
}

bool DescribeVulDetailResponse::CveHasBeenSet() const
{
    return m_cveHasBeenSet;
}

string DescribeVulDetailResponse::GetCnvd() const
{
    return m_cnvd;
}

bool DescribeVulDetailResponse::CnvdHasBeenSet() const
{
    return m_cnvdHasBeenSet;
}

string DescribeVulDetailResponse::GetCnnvd() const
{
    return m_cnnvd;
}

bool DescribeVulDetailResponse::CnnvdHasBeenSet() const
{
    return m_cnnvdHasBeenSet;
}

string DescribeVulDetailResponse::GetDesc() const
{
    return m_desc;
}

bool DescribeVulDetailResponse::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string DescribeVulDetailResponse::GetReference() const
{
    return m_reference;
}

bool DescribeVulDetailResponse::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string DescribeVulDetailResponse::GetRepair() const
{
    return m_repair;
}

bool DescribeVulDetailResponse::RepairHasBeenSet() const
{
    return m_repairHasBeenSet;
}

string DescribeVulDetailResponse::GetReleaseTime() const
{
    return m_releaseTime;
}

bool DescribeVulDetailResponse::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string DescribeVulDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeVulDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeVulDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeVulDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeVulDetailResponse::GetLevel() const
{
    return m_level;
}

bool DescribeVulDetailResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeVulDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVulDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVulDetailResponse::GetImpactAsset() const
{
    return m_impactAsset;
}

bool DescribeVulDetailResponse::ImpactAssetHasBeenSet() const
{
    return m_impactAssetHasBeenSet;
}

string DescribeVulDetailResponse::GetImpactAssetName() const
{
    return m_impactAssetName;
}

bool DescribeVulDetailResponse::ImpactAssetNameHasBeenSet() const
{
    return m_impactAssetNameHasBeenSet;
}

bool DescribeVulDetailResponse::GetIsAssetDeleted() const
{
    return m_isAssetDeleted;
}

bool DescribeVulDetailResponse::IsAssetDeletedHasBeenSet() const
{
    return m_isAssetDeletedHasBeenSet;
}

string DescribeVulDetailResponse::GetSource() const
{
    return m_source;
}

bool DescribeVulDetailResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeVulDetailResponse::GetVulUrl() const
{
    return m_vulUrl;
}

bool DescribeVulDetailResponse::VulUrlHasBeenSet() const
{
    return m_vulUrlHasBeenSet;
}

int64_t DescribeVulDetailResponse::GetSsaAssetCategory() const
{
    return m_ssaAssetCategory;
}

bool DescribeVulDetailResponse::SsaAssetCategoryHasBeenSet() const
{
    return m_ssaAssetCategoryHasBeenSet;
}

string DescribeVulDetailResponse::GetVulPath() const
{
    return m_vulPath;
}

bool DescribeVulDetailResponse::VulPathHasBeenSet() const
{
    return m_vulPathHasBeenSet;
}


