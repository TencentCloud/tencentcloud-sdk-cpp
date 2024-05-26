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

#include <tencentcloud/dasb/v20191018/model/ModifyChangePwdTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

ModifyChangePwdTaskRequest::ModifyChangePwdTaskRequest() :
    m_operationIdHasBeenSet(false),
    m_deviceIdSetHasBeenSet(false),
    m_accountSetHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_changeMethodHasBeenSet(false),
    m_authGenerationStrategyHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_runAccountHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_passwordLengthHasBeenSet(false),
    m_smallLetterHasBeenSet(false),
    m_bigLetterHasBeenSet(false),
    m_digitHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_completeNotifyHasBeenSet(false),
    m_notifyEmailsHasBeenSet(false),
    m_filePasswordHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_firstTimeHasBeenSet(false)
{
}

string ModifyChangePwdTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationId.c_str(), allocator).Move(), allocator);
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

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyType, allocator);
    }

    if (m_changeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_changeMethod, allocator);
    }

    if (m_authGenerationStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthGenerationStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authGenerationStrategy, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_runAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_passwordLength, allocator);
    }

    if (m_smallLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallLetter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smallLetter, allocator);
    }

    if (m_bigLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigLetter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bigLetter, allocator);
    }

    if (m_digitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_digit, allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_completeNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteNotify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_completeNotify, allocator);
    }

    if (m_notifyEmailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyEmails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyEmails.begin(); itr != m_notifyEmails.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filePasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePassword.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyChangePwdTaskRequest::GetOperationId() const
{
    return m_operationId;
}

void ModifyChangePwdTaskRequest::SetOperationId(const string& _operationId)
{
    m_operationId = _operationId;
    m_operationIdHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::OperationIdHasBeenSet() const
{
    return m_operationIdHasBeenSet;
}

vector<uint64_t> ModifyChangePwdTaskRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void ModifyChangePwdTaskRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

vector<string> ModifyChangePwdTaskRequest::GetAccountSet() const
{
    return m_accountSet;
}

void ModifyChangePwdTaskRequest::SetAccountSet(const vector<string>& _accountSet)
{
    m_accountSet = _accountSet;
    m_accountSetHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::AccountSetHasBeenSet() const
{
    return m_accountSetHasBeenSet;
}

uint64_t ModifyChangePwdTaskRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyChangePwdTaskRequest::SetModifyType(const uint64_t& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetChangeMethod() const
{
    return m_changeMethod;
}

void ModifyChangePwdTaskRequest::SetChangeMethod(const int64_t& _changeMethod)
{
    m_changeMethod = _changeMethod;
    m_changeMethodHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::ChangeMethodHasBeenSet() const
{
    return m_changeMethodHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetAuthGenerationStrategy() const
{
    return m_authGenerationStrategy;
}

void ModifyChangePwdTaskRequest::SetAuthGenerationStrategy(const int64_t& _authGenerationStrategy)
{
    m_authGenerationStrategy = _authGenerationStrategy;
    m_authGenerationStrategyHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::AuthGenerationStrategyHasBeenSet() const
{
    return m_authGenerationStrategyHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyChangePwdTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void ModifyChangePwdTaskRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetRunAccount() const
{
    return m_runAccount;
}

void ModifyChangePwdTaskRequest::SetRunAccount(const string& _runAccount)
{
    m_runAccount = _runAccount;
    m_runAccountHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::RunAccountHasBeenSet() const
{
    return m_runAccountHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetPassword() const
{
    return m_password;
}

void ModifyChangePwdTaskRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetPasswordLength() const
{
    return m_passwordLength;
}

void ModifyChangePwdTaskRequest::SetPasswordLength(const int64_t& _passwordLength)
{
    m_passwordLength = _passwordLength;
    m_passwordLengthHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::PasswordLengthHasBeenSet() const
{
    return m_passwordLengthHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetSmallLetter() const
{
    return m_smallLetter;
}

void ModifyChangePwdTaskRequest::SetSmallLetter(const int64_t& _smallLetter)
{
    m_smallLetter = _smallLetter;
    m_smallLetterHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::SmallLetterHasBeenSet() const
{
    return m_smallLetterHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetBigLetter() const
{
    return m_bigLetter;
}

void ModifyChangePwdTaskRequest::SetBigLetter(const int64_t& _bigLetter)
{
    m_bigLetter = _bigLetter;
    m_bigLetterHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::BigLetterHasBeenSet() const
{
    return m_bigLetterHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetDigit() const
{
    return m_digit;
}

void ModifyChangePwdTaskRequest::SetDigit(const int64_t& _digit)
{
    m_digit = _digit;
    m_digitHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::DigitHasBeenSet() const
{
    return m_digitHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetSymbol() const
{
    return m_symbol;
}

void ModifyChangePwdTaskRequest::SetSymbol(const string& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

int64_t ModifyChangePwdTaskRequest::GetCompleteNotify() const
{
    return m_completeNotify;
}

void ModifyChangePwdTaskRequest::SetCompleteNotify(const int64_t& _completeNotify)
{
    m_completeNotify = _completeNotify;
    m_completeNotifyHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::CompleteNotifyHasBeenSet() const
{
    return m_completeNotifyHasBeenSet;
}

vector<string> ModifyChangePwdTaskRequest::GetNotifyEmails() const
{
    return m_notifyEmails;
}

void ModifyChangePwdTaskRequest::SetNotifyEmails(const vector<string>& _notifyEmails)
{
    m_notifyEmails = _notifyEmails;
    m_notifyEmailsHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::NotifyEmailsHasBeenSet() const
{
    return m_notifyEmailsHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetFilePassword() const
{
    return m_filePassword;
}

void ModifyChangePwdTaskRequest::SetFilePassword(const string& _filePassword)
{
    m_filePassword = _filePassword;
    m_filePasswordHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::FilePasswordHasBeenSet() const
{
    return m_filePasswordHasBeenSet;
}

uint64_t ModifyChangePwdTaskRequest::GetType() const
{
    return m_type;
}

void ModifyChangePwdTaskRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ModifyChangePwdTaskRequest::GetPeriod() const
{
    return m_period;
}

void ModifyChangePwdTaskRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ModifyChangePwdTaskRequest::GetFirstTime() const
{
    return m_firstTime;
}

void ModifyChangePwdTaskRequest::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool ModifyChangePwdTaskRequest::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}


