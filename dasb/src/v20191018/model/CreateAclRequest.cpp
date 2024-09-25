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

#include <tencentcloud/dasb/v20191018/model/CreateAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

CreateAclRequest::CreateAclRequest() :
    m_nameHasBeenSet(false),
    m_allowDiskRedirectHasBeenSet(false),
    m_allowAnyAccountHasBeenSet(false),
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

string CreateAclRequest::ToJsonString() const
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


string CreateAclRequest::GetName() const
{
    return m_name;
}

void CreateAclRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAclRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool CreateAclRequest::GetAllowDiskRedirect() const
{
    return m_allowDiskRedirect;
}

void CreateAclRequest::SetAllowDiskRedirect(const bool& _allowDiskRedirect)
{
    m_allowDiskRedirect = _allowDiskRedirect;
    m_allowDiskRedirectHasBeenSet = true;
}

bool CreateAclRequest::AllowDiskRedirectHasBeenSet() const
{
    return m_allowDiskRedirectHasBeenSet;
}

bool CreateAclRequest::GetAllowAnyAccount() const
{
    return m_allowAnyAccount;
}

void CreateAclRequest::SetAllowAnyAccount(const bool& _allowAnyAccount)
{
    m_allowAnyAccount = _allowAnyAccount;
    m_allowAnyAccountHasBeenSet = true;
}

bool CreateAclRequest::AllowAnyAccountHasBeenSet() const
{
    return m_allowAnyAccountHasBeenSet;
}

bool CreateAclRequest::GetAllowClipFileUp() const
{
    return m_allowClipFileUp;
}

void CreateAclRequest::SetAllowClipFileUp(const bool& _allowClipFileUp)
{
    m_allowClipFileUp = _allowClipFileUp;
    m_allowClipFileUpHasBeenSet = true;
}

bool CreateAclRequest::AllowClipFileUpHasBeenSet() const
{
    return m_allowClipFileUpHasBeenSet;
}

bool CreateAclRequest::GetAllowClipFileDown() const
{
    return m_allowClipFileDown;
}

void CreateAclRequest::SetAllowClipFileDown(const bool& _allowClipFileDown)
{
    m_allowClipFileDown = _allowClipFileDown;
    m_allowClipFileDownHasBeenSet = true;
}

bool CreateAclRequest::AllowClipFileDownHasBeenSet() const
{
    return m_allowClipFileDownHasBeenSet;
}

bool CreateAclRequest::GetAllowClipTextUp() const
{
    return m_allowClipTextUp;
}

void CreateAclRequest::SetAllowClipTextUp(const bool& _allowClipTextUp)
{
    m_allowClipTextUp = _allowClipTextUp;
    m_allowClipTextUpHasBeenSet = true;
}

bool CreateAclRequest::AllowClipTextUpHasBeenSet() const
{
    return m_allowClipTextUpHasBeenSet;
}

bool CreateAclRequest::GetAllowClipTextDown() const
{
    return m_allowClipTextDown;
}

void CreateAclRequest::SetAllowClipTextDown(const bool& _allowClipTextDown)
{
    m_allowClipTextDown = _allowClipTextDown;
    m_allowClipTextDownHasBeenSet = true;
}

bool CreateAclRequest::AllowClipTextDownHasBeenSet() const
{
    return m_allowClipTextDownHasBeenSet;
}

bool CreateAclRequest::GetAllowFileUp() const
{
    return m_allowFileUp;
}

void CreateAclRequest::SetAllowFileUp(const bool& _allowFileUp)
{
    m_allowFileUp = _allowFileUp;
    m_allowFileUpHasBeenSet = true;
}

bool CreateAclRequest::AllowFileUpHasBeenSet() const
{
    return m_allowFileUpHasBeenSet;
}

uint64_t CreateAclRequest::GetMaxFileUpSize() const
{
    return m_maxFileUpSize;
}

void CreateAclRequest::SetMaxFileUpSize(const uint64_t& _maxFileUpSize)
{
    m_maxFileUpSize = _maxFileUpSize;
    m_maxFileUpSizeHasBeenSet = true;
}

bool CreateAclRequest::MaxFileUpSizeHasBeenSet() const
{
    return m_maxFileUpSizeHasBeenSet;
}

bool CreateAclRequest::GetAllowFileDown() const
{
    return m_allowFileDown;
}

void CreateAclRequest::SetAllowFileDown(const bool& _allowFileDown)
{
    m_allowFileDown = _allowFileDown;
    m_allowFileDownHasBeenSet = true;
}

bool CreateAclRequest::AllowFileDownHasBeenSet() const
{
    return m_allowFileDownHasBeenSet;
}

uint64_t CreateAclRequest::GetMaxFileDownSize() const
{
    return m_maxFileDownSize;
}

void CreateAclRequest::SetMaxFileDownSize(const uint64_t& _maxFileDownSize)
{
    m_maxFileDownSize = _maxFileDownSize;
    m_maxFileDownSizeHasBeenSet = true;
}

bool CreateAclRequest::MaxFileDownSizeHasBeenSet() const
{
    return m_maxFileDownSizeHasBeenSet;
}

vector<uint64_t> CreateAclRequest::GetUserIdSet() const
{
    return m_userIdSet;
}

void CreateAclRequest::SetUserIdSet(const vector<uint64_t>& _userIdSet)
{
    m_userIdSet = _userIdSet;
    m_userIdSetHasBeenSet = true;
}

bool CreateAclRequest::UserIdSetHasBeenSet() const
{
    return m_userIdSetHasBeenSet;
}

vector<uint64_t> CreateAclRequest::GetUserGroupIdSet() const
{
    return m_userGroupIdSet;
}

void CreateAclRequest::SetUserGroupIdSet(const vector<uint64_t>& _userGroupIdSet)
{
    m_userGroupIdSet = _userGroupIdSet;
    m_userGroupIdSetHasBeenSet = true;
}

bool CreateAclRequest::UserGroupIdSetHasBeenSet() const
{
    return m_userGroupIdSetHasBeenSet;
}

vector<uint64_t> CreateAclRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void CreateAclRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool CreateAclRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

vector<uint64_t> CreateAclRequest::GetDeviceGroupIdSet() const
{
    return m_deviceGroupIdSet;
}

void CreateAclRequest::SetDeviceGroupIdSet(const vector<uint64_t>& _deviceGroupIdSet)
{
    m_deviceGroupIdSet = _deviceGroupIdSet;
    m_deviceGroupIdSetHasBeenSet = true;
}

bool CreateAclRequest::DeviceGroupIdSetHasBeenSet() const
{
    return m_deviceGroupIdSetHasBeenSet;
}

vector<string> CreateAclRequest::GetAccountSet() const
{
    return m_accountSet;
}

void CreateAclRequest::SetAccountSet(const vector<string>& _accountSet)
{
    m_accountSet = _accountSet;
    m_accountSetHasBeenSet = true;
}

bool CreateAclRequest::AccountSetHasBeenSet() const
{
    return m_accountSetHasBeenSet;
}

vector<uint64_t> CreateAclRequest::GetCmdTemplateIdSet() const
{
    return m_cmdTemplateIdSet;
}

void CreateAclRequest::SetCmdTemplateIdSet(const vector<uint64_t>& _cmdTemplateIdSet)
{
    m_cmdTemplateIdSet = _cmdTemplateIdSet;
    m_cmdTemplateIdSetHasBeenSet = true;
}

bool CreateAclRequest::CmdTemplateIdSetHasBeenSet() const
{
    return m_cmdTemplateIdSetHasBeenSet;
}

vector<string> CreateAclRequest::GetACTemplateIdSet() const
{
    return m_aCTemplateIdSet;
}

void CreateAclRequest::SetACTemplateIdSet(const vector<string>& _aCTemplateIdSet)
{
    m_aCTemplateIdSet = _aCTemplateIdSet;
    m_aCTemplateIdSetHasBeenSet = true;
}

bool CreateAclRequest::ACTemplateIdSetHasBeenSet() const
{
    return m_aCTemplateIdSetHasBeenSet;
}

bool CreateAclRequest::GetAllowDiskFileUp() const
{
    return m_allowDiskFileUp;
}

void CreateAclRequest::SetAllowDiskFileUp(const bool& _allowDiskFileUp)
{
    m_allowDiskFileUp = _allowDiskFileUp;
    m_allowDiskFileUpHasBeenSet = true;
}

bool CreateAclRequest::AllowDiskFileUpHasBeenSet() const
{
    return m_allowDiskFileUpHasBeenSet;
}

bool CreateAclRequest::GetAllowDiskFileDown() const
{
    return m_allowDiskFileDown;
}

void CreateAclRequest::SetAllowDiskFileDown(const bool& _allowDiskFileDown)
{
    m_allowDiskFileDown = _allowDiskFileDown;
    m_allowDiskFileDownHasBeenSet = true;
}

bool CreateAclRequest::AllowDiskFileDownHasBeenSet() const
{
    return m_allowDiskFileDownHasBeenSet;
}

bool CreateAclRequest::GetAllowShellFileUp() const
{
    return m_allowShellFileUp;
}

void CreateAclRequest::SetAllowShellFileUp(const bool& _allowShellFileUp)
{
    m_allowShellFileUp = _allowShellFileUp;
    m_allowShellFileUpHasBeenSet = true;
}

bool CreateAclRequest::AllowShellFileUpHasBeenSet() const
{
    return m_allowShellFileUpHasBeenSet;
}

bool CreateAclRequest::GetAllowShellFileDown() const
{
    return m_allowShellFileDown;
}

void CreateAclRequest::SetAllowShellFileDown(const bool& _allowShellFileDown)
{
    m_allowShellFileDown = _allowShellFileDown;
    m_allowShellFileDownHasBeenSet = true;
}

bool CreateAclRequest::AllowShellFileDownHasBeenSet() const
{
    return m_allowShellFileDownHasBeenSet;
}

bool CreateAclRequest::GetAllowFileDel() const
{
    return m_allowFileDel;
}

void CreateAclRequest::SetAllowFileDel(const bool& _allowFileDel)
{
    m_allowFileDel = _allowFileDel;
    m_allowFileDelHasBeenSet = true;
}

bool CreateAclRequest::AllowFileDelHasBeenSet() const
{
    return m_allowFileDelHasBeenSet;
}

string CreateAclRequest::GetValidateFrom() const
{
    return m_validateFrom;
}

void CreateAclRequest::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool CreateAclRequest::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string CreateAclRequest::GetValidateTo() const
{
    return m_validateTo;
}

void CreateAclRequest::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool CreateAclRequest::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

string CreateAclRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void CreateAclRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool CreateAclRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

bool CreateAclRequest::GetAllowAccessCredential() const
{
    return m_allowAccessCredential;
}

void CreateAclRequest::SetAllowAccessCredential(const bool& _allowAccessCredential)
{
    m_allowAccessCredential = _allowAccessCredential;
    m_allowAccessCredentialHasBeenSet = true;
}

bool CreateAclRequest::AllowAccessCredentialHasBeenSet() const
{
    return m_allowAccessCredentialHasBeenSet;
}

bool CreateAclRequest::GetAllowKeyboardLogger() const
{
    return m_allowKeyboardLogger;
}

void CreateAclRequest::SetAllowKeyboardLogger(const bool& _allowKeyboardLogger)
{
    m_allowKeyboardLogger = _allowKeyboardLogger;
    m_allowKeyboardLoggerHasBeenSet = true;
}

bool CreateAclRequest::AllowKeyboardLoggerHasBeenSet() const
{
    return m_allowKeyboardLoggerHasBeenSet;
}


