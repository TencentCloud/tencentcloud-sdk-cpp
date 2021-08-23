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

#include <tencentcloud/redis/v20180412/model/BigKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

BigKeyInfo::BigKeyInfo() :
    m_dBHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_updatetimeHasBeenSet(false)
{
}

CoreInternalOutcome BigKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyInfo.DB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dB = value["DB"].GetInt64();
        m_dBHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Updatetime") && !value["Updatetime"].IsNull())
    {
        if (!value["Updatetime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyInfo.Updatetime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatetime = value["Updatetime"].GetInt64();
        m_updatetimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BigKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dB, allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_updatetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updatetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatetime, allocator);
    }

}


int64_t BigKeyInfo::GetDB() const
{
    return m_dB;
}

void BigKeyInfo::SetDB(const int64_t& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool BigKeyInfo::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string BigKeyInfo::GetKey() const
{
    return m_key;
}

void BigKeyInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool BigKeyInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string BigKeyInfo::GetType() const
{
    return m_type;
}

void BigKeyInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BigKeyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BigKeyInfo::GetSize() const
{
    return m_size;
}

void BigKeyInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BigKeyInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t BigKeyInfo::GetUpdatetime() const
{
    return m_updatetime;
}

void BigKeyInfo::SetUpdatetime(const int64_t& _updatetime)
{
    m_updatetime = _updatetime;
    m_updatetimeHasBeenSet = true;
}

bool BigKeyInfo::UpdatetimeHasBeenSet() const
{
    return m_updatetimeHasBeenSet;
}

