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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_RESETUSERREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_RESETUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ResetUser请求参数结构体
                */
                class ResetUserRequest : public AbstractModel
                {
                public:
                    ResetUserRequest();
                    ~ResetUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户ID集合</p>
                     * @return IdSet <p>用户ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置<p>用户ID集合</p>
                     * @param _idSet <p>用户ID集合</p>
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取<p>重置类型</p><p>枚举值：</p><ul><li>0： 同时重置本地认证密码、OTP验证码</li><li>1： 仅重置本地认证密码</li><li>2： 仅重置OTP验证码</li></ul><p>默认值：0</p>
                     * @return ResetType <p>重置类型</p><p>枚举值：</p><ul><li>0： 同时重置本地认证密码、OTP验证码</li><li>1： 仅重置本地认证密码</li><li>2： 仅重置OTP验证码</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetResetType() const;

                    /**
                     * 设置<p>重置类型</p><p>枚举值：</p><ul><li>0： 同时重置本地认证密码、OTP验证码</li><li>1： 仅重置本地认证密码</li><li>2： 仅重置OTP验证码</li></ul><p>默认值：0</p>
                     * @param _resetType <p>重置类型</p><p>枚举值：</p><ul><li>0： 同时重置本地认证密码、OTP验证码</li><li>1： 仅重置本地认证密码</li><li>2： 仅重置OTP验证码</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetResetType(const uint64_t& _resetType);

                    /**
                     * 判断参数 ResetType 是否已赋值
                     * @return ResetType 是否已赋值
                     * 
                     */
                    bool ResetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID集合</p>
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * <p>重置类型</p><p>枚举值：</p><ul><li>0： 同时重置本地认证密码、OTP验证码</li><li>1： 仅重置本地认证密码</li><li>2： 仅重置OTP验证码</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_resetType;
                    bool m_resetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RESETUSERREQUEST_H_
