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

#include <tencentcloud/monitor/v20180724/model/GrafanaNotificationChannel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GrafanaNotificationChannel::GrafanaNotificationChannel() :
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_orgIdHasBeenSet(false),
    m_extraOrgIdsHasBeenSet(false),
    m_orgIdsHasBeenSet(false),
    m_organizationIdsHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaNotificationChannel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receivers.push_back((*itr).GetString());
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.OrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = string(value["OrgId"].GetString());
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("ExtraOrgIds") && !value["ExtraOrgIds"].IsNull())
    {
        if (!value["ExtraOrgIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.ExtraOrgIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraOrgIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extraOrgIds.push_back((*itr).GetString());
        }
        m_extraOrgIdsHasBeenSet = true;
    }

    if (value.HasMember("OrgIds") && !value["OrgIds"].IsNull())
    {
        if (!value["OrgIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.OrgIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OrgIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orgIds.push_back((*itr).GetString());
        }
        m_orgIdsHasBeenSet = true;
    }

    if (value.HasMember("OrganizationIds") && !value["OrganizationIds"].IsNull())
    {
        if (!value["OrganizationIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaNotificationChannel.OrganizationIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OrganizationIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_organizationIds.push_back((*itr).GetString());
        }
        m_organizationIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaNotificationChannel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraOrgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraOrgIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraOrgIds.begin(); itr != m_extraOrgIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orgIds.begin(); itr != m_orgIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationIds.begin(); itr != m_organizationIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string GrafanaNotificationChannel::GetChannelId() const
{
    return m_channelId;
}

void GrafanaNotificationChannel::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool GrafanaNotificationChannel::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string GrafanaNotificationChannel::GetChannelName() const
{
    return m_channelName;
}

void GrafanaNotificationChannel::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GrafanaNotificationChannel::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<string> GrafanaNotificationChannel::GetReceivers() const
{
    return m_receivers;
}

void GrafanaNotificationChannel::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool GrafanaNotificationChannel::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

string GrafanaNotificationChannel::GetCreatedAt() const
{
    return m_createdAt;
}

void GrafanaNotificationChannel::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool GrafanaNotificationChannel::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string GrafanaNotificationChannel::GetUpdatedAt() const
{
    return m_updatedAt;
}

void GrafanaNotificationChannel::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool GrafanaNotificationChannel::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string GrafanaNotificationChannel::GetOrgId() const
{
    return m_orgId;
}

void GrafanaNotificationChannel::SetOrgId(const string& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool GrafanaNotificationChannel::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

vector<string> GrafanaNotificationChannel::GetExtraOrgIds() const
{
    return m_extraOrgIds;
}

void GrafanaNotificationChannel::SetExtraOrgIds(const vector<string>& _extraOrgIds)
{
    m_extraOrgIds = _extraOrgIds;
    m_extraOrgIdsHasBeenSet = true;
}

bool GrafanaNotificationChannel::ExtraOrgIdsHasBeenSet() const
{
    return m_extraOrgIdsHasBeenSet;
}

vector<string> GrafanaNotificationChannel::GetOrgIds() const
{
    return m_orgIds;
}

void GrafanaNotificationChannel::SetOrgIds(const vector<string>& _orgIds)
{
    m_orgIds = _orgIds;
    m_orgIdsHasBeenSet = true;
}

bool GrafanaNotificationChannel::OrgIdsHasBeenSet() const
{
    return m_orgIdsHasBeenSet;
}

vector<string> GrafanaNotificationChannel::GetOrganizationIds() const
{
    return m_organizationIds;
}

void GrafanaNotificationChannel::SetOrganizationIds(const vector<string>& _organizationIds)
{
    m_organizationIds = _organizationIds;
    m_organizationIdsHasBeenSet = true;
}

bool GrafanaNotificationChannel::OrganizationIdsHasBeenSet() const
{
    return m_organizationIdsHasBeenSet;
}

