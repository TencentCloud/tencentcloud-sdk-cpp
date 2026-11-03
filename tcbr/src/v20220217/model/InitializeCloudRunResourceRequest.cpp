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

#include <tencentcloud/tcbr/v20220217/model/InitializeCloudRunResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

InitializeCloudRunResourceRequest::InitializeCloudRunResourceRequest() :
    m_envTypeHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subNetIdsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string InitializeCloudRunResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
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


string InitializeCloudRunResourceRequest::GetEnvType() const
{
    return m_envType;
}

void InitializeCloudRunResourceRequest::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

string InitializeCloudRunResourceRequest::GetEnvId() const
{
    return m_envId;
}

void InitializeCloudRunResourceRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string InitializeCloudRunResourceRequest::GetVpcId() const
{
    return m_vpcId;
}

void InitializeCloudRunResourceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> InitializeCloudRunResourceRequest::GetSubNetIds() const
{
    return m_subNetIds;
}

void InitializeCloudRunResourceRequest::SetSubNetIds(const vector<string>& _subNetIds)
{
    m_subNetIds = _subNetIds;
    m_subNetIdsHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::SubNetIdsHasBeenSet() const
{
    return m_subNetIdsHasBeenSet;
}

string InitializeCloudRunResourceRequest::GetSource() const
{
    return m_source;
}

void InitializeCloudRunResourceRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string InitializeCloudRunResourceRequest::GetChannel() const
{
    return m_channel;
}

void InitializeCloudRunResourceRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool InitializeCloudRunResourceRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


