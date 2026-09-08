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

#include <tencentcloud/cls/v20201016/model/ProductIngestTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ProductIngestTaskDetail::ProductIngestTaskDetail() :
    m_taskIdHasBeenSet(false),
    m_productIngestTaskItemHasBeenSet(false),
    m_selectionModeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eBPFCollectRuleHasBeenSet(false)
{
}

CoreInternalOutcome ProductIngestTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ProductIngestTaskItem") && !value["ProductIngestTaskItem"].IsNull())
    {
        if (!value["ProductIngestTaskItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.ProductIngestTaskItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productIngestTaskItem.Deserialize(value["ProductIngestTaskItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productIngestTaskItemHasBeenSet = true;
    }

    if (value.HasMember("SelectionMode") && !value["SelectionMode"].IsNull())
    {
        if (!value["SelectionMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.SelectionMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_selectionMode = value["SelectionMode"].GetUint64();
        m_selectionModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.Tags` is not array type"));

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

    if (value.HasMember("EBPFCollectRule") && !value["EBPFCollectRule"].IsNull())
    {
        if (!value["EBPFCollectRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskDetail.EBPFCollectRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eBPFCollectRule.Deserialize(value["EBPFCollectRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eBPFCollectRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductIngestTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIngestTaskItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIngestTaskItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productIngestTaskItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_selectionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectionMode, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_eBPFCollectRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EBPFCollectRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eBPFCollectRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProductIngestTaskDetail::GetTaskId() const
{
    return m_taskId;
}

void ProductIngestTaskDetail::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProductIngestTaskDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

ProductIngestTaskItem ProductIngestTaskDetail::GetProductIngestTaskItem() const
{
    return m_productIngestTaskItem;
}

void ProductIngestTaskDetail::SetProductIngestTaskItem(const ProductIngestTaskItem& _productIngestTaskItem)
{
    m_productIngestTaskItem = _productIngestTaskItem;
    m_productIngestTaskItemHasBeenSet = true;
}

bool ProductIngestTaskDetail::ProductIngestTaskItemHasBeenSet() const
{
    return m_productIngestTaskItemHasBeenSet;
}

uint64_t ProductIngestTaskDetail::GetSelectionMode() const
{
    return m_selectionMode;
}

void ProductIngestTaskDetail::SetSelectionMode(const uint64_t& _selectionMode)
{
    m_selectionMode = _selectionMode;
    m_selectionModeHasBeenSet = true;
}

bool ProductIngestTaskDetail::SelectionModeHasBeenSet() const
{
    return m_selectionModeHasBeenSet;
}

vector<string> ProductIngestTaskDetail::GetInstanceIds() const
{
    return m_instanceIds;
}

void ProductIngestTaskDetail::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ProductIngestTaskDetail::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<Tag> ProductIngestTaskDetail::GetTags() const
{
    return m_tags;
}

void ProductIngestTaskDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ProductIngestTaskDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

EBPFCollectRule ProductIngestTaskDetail::GetEBPFCollectRule() const
{
    return m_eBPFCollectRule;
}

void ProductIngestTaskDetail::SetEBPFCollectRule(const EBPFCollectRule& _eBPFCollectRule)
{
    m_eBPFCollectRule = _eBPFCollectRule;
    m_eBPFCollectRuleHasBeenSet = true;
}

bool ProductIngestTaskDetail::EBPFCollectRuleHasBeenSet() const
{
    return m_eBPFCollectRuleHasBeenSet;
}

