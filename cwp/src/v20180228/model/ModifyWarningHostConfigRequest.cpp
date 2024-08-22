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

#include <tencentcloud/cwp/v20180228/model/ModifyWarningHostConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWarningHostConfigRequest::ModifyWarningHostConfigRequest() :
    m_typeHasBeenSet(false),
    m_hostRangeHasBeenSet(false),
    m_itemLabelsHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_itemLabelIdsHasBeenSet(false),
    m_excludedQuuidsHasBeenSet(false)
{
}

string ModifyWarningHostConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_hostRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hostRange, allocator);
    }

    if (m_itemLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemLabels.begin(); itr != m_itemLabels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_itemLabelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemLabelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemLabelIds.begin(); itr != m_itemLabelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludedQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludedQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludedQuuids.begin(); itr != m_excludedQuuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWarningHostConfigRequest::GetType() const
{
    return m_type;
}

void ModifyWarningHostConfigRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyWarningHostConfigRequest::GetHostRange() const
{
    return m_hostRange;
}

void ModifyWarningHostConfigRequest::SetHostRange(const int64_t& _hostRange)
{
    m_hostRange = _hostRange;
    m_hostRangeHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::HostRangeHasBeenSet() const
{
    return m_hostRangeHasBeenSet;
}

vector<string> ModifyWarningHostConfigRequest::GetItemLabels() const
{
    return m_itemLabels;
}

void ModifyWarningHostConfigRequest::SetItemLabels(const vector<string>& _itemLabels)
{
    m_itemLabels = _itemLabels;
    m_itemLabelsHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::ItemLabelsHasBeenSet() const
{
    return m_itemLabelsHasBeenSet;
}

vector<string> ModifyWarningHostConfigRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyWarningHostConfigRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> ModifyWarningHostConfigRequest::GetItemLabelIds() const
{
    return m_itemLabelIds;
}

void ModifyWarningHostConfigRequest::SetItemLabelIds(const vector<string>& _itemLabelIds)
{
    m_itemLabelIds = _itemLabelIds;
    m_itemLabelIdsHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::ItemLabelIdsHasBeenSet() const
{
    return m_itemLabelIdsHasBeenSet;
}

vector<string> ModifyWarningHostConfigRequest::GetExcludedQuuids() const
{
    return m_excludedQuuids;
}

void ModifyWarningHostConfigRequest::SetExcludedQuuids(const vector<string>& _excludedQuuids)
{
    m_excludedQuuids = _excludedQuuids;
    m_excludedQuuidsHasBeenSet = true;
}

bool ModifyWarningHostConfigRequest::ExcludedQuuidsHasBeenSet() const
{
    return m_excludedQuuidsHasBeenSet;
}


