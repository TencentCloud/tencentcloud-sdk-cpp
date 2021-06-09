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

#include <tencentcloud/dayu/v20180709/model/ModifyDDoSAlarmThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyDDoSAlarmThresholdRequest::ModifyDDoSAlarmThresholdRequest() :
    m_businessHasBeenSet(false),
    m_rsIdHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_alarmThresholdHasBeenSet(false),
    m_ipListHasBeenSet(false)
{
}

string ModifyDDoSAlarmThresholdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_rsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rsId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmType, allocator);
    }

    if (m_alarmThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmThreshold, allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSAlarmThresholdRequest::GetBusiness() const
{
    return m_business;
}

void ModifyDDoSAlarmThresholdRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyDDoSAlarmThresholdRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyDDoSAlarmThresholdRequest::GetRsId() const
{
    return m_rsId;
}

void ModifyDDoSAlarmThresholdRequest::SetRsId(const string& _rsId)
{
    m_rsId = _rsId;
    m_rsIdHasBeenSet = true;
}

bool ModifyDDoSAlarmThresholdRequest::RsIdHasBeenSet() const
{
    return m_rsIdHasBeenSet;
}

uint64_t ModifyDDoSAlarmThresholdRequest::GetAlarmType() const
{
    return m_alarmType;
}

void ModifyDDoSAlarmThresholdRequest::SetAlarmType(const uint64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool ModifyDDoSAlarmThresholdRequest::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

uint64_t ModifyDDoSAlarmThresholdRequest::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void ModifyDDoSAlarmThresholdRequest::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool ModifyDDoSAlarmThresholdRequest::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}

vector<string> ModifyDDoSAlarmThresholdRequest::GetIpList() const
{
    return m_ipList;
}

void ModifyDDoSAlarmThresholdRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ModifyDDoSAlarmThresholdRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}


