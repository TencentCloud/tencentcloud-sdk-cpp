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

#include <tencentcloud/ciam/v20220331/model/LinkAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

LinkAccountRequest::LinkAccountRequest() :
    m_userStoreIdHasBeenSet(false),
    m_primaryUserIdHasBeenSet(false),
    m_secondaryUserIdHasBeenSet(false),
    m_userLinkedOnAttributeHasBeenSet(false)
{
}

string LinkAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secondaryUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_userLinkedOnAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLinkedOnAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userLinkedOnAttribute.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string LinkAccountRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void LinkAccountRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool LinkAccountRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string LinkAccountRequest::GetPrimaryUserId() const
{
    return m_primaryUserId;
}

void LinkAccountRequest::SetPrimaryUserId(const string& _primaryUserId)
{
    m_primaryUserId = _primaryUserId;
    m_primaryUserIdHasBeenSet = true;
}

bool LinkAccountRequest::PrimaryUserIdHasBeenSet() const
{
    return m_primaryUserIdHasBeenSet;
}

string LinkAccountRequest::GetSecondaryUserId() const
{
    return m_secondaryUserId;
}

void LinkAccountRequest::SetSecondaryUserId(const string& _secondaryUserId)
{
    m_secondaryUserId = _secondaryUserId;
    m_secondaryUserIdHasBeenSet = true;
}

bool LinkAccountRequest::SecondaryUserIdHasBeenSet() const
{
    return m_secondaryUserIdHasBeenSet;
}

string LinkAccountRequest::GetUserLinkedOnAttribute() const
{
    return m_userLinkedOnAttribute;
}

void LinkAccountRequest::SetUserLinkedOnAttribute(const string& _userLinkedOnAttribute)
{
    m_userLinkedOnAttribute = _userLinkedOnAttribute;
    m_userLinkedOnAttributeHasBeenSet = true;
}

bool LinkAccountRequest::UserLinkedOnAttributeHasBeenSet() const
{
    return m_userLinkedOnAttributeHasBeenSet;
}


