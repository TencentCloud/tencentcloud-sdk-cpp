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

#include <tencentcloud/tcb/v20180608/model/CreatePostpayPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CreatePostpayPackageRequest::CreatePostpayPackageRequest() :
    m_envIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_envSourceHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string CreatePostpayPackageRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_freeQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_envSourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envSource.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_channel.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePostpayPackageRequest::GetEnvId() const
{
    return m_envId;
}

void CreatePostpayPackageRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreatePostpayPackageRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreatePostpayPackageRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void CreatePostpayPackageRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool CreatePostpayPackageRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string CreatePostpayPackageRequest::GetSource() const
{
    return m_source;
}

void CreatePostpayPackageRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreatePostpayPackageRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreatePostpayPackageRequest::GetFreeQuota() const
{
    return m_freeQuota;
}

void CreatePostpayPackageRequest::SetFreeQuota(const string& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool CreatePostpayPackageRequest::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

string CreatePostpayPackageRequest::GetAlias() const
{
    return m_alias;
}

void CreatePostpayPackageRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreatePostpayPackageRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreatePostpayPackageRequest::GetEnvSource() const
{
    return m_envSource;
}

void CreatePostpayPackageRequest::SetEnvSource(const string& _envSource)
{
    m_envSource = _envSource;
    m_envSourceHasBeenSet = true;
}

bool CreatePostpayPackageRequest::EnvSourceHasBeenSet() const
{
    return m_envSourceHasBeenSet;
}

string CreatePostpayPackageRequest::GetChannel() const
{
    return m_channel;
}

void CreatePostpayPackageRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreatePostpayPackageRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


