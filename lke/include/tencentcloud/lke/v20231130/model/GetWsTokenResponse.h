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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSingleWorkflow.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetWsToken返回参数结构体
                */
                class GetWsTokenResponse : public AbstractModel
                {
                public:
                    GetWsTokenResponse();
                    ~GetWsTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取token值（有效期60s，仅一次有效，多次校验会报错）
                     * @return Token token值（有效期60s，仅一次有效，多次校验会报错）
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取余额; 余额大于 0 时表示有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Balance 余额; 余额大于 0 时表示有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取对话窗输入字符限制
                     * @return InputLenLimit 对话窗输入字符限制
                     * 
                     */
                    int64_t GetInputLenLimit() const;

                    /**
                     * 判断参数 InputLenLimit 是否已赋值
                     * @return InputLenLimit 是否已赋值
                     * 
                     */
                    bool InputLenLimitHasBeenSet() const;

                    /**
                     * 获取应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * @return Pattern 应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取SingleWorkflow
                     * @return SingleWorkflow SingleWorkflow
                     * 
                     */
                    KnowledgeQaSingleWorkflow GetSingleWorkflow() const;

                    /**
                     * 判断参数 SingleWorkflow 是否已赋值
                     * @return SingleWorkflow 是否已赋值
                     * 
                     */
                    bool SingleWorkflowHasBeenSet() const;

                private:

                    /**
                     * token值（有效期60s，仅一次有效，多次校验会报错）
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 余额; 余额大于 0 时表示有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 对话窗输入字符限制
                     */
                    int64_t m_inputLenLimit;
                    bool m_inputLenLimitHasBeenSet;

                    /**
                     * 应用模式，standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * SingleWorkflow
                     */
                    KnowledgeQaSingleWorkflow m_singleWorkflow;
                    bool m_singleWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_
