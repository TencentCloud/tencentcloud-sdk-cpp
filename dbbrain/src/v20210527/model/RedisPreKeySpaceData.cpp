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

#include <tencentcloud/dbbrain/v20210527/model/RedisPreKeySpaceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisPreKeySpaceData::RedisPreKeySpaceData() :
    m_aveElementSizeHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_keyPreIndexHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_countHasBeenSet(false),
    m_maxElementSizeHasBeenSet(false)
{
}

CoreInternalOutcome RedisPreKeySpaceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AveElementSize") && !value["AveElementSize"].IsNull())
    {
        if (!value["AveElementSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.AveElementSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aveElementSize = value["AveElementSize"].GetInt64();
        m_aveElementSizeHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("KeyPreIndex") && !value["KeyPreIndex"].IsNull())
    {
        if (!value["KeyPreIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.KeyPreIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPreIndex = string(value["KeyPreIndex"].GetString());
        m_keyPreIndexHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("MaxElementSize") && !value["MaxElementSize"].IsNull())
    {
        if (!value["MaxElementSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisPreKeySpaceData.MaxElementSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxElementSize = value["MaxElementSize"].GetInt64();
        m_maxElementSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisPreKeySpaceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aveElementSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AveElementSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aveElementSize, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_keyPreIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPreIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPreIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_maxElementSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxElementSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxElementSize, allocator);
    }

}


int64_t RedisPreKeySpaceData::GetAveElementSize() const
{
    return m_aveElementSize;
}

void RedisPreKeySpaceData::SetAveElementSize(const int64_t& _aveElementSize)
{
    m_aveElementSize = _aveElementSize;
    m_aveElementSizeHasBeenSet = true;
}

bool RedisPreKeySpaceData::AveElementSizeHasBeenSet() const
{
    return m_aveElementSizeHasBeenSet;
}

int64_t RedisPreKeySpaceData::GetLength() const
{
    return m_length;
}

void RedisPreKeySpaceData::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool RedisPreKeySpaceData::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string RedisPreKeySpaceData::GetKeyPreIndex() const
{
    return m_keyPreIndex;
}

void RedisPreKeySpaceData::SetKeyPreIndex(const string& _keyPreIndex)
{
    m_keyPreIndex = _keyPreIndex;
    m_keyPreIndexHasBeenSet = true;
}

bool RedisPreKeySpaceData::KeyPreIndexHasBeenSet() const
{
    return m_keyPreIndexHasBeenSet;
}

int64_t RedisPreKeySpaceData::GetItemCount() const
{
    return m_itemCount;
}

void RedisPreKeySpaceData::SetItemCount(const int64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool RedisPreKeySpaceData::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t RedisPreKeySpaceData::GetCount() const
{
    return m_count;
}

void RedisPreKeySpaceData::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RedisPreKeySpaceData::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t RedisPreKeySpaceData::GetMaxElementSize() const
{
    return m_maxElementSize;
}

void RedisPreKeySpaceData::SetMaxElementSize(const int64_t& _maxElementSize)
{
    m_maxElementSize = _maxElementSize;
    m_maxElementSizeHasBeenSet = true;
}

bool RedisPreKeySpaceData::MaxElementSizeHasBeenSet() const
{
    return m_maxElementSizeHasBeenSet;
}

