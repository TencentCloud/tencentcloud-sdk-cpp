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

#include <tencentcloud/eiam/v20210420/model/AccountGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

AccountGroupInfo::AccountGroupInfo() :
    m_accountGroupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

CoreInternalOutcome AccountGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupInfo.AccountGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = string(value["AccountGroupId"].GetString());
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroupInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
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


string AccountGroupInfo::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void AccountGroupInfo::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool AccountGroupInfo::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string AccountGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void AccountGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AccountGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AccountGroupInfo::GetDescription() const
{
    return m_description;
}

void AccountGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccountGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccountGroupInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void AccountGroupInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool AccountGroupInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

