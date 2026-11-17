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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 大模型安全按小时账单分项费用
                */
                class LLMBillItemFee : public AbstractModel
                {
                public:
                    LLMBillItemFee();
                    ~LLMBillItemFee() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提示词攻击防护费用（元）
                     * @return PromptAttackFee 提示词攻击防护费用（元）
                     * 
                     */
                    std::string GetPromptAttackFee() const;

                    /**
                     * 设置提示词攻击防护费用（元）
                     * @param _promptAttackFee 提示词攻击防护费用（元）
                     * 
                     */
                    void SetPromptAttackFee(const std::string& _promptAttackFee);

                    /**
                     * 判断参数 PromptAttackFee 是否已赋值
                     * @return PromptAttackFee 是否已赋值
                     * 
                     */
                    bool PromptAttackFeeHasBeenSet() const;

                    /**
                     * 获取内容合规检测（文本）费用（元）
                     * @return ContentTextFee 内容合规检测（文本）费用（元）
                     * 
                     */
                    std::string GetContentTextFee() const;

                    /**
                     * 设置内容合规检测（文本）费用（元）
                     * @param _contentTextFee 内容合规检测（文本）费用（元）
                     * 
                     */
                    void SetContentTextFee(const std::string& _contentTextFee);

                    /**
                     * 判断参数 ContentTextFee 是否已赋值
                     * @return ContentTextFee 是否已赋值
                     * 
                     */
                    bool ContentTextFeeHasBeenSet() const;

                    /**
                     * 获取内容合规检测（图片）费用（元）
                     * @return ContentImageFee 内容合规检测（图片）费用（元）
                     * 
                     */
                    std::string GetContentImageFee() const;

                    /**
                     * 设置内容合规检测（图片）费用（元）
                     * @param _contentImageFee 内容合规检测（图片）费用（元）
                     * 
                     */
                    void SetContentImageFee(const std::string& _contentImageFee);

                    /**
                     * 判断参数 ContentImageFee 是否已赋值
                     * @return ContentImageFee 是否已赋值
                     * 
                     */
                    bool ContentImageFeeHasBeenSet() const;

                    /**
                     * 获取敏感数据检测费用（元）
                     * @return SensitiveDataFee 敏感数据检测费用（元）
                     * 
                     */
                    std::string GetSensitiveDataFee() const;

                    /**
                     * 设置敏感数据检测费用（元）
                     * @param _sensitiveDataFee 敏感数据检测费用（元）
                     * 
                     */
                    void SetSensitiveDataFee(const std::string& _sensitiveDataFee);

                    /**
                     * 判断参数 SensitiveDataFee 是否已赋值
                     * @return SensitiveDataFee 是否已赋值
                     * 
                     */
                    bool SensitiveDataFeeHasBeenSet() const;

                private:

                    /**
                     * 提示词攻击防护费用（元）
                     */
                    std::string m_promptAttackFee;
                    bool m_promptAttackFeeHasBeenSet;

                    /**
                     * 内容合规检测（文本）费用（元）
                     */
                    std::string m_contentTextFee;
                    bool m_contentTextFeeHasBeenSet;

                    /**
                     * 内容合规检测（图片）费用（元）
                     */
                    std::string m_contentImageFee;
                    bool m_contentImageFeeHasBeenSet;

                    /**
                     * 敏感数据检测费用（元）
                     */
                    std::string m_sensitiveDataFee;
                    bool m_sensitiveDataFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_
