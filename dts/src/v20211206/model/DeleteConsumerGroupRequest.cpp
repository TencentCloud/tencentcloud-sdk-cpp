/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dts/v20211206/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DeleteConsumerGroupRequest::DeleteConsumerGroupRequest() :
    m_subscribeIdHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_accountNameHasBeenSet(false)
{
}

string DeleteConsumerGroupRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteConsumerGroupRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void DeleteConsumerGroupRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool DeleteConsumerGroupRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string DeleteConsumerGroupRequest::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void DeleteConsumerGroupRequest::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool DeleteConsumerGroupRequest::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

string DeleteConsumerGroupRequest::GetAccountName() const
{
    return m_accountName;
}

void DeleteConsumerGroupRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DeleteConsumerGroupRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}


