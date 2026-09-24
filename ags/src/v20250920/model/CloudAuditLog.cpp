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

#include <tencentcloud/ags/v20250920/model/CloudAuditLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudAuditLog::CloudAuditLog() :
    m_auditLogIdHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_actorHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudAuditLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditLogId") && !value["AuditLogId"].IsNull())
    {
        if (!value["AuditLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.AuditLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogId = string(value["AuditLogId"].GetString());
        m_auditLogIdHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Actor") && !value["Actor"].IsNull())
    {
        if (!value["Actor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.Actor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actor = string(value["Actor"].GetString());
        m_actorHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.Details` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_details = string(value["Details"].GetString());
        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAuditLog.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAuditLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_actorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actor.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_details.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

}


string CloudAuditLog::GetAuditLogId() const
{
    return m_auditLogId;
}

void CloudAuditLog::SetAuditLogId(const string& _auditLogId)
{
    m_auditLogId = _auditLogId;
    m_auditLogIdHasBeenSet = true;
}

bool CloudAuditLog::AuditLogIdHasBeenSet() const
{
    return m_auditLogIdHasBeenSet;
}

string CloudAuditLog::GetRegistryId() const
{
    return m_registryId;
}

void CloudAuditLog::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CloudAuditLog::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CloudAuditLog::GetActor() const
{
    return m_actor;
}

void CloudAuditLog::SetActor(const string& _actor)
{
    m_actor = _actor;
    m_actorHasBeenSet = true;
}

bool CloudAuditLog::ActorHasBeenSet() const
{
    return m_actorHasBeenSet;
}

string CloudAuditLog::GetAction() const
{
    return m_action;
}

void CloudAuditLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CloudAuditLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string CloudAuditLog::GetDetails() const
{
    return m_details;
}

void CloudAuditLog::SetDetails(const string& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool CloudAuditLog::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

string CloudAuditLog::GetCreateTime() const
{
    return m_createTime;
}

void CloudAuditLog::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudAuditLog::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudAuditLog::GetRecordId() const
{
    return m_recordId;
}

void CloudAuditLog::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool CloudAuditLog::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string CloudAuditLog::GetVersionId() const
{
    return m_versionId;
}

void CloudAuditLog::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool CloudAuditLog::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

