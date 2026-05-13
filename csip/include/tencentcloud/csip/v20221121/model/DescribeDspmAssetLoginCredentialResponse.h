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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALRESPONSE_H_

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
                * DescribeDspmAssetLoginCredential返回参数结构体
                */
                class DescribeDspmAssetLoginCredentialResponse : public AbstractModel
                {
                public:
                    DescribeDspmAssetLoginCredentialResponse();
                    ~DescribeDspmAssetLoginCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号
                     * @return Account 账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取密码信息
                     * @return Password 密码信息
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取有效期开始时间
                     * @return ValidateStart 有效期开始时间
                     * 
                     */
                    std::string GetValidateStart() const;

                    /**
                     * 判断参数 ValidateStart 是否已赋值
                     * @return ValidateStart 是否已赋值
                     * 
                     */
                    bool ValidateStartHasBeenSet() const;

                    /**
                     * 获取有效期结束时间
                     * @return ValidateEnd 有效期结束时间
                     * 
                     */
                    std::string GetValidateEnd() const;

                    /**
                     * 判断参数 ValidateEnd 是否已赋值
                     * @return ValidateEnd 是否已赋值
                     * 
                     */
                    bool ValidateEndHasBeenSet() const;

                private:

                    /**
                     * 账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 密码信息
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 有效期开始时间
                     */
                    std::string m_validateStart;
                    bool m_validateStartHasBeenSet;

                    /**
                     * 有效期结束时间
                     */
                    std::string m_validateEnd;
                    bool m_validateEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALRESPONSE_H_
