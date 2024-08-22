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

#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebHookPolicyRequest::ModifyWebHookPolicyRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_hostLabelsHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_isDisabledHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_excludedQuuidsHasBeenSet(false)
{
}

string ModifyWebHookPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hostLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostLabels.begin(); itr != m_hostLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_format, allocator);
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDisabled, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludedQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludedQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludedQuuids.begin(); itr != m_excludedQuuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWebHookPolicyRequest::GetId() const
{
    return m_id;
}

void ModifyWebHookPolicyRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyWebHookPolicyRequest::GetName() const
{
    return m_name;
}

void ModifyWebHookPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<WebHookEventKv> ModifyWebHookPolicyRequest::GetEvents() const
{
    return m_events;
}

void ModifyWebHookPolicyRequest::SetEvents(const vector<WebHookEventKv>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

vector<WebHookHostLabel> ModifyWebHookPolicyRequest::GetHostLabels() const
{
    return m_hostLabels;
}

void ModifyWebHookPolicyRequest::SetHostLabels(const vector<WebHookHostLabel>& _hostLabels)
{
    m_hostLabels = _hostLabels;
    m_hostLabelsHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::HostLabelsHasBeenSet() const
{
    return m_hostLabelsHasBeenSet;
}

vector<WebHookReceiver> ModifyWebHookPolicyRequest::GetReceivers() const
{
    return m_receivers;
}

void ModifyWebHookPolicyRequest::SetReceivers(const vector<WebHookReceiver>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

int64_t ModifyWebHookPolicyRequest::GetFormat() const
{
    return m_format;
}

void ModifyWebHookPolicyRequest::SetFormat(const int64_t& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<WebHookCustomField> ModifyWebHookPolicyRequest::GetCustomFields() const
{
    return m_customFields;
}

void ModifyWebHookPolicyRequest::SetCustomFields(const vector<WebHookCustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

int64_t ModifyWebHookPolicyRequest::GetIsDisabled() const
{
    return m_isDisabled;
}

void ModifyWebHookPolicyRequest::SetIsDisabled(const int64_t& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

vector<string> ModifyWebHookPolicyRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyWebHookPolicyRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> ModifyWebHookPolicyRequest::GetExcludedQuuids() const
{
    return m_excludedQuuids;
}

void ModifyWebHookPolicyRequest::SetExcludedQuuids(const vector<string>& _excludedQuuids)
{
    m_excludedQuuids = _excludedQuuids;
    m_excludedQuuidsHasBeenSet = true;
}

bool ModifyWebHookPolicyRequest::ExcludedQuuidsHasBeenSet() const
{
    return m_excludedQuuidsHasBeenSet;
}


