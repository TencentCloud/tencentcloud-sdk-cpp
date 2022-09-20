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

#include <tencentcloud/teo/v20220901/model/DnssecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DnssecInfo::DnssecInfo() :
    m_flagsHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_digestTypeHasBeenSet(false),
    m_digestAlgorithmHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_dSHasBeenSet(false),
    m_keyTagHasBeenSet(false),
    m_publicKeyHasBeenSet(false)
{
}

CoreInternalOutcome DnssecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flags") && !value["Flags"].IsNull())
    {
        if (!value["Flags"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.Flags` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flags = value["Flags"].GetInt64();
        m_flagsHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.KeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = string(value["KeyType"].GetString());
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("DigestType") && !value["DigestType"].IsNull())
    {
        if (!value["DigestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.DigestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digestType = string(value["DigestType"].GetString());
        m_digestTypeHasBeenSet = true;
    }

    if (value.HasMember("DigestAlgorithm") && !value["DigestAlgorithm"].IsNull())
    {
        if (!value["DigestAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.DigestAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digestAlgorithm = string(value["DigestAlgorithm"].GetString());
        m_digestAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }

    if (value.HasMember("DS") && !value["DS"].IsNull())
    {
        if (!value["DS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.DS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dS = string(value["DS"].GetString());
        m_dSHasBeenSet = true;
    }

    if (value.HasMember("KeyTag") && !value["KeyTag"].IsNull())
    {
        if (!value["KeyTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.KeyTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyTag = value["KeyTag"].GetInt64();
        m_keyTagHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnssecInfo.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DnssecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flags, allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_digestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digestType.c_str(), allocator).Move(), allocator);
    }

    if (m_digestAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigestAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digestAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_dSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dS.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyTag, allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

}


int64_t DnssecInfo::GetFlags() const
{
    return m_flags;
}

void DnssecInfo::SetFlags(const int64_t& _flags)
{
    m_flags = _flags;
    m_flagsHasBeenSet = true;
}

bool DnssecInfo::FlagsHasBeenSet() const
{
    return m_flagsHasBeenSet;
}

string DnssecInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void DnssecInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool DnssecInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string DnssecInfo::GetKeyType() const
{
    return m_keyType;
}

void DnssecInfo::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool DnssecInfo::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string DnssecInfo::GetDigestType() const
{
    return m_digestType;
}

void DnssecInfo::SetDigestType(const string& _digestType)
{
    m_digestType = _digestType;
    m_digestTypeHasBeenSet = true;
}

bool DnssecInfo::DigestTypeHasBeenSet() const
{
    return m_digestTypeHasBeenSet;
}

string DnssecInfo::GetDigestAlgorithm() const
{
    return m_digestAlgorithm;
}

void DnssecInfo::SetDigestAlgorithm(const string& _digestAlgorithm)
{
    m_digestAlgorithm = _digestAlgorithm;
    m_digestAlgorithmHasBeenSet = true;
}

bool DnssecInfo::DigestAlgorithmHasBeenSet() const
{
    return m_digestAlgorithmHasBeenSet;
}

string DnssecInfo::GetDigest() const
{
    return m_digest;
}

void DnssecInfo::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool DnssecInfo::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

string DnssecInfo::GetDS() const
{
    return m_dS;
}

void DnssecInfo::SetDS(const string& _dS)
{
    m_dS = _dS;
    m_dSHasBeenSet = true;
}

bool DnssecInfo::DSHasBeenSet() const
{
    return m_dSHasBeenSet;
}

int64_t DnssecInfo::GetKeyTag() const
{
    return m_keyTag;
}

void DnssecInfo::SetKeyTag(const int64_t& _keyTag)
{
    m_keyTag = _keyTag;
    m_keyTagHasBeenSet = true;
}

bool DnssecInfo::KeyTagHasBeenSet() const
{
    return m_keyTagHasBeenSet;
}

string DnssecInfo::GetPublicKey() const
{
    return m_publicKey;
}

void DnssecInfo::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool DnssecInfo::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

