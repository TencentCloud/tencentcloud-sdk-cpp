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

#include <tencentcloud/csip/v20221121/model/VulFixStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixStatusItem::VulFixStatusItem() :
    m_vulIdHasBeenSet(false),
    m_kBIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_successHostCountHasBeenSet(false),
    m_failHostCountHasBeenSet(false)
{
}

CoreInternalOutcome VulFixStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("KBId") && !value["KBId"].IsNull())
    {
        if (!value["KBId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.KBId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kBId = value["KBId"].GetInt64();
        m_kBIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.FixStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetInt64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessHostCount") && !value["SuccessHostCount"].IsNull())
    {
        if (!value["SuccessHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.SuccessHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successHostCount = value["SuccessHostCount"].GetInt64();
        m_successHostCountHasBeenSet = true;
    }

    if (value.HasMember("FailHostCount") && !value["FailHostCount"].IsNull())
    {
        if (!value["FailHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusItem.FailHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failHostCount = value["FailHostCount"].GetInt64();
        m_failHostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_kBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_successHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successHostCount, allocator);
    }

    if (m_failHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failHostCount, allocator);
    }

}


int64_t VulFixStatusItem::GetVulId() const
{
    return m_vulId;
}

void VulFixStatusItem::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixStatusItem::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

int64_t VulFixStatusItem::GetKBId() const
{
    return m_kBId;
}

void VulFixStatusItem::SetKBId(const int64_t& _kBId)
{
    m_kBId = _kBId;
    m_kBIdHasBeenSet = true;
}

bool VulFixStatusItem::KBIdHasBeenSet() const
{
    return m_kBIdHasBeenSet;
}

string VulFixStatusItem::GetVulName() const
{
    return m_vulName;
}

void VulFixStatusItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulFixStatusItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

int64_t VulFixStatusItem::GetFixStatus() const
{
    return m_fixStatus;
}

void VulFixStatusItem::SetFixStatus(const int64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool VulFixStatusItem::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

int64_t VulFixStatusItem::GetHostCount() const
{
    return m_hostCount;
}

void VulFixStatusItem::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool VulFixStatusItem::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t VulFixStatusItem::GetSuccessHostCount() const
{
    return m_successHostCount;
}

void VulFixStatusItem::SetSuccessHostCount(const int64_t& _successHostCount)
{
    m_successHostCount = _successHostCount;
    m_successHostCountHasBeenSet = true;
}

bool VulFixStatusItem::SuccessHostCountHasBeenSet() const
{
    return m_successHostCountHasBeenSet;
}

int64_t VulFixStatusItem::GetFailHostCount() const
{
    return m_failHostCount;
}

void VulFixStatusItem::SetFailHostCount(const int64_t& _failHostCount)
{
    m_failHostCount = _failHostCount;
    m_failHostCountHasBeenSet = true;
}

bool VulFixStatusItem::FailHostCountHasBeenSet() const
{
    return m_failHostCountHasBeenSet;
}

