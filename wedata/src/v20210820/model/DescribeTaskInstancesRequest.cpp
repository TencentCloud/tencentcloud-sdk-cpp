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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskInstancesRequest::DescribeTaskInstancesRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workflowIdListHasBeenSet(false),
    m_workflowNameListHasBeenSet(false),
    m_dateFromHasBeenSet(false),
    m_dateToHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_taskNameListHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_taskTypeIdListHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_taskCycleUnitListHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_orderFieldsHasBeenSet(false)
{
}

string DescribeTaskInstancesRequest::ToJsonString() const
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

    if (m_workflowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIdList.begin(); itr != m_workflowIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowNameList.begin(); itr != m_workflowNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_dateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNameList.begin(); itr != m_taskNameList.end(); ++itr)
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

    if (m_taskTypeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeIdList.begin(); itr != m_taskTypeIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskCycleUnitListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleUnitList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskCycleUnitList.begin(); itr != m_taskCycleUnitList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
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


string DescribeTaskInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeTaskInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeTaskInstancesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeTaskInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTaskInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetWorkflowIdList() const
{
    return m_workflowIdList;
}

void DescribeTaskInstancesRequest::SetWorkflowIdList(const vector<string>& _workflowIdList)
{
    m_workflowIdList = _workflowIdList;
    m_workflowIdListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::WorkflowIdListHasBeenSet() const
{
    return m_workflowIdListHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetWorkflowNameList() const
{
    return m_workflowNameList;
}

void DescribeTaskInstancesRequest::SetWorkflowNameList(const vector<string>& _workflowNameList)
{
    m_workflowNameList = _workflowNameList;
    m_workflowNameListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::WorkflowNameListHasBeenSet() const
{
    return m_workflowNameListHasBeenSet;
}

string DescribeTaskInstancesRequest::GetDateFrom() const
{
    return m_dateFrom;
}

void DescribeTaskInstancesRequest::SetDateFrom(const string& _dateFrom)
{
    m_dateFrom = _dateFrom;
    m_dateFromHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::DateFromHasBeenSet() const
{
    return m_dateFromHasBeenSet;
}

string DescribeTaskInstancesRequest::GetDateTo() const
{
    return m_dateTo;
}

void DescribeTaskInstancesRequest::SetDateTo(const string& _dateTo)
{
    m_dateTo = _dateTo;
    m_dateToHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::DateToHasBeenSet() const
{
    return m_dateToHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void DescribeTaskInstancesRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetTaskNameList() const
{
    return m_taskNameList;
}

void DescribeTaskInstancesRequest::SetTaskNameList(const vector<string>& _taskNameList)
{
    m_taskNameList = _taskNameList;
    m_taskNameListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::TaskNameListHasBeenSet() const
{
    return m_taskNameListHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void DescribeTaskInstancesRequest::SetInChargeList(const vector<string>& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

vector<int64_t> DescribeTaskInstancesRequest::GetTaskTypeIdList() const
{
    return m_taskTypeIdList;
}

void DescribeTaskInstancesRequest::SetTaskTypeIdList(const vector<int64_t>& _taskTypeIdList)
{
    m_taskTypeIdList = _taskTypeIdList;
    m_taskTypeIdListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::TaskTypeIdListHasBeenSet() const
{
    return m_taskTypeIdListHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetStateList() const
{
    return m_stateList;
}

void DescribeTaskInstancesRequest::SetStateList(const vector<string>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

vector<string> DescribeTaskInstancesRequest::GetTaskCycleUnitList() const
{
    return m_taskCycleUnitList;
}

void DescribeTaskInstancesRequest::SetTaskCycleUnitList(const vector<string>& _taskCycleUnitList)
{
    m_taskCycleUnitList = _taskCycleUnitList;
    m_taskCycleUnitListHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::TaskCycleUnitListHasBeenSet() const
{
    return m_taskCycleUnitListHasBeenSet;
}

int64_t DescribeTaskInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeTaskInstancesRequest::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<OrderField> DescribeTaskInstancesRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeTaskInstancesRequest::SetOrderFields(const vector<OrderField>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeTaskInstancesRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}


