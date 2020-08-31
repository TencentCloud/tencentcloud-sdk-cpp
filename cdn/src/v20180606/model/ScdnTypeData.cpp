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

#include <tencentcloud/cdn/v20180606/model/ScdnTypeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

ScdnTypeData::ScdnTypeData() :
    m_attackTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome ScdnTypeData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnTypeData.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScdnTypeData.Value` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetUint64();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnTypeData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_attackTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string ScdnTypeData::GetAttackType() const
{
    return m_attackType;
}

void ScdnTypeData::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool ScdnTypeData::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

uint64_t ScdnTypeData::GetValue() const
{
    return m_value;
}

void ScdnTypeData::SetValue(const uint64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ScdnTypeData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

