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

#include <tencentcloud/eiam/v20210420/model/AppAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

AppAccountInfo::AppAccountInfo() :
    m_accountIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_userListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

CoreInternalOutcome AppAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAccountInfo.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAccountInfo.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("UserList") && !value["UserList"].IsNull())
    {
        if (!value["UserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppAccountInfo.UserList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LinkUserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userList.push_back(item);
        }
        m_userListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAccountInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAccountInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_userListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userList.begin(); itr != m_userList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

}


string AppAccountInfo::GetAccountId() const
{
    return m_accountId;
}

void AppAccountInfo::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool AppAccountInfo::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string AppAccountInfo::GetAccountName() const
{
    return m_accountName;
}

void AppAccountInfo::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool AppAccountInfo::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

vector<LinkUserInfo> AppAccountInfo::GetUserList() const
{
    return m_userList;
}

void AppAccountInfo::SetUserList(const vector<LinkUserInfo>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool AppAccountInfo::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}

string AppAccountInfo::GetDescription() const
{
    return m_description;
}

void AppAccountInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AppAccountInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AppAccountInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void AppAccountInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool AppAccountInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

