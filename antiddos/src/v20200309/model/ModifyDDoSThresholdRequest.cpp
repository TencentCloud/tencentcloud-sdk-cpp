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
    m_udpFloodPktThresholdHasBeenSet(false),
    m_ackFloodThresholdHasBeenSet(false),
    m_ackFloodPktThresholdHasBeenSet(false),
    m_synAckFloodThresholdHasBeenSet(false),
    m_synAckFloodPktThresholdHasBeenSet(false),
    m_rstFloodThresholdHasBeenSet(false),
    m_rstFloodPktThresholdHasBeenSet(false)
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

    if (m_ackFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ackFloodThreshold, allocator);
    }

    if (m_ackFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ackFloodPktThreshold, allocator);
    }

    if (m_synAckFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynAckFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_synAckFloodThreshold, allocator);
    }

    if (m_synAckFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynAckFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_synAckFloodPktThreshold, allocator);
    }

    if (m_rstFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RstFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rstFloodThreshold, allocator);
    }

    if (m_rstFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RstFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rstFloodPktThreshold, allocator);
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

uint64_t ModifyDDoSThresholdRequest::GetAckFloodThreshold() const
{
    return m_ackFloodThreshold;
}

void ModifyDDoSThresholdRequest::SetAckFloodThreshold(const uint64_t& _ackFloodThreshold)
{
    m_ackFloodThreshold = _ackFloodThreshold;
    m_ackFloodThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::AckFloodThresholdHasBeenSet() const
{
    return m_ackFloodThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetAckFloodPktThreshold() const
{
    return m_ackFloodPktThreshold;
}

void ModifyDDoSThresholdRequest::SetAckFloodPktThreshold(const uint64_t& _ackFloodPktThreshold)
{
    m_ackFloodPktThreshold = _ackFloodPktThreshold;
    m_ackFloodPktThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::AckFloodPktThresholdHasBeenSet() const
{
    return m_ackFloodPktThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetSynAckFloodThreshold() const
{
    return m_synAckFloodThreshold;
}

void ModifyDDoSThresholdRequest::SetSynAckFloodThreshold(const uint64_t& _synAckFloodThreshold)
{
    m_synAckFloodThreshold = _synAckFloodThreshold;
    m_synAckFloodThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::SynAckFloodThresholdHasBeenSet() const
{
    return m_synAckFloodThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetSynAckFloodPktThreshold() const
{
    return m_synAckFloodPktThreshold;
}

void ModifyDDoSThresholdRequest::SetSynAckFloodPktThreshold(const uint64_t& _synAckFloodPktThreshold)
{
    m_synAckFloodPktThreshold = _synAckFloodPktThreshold;
    m_synAckFloodPktThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::SynAckFloodPktThresholdHasBeenSet() const
{
    return m_synAckFloodPktThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetRstFloodThreshold() const
{
    return m_rstFloodThreshold;
}

void ModifyDDoSThresholdRequest::SetRstFloodThreshold(const uint64_t& _rstFloodThreshold)
{
    m_rstFloodThreshold = _rstFloodThreshold;
    m_rstFloodThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::RstFloodThresholdHasBeenSet() const
{
    return m_rstFloodThresholdHasBeenSet;
}

uint64_t ModifyDDoSThresholdRequest::GetRstFloodPktThreshold() const
{
    return m_rstFloodPktThreshold;
}

void ModifyDDoSThresholdRequest::SetRstFloodPktThreshold(const uint64_t& _rstFloodPktThreshold)
{
    m_rstFloodPktThreshold = _rstFloodPktThreshold;
    m_rstFloodPktThresholdHasBeenSet = true;
}

bool ModifyDDoSThresholdRequest::RstFloodPktThresholdHasBeenSet() const
{
    return m_rstFloodPktThresholdHasBeenSet;
}


