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

#include <tencentcloud/tke/v20220501/model/IntOrString.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

IntOrString::IntOrString() :
    m_typeHasBeenSet(false),
    m_intValHasBeenSet(false),
    m_strValHasBeenSet(false)
{
}

CoreInternalOutcome IntOrString::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntOrString.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IntVal") && !value["IntVal"].IsNull())
    {
        if (!value["IntVal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntOrString.IntVal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intVal = value["IntVal"].GetInt64();
        m_intValHasBeenSet = true;
    }

    if (value.HasMember("StrVal") && !value["StrVal"].IsNull())
    {
        if (!value["StrVal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntOrString.StrVal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strVal = string(value["StrVal"].GetString());
        m_strValHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntOrString::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_intValHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntVal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intVal, allocator);
    }

    if (m_strValHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrVal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strVal.c_str(), allocator).Move(), allocator);
    }

}


int64_t IntOrString::GetType() const
{
    return m_type;
}

void IntOrString::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool IntOrString::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t IntOrString::GetIntVal() const
{
    return m_intVal;
}

void IntOrString::SetIntVal(const int64_t& _intVal)
{
    m_intVal = _intVal;
    m_intValHasBeenSet = true;
}

bool IntOrString::IntValHasBeenSet() const
{
    return m_intValHasBeenSet;
}

string IntOrString::GetStrVal() const
{
    return m_strVal;
}

void IntOrString::SetStrVal(const string& _strVal)
{
    m_strVal = _strVal;
    m_strValHasBeenSet = true;
}

bool IntOrString::StrValHasBeenSet() const
{
    return m_strValHasBeenSet;
}

