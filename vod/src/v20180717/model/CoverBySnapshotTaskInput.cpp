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

#include <tencentcloud/vod/v20180717/model/CoverBySnapshotTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CoverBySnapshotTaskInput::CoverBySnapshotTaskInput() :
    m_definitionHasBeenSet(false),
    m_positionTypeHasBeenSet(false),
    m_positionValueHasBeenSet(false),
    m_watermarkSetHasBeenSet(false)
{
}

CoreInternalOutcome CoverBySnapshotTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CoverBySnapshotTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("PositionType") && !value["PositionType"].IsNull())
    {
        if (!value["PositionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoverBySnapshotTaskInput.PositionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionType = string(value["PositionType"].GetString());
        m_positionTypeHasBeenSet = true;
    }

    if (value.HasMember("PositionValue") && !value["PositionValue"].IsNull())
    {
        if (!value["PositionValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CoverBySnapshotTaskInput.PositionValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_positionValue = value["PositionValue"].GetDouble();
        m_positionValueHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoverBySnapshotTaskInput.WatermarkSet` is not array type"));

        const rapidjson::Value &tmpValue = value["WatermarkSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkSet.push_back(item);
        }
        m_watermarkSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoverBySnapshotTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_positionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionType.c_str(), allocator).Move(), allocator);
    }

    if (m_positionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionValue, allocator);
    }

    if (m_watermarkSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CoverBySnapshotTaskInput::GetDefinition() const
{
    return m_definition;
}

void CoverBySnapshotTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool CoverBySnapshotTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string CoverBySnapshotTaskInput::GetPositionType() const
{
    return m_positionType;
}

void CoverBySnapshotTaskInput::SetPositionType(const string& _positionType)
{
    m_positionType = _positionType;
    m_positionTypeHasBeenSet = true;
}

bool CoverBySnapshotTaskInput::PositionTypeHasBeenSet() const
{
    return m_positionTypeHasBeenSet;
}

double CoverBySnapshotTaskInput::GetPositionValue() const
{
    return m_positionValue;
}

void CoverBySnapshotTaskInput::SetPositionValue(const double& _positionValue)
{
    m_positionValue = _positionValue;
    m_positionValueHasBeenSet = true;
}

bool CoverBySnapshotTaskInput::PositionValueHasBeenSet() const
{
    return m_positionValueHasBeenSet;
}

vector<WatermarkInput> CoverBySnapshotTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void CoverBySnapshotTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool CoverBySnapshotTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}

