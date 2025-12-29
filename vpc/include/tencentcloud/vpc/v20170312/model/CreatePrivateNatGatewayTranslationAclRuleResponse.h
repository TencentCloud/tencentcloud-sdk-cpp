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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TranslationAclRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreatePrivateNatGatewayTranslationAclRule返回参数结构体
                */
                class CreatePrivateNatGatewayTranslationAclRuleResponse : public AbstractModel
                {
                public:
                    CreatePrivateNatGatewayTranslationAclRuleResponse();
                    ~CreatePrivateNatGatewayTranslationAclRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建成功的访问控制列表。
                     * @return TranslationAclRuleSet 创建成功的访问控制列表。
                     * 
                     */
                    std::vector<TranslationAclRule> GetTranslationAclRuleSet() const;

                    /**
                     * 判断参数 TranslationAclRuleSet 是否已赋值
                     * @return TranslationAclRuleSet 是否已赋值
                     * 
                     */
                    bool TranslationAclRuleSetHasBeenSet() const;

                private:

                    /**
                     * 创建成功的访问控制列表。
                     */
                    std::vector<TranslationAclRule> m_translationAclRuleSet;
                    bool m_translationAclRuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULERESPONSE_H_
