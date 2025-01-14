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

#include <tencentcloud/wedata/v20210820/model/RunRerunScheduleInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RunRerunScheduleInstancesRequest::RunRerunScheduleInstancesRequest() :
    m_instancesHasBeenSet(false),
    m_checkFatherHasBeenSet(false),
    m_rerunTypeHasBeenSet(false),
    m_dependentWayHasBeenSet(false),
    m_skipEventListeningHasBeenSet(false),
    m_sonInstanceTypeHasBeenSet(false),
    m_searchConditionHasBeenSet(false),
    m_optTypeHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_operatorIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_requestBaseInfoHasBeenSet(false),
    m_isCountHasBeenSet(false),
    m_asyncModeHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_sameSelfDependTypeHasBeenSet(false),
    m_parallelNumHasBeenSet(false),
    m_sameSelfWorkflowDependTypeHasBeenSet(false),
    m_selfWorkflowDependencyHasBeenSet(false),
    m_dataTimeOrderHasBeenSet(false),
    m_reDoParamsHasBeenSet(false)
{
}

string RunRerunScheduleInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_checkFatherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFather";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkFather, allocator);
    }

    if (m_rerunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rerunType.c_str(), allocator).Move(), allocator);
    }

    if (m_dependentWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependentWay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dependentWay.c_str(), allocator).Move(), allocator);
    }

    if (m_skipEventListeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipEventListening";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipEventListening, allocator);
    }

    if (m_sonInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sonInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_searchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_requestBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestBaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCount, allocator);
    }

    if (m_asyncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncMode, allocator);
    }

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_sameSelfDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameSelfDependType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sameSelfDependType, allocator);
    }

    if (m_parallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParallelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parallelNum, allocator);
    }

    if (m_sameSelfWorkflowDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameSelfWorkflowDependType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sameSelfWorkflowDependType, allocator);
    }

    if (m_selfWorkflowDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfWorkflowDependency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selfWorkflowDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataTimeOrder, allocator);
    }

    if (m_reDoParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReDoParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reDoParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<InstanceOpsDto> RunRerunScheduleInstancesRequest::GetInstances() const
{
    return m_instances;
}

void RunRerunScheduleInstancesRequest::SetInstances(const vector<InstanceOpsDto>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetCheckFather() const
{
    return m_checkFather;
}

void RunRerunScheduleInstancesRequest::SetCheckFather(const bool& _checkFather)
{
    m_checkFather = _checkFather;
    m_checkFatherHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::CheckFatherHasBeenSet() const
{
    return m_checkFatherHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetRerunType() const
{
    return m_rerunType;
}

void RunRerunScheduleInstancesRequest::SetRerunType(const string& _rerunType)
{
    m_rerunType = _rerunType;
    m_rerunTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::RerunTypeHasBeenSet() const
{
    return m_rerunTypeHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetDependentWay() const
{
    return m_dependentWay;
}

void RunRerunScheduleInstancesRequest::SetDependentWay(const string& _dependentWay)
{
    m_dependentWay = _dependentWay;
    m_dependentWayHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::DependentWayHasBeenSet() const
{
    return m_dependentWayHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetSkipEventListening() const
{
    return m_skipEventListening;
}

void RunRerunScheduleInstancesRequest::SetSkipEventListening(const bool& _skipEventListening)
{
    m_skipEventListening = _skipEventListening;
    m_skipEventListeningHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SkipEventListeningHasBeenSet() const
{
    return m_skipEventListeningHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetSonInstanceType() const
{
    return m_sonInstanceType;
}

void RunRerunScheduleInstancesRequest::SetSonInstanceType(const string& _sonInstanceType)
{
    m_sonInstanceType = _sonInstanceType;
    m_sonInstanceTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SonInstanceTypeHasBeenSet() const
{
    return m_sonInstanceTypeHasBeenSet;
}

InstanceApiOpsRequest RunRerunScheduleInstancesRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void RunRerunScheduleInstancesRequest::SetSearchCondition(const InstanceApiOpsRequest& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetOptType() const
{
    return m_optType;
}

void RunRerunScheduleInstancesRequest::SetOptType(const string& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetOperatorName() const
{
    return m_operatorName;
}

void RunRerunScheduleInstancesRequest::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetOperatorId() const
{
    return m_operatorId;
}

void RunRerunScheduleInstancesRequest::SetOperatorId(const string& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void RunRerunScheduleInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetProjectIdent() const
{
    return m_projectIdent;
}

void RunRerunScheduleInstancesRequest::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetProjectName() const
{
    return m_projectName;
}

void RunRerunScheduleInstancesRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t RunRerunScheduleInstancesRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void RunRerunScheduleInstancesRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t RunRerunScheduleInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void RunRerunScheduleInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t RunRerunScheduleInstancesRequest::GetCount() const
{
    return m_count;
}

void RunRerunScheduleInstancesRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

ProjectBaseInfoOpsRequest RunRerunScheduleInstancesRequest::GetRequestBaseInfo() const
{
    return m_requestBaseInfo;
}

void RunRerunScheduleInstancesRequest::SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo)
{
    m_requestBaseInfo = _requestBaseInfo;
    m_requestBaseInfoHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::RequestBaseInfoHasBeenSet() const
{
    return m_requestBaseInfoHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetIsCount() const
{
    return m_isCount;
}

void RunRerunScheduleInstancesRequest::SetIsCount(const bool& _isCount)
{
    m_isCount = _isCount;
    m_isCountHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::IsCountHasBeenSet() const
{
    return m_isCountHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetAsyncMode() const
{
    return m_asyncMode;
}

void RunRerunScheduleInstancesRequest::SetAsyncMode(const bool& _asyncMode)
{
    m_asyncMode = _asyncMode;
    m_asyncModeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::AsyncModeHasBeenSet() const
{
    return m_asyncModeHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetCheckParentType() const
{
    return m_checkParentType;
}

void RunRerunScheduleInstancesRequest::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetSameSelfDependType() const
{
    return m_sameSelfDependType;
}

void RunRerunScheduleInstancesRequest::SetSameSelfDependType(const bool& _sameSelfDependType)
{
    m_sameSelfDependType = _sameSelfDependType;
    m_sameSelfDependTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SameSelfDependTypeHasBeenSet() const
{
    return m_sameSelfDependTypeHasBeenSet;
}

int64_t RunRerunScheduleInstancesRequest::GetParallelNum() const
{
    return m_parallelNum;
}

void RunRerunScheduleInstancesRequest::SetParallelNum(const int64_t& _parallelNum)
{
    m_parallelNum = _parallelNum;
    m_parallelNumHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::ParallelNumHasBeenSet() const
{
    return m_parallelNumHasBeenSet;
}

bool RunRerunScheduleInstancesRequest::GetSameSelfWorkflowDependType() const
{
    return m_sameSelfWorkflowDependType;
}

void RunRerunScheduleInstancesRequest::SetSameSelfWorkflowDependType(const bool& _sameSelfWorkflowDependType)
{
    m_sameSelfWorkflowDependType = _sameSelfWorkflowDependType;
    m_sameSelfWorkflowDependTypeHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SameSelfWorkflowDependTypeHasBeenSet() const
{
    return m_sameSelfWorkflowDependTypeHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetSelfWorkflowDependency() const
{
    return m_selfWorkflowDependency;
}

void RunRerunScheduleInstancesRequest::SetSelfWorkflowDependency(const string& _selfWorkflowDependency)
{
    m_selfWorkflowDependency = _selfWorkflowDependency;
    m_selfWorkflowDependencyHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::SelfWorkflowDependencyHasBeenSet() const
{
    return m_selfWorkflowDependencyHasBeenSet;
}

int64_t RunRerunScheduleInstancesRequest::GetDataTimeOrder() const
{
    return m_dataTimeOrder;
}

void RunRerunScheduleInstancesRequest::SetDataTimeOrder(const int64_t& _dataTimeOrder)
{
    m_dataTimeOrder = _dataTimeOrder;
    m_dataTimeOrderHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::DataTimeOrderHasBeenSet() const
{
    return m_dataTimeOrderHasBeenSet;
}

string RunRerunScheduleInstancesRequest::GetReDoParams() const
{
    return m_reDoParams;
}

void RunRerunScheduleInstancesRequest::SetReDoParams(const string& _reDoParams)
{
    m_reDoParams = _reDoParams;
    m_reDoParamsHasBeenSet = true;
}

bool RunRerunScheduleInstancesRequest::ReDoParamsHasBeenSet() const
{
    return m_reDoParamsHasBeenSet;
}


