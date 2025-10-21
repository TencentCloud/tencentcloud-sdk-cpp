/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SetTaskAlarmNewRequest::SetTaskAlarmNewRequest() :
    m_alarmInfoListHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string SetTaskAlarmNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmInfoList.begin(); itr != m_alarmInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<AlarmInfo> SetTaskAlarmNewRequest::GetAlarmInfoList() const
{
    return m_alarmInfoList;
}

void SetTaskAlarmNewRequest::SetAlarmInfoList(const vector<AlarmInfo>& _alarmInfoList)
{
    m_alarmInfoList = _alarmInfoList;
    m_alarmInfoListHasBeenSet = true;
}

bool SetTaskAlarmNewRequest::AlarmInfoListHasBeenSet() const
{
    return m_alarmInfoListHasBeenSet;
}

string SetTaskAlarmNewRequest::GetProjectId() const
{
    return m_projectId;
}

void SetTaskAlarmNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SetTaskAlarmNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


