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

#include <tencentcloud/ciam/v20220331/model/ListUserByPropertyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

ListUserByPropertyRequest::ListUserByPropertyRequest() :
    m_userStoreIdHasBeenSet(false),
    m_propertyCodeHasBeenSet(false),
    m_propertyValueHasBeenSet(false),
    m_originalHasBeenSet(false)
{
}

string ListUserByPropertyRequest::ToJsonString() const
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

    if (m_propertyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_propertyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_propertyValue.c_str(), allocator).Move(), allocator);
    }

    if (m_originalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Original";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_original, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUserByPropertyRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void ListUserByPropertyRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool ListUserByPropertyRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string ListUserByPropertyRequest::GetPropertyCode() const
{
    return m_propertyCode;
}

void ListUserByPropertyRequest::SetPropertyCode(const string& _propertyCode)
{
    m_propertyCode = _propertyCode;
    m_propertyCodeHasBeenSet = true;
}

bool ListUserByPropertyRequest::PropertyCodeHasBeenSet() const
{
    return m_propertyCodeHasBeenSet;
}

string ListUserByPropertyRequest::GetPropertyValue() const
{
    return m_propertyValue;
}

void ListUserByPropertyRequest::SetPropertyValue(const string& _propertyValue)
{
    m_propertyValue = _propertyValue;
    m_propertyValueHasBeenSet = true;
}

bool ListUserByPropertyRequest::PropertyValueHasBeenSet() const
{
    return m_propertyValueHasBeenSet;
}

bool ListUserByPropertyRequest::GetOriginal() const
{
    return m_original;
}

void ListUserByPropertyRequest::SetOriginal(const bool& _original)
{
    m_original = _original;
    m_originalHasBeenSet = true;
}

bool ListUserByPropertyRequest::OriginalHasBeenSet() const
{
    return m_originalHasBeenSet;
}


