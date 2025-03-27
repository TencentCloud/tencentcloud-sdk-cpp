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

#include <tencentcloud/vod/v20180717/model/ModifyEventConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyEventConfigRequest::ModifyEventConfigRequest() :
    m_subAppIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_notificationUrlHasBeenSet(false),
    m_uploadMediaCompleteEventSwitchHasBeenSet(false),
    m_deleteMediaCompleteEventSwitchHasBeenSet(false),
    m_persistenceCompleteEventSwitchHasBeenSet(false)
{
}

string ModifyEventConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notificationUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadMediaCompleteEventSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadMediaCompleteEventSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadMediaCompleteEventSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteMediaCompleteEventSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMediaCompleteEventSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deleteMediaCompleteEventSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_persistenceCompleteEventSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistenceCompleteEventSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_persistenceCompleteEventSwitch.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEventConfigRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyEventConfigRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyEventConfigRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyEventConfigRequest::GetMode() const
{
    return m_mode;
}

void ModifyEventConfigRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyEventConfigRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyEventConfigRequest::GetNotificationUrl() const
{
    return m_notificationUrl;
}

void ModifyEventConfigRequest::SetNotificationUrl(const string& _notificationUrl)
{
    m_notificationUrl = _notificationUrl;
    m_notificationUrlHasBeenSet = true;
}

bool ModifyEventConfigRequest::NotificationUrlHasBeenSet() const
{
    return m_notificationUrlHasBeenSet;
}

string ModifyEventConfigRequest::GetUploadMediaCompleteEventSwitch() const
{
    return m_uploadMediaCompleteEventSwitch;
}

void ModifyEventConfigRequest::SetUploadMediaCompleteEventSwitch(const string& _uploadMediaCompleteEventSwitch)
{
    m_uploadMediaCompleteEventSwitch = _uploadMediaCompleteEventSwitch;
    m_uploadMediaCompleteEventSwitchHasBeenSet = true;
}

bool ModifyEventConfigRequest::UploadMediaCompleteEventSwitchHasBeenSet() const
{
    return m_uploadMediaCompleteEventSwitchHasBeenSet;
}

string ModifyEventConfigRequest::GetDeleteMediaCompleteEventSwitch() const
{
    return m_deleteMediaCompleteEventSwitch;
}

void ModifyEventConfigRequest::SetDeleteMediaCompleteEventSwitch(const string& _deleteMediaCompleteEventSwitch)
{
    m_deleteMediaCompleteEventSwitch = _deleteMediaCompleteEventSwitch;
    m_deleteMediaCompleteEventSwitchHasBeenSet = true;
}

bool ModifyEventConfigRequest::DeleteMediaCompleteEventSwitchHasBeenSet() const
{
    return m_deleteMediaCompleteEventSwitchHasBeenSet;
}

string ModifyEventConfigRequest::GetPersistenceCompleteEventSwitch() const
{
    return m_persistenceCompleteEventSwitch;
}

void ModifyEventConfigRequest::SetPersistenceCompleteEventSwitch(const string& _persistenceCompleteEventSwitch)
{
    m_persistenceCompleteEventSwitch = _persistenceCompleteEventSwitch;
    m_persistenceCompleteEventSwitchHasBeenSet = true;
}

bool ModifyEventConfigRequest::PersistenceCompleteEventSwitchHasBeenSet() const
{
    return m_persistenceCompleteEventSwitchHasBeenSet;
}


