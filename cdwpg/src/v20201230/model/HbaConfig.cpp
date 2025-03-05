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

#include <tencentcloud/cdwpg/v20201230/model/HbaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

HbaConfig::HbaConfig() :
    m_typeHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_userHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_maskHasBeenSet(false)
{
}

CoreInternalOutcome HbaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HbaConfig.Mask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mask = string(value["Mask"].GetString());
        m_maskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HbaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mask.c_str(), allocator).Move(), allocator);
    }

}


string HbaConfig::GetType() const
{
    return m_type;
}

void HbaConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HbaConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HbaConfig::GetDatabase() const
{
    return m_database;
}

void HbaConfig::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool HbaConfig::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string HbaConfig::GetUser() const
{
    return m_user;
}

void HbaConfig::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool HbaConfig::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string HbaConfig::GetAddress() const
{
    return m_address;
}

void HbaConfig::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool HbaConfig::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string HbaConfig::GetMethod() const
{
    return m_method;
}

void HbaConfig::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool HbaConfig::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string HbaConfig::GetMask() const
{
    return m_mask;
}

void HbaConfig::SetMask(const string& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool HbaConfig::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

