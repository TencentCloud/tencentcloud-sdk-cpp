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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DETACHCONFIGRULETOCOMPLIANCEPACKREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DETACHCONFIGRULETOCOMPLIANCEPACKREQUEST_H_

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
                * DetachConfigRuleToCompliancePack请求参数结构体
                */
                class DetachConfigRuleToCompliancePackRequest : public AbstractModel
                {
                public:
                    DetachConfigRuleToCompliancePackRequest();
                    ~DetachConfigRuleToCompliancePackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取合规包ID
                     * @return CompliancePackId 合规包ID
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置合规包ID
                     * @param _compliancePackId 合规包ID
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

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

                private:

                    /**
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DETACHCONFIGRULETOCOMPLIANCEPACKREQUEST_H_
