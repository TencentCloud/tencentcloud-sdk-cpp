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

#include <tencentcloud/ses/v20201002/model/SendEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

SendEmailRequest::SendEmailRequest() :
    m_fromEmailAddressHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_simpleHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_unsubscribeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false)
{
}

string SendEmailRequest::ToJsonString() const
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

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destination.begin(); itr != m_destination.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
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

    if (m_unsubscribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unsubscribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unsubscribe.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendEmailRequest::GetFromEmailAddress() const
{
    return m_fromEmailAddress;
}

void SendEmailRequest::SetFromEmailAddress(const string& _fromEmailAddress)
{
    m_fromEmailAddress = _fromEmailAddress;
    m_fromEmailAddressHasBeenSet = true;
}

bool SendEmailRequest::FromEmailAddressHasBeenSet() const
{
    return m_fromEmailAddressHasBeenSet;
}

vector<string> SendEmailRequest::GetDestination() const
{
    return m_destination;
}

void SendEmailRequest::SetDestination(const vector<string>& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool SendEmailRequest::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string SendEmailRequest::GetSubject() const
{
    return m_subject;
}

void SendEmailRequest::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool SendEmailRequest::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

string SendEmailRequest::GetReplyToAddresses() const
{
    return m_replyToAddresses;
}

void SendEmailRequest::SetReplyToAddresses(const string& _replyToAddresses)
{
    m_replyToAddresses = _replyToAddresses;
    m_replyToAddressesHasBeenSet = true;
}

bool SendEmailRequest::ReplyToAddressesHasBeenSet() const
{
    return m_replyToAddressesHasBeenSet;
}

Template SendEmailRequest::GetTemplate() const
{
    return m_template;
}

void SendEmailRequest::SetTemplate(const Template& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool SendEmailRequest::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

Simple SendEmailRequest::GetSimple() const
{
    return m_simple;
}

void SendEmailRequest::SetSimple(const Simple& _simple)
{
    m_simple = _simple;
    m_simpleHasBeenSet = true;
}

bool SendEmailRequest::SimpleHasBeenSet() const
{
    return m_simpleHasBeenSet;
}

vector<Attachment> SendEmailRequest::GetAttachments() const
{
    return m_attachments;
}

void SendEmailRequest::SetAttachments(const vector<Attachment>& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool SendEmailRequest::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

string SendEmailRequest::GetUnsubscribe() const
{
    return m_unsubscribe;
}

void SendEmailRequest::SetUnsubscribe(const string& _unsubscribe)
{
    m_unsubscribe = _unsubscribe;
    m_unsubscribeHasBeenSet = true;
}

bool SendEmailRequest::UnsubscribeHasBeenSet() const
{
    return m_unsubscribeHasBeenSet;
}

uint64_t SendEmailRequest::GetTriggerType() const
{
    return m_triggerType;
}

void SendEmailRequest::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool SendEmailRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}


