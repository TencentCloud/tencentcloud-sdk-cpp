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

#include <tencentcloud/ckafka/v20190819/model/DatahubTopicDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DatahubTopicDTO::DatahubTopicDTO() :
    m_nameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DatahubTopicDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("RetentionMs") && !value["RetentionMs"].IsNull())
    {
        if (!value["RetentionMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.RetentionMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionMs = value["RetentionMs"].GetUint64();
        m_retentionMsHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTopicDTO.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatahubTopicDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string DatahubTopicDTO::GetName() const
{
    return m_name;
}

void DatahubTopicDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DatahubTopicDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DatahubTopicDTO::GetTopicName() const
{
    return m_topicName;
}

void DatahubTopicDTO::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DatahubTopicDTO::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DatahubTopicDTO::GetTopicId() const
{
    return m_topicId;
}

void DatahubTopicDTO::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DatahubTopicDTO::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t DatahubTopicDTO::GetPartitionNum() const
{
    return m_partitionNum;
}

void DatahubTopicDTO::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool DatahubTopicDTO::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

uint64_t DatahubTopicDTO::GetRetentionMs() const
{
    return m_retentionMs;
}

void DatahubTopicDTO::SetRetentionMs(const uint64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool DatahubTopicDTO::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

string DatahubTopicDTO::GetNote() const
{
    return m_note;
}

void DatahubTopicDTO::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool DatahubTopicDTO::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

uint64_t DatahubTopicDTO::GetStatus() const
{
    return m_status;
}

void DatahubTopicDTO::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DatahubTopicDTO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

