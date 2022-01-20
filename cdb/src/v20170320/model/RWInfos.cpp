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

#include <tencentcloud/cdb/v20170320/model/RWInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RWInfos::RWInfos() :
    m_instCountHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_isKickOutHasBeenSet(false),
    m_minCountHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_rWInstInfoHasBeenSet(false)
{
}

CoreInternalOutcome RWInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstCount") && !value["InstCount"].IsNull())
    {
        if (!value["InstCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.InstCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instCount = value["InstCount"].GetUint64();
        m_instCountHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("IsKickOut") && !value["IsKickOut"].IsNull())
    {
        if (!value["IsKickOut"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.IsKickOut` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isKickOut = value["IsKickOut"].GetBool();
        m_isKickOutHasBeenSet = true;
    }

    if (value.HasMember("MinCount") && !value["MinCount"].IsNull())
    {
        if (!value["MinCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.MinCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minCount = value["MinCount"].GetUint64();
        m_minCountHasBeenSet = true;
    }

    if (value.HasMember("MaxDelay") && !value["MaxDelay"].IsNull())
    {
        if (!value["MaxDelay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.MaxDelay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelay = value["MaxDelay"].GetUint64();
        m_maxDelayHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.FailOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = value["FailOver"].GetBool();
        m_failOverHasBeenSet = true;
    }

    if (value.HasMember("AutoAddRo") && !value["AutoAddRo"].IsNull())
    {
        if (!value["AutoAddRo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RWInfos.AutoAddRo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoAddRo = value["AutoAddRo"].GetBool();
        m_autoAddRoHasBeenSet = true;
    }

    if (value.HasMember("RWInstInfo") && !value["RWInstInfo"].IsNull())
    {
        if (!value["RWInstInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RWInfos.RWInstInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RWInstInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RWInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rWInstInfo.push_back(item);
        }
        m_rWInstInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RWInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instCount, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isKickOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKickOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKickOut, allocator);
    }

    if (m_minCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCount, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failOver, allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoAddRo, allocator);
    }

    if (m_rWInstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWInstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rWInstInfo.begin(); itr != m_rWInstInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t RWInfos::GetInstCount() const
{
    return m_instCount;
}

void RWInfos::SetInstCount(const uint64_t& _instCount)
{
    m_instCount = _instCount;
    m_instCountHasBeenSet = true;
}

bool RWInfos::InstCountHasBeenSet() const
{
    return m_instCountHasBeenSet;
}

string RWInfos::GetWeightMode() const
{
    return m_weightMode;
}

void RWInfos::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool RWInfos::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

bool RWInfos::GetIsKickOut() const
{
    return m_isKickOut;
}

void RWInfos::SetIsKickOut(const bool& _isKickOut)
{
    m_isKickOut = _isKickOut;
    m_isKickOutHasBeenSet = true;
}

bool RWInfos::IsKickOutHasBeenSet() const
{
    return m_isKickOutHasBeenSet;
}

uint64_t RWInfos::GetMinCount() const
{
    return m_minCount;
}

void RWInfos::SetMinCount(const uint64_t& _minCount)
{
    m_minCount = _minCount;
    m_minCountHasBeenSet = true;
}

bool RWInfos::MinCountHasBeenSet() const
{
    return m_minCountHasBeenSet;
}

uint64_t RWInfos::GetMaxDelay() const
{
    return m_maxDelay;
}

void RWInfos::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool RWInfos::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

bool RWInfos::GetFailOver() const
{
    return m_failOver;
}

void RWInfos::SetFailOver(const bool& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool RWInfos::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

bool RWInfos::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void RWInfos::SetAutoAddRo(const bool& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool RWInfos::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

vector<RWInstanceInfo> RWInfos::GetRWInstInfo() const
{
    return m_rWInstInfo;
}

void RWInfos::SetRWInstInfo(const vector<RWInstanceInfo>& _rWInstInfo)
{
    m_rWInstInfo = _rWInstInfo;
    m_rWInstInfoHasBeenSet = true;
}

bool RWInfos::RWInstInfoHasBeenSet() const
{
    return m_rWInstInfoHasBeenSet;
}

