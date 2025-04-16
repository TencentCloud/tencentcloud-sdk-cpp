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

#include <tencentcloud/dlc/v20210125/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserInfo::UserInfo() :
    m_userIdHasBeenSet(false),
    m_userDescriptionHasBeenSet(false),
    m_policySetHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_workGroupSetHasBeenSet(false),
    m_isOwnerHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_accountTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserDescription") && !value["UserDescription"].IsNull())
    {
        if (!value["UserDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDescription = string(value["UserDescription"].GetString());
        m_userDescriptionHasBeenSet = true;
    }

    if (value.HasMember("PolicySet") && !value["PolicySet"].IsNull())
    {
        if (!value["PolicySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInfo.PolicySet` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Policy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policySet.push_back(item);
        }
        m_policySetHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupSet") && !value["WorkGroupSet"].IsNull())
    {
        if (!value["WorkGroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInfo.WorkGroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkGroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkGroupMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workGroupSet.push_back(item);
        }
        m_workGroupSetHasBeenSet = true;
    }

    if (value.HasMember("IsOwner") && !value["IsOwner"].IsNull())
    {
        if (!value["IsOwner"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.IsOwner` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOwner = value["IsOwner"].GetBool();
        m_isOwnerHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_workGroupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workGroupSet.begin(); itr != m_workGroupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOwner, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

}


string UserInfo::GetUserId() const
{
    return m_userId;
}

void UserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserInfo::GetUserDescription() const
{
    return m_userDescription;
}

void UserInfo::SetUserDescription(const string& _userDescription)
{
    m_userDescription = _userDescription;
    m_userDescriptionHasBeenSet = true;
}

bool UserInfo::UserDescriptionHasBeenSet() const
{
    return m_userDescriptionHasBeenSet;
}

vector<Policy> UserInfo::GetPolicySet() const
{
    return m_policySet;
}

void UserInfo::SetPolicySet(const vector<Policy>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool UserInfo::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}

string UserInfo::GetCreator() const
{
    return m_creator;
}

void UserInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool UserInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string UserInfo::GetCreateTime() const
{
    return m_createTime;
}

void UserInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<WorkGroupMessage> UserInfo::GetWorkGroupSet() const
{
    return m_workGroupSet;
}

void UserInfo::SetWorkGroupSet(const vector<WorkGroupMessage>& _workGroupSet)
{
    m_workGroupSet = _workGroupSet;
    m_workGroupSetHasBeenSet = true;
}

bool UserInfo::WorkGroupSetHasBeenSet() const
{
    return m_workGroupSetHasBeenSet;
}

bool UserInfo::GetIsOwner() const
{
    return m_isOwner;
}

void UserInfo::SetIsOwner(const bool& _isOwner)
{
    m_isOwner = _isOwner;
    m_isOwnerHasBeenSet = true;
}

bool UserInfo::IsOwnerHasBeenSet() const
{
    return m_isOwnerHasBeenSet;
}

string UserInfo::GetUserType() const
{
    return m_userType;
}

void UserInfo::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UserInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string UserInfo::GetUserAlias() const
{
    return m_userAlias;
}

void UserInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool UserInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

string UserInfo::GetAccountType() const
{
    return m_accountType;
}

void UserInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool UserInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

