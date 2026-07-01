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

#include <tencentcloud/csip/v20221121/model/AttackStageCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AttackStageCount::AttackStageCount() :
    m_attackStageHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome AttackStageCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackStage") && !value["AttackStage"].IsNull())
    {
        if (!value["AttackStage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackStageCount.AttackStage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackStage = string(value["AttackStage"].GetString());
        m_attackStageHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackStageCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackStageCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackStage.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string AttackStageCount::GetAttackStage() const
{
    return m_attackStage;
}

void AttackStageCount::SetAttackStage(const string& _attackStage)
{
    m_attackStage = _attackStage;
    m_attackStageHasBeenSet = true;
}

bool AttackStageCount::AttackStageHasBeenSet() const
{
    return m_attackStageHasBeenSet;
}

int64_t AttackStageCount::GetCount() const
{
    return m_count;
}

void AttackStageCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AttackStageCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

