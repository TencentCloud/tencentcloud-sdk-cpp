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

#include <tencentcloud/tione/v20211111/model/SpecUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SpecUnit::SpecUnit() :
    m_specNameHasBeenSet(false),
    m_specCountHasBeenSet(false)
{
}

CoreInternalOutcome SpecUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecUnit.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("SpecCount") && !value["SpecCount"].IsNull())
    {
        if (!value["SpecCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecUnit.SpecCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specCount = value["SpecCount"].GetUint64();
        m_specCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_specCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specCount, allocator);
    }

}


string SpecUnit::GetSpecName() const
{
    return m_specName;
}

void SpecUnit::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool SpecUnit::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t SpecUnit::GetSpecCount() const
{
    return m_specCount;
}

void SpecUnit::SetSpecCount(const uint64_t& _specCount)
{
    m_specCount = _specCount;
    m_specCountHasBeenSet = true;
}

bool SpecUnit::SpecCountHasBeenSet() const
{
    return m_specCountHasBeenSet;
}

