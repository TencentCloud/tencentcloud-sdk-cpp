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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyMessageForwardRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifyMessageForwardRequest::ModifyMessageForwardRequest() :
    m_intIdHasBeenSet(false),
    m_messageTypeHasBeenSet(false)
{
}

string ModifyMessageForwardRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intId, allocator);
    }

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyMessageForwardRequest::GetIntId() const
{
    return m_intId;
}

void ModifyMessageForwardRequest::SetIntId(const int64_t& _intId)
{
    m_intId = _intId;
    m_intIdHasBeenSet = true;
}

bool ModifyMessageForwardRequest::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}

string ModifyMessageForwardRequest::GetMessageType() const
{
    return m_messageType;
}

void ModifyMessageForwardRequest::SetMessageType(const string& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool ModifyMessageForwardRequest::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}


