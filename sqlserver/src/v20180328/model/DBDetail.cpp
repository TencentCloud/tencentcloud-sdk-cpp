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

#include <tencentcloud/sqlserver/v20180328/model/DBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DBDetail::DBDetail() :
    m_nameHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_internalStatusHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CoreInternalOutcome DBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Charset") && !value["Charset"].IsNull())
    {
        if (!value["Charset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.Charset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charset = string(value["Charset"].GetString());
        m_charsetHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Accounts") && !value["Accounts"].IsNull())
    {
        if (!value["Accounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBDetail.Accounts` is not array type"));

        const rapidjson::Value &tmpValue = value["Accounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accounts.push_back(item);
        }
        m_accountsHasBeenSet = true;
    }

    if (value.HasMember("InternalStatus") && !value["InternalStatus"].IsNull())
    {
        if (!value["InternalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.InternalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalStatus = string(value["InternalStatus"].GetString());
        m_internalStatusHasBeenSet = true;
    }

    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBDetail.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_accountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_internalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

}


string DBDetail::GetName() const
{
    return m_name;
}

void DBDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DBDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DBDetail::GetCharset() const
{
    return m_charset;
}

void DBDetail::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool DBDetail::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string DBDetail::GetRemark() const
{
    return m_remark;
}

void DBDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DBDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DBDetail::GetCreateTime() const
{
    return m_createTime;
}

void DBDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DBDetail::GetStatus() const
{
    return m_status;
}

void DBDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AccountPrivilege> DBDetail::GetAccounts() const
{
    return m_accounts;
}

void DBDetail::SetAccounts(const vector<AccountPrivilege>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool DBDetail::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

string DBDetail::GetInternalStatus() const
{
    return m_internalStatus;
}

void DBDetail::SetInternalStatus(const string& _internalStatus)
{
    m_internalStatus = _internalStatus;
    m_internalStatusHasBeenSet = true;
}

bool DBDetail::InternalStatusHasBeenSet() const
{
    return m_internalStatusHasBeenSet;
}

string DBDetail::GetEncryption() const
{
    return m_encryption;
}

void DBDetail::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool DBDetail::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

