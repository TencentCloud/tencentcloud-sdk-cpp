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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/DependencyStrategyDs.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 依赖配置
                */
                class DependencyConfigDsDTO : public AbstractModel
                {
                public:
                    DependencyConfigDsDTO();
                    ~DependencyConfigDsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ParentTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTask ParentTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTO GetParentTask() const;

                    /**
                     * 设置ParentTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTask ParentTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTask(const TaskDsDTO& _parentTask);

                    /**
                     * 判断参数 ParentTask 是否已赋值
                     * @return ParentTask 是否已赋值
                     * 
                     */
                    bool ParentTaskHasBeenSet() const;

                    /**
                     * 获取SonTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SonTask SonTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTO GetSonTask() const;

                    /**
                     * 设置SonTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sonTask SonTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSonTask(const TaskDsDTO& _sonTask);

                    /**
                     * 判断参数 SonTask 是否已赋值
                     * @return SonTask 是否已赋值
                     * 
                     */
                    bool SonTaskHasBeenSet() const;

                    /**
                     * 获取the dependency config
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainCyclicConfig the dependency config
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置the dependency config
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainCyclicConfig the dependency config
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取SubordinateCyclicConfig配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubordinateCyclicConfig SubordinateCyclicConfig配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置SubordinateCyclicConfig配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subordinateCyclicConfig SubordinateCyclicConfig配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取DependencyStrategy策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyStrategy DependencyStrategy策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DependencyStrategyDs GetDependencyStrategy() const;

                    /**
                     * 设置DependencyStrategy策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyStrategy DependencyStrategy策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyStrategy(const DependencyStrategyDs& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                    /**
                     * 获取偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * ParentTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTO m_parentTask;
                    bool m_parentTaskHasBeenSet;

                    /**
                     * SonTask任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTO m_sonTask;
                    bool m_sonTaskHasBeenSet;

                    /**
                     * the dependency config
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * SubordinateCyclicConfig配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * DependencyStrategy策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DependencyStrategyDs m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                    /**
                     * 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGDSDTO_H_
