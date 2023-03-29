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
using namespace std;

CreatePostpayPackageRequest::CreatePostpayPackageRequest() :
    m_envIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_envSourceHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_extensionIdHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_envAliasHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

string CreatePostpayPackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_freeQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_envSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envSource.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_envAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string CreatePostpayPackageRequest::GetExtensionId() const
{
    return m_extensionId;
}

void CreatePostpayPackageRequest::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool CreatePostpayPackageRequest::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string CreatePostpayPackageRequest::GetFlag() const
{
    return m_flag;
}

void CreatePostpayPackageRequest::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool CreatePostpayPackageRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string CreatePostpayPackageRequest::GetEnvAlias() const
{
    return m_envAlias;
}

void CreatePostpayPackageRequest::SetEnvAlias(const string& _envAlias)
{
    m_envAlias = _envAlias;
    m_envAliasHasBeenSet = true;
}

bool CreatePostpayPackageRequest::EnvAliasHasBeenSet() const
{
    return m_envAliasHasBeenSet;
}

string CreatePostpayPackageRequest::GetExtra() const
{
    return m_extra;
}

void CreatePostpayPackageRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool CreatePostpayPackageRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


