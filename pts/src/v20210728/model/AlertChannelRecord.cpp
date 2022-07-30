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

#include <tencentcloud/pts/v20210728/model/AlertChannelRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AlertChannelRecord::AlertChannelRecord() :
    m_noticeIdHasBeenSet(false),
    m_aMPConsumerIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome AlertChannelRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("AMPConsumerId") && !value["AMPConsumerId"].IsNull())
    {
        if (!value["AMPConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.AMPConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMPConsumerId = string(value["AMPConsumerId"].GetString());
        m_aMPConsumerIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertChannelRecord.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertChannelRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_aMPConsumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aMPConsumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

}


string AlertChannelRecord::GetNoticeId() const
{
    return m_noticeId;
}

void AlertChannelRecord::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool AlertChannelRecord::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string AlertChannelRecord::GetAMPConsumerId() const
{
    return m_aMPConsumerId;
}

void AlertChannelRecord::SetAMPConsumerId(const string& _aMPConsumerId)
{
    m_aMPConsumerId = _aMPConsumerId;
    m_aMPConsumerIdHasBeenSet = true;
}

bool AlertChannelRecord::AMPConsumerIdHasBeenSet() const
{
    return m_aMPConsumerIdHasBeenSet;
}

string AlertChannelRecord::GetProjectId() const
{
    return m_projectId;
}

void AlertChannelRecord::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlertChannelRecord::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t AlertChannelRecord::GetStatus() const
{
    return m_status;
}

void AlertChannelRecord::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlertChannelRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlertChannelRecord::GetCreatedAt() const
{
    return m_createdAt;
}

void AlertChannelRecord::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AlertChannelRecord::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string AlertChannelRecord::GetUpdatedAt() const
{
    return m_updatedAt;
}

void AlertChannelRecord::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool AlertChannelRecord::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

