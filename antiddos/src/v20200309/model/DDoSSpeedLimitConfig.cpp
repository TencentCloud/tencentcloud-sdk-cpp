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

#include <tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DDoSSpeedLimitConfig::DDoSSpeedLimitConfig() :
    m_modeHasBeenSet(false),
    m_speedValuesHasBeenSet(false),
    m_dstPortScopesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_protocolListHasBeenSet(false),
    m_dstPortListHasBeenSet(false)
{
}

CoreInternalOutcome DDoSSpeedLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("SpeedValues") && !value["SpeedValues"].IsNull())
    {
        if (!value["SpeedValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.SpeedValues` is not array type"));

        const rapidjson::Value &tmpValue = value["SpeedValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpeedValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_speedValues.push_back(item);
        }
        m_speedValuesHasBeenSet = true;
    }

    if (value.HasMember("DstPortScopes") && !value["DstPortScopes"].IsNull())
    {
        if (!value["DstPortScopes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.DstPortScopes` is not array type"));

        const rapidjson::Value &tmpValue = value["DstPortScopes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortSegment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstPortScopes.push_back(item);
        }
        m_dstPortScopesHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProtocolList") && !value["ProtocolList"].IsNull())
    {
        if (!value["ProtocolList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.ProtocolList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolList = string(value["ProtocolList"].GetString());
        m_protocolListHasBeenSet = true;
    }

    if (value.HasMember("DstPortList") && !value["DstPortList"].IsNull())
    {
        if (!value["DstPortList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfig.DstPortList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPortList = string(value["DstPortList"].GetString());
        m_dstPortListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSSpeedLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_speedValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_speedValues.begin(); itr != m_speedValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dstPortScopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPortScopes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstPortScopes.begin(); itr != m_dstPortScopes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolList.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPortList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPortList.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DDoSSpeedLimitConfig::GetMode() const
{
    return m_mode;
}

void DDoSSpeedLimitConfig::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<SpeedValue> DDoSSpeedLimitConfig::GetSpeedValues() const
{
    return m_speedValues;
}

void DDoSSpeedLimitConfig::SetSpeedValues(const vector<SpeedValue>& _speedValues)
{
    m_speedValues = _speedValues;
    m_speedValuesHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::SpeedValuesHasBeenSet() const
{
    return m_speedValuesHasBeenSet;
}

vector<PortSegment> DDoSSpeedLimitConfig::GetDstPortScopes() const
{
    return m_dstPortScopes;
}

void DDoSSpeedLimitConfig::SetDstPortScopes(const vector<PortSegment>& _dstPortScopes)
{
    m_dstPortScopes = _dstPortScopes;
    m_dstPortScopesHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::DstPortScopesHasBeenSet() const
{
    return m_dstPortScopesHasBeenSet;
}

string DDoSSpeedLimitConfig::GetId() const
{
    return m_id;
}

void DDoSSpeedLimitConfig::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DDoSSpeedLimitConfig::GetProtocolList() const
{
    return m_protocolList;
}

void DDoSSpeedLimitConfig::SetProtocolList(const string& _protocolList)
{
    m_protocolList = _protocolList;
    m_protocolListHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::ProtocolListHasBeenSet() const
{
    return m_protocolListHasBeenSet;
}

string DDoSSpeedLimitConfig::GetDstPortList() const
{
    return m_dstPortList;
}

void DDoSSpeedLimitConfig::SetDstPortList(const string& _dstPortList)
{
    m_dstPortList = _dstPortList;
    m_dstPortListHasBeenSet = true;
}

bool DDoSSpeedLimitConfig::DstPortListHasBeenSet() const
{
    return m_dstPortListHasBeenSet;
}

