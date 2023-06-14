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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISKEYSPACEDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISKEYSPACEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * redis key空间信息。
                */
                class RedisKeySpaceData : public AbstractModel
                {
                public:
                    RedisKeySpaceData();
                    ~RedisKeySpaceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key名。
                     * @return Key key名。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置key名。
                     * @param _key key名。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取key类型。
                     * @return Type key类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置key类型。
                     * @param _type key类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取key编码方式。
                     * @return Encoding key编码方式。
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置key编码方式。
                     * @param _encoding key编码方式。
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取key过期时间戳（毫秒），0代表未设置过期时间。
                     * @return ExpireTime key过期时间戳（毫秒），0代表未设置过期时间。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置key过期时间戳（毫秒），0代表未设置过期时间。
                     * @param _expireTime key过期时间戳（毫秒），0代表未设置过期时间。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取key内存大小，单位Byte。
                     * @return Length key内存大小，单位Byte。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置key内存大小，单位Byte。
                     * @param _length key内存大小，单位Byte。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取元素个数。
                     * @return ItemCount 元素个数。
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置元素个数。
                     * @param _itemCount 元素个数。
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取最大元素长度。
                     * @return MaxElementSize 最大元素长度。
                     * 
                     */
                    int64_t GetMaxElementSize() const;

                    /**
                     * 设置最大元素长度。
                     * @param _maxElementSize 最大元素长度。
                     * 
                     */
                    void SetMaxElementSize(const int64_t& _maxElementSize);

                    /**
                     * 判断参数 MaxElementSize 是否已赋值
                     * @return MaxElementSize 是否已赋值
                     * 
                     */
                    bool MaxElementSizeHasBeenSet() const;

                    /**
                     * 获取平均元素长度。
                     * @return AveElementSize 平均元素长度。
                     * 
                     */
                    int64_t GetAveElementSize() const;

                    /**
                     * 设置平均元素长度。
                     * @param _aveElementSize 平均元素长度。
                     * 
                     */
                    void SetAveElementSize(const int64_t& _aveElementSize);

                    /**
                     * 判断参数 AveElementSize 是否已赋值
                     * @return AveElementSize 是否已赋值
                     * 
                     */
                    bool AveElementSizeHasBeenSet() const;

                    /**
                     * 获取所属分片序号。
                     * @return ShardId 所属分片序号。
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置所属分片序号。
                     * @param _shardId 所属分片序号。
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                private:

                    /**
                     * key名。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * key类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * key编码方式。
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * key过期时间戳（毫秒），0代表未设置过期时间。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * key内存大小，单位Byte。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 元素个数。
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * 最大元素长度。
                     */
                    int64_t m_maxElementSize;
                    bool m_maxElementSizeHasBeenSet;

                    /**
                     * 平均元素长度。
                     */
                    int64_t m_aveElementSize;
                    bool m_aveElementSizeHasBeenSet;

                    /**
                     * 所属分片序号。
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISKEYSPACEDATA_H_
