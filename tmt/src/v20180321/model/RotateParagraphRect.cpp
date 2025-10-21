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

#include <tencentcloud/tmt/v20180321/model/RotateParagraphRect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

RotateParagraphRect::RotateParagraphRect() :
    m_coordHasBeenSet(false),
    m_tiltAngleHasBeenSet(false),
    m_validHasBeenSet(false)
{
}

CoreInternalOutcome RotateParagraphRect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RotateParagraphRect.Coord` is not array type"));

        const rapidjson::Value &tmpValue = value["Coord"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coord.push_back(item);
        }
        m_coordHasBeenSet = true;
    }

    if (value.HasMember("TiltAngle") && !value["TiltAngle"].IsNull())
    {
        if (!value["TiltAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RotateParagraphRect.TiltAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tiltAngle = value["TiltAngle"].GetDouble();
        m_tiltAngleHasBeenSet = true;
    }

    if (value.HasMember("Valid") && !value["Valid"].IsNull())
    {
        if (!value["Valid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RotateParagraphRect.Valid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_valid = value["Valid"].GetBool();
        m_validHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RotateParagraphRect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coord.begin(); itr != m_coord.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tiltAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiltAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tiltAngle, allocator);
    }

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

}


vector<Coord> RotateParagraphRect::GetCoord() const
{
    return m_coord;
}

void RotateParagraphRect::SetCoord(const vector<Coord>& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool RotateParagraphRect::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

double RotateParagraphRect::GetTiltAngle() const
{
    return m_tiltAngle;
}

void RotateParagraphRect::SetTiltAngle(const double& _tiltAngle)
{
    m_tiltAngle = _tiltAngle;
    m_tiltAngleHasBeenSet = true;
}

bool RotateParagraphRect::TiltAngleHasBeenSet() const
{
    return m_tiltAngleHasBeenSet;
}

bool RotateParagraphRect::GetValid() const
{
    return m_valid;
}

void RotateParagraphRect::SetValid(const bool& _valid)
{
    m_valid = _valid;
    m_validHasBeenSet = true;
}

bool RotateParagraphRect::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

