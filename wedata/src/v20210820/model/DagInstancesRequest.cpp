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

#include <tencentcloud/wedata/v20210820/model/DagInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DagInstancesRequest::DagInstancesRequest() :
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
    m_isCountHasBeenSet(false)
{
}

string DagInstancesRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<InstanceOpsDto> DagInstancesRequest::GetInstances() const
{
    return m_instances;
}

void DagInstancesRequest::SetInstances(const vector<InstanceOpsDto>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool DagInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

bool DagInstancesRequest::GetCheckFather() const
{
    return m_checkFather;
}

void DagInstancesRequest::SetCheckFather(const bool& _checkFather)
{
    m_checkFather = _checkFather;
    m_checkFatherHasBeenSet = true;
}

bool DagInstancesRequest::CheckFatherHasBeenSet() const
{
    return m_checkFatherHasBeenSet;
}

string DagInstancesRequest::GetRerunType() const
{
    return m_rerunType;
}

void DagInstancesRequest::SetRerunType(const string& _rerunType)
{
    m_rerunType = _rerunType;
    m_rerunTypeHasBeenSet = true;
}

bool DagInstancesRequest::RerunTypeHasBeenSet() const
{
    return m_rerunTypeHasBeenSet;
}

string DagInstancesRequest::GetDependentWay() const
{
    return m_dependentWay;
}

void DagInstancesRequest::SetDependentWay(const string& _dependentWay)
{
    m_dependentWay = _dependentWay;
    m_dependentWayHasBeenSet = true;
}

bool DagInstancesRequest::DependentWayHasBeenSet() const
{
    return m_dependentWayHasBeenSet;
}

bool DagInstancesRequest::GetSkipEventListening() const
{
    return m_skipEventListening;
}

void DagInstancesRequest::SetSkipEventListening(const bool& _skipEventListening)
{
    m_skipEventListening = _skipEventListening;
    m_skipEventListeningHasBeenSet = true;
}

bool DagInstancesRequest::SkipEventListeningHasBeenSet() const
{
    return m_skipEventListeningHasBeenSet;
}

string DagInstancesRequest::GetSonInstanceType() const
{
    return m_sonInstanceType;
}

void DagInstancesRequest::SetSonInstanceType(const string& _sonInstanceType)
{
    m_sonInstanceType = _sonInstanceType;
    m_sonInstanceTypeHasBeenSet = true;
}

bool DagInstancesRequest::SonInstanceTypeHasBeenSet() const
{
    return m_sonInstanceTypeHasBeenSet;
}

InstanceApiOpsRequest DagInstancesRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void DagInstancesRequest::SetSearchCondition(const InstanceApiOpsRequest& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool DagInstancesRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

string DagInstancesRequest::GetOptType() const
{
    return m_optType;
}

void DagInstancesRequest::SetOptType(const string& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool DagInstancesRequest::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

string DagInstancesRequest::GetOperatorName() const
{
    return m_operatorName;
}

void DagInstancesRequest::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool DagInstancesRequest::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string DagInstancesRequest::GetOperatorId() const
{
    return m_operatorId;
}

void DagInstancesRequest::SetOperatorId(const string& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool DagInstancesRequest::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string DagInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void DagInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DagInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DagInstancesRequest::GetProjectIdent() const
{
    return m_projectIdent;
}

void DagInstancesRequest::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool DagInstancesRequest::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string DagInstancesRequest::GetProjectName() const
{
    return m_projectName;
}

void DagInstancesRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DagInstancesRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t DagInstancesRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DagInstancesRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DagInstancesRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DagInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DagInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DagInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DagInstancesRequest::GetCount() const
{
    return m_count;
}

void DagInstancesRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DagInstancesRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

ProjectBaseInfoOpsRequest DagInstancesRequest::GetRequestBaseInfo() const
{
    return m_requestBaseInfo;
}

void DagInstancesRequest::SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo)
{
    m_requestBaseInfo = _requestBaseInfo;
    m_requestBaseInfoHasBeenSet = true;
}

bool DagInstancesRequest::RequestBaseInfoHasBeenSet() const
{
    return m_requestBaseInfoHasBeenSet;
}

bool DagInstancesRequest::GetIsCount() const
{
    return m_isCount;
}

void DagInstancesRequest::SetIsCount(const bool& _isCount)
{
    m_isCount = _isCount;
    m_isCountHasBeenSet = true;
}

bool DagInstancesRequest::IsCountHasBeenSet() const
{
    return m_isCountHasBeenSet;
}


