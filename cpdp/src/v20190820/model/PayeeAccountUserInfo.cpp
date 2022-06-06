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

#include <tencentcloud/cpdp/v20190820/model/PayeeAccountUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeAccountUserInfo::PayeeAccountUserInfo() :
    m_outUserIdHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome PayeeAccountUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutUserId") && !value["OutUserId"].IsNull())
    {
        if (!value["OutUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountUserInfo.OutUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outUserId = string(value["OutUserId"].GetString());
        m_outUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountUserInfo.UserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetInt64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountUserInfo.IdType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idType = value["IdType"].GetInt64();
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("IdNo") && !value["IdNo"].IsNull())
    {
        if (!value["IdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountUserInfo.IdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNo = string(value["IdNo"].GetString());
        m_idNoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountUserInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeAccountUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idType, allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string PayeeAccountUserInfo::GetOutUserId() const
{
    return m_outUserId;
}

void PayeeAccountUserInfo::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool PayeeAccountUserInfo::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

int64_t PayeeAccountUserInfo::GetUserType() const
{
    return m_userType;
}

void PayeeAccountUserInfo::SetUserType(const int64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool PayeeAccountUserInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

int64_t PayeeAccountUserInfo::GetIdType() const
{
    return m_idType;
}

void PayeeAccountUserInfo::SetIdType(const int64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool PayeeAccountUserInfo::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string PayeeAccountUserInfo::GetIdNo() const
{
    return m_idNo;
}

void PayeeAccountUserInfo::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool PayeeAccountUserInfo::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string PayeeAccountUserInfo::GetName() const
{
    return m_name;
}

void PayeeAccountUserInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PayeeAccountUserInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

