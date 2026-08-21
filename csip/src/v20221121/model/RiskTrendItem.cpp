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

#include <tencentcloud/csip/v20221121/model/RiskTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskTrendItem::RiskTrendItem() :
    m_keyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome RiskTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskTrendItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskTrendItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskTrendItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string RiskTrendItem::GetKey() const
{
    return m_key;
}

void RiskTrendItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool RiskTrendItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string RiskTrendItem::GetName() const
{
    return m_name;
}

void RiskTrendItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RiskTrendItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t RiskTrendItem::GetCount() const
{
    return m_count;
}

void RiskTrendItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RiskTrendItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

