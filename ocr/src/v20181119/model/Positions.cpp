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

#include <tencentcloud/ocr/v20181119/model/Positions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

Positions::Positions() :
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome Positions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Positions.Position` is not array type"));

        const rapidjson::Value &tmpValue = value["Position"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_position.push_back((*itr).GetInt64());
        }
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Positions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_position.begin(); itr != m_position.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> Positions::GetPosition() const
{
    return m_position;
}

void Positions::SetPosition(const vector<int64_t>& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Positions::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

