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

#include <tencentcloud/wedata/v20210820/model/CreateOpsMakePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateOpsMakePlanRequest::CreateOpsMakePlanRequest() :
    m_projectIdHasBeenSet(false),
    m_makeNameHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_makeDatetimeListHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_checkParentHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_selfDependenceHasBeenSet(false),
    m_parallelNumHasBeenSet(false),
    m_sameCycleHasBeenSet(false),
    m_targetTaskCycleHasBeenSet(false),
    m_targetTaskActionHasBeenSet(false),
    m_mapParamListHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sameSelfDependTypeHasBeenSet(false),
    m_sourceTaskCycleHasBeenSet(false),
    m_schedulerResourceGroupHasBeenSet(false),
    m_integrationResourceGroupHasBeenSet(false),
    m_schedulerResourceGroupNameHasBeenSet(false),
    m_integrationResourceGroupNameHasBeenSet(false),
    m_makeExtListHasBeenSet(false),
    m_sameSelfWorkflowDependTypeHasBeenSet(false),
    m_selfWorkflowDependencyHasBeenSet(false),
    m_makeTypeHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_makeCheckEventTypeHasBeenSet(false)
{
}

string CreateOpsMakePlanRequest::ToJsonString() const
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

    if (m_makeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_makeName.c_str(), allocator).Move(), allocator);
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

    if (m_makeDatetimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeDatetimeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_makeDatetimeList.begin(); itr != m_makeDatetimeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_checkParentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkParent, allocator);
    }

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDependenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDependence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selfDependence.c_str(), allocator).Move(), allocator);
    }

    if (m_parallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParallelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parallelNum, allocator);
    }

    if (m_sameCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sameCycle, allocator);
    }

    if (m_targetTaskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTaskCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetTaskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTaskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetTaskAction, allocator);
    }

    if (m_mapParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapParamList.begin(); itr != m_mapParamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sameSelfDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameSelfDependType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sameSelfDependType, allocator);
    }

    if (m_sourceTaskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTaskCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceTaskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_makeExtListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeExtList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_makeExtList.begin(); itr != m_makeExtList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_makeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_makeType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusList.c_str(), allocator).Move(), allocator);
    }

    if (m_makeCheckEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeCheckEventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_makeCheckEventType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOpsMakePlanRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateOpsMakePlanRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateOpsMakePlanRequest::GetMakeName() const
{
    return m_makeName;
}

void CreateOpsMakePlanRequest::SetMakeName(const string& _makeName)
{
    m_makeName = _makeName;
    m_makeNameHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MakeNameHasBeenSet() const
{
    return m_makeNameHasBeenSet;
}

vector<string> CreateOpsMakePlanRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void CreateOpsMakePlanRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

vector<CreateMakeDatetimeInfo> CreateOpsMakePlanRequest::GetMakeDatetimeList() const
{
    return m_makeDatetimeList;
}

void CreateOpsMakePlanRequest::SetMakeDatetimeList(const vector<CreateMakeDatetimeInfo>& _makeDatetimeList)
{
    m_makeDatetimeList = _makeDatetimeList;
    m_makeDatetimeListHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MakeDatetimeListHasBeenSet() const
{
    return m_makeDatetimeListHasBeenSet;
}

string CreateOpsMakePlanRequest::GetProjectIdent() const
{
    return m_projectIdent;
}

void CreateOpsMakePlanRequest::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

bool CreateOpsMakePlanRequest::GetCheckParent() const
{
    return m_checkParent;
}

void CreateOpsMakePlanRequest::SetCheckParent(const bool& _checkParent)
{
    m_checkParent = _checkParent;
    m_checkParentHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::CheckParentHasBeenSet() const
{
    return m_checkParentHasBeenSet;
}

string CreateOpsMakePlanRequest::GetCheckParentType() const
{
    return m_checkParentType;
}

void CreateOpsMakePlanRequest::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

string CreateOpsMakePlanRequest::GetProjectName() const
{
    return m_projectName;
}

void CreateOpsMakePlanRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string CreateOpsMakePlanRequest::GetSelfDependence() const
{
    return m_selfDependence;
}

void CreateOpsMakePlanRequest::SetSelfDependence(const string& _selfDependence)
{
    m_selfDependence = _selfDependence;
    m_selfDependenceHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SelfDependenceHasBeenSet() const
{
    return m_selfDependenceHasBeenSet;
}

int64_t CreateOpsMakePlanRequest::GetParallelNum() const
{
    return m_parallelNum;
}

void CreateOpsMakePlanRequest::SetParallelNum(const int64_t& _parallelNum)
{
    m_parallelNum = _parallelNum;
    m_parallelNumHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::ParallelNumHasBeenSet() const
{
    return m_parallelNumHasBeenSet;
}

bool CreateOpsMakePlanRequest::GetSameCycle() const
{
    return m_sameCycle;
}

void CreateOpsMakePlanRequest::SetSameCycle(const bool& _sameCycle)
{
    m_sameCycle = _sameCycle;
    m_sameCycleHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SameCycleHasBeenSet() const
{
    return m_sameCycleHasBeenSet;
}

string CreateOpsMakePlanRequest::GetTargetTaskCycle() const
{
    return m_targetTaskCycle;
}

void CreateOpsMakePlanRequest::SetTargetTaskCycle(const string& _targetTaskCycle)
{
    m_targetTaskCycle = _targetTaskCycle;
    m_targetTaskCycleHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::TargetTaskCycleHasBeenSet() const
{
    return m_targetTaskCycleHasBeenSet;
}

int64_t CreateOpsMakePlanRequest::GetTargetTaskAction() const
{
    return m_targetTaskAction;
}

void CreateOpsMakePlanRequest::SetTargetTaskAction(const int64_t& _targetTaskAction)
{
    m_targetTaskAction = _targetTaskAction;
    m_targetTaskActionHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::TargetTaskActionHasBeenSet() const
{
    return m_targetTaskActionHasBeenSet;
}

vector<StrToStrMap> CreateOpsMakePlanRequest::GetMapParamList() const
{
    return m_mapParamList;
}

void CreateOpsMakePlanRequest::SetMapParamList(const vector<StrToStrMap>& _mapParamList)
{
    m_mapParamList = _mapParamList;
    m_mapParamListHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MapParamListHasBeenSet() const
{
    return m_mapParamListHasBeenSet;
}

string CreateOpsMakePlanRequest::GetCreatorId() const
{
    return m_creatorId;
}

void CreateOpsMakePlanRequest::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string CreateOpsMakePlanRequest::GetCreator() const
{
    return m_creator;
}

void CreateOpsMakePlanRequest::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string CreateOpsMakePlanRequest::GetRemark() const
{
    return m_remark;
}

void CreateOpsMakePlanRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool CreateOpsMakePlanRequest::GetSameSelfDependType() const
{
    return m_sameSelfDependType;
}

void CreateOpsMakePlanRequest::SetSameSelfDependType(const bool& _sameSelfDependType)
{
    m_sameSelfDependType = _sameSelfDependType;
    m_sameSelfDependTypeHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SameSelfDependTypeHasBeenSet() const
{
    return m_sameSelfDependTypeHasBeenSet;
}

string CreateOpsMakePlanRequest::GetSourceTaskCycle() const
{
    return m_sourceTaskCycle;
}

void CreateOpsMakePlanRequest::SetSourceTaskCycle(const string& _sourceTaskCycle)
{
    m_sourceTaskCycle = _sourceTaskCycle;
    m_sourceTaskCycleHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SourceTaskCycleHasBeenSet() const
{
    return m_sourceTaskCycleHasBeenSet;
}

string CreateOpsMakePlanRequest::GetSchedulerResourceGroup() const
{
    return m_schedulerResourceGroup;
}

void CreateOpsMakePlanRequest::SetSchedulerResourceGroup(const string& _schedulerResourceGroup)
{
    m_schedulerResourceGroup = _schedulerResourceGroup;
    m_schedulerResourceGroupHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SchedulerResourceGroupHasBeenSet() const
{
    return m_schedulerResourceGroupHasBeenSet;
}

string CreateOpsMakePlanRequest::GetIntegrationResourceGroup() const
{
    return m_integrationResourceGroup;
}

void CreateOpsMakePlanRequest::SetIntegrationResourceGroup(const string& _integrationResourceGroup)
{
    m_integrationResourceGroup = _integrationResourceGroup;
    m_integrationResourceGroupHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::IntegrationResourceGroupHasBeenSet() const
{
    return m_integrationResourceGroupHasBeenSet;
}

string CreateOpsMakePlanRequest::GetSchedulerResourceGroupName() const
{
    return m_schedulerResourceGroupName;
}

void CreateOpsMakePlanRequest::SetSchedulerResourceGroupName(const string& _schedulerResourceGroupName)
{
    m_schedulerResourceGroupName = _schedulerResourceGroupName;
    m_schedulerResourceGroupNameHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SchedulerResourceGroupNameHasBeenSet() const
{
    return m_schedulerResourceGroupNameHasBeenSet;
}

string CreateOpsMakePlanRequest::GetIntegrationResourceGroupName() const
{
    return m_integrationResourceGroupName;
}

void CreateOpsMakePlanRequest::SetIntegrationResourceGroupName(const string& _integrationResourceGroupName)
{
    m_integrationResourceGroupName = _integrationResourceGroupName;
    m_integrationResourceGroupNameHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::IntegrationResourceGroupNameHasBeenSet() const
{
    return m_integrationResourceGroupNameHasBeenSet;
}

vector<StrToStrMap> CreateOpsMakePlanRequest::GetMakeExtList() const
{
    return m_makeExtList;
}

void CreateOpsMakePlanRequest::SetMakeExtList(const vector<StrToStrMap>& _makeExtList)
{
    m_makeExtList = _makeExtList;
    m_makeExtListHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MakeExtListHasBeenSet() const
{
    return m_makeExtListHasBeenSet;
}

bool CreateOpsMakePlanRequest::GetSameSelfWorkflowDependType() const
{
    return m_sameSelfWorkflowDependType;
}

void CreateOpsMakePlanRequest::SetSameSelfWorkflowDependType(const bool& _sameSelfWorkflowDependType)
{
    m_sameSelfWorkflowDependType = _sameSelfWorkflowDependType;
    m_sameSelfWorkflowDependTypeHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SameSelfWorkflowDependTypeHasBeenSet() const
{
    return m_sameSelfWorkflowDependTypeHasBeenSet;
}

string CreateOpsMakePlanRequest::GetSelfWorkflowDependency() const
{
    return m_selfWorkflowDependency;
}

void CreateOpsMakePlanRequest::SetSelfWorkflowDependency(const string& _selfWorkflowDependency)
{
    m_selfWorkflowDependency = _selfWorkflowDependency;
    m_selfWorkflowDependencyHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::SelfWorkflowDependencyHasBeenSet() const
{
    return m_selfWorkflowDependencyHasBeenSet;
}

string CreateOpsMakePlanRequest::GetMakeType() const
{
    return m_makeType;
}

void CreateOpsMakePlanRequest::SetMakeType(const string& _makeType)
{
    m_makeType = _makeType;
    m_makeTypeHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MakeTypeHasBeenSet() const
{
    return m_makeTypeHasBeenSet;
}

string CreateOpsMakePlanRequest::GetStatusList() const
{
    return m_statusList;
}

void CreateOpsMakePlanRequest::SetStatusList(const string& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

string CreateOpsMakePlanRequest::GetMakeCheckEventType() const
{
    return m_makeCheckEventType;
}

void CreateOpsMakePlanRequest::SetMakeCheckEventType(const string& _makeCheckEventType)
{
    m_makeCheckEventType = _makeCheckEventType;
    m_makeCheckEventTypeHasBeenSet = true;
}

bool CreateOpsMakePlanRequest::MakeCheckEventTypeHasBeenSet() const
{
    return m_makeCheckEventTypeHasBeenSet;
}


