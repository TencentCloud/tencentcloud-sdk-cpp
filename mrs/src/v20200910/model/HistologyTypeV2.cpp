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

#include <tencentcloud/mrs/v20200910/model/HistologyTypeV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

HistologyTypeV2::HistologyTypeV2() :
    m_infiltrationHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome HistologyTypeV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Infiltration") && !value["Infiltration"].IsNull())
    {
        if (!value["Infiltration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Infiltration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infiltration = string(value["Infiltration"].GetString());
        m_infiltrationHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Index` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HistologyTypeV2.Coords` is not array type"));

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

void HistologyTypeV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infiltrationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infiltration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infiltration.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string HistologyTypeV2::GetInfiltration() const
{
    return m_infiltration;
}

void HistologyTypeV2::SetInfiltration(const string& _infiltration)
{
    m_infiltration = _infiltration;
    m_infiltrationHasBeenSet = true;
}

bool HistologyTypeV2::InfiltrationHasBeenSet() const
{
    return m_infiltrationHasBeenSet;
}

vector<int64_t> HistologyTypeV2::GetIndex() const
{
    return m_index;
}

void HistologyTypeV2::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool HistologyTypeV2::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string HistologyTypeV2::GetSrc() const
{
    return m_src;
}

void HistologyTypeV2::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool HistologyTypeV2::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string HistologyTypeV2::GetType() const
{
    return m_type;
}

void HistologyTypeV2::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HistologyTypeV2::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HistologyTypeV2::GetName() const
{
    return m_name;
}

void HistologyTypeV2::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HistologyTypeV2::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Coord> HistologyTypeV2::GetCoords() const
{
    return m_coords;
}

void HistologyTypeV2::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool HistologyTypeV2::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

