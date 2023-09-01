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

#include <tencentcloud/csip/v20221121/model/BugInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BugInfoDetail::BugInfoDetail() :
    m_idHasBeenSet(false),
    m_patchIdHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cVSSScoreHasBeenSet(false),
    m_cVEIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_vULCategoryHasBeenSet(false),
    m_impactOsHasBeenSet(false),
    m_impactCOMPENTHasBeenSet(false),
    m_impactVersionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_vULDescribeHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_proSupportHasBeenSet(false),
    m_isPublishHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subCategoryHasBeenSet(false)
{
}

CoreInternalOutcome BugInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PatchId") && !value["PatchId"].IsNull())
    {
        if (!value["PatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.PatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patchId = string(value["PatchId"].GetString());
        m_patchIdHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CVSSScore") && !value["CVSSScore"].IsNull())
    {
        if (!value["CVSSScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.CVSSScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSScore = string(value["CVSSScore"].GetString());
        m_cVSSScoreHasBeenSet = true;
    }

    if (value.HasMember("CVEId") && !value["CVEId"].IsNull())
    {
        if (!value["CVEId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.CVEId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEId = string(value["CVEId"].GetString());
        m_cVEIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("VULCategory") && !value["VULCategory"].IsNull())
    {
        if (!value["VULCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.VULCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vULCategory = value["VULCategory"].GetUint64();
        m_vULCategoryHasBeenSet = true;
    }

    if (value.HasMember("ImpactOs") && !value["ImpactOs"].IsNull())
    {
        if (!value["ImpactOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.ImpactOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactOs = string(value["ImpactOs"].GetString());
        m_impactOsHasBeenSet = true;
    }

    if (value.HasMember("ImpactCOMPENT") && !value["ImpactCOMPENT"].IsNull())
    {
        if (!value["ImpactCOMPENT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.ImpactCOMPENT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactCOMPENT = string(value["ImpactCOMPENT"].GetString());
        m_impactCOMPENTHasBeenSet = true;
    }

    if (value.HasMember("ImpactVersion") && !value["ImpactVersion"].IsNull())
    {
        if (!value["ImpactVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.ImpactVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactVersion = string(value["ImpactVersion"].GetString());
        m_impactVersionHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("VULDescribe") && !value["VULDescribe"].IsNull())
    {
        if (!value["VULDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.VULDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULDescribe = string(value["VULDescribe"].GetString());
        m_vULDescribeHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("ProSupport") && !value["ProSupport"].IsNull())
    {
        if (!value["ProSupport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.ProSupport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proSupport = value["ProSupport"].GetUint64();
        m_proSupportHasBeenSet = true;
    }

    if (value.HasMember("IsPublish") && !value["IsPublish"].IsNull())
    {
        if (!value["IsPublish"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.IsPublish` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isPublish = value["IsPublish"].GetUint64();
        m_isPublishHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("SubCategory") && !value["SubCategory"].IsNull())
    {
        if (!value["SubCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BugInfoDetail.SubCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subCategory = string(value["SubCategory"].GetString());
        m_subCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BugInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_patchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patchId.c_str(), allocator).Move(), allocator);
    }

    if (m_vULNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSSScore.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_vULCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vULCategory, allocator);
    }

    if (m_impactOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactOs.c_str(), allocator).Move(), allocator);
    }

    if (m_impactCOMPENTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactCOMPENT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactCOMPENT.c_str(), allocator).Move(), allocator);
    }

    if (m_impactVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_vULDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_proSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proSupport, allocator);
    }

    if (m_isPublishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublish, allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subCategory.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BugInfoDetail::GetId() const
{
    return m_id;
}

void BugInfoDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BugInfoDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BugInfoDetail::GetPatchId() const
{
    return m_patchId;
}

void BugInfoDetail::SetPatchId(const string& _patchId)
{
    m_patchId = _patchId;
    m_patchIdHasBeenSet = true;
}

bool BugInfoDetail::PatchIdHasBeenSet() const
{
    return m_patchIdHasBeenSet;
}

string BugInfoDetail::GetVULName() const
{
    return m_vULName;
}

void BugInfoDetail::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool BugInfoDetail::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string BugInfoDetail::GetLevel() const
{
    return m_level;
}

void BugInfoDetail::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BugInfoDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BugInfoDetail::GetCVSSScore() const
{
    return m_cVSSScore;
}

void BugInfoDetail::SetCVSSScore(const string& _cVSSScore)
{
    m_cVSSScore = _cVSSScore;
    m_cVSSScoreHasBeenSet = true;
}

bool BugInfoDetail::CVSSScoreHasBeenSet() const
{
    return m_cVSSScoreHasBeenSet;
}

string BugInfoDetail::GetCVEId() const
{
    return m_cVEId;
}

void BugInfoDetail::SetCVEId(const string& _cVEId)
{
    m_cVEId = _cVEId;
    m_cVEIdHasBeenSet = true;
}

bool BugInfoDetail::CVEIdHasBeenSet() const
{
    return m_cVEIdHasBeenSet;
}

string BugInfoDetail::GetTag() const
{
    return m_tag;
}

void BugInfoDetail::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool BugInfoDetail::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t BugInfoDetail::GetVULCategory() const
{
    return m_vULCategory;
}

void BugInfoDetail::SetVULCategory(const uint64_t& _vULCategory)
{
    m_vULCategory = _vULCategory;
    m_vULCategoryHasBeenSet = true;
}

bool BugInfoDetail::VULCategoryHasBeenSet() const
{
    return m_vULCategoryHasBeenSet;
}

string BugInfoDetail::GetImpactOs() const
{
    return m_impactOs;
}

void BugInfoDetail::SetImpactOs(const string& _impactOs)
{
    m_impactOs = _impactOs;
    m_impactOsHasBeenSet = true;
}

bool BugInfoDetail::ImpactOsHasBeenSet() const
{
    return m_impactOsHasBeenSet;
}

string BugInfoDetail::GetImpactCOMPENT() const
{
    return m_impactCOMPENT;
}

void BugInfoDetail::SetImpactCOMPENT(const string& _impactCOMPENT)
{
    m_impactCOMPENT = _impactCOMPENT;
    m_impactCOMPENTHasBeenSet = true;
}

bool BugInfoDetail::ImpactCOMPENTHasBeenSet() const
{
    return m_impactCOMPENTHasBeenSet;
}

string BugInfoDetail::GetImpactVersion() const
{
    return m_impactVersion;
}

void BugInfoDetail::SetImpactVersion(const string& _impactVersion)
{
    m_impactVersion = _impactVersion;
    m_impactVersionHasBeenSet = true;
}

bool BugInfoDetail::ImpactVersionHasBeenSet() const
{
    return m_impactVersionHasBeenSet;
}

string BugInfoDetail::GetReference() const
{
    return m_reference;
}

void BugInfoDetail::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool BugInfoDetail::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string BugInfoDetail::GetVULDescribe() const
{
    return m_vULDescribe;
}

void BugInfoDetail::SetVULDescribe(const string& _vULDescribe)
{
    m_vULDescribe = _vULDescribe;
    m_vULDescribeHasBeenSet = true;
}

bool BugInfoDetail::VULDescribeHasBeenSet() const
{
    return m_vULDescribeHasBeenSet;
}

string BugInfoDetail::GetFix() const
{
    return m_fix;
}

void BugInfoDetail::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool BugInfoDetail::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

uint64_t BugInfoDetail::GetProSupport() const
{
    return m_proSupport;
}

void BugInfoDetail::SetProSupport(const uint64_t& _proSupport)
{
    m_proSupport = _proSupport;
    m_proSupportHasBeenSet = true;
}

bool BugInfoDetail::ProSupportHasBeenSet() const
{
    return m_proSupportHasBeenSet;
}

uint64_t BugInfoDetail::GetIsPublish() const
{
    return m_isPublish;
}

void BugInfoDetail::SetIsPublish(const uint64_t& _isPublish)
{
    m_isPublish = _isPublish;
    m_isPublishHasBeenSet = true;
}

bool BugInfoDetail::IsPublishHasBeenSet() const
{
    return m_isPublishHasBeenSet;
}

string BugInfoDetail::GetReleaseTime() const
{
    return m_releaseTime;
}

void BugInfoDetail::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool BugInfoDetail::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string BugInfoDetail::GetCreateTime() const
{
    return m_createTime;
}

void BugInfoDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BugInfoDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BugInfoDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void BugInfoDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BugInfoDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BugInfoDetail::GetSubCategory() const
{
    return m_subCategory;
}

void BugInfoDetail::SetSubCategory(const string& _subCategory)
{
    m_subCategory = _subCategory;
    m_subCategoryHasBeenSet = true;
}

bool BugInfoDetail::SubCategoryHasBeenSet() const
{
    return m_subCategoryHasBeenSet;
}

