/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATECUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATECUSTOMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodePart.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateCustomRule请求参数结构体
                */
                class CreateCustomRuleRequest : public AbstractModel
                {
                public:
                    CreateCustomRuleRequest();
                    ~CreateCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取商户ID
                     * @return MerchantId 商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
                     * @param _merchantId 商户ID
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取码长度
                     * @return CodeLength 码长度
                     * 
                     */
                    uint64_t GetCodeLength() const;

                    /**
                     * 设置码长度
                     * @param _codeLength 码长度
                     * 
                     */
                    void SetCodeLength(const uint64_t& _codeLength);

                    /**
                     * 判断参数 CodeLength 是否已赋值
                     * @return CodeLength 是否已赋值
                     * 
                     */
                    bool CodeLengthHasBeenSet() const;

                    /**
                     * 获取码段配置
                     * @return CodeParts 码段配置
                     * 
                     */
                    std::vector<CodePart> GetCodeParts() const;

                    /**
                     * 设置码段配置
                     * @param _codeParts 码段配置
                     * 
                     */
                    void SetCodeParts(const std::vector<CodePart>& _codeParts);

                    /**
                     * 判断参数 CodeParts 是否已赋值
                     * @return CodeParts 是否已赋值
                     * 
                     */
                    bool CodePartsHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 码长度
                     */
                    uint64_t m_codeLength;
                    bool m_codeLengthHasBeenSet;

                    /**
                     * 码段配置
                     */
                    std::vector<CodePart> m_codeParts;
                    bool m_codePartsHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATECUSTOMRULEREQUEST_H_
