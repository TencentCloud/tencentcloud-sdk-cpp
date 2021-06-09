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

#include <tencentcloud/dayu/v20180709/model/CreateBasicDDoSAlarmThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateBasicDDoSAlarmThresholdRequest::CreateBasicDDoSAlarmThresholdRequest() :
    m_businessHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_alarmThresholdHasBeenSet(false)
{
}

string CreateBasicDDoSAlarmThresholdRequest::ToJsonString() const
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

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBasicDDoSAlarmThresholdRequest::GetBusiness() const
{
    return m_business;
}

void CreateBasicDDoSAlarmThresholdRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateBasicDDoSAlarmThresholdRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateBasicDDoSAlarmThresholdRequest::GetMethod() const
{
    return m_method;
}

void CreateBasicDDoSAlarmThresholdRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateBasicDDoSAlarmThresholdRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t CreateBasicDDoSAlarmThresholdRequest::GetAlarmType() const
{
    return m_alarmType;
}

void CreateBasicDDoSAlarmThresholdRequest::SetAlarmType(const uint64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool CreateBasicDDoSAlarmThresholdRequest::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

uint64_t CreateBasicDDoSAlarmThresholdRequest::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void CreateBasicDDoSAlarmThresholdRequest::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool CreateBasicDDoSAlarmThresholdRequest::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}


