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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYCOMPLIANCERULELEVELINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYCOMPLIANCERULELEVELINFOREQUEST_H_

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
                * ModifyDspmIdentifyComplianceRuleLevelInfo请求参数结构体
                */
                class ModifyDspmIdentifyComplianceRuleLevelInfoRequest : public AbstractModel
                {
                public:
                    ModifyDspmIdentifyComplianceRuleLevelInfoRequest();
                    ~ModifyDspmIdentifyComplianceRuleLevelInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>识别模板ID</p>
                     * @return ComplianceId <p>识别模板ID</p>
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置<p>识别模板ID</p>
                     * @param _complianceId <p>识别模板ID</p>
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取<p>数据项id</p>
                     * @return RuleId <p>数据项id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>数据项id</p>
                     * @param _ruleId <p>数据项id</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>级别项id</p>
                     * @return LevelId <p>级别项id</p>
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置<p>级别项id</p>
                     * @param _levelId <p>级别项id</p>
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

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

                private:

                    /**
                     * <p>识别模板ID</p>
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * <p>数据项id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>级别项id</p>
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYCOMPLIANCERULELEVELINFOREQUEST_H_
