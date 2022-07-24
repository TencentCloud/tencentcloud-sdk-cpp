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

#include <tencentcloud/ckafka/v20190819/model/FilterMapParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

FilterMapParam::FilterMapParam() :
    m_keyHasBeenSet(false),
    m_matchModeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome FilterMapParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterMapParam.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("MatchMode") && !value["MatchMode"].IsNull())
    {
        if (!value["MatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterMapParam.MatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchMode = string(value["MatchMode"].GetString());
        m_matchModeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterMapParam.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterMapParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterMapParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_matchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string FilterMapParam::GetKey() const
{
    return m_key;
}

void FilterMapParam::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool FilterMapParam::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string FilterMapParam::GetMatchMode() const
{
    return m_matchMode;
}

void FilterMapParam::SetMatchMode(const string& _matchMode)
{
    m_matchMode = _matchMode;
    m_matchModeHasBeenSet = true;
}

bool FilterMapParam::MatchModeHasBeenSet() const
{
    return m_matchModeHasBeenSet;
}

string FilterMapParam::GetValue() const
{
    return m_value;
}

void FilterMapParam::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FilterMapParam::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string FilterMapParam::GetType() const
{
    return m_type;
}

void FilterMapParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FilterMapParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

