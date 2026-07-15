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

#include <tencentcloud/lcic/v20220817/model/EditVersions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

EditVersions::EditVersions() :
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isMainHasBeenSet(false),
    m_isSourceHasBeenSet(false),
    m_keepDurationSecHasBeenSet(false),
    m_createdAtMsHasBeenSet(false),
    m_creatorUserIdHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_updatedAtMsHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
}

CoreInternalOutcome EditVersions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsMain") && !value["IsMain"].IsNull())
    {
        if (!value["IsMain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.IsMain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMain = value["IsMain"].GetBool();
        m_isMainHasBeenSet = true;
    }

    if (value.HasMember("IsSource") && !value["IsSource"].IsNull())
    {
        if (!value["IsSource"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.IsSource` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSource = value["IsSource"].GetBool();
        m_isSourceHasBeenSet = true;
    }

    if (value.HasMember("KeepDurationSec") && !value["KeepDurationSec"].IsNull())
    {
        if (!value["KeepDurationSec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.KeepDurationSec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepDurationSec = value["KeepDurationSec"].GetUint64();
        m_keepDurationSecHasBeenSet = true;
    }

    if (value.HasMember("CreatedAtMs") && !value["CreatedAtMs"].IsNull())
    {
        if (!value["CreatedAtMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.CreatedAtMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAtMs = value["CreatedAtMs"].GetUint64();
        m_createdAtMsHasBeenSet = true;
    }

    if (value.HasMember("CreatorUserId") && !value["CreatorUserId"].IsNull())
    {
        if (!value["CreatorUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.CreatorUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUserId = string(value["CreatorUserId"].GetString());
        m_creatorUserIdHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAtMs") && !value["UpdatedAtMs"].IsNull())
    {
        if (!value["UpdatedAtMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.UpdatedAtMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAtMs = value["UpdatedAtMs"].GetUint64();
        m_updatedAtMsHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditVersions.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditVersions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isMainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMain, allocator);
    }

    if (m_isSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSource, allocator);
    }

    if (m_keepDurationSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepDurationSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepDurationSec, allocator);
    }

    if (m_createdAtMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAtMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAtMs, allocator);
    }

    if (m_creatorUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAtMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAtMs, allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EditVersions::GetVersion() const
{
    return m_version;
}

void EditVersions::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool EditVersions::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string EditVersions::GetStatus() const
{
    return m_status;
}

void EditVersions::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EditVersions::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool EditVersions::GetIsMain() const
{
    return m_isMain;
}

void EditVersions::SetIsMain(const bool& _isMain)
{
    m_isMain = _isMain;
    m_isMainHasBeenSet = true;
}

bool EditVersions::IsMainHasBeenSet() const
{
    return m_isMainHasBeenSet;
}

bool EditVersions::GetIsSource() const
{
    return m_isSource;
}

void EditVersions::SetIsSource(const bool& _isSource)
{
    m_isSource = _isSource;
    m_isSourceHasBeenSet = true;
}

bool EditVersions::IsSourceHasBeenSet() const
{
    return m_isSourceHasBeenSet;
}

uint64_t EditVersions::GetKeepDurationSec() const
{
    return m_keepDurationSec;
}

void EditVersions::SetKeepDurationSec(const uint64_t& _keepDurationSec)
{
    m_keepDurationSec = _keepDurationSec;
    m_keepDurationSecHasBeenSet = true;
}

bool EditVersions::KeepDurationSecHasBeenSet() const
{
    return m_keepDurationSecHasBeenSet;
}

uint64_t EditVersions::GetCreatedAtMs() const
{
    return m_createdAtMs;
}

void EditVersions::SetCreatedAtMs(const uint64_t& _createdAtMs)
{
    m_createdAtMs = _createdAtMs;
    m_createdAtMsHasBeenSet = true;
}

bool EditVersions::CreatedAtMsHasBeenSet() const
{
    return m_createdAtMsHasBeenSet;
}

string EditVersions::GetCreatorUserId() const
{
    return m_creatorUserId;
}

void EditVersions::SetCreatorUserId(const string& _creatorUserId)
{
    m_creatorUserId = _creatorUserId;
    m_creatorUserIdHasBeenSet = true;
}

bool EditVersions::CreatorUserIdHasBeenSet() const
{
    return m_creatorUserIdHasBeenSet;
}

string EditVersions::GetFailReason() const
{
    return m_failReason;
}

void EditVersions::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool EditVersions::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

uint64_t EditVersions::GetUpdatedAtMs() const
{
    return m_updatedAtMs;
}

void EditVersions::SetUpdatedAtMs(const uint64_t& _updatedAtMs)
{
    m_updatedAtMs = _updatedAtMs;
    m_updatedAtMsHasBeenSet = true;
}

bool EditVersions::UpdatedAtMsHasBeenSet() const
{
    return m_updatedAtMsHasBeenSet;
}

string EditVersions::GetVersionName() const
{
    return m_versionName;
}

void EditVersions::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool EditVersions::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

