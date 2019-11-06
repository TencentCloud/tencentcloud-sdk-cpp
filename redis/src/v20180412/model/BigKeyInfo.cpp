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
using namespace rapidjson;
using namespace std;

BigKeyInfo::BigKeyInfo() :
    m_dBHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_updatetimeHasBeenSet(false)
{
}

CoreInternalOutcome BigKeyInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BigKeyInfo.DB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dB = value["DB"].GetInt64();
        m_dBHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Error("response `BigKeyInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `BigKeyInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BigKeyInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Updatetime") && !value["Updatetime"].IsNull())
    {
        if (!value["Updatetime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BigKeyInfo.Updatetime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatetime = value["Updatetime"].GetInt64();
        m_updatetimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BigKeyInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dBHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dB, allocator);
    }

    if (m_keyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_updatetimeHasBeenSet)
    {
        Value iKey(kStringType);
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

