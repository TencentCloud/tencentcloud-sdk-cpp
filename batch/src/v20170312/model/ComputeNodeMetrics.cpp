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

#include <tencentcloud/batch/v20170312/model/ComputeNodeMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ComputeNodeMetrics::ComputeNodeMetrics() :
    m_submittedCountHasBeenSet(false),
    m_creatingCountHasBeenSet(false),
    m_creationFailedCountHasBeenSet(false),
    m_createdCountHasBeenSet(false),
    m_runningCountHasBeenSet(false),
    m_deletingCountHasBeenSet(false),
    m_abnormalCountHasBeenSet(false)
{
}

CoreInternalOutcome ComputeNodeMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubmittedCount") && !value["SubmittedCount"].IsNull())
    {
        if (!value["SubmittedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.SubmittedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_submittedCount = value["SubmittedCount"].GetUint64();
        m_submittedCountHasBeenSet = true;
    }

    if (value.HasMember("CreatingCount") && !value["CreatingCount"].IsNull())
    {
        if (!value["CreatingCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.CreatingCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creatingCount = value["CreatingCount"].GetUint64();
        m_creatingCountHasBeenSet = true;
    }

    if (value.HasMember("CreationFailedCount") && !value["CreationFailedCount"].IsNull())
    {
        if (!value["CreationFailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.CreationFailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationFailedCount = value["CreationFailedCount"].GetUint64();
        m_creationFailedCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedCount") && !value["CreatedCount"].IsNull())
    {
        if (!value["CreatedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.CreatedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdCount = value["CreatedCount"].GetUint64();
        m_createdCountHasBeenSet = true;
    }

    if (value.HasMember("RunningCount") && !value["RunningCount"].IsNull())
    {
        if (!value["RunningCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.RunningCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCount = value["RunningCount"].GetUint64();
        m_runningCountHasBeenSet = true;
    }

    if (value.HasMember("DeletingCount") && !value["DeletingCount"].IsNull())
    {
        if (!value["DeletingCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.DeletingCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deletingCount = value["DeletingCount"].GetUint64();
        m_deletingCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalCount") && !value["AbnormalCount"].IsNull())
    {
        if (!value["AbnormalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics.AbnormalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalCount = value["AbnormalCount"].GetUint64();
        m_abnormalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeNodeMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_submittedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmittedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submittedCount, allocator);
    }

    if (m_creatingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatingCount, allocator);
    }

    if (m_creationFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationFailedCount, allocator);
    }

    if (m_createdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdCount, allocator);
    }

    if (m_runningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCount, allocator);
    }

    if (m_deletingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletingCount, allocator);
    }

    if (m_abnormalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalCount, allocator);
    }

}


uint64_t ComputeNodeMetrics::GetSubmittedCount() const
{
    return m_submittedCount;
}

void ComputeNodeMetrics::SetSubmittedCount(const uint64_t& _submittedCount)
{
    m_submittedCount = _submittedCount;
    m_submittedCountHasBeenSet = true;
}

bool ComputeNodeMetrics::SubmittedCountHasBeenSet() const
{
    return m_submittedCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetCreatingCount() const
{
    return m_creatingCount;
}

void ComputeNodeMetrics::SetCreatingCount(const uint64_t& _creatingCount)
{
    m_creatingCount = _creatingCount;
    m_creatingCountHasBeenSet = true;
}

bool ComputeNodeMetrics::CreatingCountHasBeenSet() const
{
    return m_creatingCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetCreationFailedCount() const
{
    return m_creationFailedCount;
}

void ComputeNodeMetrics::SetCreationFailedCount(const uint64_t& _creationFailedCount)
{
    m_creationFailedCount = _creationFailedCount;
    m_creationFailedCountHasBeenSet = true;
}

bool ComputeNodeMetrics::CreationFailedCountHasBeenSet() const
{
    return m_creationFailedCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetCreatedCount() const
{
    return m_createdCount;
}

void ComputeNodeMetrics::SetCreatedCount(const uint64_t& _createdCount)
{
    m_createdCount = _createdCount;
    m_createdCountHasBeenSet = true;
}

bool ComputeNodeMetrics::CreatedCountHasBeenSet() const
{
    return m_createdCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetRunningCount() const
{
    return m_runningCount;
}

void ComputeNodeMetrics::SetRunningCount(const uint64_t& _runningCount)
{
    m_runningCount = _runningCount;
    m_runningCountHasBeenSet = true;
}

bool ComputeNodeMetrics::RunningCountHasBeenSet() const
{
    return m_runningCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetDeletingCount() const
{
    return m_deletingCount;
}

void ComputeNodeMetrics::SetDeletingCount(const uint64_t& _deletingCount)
{
    m_deletingCount = _deletingCount;
    m_deletingCountHasBeenSet = true;
}

bool ComputeNodeMetrics::DeletingCountHasBeenSet() const
{
    return m_deletingCountHasBeenSet;
}

uint64_t ComputeNodeMetrics::GetAbnormalCount() const
{
    return m_abnormalCount;
}

void ComputeNodeMetrics::SetAbnormalCount(const uint64_t& _abnormalCount)
{
    m_abnormalCount = _abnormalCount;
    m_abnormalCountHasBeenSet = true;
}

bool ComputeNodeMetrics::AbnormalCountHasBeenSet() const
{
    return m_abnormalCountHasBeenSet;
}

