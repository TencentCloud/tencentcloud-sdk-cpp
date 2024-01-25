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

#include <tencentcloud/wedata/v20210820/model/TaskInfoWithInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInfoWithInstance::TaskInfoWithInstance() :
    m_parentIdHasBeenSet(false),
    m_instanceRunDateListHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_schedulerDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfoWithInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoWithInstance.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRunDateList") && !value["InstanceRunDateList"].IsNull())
    {
        if (!value["InstanceRunDateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfoWithInstance.InstanceRunDateList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceRunDateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceRunDateList.push_back((*itr).GetString());
        }
        m_instanceRunDateListHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoWithInstance.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDescription") && !value["SchedulerDescription"].IsNull())
    {
        if (!value["SchedulerDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoWithInstance.SchedulerDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDescription = string(value["SchedulerDescription"].GetString());
        m_schedulerDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfoWithInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRunDateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRunDateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceRunDateList.begin(); itr != m_instanceRunDateList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_schedulerDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDescription.c_str(), allocator).Move(), allocator);
    }

}


string TaskInfoWithInstance::GetParentId() const
{
    return m_parentId;
}

void TaskInfoWithInstance::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool TaskInfoWithInstance::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

vector<string> TaskInfoWithInstance::GetInstanceRunDateList() const
{
    return m_instanceRunDateList;
}

void TaskInfoWithInstance::SetInstanceRunDateList(const vector<string>& _instanceRunDateList)
{
    m_instanceRunDateList = _instanceRunDateList;
    m_instanceRunDateListHasBeenSet = true;
}

bool TaskInfoWithInstance::InstanceRunDateListHasBeenSet() const
{
    return m_instanceRunDateListHasBeenSet;
}

uint64_t TaskInfoWithInstance::GetInstanceCount() const
{
    return m_instanceCount;
}

void TaskInfoWithInstance::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool TaskInfoWithInstance::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string TaskInfoWithInstance::GetSchedulerDescription() const
{
    return m_schedulerDescription;
}

void TaskInfoWithInstance::SetSchedulerDescription(const string& _schedulerDescription)
{
    m_schedulerDescription = _schedulerDescription;
    m_schedulerDescriptionHasBeenSet = true;
}

bool TaskInfoWithInstance::SchedulerDescriptionHasBeenSet() const
{
    return m_schedulerDescriptionHasBeenSet;
}

