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

#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyNotificationConfigurationRequest::ModifyNotificationConfigurationRequest() :
    m_autoScalingNotificationIdHasBeenSet(false),
    m_notificationTypesHasBeenSet(false),
    m_notificationUserGroupIdsHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

string ModifyNotificationConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingNotificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingNotificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingNotificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notificationTypes.begin(); itr != m_notificationTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notificationUserGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notificationUserGroupIds.begin(); itr != m_notificationUserGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNotificationConfigurationRequest::GetAutoScalingNotificationId() const
{
    return m_autoScalingNotificationId;
}

void ModifyNotificationConfigurationRequest::SetAutoScalingNotificationId(const string& _autoScalingNotificationId)
{
    m_autoScalingNotificationId = _autoScalingNotificationId;
    m_autoScalingNotificationIdHasBeenSet = true;
}

bool ModifyNotificationConfigurationRequest::AutoScalingNotificationIdHasBeenSet() const
{
    return m_autoScalingNotificationIdHasBeenSet;
}

vector<string> ModifyNotificationConfigurationRequest::GetNotificationTypes() const
{
    return m_notificationTypes;
}

void ModifyNotificationConfigurationRequest::SetNotificationTypes(const vector<string>& _notificationTypes)
{
    m_notificationTypes = _notificationTypes;
    m_notificationTypesHasBeenSet = true;
}

bool ModifyNotificationConfigurationRequest::NotificationTypesHasBeenSet() const
{
    return m_notificationTypesHasBeenSet;
}

vector<string> ModifyNotificationConfigurationRequest::GetNotificationUserGroupIds() const
{
    return m_notificationUserGroupIds;
}

void ModifyNotificationConfigurationRequest::SetNotificationUserGroupIds(const vector<string>& _notificationUserGroupIds)
{
    m_notificationUserGroupIds = _notificationUserGroupIds;
    m_notificationUserGroupIdsHasBeenSet = true;
}

bool ModifyNotificationConfigurationRequest::NotificationUserGroupIdsHasBeenSet() const
{
    return m_notificationUserGroupIdsHasBeenSet;
}

string ModifyNotificationConfigurationRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyNotificationConfigurationRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyNotificationConfigurationRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string ModifyNotificationConfigurationRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyNotificationConfigurationRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyNotificationConfigurationRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}


