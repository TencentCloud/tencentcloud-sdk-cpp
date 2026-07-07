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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMIDENTIFYCOMPLIANCERULERELATIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMIDENTIFYCOMPLIANCERULERELATIONREQUEST_H_

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
                * DeleteDspmIdentifyComplianceRuleRelation请求参数结构体
                */
                class DeleteDspmIdentifyComplianceRuleRelationRequest : public AbstractModel
                {
                public:
                    DeleteDspmIdentifyComplianceRuleRelationRequest();
                    ~DeleteDspmIdentifyComplianceRuleRelationRequest() = default;
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
                     * 获取<p>分类ID</p>
                     * @return CategoryId <p>分类ID</p>
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置<p>分类ID</p>
                     * @param _categoryId <p>分类ID</p>
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>数据项ID集合</p>
                     * @return RuleIds <p>数据项ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置<p>数据项ID集合</p>
                     * @param _ruleIds <p>数据项ID集合</p>
                     * 
                     */
                    void SetRuleIds(const std::vector<uint64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

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
                     * <p>分类ID</p>
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>数据项ID集合</p>
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMIDENTIFYCOMPLIANCERULERELATIONREQUEST_H_
