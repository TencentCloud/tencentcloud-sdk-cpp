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

#include <tencentcloud/antiddos/v20200309/model/ProtocolBlockConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ProtocolBlockConfig::ProtocolBlockConfig() :
    m_dropTcpHasBeenSet(false),
    m_dropUdpHasBeenSet(false),
    m_dropIcmpHasBeenSet(false),
    m_dropOtherHasBeenSet(false),
    m_checkExceptNullConnectHasBeenSet(false),
    m_pingOfDeathHasBeenSet(false),
    m_tearDropHasBeenSet(false)
{
}

CoreInternalOutcome ProtocolBlockConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DropTcp") && !value["DropTcp"].IsNull())
    {
        if (!value["DropTcp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.DropTcp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dropTcp = value["DropTcp"].GetInt64();
        m_dropTcpHasBeenSet = true;
    }

    if (value.HasMember("DropUdp") && !value["DropUdp"].IsNull())
    {
        if (!value["DropUdp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.DropUdp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dropUdp = value["DropUdp"].GetInt64();
        m_dropUdpHasBeenSet = true;
    }

    if (value.HasMember("DropIcmp") && !value["DropIcmp"].IsNull())
    {
        if (!value["DropIcmp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.DropIcmp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dropIcmp = value["DropIcmp"].GetInt64();
        m_dropIcmpHasBeenSet = true;
    }

    if (value.HasMember("DropOther") && !value["DropOther"].IsNull())
    {
        if (!value["DropOther"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.DropOther` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dropOther = value["DropOther"].GetInt64();
        m_dropOtherHasBeenSet = true;
    }

    if (value.HasMember("CheckExceptNullConnect") && !value["CheckExceptNullConnect"].IsNull())
    {
        if (!value["CheckExceptNullConnect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.CheckExceptNullConnect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkExceptNullConnect = value["CheckExceptNullConnect"].GetInt64();
        m_checkExceptNullConnectHasBeenSet = true;
    }

    if (value.HasMember("PingOfDeath") && !value["PingOfDeath"].IsNull())
    {
        if (!value["PingOfDeath"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.PingOfDeath` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pingOfDeath = value["PingOfDeath"].GetInt64();
        m_pingOfDeathHasBeenSet = true;
    }

    if (value.HasMember("TearDrop") && !value["TearDrop"].IsNull())
    {
        if (!value["TearDrop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockConfig.TearDrop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tearDrop = value["TearDrop"].GetInt64();
        m_tearDropHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtocolBlockConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dropTcpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropTcp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropTcp, allocator);
    }

    if (m_dropUdpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropUdp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropUdp, allocator);
    }

    if (m_dropIcmpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropIcmp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropIcmp, allocator);
    }

    if (m_dropOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropOther, allocator);
    }

    if (m_checkExceptNullConnectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckExceptNullConnect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkExceptNullConnect, allocator);
    }

    if (m_pingOfDeathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingOfDeath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pingOfDeath, allocator);
    }

    if (m_tearDropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TearDrop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tearDrop, allocator);
    }

}


int64_t ProtocolBlockConfig::GetDropTcp() const
{
    return m_dropTcp;
}

void ProtocolBlockConfig::SetDropTcp(const int64_t& _dropTcp)
{
    m_dropTcp = _dropTcp;
    m_dropTcpHasBeenSet = true;
}

bool ProtocolBlockConfig::DropTcpHasBeenSet() const
{
    return m_dropTcpHasBeenSet;
}

int64_t ProtocolBlockConfig::GetDropUdp() const
{
    return m_dropUdp;
}

void ProtocolBlockConfig::SetDropUdp(const int64_t& _dropUdp)
{
    m_dropUdp = _dropUdp;
    m_dropUdpHasBeenSet = true;
}

bool ProtocolBlockConfig::DropUdpHasBeenSet() const
{
    return m_dropUdpHasBeenSet;
}

int64_t ProtocolBlockConfig::GetDropIcmp() const
{
    return m_dropIcmp;
}

void ProtocolBlockConfig::SetDropIcmp(const int64_t& _dropIcmp)
{
    m_dropIcmp = _dropIcmp;
    m_dropIcmpHasBeenSet = true;
}

bool ProtocolBlockConfig::DropIcmpHasBeenSet() const
{
    return m_dropIcmpHasBeenSet;
}

int64_t ProtocolBlockConfig::GetDropOther() const
{
    return m_dropOther;
}

void ProtocolBlockConfig::SetDropOther(const int64_t& _dropOther)
{
    m_dropOther = _dropOther;
    m_dropOtherHasBeenSet = true;
}

bool ProtocolBlockConfig::DropOtherHasBeenSet() const
{
    return m_dropOtherHasBeenSet;
}

int64_t ProtocolBlockConfig::GetCheckExceptNullConnect() const
{
    return m_checkExceptNullConnect;
}

void ProtocolBlockConfig::SetCheckExceptNullConnect(const int64_t& _checkExceptNullConnect)
{
    m_checkExceptNullConnect = _checkExceptNullConnect;
    m_checkExceptNullConnectHasBeenSet = true;
}

bool ProtocolBlockConfig::CheckExceptNullConnectHasBeenSet() const
{
    return m_checkExceptNullConnectHasBeenSet;
}

int64_t ProtocolBlockConfig::GetPingOfDeath() const
{
    return m_pingOfDeath;
}

void ProtocolBlockConfig::SetPingOfDeath(const int64_t& _pingOfDeath)
{
    m_pingOfDeath = _pingOfDeath;
    m_pingOfDeathHasBeenSet = true;
}

bool ProtocolBlockConfig::PingOfDeathHasBeenSet() const
{
    return m_pingOfDeathHasBeenSet;
}

int64_t ProtocolBlockConfig::GetTearDrop() const
{
    return m_tearDrop;
}

void ProtocolBlockConfig::SetTearDrop(const int64_t& _tearDrop)
{
    m_tearDrop = _tearDrop;
    m_tearDropHasBeenSet = true;
}

bool ProtocolBlockConfig::TearDropHasBeenSet() const
{
    return m_tearDropHasBeenSet;
}

