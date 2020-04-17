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

#include <tencentcloud/cmq/v20190304/model/RewindQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

RewindQueueRequest::RewindQueueRequest() :
    m_queueNameHasBeenSet(false),
    m_startConsumeTimeHasBeenSet(false)
{
}

string RewindQueueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_startConsumeTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartConsumeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startConsumeTime, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RewindQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void RewindQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool RewindQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t RewindQueueRequest::GetStartConsumeTime() const
{
    return m_startConsumeTime;
}

void RewindQueueRequest::SetStartConsumeTime(const uint64_t& _startConsumeTime)
{
    m_startConsumeTime = _startConsumeTime;
    m_startConsumeTimeHasBeenSet = true;
}

bool RewindQueueRequest::StartConsumeTimeHasBeenSet() const
{
    return m_startConsumeTimeHasBeenSet;
}


