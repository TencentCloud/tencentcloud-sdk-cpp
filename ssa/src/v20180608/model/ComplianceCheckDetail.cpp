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

#include <tencentcloud/ssa/v20180608/model/ComplianceCheckDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

ComplianceCheckDetail::ComplianceCheckDetail() :
    m_idHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_errorCountHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_checkNameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_docHasBeenSet(false),
    m_safeCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_isPassHasBeenSet(false),
    m_ignoreCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_resCountHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_standardItemHasBeenSet(false),
    m_chapterHasBeenSet(false),
    m_assetTypeDescHasBeenSet(false),
    m_isIgnoreHasBeenSet(false),
    m_riskItemHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceCheckDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCount") && !value["ErrorCount"].IsNull())
    {
        if (!value["ErrorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.ErrorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCount = value["ErrorCount"].GetInt64();
        m_errorCountHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("CheckName") && !value["CheckName"].IsNull())
    {
        if (!value["CheckName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.CheckName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkName = string(value["CheckName"].GetString());
        m_checkNameHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Doc") && !value["Doc"].IsNull())
    {
        if (!value["Doc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Doc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doc = string(value["Doc"].GetString());
        m_docHasBeenSet = true;
    }

    if (value.HasMember("SafeCount") && !value["SafeCount"].IsNull())
    {
        if (!value["SafeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.SafeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_safeCount = value["SafeCount"].GetInt64();
        m_safeCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.IsPass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetInt64();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCount") && !value["IgnoreCount"].IsNull())
    {
        if (!value["IgnoreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.IgnoreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCount = value["IgnoreCount"].GetInt64();
        m_ignoreCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("ResCount") && !value["ResCount"].IsNull())
    {
        if (!value["ResCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.ResCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resCount = value["ResCount"].GetInt64();
        m_resCountHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("StandardItem") && !value["StandardItem"].IsNull())
    {
        if (!value["StandardItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.StandardItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardItem = string(value["StandardItem"].GetString());
        m_standardItemHasBeenSet = true;
    }

    if (value.HasMember("Chapter") && !value["Chapter"].IsNull())
    {
        if (!value["Chapter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Chapter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chapter = string(value["Chapter"].GetString());
        m_chapterHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeDesc") && !value["AssetTypeDesc"].IsNull())
    {
        if (!value["AssetTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.AssetTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeDesc = string(value["AssetTypeDesc"].GetString());
        m_assetTypeDescHasBeenSet = true;
    }

    if (value.HasMember("IsIgnore") && !value["IsIgnore"].IsNull())
    {
        if (!value["IsIgnore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.IsIgnore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnore = value["IsIgnore"].GetUint64();
        m_isIgnoreHasBeenSet = true;
    }

    if (value.HasMember("RiskItem") && !value["RiskItem"].IsNull())
    {
        if (!value["RiskItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.RiskItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem = string(value["RiskItem"].GetString());
        m_riskItemHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckDetail.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceCheckDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCount, allocator);
    }

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_checkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkName.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_docHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Doc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doc.c_str(), allocator).Move(), allocator);
    }

    if (m_safeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeCount, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_ignoreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_resCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resCount, allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_standardItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardItem.c_str(), allocator).Move(), allocator);
    }

    if (m_chapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chapter.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnore, allocator);
    }

    if (m_riskItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskItem.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string ComplianceCheckDetail::GetId() const
{
    return m_id;
}

void ComplianceCheckDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ComplianceCheckDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ComplianceCheckDetail::GetCategory() const
{
    return m_category;
}

void ComplianceCheckDetail::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ComplianceCheckDetail::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ComplianceCheckDetail::GetType() const
{
    return m_type;
}

void ComplianceCheckDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ComplianceCheckDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ComplianceCheckDetail::GetErrorCount() const
{
    return m_errorCount;
}

void ComplianceCheckDetail::SetErrorCount(const int64_t& _errorCount)
{
    m_errorCount = _errorCount;
    m_errorCountHasBeenSet = true;
}

bool ComplianceCheckDetail::ErrorCountHasBeenSet() const
{
    return m_errorCountHasBeenSet;
}

string ComplianceCheckDetail::GetNameEn() const
{
    return m_nameEn;
}

void ComplianceCheckDetail::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool ComplianceCheckDetail::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

string ComplianceCheckDetail::GetCheckName() const
{
    return m_checkName;
}

void ComplianceCheckDetail::SetCheckName(const string& _checkName)
{
    m_checkName = _checkName;
    m_checkNameHasBeenSet = true;
}

bool ComplianceCheckDetail::CheckNameHasBeenSet() const
{
    return m_checkNameHasBeenSet;
}

string ComplianceCheckDetail::GetMethod() const
{
    return m_method;
}

void ComplianceCheckDetail::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ComplianceCheckDetail::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ComplianceCheckDetail::GetDoc() const
{
    return m_doc;
}

void ComplianceCheckDetail::SetDoc(const string& _doc)
{
    m_doc = _doc;
    m_docHasBeenSet = true;
}

bool ComplianceCheckDetail::DocHasBeenSet() const
{
    return m_docHasBeenSet;
}

int64_t ComplianceCheckDetail::GetSafeCount() const
{
    return m_safeCount;
}

void ComplianceCheckDetail::SetSafeCount(const int64_t& _safeCount)
{
    m_safeCount = _safeCount;
    m_safeCountHasBeenSet = true;
}

bool ComplianceCheckDetail::SafeCountHasBeenSet() const
{
    return m_safeCountHasBeenSet;
}

string ComplianceCheckDetail::GetContent() const
{
    return m_content;
}

void ComplianceCheckDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ComplianceCheckDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ComplianceCheckDetail::GetIsPass() const
{
    return m_isPass;
}

void ComplianceCheckDetail::SetIsPass(const int64_t& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool ComplianceCheckDetail::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

int64_t ComplianceCheckDetail::GetIgnoreCount() const
{
    return m_ignoreCount;
}

void ComplianceCheckDetail::SetIgnoreCount(const int64_t& _ignoreCount)
{
    m_ignoreCount = _ignoreCount;
    m_ignoreCountHasBeenSet = true;
}

bool ComplianceCheckDetail::IgnoreCountHasBeenSet() const
{
    return m_ignoreCountHasBeenSet;
}

int64_t ComplianceCheckDetail::GetRiskCount() const
{
    return m_riskCount;
}

void ComplianceCheckDetail::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool ComplianceCheckDetail::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string ComplianceCheckDetail::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceCheckDetail::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceCheckDetail::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string ComplianceCheckDetail::GetAssetType() const
{
    return m_assetType;
}

void ComplianceCheckDetail::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceCheckDetail::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t ComplianceCheckDetail::GetResCount() const
{
    return m_resCount;
}

void ComplianceCheckDetail::SetResCount(const int64_t& _resCount)
{
    m_resCount = _resCount;
    m_resCountHasBeenSet = true;
}

bool ComplianceCheckDetail::ResCountHasBeenSet() const
{
    return m_resCountHasBeenSet;
}

string ComplianceCheckDetail::GetUUID() const
{
    return m_uUID;
}

void ComplianceCheckDetail::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool ComplianceCheckDetail::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string ComplianceCheckDetail::GetStandardItem() const
{
    return m_standardItem;
}

void ComplianceCheckDetail::SetStandardItem(const string& _standardItem)
{
    m_standardItem = _standardItem;
    m_standardItemHasBeenSet = true;
}

bool ComplianceCheckDetail::StandardItemHasBeenSet() const
{
    return m_standardItemHasBeenSet;
}

string ComplianceCheckDetail::GetChapter() const
{
    return m_chapter;
}

void ComplianceCheckDetail::SetChapter(const string& _chapter)
{
    m_chapter = _chapter;
    m_chapterHasBeenSet = true;
}

bool ComplianceCheckDetail::ChapterHasBeenSet() const
{
    return m_chapterHasBeenSet;
}

string ComplianceCheckDetail::GetAssetTypeDesc() const
{
    return m_assetTypeDesc;
}

void ComplianceCheckDetail::SetAssetTypeDesc(const string& _assetTypeDesc)
{
    m_assetTypeDesc = _assetTypeDesc;
    m_assetTypeDescHasBeenSet = true;
}

bool ComplianceCheckDetail::AssetTypeDescHasBeenSet() const
{
    return m_assetTypeDescHasBeenSet;
}

uint64_t ComplianceCheckDetail::GetIsIgnore() const
{
    return m_isIgnore;
}

void ComplianceCheckDetail::SetIsIgnore(const uint64_t& _isIgnore)
{
    m_isIgnore = _isIgnore;
    m_isIgnoreHasBeenSet = true;
}

bool ComplianceCheckDetail::IsIgnoreHasBeenSet() const
{
    return m_isIgnoreHasBeenSet;
}

string ComplianceCheckDetail::GetRiskItem() const
{
    return m_riskItem;
}

void ComplianceCheckDetail::SetRiskItem(const string& _riskItem)
{
    m_riskItem = _riskItem;
    m_riskItemHasBeenSet = true;
}

bool ComplianceCheckDetail::RiskItemHasBeenSet() const
{
    return m_riskItemHasBeenSet;
}

string ComplianceCheckDetail::GetTitle() const
{
    return m_title;
}

void ComplianceCheckDetail::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ComplianceCheckDetail::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

