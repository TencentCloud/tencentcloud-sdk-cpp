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

#include <tencentcloud/sqlserver/v20180328/model/AccountDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

AccountDetail::AccountDetail() :
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_passTimeHasBeenSet(false),
    m_internalStatusHasBeenSet(false),
    m_dbsHasBeenSet(false),
    m_isAdminHasBeenSet(false),
    m_isCamHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false)
{
}

CoreInternalOutcome AccountDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PassTime") && !value["PassTime"].IsNull())
    {
        if (!value["PassTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.PassTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passTime = string(value["PassTime"].GetString());
        m_passTimeHasBeenSet = true;
    }

    if (value.HasMember("InternalStatus") && !value["InternalStatus"].IsNull())
    {
        if (!value["InternalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.InternalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalStatus = string(value["InternalStatus"].GetString());
        m_internalStatusHasBeenSet = true;
    }

    if (value.HasMember("Dbs") && !value["Dbs"].IsNull())
    {
        if (!value["Dbs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Dbs` is not array type"));

        const rapidjson::Value &tmpValue = value["Dbs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbs.push_back(item);
        }
        m_dbsHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }

    if (value.HasMember("IsCam") && !value["IsCam"].IsNull())
    {
        if (!value["IsCam"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.IsCam` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCam = value["IsCam"].GetBool();
        m_isCamHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Authentication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authentication = string(value["Authentication"].GetString());
        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetail.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passTime.c_str(), allocator).Move(), allocator);
    }

    if (m_internalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbs.begin(); itr != m_dbs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

    if (m_isCamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCam, allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authentication.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

}


string AccountDetail::GetName() const
{
    return m_name;
}

void AccountDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccountDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AccountDetail::GetRemark() const
{
    return m_remark;
}

void AccountDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccountDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AccountDetail::GetCreateTime() const
{
    return m_createTime;
}

void AccountDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccountDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AccountDetail::GetStatus() const
{
    return m_status;
}

void AccountDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccountDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AccountDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AccountDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AccountDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AccountDetail::GetPassTime() const
{
    return m_passTime;
}

void AccountDetail::SetPassTime(const string& _passTime)
{
    m_passTime = _passTime;
    m_passTimeHasBeenSet = true;
}

bool AccountDetail::PassTimeHasBeenSet() const
{
    return m_passTimeHasBeenSet;
}

string AccountDetail::GetInternalStatus() const
{
    return m_internalStatus;
}

void AccountDetail::SetInternalStatus(const string& _internalStatus)
{
    m_internalStatus = _internalStatus;
    m_internalStatusHasBeenSet = true;
}

bool AccountDetail::InternalStatusHasBeenSet() const
{
    return m_internalStatusHasBeenSet;
}

vector<DBPrivilege> AccountDetail::GetDbs() const
{
    return m_dbs;
}

void AccountDetail::SetDbs(const vector<DBPrivilege>& _dbs)
{
    m_dbs = _dbs;
    m_dbsHasBeenSet = true;
}

bool AccountDetail::DbsHasBeenSet() const
{
    return m_dbsHasBeenSet;
}

bool AccountDetail::GetIsAdmin() const
{
    return m_isAdmin;
}

void AccountDetail::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool AccountDetail::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

bool AccountDetail::GetIsCam() const
{
    return m_isCam;
}

void AccountDetail::SetIsCam(const bool& _isCam)
{
    m_isCam = _isCam;
    m_isCamHasBeenSet = true;
}

bool AccountDetail::IsCamHasBeenSet() const
{
    return m_isCamHasBeenSet;
}

string AccountDetail::GetAuthentication() const
{
    return m_authentication;
}

void AccountDetail::SetAuthentication(const string& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool AccountDetail::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

string AccountDetail::GetHost() const
{
    return m_host;
}

void AccountDetail::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AccountDetail::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AccountDetail::GetAccountType() const
{
    return m_accountType;
}

void AccountDetail::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AccountDetail::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

