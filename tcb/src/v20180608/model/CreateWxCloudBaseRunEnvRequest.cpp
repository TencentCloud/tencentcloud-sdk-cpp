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

#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateWxCloudBaseRunEnvRequest::CreateWxCloudBaseRunEnvRequest() :
    m_wxAppIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subNetIdsHasBeenSet(false),
    m_isOpenCloudInvokeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string CreateWxCloudBaseRunEnvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_freeQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subNetIds.begin(); itr != m_subNetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isOpenCloudInvokeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenCloudInvoke";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOpenCloudInvoke, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWxCloudBaseRunEnvRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void CreateWxCloudBaseRunEnvRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetAlias() const
{
    return m_alias;
}

void CreateWxCloudBaseRunEnvRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetFreeQuota() const
{
    return m_freeQuota;
}

void CreateWxCloudBaseRunEnvRequest::SetFreeQuota(const string& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetFlag() const
{
    return m_flag;
}

void CreateWxCloudBaseRunEnvRequest::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateWxCloudBaseRunEnvRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateWxCloudBaseRunEnvRequest::GetSubNetIds() const
{
    return m_subNetIds;
}

void CreateWxCloudBaseRunEnvRequest::SetSubNetIds(const vector<string>& _subNetIds)
{
    m_subNetIds = _subNetIds;
    m_subNetIdsHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::SubNetIdsHasBeenSet() const
{
    return m_subNetIdsHasBeenSet;
}

bool CreateWxCloudBaseRunEnvRequest::GetIsOpenCloudInvoke() const
{
    return m_isOpenCloudInvoke;
}

void CreateWxCloudBaseRunEnvRequest::SetIsOpenCloudInvoke(const bool& _isOpenCloudInvoke)
{
    m_isOpenCloudInvoke = _isOpenCloudInvoke;
    m_isOpenCloudInvokeHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::IsOpenCloudInvokeHasBeenSet() const
{
    return m_isOpenCloudInvokeHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetSource() const
{
    return m_source;
}

void CreateWxCloudBaseRunEnvRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateWxCloudBaseRunEnvRequest::GetChannel() const
{
    return m_channel;
}

void CreateWxCloudBaseRunEnvRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateWxCloudBaseRunEnvRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


