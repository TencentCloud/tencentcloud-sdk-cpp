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

#include <tencentcloud/dayu/v20180709/model/ModifyCCThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyCCThresholdRequest::ModifyCCThresholdRequest() :
    m_businessHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_basicIpHasBeenSet(false),
    m_basicRegionHasBeenSet(false),
    m_basicBizTypeHasBeenSet(false),
    m_basicDeviceTypeHasBeenSet(false),
    m_basicIpInstanceHasBeenSet(false),
    m_basicIspCodeHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string ModifyCCThresholdRequest::ToJsonString() const
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCCThresholdRequest::GetBusiness() const
{
    return m_business;
}

void ModifyCCThresholdRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

uint64_t ModifyCCThresholdRequest::GetThreshold() const
{
    return m_threshold;
}

void ModifyCCThresholdRequest::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool ModifyCCThresholdRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string ModifyCCThresholdRequest::GetId() const
{
    return m_id;
}

void ModifyCCThresholdRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCCThresholdRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyCCThresholdRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyCCThresholdRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyCCThresholdRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyCCThresholdRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyCCThresholdRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyCCThresholdRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyCCThresholdRequest::GetBasicIp() const
{
    return m_basicIp;
}

void ModifyCCThresholdRequest::SetBasicIp(const string& _basicIp)
{
    m_basicIp = _basicIp;
    m_basicIpHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicIpHasBeenSet() const
{
    return m_basicIpHasBeenSet;
}

string ModifyCCThresholdRequest::GetBasicRegion() const
{
    return m_basicRegion;
}

void ModifyCCThresholdRequest::SetBasicRegion(const string& _basicRegion)
{
    m_basicRegion = _basicRegion;
    m_basicRegionHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicRegionHasBeenSet() const
{
    return m_basicRegionHasBeenSet;
}

string ModifyCCThresholdRequest::GetBasicBizType() const
{
    return m_basicBizType;
}

void ModifyCCThresholdRequest::SetBasicBizType(const string& _basicBizType)
{
    m_basicBizType = _basicBizType;
    m_basicBizTypeHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicBizTypeHasBeenSet() const
{
    return m_basicBizTypeHasBeenSet;
}

string ModifyCCThresholdRequest::GetBasicDeviceType() const
{
    return m_basicDeviceType;
}

void ModifyCCThresholdRequest::SetBasicDeviceType(const string& _basicDeviceType)
{
    m_basicDeviceType = _basicDeviceType;
    m_basicDeviceTypeHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicDeviceTypeHasBeenSet() const
{
    return m_basicDeviceTypeHasBeenSet;
}

string ModifyCCThresholdRequest::GetBasicIpInstance() const
{
    return m_basicIpInstance;
}

void ModifyCCThresholdRequest::SetBasicIpInstance(const string& _basicIpInstance)
{
    m_basicIpInstance = _basicIpInstance;
    m_basicIpInstanceHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicIpInstanceHasBeenSet() const
{
    return m_basicIpInstanceHasBeenSet;
}

uint64_t ModifyCCThresholdRequest::GetBasicIspCode() const
{
    return m_basicIspCode;
}

void ModifyCCThresholdRequest::SetBasicIspCode(const uint64_t& _basicIspCode)
{
    m_basicIspCode = _basicIspCode;
    m_basicIspCodeHasBeenSet = true;
}

bool ModifyCCThresholdRequest::BasicIspCodeHasBeenSet() const
{
    return m_basicIspCodeHasBeenSet;
}

string ModifyCCThresholdRequest::GetDomain() const
{
    return m_domain;
}

void ModifyCCThresholdRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyCCThresholdRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


