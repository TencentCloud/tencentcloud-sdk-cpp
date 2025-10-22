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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageProperty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * LineageProcess 血缘产出过程
                */
                class LineageProcess : public AbstractModel
                {
                public:
                    LineageProcess();
                    ~LineageProcess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取任务类型
    //调度任务
    SCHEDULE_TASK,
    //集成任务
    INTEGRATION_TASK,
    //第三方上报
    THIRD_REPORT,
    //数据建模
    TABLE_MODEL,
    //模型创建指标
    MODEL_METRIC,
    //原子指标创建衍生指标
    METRIC_METRIC,
    //数据服务
    DATA_SERVICE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessType 任务类型
    //调度任务
    SCHEDULE_TASK,
    //集成任务
    INTEGRATION_TASK,
    //第三方上报
    THIRD_REPORT,
    //数据建模
    TABLE_MODEL,
    //模型创建指标
    MODEL_METRIC,
    //原子指标创建衍生指标
    METRIC_METRIC,
    //数据服务
    DATA_SERVICE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置任务类型
    //调度任务
    SCHEDULE_TASK,
    //集成任务
    INTEGRATION_TASK,
    //第三方上报
    THIRD_REPORT,
    //数据建模
    TABLE_MODEL,
    //模型创建指标
    MODEL_METRIC,
    //原子指标创建衍生指标
    METRIC_METRIC,
    //数据服务
    DATA_SERVICE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processType 任务类型
    //调度任务
    SCHEDULE_TASK,
    //集成任务
    INTEGRATION_TASK,
    //第三方上报
    THIRD_REPORT,
    //数据建模
    TABLE_MODEL,
    //模型创建指标
    MODEL_METRIC,
    //原子指标创建衍生指标
    METRIC_METRIC,
    //数据服务
    DATA_SERVICE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取WEDATA, THIRD;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Platform WEDATA, THIRD;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置WEDATA, THIRD;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _platform WEDATA, THIRD;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取任务子类型
 SQL_TASK,
    //集成实时任务血缘
    INTEGRATED_STREAM,
    //集成离线任务血缘
    INTEGRATED_OFFLINE;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessSubType 任务子类型
 SQL_TASK,
    //集成实时任务血缘
    INTEGRATED_STREAM,
    //集成离线任务血缘
    INTEGRATED_OFFLINE;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessSubType() const;

                    /**
                     * 设置任务子类型
 SQL_TASK,
    //集成实时任务血缘
    INTEGRATED_STREAM,
    //集成离线任务血缘
    INTEGRATED_OFFLINE;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processSubType 任务子类型
 SQL_TASK,
    //集成实时任务血缘
    INTEGRATED_STREAM,
    //集成离线任务血缘
    INTEGRATED_OFFLINE;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessSubType(const std::string& _processSubType);

                    /**
                     * 判断参数 ProcessSubType 是否已赋值
                     * @return ProcessSubType 是否已赋值
                     * 
                     */
                    bool ProcessSubTypeHasBeenSet() const;

                    /**
                     * 获取额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessProperties 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageProperty> GetProcessProperties() const;

                    /**
                     * 设置额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processProperties 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessProperties(const std::vector<LineageProperty>& _processProperties);

                    /**
                     * 判断参数 ProcessProperties 是否已赋值
                     * @return ProcessProperties 是否已赋值
                     * 
                     */
                    bool ProcessPropertiesHasBeenSet() const;

                    /**
                     * 获取血缘任务唯一节点ID
                     * @return LineageNodeId 血缘任务唯一节点ID
                     * 
                     */
                    std::string GetLineageNodeId() const;

                    /**
                     * 设置血缘任务唯一节点ID
                     * @param _lineageNodeId 血缘任务唯一节点ID
                     * 
                     */
                    void SetLineageNodeId(const std::string& _lineageNodeId);

                    /**
                     * 判断参数 LineageNodeId 是否已赋值
                     * @return LineageNodeId 是否已赋值
                     * 
                     */
                    bool LineageNodeIdHasBeenSet() const;

                private:

                    /**
                     * 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 任务类型
    //调度任务
    SCHEDULE_TASK,
    //集成任务
    INTEGRATION_TASK,
    //第三方上报
    THIRD_REPORT,
    //数据建模
    TABLE_MODEL,
    //模型创建指标
    MODEL_METRIC,
    //原子指标创建衍生指标
    METRIC_METRIC,
    //数据服务
    DATA_SERVICE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * WEDATA, THIRD;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 任务子类型
 SQL_TASK,
    //集成实时任务血缘
    INTEGRATED_STREAM,
    //集成离线任务血缘
    INTEGRATED_OFFLINE;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processSubType;
                    bool m_processSubTypeHasBeenSet;

                    /**
                     * 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageProperty> m_processProperties;
                    bool m_processPropertiesHasBeenSet;

                    /**
                     * 血缘任务唯一节点ID
                     */
                    std::string m_lineageNodeId;
                    bool m_lineageNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPROCESS_H_
