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

#include <tencentcloud/adp/v20260520/model/ReleaseRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ReleaseRecord::ReleaseRecord() :
    m_canExportHasBeenSet(false),
    m_canRollbackHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_releaseIdHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updaterHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanExport") && !value["CanExport"].IsNull())
    {
        if (!value["CanExport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.CanExport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canExport = value["CanExport"].GetBool();
        m_canExportHasBeenSet = true;
    }

    if (value.HasMember("CanRollback") && !value["CanRollback"].IsNull())
    {
        if (!value["CanRollback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.CanRollback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRollback = value["CanRollback"].GetBool();
        m_canRollbackHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.FailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetUint64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("ReleaseId") && !value["ReleaseId"].IsNull())
    {
        if (!value["ReleaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.ReleaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseId = string(value["ReleaseId"].GetString());
        m_releaseIdHasBeenSet = true;
    }

    if (value.HasMember("ReleaseVersion") && !value["ReleaseVersion"].IsNull())
    {
        if (!value["ReleaseVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.ReleaseVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseVersion = string(value["ReleaseVersion"].GetString());
        m_releaseVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDescription") && !value["StatusDescription"].IsNull())
    {
        if (!value["StatusDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.StatusDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDescription = string(value["StatusDescription"].GetString());
        m_statusDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Updater") && !value["Updater"].IsNull())
    {
        if (!value["Updater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRecord.Updater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updater = string(value["Updater"].GetString());
        m_updaterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canExportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanExport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canExport, allocator);
    }

    if (m_canRollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRollback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRollback, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updaterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updater.c_str(), allocator).Move(), allocator);
    }

}


bool ReleaseRecord::GetCanExport() const
{
    return m_canExport;
}

void ReleaseRecord::SetCanExport(const bool& _canExport)
{
    m_canExport = _canExport;
    m_canExportHasBeenSet = true;
}

bool ReleaseRecord::CanExportHasBeenSet() const
{
    return m_canExportHasBeenSet;
}

bool ReleaseRecord::GetCanRollback() const
{
    return m_canRollback;
}

void ReleaseRecord::SetCanRollback(const bool& _canRollback)
{
    m_canRollback = _canRollback;
    m_canRollbackHasBeenSet = true;
}

bool ReleaseRecord::CanRollbackHasBeenSet() const
{
    return m_canRollbackHasBeenSet;
}

string ReleaseRecord::GetDescription() const
{
    return m_description;
}

void ReleaseRecord::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReleaseRecord::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ReleaseRecord::GetFailCount() const
{
    return m_failCount;
}

void ReleaseRecord::SetFailCount(const uint64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool ReleaseRecord::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

string ReleaseRecord::GetReason() const
{
    return m_reason;
}

void ReleaseRecord::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ReleaseRecord::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ReleaseRecord::GetReleaseId() const
{
    return m_releaseId;
}

void ReleaseRecord::SetReleaseId(const string& _releaseId)
{
    m_releaseId = _releaseId;
    m_releaseIdHasBeenSet = true;
}

bool ReleaseRecord::ReleaseIdHasBeenSet() const
{
    return m_releaseIdHasBeenSet;
}

string ReleaseRecord::GetReleaseVersion() const
{
    return m_releaseVersion;
}

void ReleaseRecord::SetReleaseVersion(const string& _releaseVersion)
{
    m_releaseVersion = _releaseVersion;
    m_releaseVersionHasBeenSet = true;
}

bool ReleaseRecord::ReleaseVersionHasBeenSet() const
{
    return m_releaseVersionHasBeenSet;
}

int64_t ReleaseRecord::GetStatus() const
{
    return m_status;
}

void ReleaseRecord::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReleaseRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReleaseRecord::GetStatusDescription() const
{
    return m_statusDescription;
}

void ReleaseRecord::SetStatusDescription(const string& _statusDescription)
{
    m_statusDescription = _statusDescription;
    m_statusDescriptionHasBeenSet = true;
}

bool ReleaseRecord::StatusDescriptionHasBeenSet() const
{
    return m_statusDescriptionHasBeenSet;
}

uint64_t ReleaseRecord::GetSuccessCount() const
{
    return m_successCount;
}

void ReleaseRecord::SetSuccessCount(const uint64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool ReleaseRecord::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string ReleaseRecord::GetUpdateTime() const
{
    return m_updateTime;
}

void ReleaseRecord::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReleaseRecord::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ReleaseRecord::GetUpdater() const
{
    return m_updater;
}

void ReleaseRecord::SetUpdater(const string& _updater)
{
    m_updater = _updater;
    m_updaterHasBeenSet = true;
}

bool ReleaseRecord::UpdaterHasBeenSet() const
{
    return m_updaterHasBeenSet;
}

