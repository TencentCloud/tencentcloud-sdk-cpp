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

#include <tencentcloud/vpc/v20170312/model/IPSECOptionsSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

IPSECOptionsSpecification::IPSECOptionsSpecification() :
    m_encryptAlgorithmHasBeenSet(false),
    m_integrityAlgorithHasBeenSet(false),
    m_iPSECSaLifetimeSecondsHasBeenSet(false),
    m_pfsDhGroupHasBeenSet(false),
    m_iPSECSaLifetimeTrafficHasBeenSet(false),
    m_integrityAlgorithmHasBeenSet(false)
{
}

CoreInternalOutcome IPSECOptionsSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptAlgorithm") && !value["EncryptAlgorithm"].IsNull())
    {
        if (!value["EncryptAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.EncryptAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgorithm = string(value["EncryptAlgorithm"].GetString());
        m_encryptAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("IntegrityAlgorith") && !value["IntegrityAlgorith"].IsNull())
    {
        if (!value["IntegrityAlgorith"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.IntegrityAlgorith` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrityAlgorith = string(value["IntegrityAlgorith"].GetString());
        m_integrityAlgorithHasBeenSet = true;
    }

    if (value.HasMember("IPSECSaLifetimeSeconds") && !value["IPSECSaLifetimeSeconds"].IsNull())
    {
        if (!value["IPSECSaLifetimeSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.IPSECSaLifetimeSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iPSECSaLifetimeSeconds = value["IPSECSaLifetimeSeconds"].GetUint64();
        m_iPSECSaLifetimeSecondsHasBeenSet = true;
    }

    if (value.HasMember("PfsDhGroup") && !value["PfsDhGroup"].IsNull())
    {
        if (!value["PfsDhGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.PfsDhGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pfsDhGroup = string(value["PfsDhGroup"].GetString());
        m_pfsDhGroupHasBeenSet = true;
    }

    if (value.HasMember("IPSECSaLifetimeTraffic") && !value["IPSECSaLifetimeTraffic"].IsNull())
    {
        if (!value["IPSECSaLifetimeTraffic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.IPSECSaLifetimeTraffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iPSECSaLifetimeTraffic = value["IPSECSaLifetimeTraffic"].GetUint64();
        m_iPSECSaLifetimeTrafficHasBeenSet = true;
    }

    if (value.HasMember("IntegrityAlgorithm") && !value["IntegrityAlgorithm"].IsNull())
    {
        if (!value["IntegrityAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.IntegrityAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrityAlgorithm = string(value["IntegrityAlgorithm"].GetString());
        m_integrityAlgorithmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPSECOptionsSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_integrityAlgorithHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityAlgorith";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrityAlgorith.c_str(), allocator).Move(), allocator);
    }

    if (m_iPSECSaLifetimeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSECSaLifetimeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPSECSaLifetimeSeconds, allocator);
    }

    if (m_pfsDhGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PfsDhGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pfsDhGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_iPSECSaLifetimeTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSECSaLifetimeTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPSECSaLifetimeTraffic, allocator);
    }

    if (m_integrityAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrityAlgorithm.c_str(), allocator).Move(), allocator);
    }

}


string IPSECOptionsSpecification::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

void IPSECOptionsSpecification::SetEncryptAlgorithm(const string& _encryptAlgorithm)
{
    m_encryptAlgorithm = _encryptAlgorithm;
    m_encryptAlgorithmHasBeenSet = true;
}

bool IPSECOptionsSpecification::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

string IPSECOptionsSpecification::GetIntegrityAlgorith() const
{
    return m_integrityAlgorith;
}

void IPSECOptionsSpecification::SetIntegrityAlgorith(const string& _integrityAlgorith)
{
    m_integrityAlgorith = _integrityAlgorith;
    m_integrityAlgorithHasBeenSet = true;
}

bool IPSECOptionsSpecification::IntegrityAlgorithHasBeenSet() const
{
    return m_integrityAlgorithHasBeenSet;
}

uint64_t IPSECOptionsSpecification::GetIPSECSaLifetimeSeconds() const
{
    return m_iPSECSaLifetimeSeconds;
}

void IPSECOptionsSpecification::SetIPSECSaLifetimeSeconds(const uint64_t& _iPSECSaLifetimeSeconds)
{
    m_iPSECSaLifetimeSeconds = _iPSECSaLifetimeSeconds;
    m_iPSECSaLifetimeSecondsHasBeenSet = true;
}

bool IPSECOptionsSpecification::IPSECSaLifetimeSecondsHasBeenSet() const
{
    return m_iPSECSaLifetimeSecondsHasBeenSet;
}

string IPSECOptionsSpecification::GetPfsDhGroup() const
{
    return m_pfsDhGroup;
}

void IPSECOptionsSpecification::SetPfsDhGroup(const string& _pfsDhGroup)
{
    m_pfsDhGroup = _pfsDhGroup;
    m_pfsDhGroupHasBeenSet = true;
}

bool IPSECOptionsSpecification::PfsDhGroupHasBeenSet() const
{
    return m_pfsDhGroupHasBeenSet;
}

uint64_t IPSECOptionsSpecification::GetIPSECSaLifetimeTraffic() const
{
    return m_iPSECSaLifetimeTraffic;
}

void IPSECOptionsSpecification::SetIPSECSaLifetimeTraffic(const uint64_t& _iPSECSaLifetimeTraffic)
{
    m_iPSECSaLifetimeTraffic = _iPSECSaLifetimeTraffic;
    m_iPSECSaLifetimeTrafficHasBeenSet = true;
}

bool IPSECOptionsSpecification::IPSECSaLifetimeTrafficHasBeenSet() const
{
    return m_iPSECSaLifetimeTrafficHasBeenSet;
}

string IPSECOptionsSpecification::GetIntegrityAlgorithm() const
{
    return m_integrityAlgorithm;
}

void IPSECOptionsSpecification::SetIntegrityAlgorithm(const string& _integrityAlgorithm)
{
    m_integrityAlgorithm = _integrityAlgorithm;
    m_integrityAlgorithmHasBeenSet = true;
}

bool IPSECOptionsSpecification::IntegrityAlgorithmHasBeenSet() const
{
    return m_integrityAlgorithmHasBeenSet;
}

