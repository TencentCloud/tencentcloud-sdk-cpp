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
using namespace rapidjson;
using namespace std;

AutoScalingNotification::AutoScalingNotification() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_notificationUserGroupIdsHasBeenSet(false),
    m_notificationTypesHasBeenSet(false),
    m_autoScalingNotificationIdHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingNotification::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingNotification.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("NotificationUserGroupIds") && !value["NotificationUserGroupIds"].IsNull())
    {
        if (!value["NotificationUserGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingNotification.NotificationUserGroupIds` is not array type"));

        const Value &tmpValue = value["NotificationUserGroupIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notificationUserGroupIds.push_back((*itr).GetString());
        }
        m_notificationUserGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("NotificationTypes") && !value["NotificationTypes"].IsNull())
    {
        if (!value["NotificationTypes"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingNotification.NotificationTypes` is not array type"));

        const Value &tmpValue = value["NotificationTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notificationTypes.push_back((*itr).GetString());
        }
        m_notificationTypesHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingNotificationId") && !value["AutoScalingNotificationId"].IsNull())
    {
        if (!value["AutoScalingNotificationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingNotification.AutoScalingNotificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingNotificationId = string(value["AutoScalingNotificationId"].GetString());
        m_autoScalingNotificationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingNotification::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationUserGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_notificationUserGroupIds.begin(); itr != m_notificationUserGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notificationTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_notificationTypes.begin(); itr != m_notificationTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoScalingNotificationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingNotificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingNotificationId.c_str(), allocator).Move(), allocator);
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

