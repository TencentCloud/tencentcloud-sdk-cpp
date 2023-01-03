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

#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DeleteAlarmNoticesRequest::DeleteAlarmNoticesRequest() :
    m_moduleHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_noticeBindPolicysHasBeenSet(false)
{
}

string DeleteAlarmNoticesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeIds.begin(); itr != m_noticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_noticeBindPolicysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeBindPolicys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeBindPolicys.begin(); itr != m_noticeBindPolicys.end(); ++itr, ++i)
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


string DeleteAlarmNoticesRequest::GetModule() const
{
    return m_module;
}

void DeleteAlarmNoticesRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DeleteAlarmNoticesRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<string> DeleteAlarmNoticesRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void DeleteAlarmNoticesRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool DeleteAlarmNoticesRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<NoticeBindPolicys> DeleteAlarmNoticesRequest::GetNoticeBindPolicys() const
{
    return m_noticeBindPolicys;
}

void DeleteAlarmNoticesRequest::SetNoticeBindPolicys(const vector<NoticeBindPolicys>& _noticeBindPolicys)
{
    m_noticeBindPolicys = _noticeBindPolicys;
    m_noticeBindPolicysHasBeenSet = true;
}

bool DeleteAlarmNoticesRequest::NoticeBindPolicysHasBeenSet() const
{
    return m_noticeBindPolicysHasBeenSet;
}


