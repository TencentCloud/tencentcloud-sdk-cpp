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

#include <tencentcloud/vm/v20210922/model/HitSnippetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

HitSnippetInfo::HitSnippetInfo() :
    m_targetHasBeenSet(false),
    m_snippetHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_atomicCategoryHasBeenSet(false),
    m_atomicNameHasBeenSet(false),
    m_atomicIdHasBeenSet(false),
    m_unitIdHasBeenSet(false),
    m_unitNameHasBeenSet(false),
    m_particleIdHasBeenSet(false),
    m_positionsHasBeenSet(false),
    m_rectHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome HitSnippetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Snippet") && !value["Snippet"].IsNull())
    {
        if (!value["Snippet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Snippet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snippet = string(value["Snippet"].GetString());
        m_snippetHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("AtomicCategory") && !value["AtomicCategory"].IsNull())
    {
        if (!value["AtomicCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.AtomicCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_atomicCategory = string(value["AtomicCategory"].GetString());
        m_atomicCategoryHasBeenSet = true;
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

    if (value.HasMember("UnitId") && !value["UnitId"].IsNull())
    {
        if (!value["UnitId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.UnitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitId = string(value["UnitId"].GetString());
        m_unitIdHasBeenSet = true;
    }

    if (value.HasMember("UnitName") && !value["UnitName"].IsNull())
    {
        if (!value["UnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.UnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitName = string(value["UnitName"].GetString());
        m_unitNameHasBeenSet = true;
    }

    if (value.HasMember("ParticleId") && !value["ParticleId"].IsNull())
    {
        if (!value["ParticleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.ParticleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_particleId = string(value["ParticleId"].GetString());
        m_particleIdHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Position item;
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

    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Duration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_duration.Deserialize(value["Duration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HitSnippetInfo.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HitSnippetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_snippetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snippet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snippet.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_atomicCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AtomicCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_atomicCategory.c_str(), allocator).Move(), allocator);
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

    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_unitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitName.c_str(), allocator).Move(), allocator);
    }

    if (m_particleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParticleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_particleId.c_str(), allocator).Move(), allocator);
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

    if (m_rectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_duration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string HitSnippetInfo::GetTarget() const
{
    return m_target;
}

void HitSnippetInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool HitSnippetInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
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

string HitSnippetInfo::GetScene() const
{
    return m_scene;
}

void HitSnippetInfo::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool HitSnippetInfo::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string HitSnippetInfo::GetAtomicCategory() const
{
    return m_atomicCategory;
}

void HitSnippetInfo::SetAtomicCategory(const string& _atomicCategory)
{
    m_atomicCategory = _atomicCategory;
    m_atomicCategoryHasBeenSet = true;
}

bool HitSnippetInfo::AtomicCategoryHasBeenSet() const
{
    return m_atomicCategoryHasBeenSet;
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

string HitSnippetInfo::GetUnitId() const
{
    return m_unitId;
}

void HitSnippetInfo::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool HitSnippetInfo::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string HitSnippetInfo::GetUnitName() const
{
    return m_unitName;
}

void HitSnippetInfo::SetUnitName(const string& _unitName)
{
    m_unitName = _unitName;
    m_unitNameHasBeenSet = true;
}

bool HitSnippetInfo::UnitNameHasBeenSet() const
{
    return m_unitNameHasBeenSet;
}

string HitSnippetInfo::GetParticleId() const
{
    return m_particleId;
}

void HitSnippetInfo::SetParticleId(const string& _particleId)
{
    m_particleId = _particleId;
    m_particleIdHasBeenSet = true;
}

bool HitSnippetInfo::ParticleIdHasBeenSet() const
{
    return m_particleIdHasBeenSet;
}

vector<Position> HitSnippetInfo::GetPositions() const
{
    return m_positions;
}

void HitSnippetInfo::SetPositions(const vector<Position>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool HitSnippetInfo::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

Rect HitSnippetInfo::GetRect() const
{
    return m_rect;
}

void HitSnippetInfo::SetRect(const Rect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool HitSnippetInfo::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

Duration HitSnippetInfo::GetDuration() const
{
    return m_duration;
}

void HitSnippetInfo::SetDuration(const Duration& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool HitSnippetInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t HitSnippetInfo::GetScore() const
{
    return m_score;
}

void HitSnippetInfo::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool HitSnippetInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

