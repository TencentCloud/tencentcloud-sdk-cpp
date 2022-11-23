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

#include <tencentcloud/antiddos/v20200309/model/ProtectThresholdRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ProtectThresholdRelation::ProtectThresholdRelation() :
    m_dDoSLevelHasBeenSet(false),
    m_dDoSThresholdHasBeenSet(false),
    m_dDoSAIHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false),
    m_listenerCcThresholdListHasBeenSet(false),
    m_synFloodThresholdHasBeenSet(false),
    m_synFloodPktThresholdHasBeenSet(false),
    m_udpFloodThresholdHasBeenSet(false),
    m_udpFloodPktThresholdHasBeenSet(false),
    m_ackFloodThresholdHasBeenSet(false),
    m_ackFloodPktThresholdHasBeenSet(false),
    m_synAckFloodThresholdHasBeenSet(false),
    m_synAckFloodPktThresholdHasBeenSet(false),
    m_rstFloodThresholdHasBeenSet(false),
    m_rstFloodPktThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ProtectThresholdRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DDoSLevel") && !value["DDoSLevel"].IsNull())
    {
        if (!value["DDoSLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.DDoSLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDoSLevel = string(value["DDoSLevel"].GetString());
        m_dDoSLevelHasBeenSet = true;
    }

    if (value.HasMember("DDoSThreshold") && !value["DDoSThreshold"].IsNull())
    {
        if (!value["DDoSThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.DDoSThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dDoSThreshold = value["DDoSThreshold"].GetUint64();
        m_dDoSThresholdHasBeenSet = true;
    }

    if (value.HasMember("DDoSAI") && !value["DDoSAI"].IsNull())
    {
        if (!value["DDoSAI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.DDoSAI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDoSAI = string(value["DDoSAI"].GetString());
        m_dDoSAIHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.CCEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetUint64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("CCThreshold") && !value["CCThreshold"].IsNull())
    {
        if (!value["CCThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.CCThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = value["CCThreshold"].GetUint64();
        m_cCThresholdHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.InstanceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailList.push_back(item);
        }
        m_instanceDetailListHasBeenSet = true;
    }

    if (value.HasMember("ListenerCcThresholdList") && !value["ListenerCcThresholdList"].IsNull())
    {
        if (!value["ListenerCcThresholdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.ListenerCcThresholdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ListenerCcThresholdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListenerCcThreholdConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listenerCcThresholdList.push_back(item);
        }
        m_listenerCcThresholdListHasBeenSet = true;
    }

    if (value.HasMember("SynFloodThreshold") && !value["SynFloodThreshold"].IsNull())
    {
        if (!value["SynFloodThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.SynFloodThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synFloodThreshold = value["SynFloodThreshold"].GetUint64();
        m_synFloodThresholdHasBeenSet = true;
    }

    if (value.HasMember("SynFloodPktThreshold") && !value["SynFloodPktThreshold"].IsNull())
    {
        if (!value["SynFloodPktThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.SynFloodPktThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synFloodPktThreshold = value["SynFloodPktThreshold"].GetUint64();
        m_synFloodPktThresholdHasBeenSet = true;
    }

    if (value.HasMember("UdpFloodThreshold") && !value["UdpFloodThreshold"].IsNull())
    {
        if (!value["UdpFloodThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.UdpFloodThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_udpFloodThreshold = value["UdpFloodThreshold"].GetUint64();
        m_udpFloodThresholdHasBeenSet = true;
    }

    if (value.HasMember("UdpFloodPktThreshold") && !value["UdpFloodPktThreshold"].IsNull())
    {
        if (!value["UdpFloodPktThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.UdpFloodPktThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_udpFloodPktThreshold = value["UdpFloodPktThreshold"].GetUint64();
        m_udpFloodPktThresholdHasBeenSet = true;
    }

    if (value.HasMember("AckFloodThreshold") && !value["AckFloodThreshold"].IsNull())
    {
        if (!value["AckFloodThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.AckFloodThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ackFloodThreshold = value["AckFloodThreshold"].GetUint64();
        m_ackFloodThresholdHasBeenSet = true;
    }

    if (value.HasMember("AckFloodPktThreshold") && !value["AckFloodPktThreshold"].IsNull())
    {
        if (!value["AckFloodPktThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.AckFloodPktThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ackFloodPktThreshold = value["AckFloodPktThreshold"].GetUint64();
        m_ackFloodPktThresholdHasBeenSet = true;
    }

    if (value.HasMember("SynAckFloodThreshold") && !value["SynAckFloodThreshold"].IsNull())
    {
        if (!value["SynAckFloodThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.SynAckFloodThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synAckFloodThreshold = value["SynAckFloodThreshold"].GetUint64();
        m_synAckFloodThresholdHasBeenSet = true;
    }

    if (value.HasMember("SynAckFloodPktThreshold") && !value["SynAckFloodPktThreshold"].IsNull())
    {
        if (!value["SynAckFloodPktThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.SynAckFloodPktThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synAckFloodPktThreshold = value["SynAckFloodPktThreshold"].GetUint64();
        m_synAckFloodPktThresholdHasBeenSet = true;
    }

    if (value.HasMember("RstFloodThreshold") && !value["RstFloodThreshold"].IsNull())
    {
        if (!value["RstFloodThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.RstFloodThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rstFloodThreshold = value["RstFloodThreshold"].GetUint64();
        m_rstFloodThresholdHasBeenSet = true;
    }

    if (value.HasMember("RstFloodPktThreshold") && !value["RstFloodPktThreshold"].IsNull())
    {
        if (!value["RstFloodPktThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectThresholdRelation.RstFloodPktThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rstFloodPktThreshold = value["RstFloodPktThreshold"].GetUint64();
        m_rstFloodPktThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectThresholdRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dDoSLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDoSLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_dDoSThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dDoSThreshold, allocator);
    }

    if (m_dDoSAIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSAI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDoSAI.c_str(), allocator).Move(), allocator);
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

    if (m_instanceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailList.begin(); itr != m_instanceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listenerCcThresholdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerCcThresholdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listenerCcThresholdList.begin(); itr != m_listenerCcThresholdList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_synFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synFloodThreshold, allocator);
    }

    if (m_synFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synFloodPktThreshold, allocator);
    }

    if (m_udpFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_udpFloodThreshold, allocator);
    }

    if (m_udpFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_udpFloodPktThreshold, allocator);
    }

    if (m_ackFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ackFloodThreshold, allocator);
    }

    if (m_ackFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ackFloodPktThreshold, allocator);
    }

    if (m_synAckFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynAckFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synAckFloodThreshold, allocator);
    }

    if (m_synAckFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynAckFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synAckFloodPktThreshold, allocator);
    }

    if (m_rstFloodThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RstFloodThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rstFloodThreshold, allocator);
    }

    if (m_rstFloodPktThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RstFloodPktThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rstFloodPktThreshold, allocator);
    }

}


string ProtectThresholdRelation::GetDDoSLevel() const
{
    return m_dDoSLevel;
}

void ProtectThresholdRelation::SetDDoSLevel(const string& _dDoSLevel)
{
    m_dDoSLevel = _dDoSLevel;
    m_dDoSLevelHasBeenSet = true;
}

bool ProtectThresholdRelation::DDoSLevelHasBeenSet() const
{
    return m_dDoSLevelHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetDDoSThreshold() const
{
    return m_dDoSThreshold;
}

void ProtectThresholdRelation::SetDDoSThreshold(const uint64_t& _dDoSThreshold)
{
    m_dDoSThreshold = _dDoSThreshold;
    m_dDoSThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::DDoSThresholdHasBeenSet() const
{
    return m_dDoSThresholdHasBeenSet;
}

string ProtectThresholdRelation::GetDDoSAI() const
{
    return m_dDoSAI;
}

void ProtectThresholdRelation::SetDDoSAI(const string& _dDoSAI)
{
    m_dDoSAI = _dDoSAI;
    m_dDoSAIHasBeenSet = true;
}

bool ProtectThresholdRelation::DDoSAIHasBeenSet() const
{
    return m_dDoSAIHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetCCEnable() const
{
    return m_cCEnable;
}

void ProtectThresholdRelation::SetCCEnable(const uint64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool ProtectThresholdRelation::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetCCThreshold() const
{
    return m_cCThreshold;
}

void ProtectThresholdRelation::SetCCThreshold(const uint64_t& _cCThreshold)
{
    m_cCThreshold = _cCThreshold;
    m_cCThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}

vector<InstanceRelation> ProtectThresholdRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void ProtectThresholdRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool ProtectThresholdRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

vector<ListenerCcThreholdConfig> ProtectThresholdRelation::GetListenerCcThresholdList() const
{
    return m_listenerCcThresholdList;
}

void ProtectThresholdRelation::SetListenerCcThresholdList(const vector<ListenerCcThreholdConfig>& _listenerCcThresholdList)
{
    m_listenerCcThresholdList = _listenerCcThresholdList;
    m_listenerCcThresholdListHasBeenSet = true;
}

bool ProtectThresholdRelation::ListenerCcThresholdListHasBeenSet() const
{
    return m_listenerCcThresholdListHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetSynFloodThreshold() const
{
    return m_synFloodThreshold;
}

void ProtectThresholdRelation::SetSynFloodThreshold(const uint64_t& _synFloodThreshold)
{
    m_synFloodThreshold = _synFloodThreshold;
    m_synFloodThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::SynFloodThresholdHasBeenSet() const
{
    return m_synFloodThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetSynFloodPktThreshold() const
{
    return m_synFloodPktThreshold;
}

void ProtectThresholdRelation::SetSynFloodPktThreshold(const uint64_t& _synFloodPktThreshold)
{
    m_synFloodPktThreshold = _synFloodPktThreshold;
    m_synFloodPktThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::SynFloodPktThresholdHasBeenSet() const
{
    return m_synFloodPktThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetUdpFloodThreshold() const
{
    return m_udpFloodThreshold;
}

void ProtectThresholdRelation::SetUdpFloodThreshold(const uint64_t& _udpFloodThreshold)
{
    m_udpFloodThreshold = _udpFloodThreshold;
    m_udpFloodThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::UdpFloodThresholdHasBeenSet() const
{
    return m_udpFloodThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetUdpFloodPktThreshold() const
{
    return m_udpFloodPktThreshold;
}

void ProtectThresholdRelation::SetUdpFloodPktThreshold(const uint64_t& _udpFloodPktThreshold)
{
    m_udpFloodPktThreshold = _udpFloodPktThreshold;
    m_udpFloodPktThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::UdpFloodPktThresholdHasBeenSet() const
{
    return m_udpFloodPktThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetAckFloodThreshold() const
{
    return m_ackFloodThreshold;
}

void ProtectThresholdRelation::SetAckFloodThreshold(const uint64_t& _ackFloodThreshold)
{
    m_ackFloodThreshold = _ackFloodThreshold;
    m_ackFloodThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::AckFloodThresholdHasBeenSet() const
{
    return m_ackFloodThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetAckFloodPktThreshold() const
{
    return m_ackFloodPktThreshold;
}

void ProtectThresholdRelation::SetAckFloodPktThreshold(const uint64_t& _ackFloodPktThreshold)
{
    m_ackFloodPktThreshold = _ackFloodPktThreshold;
    m_ackFloodPktThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::AckFloodPktThresholdHasBeenSet() const
{
    return m_ackFloodPktThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetSynAckFloodThreshold() const
{
    return m_synAckFloodThreshold;
}

void ProtectThresholdRelation::SetSynAckFloodThreshold(const uint64_t& _synAckFloodThreshold)
{
    m_synAckFloodThreshold = _synAckFloodThreshold;
    m_synAckFloodThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::SynAckFloodThresholdHasBeenSet() const
{
    return m_synAckFloodThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetSynAckFloodPktThreshold() const
{
    return m_synAckFloodPktThreshold;
}

void ProtectThresholdRelation::SetSynAckFloodPktThreshold(const uint64_t& _synAckFloodPktThreshold)
{
    m_synAckFloodPktThreshold = _synAckFloodPktThreshold;
    m_synAckFloodPktThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::SynAckFloodPktThresholdHasBeenSet() const
{
    return m_synAckFloodPktThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetRstFloodThreshold() const
{
    return m_rstFloodThreshold;
}

void ProtectThresholdRelation::SetRstFloodThreshold(const uint64_t& _rstFloodThreshold)
{
    m_rstFloodThreshold = _rstFloodThreshold;
    m_rstFloodThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::RstFloodThresholdHasBeenSet() const
{
    return m_rstFloodThresholdHasBeenSet;
}

uint64_t ProtectThresholdRelation::GetRstFloodPktThreshold() const
{
    return m_rstFloodPktThreshold;
}

void ProtectThresholdRelation::SetRstFloodPktThreshold(const uint64_t& _rstFloodPktThreshold)
{
    m_rstFloodPktThreshold = _rstFloodPktThreshold;
    m_rstFloodPktThresholdHasBeenSet = true;
}

bool ProtectThresholdRelation::RstFloodPktThresholdHasBeenSet() const
{
    return m_rstFloodPktThresholdHasBeenSet;
}

