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

#include <tencentcloud/cpdp/v20190820/model/ApplyOpenBankSubMerchantSignOnlineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyOpenBankSubMerchantSignOnlineRequest::ApplyOpenBankSubMerchantSignOnlineRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_outSubMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

string ApplyOpenBankSubMerchantSignOnlineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyOpenBankSubMerchantSignOnlineRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void ApplyOpenBankSubMerchantSignOnlineRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineRequest::GetChannelName() const
{
    return m_channelName;
}

void ApplyOpenBankSubMerchantSignOnlineRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineRequest::GetOutSubMerchantId() const
{
    return m_outSubMerchantId;
}

void ApplyOpenBankSubMerchantSignOnlineRequest::SetOutSubMerchantId(const string& _outSubMerchantId)
{
    m_outSubMerchantId = _outSubMerchantId;
    m_outSubMerchantIdHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineRequest::OutSubMerchantIdHasBeenSet() const
{
    return m_outSubMerchantIdHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void ApplyOpenBankSubMerchantSignOnlineRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void ApplyOpenBankSubMerchantSignOnlineRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}


