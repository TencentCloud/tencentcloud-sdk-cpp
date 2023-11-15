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

#include <tencentcloud/weilingwith/v20230427/model/CustomFieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

CustomFieldInfo::CustomFieldInfo() :
    m_idHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valHasBeenSet(false)
{
}

CoreInternalOutcome CustomFieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomFieldInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomFieldInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomFieldInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Val") && !value["Val"].IsNull())
    {
        if (!value["Val"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomFieldInfo.Val` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_val = string(value["Val"].GetString());
        m_valHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomFieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_valHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Val";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_val.c_str(), allocator).Move(), allocator);
    }

}


int64_t CustomFieldInfo::GetId() const
{
    return m_id;
}

void CustomFieldInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CustomFieldInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CustomFieldInfo::GetKey() const
{
    return m_key;
}

void CustomFieldInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CustomFieldInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CustomFieldInfo::GetName() const
{
    return m_name;
}

void CustomFieldInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomFieldInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomFieldInfo::GetVal() const
{
    return m_val;
}

void CustomFieldInfo::SetVal(const string& _val)
{
    m_val = _val;
    m_valHasBeenSet = true;
}

bool CustomFieldInfo::ValHasBeenSet() const
{
    return m_valHasBeenSet;
}

