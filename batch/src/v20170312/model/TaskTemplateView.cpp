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

#include <tencentcloud/batch/v20170312/model/TaskTemplateView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

TaskTemplateView::TaskTemplateView() :
    m_taskTemplateIdHasBeenSet(false),
    m_taskTemplateNameHasBeenSet(false),
    m_taskTemplateDescriptionHasBeenSet(false),
    m_taskTemplateInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskTemplateView::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTemplateId") && !value["TaskTemplateId"].IsNull())
    {
        if (!value["TaskTemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskTemplateView.TaskTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTemplateId = string(value["TaskTemplateId"].GetString());
        m_taskTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTemplateName") && !value["TaskTemplateName"].IsNull())
    {
        if (!value["TaskTemplateName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskTemplateView.TaskTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTemplateName = string(value["TaskTemplateName"].GetString());
        m_taskTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTemplateDescription") && !value["TaskTemplateDescription"].IsNull())
    {
        if (!value["TaskTemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskTemplateView.TaskTemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTemplateDescription = string(value["TaskTemplateDescription"].GetString());
        m_taskTemplateDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskTemplateInfo") && !value["TaskTemplateInfo"].IsNull())
    {
        if (!value["TaskTemplateInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TaskTemplateView.TaskTemplateInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskTemplateInfo.Deserialize(value["TaskTemplateInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTemplateInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskTemplateView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTemplateView::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_taskTemplateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskTemplateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskTemplateInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskTemplateView::GetTaskTemplateId() const
{
    return m_taskTemplateId;
}

void TaskTemplateView::SetTaskTemplateId(const string& _taskTemplateId)
{
    m_taskTemplateId = _taskTemplateId;
    m_taskTemplateIdHasBeenSet = true;
}

bool TaskTemplateView::TaskTemplateIdHasBeenSet() const
{
    return m_taskTemplateIdHasBeenSet;
}

string TaskTemplateView::GetTaskTemplateName() const
{
    return m_taskTemplateName;
}

void TaskTemplateView::SetTaskTemplateName(const string& _taskTemplateName)
{
    m_taskTemplateName = _taskTemplateName;
    m_taskTemplateNameHasBeenSet = true;
}

bool TaskTemplateView::TaskTemplateNameHasBeenSet() const
{
    return m_taskTemplateNameHasBeenSet;
}

string TaskTemplateView::GetTaskTemplateDescription() const
{
    return m_taskTemplateDescription;
}

void TaskTemplateView::SetTaskTemplateDescription(const string& _taskTemplateDescription)
{
    m_taskTemplateDescription = _taskTemplateDescription;
    m_taskTemplateDescriptionHasBeenSet = true;
}

bool TaskTemplateView::TaskTemplateDescriptionHasBeenSet() const
{
    return m_taskTemplateDescriptionHasBeenSet;
}

Task TaskTemplateView::GetTaskTemplateInfo() const
{
    return m_taskTemplateInfo;
}

void TaskTemplateView::SetTaskTemplateInfo(const Task& _taskTemplateInfo)
{
    m_taskTemplateInfo = _taskTemplateInfo;
    m_taskTemplateInfoHasBeenSet = true;
}

bool TaskTemplateView::TaskTemplateInfoHasBeenSet() const
{
    return m_taskTemplateInfoHasBeenSet;
}

string TaskTemplateView::GetCreateTime() const
{
    return m_createTime;
}

void TaskTemplateView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskTemplateView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

