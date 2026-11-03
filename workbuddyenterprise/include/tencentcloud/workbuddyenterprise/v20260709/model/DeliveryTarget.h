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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELIVERYTARGET_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELIVERYTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/TargetOptions.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 投递目标
                */
                class DeliveryTarget : public AbstractModel
                {
                public:
                    DeliveryTarget();
                    ~DeliveryTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>投递类型：BOT_CHANNEL（IM 渠道投递）或 WEBHOOK（自定义回调）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>投递类型：BOT_CHANNEL（IM 渠道投递）或 WEBHOOK（自定义回调）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>投递类型：BOT_CHANNEL（IM 渠道投递）或 WEBHOOK（自定义回调）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>投递类型：BOT_CHANNEL（IM 渠道投递）或 WEBHOOK（自定义回调）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否启用此投递目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled <p>是否启用此投递目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用此投递目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled <p>是否启用此投递目标</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>投递配置，按 Type 不同</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Options <p>投递配置，按 Type 不同</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetOptions GetOptions() const;

                    /**
                     * 设置<p>投递配置，按 Type 不同</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _options <p>投递配置，按 Type 不同</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptions(const TargetOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>投递类型：BOT_CHANNEL（IM 渠道投递）或 WEBHOOK（自定义回调）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否启用此投递目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>投递配置，按 Type 不同</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetOptions m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELIVERYTARGET_H_
