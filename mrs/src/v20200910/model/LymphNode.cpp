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

#include <tencentcloud/mrs/v20200910/model/LymphNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

LymphNode::LymphNode() :
    m_nameHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_partHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_transferNumHasBeenSet(false),
    m_sizesHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome LymphNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LymphNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LymphNode.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LymphNode.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LymphNode.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LymphNode.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TransferNum") && !value["TransferNum"].IsNull())
    {
        if (!value["TransferNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LymphNode.TransferNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferNum = value["TransferNum"].GetInt64();
        m_transferNumHasBeenSet = true;
    }

    if (value.HasMember("Sizes") && !value["Sizes"].IsNull())
    {
        if (!value["Sizes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LymphNode.Sizes` is not array type"));

        const rapidjson::Value &tmpValue = value["Sizes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sizes.push_back((*itr).GetInt64());
        }
        m_sizesHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LymphNode.Coords` is not array type"));

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

void LymphNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_transferNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferNum, allocator);
    }

    if (m_sizesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sizes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sizes.begin(); itr != m_sizes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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


string LymphNode::GetName() const
{
    return m_name;
}

void LymphNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LymphNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> LymphNode::GetIndex() const
{
    return m_index;
}

void LymphNode::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool LymphNode::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

Part LymphNode::GetPart() const
{
    return m_part;
}

void LymphNode::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool LymphNode::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string LymphNode::GetSrc() const
{
    return m_src;
}

void LymphNode::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool LymphNode::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

int64_t LymphNode::GetTotal() const
{
    return m_total;
}

void LymphNode::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool LymphNode::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t LymphNode::GetTransferNum() const
{
    return m_transferNum;
}

void LymphNode::SetTransferNum(const int64_t& _transferNum)
{
    m_transferNum = _transferNum;
    m_transferNumHasBeenSet = true;
}

bool LymphNode::TransferNumHasBeenSet() const
{
    return m_transferNumHasBeenSet;
}

vector<int64_t> LymphNode::GetSizes() const
{
    return m_sizes;
}

void LymphNode::SetSizes(const vector<int64_t>& _sizes)
{
    m_sizes = _sizes;
    m_sizesHasBeenSet = true;
}

bool LymphNode::SizesHasBeenSet() const
{
    return m_sizesHasBeenSet;
}

vector<Coord> LymphNode::GetCoords() const
{
    return m_coords;
}

void LymphNode::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool LymphNode::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

