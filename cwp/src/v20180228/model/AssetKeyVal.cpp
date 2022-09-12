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

#include <tencentcloud/cwp/v20180228/model/AssetKeyVal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetKeyVal::AssetKeyVal() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_descHasBeenSet(false),
    m_newCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetKeyVal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetKeyVal.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetKeyVal.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetKeyVal.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("NewCount") && !value["NewCount"].IsNull())
    {
        if (!value["NewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetKeyVal.NewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newCount = value["NewCount"].GetInt64();
        m_newCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetKeyVal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_newCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newCount, allocator);
    }

}


string AssetKeyVal::GetKey() const
{
    return m_key;
}

void AssetKeyVal::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AssetKeyVal::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t AssetKeyVal::GetValue() const
{
    return m_value;
}

void AssetKeyVal::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AssetKeyVal::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AssetKeyVal::GetDesc() const
{
    return m_desc;
}

void AssetKeyVal::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetKeyVal::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t AssetKeyVal::GetNewCount() const
{
    return m_newCount;
}

void AssetKeyVal::SetNewCount(const int64_t& _newCount)
{
    m_newCount = _newCount;
    m_newCountHasBeenSet = true;
}

bool AssetKeyVal::NewCountHasBeenSet() const
{
    return m_newCountHasBeenSet;
}

