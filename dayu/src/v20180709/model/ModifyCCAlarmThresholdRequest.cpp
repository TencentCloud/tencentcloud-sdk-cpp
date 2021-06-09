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

#include <tencentcloud/dayu/v20180709/model/ModifyCCAlarmThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyCCAlarmThresholdRequest::ModifyCCAlarmThresholdRequest() :
    m_businessHasBeenSet(false),
    m_rsIdHasBeenSet(false),
    m_alarmThresholdHasBeenSet(false),
    m_ipListHasBeenSet(false)
{
}

string ModifyCCAlarmThresholdRequest::ToJsonString() const
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


string ModifyCCAlarmThresholdRequest::GetBusiness() const
{
    return m_business;
}

void ModifyCCAlarmThresholdRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyCCAlarmThresholdRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyCCAlarmThresholdRequest::GetRsId() const
{
    return m_rsId;
}

void ModifyCCAlarmThresholdRequest::SetRsId(const string& _rsId)
{
    m_rsId = _rsId;
    m_rsIdHasBeenSet = true;
}

bool ModifyCCAlarmThresholdRequest::RsIdHasBeenSet() const
{
    return m_rsIdHasBeenSet;
}

uint64_t ModifyCCAlarmThresholdRequest::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void ModifyCCAlarmThresholdRequest::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool ModifyCCAlarmThresholdRequest::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}

vector<string> ModifyCCAlarmThresholdRequest::GetIpList() const
{
    return m_ipList;
}

void ModifyCCAlarmThresholdRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ModifyCCAlarmThresholdRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}


