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

#include <tencentcloud/cls/v20201016/model/ModifySplunkDeliverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifySplunkDeliverRequest::ModifySplunkDeliverRequest() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_netInfoHasBeenSet(false),
    m_metadataInfoHasBeenSet(false),
    m_hasServiceLogHasBeenSet(false),
    m_indexAckHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_dSLFilterHasBeenSet(false)
{
}

string ModifySplunkDeliverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
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

    if (m_dSLFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DSLFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dSLFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySplunkDeliverRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifySplunkDeliverRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifySplunkDeliverRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifySplunkDeliverRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifySplunkDeliverRequest::GetName() const
{
    return m_name;
}

void ModifySplunkDeliverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifySplunkDeliverRequest::GetEnable() const
{
    return m_enable;
}

void ModifySplunkDeliverRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

NetInfo ModifySplunkDeliverRequest::GetNetInfo() const
{
    return m_netInfo;
}

void ModifySplunkDeliverRequest::SetNetInfo(const NetInfo& _netInfo)
{
    m_netInfo = _netInfo;
    m_netInfoHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::NetInfoHasBeenSet() const
{
    return m_netInfoHasBeenSet;
}

MetadataInfo ModifySplunkDeliverRequest::GetMetadataInfo() const
{
    return m_metadataInfo;
}

void ModifySplunkDeliverRequest::SetMetadataInfo(const MetadataInfo& _metadataInfo)
{
    m_metadataInfo = _metadataInfo;
    m_metadataInfoHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::MetadataInfoHasBeenSet() const
{
    return m_metadataInfoHasBeenSet;
}

int64_t ModifySplunkDeliverRequest::GetHasServiceLog() const
{
    return m_hasServiceLog;
}

void ModifySplunkDeliverRequest::SetHasServiceLog(const int64_t& _hasServiceLog)
{
    m_hasServiceLog = _hasServiceLog;
    m_hasServiceLogHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::HasServiceLogHasBeenSet() const
{
    return m_hasServiceLogHasBeenSet;
}

int64_t ModifySplunkDeliverRequest::GetIndexAck() const
{
    return m_indexAck;
}

void ModifySplunkDeliverRequest::SetIndexAck(const int64_t& _indexAck)
{
    m_indexAck = _indexAck;
    m_indexAckHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::IndexAckHasBeenSet() const
{
    return m_indexAckHasBeenSet;
}

string ModifySplunkDeliverRequest::GetSource() const
{
    return m_source;
}

void ModifySplunkDeliverRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ModifySplunkDeliverRequest::GetSourceType() const
{
    return m_sourceType;
}

void ModifySplunkDeliverRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ModifySplunkDeliverRequest::GetIndex() const
{
    return m_index;
}

void ModifySplunkDeliverRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ModifySplunkDeliverRequest::GetChannel() const
{
    return m_channel;
}

void ModifySplunkDeliverRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string ModifySplunkDeliverRequest::GetDSLFilter() const
{
    return m_dSLFilter;
}

void ModifySplunkDeliverRequest::SetDSLFilter(const string& _dSLFilter)
{
    m_dSLFilter = _dSLFilter;
    m_dSLFilterHasBeenSet = true;
}

bool ModifySplunkDeliverRequest::DSLFilterHasBeenSet() const
{
    return m_dSLFilterHasBeenSet;
}


