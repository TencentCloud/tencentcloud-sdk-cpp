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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 普通节点信息
                */
                class RegularNodeInfo : public AbstractModel
                {
                public:
                    RegularNodeInfo();
                    ~RegularNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAdvancedSettings 节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAdvancedSettings 节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取自动伸缩组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoscalingGroupId 自动伸缩组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置自动伸缩组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoscalingGroupId 自动伸缩组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                private:

                    /**
                     * 节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 自动伸缩组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEINFO_H_
