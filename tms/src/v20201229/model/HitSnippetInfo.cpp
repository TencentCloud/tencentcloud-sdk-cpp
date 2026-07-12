/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tms/v20201229/model/HitSnippetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

HitSnippetInfo::HitSnippetInfo() :
    m_snippetHasBeenSet(false),
    m_atomicNameHasBeenSet(false),
    m_atomicIdHasBeenSet(false),
    m_positionsHasBeenSet(false)
{
}

CoreInternalOutcome HitSnippetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Snippet") && !value["Snippet"].IsNull())
    {
        if (!value["Snippet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Snippet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snippet = string(value["Snippet"].GetString());
        m_snippetHasBeenSet = true;
    }

    if (value.HasMember("AtomicName") && !value["AtomicName"].IsNull())
    {
        if (!value["AtomicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.AtomicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_atomicName = string(value["AtomicName"].GetString());
        m_atomicNameHasBeenSet = true;
    }

    if (value.HasMember("AtomicId") && !value["AtomicId"].IsNull())
    {
        if (!value["AtomicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.AtomicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_atomicId = string(value["AtomicId"].GetString());
        m_atomicIdHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HitPosition item;
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

void HitSnippetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snippetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snippet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snippet.c_str(), allocator).Move(), allocator);
    }

    if (m_atomicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AtomicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_atomicName.c_str(), allocator).Move(), allocator);
    }

    if (m_atomicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AtomicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_atomicId.c_str(), allocator).Move(), allocator);
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


string HitSnippetInfo::GetSnippet() const
{
    return m_snippet;
}

void HitSnippetInfo::SetSnippet(const string& _snippet)
{
    m_snippet = _snippet;
    m_snippetHasBeenSet = true;
}

bool HitSnippetInfo::SnippetHasBeenSet() const
{
    return m_snippetHasBeenSet;
}

string HitSnippetInfo::GetAtomicName() const
{
    return m_atomicName;
}

void HitSnippetInfo::SetAtomicName(const string& _atomicName)
{
    m_atomicName = _atomicName;
    m_atomicNameHasBeenSet = true;
}

bool HitSnippetInfo::AtomicNameHasBeenSet() const
{
    return m_atomicNameHasBeenSet;
}

string HitSnippetInfo::GetAtomicId() const
{
    return m_atomicId;
}

void HitSnippetInfo::SetAtomicId(const string& _atomicId)
{
    m_atomicId = _atomicId;
    m_atomicIdHasBeenSet = true;
}

bool HitSnippetInfo::AtomicIdHasBeenSet() const
{
    return m_atomicIdHasBeenSet;
}

vector<HitPosition> HitSnippetInfo::GetPositions() const
{
    return m_positions;
}

void HitSnippetInfo::SetPositions(const vector<HitPosition>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool HitSnippetInfo::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

