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

#include <tencentcloud/wedata/v20210820/model/OpsTaskCanvasInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OpsTaskCanvasInfoList::OpsTaskCanvasInfoList() :
    m_tasksListHasBeenSet(false),
    m_linksListHasBeenSet(false),
    m_circulateTaskListHasBeenSet(false)
{
}

CoreInternalOutcome OpsTaskCanvasInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TasksList") && !value["TasksList"].IsNull())
    {
        if (!value["TasksList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasInfoList.TasksList` is not array type"));

        const rapidjson::Value &tmpValue = value["TasksList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpsTaskCanvasDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasksList.push_back(item);
        }
        m_tasksListHasBeenSet = true;
    }

    if (value.HasMember("LinksList") && !value["LinksList"].IsNull())
    {
        if (!value["LinksList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasInfoList.LinksList` is not array type"));

        const rapidjson::Value &tmpValue = value["LinksList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpsTaskLinkInfoDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_linksList.push_back(item);
        }
        m_linksListHasBeenSet = true;
    }

    if (value.HasMember("CirculateTaskList") && !value["CirculateTaskList"].IsNull())
    {
        if (!value["CirculateTaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasInfoList.CirculateTaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["CirculateTaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpsTaskCanvasDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_circulateTaskList.push_back(item);
        }
        m_circulateTaskListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsTaskCanvasInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tasksListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasksList.begin(); itr != m_tasksList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_linksListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinksList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_linksList.begin(); itr != m_linksList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_circulateTaskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CirculateTaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_circulateTaskList.begin(); itr != m_circulateTaskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<OpsTaskCanvasDto> OpsTaskCanvasInfoList::GetTasksList() const
{
    return m_tasksList;
}

void OpsTaskCanvasInfoList::SetTasksList(const vector<OpsTaskCanvasDto>& _tasksList)
{
    m_tasksList = _tasksList;
    m_tasksListHasBeenSet = true;
}

bool OpsTaskCanvasInfoList::TasksListHasBeenSet() const
{
    return m_tasksListHasBeenSet;
}

vector<OpsTaskLinkInfoDto> OpsTaskCanvasInfoList::GetLinksList() const
{
    return m_linksList;
}

void OpsTaskCanvasInfoList::SetLinksList(const vector<OpsTaskLinkInfoDto>& _linksList)
{
    m_linksList = _linksList;
    m_linksListHasBeenSet = true;
}

bool OpsTaskCanvasInfoList::LinksListHasBeenSet() const
{
    return m_linksListHasBeenSet;
}

vector<OpsTaskCanvasDto> OpsTaskCanvasInfoList::GetCirculateTaskList() const
{
    return m_circulateTaskList;
}

void OpsTaskCanvasInfoList::SetCirculateTaskList(const vector<OpsTaskCanvasDto>& _circulateTaskList)
{
    m_circulateTaskList = _circulateTaskList;
    m_circulateTaskListHasBeenSet = true;
}

bool OpsTaskCanvasInfoList::CirculateTaskListHasBeenSet() const
{
    return m_circulateTaskListHasBeenSet;
}

