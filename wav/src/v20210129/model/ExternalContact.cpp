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

#include <tencentcloud/wav/v20210129/model/ExternalContact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ExternalContact::ExternalContact() :
    m_externalUserIdHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_unionIdHasBeenSet(false),
    m_phoneHasBeenSet(false)
{
}

CoreInternalOutcome ExternalContact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UnionId") && !value["UnionId"].IsNull())
    {
        if (!value["UnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.UnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionId = string(value["UnionId"].GetString());
        m_unionIdHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContact.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalContact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_unionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

}


string ExternalContact::GetExternalUserId() const
{
    return m_externalUserId;
}

void ExternalContact::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool ExternalContact::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

int64_t ExternalContact::GetGender() const
{
    return m_gender;
}

void ExternalContact::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool ExternalContact::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string ExternalContact::GetName() const
{
    return m_name;
}

void ExternalContact::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExternalContact::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ExternalContact::GetType() const
{
    return m_type;
}

void ExternalContact::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExternalContact::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ExternalContact::GetUnionId() const
{
    return m_unionId;
}

void ExternalContact::SetUnionId(const string& _unionId)
{
    m_unionId = _unionId;
    m_unionIdHasBeenSet = true;
}

bool ExternalContact::UnionIdHasBeenSet() const
{
    return m_unionIdHasBeenSet;
}

string ExternalContact::GetPhone() const
{
    return m_phone;
}

void ExternalContact::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ExternalContact::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

