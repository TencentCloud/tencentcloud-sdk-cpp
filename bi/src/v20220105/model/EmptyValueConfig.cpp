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

#include <tencentcloud/bi/v20220105/model/EmptyValueConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

EmptyValueConfig::EmptyValueConfig() :
    m_numberHasBeenSet(false),
    m_stringHasBeenSet(false)
{
}

CoreInternalOutcome EmptyValueConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyValueConfig.Number` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_number.Deserialize(value["Number"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_numberHasBeenSet = true;
    }

    if (value.HasMember("String") && !value["String"].IsNull())
    {
        if (!value["String"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyValueConfig.String` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_string.Deserialize(value["String"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmptyValueConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_number.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "String";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_string.ToJsonObject(value[key.c_str()], allocator);
    }

}


EmptyValue EmptyValueConfig::GetNumber() const
{
    return m_number;
}

void EmptyValueConfig::SetNumber(const EmptyValue& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool EmptyValueConfig::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

EmptyValue EmptyValueConfig::GetString() const
{
    return m_string;
}

void EmptyValueConfig::SetString(const EmptyValue& _string)
{
    m_string = _string;
    m_stringHasBeenSet = true;
}

bool EmptyValueConfig::StringHasBeenSet() const
{
    return m_stringHasBeenSet;
}

