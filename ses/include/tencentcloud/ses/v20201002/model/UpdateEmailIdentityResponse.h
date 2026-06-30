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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/DNSAttributes.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailIdentity返回参数结构体
                */
                class UpdateEmailIdentityResponse : public AbstractModel
                {
                public:
                    UpdateEmailIdentityResponse();
                    ~UpdateEmailIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>验证类型。固定值：DOMAIN</p>
                     * @return IdentityType <p>验证类型。固定值：DOMAIN</p>
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否已通过验证</p>
                     * @return VerifiedForSendingStatus <p>是否已通过验证</p>
                     * 
                     */
                    bool GetVerifiedForSendingStatus() const;

                    /**
                     * 判断参数 VerifiedForSendingStatus 是否已赋值
                     * @return VerifiedForSendingStatus 是否已赋值
                     * 
                     */
                    bool VerifiedForSendingStatusHasBeenSet() const;

                    /**
                     * 获取<p>需要配置的DNS信息</p>
                     * @return Attributes <p>需要配置的DNS信息</p>
                     * 
                     */
                    std::vector<DNSAttributes> GetAttributes() const;

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取<p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * @return DKIMOption <p>dkim位数</p><p>枚举值：</p><ul><li>0： 1024</li><li>1： 2048</li><li>2： 双签</li></ul>
                     * 
                     */
                    uint64_t GetDKIMOption() const;

                    /**
                     * 判断参数 DKIMOption 是否已赋值
                     * @return DKIMOption 是否已赋值
                     * 
                     */
                    bool DKIMOptionHasBeenSet() const;

                private:

                    /**
                     * <p>验证类型。固定值：DOMAIN</p>
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * <p>是否已通过验证</p>
                     */
                    bool m_verifiedForSendingStatus;
                    bool m_verifiedForSendingStatusHasBeenSet;

                    /**
                     * <p>需要配置的DNS信息</p>
                     */
                    std::vector<DNSAttributes> m_attributes;
                    bool m_attributesHasBeenSet;

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

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYRESPONSE_H_
