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

#include <tencentcloud/redis/v20180412/model/BigKeyTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

BigKeyTypeInfo::BigKeyTypeInfo() :
    m_typeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_updatetimeHasBeenSet(false)
{
}

CoreInternalOutcome BigKeyTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyTypeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyTypeInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyTypeInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Updatetime") && !value["Updatetime"].IsNull())
    {
        if (!value["Updatetime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BigKeyTypeInfo.Updatetime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatetime = value["Updatetime"].GetInt64();
        m_updatetimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BigKeyTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
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


string BigKeyTypeInfo::GetType() const
{
    return m_type;
}

void BigKeyTypeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BigKeyTypeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BigKeyTypeInfo::GetCount() const
{
    return m_count;
}

void BigKeyTypeInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BigKeyTypeInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t BigKeyTypeInfo::GetSize() const
{
    return m_size;
}

void BigKeyTypeInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BigKeyTypeInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t BigKeyTypeInfo::GetUpdatetime() const
{
    return m_updatetime;
}

void BigKeyTypeInfo::SetUpdatetime(const int64_t& _updatetime)
{
    m_updatetime = _updatetime;
    m_updatetimeHasBeenSet = true;
}

bool BigKeyTypeInfo::UpdatetimeHasBeenSet() const
{
    return m_updatetimeHasBeenSet;
}

