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

#include <tencentcloud/aca/v20210323/model/SyncDictData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SyncDictData::SyncDictData() :
    m_hospitalIdHasBeenSet(false),
    m_dictTypeHasBeenSet(false),
    m_dictsHasBeenSet(false)
{
}

CoreInternalOutcome SyncDictData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HospitalId") && !value["HospitalId"].IsNull())
    {
        if (!value["HospitalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDictData.HospitalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalId = string(value["HospitalId"].GetString());
        m_hospitalIdHasBeenSet = true;
    }

    if (value.HasMember("DictType") && !value["DictType"].IsNull())
    {
        if (!value["DictType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDictData.DictType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dictType = value["DictType"].GetInt64();
        m_dictTypeHasBeenSet = true;
    }

    if (value.HasMember("Dicts") && !value["Dicts"].IsNull())
    {
        if (!value["Dicts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncDictData.Dicts` is not array type"));

        const rapidjson::Value &tmpValue = value["Dicts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dict item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dicts.push_back(item);
        }
        m_dictsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncDictData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hospitalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospitalId.c_str(), allocator).Move(), allocator);
    }

    if (m_dictTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dictType, allocator);
    }

    if (m_dictsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dicts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dicts.begin(); itr != m_dicts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SyncDictData::GetHospitalId() const
{
    return m_hospitalId;
}

void SyncDictData::SetHospitalId(const string& _hospitalId)
{
    m_hospitalId = _hospitalId;
    m_hospitalIdHasBeenSet = true;
}

bool SyncDictData::HospitalIdHasBeenSet() const
{
    return m_hospitalIdHasBeenSet;
}

int64_t SyncDictData::GetDictType() const
{
    return m_dictType;
}

void SyncDictData::SetDictType(const int64_t& _dictType)
{
    m_dictType = _dictType;
    m_dictTypeHasBeenSet = true;
}

bool SyncDictData::DictTypeHasBeenSet() const
{
    return m_dictTypeHasBeenSet;
}

vector<Dict> SyncDictData::GetDicts() const
{
    return m_dicts;
}

void SyncDictData::SetDicts(const vector<Dict>& _dicts)
{
    m_dicts = _dicts;
    m_dictsHasBeenSet = true;
}

bool SyncDictData::DictsHasBeenSet() const
{
    return m_dictsHasBeenSet;
}

