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

#include <tencentcloud/iotvideo/v20191126/model/MsgQueueData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

MsgQueueData::MsgQueueData() :
    m_msgQueueTypeHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_msgRegionHasBeenSet(false)
{
}

CoreInternalOutcome MsgQueueData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgQueueType") && !value["MsgQueueType"].IsNull())
    {
        if (!value["MsgQueueType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgQueueData.MsgQueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgQueueType = value["MsgQueueType"].GetUint64();
        m_msgQueueTypeHasBeenSet = true;
    }

    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgQueueData.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgQueueData.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgQueueData.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("MsgRegion") && !value["MsgRegion"].IsNull())
    {
        if (!value["MsgRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgQueueData.MsgRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRegion = string(value["MsgRegion"].GetString());
        m_msgRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgQueueData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgQueueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgQueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgQueueType, allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRegion.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MsgQueueData::GetMsgQueueType() const
{
    return m_msgQueueType;
}

void MsgQueueData::SetMsgQueueType(const uint64_t& _msgQueueType)
{
    m_msgQueueType = _msgQueueType;
    m_msgQueueTypeHasBeenSet = true;
}

bool MsgQueueData::MsgQueueTypeHasBeenSet() const
{
    return m_msgQueueTypeHasBeenSet;
}

string MsgQueueData::GetMsgType() const
{
    return m_msgType;
}

void MsgQueueData::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool MsgQueueData::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string MsgQueueData::GetTopic() const
{
    return m_topic;
}

void MsgQueueData::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool MsgQueueData::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string MsgQueueData::GetInstance() const
{
    return m_instance;
}

void MsgQueueData::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool MsgQueueData::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string MsgQueueData::GetMsgRegion() const
{
    return m_msgRegion;
}

void MsgQueueData::SetMsgRegion(const string& _msgRegion)
{
    m_msgRegion = _msgRegion;
    m_msgRegionHasBeenSet = true;
}

bool MsgQueueData::MsgRegionHasBeenSet() const
{
    return m_msgRegionHasBeenSet;
}

