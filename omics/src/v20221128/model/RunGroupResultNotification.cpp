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

#include <tencentcloud/omics/v20221128/model/RunGroupResultNotification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunGroupResultNotification::RunGroupResultNotification() :
    m_notificationTypeHasBeenSet(false)
{
}

CoreInternalOutcome RunGroupResultNotification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotificationType") && !value["NotificationType"].IsNull())
    {
        if (!value["NotificationType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroupResultNotification.NotificationType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notificationType.Deserialize(value["NotificationType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunGroupResultNotification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notificationType.ToJsonObject(value[key.c_str()], allocator);
    }

}


NotificationType RunGroupResultNotification::GetNotificationType() const
{
    return m_notificationType;
}

void RunGroupResultNotification::SetNotificationType(const NotificationType& _notificationType)
{
    m_notificationType = _notificationType;
    m_notificationTypeHasBeenSet = true;
}

bool RunGroupResultNotification::NotificationTypeHasBeenSet() const
{
    return m_notificationTypeHasBeenSet;
}

