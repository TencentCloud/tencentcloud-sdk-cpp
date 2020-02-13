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

#include <tencentcloud/ckafka/v20190819/model/TopicAttributesResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

TopicAttributesResponse::TopicAttributesResponse() :
    m_topicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_configHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

CoreInternalOutcome TopicAttributesResponse::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("EnableWhiteList") && !value["EnableWhiteList"].IsNull())
    {
        if (!value["EnableWhiteList"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.EnableWhiteList` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableWhiteList = value["EnableWhiteList"].GetInt64();
        m_enableWhiteListHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteList") && !value["IpWhiteList"].IsNull())
    {
        if (!value["IpWhiteList"].IsArray())
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.IpWhiteList` is not array type"));

        const Value &tmpValue = value["IpWhiteList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhiteList.push_back((*itr).GetString());
        }
        m_ipWhiteListHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Error("response `TopicAttributesResponse.Partitions` is not array type"));

        const Value &tmpValue = value["Partitions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicPartitionDO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicAttributesResponse::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_noteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TopicAttributesResponse::GetTopicId() const
{
    return m_topicId;
}

void TopicAttributesResponse::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicAttributesResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t TopicAttributesResponse::GetCreateTime() const
{
    return m_createTime;
}

void TopicAttributesResponse::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicAttributesResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TopicAttributesResponse::GetNote() const
{
    return m_note;
}

void TopicAttributesResponse::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool TopicAttributesResponse::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t TopicAttributesResponse::GetPartitionNum() const
{
    return m_partitionNum;
}

void TopicAttributesResponse::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool TopicAttributesResponse::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t TopicAttributesResponse::GetEnableWhiteList() const
{
    return m_enableWhiteList;
}

void TopicAttributesResponse::SetEnableWhiteList(const int64_t& _enableWhiteList)
{
    m_enableWhiteList = _enableWhiteList;
    m_enableWhiteListHasBeenSet = true;
}

bool TopicAttributesResponse::EnableWhiteListHasBeenSet() const
{
    return m_enableWhiteListHasBeenSet;
}

vector<string> TopicAttributesResponse::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void TopicAttributesResponse::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool TopicAttributesResponse::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

Config TopicAttributesResponse::GetConfig() const
{
    return m_config;
}

void TopicAttributesResponse::SetConfig(const Config& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TopicAttributesResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<TopicPartitionDO> TopicAttributesResponse::GetPartitions() const
{
    return m_partitions;
}

void TopicAttributesResponse::SetPartitions(const vector<TopicPartitionDO>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TopicAttributesResponse::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

