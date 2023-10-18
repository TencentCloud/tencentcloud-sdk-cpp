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

#include <tencentcloud/live/v20180801/model/EnableOptimalSwitchingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

EnableOptimalSwitchingRequest::EnableOptimalSwitchingRequest() :
    m_streamNameHasBeenSet(false),
    m_enableSwitchHasBeenSet(false),
    m_hostGroupNameHasBeenSet(false)
{
}

string EnableOptimalSwitchingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSwitch, allocator);
    }

    if (m_hostGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableOptimalSwitchingRequest::GetStreamName() const
{
    return m_streamName;
}

void EnableOptimalSwitchingRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool EnableOptimalSwitchingRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

int64_t EnableOptimalSwitchingRequest::GetEnableSwitch() const
{
    return m_enableSwitch;
}

void EnableOptimalSwitchingRequest::SetEnableSwitch(const int64_t& _enableSwitch)
{
    m_enableSwitch = _enableSwitch;
    m_enableSwitchHasBeenSet = true;
}

bool EnableOptimalSwitchingRequest::EnableSwitchHasBeenSet() const
{
    return m_enableSwitchHasBeenSet;
}

string EnableOptimalSwitchingRequest::GetHostGroupName() const
{
    return m_hostGroupName;
}

void EnableOptimalSwitchingRequest::SetHostGroupName(const string& _hostGroupName)
{
    m_hostGroupName = _hostGroupName;
    m_hostGroupNameHasBeenSet = true;
}

bool EnableOptimalSwitchingRequest::HostGroupNameHasBeenSet() const
{
    return m_hostGroupNameHasBeenSet;
}


