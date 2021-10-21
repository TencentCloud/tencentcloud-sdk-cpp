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

#include <tencentcloud/as/v20180419/model/AutoScalingNotification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

AutoScalingNotification::AutoScalingNotification() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_notificationUserGroupIdsHasBeenSet(false),
    m_notificationTypesHasBeenSet(false),
    m_autoScalingNotificationIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingNotification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("NotificationUserGroupIds") && !value["NotificationUserGroupIds"].IsNull())
    {
        if (!value["NotificationUserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.NotificationUserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["NotificationUserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notificationUserGroupIds.push_back((*itr).GetString());
        }
        m_notificationUserGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("NotificationTypes") && !value["NotificationTypes"].IsNull())
    {
        if (!value["NotificationTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.NotificationTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["NotificationTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notificationTypes.push_back((*itr).GetString());
        }
        m_notificationTypesHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingNotificationId") && !value["AutoScalingNotificationId"].IsNull())
    {
        if (!value["AutoScalingNotificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.AutoScalingNotificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingNotificationId = string(value["AutoScalingNotificationId"].GetString());
        m_autoScalingNotificationIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingNotification.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingNotification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationUserGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notificationUserGroupIds.begin(); itr != m_notificationUserGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notificationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notificationTypes.begin(); itr != m_notificationTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoScalingNotificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingNotificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingNotificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

}


string AutoScalingNotification::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void AutoScalingNotification::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool AutoScalingNotification::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

vector<string> AutoScalingNotification::GetNotificationUserGroupIds() const
{
    return m_notificationUserGroupIds;
}

void AutoScalingNotification::SetNotificationUserGroupIds(const vector<string>& _notificationUserGroupIds)
{
    m_notificationUserGroupIds = _notificationUserGroupIds;
    m_notificationUserGroupIdsHasBeenSet = true;
}

bool AutoScalingNotification::NotificationUserGroupIdsHasBeenSet() const
{
    return m_notificationUserGroupIdsHasBeenSet;
}

vector<string> AutoScalingNotification::GetNotificationTypes() const
{
    return m_notificationTypes;
}

void AutoScalingNotification::SetNotificationTypes(const vector<string>& _notificationTypes)
{
    m_notificationTypes = _notificationTypes;
    m_notificationTypesHasBeenSet = true;
}

bool AutoScalingNotification::NotificationTypesHasBeenSet() const
{
    return m_notificationTypesHasBeenSet;
}

string AutoScalingNotification::GetAutoScalingNotificationId() const
{
    return m_autoScalingNotificationId;
}

void AutoScalingNotification::SetAutoScalingNotificationId(const string& _autoScalingNotificationId)
{
    m_autoScalingNotificationId = _autoScalingNotificationId;
    m_autoScalingNotificationIdHasBeenSet = true;
}

bool AutoScalingNotification::AutoScalingNotificationIdHasBeenSet() const
{
    return m_autoScalingNotificationIdHasBeenSet;
}

string AutoScalingNotification::GetTargetType() const
{
    return m_targetType;
}

void AutoScalingNotification::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool AutoScalingNotification::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string AutoScalingNotification::GetQueueName() const
{
    return m_queueName;
}

void AutoScalingNotification::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool AutoScalingNotification::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string AutoScalingNotification::GetTopicName() const
{
    return m_topicName;
}

void AutoScalingNotification::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool AutoScalingNotification::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

