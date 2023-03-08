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

#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

CreateCloudRunEnvRequest::CreateCloudRunEnvRequest() :
    m_packageTypeHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subNetIdsHasBeenSet(false),
    m_reqKeyHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_envIdHasBeenSet(false)
{
}

string CreateCloudRunEnvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
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

    if (m_reqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reqKey.c_str(), allocator).Move(), allocator);
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

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudRunEnvRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateCloudRunEnvRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string CreateCloudRunEnvRequest::GetAlias() const
{
    return m_alias;
}

void CreateCloudRunEnvRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateCloudRunEnvRequest::GetFreeQuota() const
{
    return m_freeQuota;
}

void CreateCloudRunEnvRequest::SetFreeQuota(const string& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

string CreateCloudRunEnvRequest::GetFlag() const
{
    return m_flag;
}

void CreateCloudRunEnvRequest::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string CreateCloudRunEnvRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateCloudRunEnvRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateCloudRunEnvRequest::GetSubNetIds() const
{
    return m_subNetIds;
}

void CreateCloudRunEnvRequest::SetSubNetIds(const vector<string>& _subNetIds)
{
    m_subNetIds = _subNetIds;
    m_subNetIdsHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::SubNetIdsHasBeenSet() const
{
    return m_subNetIdsHasBeenSet;
}

string CreateCloudRunEnvRequest::GetReqKey() const
{
    return m_reqKey;
}

void CreateCloudRunEnvRequest::SetReqKey(const string& _reqKey)
{
    m_reqKey = _reqKey;
    m_reqKeyHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::ReqKeyHasBeenSet() const
{
    return m_reqKeyHasBeenSet;
}

string CreateCloudRunEnvRequest::GetSource() const
{
    return m_source;
}

void CreateCloudRunEnvRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateCloudRunEnvRequest::GetChannel() const
{
    return m_channel;
}

void CreateCloudRunEnvRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string CreateCloudRunEnvRequest::GetEnvId() const
{
    return m_envId;
}

void CreateCloudRunEnvRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateCloudRunEnvRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}


