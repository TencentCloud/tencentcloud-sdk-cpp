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

#include <tencentcloud/postgres/v20170312/model/Database.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

Database::Database() :
    m_databaseNameHasBeenSet(false),
    m_databaseOwnerHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_collateHasBeenSet(false),
    m_ctypeHasBeenSet(false),
    m_allowConnHasBeenSet(false),
    m_connLimitHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

CoreInternalOutcome Database::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseOwner") && !value["DatabaseOwner"].IsNull())
    {
        if (!value["DatabaseOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.DatabaseOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseOwner = string(value["DatabaseOwner"].GetString());
        m_databaseOwnerHasBeenSet = true;
    }

    if (value.HasMember("Encoding") && !value["Encoding"].IsNull())
    {
        if (!value["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(value["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (value.HasMember("Collate") && !value["Collate"].IsNull())
    {
        if (!value["Collate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Collate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collate = string(value["Collate"].GetString());
        m_collateHasBeenSet = true;
    }

    if (value.HasMember("Ctype") && !value["Ctype"].IsNull())
    {
        if (!value["Ctype"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Ctype` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ctype = string(value["Ctype"].GetString());
        m_ctypeHasBeenSet = true;
    }

    if (value.HasMember("AllowConn") && !value["AllowConn"].IsNull())
    {
        if (!value["AllowConn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Database.AllowConn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowConn = value["AllowConn"].GetBool();
        m_allowConnHasBeenSet = true;
    }

    if (value.HasMember("ConnLimit") && !value["ConnLimit"].IsNull())
    {
        if (!value["ConnLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Database.ConnLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connLimit = value["ConnLimit"].GetInt64();
        m_connLimitHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Privileges` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privileges = string(value["Privileges"].GetString());
        m_privilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Database::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_collateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collate.c_str(), allocator).Move(), allocator);
    }

    if (m_ctypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ctype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ctype.c_str(), allocator).Move(), allocator);
    }

    if (m_allowConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowConn, allocator);
    }

    if (m_connLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connLimit, allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privileges.c_str(), allocator).Move(), allocator);
    }

}


string Database::GetDatabaseName() const
{
    return m_databaseName;
}

void Database::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool Database::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string Database::GetDatabaseOwner() const
{
    return m_databaseOwner;
}

void Database::SetDatabaseOwner(const string& _databaseOwner)
{
    m_databaseOwner = _databaseOwner;
    m_databaseOwnerHasBeenSet = true;
}

bool Database::DatabaseOwnerHasBeenSet() const
{
    return m_databaseOwnerHasBeenSet;
}

string Database::GetEncoding() const
{
    return m_encoding;
}

void Database::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool Database::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string Database::GetCollate() const
{
    return m_collate;
}

void Database::SetCollate(const string& _collate)
{
    m_collate = _collate;
    m_collateHasBeenSet = true;
}

bool Database::CollateHasBeenSet() const
{
    return m_collateHasBeenSet;
}

string Database::GetCtype() const
{
    return m_ctype;
}

void Database::SetCtype(const string& _ctype)
{
    m_ctype = _ctype;
    m_ctypeHasBeenSet = true;
}

bool Database::CtypeHasBeenSet() const
{
    return m_ctypeHasBeenSet;
}

bool Database::GetAllowConn() const
{
    return m_allowConn;
}

void Database::SetAllowConn(const bool& _allowConn)
{
    m_allowConn = _allowConn;
    m_allowConnHasBeenSet = true;
}

bool Database::AllowConnHasBeenSet() const
{
    return m_allowConnHasBeenSet;
}

int64_t Database::GetConnLimit() const
{
    return m_connLimit;
}

void Database::SetConnLimit(const int64_t& _connLimit)
{
    m_connLimit = _connLimit;
    m_connLimitHasBeenSet = true;
}

bool Database::ConnLimitHasBeenSet() const
{
    return m_connLimitHasBeenSet;
}

string Database::GetPrivileges() const
{
    return m_privileges;
}

void Database::SetPrivileges(const string& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool Database::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

