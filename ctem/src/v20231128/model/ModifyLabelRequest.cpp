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

#include <tencentcloud/ctem/v20231128/model/ModifyLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

ModifyLabelRequest::ModifyLabelRequest() :
    m_moduleHasBeenSet(false),
    m_customerIdListHasBeenSet(false),
    m_idHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_isAggregationHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_idsHasBeenSet(false)
{
}

string ModifyLabelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_customerIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerIdList.begin(); itr != m_customerIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_isAggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAggregation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAggregation, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLabelRequest::GetModule() const
{
    return m_module;
}

void ModifyLabelRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyLabelRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<int64_t> ModifyLabelRequest::GetCustomerIdList() const
{
    return m_customerIdList;
}

void ModifyLabelRequest::SetCustomerIdList(const vector<int64_t>& _customerIdList)
{
    m_customerIdList = _customerIdList;
    m_customerIdListHasBeenSet = true;
}

bool ModifyLabelRequest::CustomerIdListHasBeenSet() const
{
    return m_customerIdListHasBeenSet;
}

int64_t ModifyLabelRequest::GetId() const
{
    return m_id;
}

void ModifyLabelRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyLabelRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ModifyLabelRequest::GetCustomerId() const
{
    return m_customerId;
}

void ModifyLabelRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool ModifyLabelRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

bool ModifyLabelRequest::GetIsAggregation() const
{
    return m_isAggregation;
}

void ModifyLabelRequest::SetIsAggregation(const bool& _isAggregation)
{
    m_isAggregation = _isAggregation;
    m_isAggregationHasBeenSet = true;
}

bool ModifyLabelRequest::IsAggregationHasBeenSet() const
{
    return m_isAggregationHasBeenSet;
}

string ModifyLabelRequest::GetLabels() const
{
    return m_labels;
}

void ModifyLabelRequest::SetLabels(const string& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyLabelRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<int64_t> ModifyLabelRequest::GetIds() const
{
    return m_ids;
}

void ModifyLabelRequest::SetIds(const vector<int64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyLabelRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}


