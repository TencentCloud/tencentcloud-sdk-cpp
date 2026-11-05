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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PASSWORDCOMPLEXITY_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PASSWORDCOMPLEXITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 密码复杂度
                */
                class PasswordComplexity : public AbstractModel
                {
                public:
                    PasswordComplexity();
                    ~PasswordComplexity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启密码复杂度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable <p>是否开启密码复杂度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启密码复杂度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable <p>是否开启密码复杂度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>大写和小写字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MixedCaseCount <p>大写和小写字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMixedCaseCount() const;

                    /**
                     * 设置<p>大写和小写字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mixedCaseCount <p>大写和小写字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMixedCaseCount(const uint64_t& _mixedCaseCount);

                    /**
                     * 判断参数 MixedCaseCount 是否已赋值
                     * @return MixedCaseCount 是否已赋值
                     * 
                     */
                    bool MixedCaseCountHasBeenSet() const;

                    /**
                     * 获取<p>数字字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberCount <p>数字字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNumberCount() const;

                    /**
                     * 设置<p>数字字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberCount <p>数字字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumberCount(const uint64_t& _numberCount);

                    /**
                     * 判断参数 NumberCount 是否已赋值
                     * @return NumberCount 是否已赋值
                     * 
                     */
                    bool NumberCountHasBeenSet() const;

                    /**
                     * 获取<p>特殊字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialCharCount <p>特殊字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSpecialCharCount() const;

                    /**
                     * 设置<p>特殊字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specialCharCount <p>特殊字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecialCharCount(const uint64_t& _specialCharCount);

                    /**
                     * 判断参数 SpecialCharCount 是否已赋值
                     * @return SpecialCharCount 是否已赋值
                     * 
                     */
                    bool SpecialCharCountHasBeenSet() const;

                    /**
                     * 获取<p>密码的最小长度</p><p>取值范围：[8, 64]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Length <p>密码的最小长度</p><p>取值范围：[8, 64]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置<p>密码的最小长度</p><p>取值范围：[8, 64]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _length <p>密码的最小长度</p><p>取值范围：[8, 64]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启密码复杂度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>大写和小写字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mixedCaseCount;
                    bool m_mixedCaseCountHasBeenSet;

                    /**
                     * <p>数字字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_numberCount;
                    bool m_numberCountHasBeenSet;

                    /**
                     * <p>特殊字符的最小长度</p><p>取值范围：[1, 16]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_specialCharCount;
                    bool m_specialCharCountHasBeenSet;

                    /**
                     * <p>密码的最小长度</p><p>取值范围：[8, 64]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PASSWORDCOMPLEXITY_H_
