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

#include <tencentcloud/wedata/v20210820/model/DutyPerson.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DutyPerson::DutyPerson() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome DutyPerson::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.OwnerUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = string(value["OwnerUserId"].GetString());
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.TenantId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = value["TenantId"].GetInt64();
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyPerson.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DutyPerson::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tenantId, allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string DutyPerson::GetUserId() const
{
    return m_userId;
}

void DutyPerson::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DutyPerson::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DutyPerson::GetUserName() const
{
    return m_userName;
}

void DutyPerson::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DutyPerson::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DutyPerson::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void DutyPerson::SetOwnerUserId(const string& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool DutyPerson::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

int64_t DutyPerson::GetTenantId() const
{
    return m_tenantId;
}

void DutyPerson::SetTenantId(const int64_t& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DutyPerson::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string DutyPerson::GetAddTime() const
{
    return m_addTime;
}

void DutyPerson::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool DutyPerson::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string DutyPerson::GetParams() const
{
    return m_params;
}

void DutyPerson::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DutyPerson::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

