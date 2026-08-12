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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ModifyReplicationRule.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyReplication请求参数结构体
                */
                class ModifyReplicationRequest : public AbstractModel
                {
                public:
                    ModifyReplicationRequest();
                    ~ModifyReplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>复制源实例ID</p>
                     * @return SourceRegistryId <p>复制源实例ID</p>
                     * 
                     */
                    std::string GetSourceRegistryId() const;

                    /**
                     * 设置<p>复制源实例ID</p>
                     * @param _sourceRegistryId <p>复制源实例ID</p>
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
                     * 获取<p>实例同步规则名称</p>
                     * @return RuleName <p>实例同步规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>实例同步规则名称</p>
                     * @param _ruleName <p>实例同步规则名称</p>
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
                     * 获取<p>同步规则</p>
                     * @return Rule <p>同步规则</p>
                     * 
                     */
                    ModifyReplicationRule GetRule() const;

                    /**
                     * 设置<p>同步规则</p>
                     * @param _rule <p>同步规则</p>
                     * 
                     */
                    void SetRule(const ModifyReplicationRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>规则描述</p>
                     * @return Description <p>规则描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述</p>
                     * @param _description <p>规则描述</p>
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
                     * <p>复制源实例ID</p>
                     */
                    std::string m_sourceRegistryId;
                    bool m_sourceRegistryIdHasBeenSet;

                    /**
                     * <p>实例同步规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>同步规则</p>
                     */
                    ModifyReplicationRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>规则描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONREQUEST_H_
