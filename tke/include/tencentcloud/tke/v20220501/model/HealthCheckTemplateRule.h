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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_

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
                * 健康检测模板规则
                */
                class HealthCheckTemplateRule : public AbstractModel
                {
                public:
                    HealthCheckTemplateRule();
                    ~HealthCheckTemplateRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检测项目名称
                     * @return Name 健康检测项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置健康检测项目名称
                     * @param _name 健康检测项目名称
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
                     * 获取健康检测规则描述
                     * @return Description 健康检测规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置健康检测规则描述
                     * @param _description 健康检测规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复动作
                     * @return RepairAction 修复动作
                     * 
                     */
                    std::string GetRepairAction() const;

                    /**
                     * 设置修复动作
                     * @param _repairAction 修复动作
                     * 
                     */
                    void SetRepairAction(const std::string& _repairAction);

                    /**
                     * 判断参数 RepairAction 是否已赋值
                     * @return RepairAction 是否已赋值
                     * 
                     */
                    bool RepairActionHasBeenSet() const;

                    /**
                     * 获取修复影响
                     * @return RepairEffect 修复影响
                     * 
                     */
                    std::string GetRepairEffect() const;

                    /**
                     * 设置修复影响
                     * @param _repairEffect 修复影响
                     * 
                     */
                    void SetRepairEffect(const std::string& _repairEffect);

                    /**
                     * 判断参数 RepairEffect 是否已赋值
                     * @return RepairEffect 是否已赋值
                     * 
                     */
                    bool RepairEffectHasBeenSet() const;

                    /**
                     * 获取是否建议开启检测
                     * @return ShouldEnable 是否建议开启检测
                     * 
                     */
                    bool GetShouldEnable() const;

                    /**
                     * 设置是否建议开启检测
                     * @param _shouldEnable 是否建议开启检测
                     * 
                     */
                    void SetShouldEnable(const bool& _shouldEnable);

                    /**
                     * 判断参数 ShouldEnable 是否已赋值
                     * @return ShouldEnable 是否已赋值
                     * 
                     */
                    bool ShouldEnableHasBeenSet() const;

                    /**
                     * 获取是否建议修复
                     * @return ShouldRepair 是否建议修复
                     * 
                     */
                    bool GetShouldRepair() const;

                    /**
                     * 设置是否建议修复
                     * @param _shouldRepair 是否建议修复
                     * 
                     */
                    void SetShouldRepair(const bool& _shouldRepair);

                    /**
                     * 判断参数 ShouldRepair 是否已赋值
                     * @return ShouldRepair 是否已赋值
                     * 
                     */
                    bool ShouldRepairHasBeenSet() const;

                    /**
                     * 获取问题严重程度
                     * @return Severity 问题严重程度
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置问题严重程度
                     * @param _severity 问题严重程度
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                private:

                    /**
                     * 健康检测项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 健康检测规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复动作
                     */
                    std::string m_repairAction;
                    bool m_repairActionHasBeenSet;

                    /**
                     * 修复影响
                     */
                    std::string m_repairEffect;
                    bool m_repairEffectHasBeenSet;

                    /**
                     * 是否建议开启检测
                     */
                    bool m_shouldEnable;
                    bool m_shouldEnableHasBeenSet;

                    /**
                     * 是否建议修复
                     */
                    bool m_shouldRepair;
                    bool m_shouldRepairHasBeenSet;

                    /**
                     * 问题严重程度
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_
