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

#include <tencentcloud/bmvpc/v20180625/model/IPSECOptionsSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

IPSECOptionsSpecification::IPSECOptionsSpecification() :
    m_pfsDhGroupHasBeenSet(false),
    m_iPSECSaLifetimeTrafficHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_integrityAlgorithHasBeenSet(false),
    m_iPSECSaLifetimeSecondsHasBeenSet(false),
    m_securityProtoHasBeenSet(false),
    m_encapModeHasBeenSet(false)
{
}

CoreInternalOutcome IPSECOptionsSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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

    if (value.HasMember("SecurityProto") && !value["SecurityProto"].IsNull())
    {
        if (!value["SecurityProto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.SecurityProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityProto = string(value["SecurityProto"].GetString());
        m_securityProtoHasBeenSet = true;
    }

    if (value.HasMember("EncapMode") && !value["EncapMode"].IsNull())
    {
        if (!value["EncapMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSECOptionsSpecification.EncapMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encapMode = string(value["EncapMode"].GetString());
        m_encapModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPSECOptionsSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_securityProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityProto.c_str(), allocator).Move(), allocator);
    }

    if (m_encapModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncapMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encapMode.c_str(), allocator).Move(), allocator);
    }

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

string IPSECOptionsSpecification::GetSecurityProto() const
{
    return m_securityProto;
}

void IPSECOptionsSpecification::SetSecurityProto(const string& _securityProto)
{
    m_securityProto = _securityProto;
    m_securityProtoHasBeenSet = true;
}

bool IPSECOptionsSpecification::SecurityProtoHasBeenSet() const
{
    return m_securityProtoHasBeenSet;
}

string IPSECOptionsSpecification::GetEncapMode() const
{
    return m_encapMode;
}

void IPSECOptionsSpecification::SetEncapMode(const string& _encapMode)
{
    m_encapMode = _encapMode;
    m_encapModeHasBeenSet = true;
}

bool IPSECOptionsSpecification::EncapModeHasBeenSet() const
{
    return m_encapModeHasBeenSet;
}

