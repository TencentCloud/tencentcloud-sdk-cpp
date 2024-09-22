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

#include <tencentcloud/lke/v20231130/model/Stat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Stat::Stat() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false)
{
}

CoreInternalOutcome Stat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Stat.X` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_x = string(value["X"].GetString());
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Stat.Y` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Stat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_x.c_str(), allocator).Move(), allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

}


string Stat::GetX() const
{
    return m_x;
}

void Stat::SetX(const string& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool Stat::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double Stat::GetY() const
{
    return m_y;
}

void Stat::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool Stat::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

