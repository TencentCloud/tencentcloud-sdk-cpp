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

#include <tencentcloud/tms/v20201229/model/LibCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

LibCheckResult::LibCheckResult() :
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_libTypeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_positionsHasBeenSet(false)
{
}

CoreInternalOutcome LibCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibCheckResult.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibCheckResult.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("LibType") && !value["LibType"].IsNull())
    {
        if (!value["LibType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LibCheckResult.LibType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_libType = value["LibType"].GetUint64();
        m_libTypeHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibCheckResult.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibCheckResult.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Positions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_positions.push_back(item);
        }
        m_positionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_libTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_libType, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_positionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_positions.begin(); itr != m_positions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LibCheckResult::GetLibId() const
{
    return m_libId;
}

void LibCheckResult::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool LibCheckResult::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string LibCheckResult::GetLibName() const
{
    return m_libName;
}

void LibCheckResult::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool LibCheckResult::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

uint64_t LibCheckResult::GetLibType() const
{
    return m_libType;
}

void LibCheckResult::SetLibType(const uint64_t& _libType)
{
    m_libType = _libType;
    m_libTypeHasBeenSet = true;
}

bool LibCheckResult::LibTypeHasBeenSet() const
{
    return m_libTypeHasBeenSet;
}

string LibCheckResult::GetKeyword() const
{
    return m_keyword;
}

void LibCheckResult::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool LibCheckResult::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<Positions> LibCheckResult::GetPositions() const
{
    return m_positions;
}

void LibCheckResult::SetPositions(const vector<Positions>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool LibCheckResult::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

