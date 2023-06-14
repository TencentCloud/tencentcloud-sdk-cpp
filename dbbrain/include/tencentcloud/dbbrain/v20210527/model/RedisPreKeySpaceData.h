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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_

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
                * redis key前缀空间信息
                */
                class RedisPreKeySpaceData : public AbstractModel
                {
                public:
                    RedisPreKeySpaceData();
                    ~RedisPreKeySpaceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取总占用内存（Byte）。
                     * @return Length 总占用内存（Byte）。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置总占用内存（Byte）。
                     * @param _length 总占用内存（Byte）。
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
                     * 获取key前缀。
                     * @return KeyPreIndex key前缀。
                     * 
                     */
                    std::string GetKeyPreIndex() const;

                    /**
                     * 设置key前缀。
                     * @param _keyPreIndex key前缀。
                     * 
                     */
                    void SetKeyPreIndex(const std::string& _keyPreIndex);

                    /**
                     * 判断参数 KeyPreIndex 是否已赋值
                     * @return KeyPreIndex 是否已赋值
                     * 
                     */
                    bool KeyPreIndexHasBeenSet() const;

                    /**
                     * 获取元素数量。
                     * @return ItemCount 元素数量。
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置元素数量。
                     * @param _itemCount 元素数量。
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
                     * 获取key个数。
                     * @return Count key个数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置key个数。
                     * @param _count key个数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

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

                private:

                    /**
                     * 平均元素长度。
                     */
                    int64_t m_aveElementSize;
                    bool m_aveElementSizeHasBeenSet;

                    /**
                     * 总占用内存（Byte）。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * key前缀。
                     */
                    std::string m_keyPreIndex;
                    bool m_keyPreIndexHasBeenSet;

                    /**
                     * 元素数量。
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * key个数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 最大元素长度。
                     */
                    int64_t m_maxElementSize;
                    bool m_maxElementSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_
