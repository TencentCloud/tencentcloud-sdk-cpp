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

#include <tencentcloud/wedata/v20210820/model/SubCloneObjectDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubCloneObjectDTO::SubCloneObjectDTO() :
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome SubCloneObjectDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubCloneObjectDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubCloneObjectDTO.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubCloneObjectDTO.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubCloneObjectDTO.ExtInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extInfo.push_back((*itr).GetString());
        }
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubCloneObjectDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extInfo.begin(); itr != m_extInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SubCloneObjectDTO::GetType() const
{
    return m_type;
}

void SubCloneObjectDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SubCloneObjectDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SubCloneObjectDTO::GetKey() const
{
    return m_key;
}

void SubCloneObjectDTO::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SubCloneObjectDTO::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SubCloneObjectDTO::GetValue() const
{
    return m_value;
}

void SubCloneObjectDTO::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SubCloneObjectDTO::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<string> SubCloneObjectDTO::GetExtInfo() const
{
    return m_extInfo;
}

void SubCloneObjectDTO::SetExtInfo(const vector<string>& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool SubCloneObjectDTO::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

