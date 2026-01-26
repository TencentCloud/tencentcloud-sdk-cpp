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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_PASSWORDSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_PASSWORDSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 密码要求设置。
                */
                class PasswordSetting : public AbstractModel
                {
                public:
                    PasswordSetting();
                    ~PasswordSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密码最小长度，8-20，默认8。
                     * @return MinLength 密码最小长度，8-20，默认8。
                     * 
                     */
                    uint64_t GetMinLength() const;

                    /**
                     * 设置密码最小长度，8-20，默认8。
                     * @param _minLength 密码最小长度，8-20，默认8。
                     * 
                     */
                    void SetMinLength(const uint64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取密码复杂度，0不限制，1包含字母和数字，2至少包括大写字母、小写字母、数字、特殊符号，默认2。
                     * @return Complexity 密码复杂度，0不限制，1包含字母和数字，2至少包括大写字母、小写字母、数字、特殊符号，默认2。
                     * 
                     */
                    uint64_t GetComplexity() const;

                    /**
                     * 设置密码复杂度，0不限制，1包含字母和数字，2至少包括大写字母、小写字母、数字、特殊符号，默认2。
                     * @param _complexity 密码复杂度，0不限制，1包含字母和数字，2至少包括大写字母、小写字母、数字、特殊符号，默认2。
                     * 
                     */
                    void SetComplexity(const uint64_t& _complexity);

                    /**
                     * 判断参数 Complexity 是否已赋值
                     * @return Complexity 是否已赋值
                     * 
                     */
                    bool ComplexityHasBeenSet() const;

                    /**
                     * 获取密码有效期，0不限制，30天，90天，180天。
                     * @return ValidTerm 密码有效期，0不限制，30天，90天，180天。
                     * 
                     */
                    uint64_t GetValidTerm() const;

                    /**
                     * 设置密码有效期，0不限制，30天，90天，180天。
                     * @param _validTerm 密码有效期，0不限制，30天，90天，180天。
                     * 
                     */
                    void SetValidTerm(const uint64_t& _validTerm);

                    /**
                     * 判断参数 ValidTerm 是否已赋值
                     * @return ValidTerm 是否已赋值
                     * 
                     */
                    bool ValidTermHasBeenSet() const;

                    /**
                     * 获取检查最近n次密码设置是否存在相同密码，2-10，默认5。
                     * @return CheckHistory 检查最近n次密码设置是否存在相同密码，2-10，默认5。
                     * 
                     */
                    uint64_t GetCheckHistory() const;

                    /**
                     * 设置检查最近n次密码设置是否存在相同密码，2-10，默认5。
                     * @param _checkHistory 检查最近n次密码设置是否存在相同密码，2-10，默认5。
                     * 
                     */
                    void SetCheckHistory(const uint64_t& _checkHistory);

                    /**
                     * 判断参数 CheckHistory 是否已赋值
                     * @return CheckHistory 是否已赋值
                     * 
                     */
                    bool CheckHistoryHasBeenSet() const;

                private:

                    /**
                     * 密码最小长度，8-20，默认8。
                     */
                    uint64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * 密码复杂度，0不限制，1包含字母和数字，2至少包括大写字母、小写字母、数字、特殊符号，默认2。
                     */
                    uint64_t m_complexity;
                    bool m_complexityHasBeenSet;

                    /**
                     * 密码有效期，0不限制，30天，90天，180天。
                     */
                    uint64_t m_validTerm;
                    bool m_validTermHasBeenSet;

                    /**
                     * 检查最近n次密码设置是否存在相同密码，2-10，默认5。
                     */
                    uint64_t m_checkHistory;
                    bool m_checkHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_PASSWORDSETTING_H_
