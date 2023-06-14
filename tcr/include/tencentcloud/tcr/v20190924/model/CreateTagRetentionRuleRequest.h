/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONRULEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRule.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateTagRetentionRule请求参数结构体
                */
                class CreateTagRetentionRuleRequest : public AbstractModel
                {
                public:
                    CreateTagRetentionRuleRequest();
                    ~CreateTagRetentionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例iD
                     * @return RegistryId 主实例iD
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例iD
                     * @param _registryId 主实例iD
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
                     * 获取命名空间的Id
                     * @return NamespaceId 命名空间的Id
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置命名空间的Id
                     * @param _namespaceId 命名空间的Id
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
                     * 获取保留策略
                     * @return RetentionRule 保留策略
                     * 
                     */
                    RetentionRule GetRetentionRule() const;

                    /**
                     * 设置保留策略
                     * @param _retentionRule 保留策略
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
                     * 获取执行周期，当前只能选择： manual;daily;weekly;monthly
                     * @return CronSetting 执行周期，当前只能选择： manual;daily;weekly;monthly
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置执行周期，当前只能选择： manual;daily;weekly;monthly
                     * @param _cronSetting 执行周期，当前只能选择： manual;daily;weekly;monthly
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
                     * 获取是否禁用规则，默认值为false
                     * @return Disabled 是否禁用规则，默认值为false
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置是否禁用规则，默认值为false
                     * @param _disabled 是否禁用规则，默认值为false
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
                     * 主实例iD
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间的Id
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 保留策略
                     */
                    RetentionRule m_retentionRule;
                    bool m_retentionRuleHasBeenSet;

                    /**
                     * 执行周期，当前只能选择： manual;daily;weekly;monthly
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * 是否禁用规则，默认值为false
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONRULEREQUEST_H_
