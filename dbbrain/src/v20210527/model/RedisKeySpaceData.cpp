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

#include <tencentcloud/dbbrain/v20210527/model/RedisKeySpaceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisKeySpaceData::RedisKeySpaceData() :
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_maxElementSizeHasBeenSet(false),
    m_aveElementSizeHasBeenSet(false),
    m_shardIdHasBeenSet(false)
{
}

CoreInternalOutcome RedisKeySpaceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Encoding") && !value["Encoding"].IsNull())
    {
        if (!value["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(value["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("MaxElementSize") && !value["MaxElementSize"].IsNull())
    {
        if (!value["MaxElementSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.MaxElementSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxElementSize = value["MaxElementSize"].GetInt64();
        m_maxElementSizeHasBeenSet = true;
    }

    if (value.HasMember("AveElementSize") && !value["AveElementSize"].IsNull())
    {
        if (!value["AveElementSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.AveElementSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aveElementSize = value["AveElementSize"].GetInt64();
        m_aveElementSizeHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisKeySpaceData.ShardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = string(value["ShardId"].GetString());
        m_shardIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisKeySpaceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_maxElementSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxElementSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxElementSize, allocator);
    }

    if (m_aveElementSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AveElementSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aveElementSize, allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardId.c_str(), allocator).Move(), allocator);
    }

}


string RedisKeySpaceData::GetKey() const
{
    return m_key;
}

void RedisKeySpaceData::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool RedisKeySpaceData::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string RedisKeySpaceData::GetType() const
{
    return m_type;
}

void RedisKeySpaceData::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RedisKeySpaceData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RedisKeySpaceData::GetEncoding() const
{
    return m_encoding;
}

void RedisKeySpaceData::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool RedisKeySpaceData::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

int64_t RedisKeySpaceData::GetExpireTime() const
{
    return m_expireTime;
}

void RedisKeySpaceData::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RedisKeySpaceData::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t RedisKeySpaceData::GetLength() const
{
    return m_length;
}

void RedisKeySpaceData::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool RedisKeySpaceData::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t RedisKeySpaceData::GetItemCount() const
{
    return m_itemCount;
}

void RedisKeySpaceData::SetItemCount(const int64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool RedisKeySpaceData::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t RedisKeySpaceData::GetMaxElementSize() const
{
    return m_maxElementSize;
}

void RedisKeySpaceData::SetMaxElementSize(const int64_t& _maxElementSize)
{
    m_maxElementSize = _maxElementSize;
    m_maxElementSizeHasBeenSet = true;
}

bool RedisKeySpaceData::MaxElementSizeHasBeenSet() const
{
    return m_maxElementSizeHasBeenSet;
}

int64_t RedisKeySpaceData::GetAveElementSize() const
{
    return m_aveElementSize;
}

void RedisKeySpaceData::SetAveElementSize(const int64_t& _aveElementSize)
{
    m_aveElementSize = _aveElementSize;
    m_aveElementSizeHasBeenSet = true;
}

bool RedisKeySpaceData::AveElementSizeHasBeenSet() const
{
    return m_aveElementSizeHasBeenSet;
}

string RedisKeySpaceData::GetShardId() const
{
    return m_shardId;
}

void RedisKeySpaceData::SetShardId(const string& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool RedisKeySpaceData::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

