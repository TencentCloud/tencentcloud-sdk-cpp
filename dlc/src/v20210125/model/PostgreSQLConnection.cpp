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

#include <tencentcloud/dlc/v20210125/model/PostgreSQLConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PostgreSQLConnection::PostgreSQLConnection() :
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_netWorkHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
}

CoreInternalOutcome PostgreSQLConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("NetWork") && !value["NetWork"].IsNull())
    {
        if (!value["NetWork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.NetWork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netWork.Deserialize(value["NetWork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netWorkHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLConnection.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostgreSQLConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
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

    if (m_netWorkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetWork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netWork.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

}


string PostgreSQLConnection::GetIp() const
{
    return m_ip;
}

void PostgreSQLConnection::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool PostgreSQLConnection::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string PostgreSQLConnection::GetPort() const
{
    return m_port;
}

void PostgreSQLConnection::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool PostgreSQLConnection::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string PostgreSQLConnection::GetUser() const
{
    return m_user;
}

void PostgreSQLConnection::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool PostgreSQLConnection::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string PostgreSQLConnection::GetPassword() const
{
    return m_password;
}

void PostgreSQLConnection::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool PostgreSQLConnection::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string PostgreSQLConnection::GetInstanceId() const
{
    return m_instanceId;
}

void PostgreSQLConnection::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PostgreSQLConnection::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PostgreSQLConnection::GetInstanceName() const
{
    return m_instanceName;
}

void PostgreSQLConnection::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PostgreSQLConnection::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

NetWork PostgreSQLConnection::GetNetWork() const
{
    return m_netWork;
}

void PostgreSQLConnection::SetNetWork(const NetWork& _netWork)
{
    m_netWork = _netWork;
    m_netWorkHasBeenSet = true;
}

bool PostgreSQLConnection::NetWorkHasBeenSet() const
{
    return m_netWorkHasBeenSet;
}

string PostgreSQLConnection::GetDatabase() const
{
    return m_database;
}

void PostgreSQLConnection::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool PostgreSQLConnection::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

