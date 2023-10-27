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

#include <tencentcloud/csip/v20221121/model/ReportTaskIdList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ReportTaskIdList::ReportTaskIdList() :
    m_taskIdListHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome ReportTaskIdList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskIdList") && !value["TaskIdList"].IsNull())
    {
        if (!value["TaskIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTaskIdList.TaskIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIdList.push_back((*itr).GetString());
        }
        m_taskIdListHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskIdList.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportTaskIdList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> ReportTaskIdList::GetTaskIdList() const
{
    return m_taskIdList;
}

void ReportTaskIdList::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool ReportTaskIdList::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string ReportTaskIdList::GetAppId() const
{
    return m_appId;
}

void ReportTaskIdList::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ReportTaskIdList::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

