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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_

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
                * OperateRisk请求参数结构体
                */
                class OperateRiskRequest : public AbstractModel
                {
                public:
                    OperateRiskRequest();
                    ~OperateRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>风险规则ID</p>
                     * @return RiskRuleId <p>风险规则ID</p>
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置<p>风险规则ID</p>
                     * @param _riskRuleId <p>风险规则ID</p>
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>风险ID集合</p>
                     * @return RiskIdList <p>风险ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetRiskIdList() const;

                    /**
                     * 设置<p>风险ID集合</p>
                     * @param _riskIdList <p>风险ID集合</p>
                     * 
                     */
                    void SetRiskIdList(const std::vector<uint64_t>& _riskIdList);

                    /**
                     * 判断参数 RiskIdList 是否已赋值
                     * @return RiskIdList 是否已赋值
                     * 
                     */
                    bool RiskIdListHasBeenSet() const;

                    /**
                     * 获取<p>操作类型</p>
                     * @return OperationType <p>操作类型</p>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _operationType <p>操作类型</p>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>风险忽略原因</p>
                     * @return Reason <p>风险忽略原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>风险忽略原因</p>
                     * @param _reason <p>风险忽略原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>风险规则ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>风险ID集合</p>
                     */
                    std::vector<uint64_t> m_riskIdList;
                    bool m_riskIdListHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>风险忽略原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_
