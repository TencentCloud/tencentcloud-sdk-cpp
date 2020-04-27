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

#include <tencentcloud/gs/v20191118/model/QuitQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

QuitQueueRequest::QuitQueueRequest() :
    m_userIdHasBeenSet(false),
    m_setNumberHasBeenSet(false)
{
}

string QuitQueueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_setNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setNumber, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QuitQueueRequest::GetUserId() const
{
    return m_userId;
}

void QuitQueueRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool QuitQueueRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t QuitQueueRequest::GetSetNumber() const
{
    return m_setNumber;
}

void QuitQueueRequest::SetSetNumber(const uint64_t& _setNumber)
{
    m_setNumber = _setNumber;
    m_setNumberHasBeenSet = true;
}

bool QuitQueueRequest::SetNumberHasBeenSet() const
{
    return m_setNumberHasBeenSet;
}


