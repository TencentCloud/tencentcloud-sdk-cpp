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

#include <tencentcloud/tcss/v20201101/model/CreateAccessControlsRuleExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateAccessControlsRuleExportJobRequest::CreateAccessControlsRuleExportJobRequest() :
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_exportFieldHasBeenSet(false)
{
}

string CreateAccessControlsRuleExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_by.begin(); itr != m_by.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exportFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exportField.begin(); itr != m_exportField.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<RunTimeFilters> CreateAccessControlsRuleExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateAccessControlsRuleExportJobRequest::SetFilters(const vector<RunTimeFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateAccessControlsRuleExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string CreateAccessControlsRuleExportJobRequest::GetOrder() const
{
    return m_order;
}

void CreateAccessControlsRuleExportJobRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateAccessControlsRuleExportJobRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> CreateAccessControlsRuleExportJobRequest::GetBy() const
{
    return m_by;
}

void CreateAccessControlsRuleExportJobRequest::SetBy(const vector<string>& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool CreateAccessControlsRuleExportJobRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

vector<string> CreateAccessControlsRuleExportJobRequest::GetExportField() const
{
    return m_exportField;
}

void CreateAccessControlsRuleExportJobRequest::SetExportField(const vector<string>& _exportField)
{
    m_exportField = _exportField;
    m_exportFieldHasBeenSet = true;
}

bool CreateAccessControlsRuleExportJobRequest::ExportFieldHasBeenSet() const
{
    return m_exportFieldHasBeenSet;
}


