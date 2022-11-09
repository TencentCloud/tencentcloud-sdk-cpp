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

#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ModifyDDoSThresholdRequest::ModifyDDoSThresholdRequest() :
    m_thresholdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_otherThresholdFlagHasBeenSet(false),
    m_synFloodThresholdHasBeenSet(false),
    m_synFloodPktThresholdHasBeenSet(false),
    m_udpFloodThresholdHasBeenSet(false),
    m_udpFloodPktThresholdHasBeenSet(false)
{
}

string ModifyDDoSThresholdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_otherThresholdFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherThresholdFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_otherThresholdFlag, allocator);
    }

    if (m_synFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_synFloodThreshold, allocator);
    }

    if (m_synFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_synFloodPktThreshold, allocator);
    }

    if (m_udpFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_udpFloodThreshold, allocator);
    }

    if (m_udpFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_udpFloodPktThreshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyDDoSThresholdRequest::GetThreshold() const
{
    return m_threshold;
}

void ModifyDDoSThresholdRequest::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string ModifyDDoSThresholdRequest::GetId() const
{
    return m_id;
}

void ModifyDDoSThresholdRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDDoSThresholdRequest::GetBusiness() const
{
    return m_business;
}

void ModifyDDoSThresholdRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

int64_t ModifyDDoSThresholdRequest::GetOtherThresholdFlag() const
{
    return m_otherThresholdFlag;
}

void ModifyDDoSThresholdRequest::SetOtherThresholdFlag(const int64_t& _otherThresholdFlag)
{
    m_otherThresholdFlag = _otherThresholdFlag;
    m_otherThresholdFlagHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::OtherThresholdFlagHasBeenSet() const
{
    return m_otherThresholdFlagHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetSynFloodThreshold() const
{
    return m_synFloodThreshold;
}

void ModifyDDoSThresholdRequest::SetSynFloodThreshold(const uint64_t& _synFloodThreshold)
{
    m_synFloodThreshold = _synFloodThreshold;
    m_synFloodThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::SynFloodThresholdHasBeenSet() const
{
    return m_synFloodThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetSynFloodPktThreshold() const
{
    return m_synFloodPktThreshold;
}

void ModifyDDoSThresholdRequest::SetSynFloodPktThreshold(const uint64_t& _synFloodPktThreshold)
{
    m_synFloodPktThreshold = _synFloodPktThreshold;
    m_synFloodPktThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::SynFloodPktThresholdHasBeenSet() const
{
    return m_synFloodPktThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetUdpFloodThreshold() const
{
    return m_udpFloodThreshold;
}

void ModifyDDoSThresholdRequest::SetUdpFloodThreshold(const uint64_t& _udpFloodThreshold)
{
    m_udpFloodThreshold = _udpFloodThreshold;
    m_udpFloodThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::UdpFloodThresholdHasBeenSet() const
{
    return m_udpFloodThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetUdpFloodPktThreshold() const
{
    return m_udpFloodPktThreshold;
}

void ModifyDDoSThresholdRequest::SetUdpFloodPktThreshold(const uint64_t& _udpFloodPktThreshold)
{
    m_udpFloodPktThreshold = _udpFloodPktThreshold;
    m_udpFloodPktThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::UdpFloodPktThresholdHasBeenSet() const
{
    return m_udpFloodPktThresholdHasBeenSet;
}


