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

#include <tencentcloud/trp/v20210515/model/PackSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

PackSpec::PackSpec() :
    m_levelHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_codePartsHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_sceneCodeHasBeenSet(false)
{
}

CoreInternalOutcome PackSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Rate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetUint64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }

    if (value.HasMember("CodeParts") && !value["CodeParts"].IsNull())
    {
        if (!value["CodeParts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PackSpec.CodeParts` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeParts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodePart item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codeParts.push_back(item);
        }
        m_codePartsHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackSpec.SceneCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = value["SceneCode"].GetInt64();
        m_sceneCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_codePartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeParts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeParts.begin(); itr != m_codeParts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneCode, allocator);
    }

}


uint64_t PackSpec::GetLevel() const
{
    return m_level;
}

void PackSpec::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool PackSpec::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t PackSpec::GetRate() const
{
    return m_rate;
}

void PackSpec::SetRate(const uint64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool PackSpec::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

uint64_t PackSpec::GetAmount() const
{
    return m_amount;
}

void PackSpec::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool PackSpec::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string PackSpec::GetCustomId() const
{
    return m_customId;
}

void PackSpec::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool PackSpec::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

vector<CodePart> PackSpec::GetCodeParts() const
{
    return m_codeParts;
}

void PackSpec::SetCodeParts(const vector<CodePart>& _codeParts)
{
    m_codeParts = _codeParts;
    m_codePartsHasBeenSet = true;
}

bool PackSpec::CodePartsHasBeenSet() const
{
    return m_codePartsHasBeenSet;
}

string PackSpec::GetUnit() const
{
    return m_unit;
}

void PackSpec::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool PackSpec::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

int64_t PackSpec::GetSceneCode() const
{
    return m_sceneCode;
}

void PackSpec::SetSceneCode(const int64_t& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool PackSpec::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

