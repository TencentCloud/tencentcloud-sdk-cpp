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

#include <tencentcloud/cwp/v20180228/model/WebHookPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookPolicy::WebHookPolicy() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_hostLabelsHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_isDisabledHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_excludedQuuidsHasBeenSet(false)
{
}

CoreInternalOutcome WebHookPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Events") && !value["Events"].IsNull())
    {
        if (!value["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Events` is not array type"));

        const rapidjson::Value &tmpValue = value["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookEventKv item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (value.HasMember("HostLabels") && !value["HostLabels"].IsNull())
    {
        if (!value["HostLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.HostLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["HostLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookHostLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostLabels.push_back(item);
        }
        m_hostLabelsHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookReceiver item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receivers.push_back(item);
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Format` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_format = value["Format"].GetInt64();
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("CustomFields") && !value["CustomFields"].IsNull())
    {
        if (!value["CustomFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.CustomFields` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookCustomField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customFields.push_back(item);
        }
        m_customFieldsHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.IsDisabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetInt64();
        m_isDisabledHasBeenSet = true;
    }

    if (value.HasMember("Quuids") && !value["Quuids"].IsNull())
    {
        if (!value["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.Quuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("ExcludedQuuids") && !value["ExcludedQuuids"].IsNull())
    {
        if (!value["ExcludedQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookPolicy.ExcludedQuuids` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludedQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludedQuuids.push_back((*itr).GetString());
        }
        m_excludedQuuidsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostLabels.begin(); itr != m_hostLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_format, allocator);
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_excludedQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludedQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludedQuuids.begin(); itr != m_excludedQuuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t WebHookPolicy::GetId() const
{
    return m_id;
}

void WebHookPolicy::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WebHookPolicy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WebHookPolicy::GetName() const
{
    return m_name;
}

void WebHookPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebHookPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<WebHookEventKv> WebHookPolicy::GetEvents() const
{
    return m_events;
}

void WebHookPolicy::SetEvents(const vector<WebHookEventKv>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool WebHookPolicy::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

vector<WebHookHostLabel> WebHookPolicy::GetHostLabels() const
{
    return m_hostLabels;
}

void WebHookPolicy::SetHostLabels(const vector<WebHookHostLabel>& _hostLabels)
{
    m_hostLabels = _hostLabels;
    m_hostLabelsHasBeenSet = true;
}

bool WebHookPolicy::HostLabelsHasBeenSet() const
{
    return m_hostLabelsHasBeenSet;
}

vector<WebHookReceiver> WebHookPolicy::GetReceivers() const
{
    return m_receivers;
}

void WebHookPolicy::SetReceivers(const vector<WebHookReceiver>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool WebHookPolicy::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

int64_t WebHookPolicy::GetFormat() const
{
    return m_format;
}

void WebHookPolicy::SetFormat(const int64_t& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool WebHookPolicy::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<WebHookCustomField> WebHookPolicy::GetCustomFields() const
{
    return m_customFields;
}

void WebHookPolicy::SetCustomFields(const vector<WebHookCustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool WebHookPolicy::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

int64_t WebHookPolicy::GetIsDisabled() const
{
    return m_isDisabled;
}

void WebHookPolicy::SetIsDisabled(const int64_t& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool WebHookPolicy::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

vector<string> WebHookPolicy::GetQuuids() const
{
    return m_quuids;
}

void WebHookPolicy::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool WebHookPolicy::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

int64_t WebHookPolicy::GetHostCount() const
{
    return m_hostCount;
}

void WebHookPolicy::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool WebHookPolicy::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

vector<string> WebHookPolicy::GetExcludedQuuids() const
{
    return m_excludedQuuids;
}

void WebHookPolicy::SetExcludedQuuids(const vector<string>& _excludedQuuids)
{
    m_excludedQuuids = _excludedQuuids;
    m_excludedQuuidsHasBeenSet = true;
}

bool WebHookPolicy::ExcludedQuuidsHasBeenSet() const
{
    return m_excludedQuuidsHasBeenSet;
}

