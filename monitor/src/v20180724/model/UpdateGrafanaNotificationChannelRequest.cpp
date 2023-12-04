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

#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdateGrafanaNotificationChannelRequest::UpdateGrafanaNotificationChannelRequest() :
    m_channelIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_extraOrgIdsHasBeenSet(false),
    m_organizationIdsHasBeenSet(false)
{
}

string UpdateGrafanaNotificationChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_extraOrgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraOrgIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraOrgIds.begin(); itr != m_extraOrgIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationIds.begin(); itr != m_organizationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateGrafanaNotificationChannelRequest::GetChannelId() const
{
    return m_channelId;
}

void UpdateGrafanaNotificationChannelRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string UpdateGrafanaNotificationChannelRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateGrafanaNotificationChannelRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> UpdateGrafanaNotificationChannelRequest::GetReceivers() const
{
    return m_receivers;
}

void UpdateGrafanaNotificationChannelRequest::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

string UpdateGrafanaNotificationChannelRequest::GetChannelName() const
{
    return m_channelName;
}

void UpdateGrafanaNotificationChannelRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<string> UpdateGrafanaNotificationChannelRequest::GetExtraOrgIds() const
{
    return m_extraOrgIds;
}

void UpdateGrafanaNotificationChannelRequest::SetExtraOrgIds(const vector<string>& _extraOrgIds)
{
    m_extraOrgIds = _extraOrgIds;
    m_extraOrgIdsHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::ExtraOrgIdsHasBeenSet() const
{
    return m_extraOrgIdsHasBeenSet;
}

vector<string> UpdateGrafanaNotificationChannelRequest::GetOrganizationIds() const
{
    return m_organizationIds;
}

void UpdateGrafanaNotificationChannelRequest::SetOrganizationIds(const vector<string>& _organizationIds)
{
    m_organizationIds = _organizationIds;
    m_organizationIdsHasBeenSet = true;
}

bool UpdateGrafanaNotificationChannelRequest::OrganizationIdsHasBeenSet() const
{
    return m_organizationIdsHasBeenSet;
}


