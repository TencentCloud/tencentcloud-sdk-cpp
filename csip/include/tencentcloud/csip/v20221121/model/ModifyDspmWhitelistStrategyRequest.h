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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMWHITELISTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMWHITELISTSTRATEGYREQUEST_H_

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
                * ModifyDspmWhitelistStrategy请求参数结构体
                */
                class ModifyDspmWhitelistStrategyRequest : public AbstractModel
                {
                public:
                    ModifyDspmWhitelistStrategyRequest();
                    ~ModifyDspmWhitelistStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
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
                     * 获取白名单id
                     * @return WhitelistStrategyId 白名单id
                     * 
                     */
                    std::string GetWhitelistStrategyId() const;

                    /**
                     * 设置白名单id
                     * @param _whitelistStrategyId 白名单id
                     * 
                     */
                    void SetWhitelistStrategyId(const std::string& _whitelistStrategyId);

                    /**
                     * 判断参数 WhitelistStrategyId 是否已赋值
                     * @return WhitelistStrategyId 是否已赋值
                     * 
                     */
                    bool WhitelistStrategyIdHasBeenSet() const;

                    /**
                     * 获取白名单名
                     * @return Name 白名单名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置白名单名
                     * @param _name 白名单名
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
                     * 获取规则
                     * @return Rule 规则
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置规则
                     * @param _rule 规则
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 白名单id
                     */
                    std::string m_whitelistStrategyId;
                    bool m_whitelistStrategyIdHasBeenSet;

                    /**
                     * 白名单名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMWHITELISTSTRATEGYREQUEST_H_
