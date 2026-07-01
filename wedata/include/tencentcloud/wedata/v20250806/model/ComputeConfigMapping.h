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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_COMPUTECONFIGMAPPING_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_COMPUTECONFIGMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 存算配置映射列表，对应页面“存算引擎配置”
                */
                class ComputeConfigMapping : public AbstractModel
                {
                public:
                    ComputeConfigMapping();
                    ~ComputeConfigMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务类型ID</p><p>枚举值：</p><ul><li>32： DLC_SQL</li><li>46： DLC_SPARK</li><li>50： DLC_PYSPARK</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId <p>任务类型ID</p><p>枚举值：</p><ul><li>32： DLC_SQL</li><li>46： DLC_SPARK</li><li>50： DLC_PYSPARK</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务类型ID</p><p>枚举值：</p><ul><li>32： DLC_SQL</li><li>46： DLC_SPARK</li><li>50： DLC_PYSPARK</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId <p>任务类型ID</p><p>枚举值：</p><ul><li>32： DLC_SQL</li><li>46： DLC_SPARK</li><li>50： DLC_PYSPARK</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>存算配置项。当前支持：COMPUTE_ENGINE、DLC_ENGINE_RESOURCE_GROUP</p><p>枚举值：</p><ul><li>COMPUTE_ENGINE： DLC 标准计算引擎</li><li>DLC_ENGINE_RESOURCE_GROUP：  DLC 标准引擎资源组</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeConfigItem <p>存算配置项。当前支持：COMPUTE_ENGINE、DLC_ENGINE_RESOURCE_GROUP</p><p>枚举值：</p><ul><li>COMPUTE_ENGINE： DLC 标准计算引擎</li><li>DLC_ENGINE_RESOURCE_GROUP：  DLC 标准引擎资源组</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputeConfigItem() const;

                    /**
                     * 设置<p>存算配置项。当前支持：COMPUTE_ENGINE、DLC_ENGINE_RESOURCE_GROUP</p><p>枚举值：</p><ul><li>COMPUTE_ENGINE： DLC 标准计算引擎</li><li>DLC_ENGINE_RESOURCE_GROUP：  DLC 标准引擎资源组</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeConfigItem <p>存算配置项。当前支持：COMPUTE_ENGINE、DLC_ENGINE_RESOURCE_GROUP</p><p>枚举值：</p><ul><li>COMPUTE_ENGINE： DLC 标准计算引擎</li><li>DLC_ENGINE_RESOURCE_GROUP：  DLC 标准引擎资源组</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeConfigItem(const std::string& _computeConfigItem);

                    /**
                     * 判断参数 ComputeConfigItem 是否已赋值
                     * @return ComputeConfigItem 是否已赋值
                     * 
                     */
                    bool ComputeConfigItemHasBeenSet() const;

                    /**
                     * 获取<p>指定任务列表，非空时表示任务级覆盖，当前仅支持 DLC_SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIds <p>指定任务列表，非空时表示任务级覆盖，当前仅支持 DLC_SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>指定任务列表，非空时表示任务级覆盖，当前仅支持 DLC_SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskIds <p>指定任务列表，非空时表示任务级覆盖，当前仅支持 DLC_SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>ComputeConfigItem=COMPUTE_ENGINE 时表示原引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示原 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceValue <p>ComputeConfigItem=COMPUTE_ENGINE 时表示原引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示原 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceValue() const;

                    /**
                     * 设置<p>ComputeConfigItem=COMPUTE_ENGINE 时表示原引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示原 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceValue <p>ComputeConfigItem=COMPUTE_ENGINE 时表示原引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示原 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceValue(const std::string& _sourceValue);

                    /**
                     * 判断参数 SourceValue 是否已赋值
                     * @return SourceValue 是否已赋值
                     * 
                     */
                    bool SourceValueHasBeenSet() const;

                    /**
                     * 获取<p>ComputeConfigItem=COMPUTE_ENGINE 时表示目标引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示目标 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetValue <p>ComputeConfigItem=COMPUTE_ENGINE 时表示目标引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示目标 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetValue() const;

                    /**
                     * 设置<p>ComputeConfigItem=COMPUTE_ENGINE 时表示目标引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示目标 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetValue <p>ComputeConfigItem=COMPUTE_ENGINE 时表示目标引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示目标 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetValue(const std::string& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     * 
                     */
                    bool TargetValueHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型ID</p><p>枚举值：</p><ul><li>32： DLC_SQL</li><li>46： DLC_SPARK</li><li>50： DLC_PYSPARK</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>存算配置项。当前支持：COMPUTE_ENGINE、DLC_ENGINE_RESOURCE_GROUP</p><p>枚举值：</p><ul><li>COMPUTE_ENGINE： DLC 标准计算引擎</li><li>DLC_ENGINE_RESOURCE_GROUP：  DLC 标准引擎资源组</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeConfigItem;
                    bool m_computeConfigItemHasBeenSet;

                    /**
                     * <p>指定任务列表，非空时表示任务级覆盖，当前仅支持 DLC_SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>ComputeConfigItem=COMPUTE_ENGINE 时表示原引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示原 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceValue;
                    bool m_sourceValueHasBeenSet;

                    /**
                     * <p>ComputeConfigItem=COMPUTE_ENGINE 时表示目标引擎名；ComputeConfigItem=DLC_ENGINE_RESOURCE_GROUP 时表示目标 DLC 标准引擎资源组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetValue;
                    bool m_targetValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_COMPUTECONFIGMAPPING_H_
