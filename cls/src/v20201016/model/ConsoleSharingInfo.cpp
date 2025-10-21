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

#include <tencentcloud/cls/v20201016/model/ConsoleSharingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsoleSharingInfo::ConsoleSharingInfo() :
    m_sharingIdHasBeenSet(false),
    m_sharingUrlHasBeenSet(false),
    m_sharingConfigHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_contentSafetyCodeHasBeenSet(false)
{
}

CoreInternalOutcome ConsoleSharingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SharingId") && !value["SharingId"].IsNull())
    {
        if (!value["SharingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.SharingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharingId = string(value["SharingId"].GetString());
        m_sharingIdHasBeenSet = true;
    }

    if (value.HasMember("SharingUrl") && !value["SharingUrl"].IsNull())
    {
        if (!value["SharingUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.SharingUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharingUrl = string(value["SharingUrl"].GetString());
        m_sharingUrlHasBeenSet = true;
    }

    if (value.HasMember("SharingConfig") && !value["SharingConfig"].IsNull())
    {
        if (!value["SharingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.SharingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sharingConfig.Deserialize(value["SharingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sharingConfigHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.ExpiredTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetUint64();
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ContentSafetyCode") && !value["ContentSafetyCode"].IsNull())
    {
        if (!value["ContentSafetyCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingInfo.ContentSafetyCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentSafetyCode = value["ContentSafetyCode"].GetUint64();
        m_contentSafetyCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsoleSharingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sharingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharingId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharingUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharingUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharingUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sharingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_contentSafetyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentSafetyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentSafetyCode, allocator);
    }

}


string ConsoleSharingInfo::GetSharingId() const
{
    return m_sharingId;
}

void ConsoleSharingInfo::SetSharingId(const string& _sharingId)
{
    m_sharingId = _sharingId;
    m_sharingIdHasBeenSet = true;
}

bool ConsoleSharingInfo::SharingIdHasBeenSet() const
{
    return m_sharingIdHasBeenSet;
}

string ConsoleSharingInfo::GetSharingUrl() const
{
    return m_sharingUrl;
}

void ConsoleSharingInfo::SetSharingUrl(const string& _sharingUrl)
{
    m_sharingUrl = _sharingUrl;
    m_sharingUrlHasBeenSet = true;
}

bool ConsoleSharingInfo::SharingUrlHasBeenSet() const
{
    return m_sharingUrlHasBeenSet;
}

ConsoleSharingConfig ConsoleSharingInfo::GetSharingConfig() const
{
    return m_sharingConfig;
}

void ConsoleSharingInfo::SetSharingConfig(const ConsoleSharingConfig& _sharingConfig)
{
    m_sharingConfig = _sharingConfig;
    m_sharingConfigHasBeenSet = true;
}

bool ConsoleSharingInfo::SharingConfigHasBeenSet() const
{
    return m_sharingConfigHasBeenSet;
}

uint64_t ConsoleSharingInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void ConsoleSharingInfo::SetExpiredTime(const uint64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ConsoleSharingInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

uint64_t ConsoleSharingInfo::GetCreateTime() const
{
    return m_createTime;
}

void ConsoleSharingInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConsoleSharingInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ConsoleSharingInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ConsoleSharingInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConsoleSharingInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ConsoleSharingInfo::GetStatus() const
{
    return m_status;
}

void ConsoleSharingInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConsoleSharingInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ConsoleSharingInfo::GetContentSafetyCode() const
{
    return m_contentSafetyCode;
}

void ConsoleSharingInfo::SetContentSafetyCode(const uint64_t& _contentSafetyCode)
{
    m_contentSafetyCode = _contentSafetyCode;
    m_contentSafetyCodeHasBeenSet = true;
}

bool ConsoleSharingInfo::ContentSafetyCodeHasBeenSet() const
{
    return m_contentSafetyCodeHasBeenSet;
}

