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

#include <tencentcloud/antiddos/v20200309/model/ListenerCcThreholdConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ListenerCcThreholdConfig::ListenerCcThreholdConfig() :
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ListenerCcThreholdConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerCcThreholdConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerCcThreholdConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerCcThreholdConfig.CCEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetInt64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("CCThreshold") && !value["CCThreshold"].IsNull())
    {
        if (!value["CCThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerCcThreholdConfig.CCThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = value["CCThreshold"].GetInt64();
        m_cCThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListenerCcThreholdConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_cCEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCEnable, allocator);
    }

    if (m_cCThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCThreshold, allocator);
    }

}


string ListenerCcThreholdConfig::GetDomain() const
{
    return m_domain;
}

void ListenerCcThreholdConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ListenerCcThreholdConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ListenerCcThreholdConfig::GetProtocol() const
{
    return m_protocol;
}

void ListenerCcThreholdConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ListenerCcThreholdConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t ListenerCcThreholdConfig::GetCCEnable() const
{
    return m_cCEnable;
}

void ListenerCcThreholdConfig::SetCCEnable(const int64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool ListenerCcThreholdConfig::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

int64_t ListenerCcThreholdConfig::GetCCThreshold() const
{
    return m_cCThreshold;
}

void ListenerCcThreholdConfig::SetCCThreshold(const int64_t& _cCThreshold)
{
    m_cCThreshold = _cCThreshold;
    m_cCThresholdHasBeenSet = true;
}

bool ListenerCcThreholdConfig::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}

