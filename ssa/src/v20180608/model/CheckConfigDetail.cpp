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

#include <tencentcloud/ssa/v20180608/model/CheckConfigDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

CheckConfigDetail::CheckConfigDetail() :
    m_idHasBeenSet(false),
    m_checkNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_docHasBeenSet(false),
    m_errorCountHasBeenSet(false),
    m_isPassHasBeenSet(false),
    m_safeCountHasBeenSet(false),
    m_ignoreCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_resCountHasBeenSet(false),
    m_isIgnoreHasBeenSet(false)
{
}

CoreInternalOutcome CheckConfigDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CheckName") && !value["CheckName"].IsNull())
    {
        if (!value["CheckName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.CheckName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkName = string(value["CheckName"].GetString());
        m_checkNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Doc") && !value["Doc"].IsNull())
    {
        if (!value["Doc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.Doc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doc = string(value["Doc"].GetString());
        m_docHasBeenSet = true;
    }

    if (value.HasMember("ErrorCount") && !value["ErrorCount"].IsNull())
    {
        if (!value["ErrorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.ErrorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCount = value["ErrorCount"].GetInt64();
        m_errorCountHasBeenSet = true;
    }

    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.IsPass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetInt64();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("SafeCount") && !value["SafeCount"].IsNull())
    {
        if (!value["SafeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.SafeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_safeCount = value["SafeCount"].GetInt64();
        m_safeCountHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCount") && !value["IgnoreCount"].IsNull())
    {
        if (!value["IgnoreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.IgnoreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCount = value["IgnoreCount"].GetInt64();
        m_ignoreCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("ResCount") && !value["ResCount"].IsNull())
    {
        if (!value["ResCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.ResCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resCount = value["ResCount"].GetInt64();
        m_resCountHasBeenSet = true;
    }

    if (value.HasMember("IsIgnore") && !value["IsIgnore"].IsNull())
    {
        if (!value["IsIgnore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckConfigDetail.IsIgnore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnore = value["IsIgnore"].GetInt64();
        m_isIgnoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckConfigDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_checkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
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

    if (m_errorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCount, allocator);
    }

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_safeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeCount, allocator);
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

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
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

    if (m_isIgnoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnore, allocator);
    }

}


string CheckConfigDetail::GetId() const
{
    return m_id;
}

void CheckConfigDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CheckConfigDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CheckConfigDetail::GetCheckName() const
{
    return m_checkName;
}

void CheckConfigDetail::SetCheckName(const string& _checkName)
{
    m_checkName = _checkName;
    m_checkNameHasBeenSet = true;
}

bool CheckConfigDetail::CheckNameHasBeenSet() const
{
    return m_checkNameHasBeenSet;
}

string CheckConfigDetail::GetContent() const
{
    return m_content;
}

void CheckConfigDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CheckConfigDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CheckConfigDetail::GetMethod() const
{
    return m_method;
}

void CheckConfigDetail::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CheckConfigDetail::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CheckConfigDetail::GetDoc() const
{
    return m_doc;
}

void CheckConfigDetail::SetDoc(const string& _doc)
{
    m_doc = _doc;
    m_docHasBeenSet = true;
}

bool CheckConfigDetail::DocHasBeenSet() const
{
    return m_docHasBeenSet;
}

int64_t CheckConfigDetail::GetErrorCount() const
{
    return m_errorCount;
}

void CheckConfigDetail::SetErrorCount(const int64_t& _errorCount)
{
    m_errorCount = _errorCount;
    m_errorCountHasBeenSet = true;
}

bool CheckConfigDetail::ErrorCountHasBeenSet() const
{
    return m_errorCountHasBeenSet;
}

int64_t CheckConfigDetail::GetIsPass() const
{
    return m_isPass;
}

void CheckConfigDetail::SetIsPass(const int64_t& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool CheckConfigDetail::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

int64_t CheckConfigDetail::GetSafeCount() const
{
    return m_safeCount;
}

void CheckConfigDetail::SetSafeCount(const int64_t& _safeCount)
{
    m_safeCount = _safeCount;
    m_safeCountHasBeenSet = true;
}

bool CheckConfigDetail::SafeCountHasBeenSet() const
{
    return m_safeCountHasBeenSet;
}

int64_t CheckConfigDetail::GetIgnoreCount() const
{
    return m_ignoreCount;
}

void CheckConfigDetail::SetIgnoreCount(const int64_t& _ignoreCount)
{
    m_ignoreCount = _ignoreCount;
    m_ignoreCountHasBeenSet = true;
}

bool CheckConfigDetail::IgnoreCountHasBeenSet() const
{
    return m_ignoreCountHasBeenSet;
}

int64_t CheckConfigDetail::GetRiskCount() const
{
    return m_riskCount;
}

void CheckConfigDetail::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool CheckConfigDetail::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string CheckConfigDetail::GetNameEn() const
{
    return m_nameEn;
}

void CheckConfigDetail::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool CheckConfigDetail::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

string CheckConfigDetail::GetAssetType() const
{
    return m_assetType;
}

void CheckConfigDetail::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CheckConfigDetail::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t CheckConfigDetail::GetResCount() const
{
    return m_resCount;
}

void CheckConfigDetail::SetResCount(const int64_t& _resCount)
{
    m_resCount = _resCount;
    m_resCountHasBeenSet = true;
}

bool CheckConfigDetail::ResCountHasBeenSet() const
{
    return m_resCountHasBeenSet;
}

int64_t CheckConfigDetail::GetIsIgnore() const
{
    return m_isIgnore;
}

void CheckConfigDetail::SetIsIgnore(const int64_t& _isIgnore)
{
    m_isIgnore = _isIgnore;
    m_isIgnoreHasBeenSet = true;
}

bool CheckConfigDetail::IsIgnoreHasBeenSet() const
{
    return m_isIgnoreHasBeenSet;
}

