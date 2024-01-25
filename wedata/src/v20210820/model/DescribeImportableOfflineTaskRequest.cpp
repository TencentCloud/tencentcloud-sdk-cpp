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

#include <tencentcloud/wedata/v20210820/model/DescribeImportableOfflineTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeImportableOfflineTaskRequest::DescribeImportableOfflineTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_createrListHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_orderFieldsHasBeenSet(false)
{
}

string DescribeImportableOfflineTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_createrListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreaterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_createrList.begin(); itr != m_createrList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inChargeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeList.begin(); itr != m_inChargeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderFields.begin(); itr != m_orderFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeImportableOfflineTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeImportableOfflineTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeImportableOfflineTaskRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeImportableOfflineTaskRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeImportableOfflineTaskRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeImportableOfflineTaskRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeImportableOfflineTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeImportableOfflineTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

vector<string> DescribeImportableOfflineTaskRequest::GetCreaterList() const
{
    return m_createrList;
}

void DescribeImportableOfflineTaskRequest::SetCreaterList(const vector<string>& _createrList)
{
    m_createrList = _createrList;
    m_createrListHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::CreaterListHasBeenSet() const
{
    return m_createrListHasBeenSet;
}

vector<string> DescribeImportableOfflineTaskRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void DescribeImportableOfflineTaskRequest::SetInChargeList(const vector<string>& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

vector<OrderField> DescribeImportableOfflineTaskRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeImportableOfflineTaskRequest::SetOrderFields(const vector<OrderField>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeImportableOfflineTaskRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}


