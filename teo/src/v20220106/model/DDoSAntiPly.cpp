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

#include <tencentcloud/teo/v20220106/model/DDoSAntiPly.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DDoSAntiPly::DDoSAntiPly() :
    m_dropTcpHasBeenSet(false),
    m_dropUdpHasBeenSet(false),
    m_dropIcmpHasBeenSet(false),
    m_dropOtherHasBeenSet(false),
    m_sourceCreateLimitHasBeenSet(false),
    m_sourceConnectLimitHasBeenSet(false),
    m_destinationCreateLimitHasBeenSet(false),
    m_destinationConnectLimitHasBeenSet(false),
    m_abnormalConnectNumHasBeenSet(false),
    m_abnormalSynRatioHasBeenSet(false),
    m_abnormalSynNumHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_emptyConnectProtectHasBeenSet(false),
    m_udpShardHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAntiPly::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DropTcp") && !value["DropTcp"].IsNull())
    {
        if (!value["DropTcp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DropTcp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropTcp = string(value["DropTcp"].GetString());
        m_dropTcpHasBeenSet = true;
    }

    if (value.HasMember("DropUdp") && !value["DropUdp"].IsNull())
    {
        if (!value["DropUdp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DropUdp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropUdp = string(value["DropUdp"].GetString());
        m_dropUdpHasBeenSet = true;
    }

    if (value.HasMember("DropIcmp") && !value["DropIcmp"].IsNull())
    {
        if (!value["DropIcmp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DropIcmp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropIcmp = string(value["DropIcmp"].GetString());
        m_dropIcmpHasBeenSet = true;
    }

    if (value.HasMember("DropOther") && !value["DropOther"].IsNull())
    {
        if (!value["DropOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DropOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropOther = string(value["DropOther"].GetString());
        m_dropOtherHasBeenSet = true;
    }

    if (value.HasMember("SourceCreateLimit") && !value["SourceCreateLimit"].IsNull())
    {
        if (!value["SourceCreateLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.SourceCreateLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCreateLimit = value["SourceCreateLimit"].GetInt64();
        m_sourceCreateLimitHasBeenSet = true;
    }

    if (value.HasMember("SourceConnectLimit") && !value["SourceConnectLimit"].IsNull())
    {
        if (!value["SourceConnectLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.SourceConnectLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConnectLimit = value["SourceConnectLimit"].GetInt64();
        m_sourceConnectLimitHasBeenSet = true;
    }

    if (value.HasMember("DestinationCreateLimit") && !value["DestinationCreateLimit"].IsNull())
    {
        if (!value["DestinationCreateLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DestinationCreateLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCreateLimit = value["DestinationCreateLimit"].GetInt64();
        m_destinationCreateLimitHasBeenSet = true;
    }

    if (value.HasMember("DestinationConnectLimit") && !value["DestinationConnectLimit"].IsNull())
    {
        if (!value["DestinationConnectLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.DestinationConnectLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destinationConnectLimit = value["DestinationConnectLimit"].GetInt64();
        m_destinationConnectLimitHasBeenSet = true;
    }

    if (value.HasMember("AbnormalConnectNum") && !value["AbnormalConnectNum"].IsNull())
    {
        if (!value["AbnormalConnectNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.AbnormalConnectNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalConnectNum = value["AbnormalConnectNum"].GetInt64();
        m_abnormalConnectNumHasBeenSet = true;
    }

    if (value.HasMember("AbnormalSynRatio") && !value["AbnormalSynRatio"].IsNull())
    {
        if (!value["AbnormalSynRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.AbnormalSynRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalSynRatio = value["AbnormalSynRatio"].GetInt64();
        m_abnormalSynRatioHasBeenSet = true;
    }

    if (value.HasMember("AbnormalSynNum") && !value["AbnormalSynNum"].IsNull())
    {
        if (!value["AbnormalSynNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.AbnormalSynNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalSynNum = value["AbnormalSynNum"].GetInt64();
        m_abnormalSynNumHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.ConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetInt64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("EmptyConnectProtect") && !value["EmptyConnectProtect"].IsNull())
    {
        if (!value["EmptyConnectProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.EmptyConnectProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emptyConnectProtect = string(value["EmptyConnectProtect"].GetString());
        m_emptyConnectProtectHasBeenSet = true;
    }

    if (value.HasMember("UdpShard") && !value["UdpShard"].IsNull())
    {
        if (!value["UdpShard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAntiPly.UdpShard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_udpShard = string(value["UdpShard"].GetString());
        m_udpShardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAntiPly::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dropTcpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropTcp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropTcp.c_str(), allocator).Move(), allocator);
    }

    if (m_dropUdpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropUdp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropUdp.c_str(), allocator).Move(), allocator);
    }

    if (m_dropIcmpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropIcmp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropIcmp.c_str(), allocator).Move(), allocator);
    }

    if (m_dropOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropOther.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCreateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCreateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceCreateLimit, allocator);
    }

    if (m_sourceConnectLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConnectLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceConnectLimit, allocator);
    }

    if (m_destinationCreateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCreateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destinationCreateLimit, allocator);
    }

    if (m_destinationConnectLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationConnectLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destinationConnectLimit, allocator);
    }

    if (m_abnormalConnectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalConnectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalConnectNum, allocator);
    }

    if (m_abnormalSynRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalSynRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalSynRatio, allocator);
    }

    if (m_abnormalSynNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalSynNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalSynNum, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_emptyConnectProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyConnectProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emptyConnectProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_udpShardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpShard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_udpShard.c_str(), allocator).Move(), allocator);
    }

}


string DDoSAntiPly::GetDropTcp() const
{
    return m_dropTcp;
}

void DDoSAntiPly::SetDropTcp(const string& _dropTcp)
{
    m_dropTcp = _dropTcp;
    m_dropTcpHasBeenSet = true;
}

bool DDoSAntiPly::DropTcpHasBeenSet() const
{
    return m_dropTcpHasBeenSet;
}

string DDoSAntiPly::GetDropUdp() const
{
    return m_dropUdp;
}

void DDoSAntiPly::SetDropUdp(const string& _dropUdp)
{
    m_dropUdp = _dropUdp;
    m_dropUdpHasBeenSet = true;
}

bool DDoSAntiPly::DropUdpHasBeenSet() const
{
    return m_dropUdpHasBeenSet;
}

string DDoSAntiPly::GetDropIcmp() const
{
    return m_dropIcmp;
}

void DDoSAntiPly::SetDropIcmp(const string& _dropIcmp)
{
    m_dropIcmp = _dropIcmp;
    m_dropIcmpHasBeenSet = true;
}

bool DDoSAntiPly::DropIcmpHasBeenSet() const
{
    return m_dropIcmpHasBeenSet;
}

string DDoSAntiPly::GetDropOther() const
{
    return m_dropOther;
}

void DDoSAntiPly::SetDropOther(const string& _dropOther)
{
    m_dropOther = _dropOther;
    m_dropOtherHasBeenSet = true;
}

bool DDoSAntiPly::DropOtherHasBeenSet() const
{
    return m_dropOtherHasBeenSet;
}

int64_t DDoSAntiPly::GetSourceCreateLimit() const
{
    return m_sourceCreateLimit;
}

void DDoSAntiPly::SetSourceCreateLimit(const int64_t& _sourceCreateLimit)
{
    m_sourceCreateLimit = _sourceCreateLimit;
    m_sourceCreateLimitHasBeenSet = true;
}

bool DDoSAntiPly::SourceCreateLimitHasBeenSet() const
{
    return m_sourceCreateLimitHasBeenSet;
}

int64_t DDoSAntiPly::GetSourceConnectLimit() const
{
    return m_sourceConnectLimit;
}

void DDoSAntiPly::SetSourceConnectLimit(const int64_t& _sourceConnectLimit)
{
    m_sourceConnectLimit = _sourceConnectLimit;
    m_sourceConnectLimitHasBeenSet = true;
}

bool DDoSAntiPly::SourceConnectLimitHasBeenSet() const
{
    return m_sourceConnectLimitHasBeenSet;
}

int64_t DDoSAntiPly::GetDestinationCreateLimit() const
{
    return m_destinationCreateLimit;
}

void DDoSAntiPly::SetDestinationCreateLimit(const int64_t& _destinationCreateLimit)
{
    m_destinationCreateLimit = _destinationCreateLimit;
    m_destinationCreateLimitHasBeenSet = true;
}

bool DDoSAntiPly::DestinationCreateLimitHasBeenSet() const
{
    return m_destinationCreateLimitHasBeenSet;
}

int64_t DDoSAntiPly::GetDestinationConnectLimit() const
{
    return m_destinationConnectLimit;
}

void DDoSAntiPly::SetDestinationConnectLimit(const int64_t& _destinationConnectLimit)
{
    m_destinationConnectLimit = _destinationConnectLimit;
    m_destinationConnectLimitHasBeenSet = true;
}

bool DDoSAntiPly::DestinationConnectLimitHasBeenSet() const
{
    return m_destinationConnectLimitHasBeenSet;
}

int64_t DDoSAntiPly::GetAbnormalConnectNum() const
{
    return m_abnormalConnectNum;
}

void DDoSAntiPly::SetAbnormalConnectNum(const int64_t& _abnormalConnectNum)
{
    m_abnormalConnectNum = _abnormalConnectNum;
    m_abnormalConnectNumHasBeenSet = true;
}

bool DDoSAntiPly::AbnormalConnectNumHasBeenSet() const
{
    return m_abnormalConnectNumHasBeenSet;
}

int64_t DDoSAntiPly::GetAbnormalSynRatio() const
{
    return m_abnormalSynRatio;
}

void DDoSAntiPly::SetAbnormalSynRatio(const int64_t& _abnormalSynRatio)
{
    m_abnormalSynRatio = _abnormalSynRatio;
    m_abnormalSynRatioHasBeenSet = true;
}

bool DDoSAntiPly::AbnormalSynRatioHasBeenSet() const
{
    return m_abnormalSynRatioHasBeenSet;
}

int64_t DDoSAntiPly::GetAbnormalSynNum() const
{
    return m_abnormalSynNum;
}

void DDoSAntiPly::SetAbnormalSynNum(const int64_t& _abnormalSynNum)
{
    m_abnormalSynNum = _abnormalSynNum;
    m_abnormalSynNumHasBeenSet = true;
}

bool DDoSAntiPly::AbnormalSynNumHasBeenSet() const
{
    return m_abnormalSynNumHasBeenSet;
}

int64_t DDoSAntiPly::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void DDoSAntiPly::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool DDoSAntiPly::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

string DDoSAntiPly::GetEmptyConnectProtect() const
{
    return m_emptyConnectProtect;
}

void DDoSAntiPly::SetEmptyConnectProtect(const string& _emptyConnectProtect)
{
    m_emptyConnectProtect = _emptyConnectProtect;
    m_emptyConnectProtectHasBeenSet = true;
}

bool DDoSAntiPly::EmptyConnectProtectHasBeenSet() const
{
    return m_emptyConnectProtectHasBeenSet;
}

string DDoSAntiPly::GetUdpShard() const
{
    return m_udpShard;
}

void DDoSAntiPly::SetUdpShard(const string& _udpShard)
{
    m_udpShard = _udpShard;
    m_udpShardHasBeenSet = true;
}

bool DDoSAntiPly::UdpShardHasBeenSet() const
{
    return m_udpShardHasBeenSet;
}

