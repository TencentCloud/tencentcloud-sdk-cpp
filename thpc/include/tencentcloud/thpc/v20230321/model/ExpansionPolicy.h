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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPOLICY_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/TemplateOverrides.h>
#include <tencentcloud/thpc/v20230321/model/ExpansionPriority.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 扩容方式配置，定义用什么创建节点。
                */
                class ExpansionPolicy : public AbstractModel
                {
                public:
                    ExpansionPolicy();
                    ~ExpansionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>扩容方式。可选值：LAUNCH_TEMPLATE（启动模板）、MULTI_CARD（多卡型混扩）。</p>
                     * @return ExpansionMode <p>扩容方式。可选值：LAUNCH_TEMPLATE（启动模板）、MULTI_CARD（多卡型混扩）。</p>
                     * 
                     */
                    std::string GetExpansionMode() const;

                    /**
                     * 设置<p>扩容方式。可选值：LAUNCH_TEMPLATE（启动模板）、MULTI_CARD（多卡型混扩）。</p>
                     * @param _expansionMode <p>扩容方式。可选值：LAUNCH_TEMPLATE（启动模板）、MULTI_CARD（多卡型混扩）。</p>
                     * 
                     */
                    void SetExpansionMode(const std::string& _expansionMode);

                    /**
                     * 判断参数 ExpansionMode 是否已赋值
                     * @return ExpansionMode 是否已赋值
                     * 
                     */
                    bool ExpansionModeHasBeenSet() const;

                    /**
                     * 获取<p>启动模板 ID 列表，最多 10 个。ExpansionMode=LAUNCH_TEMPLATE 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaunchTemplateIds <p>启动模板 ID 列表，最多 10 个。ExpansionMode=LAUNCH_TEMPLATE 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLaunchTemplateIds() const;

                    /**
                     * 设置<p>启动模板 ID 列表，最多 10 个。ExpansionMode=LAUNCH_TEMPLATE 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _launchTemplateIds <p>启动模板 ID 列表，最多 10 个。ExpansionMode=LAUNCH_TEMPLATE 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaunchTemplateIds(const std::vector<std::string>& _launchTemplateIds);

                    /**
                     * 判断参数 LaunchTemplateIds 是否已赋值
                     * @return LaunchTemplateIds 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>参考实例 ID，根据已有实例配置生成启动模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferenceInstanceId <p>参考实例 ID，根据已有实例配置生成启动模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReferenceInstanceId() const;

                    /**
                     * 设置<p>参考实例 ID，根据已有实例配置生成启动模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referenceInstanceId <p>参考实例 ID，根据已有实例配置生成启动模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferenceInstanceId(const std::string& _referenceInstanceId);

                    /**
                     * 判断参数 ReferenceInstanceId 是否已赋值
                     * @return ReferenceInstanceId 是否已赋值
                     * 
                     */
                    bool ReferenceInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateOverrides <p>启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TemplateOverrides GetTemplateOverrides() const;

                    /**
                     * 设置<p>启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateOverrides <p>启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateOverrides(const TemplateOverrides& _templateOverrides);

                    /**
                     * 判断参数 TemplateOverrides 是否已赋值
                     * @return TemplateOverrides 是否已赋值
                     * 
                     */
                    bool TemplateOverridesHasBeenSet() const;

                    /**
                     * 获取<p>候选规格排序策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpansionPriority <p>候选规格排序策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpansionPriority GetExpansionPriority() const;

                    /**
                     * 设置<p>候选规格排序策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expansionPriority <p>候选规格排序策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpansionPriority(const ExpansionPriority& _expansionPriority);

                    /**
                     * 判断参数 ExpansionPriority 是否已赋值
                     * @return ExpansionPriority 是否已赋值
                     * 
                     */
                    bool ExpansionPriorityHasBeenSet() const;

                private:

                    /**
                     * <p>扩容方式。可选值：LAUNCH_TEMPLATE（启动模板）、MULTI_CARD（多卡型混扩）。</p>
                     */
                    std::string m_expansionMode;
                    bool m_expansionModeHasBeenSet;

                    /**
                     * <p>启动模板 ID 列表，最多 10 个。ExpansionMode=LAUNCH_TEMPLATE 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_launchTemplateIds;
                    bool m_launchTemplateIdsHasBeenSet;

                    /**
                     * <p>参考实例 ID，根据已有实例配置生成启动模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_referenceInstanceId;
                    bool m_referenceInstanceIdHasBeenSet;

                    /**
                     * <p>启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemplateOverrides m_templateOverrides;
                    bool m_templateOverridesHasBeenSet;

                    /**
                     * <p>候选规格排序策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpansionPriority m_expansionPriority;
                    bool m_expansionPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPOLICY_H_
