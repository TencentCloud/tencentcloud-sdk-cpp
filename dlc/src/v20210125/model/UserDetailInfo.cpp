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

#include <tencentcloud/dlc/v20210125/model/UserDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserDetailInfo::UserDetailInfo() :
    m_userIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_userDescriptionHasBeenSet(false),
    m_dataPolicyInfoHasBeenSet(false),
    m_enginePolicyInfoHasBeenSet(false),
    m_workGroupInfoHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_rowFilterInfoHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_catalogPolicyInfoHasBeenSet(false)
{
}

CoreInternalOutcome UserDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("UserDescription") && !value["UserDescription"].IsNull())
    {
        if (!value["UserDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.UserDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDescription = string(value["UserDescription"].GetString());
        m_userDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DataPolicyInfo") && !value["DataPolicyInfo"].IsNull())
    {
        if (!value["DataPolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.DataPolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataPolicyInfo.Deserialize(value["DataPolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataPolicyInfoHasBeenSet = true;
    }

    if (value.HasMember("EnginePolicyInfo") && !value["EnginePolicyInfo"].IsNull())
    {
        if (!value["EnginePolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.EnginePolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enginePolicyInfo.Deserialize(value["EnginePolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enginePolicyInfoHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupInfo") && !value["WorkGroupInfo"].IsNull())
    {
        if (!value["WorkGroupInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.WorkGroupInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workGroupInfo.Deserialize(value["WorkGroupInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workGroupInfoHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("RowFilterInfo") && !value["RowFilterInfo"].IsNull())
    {
        if (!value["RowFilterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.RowFilterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rowFilterInfo.Deserialize(value["RowFilterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rowFilterInfoHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("CatalogPolicyInfo") && !value["CatalogPolicyInfo"].IsNull())
    {
        if (!value["CatalogPolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDetailInfo.CatalogPolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_catalogPolicyInfo.Deserialize(value["CatalogPolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_catalogPolicyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataPolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enginePolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnginePolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enginePolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workGroupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workGroupInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_rowFilterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowFilterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rowFilterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogPolicyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogPolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_catalogPolicyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string UserDetailInfo::GetUserId() const
{
    return m_userId;
}

void UserDetailInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserDetailInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserDetailInfo::GetType() const
{
    return m_type;
}

void UserDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UserDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UserDetailInfo::GetUserType() const
{
    return m_userType;
}

void UserDetailInfo::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UserDetailInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string UserDetailInfo::GetUserDescription() const
{
    return m_userDescription;
}

void UserDetailInfo::SetUserDescription(const string& _userDescription)
{
    m_userDescription = _userDescription;
    m_userDescriptionHasBeenSet = true;
}

bool UserDetailInfo::UserDescriptionHasBeenSet() const
{
    return m_userDescriptionHasBeenSet;
}

Policys UserDetailInfo::GetDataPolicyInfo() const
{
    return m_dataPolicyInfo;
}

void UserDetailInfo::SetDataPolicyInfo(const Policys& _dataPolicyInfo)
{
    m_dataPolicyInfo = _dataPolicyInfo;
    m_dataPolicyInfoHasBeenSet = true;
}

bool UserDetailInfo::DataPolicyInfoHasBeenSet() const
{
    return m_dataPolicyInfoHasBeenSet;
}

Policys UserDetailInfo::GetEnginePolicyInfo() const
{
    return m_enginePolicyInfo;
}

void UserDetailInfo::SetEnginePolicyInfo(const Policys& _enginePolicyInfo)
{
    m_enginePolicyInfo = _enginePolicyInfo;
    m_enginePolicyInfoHasBeenSet = true;
}

bool UserDetailInfo::EnginePolicyInfoHasBeenSet() const
{
    return m_enginePolicyInfoHasBeenSet;
}

WorkGroups UserDetailInfo::GetWorkGroupInfo() const
{
    return m_workGroupInfo;
}

void UserDetailInfo::SetWorkGroupInfo(const WorkGroups& _workGroupInfo)
{
    m_workGroupInfo = _workGroupInfo;
    m_workGroupInfoHasBeenSet = true;
}

bool UserDetailInfo::WorkGroupInfoHasBeenSet() const
{
    return m_workGroupInfoHasBeenSet;
}

string UserDetailInfo::GetUserAlias() const
{
    return m_userAlias;
}

void UserDetailInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool UserDetailInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

Policys UserDetailInfo::GetRowFilterInfo() const
{
    return m_rowFilterInfo;
}

void UserDetailInfo::SetRowFilterInfo(const Policys& _rowFilterInfo)
{
    m_rowFilterInfo = _rowFilterInfo;
    m_rowFilterInfoHasBeenSet = true;
}

bool UserDetailInfo::RowFilterInfoHasBeenSet() const
{
    return m_rowFilterInfoHasBeenSet;
}

string UserDetailInfo::GetAccountType() const
{
    return m_accountType;
}

void UserDetailInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool UserDetailInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

Policys UserDetailInfo::GetCatalogPolicyInfo() const
{
    return m_catalogPolicyInfo;
}

void UserDetailInfo::SetCatalogPolicyInfo(const Policys& _catalogPolicyInfo)
{
    m_catalogPolicyInfo = _catalogPolicyInfo;
    m_catalogPolicyInfoHasBeenSet = true;
}

bool UserDetailInfo::CatalogPolicyInfoHasBeenSet() const
{
    return m_catalogPolicyInfoHasBeenSet;
}

