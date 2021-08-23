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

#include <tencentcloud/tms/v20200713/model/EvilCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace std;

EvilCount::EvilCount() :
    m_evilTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome EvilCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvilCount.EvilType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = string(value["EvilType"].GetString());
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvilCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvilCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evilType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string EvilCount::GetEvilType() const
{
    return m_evilType;
}

void EvilCount::SetEvilType(const string& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool EvilCount::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

int64_t EvilCount::GetCount() const
{
    return m_count;
}

void EvilCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EvilCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

