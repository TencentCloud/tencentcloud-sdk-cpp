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

#include <tencentcloud/ciam/v20220331/model/DescribeUserByIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

DescribeUserByIdRequest::DescribeUserByIdRequest() :
    m_userStoreIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_originalHasBeenSet(false)
{
}

string DescribeUserByIdRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
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


string DescribeUserByIdRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void DescribeUserByIdRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool DescribeUserByIdRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string DescribeUserByIdRequest::GetUserId() const
{
    return m_userId;
}

void DescribeUserByIdRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeUserByIdRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

bool DescribeUserByIdRequest::GetOriginal() const
{
    return m_original;
}

void DescribeUserByIdRequest::SetOriginal(const bool& _original)
{
    m_original = _original;
    m_originalHasBeenSet = true;
}

bool DescribeUserByIdRequest::OriginalHasBeenSet() const
{
    return m_originalHasBeenSet;
}


