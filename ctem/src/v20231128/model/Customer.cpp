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

#include <tencentcloud/ctem/v20231128/model/Customer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

Customer::Customer() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_scanCronHasBeenSet(false),
    m_enableCronHasBeenSet(false),
    m_enableScanSubEnterpriseHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_authStartAtHasBeenSet(false),
    m_authEndAtHasBeenSet(false),
    m_authFileHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_subCompanyLevelHasBeenSet(false),
    m_isIncludeFullScanHasBeenSet(false),
    m_enableGroupMemberDiscoveredHasBeenSet(false)
{
}

CoreInternalOutcome Customer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("ScanType") && !value["ScanType"].IsNull())
    {
        if (!value["ScanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.ScanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanType = string(value["ScanType"].GetString());
        m_scanTypeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }

    if (value.HasMember("ScanCron") && !value["ScanCron"].IsNull())
    {
        if (!value["ScanCron"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.ScanCron` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanCron = string(value["ScanCron"].GetString());
        m_scanCronHasBeenSet = true;
    }

    if (value.HasMember("EnableCron") && !value["EnableCron"].IsNull())
    {
        if (!value["EnableCron"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.EnableCron` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCron = value["EnableCron"].GetBool();
        m_enableCronHasBeenSet = true;
    }

    if (value.HasMember("EnableScanSubEnterprise") && !value["EnableScanSubEnterprise"].IsNull())
    {
        if (!value["EnableScanSubEnterprise"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.EnableScanSubEnterprise` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableScanSubEnterprise = value["EnableScanSubEnterprise"].GetBool();
        m_enableScanSubEnterpriseHasBeenSet = true;
    }

    if (value.HasMember("EnableAuth") && !value["EnableAuth"].IsNull())
    {
        if (!value["EnableAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.EnableAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuth = value["EnableAuth"].GetBool();
        m_enableAuthHasBeenSet = true;
    }

    if (value.HasMember("AuthStartAt") && !value["AuthStartAt"].IsNull())
    {
        if (!value["AuthStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.AuthStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authStartAt = string(value["AuthStartAt"].GetString());
        m_authStartAtHasBeenSet = true;
    }

    if (value.HasMember("AuthEndAt") && !value["AuthEndAt"].IsNull())
    {
        if (!value["AuthEndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.AuthEndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authEndAt = string(value["AuthEndAt"].GetString());
        m_authEndAtHasBeenSet = true;
    }

    if (value.HasMember("AuthFile") && !value["AuthFile"].IsNull())
    {
        if (!value["AuthFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.AuthFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authFile = string(value["AuthFile"].GetString());
        m_authFileHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(value["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("SubCompanyLevel") && !value["SubCompanyLevel"].IsNull())
    {
        if (!value["SubCompanyLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.SubCompanyLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subCompanyLevel = value["SubCompanyLevel"].GetInt64();
        m_subCompanyLevelHasBeenSet = true;
    }

    if (value.HasMember("IsIncludeFullScan") && !value["IsIncludeFullScan"].IsNull())
    {
        if (!value["IsIncludeFullScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.IsIncludeFullScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIncludeFullScan = value["IsIncludeFullScan"].GetBool();
        m_isIncludeFullScanHasBeenSet = true;
    }

    if (value.HasMember("EnableGroupMemberDiscovered") && !value["EnableGroupMemberDiscovered"].IsNull())
    {
        if (!value["EnableGroupMemberDiscovered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Customer.EnableGroupMemberDiscovered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGroupMemberDiscovered = value["EnableGroupMemberDiscovered"].GetBool();
        m_enableGroupMemberDiscoveredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Customer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

    if (m_scanCronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanCron.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCron, allocator);
    }

    if (m_enableScanSubEnterpriseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScanSubEnterprise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableScanSubEnterprise, allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_authStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_authEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthEndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authEndAt.c_str(), allocator).Move(), allocator);
    }

    if (m_authFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authFile.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_subCompanyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCompanyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subCompanyLevel, allocator);
    }

    if (m_isIncludeFullScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludeFullScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIncludeFullScan, allocator);
    }

    if (m_enableGroupMemberDiscoveredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGroupMemberDiscovered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGroupMemberDiscovered, allocator);
    }

}


uint64_t Customer::GetId() const
{
    return m_id;
}

void Customer::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Customer::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Customer::GetName() const
{
    return m_name;
}

void Customer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Customer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Customer::GetPercent() const
{
    return m_percent;
}

void Customer::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool Customer::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string Customer::GetScanType() const
{
    return m_scanType;
}

void Customer::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool Customer::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

string Customer::GetCreator() const
{
    return m_creator;
}

void Customer::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Customer::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t Customer::GetAppId() const
{
    return m_appId;
}

void Customer::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Customer::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Customer::GetUin() const
{
    return m_uin;
}

void Customer::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Customer::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string Customer::GetCreateAt() const
{
    return m_createAt;
}

void Customer::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool Customer::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string Customer::GetUpdateAt() const
{
    return m_updateAt;
}

void Customer::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool Customer::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

string Customer::GetScanCron() const
{
    return m_scanCron;
}

void Customer::SetScanCron(const string& _scanCron)
{
    m_scanCron = _scanCron;
    m_scanCronHasBeenSet = true;
}

bool Customer::ScanCronHasBeenSet() const
{
    return m_scanCronHasBeenSet;
}

bool Customer::GetEnableCron() const
{
    return m_enableCron;
}

void Customer::SetEnableCron(const bool& _enableCron)
{
    m_enableCron = _enableCron;
    m_enableCronHasBeenSet = true;
}

bool Customer::EnableCronHasBeenSet() const
{
    return m_enableCronHasBeenSet;
}

bool Customer::GetEnableScanSubEnterprise() const
{
    return m_enableScanSubEnterprise;
}

void Customer::SetEnableScanSubEnterprise(const bool& _enableScanSubEnterprise)
{
    m_enableScanSubEnterprise = _enableScanSubEnterprise;
    m_enableScanSubEnterpriseHasBeenSet = true;
}

bool Customer::EnableScanSubEnterpriseHasBeenSet() const
{
    return m_enableScanSubEnterpriseHasBeenSet;
}

bool Customer::GetEnableAuth() const
{
    return m_enableAuth;
}

void Customer::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool Customer::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string Customer::GetAuthStartAt() const
{
    return m_authStartAt;
}

void Customer::SetAuthStartAt(const string& _authStartAt)
{
    m_authStartAt = _authStartAt;
    m_authStartAtHasBeenSet = true;
}

bool Customer::AuthStartAtHasBeenSet() const
{
    return m_authStartAtHasBeenSet;
}

string Customer::GetAuthEndAt() const
{
    return m_authEndAt;
}

void Customer::SetAuthEndAt(const string& _authEndAt)
{
    m_authEndAt = _authEndAt;
    m_authEndAtHasBeenSet = true;
}

bool Customer::AuthEndAtHasBeenSet() const
{
    return m_authEndAtHasBeenSet;
}

string Customer::GetAuthFile() const
{
    return m_authFile;
}

void Customer::SetAuthFile(const string& _authFile)
{
    m_authFile = _authFile;
    m_authFileHasBeenSet = true;
}

bool Customer::AuthFileHasBeenSet() const
{
    return m_authFileHasBeenSet;
}

string Customer::GetScanTime() const
{
    return m_scanTime;
}

void Customer::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool Customer::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string Customer::GetIcon() const
{
    return m_icon;
}

void Customer::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool Customer::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string Customer::GetKeywords() const
{
    return m_keywords;
}

void Customer::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool Customer::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

int64_t Customer::GetQps() const
{
    return m_qps;
}

void Customer::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool Customer::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t Customer::GetSubCompanyLevel() const
{
    return m_subCompanyLevel;
}

void Customer::SetSubCompanyLevel(const int64_t& _subCompanyLevel)
{
    m_subCompanyLevel = _subCompanyLevel;
    m_subCompanyLevelHasBeenSet = true;
}

bool Customer::SubCompanyLevelHasBeenSet() const
{
    return m_subCompanyLevelHasBeenSet;
}

bool Customer::GetIsIncludeFullScan() const
{
    return m_isIncludeFullScan;
}

void Customer::SetIsIncludeFullScan(const bool& _isIncludeFullScan)
{
    m_isIncludeFullScan = _isIncludeFullScan;
    m_isIncludeFullScanHasBeenSet = true;
}

bool Customer::IsIncludeFullScanHasBeenSet() const
{
    return m_isIncludeFullScanHasBeenSet;
}

bool Customer::GetEnableGroupMemberDiscovered() const
{
    return m_enableGroupMemberDiscovered;
}

void Customer::SetEnableGroupMemberDiscovered(const bool& _enableGroupMemberDiscovered)
{
    m_enableGroupMemberDiscovered = _enableGroupMemberDiscovered;
    m_enableGroupMemberDiscoveredHasBeenSet = true;
}

bool Customer::EnableGroupMemberDiscoveredHasBeenSet() const
{
    return m_enableGroupMemberDiscoveredHasBeenSet;
}

