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
    m_remarkHasBeenSet(false),
    m_clusterIdV4HasBeenSet(false),
    m_namespaceV4HasBeenSet(false),
    m_topicV4HasBeenSet(false),
    m_fullNamespaceV4HasBeenSet(false),
    m_msgTTLHasBeenSet(false)
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

    if (value.HasMember("ClusterIdV4") && !value["ClusterIdV4"].IsNull())
    {
        if (!value["ClusterIdV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.ClusterIdV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIdV4 = string(value["ClusterIdV4"].GetString());
        m_clusterIdV4HasBeenSet = true;
    }

    if (value.HasMember("NamespaceV4") && !value["NamespaceV4"].IsNull())
    {
        if (!value["NamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.NamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceV4 = string(value["NamespaceV4"].GetString());
        m_namespaceV4HasBeenSet = true;
    }

    if (value.HasMember("TopicV4") && !value["TopicV4"].IsNull())
    {
        if (!value["TopicV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.TopicV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicV4 = string(value["TopicV4"].GetString());
        m_topicV4HasBeenSet = true;
    }

    if (value.HasMember("FullNamespaceV4") && !value["FullNamespaceV4"].IsNull())
    {
        if (!value["FullNamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.FullNamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullNamespaceV4 = string(value["FullNamespaceV4"].GetString());
        m_fullNamespaceV4HasBeenSet = true;
    }

    if (value.HasMember("MsgTTL") && !value["MsgTTL"].IsNull())
    {
        if (!value["MsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicItem.MsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = value["MsgTTL"].GetInt64();
        m_msgTTLHasBeenSet = true;
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

    if (m_clusterIdV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIdV4.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_topicV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicV4.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNamespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullNamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullNamespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
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

string TopicItem::GetClusterIdV4() const
{
    return m_clusterIdV4;
}

void TopicItem::SetClusterIdV4(const string& _clusterIdV4)
{
    m_clusterIdV4 = _clusterIdV4;
    m_clusterIdV4HasBeenSet = true;
}

bool TopicItem::ClusterIdV4HasBeenSet() const
{
    return m_clusterIdV4HasBeenSet;
}

string TopicItem::GetNamespaceV4() const
{
    return m_namespaceV4;
}

void TopicItem::SetNamespaceV4(const string& _namespaceV4)
{
    m_namespaceV4 = _namespaceV4;
    m_namespaceV4HasBeenSet = true;
}

bool TopicItem::NamespaceV4HasBeenSet() const
{
    return m_namespaceV4HasBeenSet;
}

string TopicItem::GetTopicV4() const
{
    return m_topicV4;
}

void TopicItem::SetTopicV4(const string& _topicV4)
{
    m_topicV4 = _topicV4;
    m_topicV4HasBeenSet = true;
}

bool TopicItem::TopicV4HasBeenSet() const
{
    return m_topicV4HasBeenSet;
}

string TopicItem::GetFullNamespaceV4() const
{
    return m_fullNamespaceV4;
}

void TopicItem::SetFullNamespaceV4(const string& _fullNamespaceV4)
{
    m_fullNamespaceV4 = _fullNamespaceV4;
    m_fullNamespaceV4HasBeenSet = true;
}

bool TopicItem::FullNamespaceV4HasBeenSet() const
{
    return m_fullNamespaceV4HasBeenSet;
}

int64_t TopicItem::GetMsgTTL() const
{
    return m_msgTTL;
}

void TopicItem::SetMsgTTL(const int64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool TopicItem::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

