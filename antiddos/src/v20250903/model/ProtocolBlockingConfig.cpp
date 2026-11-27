/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/antiddos/v20250903/model/ProtocolBlockingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ProtocolBlockingConfig::ProtocolBlockingConfig() :
    m_tCPProtocolHasBeenSet(false),
    m_uDPProtocolHasBeenSet(false),
    m_iCMPProtocolHasBeenSet(false),
    m_otherProtocolHasBeenSet(false)
{
}

CoreInternalOutcome ProtocolBlockingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TCPProtocol") && !value["TCPProtocol"].IsNull())
    {
        if (!value["TCPProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockingConfig.TCPProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tCPProtocol = string(value["TCPProtocol"].GetString());
        m_tCPProtocolHasBeenSet = true;
    }

    if (value.HasMember("UDPProtocol") && !value["UDPProtocol"].IsNull())
    {
        if (!value["UDPProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockingConfig.UDPProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uDPProtocol = string(value["UDPProtocol"].GetString());
        m_uDPProtocolHasBeenSet = true;
    }

    if (value.HasMember("ICMPProtocol") && !value["ICMPProtocol"].IsNull())
    {
        if (!value["ICMPProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockingConfig.ICMPProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iCMPProtocol = string(value["ICMPProtocol"].GetString());
        m_iCMPProtocolHasBeenSet = true;
    }

    if (value.HasMember("OtherProtocol") && !value["OtherProtocol"].IsNull())
    {
        if (!value["OtherProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockingConfig.OtherProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherProtocol = string(value["OtherProtocol"].GetString());
        m_otherProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtocolBlockingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tCPProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tCPProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_uDPProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UDPProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uDPProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_iCMPProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICMPProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iCMPProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_otherProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherProtocol.c_str(), allocator).Move(), allocator);
    }

}


string ProtocolBlockingConfig::GetTCPProtocol() const
{
    return m_tCPProtocol;
}

void ProtocolBlockingConfig::SetTCPProtocol(const string& _tCPProtocol)
{
    m_tCPProtocol = _tCPProtocol;
    m_tCPProtocolHasBeenSet = true;
}

bool ProtocolBlockingConfig::TCPProtocolHasBeenSet() const
{
    return m_tCPProtocolHasBeenSet;
}

string ProtocolBlockingConfig::GetUDPProtocol() const
{
    return m_uDPProtocol;
}

void ProtocolBlockingConfig::SetUDPProtocol(const string& _uDPProtocol)
{
    m_uDPProtocol = _uDPProtocol;
    m_uDPProtocolHasBeenSet = true;
}

bool ProtocolBlockingConfig::UDPProtocolHasBeenSet() const
{
    return m_uDPProtocolHasBeenSet;
}

string ProtocolBlockingConfig::GetICMPProtocol() const
{
    return m_iCMPProtocol;
}

void ProtocolBlockingConfig::SetICMPProtocol(const string& _iCMPProtocol)
{
    m_iCMPProtocol = _iCMPProtocol;
    m_iCMPProtocolHasBeenSet = true;
}

bool ProtocolBlockingConfig::ICMPProtocolHasBeenSet() const
{
    return m_iCMPProtocolHasBeenSet;
}

string ProtocolBlockingConfig::GetOtherProtocol() const
{
    return m_otherProtocol;
}

void ProtocolBlockingConfig::SetOtherProtocol(const string& _otherProtocol)
{
    m_otherProtocol = _otherProtocol;
    m_otherProtocolHasBeenSet = true;
}

bool ProtocolBlockingConfig::OtherProtocolHasBeenSet() const
{
    return m_otherProtocolHasBeenSet;
}

