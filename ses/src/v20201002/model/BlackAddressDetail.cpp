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

#include <tencentcloud/ses/v20201002/model/BlackAddressDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

BlackAddressDetail::BlackAddressDetail() :
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BlackAddressDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAddressDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAddressDetail.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAddressDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireDate") && !value["ExpireDate"].IsNull())
    {
        if (!value["ExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAddressDetail.ExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDate = string(value["ExpireDate"].GetString());
        m_expireDateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAddressDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlackAddressDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t BlackAddressDetail::GetId() const
{
    return m_id;
}

void BlackAddressDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BlackAddressDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BlackAddressDetail::GetEmail() const
{
    return m_email;
}

void BlackAddressDetail::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool BlackAddressDetail::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string BlackAddressDetail::GetCreateTime() const
{
    return m_createTime;
}

void BlackAddressDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BlackAddressDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BlackAddressDetail::GetExpireDate() const
{
    return m_expireDate;
}

void BlackAddressDetail::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool BlackAddressDetail::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

uint64_t BlackAddressDetail::GetStatus() const
{
    return m_status;
}

void BlackAddressDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BlackAddressDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

