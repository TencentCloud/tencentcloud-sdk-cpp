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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomRules.h>
#include <tencentcloud/teo/v20220901/model/ManagedRules.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全策略配置
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义规则配置。
                     * @return CustomRules 自定义规则配置。
                     * 
                     */
                    CustomRules GetCustomRules() const;

                    /**
                     * 设置自定义规则配置。
                     * @param _customRules 自定义规则配置。
                     * 
                     */
                    void SetCustomRules(const CustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取托管规则配置。
                     * @return ManagedRules 托管规则配置。
                     * 
                     */
                    ManagedRules GetManagedRules() const;

                    /**
                     * 设置托管规则配置。
                     * @param _managedRules 托管规则配置。
                     * 
                     */
                    void SetManagedRules(const ManagedRules& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                private:

                    /**
                     * 自定义规则配置。
                     */
                    CustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * 托管规则配置。
                     */
                    ManagedRules m_managedRules;
                    bool m_managedRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
