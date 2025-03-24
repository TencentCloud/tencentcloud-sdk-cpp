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

#include <tencentcloud/chc/v20230418/model/Idc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Idc::Idc() :
    m_idcNameHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_idcUnitSetHasBeenSet(false)
{
}

CoreInternalOutcome Idc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Idc.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Idc.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitSet") && !value["IdcUnitSet"].IsNull())
    {
        if (!value["IdcUnitSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Idc.IdcUnitSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IdcUnitSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdcUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_idcUnitSet.push_back(item);
        }
        m_idcUnitSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Idc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_idcUnitSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idcUnitSet.begin(); itr != m_idcUnitSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Idc::GetIdcName() const
{
    return m_idcName;
}

void Idc::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool Idc::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

uint64_t Idc::GetIdcId() const
{
    return m_idcId;
}

void Idc::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool Idc::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

vector<IdcUnit> Idc::GetIdcUnitSet() const
{
    return m_idcUnitSet;
}

void Idc::SetIdcUnitSet(const vector<IdcUnit>& _idcUnitSet)
{
    m_idcUnitSet = _idcUnitSet;
    m_idcUnitSetHasBeenSet = true;
}

bool Idc::IdcUnitSetHasBeenSet() const
{
    return m_idcUnitSetHasBeenSet;
}

