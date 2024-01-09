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

#include <tencentcloud/dts/v20211206/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CreateConsumerGroupRequest::CreateConsumerGroupRequest() :
    m_subscribeIdHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateConsumerGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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


string CreateConsumerGroupRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void CreateConsumerGroupRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool CreateConsumerGroupRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string CreateConsumerGroupRequest::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void CreateConsumerGroupRequest::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool CreateConsumerGroupRequest::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

string CreateConsumerGroupRequest::GetAccountName() const
{
    return m_accountName;
}

void CreateConsumerGroupRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool CreateConsumerGroupRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateConsumerGroupRequest::GetPassword() const
{
    return m_password;
}

void CreateConsumerGroupRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateConsumerGroupRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateConsumerGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateConsumerGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateConsumerGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


