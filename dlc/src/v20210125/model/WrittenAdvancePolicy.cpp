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

#include <tencentcloud/dlc/v20210125/model/WrittenAdvancePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WrittenAdvancePolicy::WrittenAdvancePolicy() :
    m_compactEnableHasBeenSet(false),
    m_deleteEnableHasBeenSet(false),
    m_minInputFilesHasBeenSet(false),
    m_targetFileSizeBytesHasBeenSet(false),
    m_retainLastHasBeenSet(false),
    m_beforeDaysHasBeenSet(false),
    m_expiredSnapshotsIntervalMinHasBeenSet(false),
    m_removeOrphanIntervalMinHasBeenSet(false),
    m_cowCompactEnableHasBeenSet(false),
    m_compactStrategyHasBeenSet(false),
    m_sortOrdersHasBeenSet(false)
{
}

CoreInternalOutcome WrittenAdvancePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompactEnable") && !value["CompactEnable"].IsNull())
    {
        if (!value["CompactEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.CompactEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compactEnable = string(value["CompactEnable"].GetString());
        m_compactEnableHasBeenSet = true;
    }

    if (value.HasMember("DeleteEnable") && !value["DeleteEnable"].IsNull())
    {
        if (!value["DeleteEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.DeleteEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteEnable = string(value["DeleteEnable"].GetString());
        m_deleteEnableHasBeenSet = true;
    }

    if (value.HasMember("MinInputFiles") && !value["MinInputFiles"].IsNull())
    {
        if (!value["MinInputFiles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.MinInputFiles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInputFiles = value["MinInputFiles"].GetInt64();
        m_minInputFilesHasBeenSet = true;
    }

    if (value.HasMember("TargetFileSizeBytes") && !value["TargetFileSizeBytes"].IsNull())
    {
        if (!value["TargetFileSizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.TargetFileSizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetFileSizeBytes = value["TargetFileSizeBytes"].GetInt64();
        m_targetFileSizeBytesHasBeenSet = true;
    }

    if (value.HasMember("RetainLast") && !value["RetainLast"].IsNull())
    {
        if (!value["RetainLast"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.RetainLast` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retainLast = value["RetainLast"].GetInt64();
        m_retainLastHasBeenSet = true;
    }

    if (value.HasMember("BeforeDays") && !value["BeforeDays"].IsNull())
    {
        if (!value["BeforeDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.BeforeDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beforeDays = value["BeforeDays"].GetInt64();
        m_beforeDaysHasBeenSet = true;
    }

    if (value.HasMember("ExpiredSnapshotsIntervalMin") && !value["ExpiredSnapshotsIntervalMin"].IsNull())
    {
        if (!value["ExpiredSnapshotsIntervalMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.ExpiredSnapshotsIntervalMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredSnapshotsIntervalMin = value["ExpiredSnapshotsIntervalMin"].GetInt64();
        m_expiredSnapshotsIntervalMinHasBeenSet = true;
    }

    if (value.HasMember("RemoveOrphanIntervalMin") && !value["RemoveOrphanIntervalMin"].IsNull())
    {
        if (!value["RemoveOrphanIntervalMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.RemoveOrphanIntervalMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeOrphanIntervalMin = value["RemoveOrphanIntervalMin"].GetInt64();
        m_removeOrphanIntervalMinHasBeenSet = true;
    }

    if (value.HasMember("CowCompactEnable") && !value["CowCompactEnable"].IsNull())
    {
        if (!value["CowCompactEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.CowCompactEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cowCompactEnable = string(value["CowCompactEnable"].GetString());
        m_cowCompactEnableHasBeenSet = true;
    }

    if (value.HasMember("CompactStrategy") && !value["CompactStrategy"].IsNull())
    {
        if (!value["CompactStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.CompactStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compactStrategy = string(value["CompactStrategy"].GetString());
        m_compactStrategyHasBeenSet = true;
    }

    if (value.HasMember("SortOrders") && !value["SortOrders"].IsNull())
    {
        if (!value["SortOrders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WrittenAdvancePolicy.SortOrders` is not array type"));

        const rapidjson::Value &tmpValue = value["SortOrders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SortOrder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sortOrders.push_back(item);
        }
        m_sortOrdersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WrittenAdvancePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compactEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompactEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compactEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_minInputFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInputFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInputFiles, allocator);
    }

    if (m_targetFileSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFileSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetFileSizeBytes, allocator);
    }

    if (m_retainLastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainLast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retainLast, allocator);
    }

    if (m_beforeDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforeDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beforeDays, allocator);
    }

    if (m_expiredSnapshotsIntervalMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSnapshotsIntervalMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredSnapshotsIntervalMin, allocator);
    }

    if (m_removeOrphanIntervalMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveOrphanIntervalMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeOrphanIntervalMin, allocator);
    }

    if (m_cowCompactEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CowCompactEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cowCompactEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_compactStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompactStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compactStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrdersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sortOrders.begin(); itr != m_sortOrders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WrittenAdvancePolicy::GetCompactEnable() const
{
    return m_compactEnable;
}

void WrittenAdvancePolicy::SetCompactEnable(const string& _compactEnable)
{
    m_compactEnable = _compactEnable;
    m_compactEnableHasBeenSet = true;
}

bool WrittenAdvancePolicy::CompactEnableHasBeenSet() const
{
    return m_compactEnableHasBeenSet;
}

string WrittenAdvancePolicy::GetDeleteEnable() const
{
    return m_deleteEnable;
}

void WrittenAdvancePolicy::SetDeleteEnable(const string& _deleteEnable)
{
    m_deleteEnable = _deleteEnable;
    m_deleteEnableHasBeenSet = true;
}

bool WrittenAdvancePolicy::DeleteEnableHasBeenSet() const
{
    return m_deleteEnableHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetMinInputFiles() const
{
    return m_minInputFiles;
}

void WrittenAdvancePolicy::SetMinInputFiles(const int64_t& _minInputFiles)
{
    m_minInputFiles = _minInputFiles;
    m_minInputFilesHasBeenSet = true;
}

bool WrittenAdvancePolicy::MinInputFilesHasBeenSet() const
{
    return m_minInputFilesHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetTargetFileSizeBytes() const
{
    return m_targetFileSizeBytes;
}

void WrittenAdvancePolicy::SetTargetFileSizeBytes(const int64_t& _targetFileSizeBytes)
{
    m_targetFileSizeBytes = _targetFileSizeBytes;
    m_targetFileSizeBytesHasBeenSet = true;
}

bool WrittenAdvancePolicy::TargetFileSizeBytesHasBeenSet() const
{
    return m_targetFileSizeBytesHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetRetainLast() const
{
    return m_retainLast;
}

void WrittenAdvancePolicy::SetRetainLast(const int64_t& _retainLast)
{
    m_retainLast = _retainLast;
    m_retainLastHasBeenSet = true;
}

bool WrittenAdvancePolicy::RetainLastHasBeenSet() const
{
    return m_retainLastHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetBeforeDays() const
{
    return m_beforeDays;
}

void WrittenAdvancePolicy::SetBeforeDays(const int64_t& _beforeDays)
{
    m_beforeDays = _beforeDays;
    m_beforeDaysHasBeenSet = true;
}

bool WrittenAdvancePolicy::BeforeDaysHasBeenSet() const
{
    return m_beforeDaysHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetExpiredSnapshotsIntervalMin() const
{
    return m_expiredSnapshotsIntervalMin;
}

void WrittenAdvancePolicy::SetExpiredSnapshotsIntervalMin(const int64_t& _expiredSnapshotsIntervalMin)
{
    m_expiredSnapshotsIntervalMin = _expiredSnapshotsIntervalMin;
    m_expiredSnapshotsIntervalMinHasBeenSet = true;
}

bool WrittenAdvancePolicy::ExpiredSnapshotsIntervalMinHasBeenSet() const
{
    return m_expiredSnapshotsIntervalMinHasBeenSet;
}

int64_t WrittenAdvancePolicy::GetRemoveOrphanIntervalMin() const
{
    return m_removeOrphanIntervalMin;
}

void WrittenAdvancePolicy::SetRemoveOrphanIntervalMin(const int64_t& _removeOrphanIntervalMin)
{
    m_removeOrphanIntervalMin = _removeOrphanIntervalMin;
    m_removeOrphanIntervalMinHasBeenSet = true;
}

bool WrittenAdvancePolicy::RemoveOrphanIntervalMinHasBeenSet() const
{
    return m_removeOrphanIntervalMinHasBeenSet;
}

string WrittenAdvancePolicy::GetCowCompactEnable() const
{
    return m_cowCompactEnable;
}

void WrittenAdvancePolicy::SetCowCompactEnable(const string& _cowCompactEnable)
{
    m_cowCompactEnable = _cowCompactEnable;
    m_cowCompactEnableHasBeenSet = true;
}

bool WrittenAdvancePolicy::CowCompactEnableHasBeenSet() const
{
    return m_cowCompactEnableHasBeenSet;
}

string WrittenAdvancePolicy::GetCompactStrategy() const
{
    return m_compactStrategy;
}

void WrittenAdvancePolicy::SetCompactStrategy(const string& _compactStrategy)
{
    m_compactStrategy = _compactStrategy;
    m_compactStrategyHasBeenSet = true;
}

bool WrittenAdvancePolicy::CompactStrategyHasBeenSet() const
{
    return m_compactStrategyHasBeenSet;
}

vector<SortOrder> WrittenAdvancePolicy::GetSortOrders() const
{
    return m_sortOrders;
}

void WrittenAdvancePolicy::SetSortOrders(const vector<SortOrder>& _sortOrders)
{
    m_sortOrders = _sortOrders;
    m_sortOrdersHasBeenSet = true;
}

bool WrittenAdvancePolicy::SortOrdersHasBeenSet() const
{
    return m_sortOrdersHasBeenSet;
}

