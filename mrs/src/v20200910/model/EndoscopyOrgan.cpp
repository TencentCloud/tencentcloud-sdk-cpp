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

#include <tencentcloud/mrs/v20200910/model/EndoscopyOrgan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EndoscopyOrgan::EndoscopyOrgan() :
    m_partHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_partAliasHasBeenSet(false),
    m_symDescListHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome EndoscopyOrgan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.Index` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("PartAlias") && !value["PartAlias"].IsNull())
    {
        if (!value["PartAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.PartAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partAlias = string(value["PartAlias"].GetString());
        m_partAliasHasBeenSet = true;
    }

    if (value.HasMember("SymDescList") && !value["SymDescList"].IsNull())
    {
        if (!value["SymDescList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.SymDescList` is not array type"));

        const rapidjson::Value &tmpValue = value["SymDescList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_symDescList.push_back(item);
        }
        m_symDescListHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndoscopyOrgan.Coords` is not array type"));

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

void EndoscopyOrgan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_partAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_symDescListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymDescList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_symDescList.begin(); itr != m_symDescList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


Part EndoscopyOrgan::GetPart() const
{
    return m_part;
}

void EndoscopyOrgan::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool EndoscopyOrgan::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

vector<int64_t> EndoscopyOrgan::GetIndex() const
{
    return m_index;
}

void EndoscopyOrgan::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool EndoscopyOrgan::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string EndoscopyOrgan::GetSrc() const
{
    return m_src;
}

void EndoscopyOrgan::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool EndoscopyOrgan::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string EndoscopyOrgan::GetPartAlias() const
{
    return m_partAlias;
}

void EndoscopyOrgan::SetPartAlias(const string& _partAlias)
{
    m_partAlias = _partAlias;
    m_partAliasHasBeenSet = true;
}

bool EndoscopyOrgan::PartAliasHasBeenSet() const
{
    return m_partAliasHasBeenSet;
}

vector<BlockInfo> EndoscopyOrgan::GetSymDescList() const
{
    return m_symDescList;
}

void EndoscopyOrgan::SetSymDescList(const vector<BlockInfo>& _symDescList)
{
    m_symDescList = _symDescList;
    m_symDescListHasBeenSet = true;
}

bool EndoscopyOrgan::SymDescListHasBeenSet() const
{
    return m_symDescListHasBeenSet;
}

vector<Coord> EndoscopyOrgan::GetCoords() const
{
    return m_coords;
}

void EndoscopyOrgan::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool EndoscopyOrgan::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

