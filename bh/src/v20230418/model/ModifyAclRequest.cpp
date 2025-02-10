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

#include <tencentcloud/bh/v20230418/model/ModifyAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyAclRequest::ModifyAclRequest() :
    m_nameHasBeenSet(false),
    m_allowDiskRedirectHasBeenSet(false),
    m_allowAnyAccountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_allowClipFileUpHasBeenSet(false),
    m_allowClipFileDownHasBeenSet(false),
    m_allowClipTextUpHasBeenSet(false),
    m_allowClipTextDownHasBeenSet(false),
    m_allowFileUpHasBeenSet(false),
    m_maxFileUpSizeHasBeenSet(false),
    m_allowFileDownHasBeenSet(false),
    m_maxFileDownSizeHasBeenSet(false),
    m_userIdSetHasBeenSet(false),
    m_userGroupIdSetHasBeenSet(false),
    m_deviceIdSetHasBeenSet(false),
    m_appAssetIdSetHasBeenSet(false),
    m_deviceGroupIdSetHasBeenSet(false),
    m_accountSetHasBeenSet(false),
    m_cmdTemplateIdSetHasBeenSet(false),
    m_aCTemplateIdSetHasBeenSet(false),
    m_allowDiskFileUpHasBeenSet(false),
    m_allowDiskFileDownHasBeenSet(false),
    m_allowShellFileUpHasBeenSet(false),
    m_allowShellFileDownHasBeenSet(false),
    m_allowFileDelHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_allowAccessCredentialHasBeenSet(false),
    m_allowKeyboardLoggerHasBeenSet(false)
{
}

string ModifyAclRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_allowDiskRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskRedirect, allocator);
    }

    if (m_allowAnyAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAnyAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowAnyAccount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_allowClipFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipFileUp, allocator);
    }

    if (m_allowClipFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipFileDown, allocator);
    }

    if (m_allowClipTextUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipTextUp, allocator);
    }

    if (m_allowClipTextDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipTextDown, allocator);
    }

    if (m_allowFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileUp, allocator);
    }

    if (m_maxFileUpSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileUpSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFileUpSize, allocator);
    }

    if (m_allowFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileDown, allocator);
    }

    if (m_maxFileDownSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileDownSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFileDownSize, allocator);
    }

    if (m_userIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIdSet.begin(); itr != m_userIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_userGroupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIdSet.begin(); itr != m_userGroupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_deviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIdSet.begin(); itr != m_deviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_appAssetIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssetIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appAssetIdSet.begin(); itr != m_appAssetIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_deviceGroupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceGroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceGroupIdSet.begin(); itr != m_deviceGroupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_accountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountSet.begin(); itr != m_accountSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdTemplateIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cmdTemplateIdSet.begin(); itr != m_cmdTemplateIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_aCTemplateIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aCTemplateIdSet.begin(); itr != m_aCTemplateIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowDiskFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskFileUp, allocator);
    }

    if (m_allowDiskFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskFileDown, allocator);
    }

    if (m_allowShellFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowShellFileUp, allocator);
    }

    if (m_allowShellFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowShellFileDown, allocator);
    }

    if (m_allowFileDelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileDel, allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_allowAccessCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAccessCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowAccessCredential, allocator);
    }

    if (m_allowKeyboardLoggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowKeyboardLogger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowKeyboardLogger, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAclRequest::GetName() const
{
    return m_name;
}

void ModifyAclRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAclRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ModifyAclRequest::GetAllowDiskRedirect() const
{
    return m_allowDiskRedirect;
}

void ModifyAclRequest::SetAllowDiskRedirect(const bool& _allowDiskRedirect)
{
    m_allowDiskRedirect = _allowDiskRedirect;
    m_allowDiskRedirectHasBeenSet = true;
}

bool ModifyAclRequest::AllowDiskRedirectHasBeenSet() const
{
    return m_allowDiskRedirectHasBeenSet;
}

bool ModifyAclRequest::GetAllowAnyAccount() const
{
    return m_allowAnyAccount;
}

void ModifyAclRequest::SetAllowAnyAccount(const bool& _allowAnyAccount)
{
    m_allowAnyAccount = _allowAnyAccount;
    m_allowAnyAccountHasBeenSet = true;
}

bool ModifyAclRequest::AllowAnyAccountHasBeenSet() const
{
    return m_allowAnyAccountHasBeenSet;
}

uint64_t ModifyAclRequest::GetId() const
{
    return m_id;
}

void ModifyAclRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyAclRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool ModifyAclRequest::GetAllowClipFileUp() const
{
    return m_allowClipFileUp;
}

void ModifyAclRequest::SetAllowClipFileUp(const bool& _allowClipFileUp)
{
    m_allowClipFileUp = _allowClipFileUp;
    m_allowClipFileUpHasBeenSet = true;
}

bool ModifyAclRequest::AllowClipFileUpHasBeenSet() const
{
    return m_allowClipFileUpHasBeenSet;
}

bool ModifyAclRequest::GetAllowClipFileDown() const
{
    return m_allowClipFileDown;
}

void ModifyAclRequest::SetAllowClipFileDown(const bool& _allowClipFileDown)
{
    m_allowClipFileDown = _allowClipFileDown;
    m_allowClipFileDownHasBeenSet = true;
}

bool ModifyAclRequest::AllowClipFileDownHasBeenSet() const
{
    return m_allowClipFileDownHasBeenSet;
}

bool ModifyAclRequest::GetAllowClipTextUp() const
{
    return m_allowClipTextUp;
}

void ModifyAclRequest::SetAllowClipTextUp(const bool& _allowClipTextUp)
{
    m_allowClipTextUp = _allowClipTextUp;
    m_allowClipTextUpHasBeenSet = true;
}

bool ModifyAclRequest::AllowClipTextUpHasBeenSet() const
{
    return m_allowClipTextUpHasBeenSet;
}

bool ModifyAclRequest::GetAllowClipTextDown() const
{
    return m_allowClipTextDown;
}

void ModifyAclRequest::SetAllowClipTextDown(const bool& _allowClipTextDown)
{
    m_allowClipTextDown = _allowClipTextDown;
    m_allowClipTextDownHasBeenSet = true;
}

bool ModifyAclRequest::AllowClipTextDownHasBeenSet() const
{
    return m_allowClipTextDownHasBeenSet;
}

bool ModifyAclRequest::GetAllowFileUp() const
{
    return m_allowFileUp;
}

void ModifyAclRequest::SetAllowFileUp(const bool& _allowFileUp)
{
    m_allowFileUp = _allowFileUp;
    m_allowFileUpHasBeenSet = true;
}

bool ModifyAclRequest::AllowFileUpHasBeenSet() const
{
    return m_allowFileUpHasBeenSet;
}

uint64_t ModifyAclRequest::GetMaxFileUpSize() const
{
    return m_maxFileUpSize;
}

void ModifyAclRequest::SetMaxFileUpSize(const uint64_t& _maxFileUpSize)
{
    m_maxFileUpSize = _maxFileUpSize;
    m_maxFileUpSizeHasBeenSet = true;
}

bool ModifyAclRequest::MaxFileUpSizeHasBeenSet() const
{
    return m_maxFileUpSizeHasBeenSet;
}

bool ModifyAclRequest::GetAllowFileDown() const
{
    return m_allowFileDown;
}

void ModifyAclRequest::SetAllowFileDown(const bool& _allowFileDown)
{
    m_allowFileDown = _allowFileDown;
    m_allowFileDownHasBeenSet = true;
}

bool ModifyAclRequest::AllowFileDownHasBeenSet() const
{
    return m_allowFileDownHasBeenSet;
}

uint64_t ModifyAclRequest::GetMaxFileDownSize() const
{
    return m_maxFileDownSize;
}

void ModifyAclRequest::SetMaxFileDownSize(const uint64_t& _maxFileDownSize)
{
    m_maxFileDownSize = _maxFileDownSize;
    m_maxFileDownSizeHasBeenSet = true;
}

bool ModifyAclRequest::MaxFileDownSizeHasBeenSet() const
{
    return m_maxFileDownSizeHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetUserIdSet() const
{
    return m_userIdSet;
}

void ModifyAclRequest::SetUserIdSet(const vector<uint64_t>& _userIdSet)
{
    m_userIdSet = _userIdSet;
    m_userIdSetHasBeenSet = true;
}

bool ModifyAclRequest::UserIdSetHasBeenSet() const
{
    return m_userIdSetHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetUserGroupIdSet() const
{
    return m_userGroupIdSet;
}

void ModifyAclRequest::SetUserGroupIdSet(const vector<uint64_t>& _userGroupIdSet)
{
    m_userGroupIdSet = _userGroupIdSet;
    m_userGroupIdSetHasBeenSet = true;
}

bool ModifyAclRequest::UserGroupIdSetHasBeenSet() const
{
    return m_userGroupIdSetHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void ModifyAclRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool ModifyAclRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetAppAssetIdSet() const
{
    return m_appAssetIdSet;
}

void ModifyAclRequest::SetAppAssetIdSet(const vector<uint64_t>& _appAssetIdSet)
{
    m_appAssetIdSet = _appAssetIdSet;
    m_appAssetIdSetHasBeenSet = true;
}

bool ModifyAclRequest::AppAssetIdSetHasBeenSet() const
{
    return m_appAssetIdSetHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetDeviceGroupIdSet() const
{
    return m_deviceGroupIdSet;
}

void ModifyAclRequest::SetDeviceGroupIdSet(const vector<uint64_t>& _deviceGroupIdSet)
{
    m_deviceGroupIdSet = _deviceGroupIdSet;
    m_deviceGroupIdSetHasBeenSet = true;
}

bool ModifyAclRequest::DeviceGroupIdSetHasBeenSet() const
{
    return m_deviceGroupIdSetHasBeenSet;
}

vector<string> ModifyAclRequest::GetAccountSet() const
{
    return m_accountSet;
}

void ModifyAclRequest::SetAccountSet(const vector<string>& _accountSet)
{
    m_accountSet = _accountSet;
    m_accountSetHasBeenSet = true;
}

bool ModifyAclRequest::AccountSetHasBeenSet() const
{
    return m_accountSetHasBeenSet;
}

vector<uint64_t> ModifyAclRequest::GetCmdTemplateIdSet() const
{
    return m_cmdTemplateIdSet;
}

void ModifyAclRequest::SetCmdTemplateIdSet(const vector<uint64_t>& _cmdTemplateIdSet)
{
    m_cmdTemplateIdSet = _cmdTemplateIdSet;
    m_cmdTemplateIdSetHasBeenSet = true;
}

bool ModifyAclRequest::CmdTemplateIdSetHasBeenSet() const
{
    return m_cmdTemplateIdSetHasBeenSet;
}

vector<string> ModifyAclRequest::GetACTemplateIdSet() const
{
    return m_aCTemplateIdSet;
}

void ModifyAclRequest::SetACTemplateIdSet(const vector<string>& _aCTemplateIdSet)
{
    m_aCTemplateIdSet = _aCTemplateIdSet;
    m_aCTemplateIdSetHasBeenSet = true;
}

bool ModifyAclRequest::ACTemplateIdSetHasBeenSet() const
{
    return m_aCTemplateIdSetHasBeenSet;
}

bool ModifyAclRequest::GetAllowDiskFileUp() const
{
    return m_allowDiskFileUp;
}

void ModifyAclRequest::SetAllowDiskFileUp(const bool& _allowDiskFileUp)
{
    m_allowDiskFileUp = _allowDiskFileUp;
    m_allowDiskFileUpHasBeenSet = true;
}

bool ModifyAclRequest::AllowDiskFileUpHasBeenSet() const
{
    return m_allowDiskFileUpHasBeenSet;
}

bool ModifyAclRequest::GetAllowDiskFileDown() const
{
    return m_allowDiskFileDown;
}

void ModifyAclRequest::SetAllowDiskFileDown(const bool& _allowDiskFileDown)
{
    m_allowDiskFileDown = _allowDiskFileDown;
    m_allowDiskFileDownHasBeenSet = true;
}

bool ModifyAclRequest::AllowDiskFileDownHasBeenSet() const
{
    return m_allowDiskFileDownHasBeenSet;
}

bool ModifyAclRequest::GetAllowShellFileUp() const
{
    return m_allowShellFileUp;
}

void ModifyAclRequest::SetAllowShellFileUp(const bool& _allowShellFileUp)
{
    m_allowShellFileUp = _allowShellFileUp;
    m_allowShellFileUpHasBeenSet = true;
}

bool ModifyAclRequest::AllowShellFileUpHasBeenSet() const
{
    return m_allowShellFileUpHasBeenSet;
}

bool ModifyAclRequest::GetAllowShellFileDown() const
{
    return m_allowShellFileDown;
}

void ModifyAclRequest::SetAllowShellFileDown(const bool& _allowShellFileDown)
{
    m_allowShellFileDown = _allowShellFileDown;
    m_allowShellFileDownHasBeenSet = true;
}

bool ModifyAclRequest::AllowShellFileDownHasBeenSet() const
{
    return m_allowShellFileDownHasBeenSet;
}

bool ModifyAclRequest::GetAllowFileDel() const
{
    return m_allowFileDel;
}

void ModifyAclRequest::SetAllowFileDel(const bool& _allowFileDel)
{
    m_allowFileDel = _allowFileDel;
    m_allowFileDelHasBeenSet = true;
}

bool ModifyAclRequest::AllowFileDelHasBeenSet() const
{
    return m_allowFileDelHasBeenSet;
}

string ModifyAclRequest::GetValidateFrom() const
{
    return m_validateFrom;
}

void ModifyAclRequest::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool ModifyAclRequest::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string ModifyAclRequest::GetValidateTo() const
{
    return m_validateTo;
}

void ModifyAclRequest::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool ModifyAclRequest::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

string ModifyAclRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void ModifyAclRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool ModifyAclRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

bool ModifyAclRequest::GetAllowAccessCredential() const
{
    return m_allowAccessCredential;
}

void ModifyAclRequest::SetAllowAccessCredential(const bool& _allowAccessCredential)
{
    m_allowAccessCredential = _allowAccessCredential;
    m_allowAccessCredentialHasBeenSet = true;
}

bool ModifyAclRequest::AllowAccessCredentialHasBeenSet() const
{
    return m_allowAccessCredentialHasBeenSet;
}

bool ModifyAclRequest::GetAllowKeyboardLogger() const
{
    return m_allowKeyboardLogger;
}

void ModifyAclRequest::SetAllowKeyboardLogger(const bool& _allowKeyboardLogger)
{
    m_allowKeyboardLogger = _allowKeyboardLogger;
    m_allowKeyboardLoggerHasBeenSet = true;
}

bool ModifyAclRequest::AllowKeyboardLoggerHasBeenSet() const
{
    return m_allowKeyboardLoggerHasBeenSet;
}


