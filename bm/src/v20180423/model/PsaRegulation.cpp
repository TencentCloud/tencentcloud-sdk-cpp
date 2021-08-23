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

#include <tencentcloud/bm/v20180423/model/PsaRegulation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

PsaRegulation::PsaRegulation() :
    m_psaIdHasBeenSet(false),
    m_psaNameHasBeenSet(false),
    m_tagCountHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_repairCountHasBeenSet(false),
    m_repairLimitHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_psaDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskTypeIdsHasBeenSet(false)
{
}

CoreInternalOutcome PsaRegulation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PsaId") && !value["PsaId"].IsNull())
    {
        if (!value["PsaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.PsaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psaId = string(value["PsaId"].GetString());
        m_psaIdHasBeenSet = true;
    }

    if (value.HasMember("PsaName") && !value["PsaName"].IsNull())
    {
        if (!value["PsaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.PsaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psaName = string(value["PsaName"].GetString());
        m_psaNameHasBeenSet = true;
    }

    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.TagCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetUint64();
        m_tagCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RepairCount") && !value["RepairCount"].IsNull())
    {
        if (!value["RepairCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.RepairCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repairCount = value["RepairCount"].GetUint64();
        m_repairCountHasBeenSet = true;
    }

    if (value.HasMember("RepairLimit") && !value["RepairLimit"].IsNull())
    {
        if (!value["RepairLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.RepairLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repairLimit = value["RepairLimit"].GetUint64();
        m_repairLimitHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PsaDescription") && !value["PsaDescription"].IsNull())
    {
        if (!value["PsaDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.PsaDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psaDescription = string(value["PsaDescription"].GetString());
        m_psaDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeIds") && !value["TaskTypeIds"].IsNull())
    {
        if (!value["TaskTypeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PsaRegulation.TaskTypeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskTypeIds.push_back((*itr).GetUint64());
        }
        m_taskTypeIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PsaRegulation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_psaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psaId.c_str(), allocator).Move(), allocator);
    }

    if (m_psaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_repairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repairCount, allocator);
    }

    if (m_repairLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repairLimit, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_psaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psaDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskTypeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeIds.begin(); itr != m_taskTypeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string PsaRegulation::GetPsaId() const
{
    return m_psaId;
}

void PsaRegulation::SetPsaId(const string& _psaId)
{
    m_psaId = _psaId;
    m_psaIdHasBeenSet = true;
}

bool PsaRegulation::PsaIdHasBeenSet() const
{
    return m_psaIdHasBeenSet;
}

string PsaRegulation::GetPsaName() const
{
    return m_psaName;
}

void PsaRegulation::SetPsaName(const string& _psaName)
{
    m_psaName = _psaName;
    m_psaNameHasBeenSet = true;
}

bool PsaRegulation::PsaNameHasBeenSet() const
{
    return m_psaNameHasBeenSet;
}

uint64_t PsaRegulation::GetTagCount() const
{
    return m_tagCount;
}

void PsaRegulation::SetTagCount(const uint64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool PsaRegulation::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

uint64_t PsaRegulation::GetInstanceCount() const
{
    return m_instanceCount;
}

void PsaRegulation::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool PsaRegulation::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t PsaRegulation::GetRepairCount() const
{
    return m_repairCount;
}

void PsaRegulation::SetRepairCount(const uint64_t& _repairCount)
{
    m_repairCount = _repairCount;
    m_repairCountHasBeenSet = true;
}

bool PsaRegulation::RepairCountHasBeenSet() const
{
    return m_repairCountHasBeenSet;
}

uint64_t PsaRegulation::GetRepairLimit() const
{
    return m_repairLimit;
}

void PsaRegulation::SetRepairLimit(const uint64_t& _repairLimit)
{
    m_repairLimit = _repairLimit;
    m_repairLimitHasBeenSet = true;
}

bool PsaRegulation::RepairLimitHasBeenSet() const
{
    return m_repairLimitHasBeenSet;
}

string PsaRegulation::GetCreateTime() const
{
    return m_createTime;
}

void PsaRegulation::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PsaRegulation::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PsaRegulation::GetPsaDescription() const
{
    return m_psaDescription;
}

void PsaRegulation::SetPsaDescription(const string& _psaDescription)
{
    m_psaDescription = _psaDescription;
    m_psaDescriptionHasBeenSet = true;
}

bool PsaRegulation::PsaDescriptionHasBeenSet() const
{
    return m_psaDescriptionHasBeenSet;
}

vector<Tag> PsaRegulation::GetTags() const
{
    return m_tags;
}

void PsaRegulation::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PsaRegulation::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<uint64_t> PsaRegulation::GetTaskTypeIds() const
{
    return m_taskTypeIds;
}

void PsaRegulation::SetTaskTypeIds(const vector<uint64_t>& _taskTypeIds)
{
    m_taskTypeIds = _taskTypeIds;
    m_taskTypeIdsHasBeenSet = true;
}

bool PsaRegulation::TaskTypeIdsHasBeenSet() const
{
    return m_taskTypeIdsHasBeenSet;
}

