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

#include <tencentcloud/trocket/v20230308/model/TopicItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

TopicItem::TopicItem() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_queueNumHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome TopicItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(value["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueNum") && !value["QueueNum"].IsNull())
    {
        if (!value["QueueNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.QueueNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueNum = value["QueueNum"].GetInt64();
        m_queueNumHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueNum, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string TopicItem::GetInstanceId() const
{
    return m_instanceId;
}

void TopicItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TopicItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TopicItem::GetTopic() const
{
    return m_topic;
}

void TopicItem::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool TopicItem::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string TopicItem::GetTopicType() const
{
    return m_topicType;
}

void TopicItem::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool TopicItem::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

int64_t TopicItem::GetQueueNum() const
{
    return m_queueNum;
}

void TopicItem::SetQueueNum(const int64_t& _queueNum)
{
    m_queueNum = _queueNum;
    m_queueNumHasBeenSet = true;
}

bool TopicItem::QueueNumHasBeenSet() const
{
    return m_queueNumHasBeenSet;
}

string TopicItem::GetRemark() const
{
    return m_remark;
}

void TopicItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TopicItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

