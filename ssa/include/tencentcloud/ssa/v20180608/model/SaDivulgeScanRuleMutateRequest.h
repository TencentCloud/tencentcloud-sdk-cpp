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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGESCANRULEMUTATEREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGESCANRULEMUTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * SaDivulgeScanRuleMutate请求参数结构体
                */
                class SaDivulgeScanRuleMutateRequest : public AbstractModel
                {
                public:
                    SaDivulgeScanRuleMutateRequest();
                    ~SaDivulgeScanRuleMutateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Id
                     * @return Id Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
                     * @param _id Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取DivulgeSoure
                     * @return DivulgeSoure DivulgeSoure
                     * 
                     */
                    std::string GetDivulgeSoure() const;

                    /**
                     * 设置DivulgeSoure
                     * @param _divulgeSoure DivulgeSoure
                     * 
                     */
                    void SetDivulgeSoure(const std::string& _divulgeSoure);

                    /**
                     * 判断参数 DivulgeSoure 是否已赋值
                     * @return DivulgeSoure 是否已赋值
                     * 
                     */
                    bool DivulgeSoureHasBeenSet() const;

                    /**
                     * 获取DivulgeSoureUrl
                     * @return DivulgeSoureUrl DivulgeSoureUrl
                     * 
                     */
                    std::string GetDivulgeSoureUrl() const;

                    /**
                     * 设置DivulgeSoureUrl
                     * @param _divulgeSoureUrl DivulgeSoureUrl
                     * 
                     */
                    void SetDivulgeSoureUrl(const std::string& _divulgeSoureUrl);

                    /**
                     * 判断参数 DivulgeSoureUrl 是否已赋值
                     * @return DivulgeSoureUrl 是否已赋值
                     * 
                     */
                    bool DivulgeSoureUrlHasBeenSet() const;

                    /**
                     * 获取RuleName
                     * @return RuleName RuleName
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置RuleName
                     * @param _ruleName RuleName
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取RuleWord
                     * @return RuleWord RuleWord
                     * 
                     */
                    std::string GetRuleWord() const;

                    /**
                     * 设置RuleWord
                     * @param _ruleWord RuleWord
                     * 
                     */
                    void SetRuleWord(const std::string& _ruleWord);

                    /**
                     * 判断参数 RuleWord 是否已赋值
                     * @return RuleWord 是否已赋值
                     * 
                     */
                    bool RuleWordHasBeenSet() const;

                    /**
                     * 获取ScanStatus
                     * @return ScanStatus ScanStatus
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置ScanStatus
                     * @param _scanStatus ScanStatus
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取DivulgeType
                     * @return DivulgeType DivulgeType
                     * 
                     */
                    std::string GetDivulgeType() const;

                    /**
                     * 设置DivulgeType
                     * @param _divulgeType DivulgeType
                     * 
                     */
                    void SetDivulgeType(const std::string& _divulgeType);

                    /**
                     * 判断参数 DivulgeType 是否已赋值
                     * @return DivulgeType 是否已赋值
                     * 
                     */
                    bool DivulgeTypeHasBeenSet() const;

                    /**
                     * 获取RepairAdvice
                     * @return RepairAdvice RepairAdvice
                     * 
                     */
                    std::string GetRepairAdvice() const;

                    /**
                     * 设置RepairAdvice
                     * @param _repairAdvice RepairAdvice
                     * 
                     */
                    void SetRepairAdvice(const std::string& _repairAdvice);

                    /**
                     * 判断参数 RepairAdvice 是否已赋值
                     * @return RepairAdvice 是否已赋值
                     * 
                     */
                    bool RepairAdviceHasBeenSet() const;

                private:

                    /**
                     * Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * DivulgeSoure
                     */
                    std::string m_divulgeSoure;
                    bool m_divulgeSoureHasBeenSet;

                    /**
                     * DivulgeSoureUrl
                     */
                    std::string m_divulgeSoureUrl;
                    bool m_divulgeSoureUrlHasBeenSet;

                    /**
                     * RuleName
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * RuleWord
                     */
                    std::string m_ruleWord;
                    bool m_ruleWordHasBeenSet;

                    /**
                     * ScanStatus
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * DivulgeType
                     */
                    std::string m_divulgeType;
                    bool m_divulgeTypeHasBeenSet;

                    /**
                     * RepairAdvice
                     */
                    std::string m_repairAdvice;
                    bool m_repairAdviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGESCANRULEMUTATEREQUEST_H_
