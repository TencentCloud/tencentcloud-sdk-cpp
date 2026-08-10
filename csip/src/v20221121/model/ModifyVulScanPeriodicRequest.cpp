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

#include <tencentcloud/csip/v20221121/model/ModifyVulScanPeriodicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyVulScanPeriodicRequest::ModifyVulScanPeriodicRequest() :
    m_statusHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_cycleValueHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_assetListHasBeenSet(false),
    m_allowSyncHasBeenSet(false),
    m_enableSyncHasBeenSet(false),
    m_syncToHasBeenSet(false),
    m_tagIdsHasBeenSet(false)
{
}

string ModifyVulScanPeriodicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCategory.begin(); itr != m_vulCategory.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_cycleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleValue.begin(); itr != m_cycleValue.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetList.begin(); itr != m_assetList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowSync, allocator);
    }

    if (m_enableSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSync, allocator);
    }

    if (m_syncToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_syncTo.begin(); itr != m_syncTo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyVulScanPeriodicRequest::GetStatus() const
{
    return m_status;
}

void ModifyVulScanPeriodicRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyVulScanPeriodicRequest::GetVulCategory() const
{
    return m_vulCategory;
}

void ModifyVulScanPeriodicRequest::SetVulCategory(const vector<string>& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

vector<string> ModifyVulScanPeriodicRequest::GetLevel() const
{
    return m_level;
}

void ModifyVulScanPeriodicRequest::SetLevel(const vector<string>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ModifyVulScanPeriodicRequest::GetMethod() const
{
    return m_method;
}

void ModifyVulScanPeriodicRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyVulScanPeriodicRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyVulScanPeriodicRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyVulScanPeriodicRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyVulScanPeriodicRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ModifyVulScanPeriodicRequest::GetAssetRange() const
{
    return m_assetRange;
}

void ModifyVulScanPeriodicRequest::SetAssetRange(const int64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

uint64_t ModifyVulScanPeriodicRequest::GetCycleType() const
{
    return m_cycleType;
}

void ModifyVulScanPeriodicRequest::SetCycleType(const uint64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t ModifyVulScanPeriodicRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyVulScanPeriodicRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

vector<uint64_t> ModifyVulScanPeriodicRequest::GetCycleValue() const
{
    return m_cycleValue;
}

void ModifyVulScanPeriodicRequest::SetCycleValue(const vector<uint64_t>& _cycleValue)
{
    m_cycleValue = _cycleValue;
    m_cycleValueHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::CycleValueHasBeenSet() const
{
    return m_cycleValueHasBeenSet;
}

vector<string> ModifyVulScanPeriodicRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyVulScanPeriodicRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> ModifyVulScanPeriodicRequest::GetAssetList() const
{
    return m_assetList;
}

void ModifyVulScanPeriodicRequest::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

uint64_t ModifyVulScanPeriodicRequest::GetAllowSync() const
{
    return m_allowSync;
}

void ModifyVulScanPeriodicRequest::SetAllowSync(const uint64_t& _allowSync)
{
    m_allowSync = _allowSync;
    m_allowSyncHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::AllowSyncHasBeenSet() const
{
    return m_allowSyncHasBeenSet;
}

uint64_t ModifyVulScanPeriodicRequest::GetEnableSync() const
{
    return m_enableSync;
}

void ModifyVulScanPeriodicRequest::SetEnableSync(const uint64_t& _enableSync)
{
    m_enableSync = _enableSync;
    m_enableSyncHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::EnableSyncHasBeenSet() const
{
    return m_enableSyncHasBeenSet;
}

vector<uint64_t> ModifyVulScanPeriodicRequest::GetSyncTo() const
{
    return m_syncTo;
}

void ModifyVulScanPeriodicRequest::SetSyncTo(const vector<uint64_t>& _syncTo)
{
    m_syncTo = _syncTo;
    m_syncToHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::SyncToHasBeenSet() const
{
    return m_syncToHasBeenSet;
}

vector<uint64_t> ModifyVulScanPeriodicRequest::GetTagIds() const
{
    return m_tagIds;
}

void ModifyVulScanPeriodicRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool ModifyVulScanPeriodicRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}


