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

#include <tencentcloud/ckafka/v20190819/model/CreateMetaDataAndOffsetSyncDatahubTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateMetaDataAndOffsetSyncDatahubTaskRequest::CreateMetaDataAndOffsetSyncDatahubTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_sourceResourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_offsetTypeHasBeenSet(false),
    m_topicRegularExpressionHasBeenSet(false),
    m_topicListHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_offsetType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRegularExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegularExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicRegularExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_topicListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicList.begin(); itr != m_topicList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_separatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Separator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_separator.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetSourceResourceId() const
{
    return m_sourceResourceId;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetSourceResourceId(const string& _sourceResourceId)
{
    m_sourceResourceId = _sourceResourceId;
    m_sourceResourceIdHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::SourceResourceIdHasBeenSet() const
{
    return m_sourceResourceIdHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetOffsetType() const
{
    return m_offsetType;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetOffsetType(const string& _offsetType)
{
    m_offsetType = _offsetType;
    m_offsetTypeHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::OffsetTypeHasBeenSet() const
{
    return m_offsetTypeHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetTopicRegularExpression() const
{
    return m_topicRegularExpression;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetTopicRegularExpression(const string& _topicRegularExpression)
{
    m_topicRegularExpression = _topicRegularExpression;
    m_topicRegularExpressionHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::TopicRegularExpressionHasBeenSet() const
{
    return m_topicRegularExpressionHasBeenSet;
}

vector<string> CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetTopicList() const
{
    return m_topicList;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetTopicList(const vector<string>& _topicList)
{
    m_topicList = _topicList;
    m_topicListHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::TopicListHasBeenSet() const
{
    return m_topicListHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetPrefix() const
{
    return m_prefix;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetSeparator() const
{
    return m_separator;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetSeparator(const string& _separator)
{
    m_separator = _separator;
    m_separatorHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::SeparatorHasBeenSet() const
{
    return m_separatorHasBeenSet;
}

vector<Tag> CreateMetaDataAndOffsetSyncDatahubTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateMetaDataAndOffsetSyncDatahubTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMetaDataAndOffsetSyncDatahubTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


