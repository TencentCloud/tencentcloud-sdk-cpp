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

#include <tencentcloud/csip/v20221121/model/UserCSPMInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserCSPMInfo::UserCSPMInfo() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_cSPMNumHasBeenSet(false),
    m_usedCountHasBeenSet(false),
    m_grantedCSPMNumHasBeenSet(false),
    m_isSharedHasBeenSet(false),
    m_isSelfBuyHasBeenSet(false),
    m_shareFromAppIDHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_departmentHasBeenSet(false)
{
}

CoreInternalOutcome UserCSPMInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("CSPMNum") && !value["CSPMNum"].IsNull())
    {
        if (!value["CSPMNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.CSPMNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cSPMNum = value["CSPMNum"].GetInt64();
        m_cSPMNumHasBeenSet = true;
    }

    if (value.HasMember("UsedCount") && !value["UsedCount"].IsNull())
    {
        if (!value["UsedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.UsedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCount = value["UsedCount"].GetInt64();
        m_usedCountHasBeenSet = true;
    }

    if (value.HasMember("GrantedCSPMNum") && !value["GrantedCSPMNum"].IsNull())
    {
        if (!value["GrantedCSPMNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.GrantedCSPMNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_grantedCSPMNum = value["GrantedCSPMNum"].GetInt64();
        m_grantedCSPMNumHasBeenSet = true;
    }

    if (value.HasMember("IsShared") && !value["IsShared"].IsNull())
    {
        if (!value["IsShared"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.IsShared` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShared = value["IsShared"].GetInt64();
        m_isSharedHasBeenSet = true;
    }

    if (value.HasMember("IsSelfBuy") && !value["IsSelfBuy"].IsNull())
    {
        if (!value["IsSelfBuy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.IsSelfBuy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSelfBuy = value["IsSelfBuy"].GetInt64();
        m_isSelfBuyHasBeenSet = true;
    }

    if (value.HasMember("ShareFromAppID") && !value["ShareFromAppID"].IsNull())
    {
        if (!value["ShareFromAppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.ShareFromAppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromAppID = value["ShareFromAppID"].GetInt64();
        m_shareFromAppIDHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCSPMInfo.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserCSPMInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_cSPMNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSPMNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSPMNum, allocator);
    }

    if (m_usedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCount, allocator);
    }

    if (m_grantedCSPMNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantedCSPMNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_grantedCSPMNum, allocator);
    }

    if (m_isSharedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShared";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShared, allocator);
    }

    if (m_isSelfBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelfBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelfBuy, allocator);
    }

    if (m_shareFromAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareFromAppID, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

}


int64_t UserCSPMInfo::GetAppID() const
{
    return m_appID;
}

void UserCSPMInfo::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserCSPMInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string UserCSPMInfo::GetUin() const
{
    return m_uin;
}

void UserCSPMInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserCSPMInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UserCSPMInfo::GetNickName() const
{
    return m_nickName;
}

void UserCSPMInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool UserCSPMInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t UserCSPMInfo::GetCSPMNum() const
{
    return m_cSPMNum;
}

void UserCSPMInfo::SetCSPMNum(const int64_t& _cSPMNum)
{
    m_cSPMNum = _cSPMNum;
    m_cSPMNumHasBeenSet = true;
}

bool UserCSPMInfo::CSPMNumHasBeenSet() const
{
    return m_cSPMNumHasBeenSet;
}

int64_t UserCSPMInfo::GetUsedCount() const
{
    return m_usedCount;
}

void UserCSPMInfo::SetUsedCount(const int64_t& _usedCount)
{
    m_usedCount = _usedCount;
    m_usedCountHasBeenSet = true;
}

bool UserCSPMInfo::UsedCountHasBeenSet() const
{
    return m_usedCountHasBeenSet;
}

int64_t UserCSPMInfo::GetGrantedCSPMNum() const
{
    return m_grantedCSPMNum;
}

void UserCSPMInfo::SetGrantedCSPMNum(const int64_t& _grantedCSPMNum)
{
    m_grantedCSPMNum = _grantedCSPMNum;
    m_grantedCSPMNumHasBeenSet = true;
}

bool UserCSPMInfo::GrantedCSPMNumHasBeenSet() const
{
    return m_grantedCSPMNumHasBeenSet;
}

int64_t UserCSPMInfo::GetIsShared() const
{
    return m_isShared;
}

void UserCSPMInfo::SetIsShared(const int64_t& _isShared)
{
    m_isShared = _isShared;
    m_isSharedHasBeenSet = true;
}

bool UserCSPMInfo::IsSharedHasBeenSet() const
{
    return m_isSharedHasBeenSet;
}

int64_t UserCSPMInfo::GetIsSelfBuy() const
{
    return m_isSelfBuy;
}

void UserCSPMInfo::SetIsSelfBuy(const int64_t& _isSelfBuy)
{
    m_isSelfBuy = _isSelfBuy;
    m_isSelfBuyHasBeenSet = true;
}

bool UserCSPMInfo::IsSelfBuyHasBeenSet() const
{
    return m_isSelfBuyHasBeenSet;
}

int64_t UserCSPMInfo::GetShareFromAppID() const
{
    return m_shareFromAppID;
}

void UserCSPMInfo::SetShareFromAppID(const int64_t& _shareFromAppID)
{
    m_shareFromAppID = _shareFromAppID;
    m_shareFromAppIDHasBeenSet = true;
}

bool UserCSPMInfo::ShareFromAppIDHasBeenSet() const
{
    return m_shareFromAppIDHasBeenSet;
}

string UserCSPMInfo::GetRole() const
{
    return m_role;
}

void UserCSPMInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool UserCSPMInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string UserCSPMInfo::GetDepartment() const
{
    return m_department;
}

void UserCSPMInfo::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool UserCSPMInfo::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

