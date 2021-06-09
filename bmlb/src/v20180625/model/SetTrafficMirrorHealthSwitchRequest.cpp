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

#include <tencentcloud/bmlb/v20180625/model/SetTrafficMirrorHealthSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

SetTrafficMirrorHealthSwitchRequest::SetTrafficMirrorHealthSwitchRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCodesHasBeenSet(false)
{
}

string SetTrafficMirrorHealthSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_httpCheckDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpCheckDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_httpCodes.begin(); itr != m_httpCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetTrafficMirrorHealthSwitchRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void SetTrafficMirrorHealthSwitchRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

int64_t SetTrafficMirrorHealthSwitchRequest::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void SetTrafficMirrorHealthSwitchRequest::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t SetTrafficMirrorHealthSwitchRequest::GetHealthNum() const
{
    return m_healthNum;
}

void SetTrafficMirrorHealthSwitchRequest::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t SetTrafficMirrorHealthSwitchRequest::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void SetTrafficMirrorHealthSwitchRequest::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t SetTrafficMirrorHealthSwitchRequest::GetIntervalTime() const
{
    return m_intervalTime;
}

void SetTrafficMirrorHealthSwitchRequest::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

string SetTrafficMirrorHealthSwitchRequest::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void SetTrafficMirrorHealthSwitchRequest::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

string SetTrafficMirrorHealthSwitchRequest::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void SetTrafficMirrorHealthSwitchRequest::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

vector<int64_t> SetTrafficMirrorHealthSwitchRequest::GetHttpCodes() const
{
    return m_httpCodes;
}

void SetTrafficMirrorHealthSwitchRequest::SetHttpCodes(const vector<int64_t>& _httpCodes)
{
    m_httpCodes = _httpCodes;
    m_httpCodesHasBeenSet = true;
}

bool SetTrafficMirrorHealthSwitchRequest::HttpCodesHasBeenSet() const
{
    return m_httpCodesHasBeenSet;
}


