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

#include <tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDoSPolicyDropOption::DDoSPolicyDropOption() :
    m_dropTcpHasBeenSet(false),
    m_dropUdpHasBeenSet(false),
    m_dropIcmpHasBeenSet(false),
    m_dropOtherHasBeenSet(false),
    m_dropAbroadHasBeenSet(false),
    m_checkSyncConnHasBeenSet(false),
    m_sdNewLimitHasBeenSet(false),
    m_dstNewLimitHasBeenSet(false),
    m_sdConnLimitHasBeenSet(false),
    m_dstConnLimitHasBeenSet(false),
    m_badConnThresholdHasBeenSet(false),
    m_nullConnEnableHasBeenSet(false),
    m_connTimeoutHasBeenSet(false),
    m_synRateHasBeenSet(false),
    m_synLimitHasBeenSet(false),
    m_dTcpMbpsLimitHasBeenSet(false),
    m_dUdpMbpsLimitHasBeenSet(false),
    m_dIcmpMbpsLimitHasBeenSet(false),
    m_dOtherMbpsLimitHasBeenSet(false)
{
}

CoreInternalOutcome DDoSPolicyDropOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DropTcp") && !value["DropTcp"].IsNull())
    {
        if (!value["DropTcp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DropTcp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropTcp = value["DropTcp"].GetUint64();
        m_dropTcpHasBeenSet = true;
    }

    if (value.HasMember("DropUdp") && !value["DropUdp"].IsNull())
    {
        if (!value["DropUdp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DropUdp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropUdp = value["DropUdp"].GetUint64();
        m_dropUdpHasBeenSet = true;
    }

    if (value.HasMember("DropIcmp") && !value["DropIcmp"].IsNull())
    {
        if (!value["DropIcmp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DropIcmp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropIcmp = value["DropIcmp"].GetUint64();
        m_dropIcmpHasBeenSet = true;
    }

    if (value.HasMember("DropOther") && !value["DropOther"].IsNull())
    {
        if (!value["DropOther"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DropOther` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropOther = value["DropOther"].GetUint64();
        m_dropOtherHasBeenSet = true;
    }

    if (value.HasMember("DropAbroad") && !value["DropAbroad"].IsNull())
    {
        if (!value["DropAbroad"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DropAbroad` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropAbroad = value["DropAbroad"].GetUint64();
        m_dropAbroadHasBeenSet = true;
    }

    if (value.HasMember("CheckSyncConn") && !value["CheckSyncConn"].IsNull())
    {
        if (!value["CheckSyncConn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.CheckSyncConn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkSyncConn = value["CheckSyncConn"].GetUint64();
        m_checkSyncConnHasBeenSet = true;
    }

    if (value.HasMember("SdNewLimit") && !value["SdNewLimit"].IsNull())
    {
        if (!value["SdNewLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.SdNewLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdNewLimit = value["SdNewLimit"].GetUint64();
        m_sdNewLimitHasBeenSet = true;
    }

    if (value.HasMember("DstNewLimit") && !value["DstNewLimit"].IsNull())
    {
        if (!value["DstNewLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DstNewLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstNewLimit = value["DstNewLimit"].GetUint64();
        m_dstNewLimitHasBeenSet = true;
    }

    if (value.HasMember("SdConnLimit") && !value["SdConnLimit"].IsNull())
    {
        if (!value["SdConnLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.SdConnLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdConnLimit = value["SdConnLimit"].GetUint64();
        m_sdConnLimitHasBeenSet = true;
    }

    if (value.HasMember("DstConnLimit") && !value["DstConnLimit"].IsNull())
    {
        if (!value["DstConnLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DstConnLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstConnLimit = value["DstConnLimit"].GetUint64();
        m_dstConnLimitHasBeenSet = true;
    }

    if (value.HasMember("BadConnThreshold") && !value["BadConnThreshold"].IsNull())
    {
        if (!value["BadConnThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.BadConnThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_badConnThreshold = value["BadConnThreshold"].GetUint64();
        m_badConnThresholdHasBeenSet = true;
    }

    if (value.HasMember("NullConnEnable") && !value["NullConnEnable"].IsNull())
    {
        if (!value["NullConnEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.NullConnEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nullConnEnable = value["NullConnEnable"].GetUint64();
        m_nullConnEnableHasBeenSet = true;
    }

    if (value.HasMember("ConnTimeout") && !value["ConnTimeout"].IsNull())
    {
        if (!value["ConnTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.ConnTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connTimeout = value["ConnTimeout"].GetUint64();
        m_connTimeoutHasBeenSet = true;
    }

    if (value.HasMember("SynRate") && !value["SynRate"].IsNull())
    {
        if (!value["SynRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.SynRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synRate = value["SynRate"].GetUint64();
        m_synRateHasBeenSet = true;
    }

    if (value.HasMember("SynLimit") && !value["SynLimit"].IsNull())
    {
        if (!value["SynLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.SynLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synLimit = value["SynLimit"].GetUint64();
        m_synLimitHasBeenSet = true;
    }

    if (value.HasMember("DTcpMbpsLimit") && !value["DTcpMbpsLimit"].IsNull())
    {
        if (!value["DTcpMbpsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DTcpMbpsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dTcpMbpsLimit = value["DTcpMbpsLimit"].GetUint64();
        m_dTcpMbpsLimitHasBeenSet = true;
    }

    if (value.HasMember("DUdpMbpsLimit") && !value["DUdpMbpsLimit"].IsNull())
    {
        if (!value["DUdpMbpsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DUdpMbpsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dUdpMbpsLimit = value["DUdpMbpsLimit"].GetUint64();
        m_dUdpMbpsLimitHasBeenSet = true;
    }

    if (value.HasMember("DIcmpMbpsLimit") && !value["DIcmpMbpsLimit"].IsNull())
    {
        if (!value["DIcmpMbpsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DIcmpMbpsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dIcmpMbpsLimit = value["DIcmpMbpsLimit"].GetUint64();
        m_dIcmpMbpsLimitHasBeenSet = true;
    }

    if (value.HasMember("DOtherMbpsLimit") && !value["DOtherMbpsLimit"].IsNull())
    {
        if (!value["DOtherMbpsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyDropOption.DOtherMbpsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dOtherMbpsLimit = value["DOtherMbpsLimit"].GetUint64();
        m_dOtherMbpsLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSPolicyDropOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dropAbroadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropAbroad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropAbroad, allocator);
    }

    if (m_checkSyncConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSyncConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkSyncConn, allocator);
    }

    if (m_sdNewLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdNewLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdNewLimit, allocator);
    }

    if (m_dstNewLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNewLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstNewLimit, allocator);
    }

    if (m_sdConnLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdConnLimit, allocator);
    }

    if (m_dstConnLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstConnLimit, allocator);
    }

    if (m_badConnThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BadConnThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_badConnThreshold, allocator);
    }

    if (m_nullConnEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NullConnEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nullConnEnable, allocator);
    }

    if (m_connTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connTimeout, allocator);
    }

    if (m_synRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synRate, allocator);
    }

    if (m_synLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synLimit, allocator);
    }

    if (m_dTcpMbpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DTcpMbpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dTcpMbpsLimit, allocator);
    }

    if (m_dUdpMbpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DUdpMbpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dUdpMbpsLimit, allocator);
    }

    if (m_dIcmpMbpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DIcmpMbpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dIcmpMbpsLimit, allocator);
    }

    if (m_dOtherMbpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DOtherMbpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dOtherMbpsLimit, allocator);
    }

}


uint64_t DDoSPolicyDropOption::GetDropTcp() const
{
    return m_dropTcp;
}

void DDoSPolicyDropOption::SetDropTcp(const uint64_t& _dropTcp)
{
    m_dropTcp = _dropTcp;
    m_dropTcpHasBeenSet = true;
}

bool DDoSPolicyDropOption::DropTcpHasBeenSet() const
{
    return m_dropTcpHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDropUdp() const
{
    return m_dropUdp;
}

void DDoSPolicyDropOption::SetDropUdp(const uint64_t& _dropUdp)
{
    m_dropUdp = _dropUdp;
    m_dropUdpHasBeenSet = true;
}

bool DDoSPolicyDropOption::DropUdpHasBeenSet() const
{
    return m_dropUdpHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDropIcmp() const
{
    return m_dropIcmp;
}

void DDoSPolicyDropOption::SetDropIcmp(const uint64_t& _dropIcmp)
{
    m_dropIcmp = _dropIcmp;
    m_dropIcmpHasBeenSet = true;
}

bool DDoSPolicyDropOption::DropIcmpHasBeenSet() const
{
    return m_dropIcmpHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDropOther() const
{
    return m_dropOther;
}

void DDoSPolicyDropOption::SetDropOther(const uint64_t& _dropOther)
{
    m_dropOther = _dropOther;
    m_dropOtherHasBeenSet = true;
}

bool DDoSPolicyDropOption::DropOtherHasBeenSet() const
{
    return m_dropOtherHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDropAbroad() const
{
    return m_dropAbroad;
}

void DDoSPolicyDropOption::SetDropAbroad(const uint64_t& _dropAbroad)
{
    m_dropAbroad = _dropAbroad;
    m_dropAbroadHasBeenSet = true;
}

bool DDoSPolicyDropOption::DropAbroadHasBeenSet() const
{
    return m_dropAbroadHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetCheckSyncConn() const
{
    return m_checkSyncConn;
}

void DDoSPolicyDropOption::SetCheckSyncConn(const uint64_t& _checkSyncConn)
{
    m_checkSyncConn = _checkSyncConn;
    m_checkSyncConnHasBeenSet = true;
}

bool DDoSPolicyDropOption::CheckSyncConnHasBeenSet() const
{
    return m_checkSyncConnHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetSdNewLimit() const
{
    return m_sdNewLimit;
}

void DDoSPolicyDropOption::SetSdNewLimit(const uint64_t& _sdNewLimit)
{
    m_sdNewLimit = _sdNewLimit;
    m_sdNewLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::SdNewLimitHasBeenSet() const
{
    return m_sdNewLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDstNewLimit() const
{
    return m_dstNewLimit;
}

void DDoSPolicyDropOption::SetDstNewLimit(const uint64_t& _dstNewLimit)
{
    m_dstNewLimit = _dstNewLimit;
    m_dstNewLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DstNewLimitHasBeenSet() const
{
    return m_dstNewLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetSdConnLimit() const
{
    return m_sdConnLimit;
}

void DDoSPolicyDropOption::SetSdConnLimit(const uint64_t& _sdConnLimit)
{
    m_sdConnLimit = _sdConnLimit;
    m_sdConnLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::SdConnLimitHasBeenSet() const
{
    return m_sdConnLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDstConnLimit() const
{
    return m_dstConnLimit;
}

void DDoSPolicyDropOption::SetDstConnLimit(const uint64_t& _dstConnLimit)
{
    m_dstConnLimit = _dstConnLimit;
    m_dstConnLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DstConnLimitHasBeenSet() const
{
    return m_dstConnLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetBadConnThreshold() const
{
    return m_badConnThreshold;
}

void DDoSPolicyDropOption::SetBadConnThreshold(const uint64_t& _badConnThreshold)
{
    m_badConnThreshold = _badConnThreshold;
    m_badConnThresholdHasBeenSet = true;
}

bool DDoSPolicyDropOption::BadConnThresholdHasBeenSet() const
{
    return m_badConnThresholdHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetNullConnEnable() const
{
    return m_nullConnEnable;
}

void DDoSPolicyDropOption::SetNullConnEnable(const uint64_t& _nullConnEnable)
{
    m_nullConnEnable = _nullConnEnable;
    m_nullConnEnableHasBeenSet = true;
}

bool DDoSPolicyDropOption::NullConnEnableHasBeenSet() const
{
    return m_nullConnEnableHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetConnTimeout() const
{
    return m_connTimeout;
}

void DDoSPolicyDropOption::SetConnTimeout(const uint64_t& _connTimeout)
{
    m_connTimeout = _connTimeout;
    m_connTimeoutHasBeenSet = true;
}

bool DDoSPolicyDropOption::ConnTimeoutHasBeenSet() const
{
    return m_connTimeoutHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetSynRate() const
{
    return m_synRate;
}

void DDoSPolicyDropOption::SetSynRate(const uint64_t& _synRate)
{
    m_synRate = _synRate;
    m_synRateHasBeenSet = true;
}

bool DDoSPolicyDropOption::SynRateHasBeenSet() const
{
    return m_synRateHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetSynLimit() const
{
    return m_synLimit;
}

void DDoSPolicyDropOption::SetSynLimit(const uint64_t& _synLimit)
{
    m_synLimit = _synLimit;
    m_synLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::SynLimitHasBeenSet() const
{
    return m_synLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDTcpMbpsLimit() const
{
    return m_dTcpMbpsLimit;
}

void DDoSPolicyDropOption::SetDTcpMbpsLimit(const uint64_t& _dTcpMbpsLimit)
{
    m_dTcpMbpsLimit = _dTcpMbpsLimit;
    m_dTcpMbpsLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DTcpMbpsLimitHasBeenSet() const
{
    return m_dTcpMbpsLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDUdpMbpsLimit() const
{
    return m_dUdpMbpsLimit;
}

void DDoSPolicyDropOption::SetDUdpMbpsLimit(const uint64_t& _dUdpMbpsLimit)
{
    m_dUdpMbpsLimit = _dUdpMbpsLimit;
    m_dUdpMbpsLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DUdpMbpsLimitHasBeenSet() const
{
    return m_dUdpMbpsLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDIcmpMbpsLimit() const
{
    return m_dIcmpMbpsLimit;
}

void DDoSPolicyDropOption::SetDIcmpMbpsLimit(const uint64_t& _dIcmpMbpsLimit)
{
    m_dIcmpMbpsLimit = _dIcmpMbpsLimit;
    m_dIcmpMbpsLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DIcmpMbpsLimitHasBeenSet() const
{
    return m_dIcmpMbpsLimitHasBeenSet;
}

uint64_t DDoSPolicyDropOption::GetDOtherMbpsLimit() const
{
    return m_dOtherMbpsLimit;
}

void DDoSPolicyDropOption::SetDOtherMbpsLimit(const uint64_t& _dOtherMbpsLimit)
{
    m_dOtherMbpsLimit = _dOtherMbpsLimit;
    m_dOtherMbpsLimitHasBeenSet = true;
}

bool DDoSPolicyDropOption::DOtherMbpsLimitHasBeenSet() const
{
    return m_dOtherMbpsLimitHasBeenSet;
}

