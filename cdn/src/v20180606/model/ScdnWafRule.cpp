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

#include <tencentcloud/cdn/v20180606/model/ScdnWafRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnWafRule::ScdnWafRule() :
    m_attackTypeHasBeenSet(false),
    m_operateHasBeenSet(false)
{
}

CoreInternalOutcome ScdnWafRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafRule.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafRule.Operate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operate = string(value["Operate"].GetString());
        m_operateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnWafRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

}


string ScdnWafRule::GetAttackType() const
{
    return m_attackType;
}

void ScdnWafRule::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool ScdnWafRule::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string ScdnWafRule::GetOperate() const
{
    return m_operate;
}

void ScdnWafRule::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool ScdnWafRule::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

