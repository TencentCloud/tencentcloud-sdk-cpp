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

#include <tencentcloud/chc/v20230418/model/IdcUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

IdcUnit::IdcUnit() :
    m_idcUnitIdHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_cageSetHasBeenSet(false)
{
}

CoreInternalOutcome IdcUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnit.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnit.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("CageSet") && !value["CageSet"].IsNull())
    {
        if (!value["CageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IdcUnit.CageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cageSet.push_back(item);
        }
        m_cageSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdcUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idcUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcUnitId, allocator);
    }

    if (m_idcUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_cageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cageSet.begin(); itr != m_cageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t IdcUnit::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void IdcUnit::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool IdcUnit::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

string IdcUnit::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void IdcUnit::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool IdcUnit::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

vector<Cage> IdcUnit::GetCageSet() const
{
    return m_cageSet;
}

void IdcUnit::SetCageSet(const vector<Cage>& _cageSet)
{
    m_cageSet = _cageSet;
    m_cageSetHasBeenSet = true;
}

bool IdcUnit::CageSetHasBeenSet() const
{
    return m_cageSetHasBeenSet;
}

