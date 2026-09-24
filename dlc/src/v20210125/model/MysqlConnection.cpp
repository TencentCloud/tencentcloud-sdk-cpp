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

#include <tencentcloud/dlc/v20210125/model/MysqlConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MysqlConnection::MysqlConnection() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_jDBCUrlHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_netWorkHasBeenSet(false)
{
}

CoreInternalOutcome MysqlConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("JDBCUrl") && !value["JDBCUrl"].IsNull())
    {
        if (!value["JDBCUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.JDBCUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jDBCUrl = string(value["JDBCUrl"].GetString());
        m_jDBCUrlHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("NetWork") && !value["NetWork"].IsNull())
    {
        if (!value["NetWork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlConnection.NetWork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netWork.Deserialize(value["NetWork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netWorkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MysqlConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_jDBCUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JDBCUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jDBCUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_netWorkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetWork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netWork.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MysqlConnection::GetInstanceId() const
{
    return m_instanceId;
}

void MysqlConnection::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MysqlConnection::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MysqlConnection::GetInstanceName() const
{
    return m_instanceName;
}

void MysqlConnection::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MysqlConnection::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MysqlConnection::GetJDBCUrl() const
{
    return m_jDBCUrl;
}

void MysqlConnection::SetJDBCUrl(const string& _jDBCUrl)
{
    m_jDBCUrl = _jDBCUrl;
    m_jDBCUrlHasBeenSet = true;
}

bool MysqlConnection::JDBCUrlHasBeenSet() const
{
    return m_jDBCUrlHasBeenSet;
}

string MysqlConnection::GetUser() const
{
    return m_user;
}

void MysqlConnection::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool MysqlConnection::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string MysqlConnection::GetPassword() const
{
    return m_password;
}

void MysqlConnection::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MysqlConnection::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

NetWork MysqlConnection::GetNetWork() const
{
    return m_netWork;
}

void MysqlConnection::SetNetWork(const NetWork& _netWork)
{
    m_netWork = _netWork;
    m_netWorkHasBeenSet = true;
}

bool MysqlConnection::NetWorkHasBeenSet() const
{
    return m_netWorkHasBeenSet;
}

