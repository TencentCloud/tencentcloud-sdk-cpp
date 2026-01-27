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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRule.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRuleItem.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyTagRetentionRule请求参数结构体
                */
                class ModifyTagRetentionRuleRequest : public AbstractModel
                {
                public:
                    ModifyTagRetentionRuleRequest();
                    ~ModifyTagRetentionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主实例iD</p>
                     * @return RegistryId <p>主实例iD</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>主实例iD</p>
                     * @param _registryId <p>主实例iD</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间的Id，必须填写原有的命名空间id</p>
                     * @return NamespaceId <p>命名空间的Id，必须填写原有的命名空间id</p>
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置<p>命名空间的Id，必须填写原有的命名空间id</p>
                     * @param _namespaceId <p>命名空间的Id，必须填写原有的命名空间id</p>
                     * 
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>执行周期，必须填写为原来的设置</p>
                     * @return CronSetting <p>执行周期，必须填写为原来的设置</p>
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置<p>执行周期，必须填写为原来的设置</p>
                     * @param _cronSetting <p>执行周期，必须填写为原来的设置</p>
                     * 
                     */
                    void SetCronSetting(const std::string& _cronSetting);

                    /**
                     * 判断参数 CronSetting 是否已赋值
                     * @return CronSetting 是否已赋值
                     * 
                     */
                    bool CronSettingHasBeenSet() const;

                    /**
                     * 获取<p>规则Id</p>
                     * @return RetentionId <p>规则Id</p>
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置<p>规则Id</p>
                     * @param _retentionId <p>规则Id</p>
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取<p>保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * @return RetentionRule <p>保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * 
                     */
                    RetentionRule GetRetentionRule() const;

                    /**
                     * 设置<p>保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * @param _retentionRule <p>保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * 
                     */
                    void SetRetentionRule(const RetentionRule& _retentionRule);

                    /**
                     * 判断参数 RetentionRule 是否已赋值
                     * @return RetentionRule 是否已赋值
                     * 
                     */
                    bool RetentionRuleHasBeenSet() const;

                    /**
                     * 获取<p>高级保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * @return AdvancedRuleItems <p>高级保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * 
                     */
                    std::vector<RetentionRuleItem> GetAdvancedRuleItems() const;

                    /**
                     * 设置<p>高级保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * @param _advancedRuleItems <p>高级保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     * 
                     */
                    void SetAdvancedRuleItems(const std::vector<RetentionRuleItem>& _advancedRuleItems);

                    /**
                     * 判断参数 AdvancedRuleItems 是否已赋值
                     * @return AdvancedRuleItems 是否已赋值
                     * 
                     */
                    bool AdvancedRuleItemsHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用规则</p>
                     * @return Disabled <p>是否禁用规则</p>
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置<p>是否禁用规则</p>
                     * @param _disabled <p>是否禁用规则</p>
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                private:

                    /**
                     * <p>主实例iD</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>命名空间的Id，必须填写原有的命名空间id</p>
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>执行周期，必须填写为原来的设置</p>
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * <p>规则Id</p>
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * <p>保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     */
                    RetentionRule m_retentionRule;
                    bool m_retentionRuleHasBeenSet;

                    /**
                     * <p>高级保留策略，当基本保留策略和高级保留策略同时配置时，优先使用高级保留策略</p>
                     */
                    std::vector<RetentionRuleItem> m_advancedRuleItems;
                    bool m_advancedRuleItemsHasBeenSet;

                    /**
                     * <p>是否禁用规则</p>
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_
