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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCERESOURCECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCERESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ContainerInstanceResourceConfig.h>
#include <tencentcloud/tsf/v20180326/model/VmInstanceResourceConfig.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 实例相关的参数配置
                */
                class InstanceResourceConfig : public AbstractModel
                {
                public:
                    InstanceResourceConfig();
                    ~InstanceResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Container 容器实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerInstanceResourceConfig GetContainer() const;

                    /**
                     * 设置容器实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _container 容器实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainer(const ContainerInstanceResourceConfig& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取虚拟机实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vm 虚拟机实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VmInstanceResourceConfig GetVm() const;

                    /**
                     * 设置虚拟机实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vm 虚拟机实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVm(const VmInstanceResourceConfig& _vm);

                    /**
                     * 判断参数 Vm 是否已赋值
                     * @return Vm 是否已赋值
                     * 
                     */
                    bool VmHasBeenSet() const;

                private:

                    /**
                     * 容器实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerInstanceResourceConfig m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 虚拟机实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VmInstanceResourceConfig m_vm;
                    bool m_vmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCERESOURCECONFIG_H_
