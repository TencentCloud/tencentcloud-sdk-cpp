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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_

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
                * OperateRiskRulePolicy请求参数结构体
                */
                class OperateRiskRulePolicyRequest : public AbstractModel
                {
                public:
                    OperateRiskRulePolicyRequest();
                    ~OperateRiskRulePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启用或者禁用
                     * @return OperateType 启用或者禁用
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置启用或者禁用
                     * @param _operateType 启用或者禁用
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取风险规则ID集合
                     * @return RuleIDs 风险规则ID集合
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置风险规则ID集合
                     * @param _ruleIDs 风险规则ID集合
                     * 
                     */
                    void SetRuleIDs(const std::vector<std::string>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取是否选择全部
                     * @return CheckAll 是否选择全部
                     * 
                     */
                    bool GetCheckAll() const;

                    /**
                     * 设置是否选择全部
                     * @param _checkAll 是否选择全部
                     * 
                     */
                    void SetCheckAll(const bool& _checkAll);

                    /**
                     * 判断参数 CheckAll 是否已赋值
                     * @return CheckAll 是否已赋值
                     * 
                     */
                    bool CheckAllHasBeenSet() const;

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
                     * 获取用户AppID
                     * @return UserAppID 用户AppID
                     * 
                     */
                    uint64_t GetUserAppID() const;

                    /**
                     * 设置用户AppID
                     * @param _userAppID 用户AppID
                     * 
                     */
                    void SetUserAppID(const uint64_t& _userAppID);

                    /**
                     * 判断参数 UserAppID 是否已赋值
                     * @return UserAppID 是否已赋值
                     * 
                     */
                    bool UserAppIDHasBeenSet() const;

                private:

                    /**
                     * 启用或者禁用
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 风险规则ID集合
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * 是否选择全部
                     */
                    bool m_checkAll;
                    bool m_checkAllHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 用户AppID
                     */
                    uint64_t m_userAppID;
                    bool m_userAppIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_
