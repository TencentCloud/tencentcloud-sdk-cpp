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

#include <tencentcloud/ses/v20201002/model/BatchSendEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

BatchSendEmailRequest::BatchSendEmailRequest() :
    m_fromEmailAddressHasBeenSet(false),
    m_receiverIdHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_simpleHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_cycleParamHasBeenSet(false),
    m_timedParamHasBeenSet(false),
    m_unsubscribeHasBeenSet(false),
    m_aDLocationHasBeenSet(false)
{
}

string BatchSendEmailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_receiverId, allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_replyToAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyToAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replyToAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_simpleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Simple";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_simple.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachments.begin(); itr != m_attachments.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cycleParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cycleParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timedParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timedParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_unsubscribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unsubscribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unsubscribe.c_str(), allocator).Move(), allocator);
    }

    if (m_aDLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ADLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aDLocation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchSendEmailRequest::GetFromEmailAddress() const
{
    return m_fromEmailAddress;
}

void BatchSendEmailRequest::SetFromEmailAddress(const string& _fromEmailAddress)
{
    m_fromEmailAddress = _fromEmailAddress;
    m_fromEmailAddressHasBeenSet = true;
}

bool BatchSendEmailRequest::FromEmailAddressHasBeenSet() const
{
    return m_fromEmailAddressHasBeenSet;
}

uint64_t BatchSendEmailRequest::GetReceiverId() const
{
    return m_receiverId;
}

void BatchSendEmailRequest::SetReceiverId(const uint64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool BatchSendEmailRequest::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

string BatchSendEmailRequest::GetSubject() const
{
    return m_subject;
}

void BatchSendEmailRequest::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool BatchSendEmailRequest::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

uint64_t BatchSendEmailRequest::GetTaskType() const
{
    return m_taskType;
}

void BatchSendEmailRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BatchSendEmailRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string BatchSendEmailRequest::GetReplyToAddresses() const
{
    return m_replyToAddresses;
}

void BatchSendEmailRequest::SetReplyToAddresses(const string& _replyToAddresses)
{
    m_replyToAddresses = _replyToAddresses;
    m_replyToAddressesHasBeenSet = true;
}

bool BatchSendEmailRequest::ReplyToAddressesHasBeenSet() const
{
    return m_replyToAddressesHasBeenSet;
}

Template BatchSendEmailRequest::GetTemplate() const
{
    return m_template;
}

void BatchSendEmailRequest::SetTemplate(const Template& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool BatchSendEmailRequest::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

Simple BatchSendEmailRequest::GetSimple() const
{
    return m_simple;
}

void BatchSendEmailRequest::SetSimple(const Simple& _simple)
{
    m_simple = _simple;
    m_simpleHasBeenSet = true;
}

bool BatchSendEmailRequest::SimpleHasBeenSet() const
{
    return m_simpleHasBeenSet;
}

vector<Attachment> BatchSendEmailRequest::GetAttachments() const
{
    return m_attachments;
}

void BatchSendEmailRequest::SetAttachments(const vector<Attachment>& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool BatchSendEmailRequest::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

CycleEmailParam BatchSendEmailRequest::GetCycleParam() const
{
    return m_cycleParam;
}

void BatchSendEmailRequest::SetCycleParam(const CycleEmailParam& _cycleParam)
{
    m_cycleParam = _cycleParam;
    m_cycleParamHasBeenSet = true;
}

bool BatchSendEmailRequest::CycleParamHasBeenSet() const
{
    return m_cycleParamHasBeenSet;
}

TimedEmailParam BatchSendEmailRequest::GetTimedParam() const
{
    return m_timedParam;
}

void BatchSendEmailRequest::SetTimedParam(const TimedEmailParam& _timedParam)
{
    m_timedParam = _timedParam;
    m_timedParamHasBeenSet = true;
}

bool BatchSendEmailRequest::TimedParamHasBeenSet() const
{
    return m_timedParamHasBeenSet;
}

string BatchSendEmailRequest::GetUnsubscribe() const
{
    return m_unsubscribe;
}

void BatchSendEmailRequest::SetUnsubscribe(const string& _unsubscribe)
{
    m_unsubscribe = _unsubscribe;
    m_unsubscribeHasBeenSet = true;
}

bool BatchSendEmailRequest::UnsubscribeHasBeenSet() const
{
    return m_unsubscribeHasBeenSet;
}

uint64_t BatchSendEmailRequest::GetADLocation() const
{
    return m_aDLocation;
}

void BatchSendEmailRequest::SetADLocation(const uint64_t& _aDLocation)
{
    m_aDLocation = _aDLocation;
    m_aDLocationHasBeenSet = true;
}

bool BatchSendEmailRequest::ADLocationHasBeenSet() const
{
    return m_aDLocationHasBeenSet;
}


