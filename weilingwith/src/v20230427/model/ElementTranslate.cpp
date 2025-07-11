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

#include <tencentcloud/weilingwith/v20230427/model/ElementTranslate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ElementTranslate::ElementTranslate() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_zHasBeenSet(false)
{
}

CoreInternalOutcome ElementTranslate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ElementTranslate.X` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetDouble();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ElementTranslate.Y` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Z") && !value["Z"].IsNull())
    {
        if (!value["Z"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ElementTranslate.Z` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_z = value["Z"].GetDouble();
        m_zHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElementTranslate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_zHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Z";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_z, allocator);
    }

}


double ElementTranslate::GetX() const
{
    return m_x;
}

void ElementTranslate::SetX(const double& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool ElementTranslate::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double ElementTranslate::GetY() const
{
    return m_y;
}

void ElementTranslate::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool ElementTranslate::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

double ElementTranslate::GetZ() const
{
    return m_z;
}

void ElementTranslate::SetZ(const double& _z)
{
    m_z = _z;
    m_zHasBeenSet = true;
}

bool ElementTranslate::ZHasBeenSet() const
{
    return m_zHasBeenSet;
}

