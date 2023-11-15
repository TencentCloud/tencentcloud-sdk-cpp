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

#include <tencentcloud/weilingwith/v20230427/model/StatLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

StatLevel::StatLevel() :
    m_totalHasBeenSet(false),
    m_normalSumHasBeenSet(false),
    m_offlineSumHasBeenSet(false),
    m_faultSumHasBeenSet(false),
    m_spaceCodeHasBeenSet(false),
    m_statDeviceTypeSetHasBeenSet(false)
{
}

CoreInternalOutcome StatLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatLevel.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("NormalSum") && !value["NormalSum"].IsNull())
    {
        if (!value["NormalSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatLevel.NormalSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalSum = value["NormalSum"].GetInt64();
        m_normalSumHasBeenSet = true;
    }

    if (value.HasMember("OfflineSum") && !value["OfflineSum"].IsNull())
    {
        if (!value["OfflineSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatLevel.OfflineSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineSum = value["OfflineSum"].GetInt64();
        m_offlineSumHasBeenSet = true;
    }

    if (value.HasMember("FaultSum") && !value["FaultSum"].IsNull())
    {
        if (!value["FaultSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatLevel.FaultSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_faultSum = value["FaultSum"].GetInt64();
        m_faultSumHasBeenSet = true;
    }

    if (value.HasMember("SpaceCode") && !value["SpaceCode"].IsNull())
    {
        if (!value["SpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatLevel.SpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceCode = string(value["SpaceCode"].GetString());
        m_spaceCodeHasBeenSet = true;
    }

    if (value.HasMember("StatDeviceTypeSet") && !value["StatDeviceTypeSet"].IsNull())
    {
        if (!value["StatDeviceTypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatLevel.StatDeviceTypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StatDeviceTypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatDeviceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statDeviceTypeSet.push_back(item);
        }
        m_statDeviceTypeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_normalSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalSum, allocator);
    }

    if (m_offlineSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineSum, allocator);
    }

    if (m_faultSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faultSum, allocator);
    }

    if (m_spaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statDeviceTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatDeviceTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statDeviceTypeSet.begin(); itr != m_statDeviceTypeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t StatLevel::GetTotal() const
{
    return m_total;
}

void StatLevel::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool StatLevel::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t StatLevel::GetNormalSum() const
{
    return m_normalSum;
}

void StatLevel::SetNormalSum(const int64_t& _normalSum)
{
    m_normalSum = _normalSum;
    m_normalSumHasBeenSet = true;
}

bool StatLevel::NormalSumHasBeenSet() const
{
    return m_normalSumHasBeenSet;
}

int64_t StatLevel::GetOfflineSum() const
{
    return m_offlineSum;
}

void StatLevel::SetOfflineSum(const int64_t& _offlineSum)
{
    m_offlineSum = _offlineSum;
    m_offlineSumHasBeenSet = true;
}

bool StatLevel::OfflineSumHasBeenSet() const
{
    return m_offlineSumHasBeenSet;
}

int64_t StatLevel::GetFaultSum() const
{
    return m_faultSum;
}

void StatLevel::SetFaultSum(const int64_t& _faultSum)
{
    m_faultSum = _faultSum;
    m_faultSumHasBeenSet = true;
}

bool StatLevel::FaultSumHasBeenSet() const
{
    return m_faultSumHasBeenSet;
}

string StatLevel::GetSpaceCode() const
{
    return m_spaceCode;
}

void StatLevel::SetSpaceCode(const string& _spaceCode)
{
    m_spaceCode = _spaceCode;
    m_spaceCodeHasBeenSet = true;
}

bool StatLevel::SpaceCodeHasBeenSet() const
{
    return m_spaceCodeHasBeenSet;
}

vector<StatDeviceType> StatLevel::GetStatDeviceTypeSet() const
{
    return m_statDeviceTypeSet;
}

void StatLevel::SetStatDeviceTypeSet(const vector<StatDeviceType>& _statDeviceTypeSet)
{
    m_statDeviceTypeSet = _statDeviceTypeSet;
    m_statDeviceTypeSetHasBeenSet = true;
}

bool StatLevel::StatDeviceTypeSetHasBeenSet() const
{
    return m_statDeviceTypeSetHasBeenSet;
}

