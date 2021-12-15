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

#include <tencentcloud/eiam/v20210420/model/ModifyAccountGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ModifyAccountGroupRequest::ModifyAccountGroupRequest() :
    m_accountGroupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyAccountGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccountGroupRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void ModifyAccountGroupRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool ModifyAccountGroupRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string ModifyAccountGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifyAccountGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifyAccountGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ModifyAccountGroupRequest::GetDescription() const
{
    return m_description;
}

void ModifyAccountGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAccountGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


