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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_

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
                * ModifyTagRetentionRule请求参数结构体
                */
                class ModifyTagRetentionRuleRequest : public AbstractModel
                {
                public:
                    ModifyTagRetentionRuleRequest();
                    ~ModifyTagRetentionRuleRequest() = default;
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
                     * 获取命名空间的Id，必须填写原有的命名空间id
                     * @return NamespaceId 命名空间的Id，必须填写原有的命名空间id
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置命名空间的Id，必须填写原有的命名空间id
                     * @param _namespaceId 命名空间的Id，必须填写原有的命名空间id
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
                     * 获取执行周期，必须填写为原来的设置
                     * @return CronSetting 执行周期，必须填写为原来的设置
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置执行周期，必须填写为原来的设置
                     * @param _cronSetting 执行周期，必须填写为原来的设置
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
                     * 获取规则Id
                     * @return RetentionId 规则Id
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置规则Id
                     * @param _retentionId 规则Id
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
                     * 获取是否禁用规则
                     * @return Disabled 是否禁用规则
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置是否禁用规则
                     * @param _disabled 是否禁用规则
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
                     * 命名空间的Id，必须填写原有的命名空间id
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 保留策略
                     */
                    RetentionRule m_retentionRule;
                    bool m_retentionRuleHasBeenSet;

                    /**
                     * 执行周期，必须填写为原来的设置
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * 规则Id
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * 是否禁用规则
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYTAGRETENTIONRULEREQUEST_H_
