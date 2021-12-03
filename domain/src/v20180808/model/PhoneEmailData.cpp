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

#include <tencentcloud/domain/v20180808/model/PhoneEmailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

PhoneEmailData::PhoneEmailData() :
    m_codeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_checkStatusHasBeenSet(false)
{
}

CoreInternalOutcome PhoneEmailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneEmailData.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneEmailData.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneEmailData.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneEmailData.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhoneEmailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStatus, allocator);
    }

}


string PhoneEmailData::GetCode() const
{
    return m_code;
}

void PhoneEmailData::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool PhoneEmailData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t PhoneEmailData::GetType() const
{
    return m_type;
}

void PhoneEmailData::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PhoneEmailData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PhoneEmailData::GetCreatedOn() const
{
    return m_createdOn;
}

void PhoneEmailData::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool PhoneEmailData::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t PhoneEmailData::GetCheckStatus() const
{
    return m_checkStatus;
}

void PhoneEmailData::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool PhoneEmailData::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

