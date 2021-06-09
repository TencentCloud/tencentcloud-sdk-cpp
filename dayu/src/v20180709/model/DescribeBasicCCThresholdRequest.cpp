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

#include <tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeBasicCCThresholdRequest::DescribeBasicCCThresholdRequest() :
    m_basicIpHasBeenSet(false),
    m_basicRegionHasBeenSet(false),
    m_basicBizTypeHasBeenSet(false),
    m_basicDeviceTypeHasBeenSet(false),
    m_basicIpInstanceHasBeenSet(false),
    m_basicIspCodeHasBeenSet(false)
{
}

string DescribeBasicCCThresholdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_basicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_basicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_basicBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_basicDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicDeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicDeviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_basicIpInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicIpInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicIpInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_basicIspCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicIspCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicIspCode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBasicCCThresholdRequest::GetBasicIp() const
{
    return m_basicIp;
}

void DescribeBasicCCThresholdRequest::SetBasicIp(const string& _basicIp)
{
    m_basicIp = _basicIp;
    m_basicIpHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicIpHasBeenSet() const
{
    return m_basicIpHasBeenSet;
}

string DescribeBasicCCThresholdRequest::GetBasicRegion() const
{
    return m_basicRegion;
}

void DescribeBasicCCThresholdRequest::SetBasicRegion(const string& _basicRegion)
{
    m_basicRegion = _basicRegion;
    m_basicRegionHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicRegionHasBeenSet() const
{
    return m_basicRegionHasBeenSet;
}

string DescribeBasicCCThresholdRequest::GetBasicBizType() const
{
    return m_basicBizType;
}

void DescribeBasicCCThresholdRequest::SetBasicBizType(const string& _basicBizType)
{
    m_basicBizType = _basicBizType;
    m_basicBizTypeHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicBizTypeHasBeenSet() const
{
    return m_basicBizTypeHasBeenSet;
}

string DescribeBasicCCThresholdRequest::GetBasicDeviceType() const
{
    return m_basicDeviceType;
}

void DescribeBasicCCThresholdRequest::SetBasicDeviceType(const string& _basicDeviceType)
{
    m_basicDeviceType = _basicDeviceType;
    m_basicDeviceTypeHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicDeviceTypeHasBeenSet() const
{
    return m_basicDeviceTypeHasBeenSet;
}

string DescribeBasicCCThresholdRequest::GetBasicIpInstance() const
{
    return m_basicIpInstance;
}

void DescribeBasicCCThresholdRequest::SetBasicIpInstance(const string& _basicIpInstance)
{
    m_basicIpInstance = _basicIpInstance;
    m_basicIpInstanceHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicIpInstanceHasBeenSet() const
{
    return m_basicIpInstanceHasBeenSet;
}

uint64_t DescribeBasicCCThresholdRequest::GetBasicIspCode() const
{
    return m_basicIspCode;
}

void DescribeBasicCCThresholdRequest::SetBasicIspCode(const uint64_t& _basicIspCode)
{
    m_basicIspCode = _basicIspCode;
    m_basicIspCodeHasBeenSet = true;
}

bool DescribeBasicCCThresholdRequest::BasicIspCodeHasBeenSet() const
{
    return m_basicIspCodeHasBeenSet;
}


