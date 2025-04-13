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

#include <tencentcloud/lke/v20231130/model/DocFilterFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DocFilterFlag::DocFilterFlag() :
    m_flagHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome DocFilterFlag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocFilterFlag.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocFilterFlag.Value` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetBool();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocFilterFlag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string DocFilterFlag::GetFlag() const
{
    return m_flag;
}

void DocFilterFlag::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool DocFilterFlag::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

bool DocFilterFlag::GetValue() const
{
    return m_value;
}

void DocFilterFlag::SetValue(const bool& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DocFilterFlag::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

