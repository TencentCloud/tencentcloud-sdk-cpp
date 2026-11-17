/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CharacterSize.h>
#include <tencentcloud/adp/v20260520/model/ByteCapacity.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库容量信息
                */
                class KBCapacity : public AbstractModel
                {
                public:
                    KBCapacity();
                    ~KBCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大字符数</p>
                     * @return MaxCharSize <p>最大字符数</p>
                     * 
                     */
                    std::string GetMaxCharSize() const;

                    /**
                     * 设置<p>最大字符数</p>
                     * @param _maxCharSize <p>最大字符数</p>
                     * 
                     */
                    void SetMaxCharSize(const std::string& _maxCharSize);

                    /**
                     * 判断参数 MaxCharSize 是否已赋值
                     * @return MaxCharSize 是否已赋值
                     * 
                     */
                    bool MaxCharSizeHasBeenSet() const;

                    /**
                     * 获取<p>超量字符数</p>
                     * @return OverCharSize <p>超量字符数</p>
                     * 
                     */
                    std::string GetOverCharSize() const;

                    /**
                     * 设置<p>超量字符数</p>
                     * @param _overCharSize <p>超量字符数</p>
                     * 
                     */
                    void SetOverCharSize(const std::string& _overCharSize);

                    /**
                     * 判断参数 OverCharSize 是否已赋值
                     * @return OverCharSize 是否已赋值
                     * 
                     */
                    bool OverCharSizeHasBeenSet() const;

                    /**
                     * 获取<p>已用字符数</p>
                     * @return UsedCharSize <p>已用字符数</p>
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置<p>已用字符数</p>
                     * @param _usedCharSize <p>已用字符数</p>
                     * 
                     */
                    void SetUsedCharSize(const std::string& _usedCharSize);

                    /**
                     * 判断参数 UsedCharSize 是否已赋值
                     * @return UsedCharSize 是否已赋值
                     * 
                     */
                    bool UsedCharSizeHasBeenSet() const;

                    /**
                     * 获取<p>字符数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CharacterSize <p>字符数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CharacterSize GetCharacterSize() const;

                    /**
                     * 设置<p>字符数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _characterSize <p>字符数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCharacterSize(const CharacterSize& _characterSize);

                    /**
                     * 判断参数 CharacterSize 是否已赋值
                     * @return CharacterSize 是否已赋值
                     * 
                     */
                    bool CharacterSizeHasBeenSet() const;

                    /**
                     * 获取<p>容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ByteCapacity <p>容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ByteCapacity GetByteCapacity() const;

                    /**
                     * 设置<p>容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _byteCapacity <p>容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetByteCapacity(const ByteCapacity& _byteCapacity);

                    /**
                     * 判断参数 ByteCapacity 是否已赋值
                     * @return ByteCapacity 是否已赋值
                     * 
                     */
                    bool ByteCapacityHasBeenSet() const;

                    /**
                     * 获取<p>知识库容量状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>2： 超量但可用（pu 抵扣）</li><li>3： 超量不可用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapacityStatus <p>知识库容量状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>2： 超量但可用（pu 抵扣）</li><li>3： 超量不可用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCapacityStatus() const;

                    /**
                     * 设置<p>知识库容量状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>2： 超量但可用（pu 抵扣）</li><li>3： 超量不可用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _capacityStatus <p>知识库容量状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>2： 超量但可用（pu 抵扣）</li><li>3： 超量不可用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCapacityStatus(const int64_t& _capacityStatus);

                    /**
                     * 判断参数 CapacityStatus 是否已赋值
                     * @return CapacityStatus 是否已赋值
                     * 
                     */
                    bool CapacityStatusHasBeenSet() const;

                private:

                    /**
                     * <p>最大字符数</p>
                     */
                    std::string m_maxCharSize;
                    bool m_maxCharSizeHasBeenSet;

                    /**
                     * <p>超量字符数</p>
                     */
                    std::string m_overCharSize;
                    bool m_overCharSizeHasBeenSet;

                    /**
                     * <p>已用字符数</p>
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                    /**
                     * <p>字符数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CharacterSize m_characterSize;
                    bool m_characterSizeHasBeenSet;

                    /**
                     * <p>容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ByteCapacity m_byteCapacity;
                    bool m_byteCapacityHasBeenSet;

                    /**
                     * <p>知识库容量状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>2： 超量但可用（pu 抵扣）</li><li>3： 超量不可用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_capacityStatus;
                    bool m_capacityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_
