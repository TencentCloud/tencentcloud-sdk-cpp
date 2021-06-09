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

#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CreateClsLogTopicRequest::CreateClsLogTopicRequest() :
    m_topicNameHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_domainAreaConfigsHasBeenSet(false)
{
}

string CreateClsLogTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_domainAreaConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainAreaConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainAreaConfigs.begin(); itr != m_domainAreaConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClsLogTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateClsLogTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateClsLogTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateClsLogTopicRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateClsLogTopicRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateClsLogTopicRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateClsLogTopicRequest::GetChannel() const
{
    return m_channel;
}

void CreateClsLogTopicRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateClsLogTopicRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

vector<DomainAreaConfig> CreateClsLogTopicRequest::GetDomainAreaConfigs() const
{
    return m_domainAreaConfigs;
}

void CreateClsLogTopicRequest::SetDomainAreaConfigs(const vector<DomainAreaConfig>& _domainAreaConfigs)
{
    m_domainAreaConfigs = _domainAreaConfigs;
    m_domainAreaConfigsHasBeenSet = true;
}

bool CreateClsLogTopicRequest::DomainAreaConfigsHasBeenSet() const
{
    return m_domainAreaConfigsHasBeenSet;
}


