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

#include <tencentcloud/dlc/v20210125/model/CreateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateUserRequest::CreateUserRequest() :
    m_userIdHasBeenSet(false),
    m_userDescriptionHasBeenSet(false),
    m_policySetHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_workGroupIdsHasBeenSet(false),
    m_userAliasHasBeenSet(false)
{
}

string CreateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_workGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workGroupIds.begin(); itr != m_workGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserRequest::GetUserId() const
{
    return m_userId;
}

void CreateUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateUserRequest::GetUserDescription() const
{
    return m_userDescription;
}

void CreateUserRequest::SetUserDescription(const string& _userDescription)
{
    m_userDescription = _userDescription;
    m_userDescriptionHasBeenSet = true;
}

bool CreateUserRequest::UserDescriptionHasBeenSet() const
{
    return m_userDescriptionHasBeenSet;
}

vector<Policy> CreateUserRequest::GetPolicySet() const
{
    return m_policySet;
}

void CreateUserRequest::SetPolicySet(const vector<Policy>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool CreateUserRequest::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}

string CreateUserRequest::GetUserType() const
{
    return m_userType;
}

void CreateUserRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool CreateUserRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

vector<int64_t> CreateUserRequest::GetWorkGroupIds() const
{
    return m_workGroupIds;
}

void CreateUserRequest::SetWorkGroupIds(const vector<int64_t>& _workGroupIds)
{
    m_workGroupIds = _workGroupIds;
    m_workGroupIdsHasBeenSet = true;
}

bool CreateUserRequest::WorkGroupIdsHasBeenSet() const
{
    return m_workGroupIdsHasBeenSet;
}

string CreateUserRequest::GetUserAlias() const
{
    return m_userAlias;
}

void CreateUserRequest::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool CreateUserRequest::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}


