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

#include <tencentcloud/cls/v20201016/model/CreateSplunkDeliverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateSplunkDeliverRequest::CreateSplunkDeliverRequest() :
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_netInfoHasBeenSet(false),
    m_metadataInfoHasBeenSet(false),
    m_hasServiceLogHasBeenSet(false),
    m_indexAckHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string CreateSplunkDeliverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_netInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metadataInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadataInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hasServiceLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServiceLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServiceLog, allocator);
    }

    if (m_indexAckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexAck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_indexAck, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
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


string CreateSplunkDeliverRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateSplunkDeliverRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateSplunkDeliverRequest::GetName() const
{
    return m_name;
}

void CreateSplunkDeliverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

NetInfo CreateSplunkDeliverRequest::GetNetInfo() const
{
    return m_netInfo;
}

void CreateSplunkDeliverRequest::SetNetInfo(const NetInfo& _netInfo)
{
    m_netInfo = _netInfo;
    m_netInfoHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::NetInfoHasBeenSet() const
{
    return m_netInfoHasBeenSet;
}

MetadataInfo CreateSplunkDeliverRequest::GetMetadataInfo() const
{
    return m_metadataInfo;
}

void CreateSplunkDeliverRequest::SetMetadataInfo(const MetadataInfo& _metadataInfo)
{
    m_metadataInfo = _metadataInfo;
    m_metadataInfoHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::MetadataInfoHasBeenSet() const
{
    return m_metadataInfoHasBeenSet;
}

int64_t CreateSplunkDeliverRequest::GetHasServiceLog() const
{
    return m_hasServiceLog;
}

void CreateSplunkDeliverRequest::SetHasServiceLog(const int64_t& _hasServiceLog)
{
    m_hasServiceLog = _hasServiceLog;
    m_hasServiceLogHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::HasServiceLogHasBeenSet() const
{
    return m_hasServiceLogHasBeenSet;
}

int64_t CreateSplunkDeliverRequest::GetIndexAck() const
{
    return m_indexAck;
}

void CreateSplunkDeliverRequest::SetIndexAck(const int64_t& _indexAck)
{
    m_indexAck = _indexAck;
    m_indexAckHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::IndexAckHasBeenSet() const
{
    return m_indexAckHasBeenSet;
}

string CreateSplunkDeliverRequest::GetSource() const
{
    return m_source;
}

void CreateSplunkDeliverRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateSplunkDeliverRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateSplunkDeliverRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateSplunkDeliverRequest::GetIndex() const
{
    return m_index;
}

void CreateSplunkDeliverRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string CreateSplunkDeliverRequest::GetChannel() const
{
    return m_channel;
}

void CreateSplunkDeliverRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateSplunkDeliverRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


