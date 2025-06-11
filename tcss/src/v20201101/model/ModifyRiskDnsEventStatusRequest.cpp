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

#include <tencentcloud/tcss/v20201101/model/ModifyRiskDnsEventStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyRiskDnsEventStatusRequest::ModifyRiskDnsEventStatusRequest() :
    m_eventIDSetHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_allSameEventAddWhiteHasBeenSet(false),
    m_addWhiteEventTypeHasBeenSet(false)
{
}

string ModifyRiskDnsEventStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIDSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIDSet.begin(); itr != m_eventIDSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_allSameEventAddWhiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSameEventAddWhite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allSameEventAddWhite, allocator);
    }

    if (m_addWhiteEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddWhiteEventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addWhiteEventType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyRiskDnsEventStatusRequest::GetEventIDSet() const
{
    return m_eventIDSet;
}

void ModifyRiskDnsEventStatusRequest::SetEventIDSet(const vector<uint64_t>& _eventIDSet)
{
    m_eventIDSet = _eventIDSet;
    m_eventIDSetHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::EventIDSetHasBeenSet() const
{
    return m_eventIDSetHasBeenSet;
}

string ModifyRiskDnsEventStatusRequest::GetEventStatus() const
{
    return m_eventStatus;
}

void ModifyRiskDnsEventStatusRequest::SetEventStatus(const string& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string ModifyRiskDnsEventStatusRequest::GetAddress() const
{
    return m_address;
}

void ModifyRiskDnsEventStatusRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ModifyRiskDnsEventStatusRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRiskDnsEventStatusRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool ModifyRiskDnsEventStatusRequest::GetAllSameEventAddWhite() const
{
    return m_allSameEventAddWhite;
}

void ModifyRiskDnsEventStatusRequest::SetAllSameEventAddWhite(const bool& _allSameEventAddWhite)
{
    m_allSameEventAddWhite = _allSameEventAddWhite;
    m_allSameEventAddWhiteHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::AllSameEventAddWhiteHasBeenSet() const
{
    return m_allSameEventAddWhiteHasBeenSet;
}

string ModifyRiskDnsEventStatusRequest::GetAddWhiteEventType() const
{
    return m_addWhiteEventType;
}

void ModifyRiskDnsEventStatusRequest::SetAddWhiteEventType(const string& _addWhiteEventType)
{
    m_addWhiteEventType = _addWhiteEventType;
    m_addWhiteEventTypeHasBeenSet = true;
}

bool ModifyRiskDnsEventStatusRequest::AddWhiteEventTypeHasBeenSet() const
{
    return m_addWhiteEventTypeHasBeenSet;
}


