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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSAIANALYSISSMTPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSAIANALYSISSMTPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AccessAIAnalysisSMTP请求参数结构体
                */
                class AccessAIAnalysisSMTPRequest : public AbstractModel
                {
                public:
                    AccessAIAnalysisSMTPRequest();
                    ~AccessAIAnalysisSMTPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>邮箱账号</p>
                     * @return AccountName <p>邮箱账号</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>邮箱账号</p>
                     * @param _accountName <p>邮箱账号</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>邮箱类型</p><p>枚举值：</p><ul><li>1： QQ邮箱</li><li>2： GMail</li><li>3： OutLook</li></ul>
                     * @return Type <p>邮箱类型</p><p>枚举值：</p><ul><li>1： QQ邮箱</li><li>2： GMail</li><li>3： OutLook</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>邮箱类型</p><p>枚举值：</p><ul><li>1： QQ邮箱</li><li>2： GMail</li><li>3： OutLook</li></ul>
                     * @param _type <p>邮箱类型</p><p>枚举值：</p><ul><li>1： QQ邮箱</li><li>2： GMail</li><li>3： OutLook</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>邮箱授权密码</p>
                     * @return Password <p>邮箱授权密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>邮箱授权密码</p>
                     * @param _password <p>邮箱授权密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * <p>邮箱账号</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>邮箱类型</p><p>枚举值：</p><ul><li>1： QQ邮箱</li><li>2： GMail</li><li>3： OutLook</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>邮箱授权密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSAIANALYSISSMTPREQUEST_H_
