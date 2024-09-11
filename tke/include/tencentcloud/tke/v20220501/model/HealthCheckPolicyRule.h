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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 健康检测规则
                */
                class HealthCheckPolicyRule : public AbstractModel
                {
                public:
                    HealthCheckPolicyRule();
                    ~HealthCheckPolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检测规则
                     * @return Name 健康检测规则
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置健康检测规则
                     * @param _name 健康检测规则
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否检测此项目
                     * @return Enabled 是否检测此项目
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否检测此项目
                     * @param _enabled 是否检测此项目
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取是否启用修复
                     * @return AutoRepairEnabled 是否启用修复
                     * 
                     */
                    bool GetAutoRepairEnabled() const;

                    /**
                     * 设置是否启用修复
                     * @param _autoRepairEnabled 是否启用修复
                     * 
                     */
                    void SetAutoRepairEnabled(const bool& _autoRepairEnabled);

                    /**
                     * 判断参数 AutoRepairEnabled 是否已赋值
                     * @return AutoRepairEnabled 是否已赋值
                     * 
                     */
                    bool AutoRepairEnabledHasBeenSet() const;

                private:

                    /**
                     * 健康检测规则
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否检测此项目
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 是否启用修复
                     */
                    bool m_autoRepairEnabled;
                    bool m_autoRepairEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_
