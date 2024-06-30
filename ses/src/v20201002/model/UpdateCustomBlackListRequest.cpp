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

#include <tencentcloud/ses/v20201002/model/UpdateCustomBlackListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

UpdateCustomBlackListRequest::UpdateCustomBlackListRequest() :
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_expireDateHasBeenSet(false)
{
}

string UpdateCustomBlackListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateCustomBlackListRequest::GetId() const
{
    return m_id;
}

void UpdateCustomBlackListRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateCustomBlackListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateCustomBlackListRequest::GetEmail() const
{
    return m_email;
}

void UpdateCustomBlackListRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UpdateCustomBlackListRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UpdateCustomBlackListRequest::GetExpireDate() const
{
    return m_expireDate;
}

void UpdateCustomBlackListRequest::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool UpdateCustomBlackListRequest::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}


