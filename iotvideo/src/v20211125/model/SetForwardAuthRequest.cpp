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

#include <tencentcloud/iotvideo/v20211125/model/SetForwardAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

SetForwardAuthRequest::SetForwardAuthRequest() :
    m_skeyHasBeenSet(false),
    m_queueTypeHasBeenSet(false)
{
}

string SetForwardAuthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_skeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queueType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetForwardAuthRequest::GetSkey() const
{
    return m_skey;
}

void SetForwardAuthRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool SetForwardAuthRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

uint64_t SetForwardAuthRequest::GetQueueType() const
{
    return m_queueType;
}

void SetForwardAuthRequest::SetQueueType(const uint64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool SetForwardAuthRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}


