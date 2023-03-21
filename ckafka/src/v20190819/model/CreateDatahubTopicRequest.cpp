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

#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateDatahubTopicRequest::CreateDatahubTopicRequest() :
    m_nameHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDatahubTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
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


string CreateDatahubTopicRequest::GetName() const
{
    return m_name;
}

void CreateDatahubTopicRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDatahubTopicRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateDatahubTopicRequest::GetPartitionNum() const
{
    return m_partitionNum;
}

void CreateDatahubTopicRequest::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool CreateDatahubTopicRequest::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t CreateDatahubTopicRequest::GetRetentionMs() const
{
    return m_retentionMs;
}

void CreateDatahubTopicRequest::SetRetentionMs(const int64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool CreateDatahubTopicRequest::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

string CreateDatahubTopicRequest::GetNote() const
{
    return m_note;
}

void CreateDatahubTopicRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateDatahubTopicRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

vector<Tag> CreateDatahubTopicRequest::GetTags() const
{
    return m_tags;
}

void CreateDatahubTopicRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDatahubTopicRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


