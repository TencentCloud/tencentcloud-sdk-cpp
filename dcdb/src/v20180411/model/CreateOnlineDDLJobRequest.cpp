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

#include <tencentcloud/dcdb/v20180411/model/CreateOnlineDDLJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateOnlineDDLJobRequest::CreateOnlineDDLJobRequest() :
    m_instanceIdHasBeenSet(false),
    m_alterHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_criticalLoadHasBeenSet(false),
    m_checkAutoIncHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_usePtHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

string CreateOnlineDDLJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_alterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alter.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_criticalLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLoad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_criticalLoad, allocator);
    }

    if (m_checkAutoIncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAutoInc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAutoInc, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_usePtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_usePt, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOnlineDDLJobRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateOnlineDDLJobRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetAlter() const
{
    return m_alter;
}

void CreateOnlineDDLJobRequest::SetAlter(const string& _alter)
{
    m_alter = _alter;
    m_alterHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::AlterHasBeenSet() const
{
    return m_alterHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetDbName() const
{
    return m_dbName;
}

void CreateOnlineDDLJobRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetTable() const
{
    return m_table;
}

void CreateOnlineDDLJobRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetUser() const
{
    return m_user;
}

void CreateOnlineDDLJobRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetPassword() const
{
    return m_password;
}

void CreateOnlineDDLJobRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t CreateOnlineDDLJobRequest::GetCriticalLoad() const
{
    return m_criticalLoad;
}

void CreateOnlineDDLJobRequest::SetCriticalLoad(const int64_t& _criticalLoad)
{
    m_criticalLoad = _criticalLoad;
    m_criticalLoadHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::CriticalLoadHasBeenSet() const
{
    return m_criticalLoadHasBeenSet;
}

int64_t CreateOnlineDDLJobRequest::GetCheckAutoInc() const
{
    return m_checkAutoInc;
}

void CreateOnlineDDLJobRequest::SetCheckAutoInc(const int64_t& _checkAutoInc)
{
    m_checkAutoInc = _checkAutoInc;
    m_checkAutoIncHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::CheckAutoIncHasBeenSet() const
{
    return m_checkAutoIncHasBeenSet;
}

int64_t CreateOnlineDDLJobRequest::GetMaxDelay() const
{
    return m_maxDelay;
}

void CreateOnlineDDLJobRequest::SetMaxDelay(const int64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

int64_t CreateOnlineDDLJobRequest::GetUsePt() const
{
    return m_usePt;
}

void CreateOnlineDDLJobRequest::SetUsePt(const int64_t& _usePt)
{
    m_usePt = _usePt;
    m_usePtHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::UsePtHasBeenSet() const
{
    return m_usePtHasBeenSet;
}

string CreateOnlineDDLJobRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateOnlineDDLJobRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateOnlineDDLJobRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}


