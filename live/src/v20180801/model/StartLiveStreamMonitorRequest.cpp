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

#include <tencentcloud/live/v20180801/model/StartLiveStreamMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

StartLiveStreamMonitorRequest::StartLiveStreamMonitorRequest() :
    m_monitorIdHasBeenSet(false),
    m_audibleInputIndexListHasBeenSet(false)
{
}

string StartLiveStreamMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorId.c_str(), allocator).Move(), allocator);
    }

    if (m_audibleInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudibleInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audibleInputIndexList.begin(); itr != m_audibleInputIndexList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartLiveStreamMonitorRequest::GetMonitorId() const
{
    return m_monitorId;
}

void StartLiveStreamMonitorRequest::SetMonitorId(const string& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool StartLiveStreamMonitorRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

vector<uint64_t> StartLiveStreamMonitorRequest::GetAudibleInputIndexList() const
{
    return m_audibleInputIndexList;
}

void StartLiveStreamMonitorRequest::SetAudibleInputIndexList(const vector<uint64_t>& _audibleInputIndexList)
{
    m_audibleInputIndexList = _audibleInputIndexList;
    m_audibleInputIndexListHasBeenSet = true;
}

bool StartLiveStreamMonitorRequest::AudibleInputIndexListHasBeenSet() const
{
    return m_audibleInputIndexListHasBeenSet;
}


