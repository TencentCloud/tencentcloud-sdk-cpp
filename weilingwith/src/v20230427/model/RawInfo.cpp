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

#include <tencentcloud/weilingwith/v20230427/model/RawInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

RawInfo::RawInfo() :
    m_sM4VectorHasBeenSet(false),
    m_nATIPHasBeenSet(false),
    m_streamTokenHasBeenSet(false),
    m_portHasBeenSet(false),
    m_streamEnKeyHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_innerIPHasBeenSet(false)
{
}

CoreInternalOutcome RawInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SM4Vector") && !value["SM4Vector"].IsNull())
    {
        if (!value["SM4Vector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.SM4Vector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sM4Vector = string(value["SM4Vector"].GetString());
        m_sM4VectorHasBeenSet = true;
    }

    if (value.HasMember("NATIP") && !value["NATIP"].IsNull())
    {
        if (!value["NATIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.NATIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nATIP = string(value["NATIP"].GetString());
        m_nATIPHasBeenSet = true;
    }

    if (value.HasMember("StreamToken") && !value["StreamToken"].IsNull())
    {
        if (!value["StreamToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.StreamToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamToken = string(value["StreamToken"].GetString());
        m_streamTokenHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("StreamEnKey") && !value["StreamEnKey"].IsNull())
    {
        if (!value["StreamEnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.StreamEnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamEnKey = string(value["StreamEnKey"].GetString());
        m_streamEnKeyHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("InnerIP") && !value["InnerIP"].IsNull())
    {
        if (!value["InnerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawInfo.InnerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerIP = string(value["InnerIP"].GetString());
        m_innerIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sM4VectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SM4Vector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sM4Vector.c_str(), allocator).Move(), allocator);
    }

    if (m_nATIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NATIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nATIP.c_str(), allocator).Move(), allocator);
    }

    if (m_streamTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamToken.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_streamEnKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamEnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamEnKey.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_innerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerIP.c_str(), allocator).Move(), allocator);
    }

}


string RawInfo::GetSM4Vector() const
{
    return m_sM4Vector;
}

void RawInfo::SetSM4Vector(const string& _sM4Vector)
{
    m_sM4Vector = _sM4Vector;
    m_sM4VectorHasBeenSet = true;
}

bool RawInfo::SM4VectorHasBeenSet() const
{
    return m_sM4VectorHasBeenSet;
}

string RawInfo::GetNATIP() const
{
    return m_nATIP;
}

void RawInfo::SetNATIP(const string& _nATIP)
{
    m_nATIP = _nATIP;
    m_nATIPHasBeenSet = true;
}

bool RawInfo::NATIPHasBeenSet() const
{
    return m_nATIPHasBeenSet;
}

string RawInfo::GetStreamToken() const
{
    return m_streamToken;
}

void RawInfo::SetStreamToken(const string& _streamToken)
{
    m_streamToken = _streamToken;
    m_streamTokenHasBeenSet = true;
}

bool RawInfo::StreamTokenHasBeenSet() const
{
    return m_streamTokenHasBeenSet;
}

int64_t RawInfo::GetPort() const
{
    return m_port;
}

void RawInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool RawInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string RawInfo::GetStreamEnKey() const
{
    return m_streamEnKey;
}

void RawInfo::SetStreamEnKey(const string& _streamEnKey)
{
    m_streamEnKey = _streamEnKey;
    m_streamEnKeyHasBeenSet = true;
}

bool RawInfo::StreamEnKeyHasBeenSet() const
{
    return m_streamEnKeyHasBeenSet;
}

string RawInfo::GetIP() const
{
    return m_iP;
}

void RawInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool RawInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string RawInfo::GetInnerIP() const
{
    return m_innerIP;
}

void RawInfo::SetInnerIP(const string& _innerIP)
{
    m_innerIP = _innerIP;
    m_innerIPHasBeenSet = true;
}

bool RawInfo::InnerIPHasBeenSet() const
{
    return m_innerIPHasBeenSet;
}

