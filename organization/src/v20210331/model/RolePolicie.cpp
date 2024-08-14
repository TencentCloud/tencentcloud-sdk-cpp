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

#include <tencentcloud/organization/v20210331/model/RolePolicie.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RolePolicie::RolePolicie() :
    m_rolePolicyIdHasBeenSet(false),
    m_rolePolicyNameHasBeenSet(false),
    m_rolePolicyTypeHasBeenSet(false),
    m_rolePolicyDocumentHasBeenSet(false),
    m_addTimeHasBeenSet(false)
{
}

CoreInternalOutcome RolePolicie::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RolePolicyId") && !value["RolePolicyId"].IsNull())
    {
        if (!value["RolePolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RolePolicie.RolePolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rolePolicyId = value["RolePolicyId"].GetInt64();
        m_rolePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("RolePolicyName") && !value["RolePolicyName"].IsNull())
    {
        if (!value["RolePolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePolicie.RolePolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolePolicyName = string(value["RolePolicyName"].GetString());
        m_rolePolicyNameHasBeenSet = true;
    }

    if (value.HasMember("RolePolicyType") && !value["RolePolicyType"].IsNull())
    {
        if (!value["RolePolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePolicie.RolePolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolePolicyType = string(value["RolePolicyType"].GetString());
        m_rolePolicyTypeHasBeenSet = true;
    }

    if (value.HasMember("RolePolicyDocument") && !value["RolePolicyDocument"].IsNull())
    {
        if (!value["RolePolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePolicie.RolePolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolePolicyDocument = string(value["RolePolicyDocument"].GetString());
        m_rolePolicyDocumentHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePolicie.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RolePolicie::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rolePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rolePolicyId, allocator);
    }

    if (m_rolePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_rolePolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolePolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_rolePolicyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolePolicyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RolePolicie::GetRolePolicyId() const
{
    return m_rolePolicyId;
}

void RolePolicie::SetRolePolicyId(const int64_t& _rolePolicyId)
{
    m_rolePolicyId = _rolePolicyId;
    m_rolePolicyIdHasBeenSet = true;
}

bool RolePolicie::RolePolicyIdHasBeenSet() const
{
    return m_rolePolicyIdHasBeenSet;
}

string RolePolicie::GetRolePolicyName() const
{
    return m_rolePolicyName;
}

void RolePolicie::SetRolePolicyName(const string& _rolePolicyName)
{
    m_rolePolicyName = _rolePolicyName;
    m_rolePolicyNameHasBeenSet = true;
}

bool RolePolicie::RolePolicyNameHasBeenSet() const
{
    return m_rolePolicyNameHasBeenSet;
}

string RolePolicie::GetRolePolicyType() const
{
    return m_rolePolicyType;
}

void RolePolicie::SetRolePolicyType(const string& _rolePolicyType)
{
    m_rolePolicyType = _rolePolicyType;
    m_rolePolicyTypeHasBeenSet = true;
}

bool RolePolicie::RolePolicyTypeHasBeenSet() const
{
    return m_rolePolicyTypeHasBeenSet;
}

string RolePolicie::GetRolePolicyDocument() const
{
    return m_rolePolicyDocument;
}

void RolePolicie::SetRolePolicyDocument(const string& _rolePolicyDocument)
{
    m_rolePolicyDocument = _rolePolicyDocument;
    m_rolePolicyDocumentHasBeenSet = true;
}

bool RolePolicie::RolePolicyDocumentHasBeenSet() const
{
    return m_rolePolicyDocumentHasBeenSet;
}

string RolePolicie::GetAddTime() const
{
    return m_addTime;
}

void RolePolicie::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool RolePolicie::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

