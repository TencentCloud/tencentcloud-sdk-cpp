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

#include <tencentcloud/chdfs/v20201112/model/Transition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

Transition::Transition() :
    m_daysHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome Transition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Transition.Days` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_days = value["Days"].GetUint64();
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Transition.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Transition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


uint64_t Transition::GetDays() const
{
    return m_days;
}

void Transition::SetDays(const uint64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool Transition::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

uint64_t Transition::GetType() const
{
    return m_type;
}

void Transition::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Transition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

