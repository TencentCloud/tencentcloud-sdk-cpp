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

#include <tencentcloud/cwp/v20180228/model/EmergencyVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EmergencyVul::EmergencyVul() :
    m_vulIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_publishDateHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome EmergencyVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("PublishDate") && !value["PublishDate"].IsNull())
    {
        if (!value["PublishDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.PublishDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishDate = string(value["PublishDate"].GetString());
        m_publishDateHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.Category` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_category = value["Category"].GetUint64();
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmergencyVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishDate.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_category, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

}


uint64_t EmergencyVul::GetVulId() const
{
    return m_vulId;
}

void EmergencyVul::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool EmergencyVul::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

uint64_t EmergencyVul::GetLevel() const
{
    return m_level;
}

void EmergencyVul::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EmergencyVul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EmergencyVul::GetVulName() const
{
    return m_vulName;
}

void EmergencyVul::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool EmergencyVul::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string EmergencyVul::GetPublishDate() const
{
    return m_publishDate;
}

void EmergencyVul::SetPublishDate(const string& _publishDate)
{
    m_publishDate = _publishDate;
    m_publishDateHasBeenSet = true;
}

bool EmergencyVul::PublishDateHasBeenSet() const
{
    return m_publishDateHasBeenSet;
}

uint64_t EmergencyVul::GetCategory() const
{
    return m_category;
}

void EmergencyVul::SetCategory(const uint64_t& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool EmergencyVul::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t EmergencyVul::GetStatus() const
{
    return m_status;
}

void EmergencyVul::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EmergencyVul::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EmergencyVul::GetLastScanTime() const
{
    return m_lastScanTime;
}

void EmergencyVul::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool EmergencyVul::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t EmergencyVul::GetProgress() const
{
    return m_progress;
}

void EmergencyVul::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool EmergencyVul::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}
