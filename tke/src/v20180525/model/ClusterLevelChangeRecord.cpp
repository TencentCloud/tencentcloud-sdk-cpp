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

#include <tencentcloud/tke/v20180525/model/ClusterLevelChangeRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterLevelChangeRecord::ClusterLevelChangeRecord() :
    m_iDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_oldLevelHasBeenSet(false),
    m_newLevelHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false)
{
}

CoreInternalOutcome ClusterLevelChangeRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("OldLevel") && !value["OldLevel"].IsNull())
    {
        if (!value["OldLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.OldLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldLevel = string(value["OldLevel"].GetString());
        m_oldLevelHasBeenSet = true;
    }

    if (value.HasMember("NewLevel") && !value["NewLevel"].IsNull())
    {
        if (!value["NewLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.NewLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newLevel = string(value["NewLevel"].GetString());
        m_newLevelHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("EndedAt") && !value["EndedAt"].IsNull())
    {
        if (!value["EndedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevelChangeRecord.EndedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endedAt = string(value["EndedAt"].GetString());
        m_endedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterLevelChangeRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_oldLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_newLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endedAt.c_str(), allocator).Move(), allocator);
    }

}


string ClusterLevelChangeRecord::GetID() const
{
    return m_iD;
}

void ClusterLevelChangeRecord::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ClusterLevelChangeRecord::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ClusterLevelChangeRecord::GetClusterID() const
{
    return m_clusterID;
}

void ClusterLevelChangeRecord::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ClusterLevelChangeRecord::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ClusterLevelChangeRecord::GetStatus() const
{
    return m_status;
}

void ClusterLevelChangeRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterLevelChangeRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterLevelChangeRecord::GetMessage() const
{
    return m_message;
}

void ClusterLevelChangeRecord::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ClusterLevelChangeRecord::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ClusterLevelChangeRecord::GetOldLevel() const
{
    return m_oldLevel;
}

void ClusterLevelChangeRecord::SetOldLevel(const string& _oldLevel)
{
    m_oldLevel = _oldLevel;
    m_oldLevelHasBeenSet = true;
}

bool ClusterLevelChangeRecord::OldLevelHasBeenSet() const
{
    return m_oldLevelHasBeenSet;
}

string ClusterLevelChangeRecord::GetNewLevel() const
{
    return m_newLevel;
}

void ClusterLevelChangeRecord::SetNewLevel(const string& _newLevel)
{
    m_newLevel = _newLevel;
    m_newLevelHasBeenSet = true;
}

bool ClusterLevelChangeRecord::NewLevelHasBeenSet() const
{
    return m_newLevelHasBeenSet;
}

string ClusterLevelChangeRecord::GetTriggerType() const
{
    return m_triggerType;
}

void ClusterLevelChangeRecord::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ClusterLevelChangeRecord::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ClusterLevelChangeRecord::GetCreatedAt() const
{
    return m_createdAt;
}

void ClusterLevelChangeRecord::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ClusterLevelChangeRecord::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ClusterLevelChangeRecord::GetStartedAt() const
{
    return m_startedAt;
}

void ClusterLevelChangeRecord::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool ClusterLevelChangeRecord::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

string ClusterLevelChangeRecord::GetEndedAt() const
{
    return m_endedAt;
}

void ClusterLevelChangeRecord::SetEndedAt(const string& _endedAt)
{
    m_endedAt = _endedAt;
    m_endedAtHasBeenSet = true;
}

bool ClusterLevelChangeRecord::EndedAtHasBeenSet() const
{
    return m_endedAtHasBeenSet;
}

