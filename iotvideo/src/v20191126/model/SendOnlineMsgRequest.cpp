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

#include <tencentcloud/iotvideo/v20191126/model/SendOnlineMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

SendOnlineMsgRequest::SendOnlineMsgRequest() :
    m_tidHasBeenSet(false),
    m_wakeupHasBeenSet(false),
    m_waitRespHasBeenSet(false),
    m_msgTopicHasBeenSet(false),
    m_msgContentHasBeenSet(false)
{
}

string SendOnlineMsgRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_wakeupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wakeup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wakeup, allocator);
    }

    if (m_waitRespHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitResp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitResp, allocator);
    }

    if (m_msgTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_msgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendOnlineMsgRequest::GetTid() const
{
    return m_tid;
}

void SendOnlineMsgRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool SendOnlineMsgRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

bool SendOnlineMsgRequest::GetWakeup() const
{
    return m_wakeup;
}

void SendOnlineMsgRequest::SetWakeup(const bool& _wakeup)
{
    m_wakeup = _wakeup;
    m_wakeupHasBeenSet = true;
}

bool SendOnlineMsgRequest::WakeupHasBeenSet() const
{
    return m_wakeupHasBeenSet;
}

uint64_t SendOnlineMsgRequest::GetWaitResp() const
{
    return m_waitResp;
}

void SendOnlineMsgRequest::SetWaitResp(const uint64_t& _waitResp)
{
    m_waitResp = _waitResp;
    m_waitRespHasBeenSet = true;
}

bool SendOnlineMsgRequest::WaitRespHasBeenSet() const
{
    return m_waitRespHasBeenSet;
}

string SendOnlineMsgRequest::GetMsgTopic() const
{
    return m_msgTopic;
}

void SendOnlineMsgRequest::SetMsgTopic(const string& _msgTopic)
{
    m_msgTopic = _msgTopic;
    m_msgTopicHasBeenSet = true;
}

bool SendOnlineMsgRequest::MsgTopicHasBeenSet() const
{
    return m_msgTopicHasBeenSet;
}

string SendOnlineMsgRequest::GetMsgContent() const
{
    return m_msgContent;
}

void SendOnlineMsgRequest::SetMsgContent(const string& _msgContent)
{
    m_msgContent = _msgContent;
    m_msgContentHasBeenSet = true;
}

bool SendOnlineMsgRequest::MsgContentHasBeenSet() const
{
    return m_msgContentHasBeenSet;
}


