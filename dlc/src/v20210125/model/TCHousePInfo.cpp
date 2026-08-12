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

#include <tencentcloud/dlc/v20210125/model/TCHousePInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TCHousePInfo::TCHousePInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_jdbcUrlHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_accessInfoHasBeenSet(false)
{
}

CoreInternalOutcome TCHousePInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("JdbcUrl") && !value["JdbcUrl"].IsNull())
    {
        if (!value["JdbcUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.JdbcUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jdbcUrl = string(value["JdbcUrl"].GetString());
        m_jdbcUrlHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("AccessInfo") && !value["AccessInfo"].IsNull())
    {
        if (!value["AccessInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCHousePInfo.AccessInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessInfo = string(value["AccessInfo"].GetString());
        m_accessInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCHousePInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_jdbcUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdbcUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jdbcUrl.c_str(), allocator).Move(), allocator);
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

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessInfo.c_str(), allocator).Move(), allocator);
    }

}


string TCHousePInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TCHousePInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TCHousePInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TCHousePInfo::GetInstanceName() const
{
    return m_instanceName;
}

void TCHousePInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TCHousePInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TCHousePInfo::GetJdbcUrl() const
{
    return m_jdbcUrl;
}

void TCHousePInfo::SetJdbcUrl(const string& _jdbcUrl)
{
    m_jdbcUrl = _jdbcUrl;
    m_jdbcUrlHasBeenSet = true;
}

bool TCHousePInfo::JdbcUrlHasBeenSet() const
{
    return m_jdbcUrlHasBeenSet;
}

string TCHousePInfo::GetUser() const
{
    return m_user;
}

void TCHousePInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool TCHousePInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string TCHousePInfo::GetPassword() const
{
    return m_password;
}

void TCHousePInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool TCHousePInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

DatasourceConnectionLocation TCHousePInfo::GetLocation() const
{
    return m_location;
}

void TCHousePInfo::SetLocation(const DatasourceConnectionLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TCHousePInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string TCHousePInfo::GetDbName() const
{
    return m_dbName;
}

void TCHousePInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool TCHousePInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string TCHousePInfo::GetAccessInfo() const
{
    return m_accessInfo;
}

void TCHousePInfo::SetAccessInfo(const string& _accessInfo)
{
    m_accessInfo = _accessInfo;
    m_accessInfoHasBeenSet = true;
}

bool TCHousePInfo::AccessInfoHasBeenSet() const
{
    return m_accessInfoHasBeenSet;
}

