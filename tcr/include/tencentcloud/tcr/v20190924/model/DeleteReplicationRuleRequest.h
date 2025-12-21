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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPLICATIONRULEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPLICATIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteReplicationRule请求参数结构体
                */
                class DeleteReplicationRuleRequest : public AbstractModel
                {
                public:
                    DeleteReplicationRuleRequest();
                    ~DeleteReplicationRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源实例ID
                     * @return SourceRegistryId 源实例ID
                     * 
                     */
                    std::string GetSourceRegistryId() const;

                    /**
                     * 设置源实例ID
                     * @param _sourceRegistryId 源实例ID
                     * 
                     */
                    void SetSourceRegistryId(const std::string& _sourceRegistryId);

                    /**
                     * 判断参数 SourceRegistryId 是否已赋值
                     * @return SourceRegistryId 是否已赋值
                     * 
                     */
                    bool SourceRegistryIdHasBeenSet() const;

                    /**
                     * 获取同步规则名称
                     * @return RuleName 同步规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置同步规则名称
                     * @param _ruleName 同步规则名称
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
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 源实例ID
                     */
                    std::string m_sourceRegistryId;
                    bool m_sourceRegistryIdHasBeenSet;

                    /**
                     * 同步规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPLICATIONRULEREQUEST_H_
