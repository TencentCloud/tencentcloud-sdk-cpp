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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace rapidjson;
using namespace std;

DescribeDeviceStreamsRequest::DescribeDeviceStreamsRequest() :
    m_deviceIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string DescribeDeviceStreamsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceStreamsRequest::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeDeviceStreamsRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeDeviceStreamsRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

uint64_t DescribeDeviceStreamsRequest::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeDeviceStreamsRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeDeviceStreamsRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


