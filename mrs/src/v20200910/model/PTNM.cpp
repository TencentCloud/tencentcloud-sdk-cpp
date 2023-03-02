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

#include <tencentcloud/mrs/v20200910/model/PTNM.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PTNM::PTNM() :
    m_nameHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_pTHasBeenSet(false),
    m_pNHasBeenSet(false),
    m_pMHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome PTNM::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PTNM.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("PT") && !value["PT"].IsNull())
    {
        if (!value["PT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.PT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pT = string(value["PT"].GetString());
        m_pTHasBeenSet = true;
    }

    if (value.HasMember("PN") && !value["PN"].IsNull())
    {
        if (!value["PN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.PN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pN = string(value["PN"].GetString());
        m_pNHasBeenSet = true;
    }

    if (value.HasMember("PM") && !value["PM"].IsNull())
    {
        if (!value["PM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNM.PM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pM = string(value["PM"].GetString());
        m_pMHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PTNM.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coords.push_back(item);
        }
        m_coordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PTNM::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_pTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pT.c_str(), allocator).Move(), allocator);
    }

    if (m_pNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pN.c_str(), allocator).Move(), allocator);
    }

    if (m_pMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pM.c_str(), allocator).Move(), allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coords.begin(); itr != m_coords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PTNM::GetName() const
{
    return m_name;
}

void PTNM::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PTNM::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> PTNM::GetIndex() const
{
    return m_index;
}

void PTNM::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool PTNM::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string PTNM::GetSrc() const
{
    return m_src;
}

void PTNM::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool PTNM::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string PTNM::GetValue() const
{
    return m_value;
}

void PTNM::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool PTNM::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string PTNM::GetPT() const
{
    return m_pT;
}

void PTNM::SetPT(const string& _pT)
{
    m_pT = _pT;
    m_pTHasBeenSet = true;
}

bool PTNM::PTHasBeenSet() const
{
    return m_pTHasBeenSet;
}

string PTNM::GetPN() const
{
    return m_pN;
}

void PTNM::SetPN(const string& _pN)
{
    m_pN = _pN;
    m_pNHasBeenSet = true;
}

bool PTNM::PNHasBeenSet() const
{
    return m_pNHasBeenSet;
}

string PTNM::GetPM() const
{
    return m_pM;
}

void PTNM::SetPM(const string& _pM)
{
    m_pM = _pM;
    m_pMHasBeenSet = true;
}

bool PTNM::PMHasBeenSet() const
{
    return m_pMHasBeenSet;
}

vector<Coord> PTNM::GetCoords() const
{
    return m_coords;
}

void PTNM::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool PTNM::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

