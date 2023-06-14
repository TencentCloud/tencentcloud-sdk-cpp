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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_RESOURCECONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_RESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 计算资源配置
                */
                class ResourceConfig : public AbstractModel
                {
                public:
                    ResourceConfig();
                    ~ResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 计算实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置计算实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount 计算实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取计算实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 计算实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置计算实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 计算实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取挂载CBS大小（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB 挂载CBS大小（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置挂载CBS大小（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB 挂载CBS大小（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                private:

                    /**
                     * 计算实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 计算实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 挂载CBS大小（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_RESOURCECONFIG_H_
