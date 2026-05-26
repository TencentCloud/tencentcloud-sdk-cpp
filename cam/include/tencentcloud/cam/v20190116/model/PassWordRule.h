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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 子账号密码规则
                */
                class PassWordRule : public AbstractModel
                {
                public:
                    PassWordRule();
                    ~PassWordRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinimumLength 最小长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinimumLength() const;

                    /**
                     * 设置最小长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minimumLength 最小长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinimumLength(const int64_t& _minimumLength);

                    /**
                     * 判断参数 MinimumLength 是否已赋值
                     * @return MinimumLength 是否已赋值
                     * 
                     */
                    bool MinimumLengthHasBeenSet() const;

                    /**
                     * 获取必须包含的字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MustContain 必须包含的字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMustContain() const;

                    /**
                     * 设置必须包含的字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mustContain 必须包含的字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMustContain(const std::string& _mustContain);

                    /**
                     * 判断参数 MustContain 是否已赋值
                     * @return MustContain 是否已赋值
                     * 
                     */
                    bool MustContainHasBeenSet() const;

                    /**
                     * 获取强制修改周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForcePasswordChange 强制修改周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetForcePasswordChange() const;

                    /**
                     * 设置强制修改周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forcePasswordChange 强制修改周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForcePasswordChange(const int64_t& _forcePasswordChange);

                    /**
                     * 判断参数 ForcePasswordChange 是否已赋值
                     * @return ForcePasswordChange 是否已赋值
                     * 
                     */
                    bool ForcePasswordChangeHasBeenSet() const;

                    /**
                     * 获取重复使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReusePasswordLimit 重复使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReusePasswordLimit() const;

                    /**
                     * 设置重复使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reusePasswordLimit 重复使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReusePasswordLimit(const int64_t& _reusePasswordLimit);

                    /**
                     * 判断参数 ReusePasswordLimit 是否已赋值
                     * @return ReusePasswordLimit 是否已赋值
                     * 
                     */
                    bool ReusePasswordLimitHasBeenSet() const;

                    /**
                     * 获取密码重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryPasswordLimit 密码重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryPasswordLimit() const;

                    /**
                     * 设置密码重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryPasswordLimit 密码重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryPasswordLimit(const int64_t& _retryPasswordLimit);

                    /**
                     * 判断参数 RetryPasswordLimit 是否已赋值
                     * @return RetryPasswordLimit 是否已赋值
                     * 
                     */
                    bool RetryPasswordLimitHasBeenSet() const;

                    /**
                     * 获取密码过期失效 1：是，2：否（是：密码过期后，子用户无法登录，需要管理员重置密码。否：密码过期后，子用户可登录，登录后强制根据旧密码修改密码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PasswordExpirationInvalidation 密码过期失效 1：是，2：否（是：密码过期后，子用户无法登录，需要管理员重置密码。否：密码过期后，子用户可登录，登录后强制根据旧密码修改密码）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPasswordExpirationInvalidation() const;

                    /**
                     * 设置密码过期失效 1：是，2：否（是：密码过期后，子用户无法登录，需要管理员重置密码。否：密码过期后，子用户可登录，登录后强制根据旧密码修改密码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passwordExpirationInvalidation 密码过期失效 1：是，2：否（是：密码过期后，子用户无法登录，需要管理员重置密码。否：密码过期后，子用户可登录，登录后强制根据旧密码修改密码）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPasswordExpirationInvalidation(const int64_t& _passwordExpirationInvalidation);

                    /**
                     * 判断参数 PasswordExpirationInvalidation 是否已赋值
                     * @return PasswordExpirationInvalidation 是否已赋值
                     * 
                     */
                    bool PasswordExpirationInvalidationHasBeenSet() const;

                private:

                    /**
                     * 最小长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minimumLength;
                    bool m_minimumLengthHasBeenSet;

                    /**
                     * 必须包含的字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mustContain;
                    bool m_mustContainHasBeenSet;

                    /**
                     * 强制修改周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_forcePasswordChange;
                    bool m_forcePasswordChangeHasBeenSet;

                    /**
                     * 重复使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reusePasswordLimit;
                    bool m_reusePasswordLimitHasBeenSet;

                    /**
                     * 密码重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryPasswordLimit;
                    bool m_retryPasswordLimitHasBeenSet;

                    /**
                     * 密码过期失效 1：是，2：否（是：密码过期后，子用户无法登录，需要管理员重置密码。否：密码过期后，子用户可登录，登录后强制根据旧密码修改密码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_passwordExpirationInvalidation;
                    bool m_passwordExpirationInvalidationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_
