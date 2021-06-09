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

#include <tencentcloud/redis/v20180412/model/SwitchInstanceVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

SwitchInstanceVipRequest::SwitchInstanceVipRequest() :
    m_srcInstanceIdHasBeenSet(false),
    m_dstInstanceIdHasBeenSet(false),
    m_timeDelayHasBeenSet(false),
    m_forceSwitchHasBeenSet(false),
    m_switchTimeHasBeenSet(false)
{
}

string SwitchInstanceVipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeDelay, allocator);
    }

    if (m_forceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceSwitch, allocator);
    }

    if (m_switchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchInstanceVipRequest::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void SwitchInstanceVipRequest::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool SwitchInstanceVipRequest::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string SwitchInstanceVipRequest::GetDstInstanceId() const
{
    return m_dstInstanceId;
}

void SwitchInstanceVipRequest::SetDstInstanceId(const string& _dstInstanceId)
{
    m_dstInstanceId = _dstInstanceId;
    m_dstInstanceIdHasBeenSet = true;
}

bool SwitchInstanceVipRequest::DstInstanceIdHasBeenSet() const
{
    return m_dstInstanceIdHasBeenSet;
}

int64_t SwitchInstanceVipRequest::GetTimeDelay() const
{
    return m_timeDelay;
}

void SwitchInstanceVipRequest::SetTimeDelay(const int64_t& _timeDelay)
{
    m_timeDelay = _timeDelay;
    m_timeDelayHasBeenSet = true;
}

bool SwitchInstanceVipRequest::TimeDelayHasBeenSet() const
{
    return m_timeDelayHasBeenSet;
}

int64_t SwitchInstanceVipRequest::GetForceSwitch() const
{
    return m_forceSwitch;
}

void SwitchInstanceVipRequest::SetForceSwitch(const int64_t& _forceSwitch)
{
    m_forceSwitch = _forceSwitch;
    m_forceSwitchHasBeenSet = true;
}

bool SwitchInstanceVipRequest::ForceSwitchHasBeenSet() const
{
    return m_forceSwitchHasBeenSet;
}

string SwitchInstanceVipRequest::GetSwitchTime() const
{
    return m_switchTime;
}

void SwitchInstanceVipRequest::SetSwitchTime(const string& _switchTime)
{
    m_switchTime = _switchTime;
    m_switchTimeHasBeenSet = true;
}

bool SwitchInstanceVipRequest::SwitchTimeHasBeenSet() const
{
    return m_switchTimeHasBeenSet;
}


