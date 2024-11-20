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

#include <tencentcloud/bh/v20230418/model/ChangePwdTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ChangePwdTaskInfo::ChangePwdTaskInfo() :
    m_idHasBeenSet(false),
    m_operationIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_changeMethodHasBeenSet(false),
    m_runAccountHasBeenSet(false),
    m_authGenerationStrategyHasBeenSet(false),
    m_passwordLengthHasBeenSet(false),
    m_smallLetterHasBeenSet(false),
    m_bigLetterHasBeenSet(false),
    m_digitHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_completeNotifyHasBeenSet(false),
    m_notifyEmailsHasBeenSet(false),
    m_filePasswordHasBeenSet(false),
    m_accountSetHasBeenSet(false),
    m_deviceSetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_nextTimeHasBeenSet(false)
{
}

CoreInternalOutcome ChangePwdTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OperationId") && !value["OperationId"].IsNull())
    {
        if (!value["OperationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.OperationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationId = string(value["OperationId"].GetString());
        m_operationIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Department` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_department.Deserialize(value["Department"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("ChangeMethod") && !value["ChangeMethod"].IsNull())
    {
        if (!value["ChangeMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.ChangeMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_changeMethod = value["ChangeMethod"].GetUint64();
        m_changeMethodHasBeenSet = true;
    }

    if (value.HasMember("RunAccount") && !value["RunAccount"].IsNull())
    {
        if (!value["RunAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.RunAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAccount = string(value["RunAccount"].GetString());
        m_runAccountHasBeenSet = true;
    }

    if (value.HasMember("AuthGenerationStrategy") && !value["AuthGenerationStrategy"].IsNull())
    {
        if (!value["AuthGenerationStrategy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.AuthGenerationStrategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authGenerationStrategy = value["AuthGenerationStrategy"].GetUint64();
        m_authGenerationStrategyHasBeenSet = true;
    }

    if (value.HasMember("PasswordLength") && !value["PasswordLength"].IsNull())
    {
        if (!value["PasswordLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.PasswordLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordLength = value["PasswordLength"].GetUint64();
        m_passwordLengthHasBeenSet = true;
    }

    if (value.HasMember("SmallLetter") && !value["SmallLetter"].IsNull())
    {
        if (!value["SmallLetter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.SmallLetter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smallLetter = value["SmallLetter"].GetUint64();
        m_smallLetterHasBeenSet = true;
    }

    if (value.HasMember("BigLetter") && !value["BigLetter"].IsNull())
    {
        if (!value["BigLetter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.BigLetter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bigLetter = value["BigLetter"].GetUint64();
        m_bigLetterHasBeenSet = true;
    }

    if (value.HasMember("Digit") && !value["Digit"].IsNull())
    {
        if (!value["Digit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Digit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_digit = value["Digit"].GetUint64();
        m_digitHasBeenSet = true;
    }

    if (value.HasMember("Symbol") && !value["Symbol"].IsNull())
    {
        if (!value["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(value["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (value.HasMember("CompleteNotify") && !value["CompleteNotify"].IsNull())
    {
        if (!value["CompleteNotify"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.CompleteNotify` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_completeNotify = value["CompleteNotify"].GetUint64();
        m_completeNotifyHasBeenSet = true;
    }

    if (value.HasMember("NotifyEmails") && !value["NotifyEmails"].IsNull())
    {
        if (!value["NotifyEmails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.NotifyEmails` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyEmails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyEmails.push_back((*itr).GetString());
        }
        m_notifyEmailsHasBeenSet = true;
    }

    if (value.HasMember("FilePassword") && !value["FilePassword"].IsNull())
    {
        if (!value["FilePassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.FilePassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePassword = string(value["FilePassword"].GetString());
        m_filePasswordHasBeenSet = true;
    }

    if (value.HasMember("AccountSet") && !value["AccountSet"].IsNull())
    {
        if (!value["AccountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.AccountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accountSet.push_back((*itr).GetString());
        }
        m_accountSetHasBeenSet = true;
    }

    if (value.HasMember("DeviceSet") && !value["DeviceSet"].IsNull())
    {
        if (!value["DeviceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.DeviceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Device item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceSet.push_back(item);
        }
        m_deviceSetHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("NextTime") && !value["NextTime"].IsNull())
    {
        if (!value["NextTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePwdTaskInfo.NextTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextTime = string(value["NextTime"].GetString());
        m_nextTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChangePwdTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_operationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_department.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_changeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changeMethod, allocator);
    }

    if (m_runAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_authGenerationStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthGenerationStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authGenerationStrategy, allocator);
    }

    if (m_passwordLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordLength, allocator);
    }

    if (m_smallLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallLetter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smallLetter, allocator);
    }

    if (m_bigLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigLetter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bigLetter, allocator);
    }

    if (m_digitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_digit, allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_completeNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteNotify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completeNotify, allocator);
    }

    if (m_notifyEmailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyEmails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyEmails.begin(); itr != m_notifyEmails.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filePasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePassword.c_str(), allocator).Move(), allocator);
    }

    if (m_accountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountSet.begin(); itr != m_accountSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceSet.begin(); itr != m_deviceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ChangePwdTaskInfo::GetId() const
{
    return m_id;
}

void ChangePwdTaskInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChangePwdTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ChangePwdTaskInfo::GetOperationId() const
{
    return m_operationId;
}

void ChangePwdTaskInfo::SetOperationId(const string& _operationId)
{
    m_operationId = _operationId;
    m_operationIdHasBeenSet = true;
}

bool ChangePwdTaskInfo::OperationIdHasBeenSet() const
{
    return m_operationIdHasBeenSet;
}

string ChangePwdTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void ChangePwdTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ChangePwdTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

Department ChangePwdTaskInfo::GetDepartment() const
{
    return m_department;
}

void ChangePwdTaskInfo::SetDepartment(const Department& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool ChangePwdTaskInfo::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetChangeMethod() const
{
    return m_changeMethod;
}

void ChangePwdTaskInfo::SetChangeMethod(const uint64_t& _changeMethod)
{
    m_changeMethod = _changeMethod;
    m_changeMethodHasBeenSet = true;
}

bool ChangePwdTaskInfo::ChangeMethodHasBeenSet() const
{
    return m_changeMethodHasBeenSet;
}

string ChangePwdTaskInfo::GetRunAccount() const
{
    return m_runAccount;
}

void ChangePwdTaskInfo::SetRunAccount(const string& _runAccount)
{
    m_runAccount = _runAccount;
    m_runAccountHasBeenSet = true;
}

bool ChangePwdTaskInfo::RunAccountHasBeenSet() const
{
    return m_runAccountHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetAuthGenerationStrategy() const
{
    return m_authGenerationStrategy;
}

void ChangePwdTaskInfo::SetAuthGenerationStrategy(const uint64_t& _authGenerationStrategy)
{
    m_authGenerationStrategy = _authGenerationStrategy;
    m_authGenerationStrategyHasBeenSet = true;
}

bool ChangePwdTaskInfo::AuthGenerationStrategyHasBeenSet() const
{
    return m_authGenerationStrategyHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetPasswordLength() const
{
    return m_passwordLength;
}

void ChangePwdTaskInfo::SetPasswordLength(const uint64_t& _passwordLength)
{
    m_passwordLength = _passwordLength;
    m_passwordLengthHasBeenSet = true;
}

bool ChangePwdTaskInfo::PasswordLengthHasBeenSet() const
{
    return m_passwordLengthHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetSmallLetter() const
{
    return m_smallLetter;
}

void ChangePwdTaskInfo::SetSmallLetter(const uint64_t& _smallLetter)
{
    m_smallLetter = _smallLetter;
    m_smallLetterHasBeenSet = true;
}

bool ChangePwdTaskInfo::SmallLetterHasBeenSet() const
{
    return m_smallLetterHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetBigLetter() const
{
    return m_bigLetter;
}

void ChangePwdTaskInfo::SetBigLetter(const uint64_t& _bigLetter)
{
    m_bigLetter = _bigLetter;
    m_bigLetterHasBeenSet = true;
}

bool ChangePwdTaskInfo::BigLetterHasBeenSet() const
{
    return m_bigLetterHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetDigit() const
{
    return m_digit;
}

void ChangePwdTaskInfo::SetDigit(const uint64_t& _digit)
{
    m_digit = _digit;
    m_digitHasBeenSet = true;
}

bool ChangePwdTaskInfo::DigitHasBeenSet() const
{
    return m_digitHasBeenSet;
}

string ChangePwdTaskInfo::GetSymbol() const
{
    return m_symbol;
}

void ChangePwdTaskInfo::SetSymbol(const string& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool ChangePwdTaskInfo::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetCompleteNotify() const
{
    return m_completeNotify;
}

void ChangePwdTaskInfo::SetCompleteNotify(const uint64_t& _completeNotify)
{
    m_completeNotify = _completeNotify;
    m_completeNotifyHasBeenSet = true;
}

bool ChangePwdTaskInfo::CompleteNotifyHasBeenSet() const
{
    return m_completeNotifyHasBeenSet;
}

vector<string> ChangePwdTaskInfo::GetNotifyEmails() const
{
    return m_notifyEmails;
}

void ChangePwdTaskInfo::SetNotifyEmails(const vector<string>& _notifyEmails)
{
    m_notifyEmails = _notifyEmails;
    m_notifyEmailsHasBeenSet = true;
}

bool ChangePwdTaskInfo::NotifyEmailsHasBeenSet() const
{
    return m_notifyEmailsHasBeenSet;
}

string ChangePwdTaskInfo::GetFilePassword() const
{
    return m_filePassword;
}

void ChangePwdTaskInfo::SetFilePassword(const string& _filePassword)
{
    m_filePassword = _filePassword;
    m_filePasswordHasBeenSet = true;
}

bool ChangePwdTaskInfo::FilePasswordHasBeenSet() const
{
    return m_filePasswordHasBeenSet;
}

vector<string> ChangePwdTaskInfo::GetAccountSet() const
{
    return m_accountSet;
}

void ChangePwdTaskInfo::SetAccountSet(const vector<string>& _accountSet)
{
    m_accountSet = _accountSet;
    m_accountSetHasBeenSet = true;
}

bool ChangePwdTaskInfo::AccountSetHasBeenSet() const
{
    return m_accountSetHasBeenSet;
}

vector<Device> ChangePwdTaskInfo::GetDeviceSet() const
{
    return m_deviceSet;
}

void ChangePwdTaskInfo::SetDeviceSet(const vector<Device>& _deviceSet)
{
    m_deviceSet = _deviceSet;
    m_deviceSetHasBeenSet = true;
}

bool ChangePwdTaskInfo::DeviceSetHasBeenSet() const
{
    return m_deviceSetHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetType() const
{
    return m_type;
}

void ChangePwdTaskInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ChangePwdTaskInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ChangePwdTaskInfo::GetPeriod() const
{
    return m_period;
}

void ChangePwdTaskInfo::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ChangePwdTaskInfo::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ChangePwdTaskInfo::GetFirstTime() const
{
    return m_firstTime;
}

void ChangePwdTaskInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool ChangePwdTaskInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string ChangePwdTaskInfo::GetNextTime() const
{
    return m_nextTime;
}

void ChangePwdTaskInfo::SetNextTime(const string& _nextTime)
{
    m_nextTime = _nextTime;
    m_nextTimeHasBeenSet = true;
}

bool ChangePwdTaskInfo::NextTimeHasBeenSet() const
{
    return m_nextTimeHasBeenSet;
}

