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

#include <tencentcloud/ses/v20201002/model/CreateCustomBlacklistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

CreateCustomBlacklistRequest::CreateCustomBlacklistRequest() :
    m_emailsHasBeenSet(false),
    m_expireDateHasBeenSet(false)
{
}

string CreateCustomBlacklistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_emailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Emails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_emails.begin(); itr != m_emails.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<string> CreateCustomBlacklistRequest::GetEmails() const
{
    return m_emails;
}

void CreateCustomBlacklistRequest::SetEmails(const vector<string>& _emails)
{
    m_emails = _emails;
    m_emailsHasBeenSet = true;
}

bool CreateCustomBlacklistRequest::EmailsHasBeenSet() const
{
    return m_emailsHasBeenSet;
}

string CreateCustomBlacklistRequest::GetExpireDate() const
{
    return m_expireDate;
}

void CreateCustomBlacklistRequest::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool CreateCustomBlacklistRequest::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}


