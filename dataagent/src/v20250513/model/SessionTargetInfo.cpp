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

#include <tencentcloud/dataagent/v20250513/model/SessionTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

SessionTargetInfo::SessionTargetInfo() :
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_lastInteractionTimeHasBeenSet(false),
    m_surfaceContextHasBeenSet(false),
    m_savedHasBeenSet(false),
    m_savedAtHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome SessionTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("LastInteractionTime") && !value["LastInteractionTime"].IsNull())
    {
        if (!value["LastInteractionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.LastInteractionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastInteractionTime = string(value["LastInteractionTime"].GetString());
        m_lastInteractionTimeHasBeenSet = true;
    }

    if (value.HasMember("SurfaceContext") && !value["SurfaceContext"].IsNull())
    {
        if (!value["SurfaceContext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.SurfaceContext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surfaceContext.Deserialize(value["SurfaceContext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surfaceContextHasBeenSet = true;
    }

    if (value.HasMember("Saved") && !value["Saved"].IsNull())
    {
        if (!value["Saved"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.Saved` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_saved = value["Saved"].GetBool();
        m_savedHasBeenSet = true;
    }

    if (value.HasMember("SavedAt") && !value["SavedAt"].IsNull())
    {
        if (!value["SavedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.SavedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_savedAt = string(value["SavedAt"].GetString());
        m_savedAtHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SessionTargetInfo.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_lastInteractionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastInteractionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastInteractionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_surfaceContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurfaceContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surfaceContext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_savedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Saved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saved, allocator);
    }

    if (m_savedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_savedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

}


string SessionTargetInfo::GetTargetId() const
{
    return m_targetId;
}

void SessionTargetInfo::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool SessionTargetInfo::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string SessionTargetInfo::GetTargetType() const
{
    return m_targetType;
}

void SessionTargetInfo::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool SessionTargetInfo::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string SessionTargetInfo::GetTargetName() const
{
    return m_targetName;
}

void SessionTargetInfo::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool SessionTargetInfo::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string SessionTargetInfo::GetSource() const
{
    return m_source;
}

void SessionTargetInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SessionTargetInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SessionTargetInfo::GetLastInteractionTime() const
{
    return m_lastInteractionTime;
}

void SessionTargetInfo::SetLastInteractionTime(const string& _lastInteractionTime)
{
    m_lastInteractionTime = _lastInteractionTime;
    m_lastInteractionTimeHasBeenSet = true;
}

bool SessionTargetInfo::LastInteractionTimeHasBeenSet() const
{
    return m_lastInteractionTimeHasBeenSet;
}

SurfaceContext SessionTargetInfo::GetSurfaceContext() const
{
    return m_surfaceContext;
}

void SessionTargetInfo::SetSurfaceContext(const SurfaceContext& _surfaceContext)
{
    m_surfaceContext = _surfaceContext;
    m_surfaceContextHasBeenSet = true;
}

bool SessionTargetInfo::SurfaceContextHasBeenSet() const
{
    return m_surfaceContextHasBeenSet;
}

bool SessionTargetInfo::GetSaved() const
{
    return m_saved;
}

void SessionTargetInfo::SetSaved(const bool& _saved)
{
    m_saved = _saved;
    m_savedHasBeenSet = true;
}

bool SessionTargetInfo::SavedHasBeenSet() const
{
    return m_savedHasBeenSet;
}

string SessionTargetInfo::GetSavedAt() const
{
    return m_savedAt;
}

void SessionTargetInfo::SetSavedAt(const string& _savedAt)
{
    m_savedAt = _savedAt;
    m_savedAtHasBeenSet = true;
}

bool SessionTargetInfo::SavedAtHasBeenSet() const
{
    return m_savedAtHasBeenSet;
}

bool SessionTargetInfo::GetDeleted() const
{
    return m_deleted;
}

void SessionTargetInfo::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool SessionTargetInfo::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

