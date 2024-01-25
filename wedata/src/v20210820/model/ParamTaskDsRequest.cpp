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

#include <tencentcloud/wedata/v20210820/model/ParamTaskDsRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParamTaskDsRequest::ParamTaskDsRequest() :
    m_taskIdHasBeenSet(false),
    m_mapParamListHasBeenSet(false)
{
}

CoreInternalOutcome ParamTaskDsRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTaskDsRequest.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MapParamList") && !value["MapParamList"].IsNull())
    {
        if (!value["MapParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamTaskDsRequest.MapParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["MapParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamMapDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapParamList.push_back(item);
        }
        m_mapParamListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamTaskDsRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mapParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapParamList.begin(); itr != m_mapParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ParamTaskDsRequest::GetTaskId() const
{
    return m_taskId;
}

void ParamTaskDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ParamTaskDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<ParamMapDsDto> ParamTaskDsRequest::GetMapParamList() const
{
    return m_mapParamList;
}

void ParamTaskDsRequest::SetMapParamList(const vector<ParamMapDsDto>& _mapParamList)
{
    m_mapParamList = _mapParamList;
    m_mapParamListHasBeenSet = true;
}

bool ParamTaskDsRequest::MapParamListHasBeenSet() const
{
    return m_mapParamListHasBeenSet;
}

