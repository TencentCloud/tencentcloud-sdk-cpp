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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListConfigRuleEvaluationResults请求参数结构体
                */
                class ListConfigRuleEvaluationResultsRequest : public AbstractModel
                {
                public:
                    ListConfigRuleEvaluationResultsRequest();
                    ~ListConfigRuleEvaluationResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return ConfigRuleId 规则ID
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _configRuleId 规则ID
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Limit 偏移量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置偏移量
                     * @param _limit 偏移量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return Offset 当前页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置当前页
                     * @param _offset 当前页
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return ResourceType 类型
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置类型
                     * @param _resourceType 类型
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规
                     * @return ComplianceType 评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规
                     * 
                     */
                    std::vector<std::string> GetComplianceType() const;

                    /**
                     * 设置评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规
                     * @param _complianceType 评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规
                     * 
                     */
                    void SetComplianceType(const std::vector<std::string>& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 当前页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 类型
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规
                     */
                    std::vector<std::string> m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_
