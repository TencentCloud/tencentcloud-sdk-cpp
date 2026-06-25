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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Redis实例级密码复杂度
                */
                class PasswordPolicy : public AbstractModel
                {
                public:
                    PasswordPolicy();
                    ~PasswordPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用实例级密码复杂度策略。</p><ul><li>true：开启。所有密码变动（创建/重置）必须通过下方定义的复杂度校验。</li><li>false：关闭。不进行复杂度过滤。</li></ul><p>默认值：false</p>
                     * @return Enabled <p>是否启用实例级密码复杂度策略。</p><ul><li>true：开启。所有密码变动（创建/重置）必须通过下方定义的复杂度校验。</li><li>false：关闭。不进行复杂度过滤。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用实例级密码复杂度策略。</p><ul><li>true：开启。所有密码变动（创建/重置）必须通过下方定义的复杂度校验。</li><li>false：关闭。不进行复杂度过滤。</li></ul><p>默认值：false</p>
                     * @param _enabled <p>是否启用实例级密码复杂度策略。</p><ul><li>true：开启。所有密码变动（创建/重置）必须通过下方定义的复杂度校验。</li><li>false：关闭。不进行复杂度过滤。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>大小写字母最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @return MinLetterCount <p>大小写字母最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    int64_t GetMinLetterCount() const;

                    /**
                     * 设置<p>大小写字母最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @param _minLetterCount <p>大小写字母最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    void SetMinLetterCount(const int64_t& _minLetterCount);

                    /**
                     * 判断参数 MinLetterCount 是否已赋值
                     * @return MinLetterCount 是否已赋值
                     * 
                     */
                    bool MinLetterCountHasBeenSet() const;

                    /**
                     * 获取<p>数字字符的最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @return MinDigitCount <p>数字字符的最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    int64_t GetMinDigitCount() const;

                    /**
                     * 设置<p>数字字符的最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @param _minDigitCount <p>数字字符的最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    void SetMinDigitCount(const int64_t& _minDigitCount);

                    /**
                     * 判断参数 MinDigitCount 是否已赋值
                     * @return MinDigitCount 是否已赋值
                     * 
                     */
                    bool MinDigitCountHasBeenSet() const;

                    /**
                     * 获取<p>特殊字符最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @return MinSpecialCount <p>特殊字符最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    int64_t GetMinSpecialCount() const;

                    /**
                     * 设置<p>特殊字符最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * @param _minSpecialCount <p>特殊字符最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     * 
                     */
                    void SetMinSpecialCount(const int64_t& _minSpecialCount);

                    /**
                     * 判断参数 MinSpecialCount 是否已赋值
                     * @return MinSpecialCount 是否已赋值
                     * 
                     */
                    bool MinSpecialCountHasBeenSet() const;

                    /**
                     * 获取<p>密码的最小总长度（字符数）。</p><ul><li>取值范围：[8, 64]。</li><li>默认值：8。</li><li>约束限制：密码的最小总长度必须大于或等于 MinLetterCount 、MinDigitCount 与 MinSpecialCount 三个参数之和。</li></ul>
                     * @return MinLength <p>密码的最小总长度（字符数）。</p><ul><li>取值范围：[8, 64]。</li><li>默认值：8。</li><li>约束限制：密码的最小总长度必须大于或等于 MinLetterCount 、MinDigitCount 与 MinSpecialCount 三个参数之和。</li></ul>
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置<p>密码的最小总长度（字符数）。</p><ul><li>取值范围：[8, 64]。</li><li>默认值：8。</li><li>约束限制：密码的最小总长度必须大于或等于 MinLetterCount 、MinDigitCount 与 MinSpecialCount 三个参数之和。</li></ul>
                     * @param _minLength <p>密码的最小总长度（字符数）。</p><ul><li>取值范围：[8, 64]。</li><li>默认值：8。</li><li>约束限制：密码的最小总长度必须大于或等于 MinLetterCount 、MinDigitCount 与 MinSpecialCount 三个参数之和。</li></ul>
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用实例级密码复杂度策略。</p><ul><li>true：开启。所有密码变动（创建/重置）必须通过下方定义的复杂度校验。</li><li>false：关闭。不进行复杂度过滤。</li></ul><p>默认值：false</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>大小写字母最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     */
                    int64_t m_minLetterCount;
                    bool m_minLetterCountHasBeenSet;

                    /**
                     * <p>数字字符的最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     */
                    int64_t m_minDigitCount;
                    bool m_minDigitCountHasBeenSet;

                    /**
                     * <p>特殊字符最小字符数。</p><ul><li>取值范围：[1,16]。</li><li>默认值：1。</li></ul>
                     */
                    int64_t m_minSpecialCount;
                    bool m_minSpecialCountHasBeenSet;

                    /**
                     * <p>密码的最小总长度（字符数）。</p><ul><li>取值范围：[8, 64]。</li><li>默认值：8。</li><li>约束限制：密码的最小总长度必须大于或等于 MinLetterCount 、MinDigitCount 与 MinSpecialCount 三个参数之和。</li></ul>
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_
