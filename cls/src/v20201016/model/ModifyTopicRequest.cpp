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

#include <tencentcloud/cls/v20201016/model/ModifyTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyTopicRequest::ModifyTopicRequest() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoSplitHasBeenSet(false),
    m_maxSplitPartitionsHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string ModifyTopicRequest::ToJsonString() const
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

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_autoSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSplit, allocator);
    }

    if (m_maxSplitPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSplitPartitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSplitPartitions, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTopicRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyTopicRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyTopicRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<Tag> ModifyTopicRequest::GetTags() const
{
    return m_tags;
}

void ModifyTopicRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyTopicRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ModifyTopicRequest::GetStatus() const
{
    return m_status;
}

void ModifyTopicRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyTopicRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ModifyTopicRequest::GetAutoSplit() const
{
    return m_autoSplit;
}

void ModifyTopicRequest::SetAutoSplit(const bool& _autoSplit)
{
    m_autoSplit = _autoSplit;
    m_autoSplitHasBeenSet = true;
}

bool ModifyTopicRequest::AutoSplitHasBeenSet() const
{
    return m_autoSplitHasBeenSet;
}

int64_t ModifyTopicRequest::GetMaxSplitPartitions() const
{
    return m_maxSplitPartitions;
}

void ModifyTopicRequest::SetMaxSplitPartitions(const int64_t& _maxSplitPartitions)
{
    m_maxSplitPartitions = _maxSplitPartitions;
    m_maxSplitPartitionsHasBeenSet = true;
}

bool ModifyTopicRequest::MaxSplitPartitionsHasBeenSet() const
{
    return m_maxSplitPartitionsHasBeenSet;
}

int64_t ModifyTopicRequest::GetPeriod() const
{
    return m_period;
}

void ModifyTopicRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyTopicRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


