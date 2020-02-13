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

#include <tencentcloud/cat/v20180409/model/GetAvailRatioHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

GetAvailRatioHistoryRequest::GetAvailRatioHistoryRequest() :
    m_taskIdHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

string GetAvailRatioHistoryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeStamp.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetAvailRatioHistoryRequest::GetTaskId() const
{
    return m_taskId;
}

void GetAvailRatioHistoryRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetAvailRatioHistoryRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string GetAvailRatioHistoryRequest::GetTimeStamp() const
{
    return m_timeStamp;
}

void GetAvailRatioHistoryRequest::SetTimeStamp(const string& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool GetAvailRatioHistoryRequest::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}


