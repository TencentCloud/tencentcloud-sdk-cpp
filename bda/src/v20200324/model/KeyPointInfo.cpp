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

#include <tencentcloud/bda/v20200324/model/KeyPointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

KeyPointInfo::KeyPointInfo() :
    m_keyPointTypeHasBeenSet(false),
    m_xHasBeenSet(false),
    m_yHasBeenSet(false)
{
}

CoreInternalOutcome KeyPointInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyPointType") && !value["KeyPointType"].IsNull())
    {
        if (!value["KeyPointType"].IsString())
        {
            return CoreInternalOutcome(Error("response `KeyPointInfo.KeyPointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPointType = string(value["KeyPointType"].GetString());
        m_keyPointTypeHasBeenSet = true;
    }

    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `KeyPointInfo.X` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetDouble();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `KeyPointInfo.Y` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyPointInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keyPointTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyPointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_keyPointType.c_str(), allocator).Move(), allocator);
    }

    if (m_xHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

}


string KeyPointInfo::GetKeyPointType() const
{
    return m_keyPointType;
}

void KeyPointInfo::SetKeyPointType(const string& _keyPointType)
{
    m_keyPointType = _keyPointType;
    m_keyPointTypeHasBeenSet = true;
}

bool KeyPointInfo::KeyPointTypeHasBeenSet() const
{
    return m_keyPointTypeHasBeenSet;
}

double KeyPointInfo::GetX() const
{
    return m_x;
}

void KeyPointInfo::SetX(const double& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool KeyPointInfo::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double KeyPointInfo::GetY() const
{
    return m_y;
}

void KeyPointInfo::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool KeyPointInfo::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

