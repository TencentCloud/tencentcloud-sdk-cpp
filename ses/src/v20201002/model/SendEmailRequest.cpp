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
using namespace rapidjson;
using namespace std;

SendEmailRequest::SendEmailRequest() :
    m_fromEmailAddressHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_simpleHasBeenSet(false)
{
}

string SendEmailRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromEmailAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FromEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fromEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_destination.begin(); itr != m_destination.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subjectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_replyToAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplyToAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_replyToAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_templateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_template.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_simpleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Simple";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_simple.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


