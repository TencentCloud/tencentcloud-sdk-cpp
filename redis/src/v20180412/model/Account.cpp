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

#include <tencentcloud/redis/v20180412/model/Account.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

Account::Account() :
    m_instanceIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_readonlyPolicyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Account::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Privilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilege = string(value["Privilege"].GetString());
        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("ReadonlyPolicy") && !value["ReadonlyPolicy"].IsNull())
    {
        if (!value["ReadonlyPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Account.ReadonlyPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadonlyPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_readonlyPolicy.push_back((*itr).GetString());
        }
        m_readonlyPolicyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Account::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilege.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_readonlyPolicy.begin(); itr != m_readonlyPolicy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Account::GetInstanceId() const
{
    return m_instanceId;
}

void Account::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Account::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Account::GetAccountName() const
{
    return m_accountName;
}

void Account::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool Account::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string Account::GetRemark() const
{
    return m_remark;
}

void Account::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Account::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Account::GetPrivilege() const
{
    return m_privilege;
}

void Account::SetPrivilege(const string& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool Account::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

vector<string> Account::GetReadonlyPolicy() const
{
    return m_readonlyPolicy;
}

void Account::SetReadonlyPolicy(const vector<string>& _readonlyPolicy)
{
    m_readonlyPolicy = _readonlyPolicy;
    m_readonlyPolicyHasBeenSet = true;
}

bool Account::ReadonlyPolicyHasBeenSet() const
{
    return m_readonlyPolicyHasBeenSet;
}

int64_t Account::GetStatus() const
{
    return m_status;
}

void Account::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Account::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Account::GetCreateTime() const
{
    return m_createTime;
}

void Account::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Account::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

