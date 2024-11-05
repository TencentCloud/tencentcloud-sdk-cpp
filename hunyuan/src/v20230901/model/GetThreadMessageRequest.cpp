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

#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GetThreadMessageRequest::GetThreadMessageRequest() :
    m_threadIDHasBeenSet(false),
    m_messageIDHasBeenSet(false)
{
}

string GetThreadMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_threadIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_threadID.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetThreadMessageRequest::GetThreadID() const
{
    return m_threadID;
}

void GetThreadMessageRequest::SetThreadID(const string& _threadID)
{
    m_threadID = _threadID;
    m_threadIDHasBeenSet = true;
}

bool GetThreadMessageRequest::ThreadIDHasBeenSet() const
{
    return m_threadIDHasBeenSet;
}

string GetThreadMessageRequest::GetMessageID() const
{
    return m_messageID;
}

void GetThreadMessageRequest::SetMessageID(const string& _messageID)
{
    m_messageID = _messageID;
    m_messageIDHasBeenSet = true;
}

bool GetThreadMessageRequest::MessageIDHasBeenSet() const
{
    return m_messageIDHasBeenSet;
}


