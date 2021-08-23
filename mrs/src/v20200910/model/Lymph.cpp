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

#include <tencentcloud/mrs/v20200910/model/Lymph.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Lymph::Lymph() :
    m_srcHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_partHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_transferNumHasBeenSet(false)
{
}

CoreInternalOutcome Lymph::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Lymph.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Lymph.Index` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Lymph.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Lymph.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TransferNum") && !value["TransferNum"].IsNull())
    {
        if (!value["TransferNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Lymph.TransferNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferNum = value["TransferNum"].GetInt64();
        m_transferNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Lymph::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
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

}


string Lymph::GetSrc() const
{
    return m_src;
}

void Lymph::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool Lymph::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

vector<int64_t> Lymph::GetIndex() const
{
    return m_index;
}

void Lymph::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Lymph::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

Part Lymph::GetPart() const
{
    return m_part;
}

void Lymph::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool Lymph::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

int64_t Lymph::GetTotal() const
{
    return m_total;
}

void Lymph::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool Lymph::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t Lymph::GetTransferNum() const
{
    return m_transferNum;
}

void Lymph::SetTransferNum(const int64_t& _transferNum)
{
    m_transferNum = _transferNum;
    m_transferNumHasBeenSet = true;
}

bool Lymph::TransferNumHasBeenSet() const
{
    return m_transferNumHasBeenSet;
}

