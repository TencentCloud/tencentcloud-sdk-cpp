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

#include <tencentcloud/as/v20180419/model/DeleteNotificationConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest() :
    m_autoScalingNotificationIdHasBeenSet(false)
{
}

string DeleteNotificationConfigurationRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNotificationConfigurationRequest::GetAutoScalingNotificationId() const
{
    return m_autoScalingNotificationId;
}

void DeleteNotificationConfigurationRequest::SetAutoScalingNotificationId(const string& _autoScalingNotificationId)
{
    m_autoScalingNotificationId = _autoScalingNotificationId;
    m_autoScalingNotificationIdHasBeenSet = true;
}

bool DeleteNotificationConfigurationRequest::AutoScalingNotificationIdHasBeenSet() const
{
    return m_autoScalingNotificationIdHasBeenSet;
}


