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

#include <tencentcloud/mrs/v20200910/model/NumValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

NumValue::NumValue() :
    m_numHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome NumValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NumValue.Num` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_num = string(value["Num"].GetString());
        m_numHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NumValue.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NumValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_num.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


string NumValue::GetNum() const
{
    return m_num;
}

void NumValue::SetNum(const string& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool NumValue::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string NumValue::GetUnit() const
{
    return m_unit;
}

void NumValue::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool NumValue::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

