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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailIdentity请求参数结构体
                */
                class UpdateEmailIdentityRequest : public AbstractModel
                {
                public:
                    UpdateEmailIdentityRequest();
                    ~UpdateEmailIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求验证的域名</p>
                     * @return EmailIdentity <p>请求验证的域名</p>
                     * 
                     */
                    std::string GetEmailIdentity() const;

                    /**
                     * 设置<p>请求验证的域名</p>
                     * @param _emailIdentity <p>请求验证的域名</p>
                     * 
                     */
                    void SetEmailIdentity(const std::string& _emailIdentity);

                    /**
                     * 判断参数 EmailIdentity 是否已赋值
                     * @return EmailIdentity 是否已赋值
                     * 
                     */
                    bool EmailIdentityHasBeenSet() const;

                    /**
                     * 获取<p>匹分控制台新老API</p>
                     * @return NewAPI <p>匹分控制台新老API</p>
                     * 
                     */
                    bool GetNewAPI() const;

                    /**
                     * 设置<p>匹分控制台新老API</p>
                     * @param _newAPI <p>匹分控制台新老API</p>
                     * 
                     */
                    void SetNewAPI(const bool& _newAPI);

                    /**
                     * 判断参数 NewAPI 是否已赋值
                     * @return NewAPI 是否已赋值
                     * 
                     */
                    bool NewAPIHasBeenSet() const;

                    /**
                     * 获取<p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * @return DKIMOption <p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * 
                     */
                    uint64_t GetDKIMOption() const;

                    /**
                     * 设置<p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * @param _dKIMOption <p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * 
                     */
                    void SetDKIMOption(const uint64_t& _dKIMOption);

                    /**
                     * 判断参数 DKIMOption 是否已赋值
                     * @return DKIMOption 是否已赋值
                     * 
                     */
                    bool DKIMOptionHasBeenSet() const;

                private:

                    /**
                     * <p>请求验证的域名</p>
                     */
                    std::string m_emailIdentity;
                    bool m_emailIdentityHasBeenSet;

                    /**
                     * <p>匹分控制台新老API</p>
                     */
                    bool m_newAPI;
                    bool m_newAPIHasBeenSet;

                    /**
                     * <p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     */
                    uint64_t m_dKIMOption;
                    bool m_dKIMOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_
