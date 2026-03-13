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

#include <tencentcloud/wedata/v20210820/model/ChangeLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ChangeLog::ChangeLog() :
    m_changeTypeHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_modifiedAccountHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_changeReasonHasBeenSet(false),
    m_modifiedAccountNameHasBeenSet(false)
{
}

CoreInternalOutcome ChangeLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChangeType") && !value["ChangeType"].IsNull())
    {
        if (!value["ChangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.ChangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeType = string(value["ChangeType"].GetString());
        m_changeTypeHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }

    if (value.HasMember("ModifiedAccount") && !value["ModifiedAccount"].IsNull())
    {
        if (!value["ModifiedAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.ModifiedAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedAccount = string(value["ModifiedAccount"].GetString());
        m_modifiedAccountHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ChangeReason") && !value["ChangeReason"].IsNull())
    {
        if (!value["ChangeReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.ChangeReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeReason = string(value["ChangeReason"].GetString());
        m_changeReasonHasBeenSet = true;
    }

    if (value.HasMember("ModifiedAccountName") && !value["ModifiedAccountName"].IsNull())
    {
        if (!value["ModifiedAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChangeLog.ModifiedAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedAccountName = string(value["ModifiedAccountName"].GetString());
        m_modifiedAccountNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChangeLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_changeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_changeReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeReason.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedAccountName.c_str(), allocator).Move(), allocator);
    }

}


string ChangeLog::GetChangeType() const
{
    return m_changeType;
}

void ChangeLog::SetChangeType(const string& _changeType)
{
    m_changeType = _changeType;
    m_changeTypeHasBeenSet = true;
}

bool ChangeLog::ChangeTypeHasBeenSet() const
{
    return m_changeTypeHasBeenSet;
}

string ChangeLog::GetOldValue() const
{
    return m_oldValue;
}

void ChangeLog::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ChangeLog::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ChangeLog::GetNewValue() const
{
    return m_newValue;
}

void ChangeLog::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool ChangeLog::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

string ChangeLog::GetModifiedAccount() const
{
    return m_modifiedAccount;
}

void ChangeLog::SetModifiedAccount(const string& _modifiedAccount)
{
    m_modifiedAccount = _modifiedAccount;
    m_modifiedAccountHasBeenSet = true;
}

bool ChangeLog::ModifiedAccountHasBeenSet() const
{
    return m_modifiedAccountHasBeenSet;
}

string ChangeLog::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ChangeLog::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ChangeLog::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ChangeLog::GetChangeReason() const
{
    return m_changeReason;
}

void ChangeLog::SetChangeReason(const string& _changeReason)
{
    m_changeReason = _changeReason;
    m_changeReasonHasBeenSet = true;
}

bool ChangeLog::ChangeReasonHasBeenSet() const
{
    return m_changeReasonHasBeenSet;
}

string ChangeLog::GetModifiedAccountName() const
{
    return m_modifiedAccountName;
}

void ChangeLog::SetModifiedAccountName(const string& _modifiedAccountName)
{
    m_modifiedAccountName = _modifiedAccountName;
    m_modifiedAccountNameHasBeenSet = true;
}

bool ChangeLog::ModifiedAccountNameHasBeenSet() const
{
    return m_modifiedAccountNameHasBeenSet;
}

