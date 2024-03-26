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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 补录计划任务
                */
                class MakePlanTaskOpsDto : public AbstractModel
                {
                public:
                    MakePlanTaskOpsDto();
                    ~MakePlanTaskOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskBaseInfo 任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOpsDto GetTaskBaseInfo() const;

                    /**
                     * 设置任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskBaseInfo 任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskBaseInfo(const TaskOpsDto& _taskBaseInfo);

                    /**
                     * 判断参数 TaskBaseInfo 是否已赋值
                     * @return TaskBaseInfo 是否已赋值
                     * 
                     */
                    bool TaskBaseInfoHasBeenSet() const;

                    /**
                     * 获取补录该任务当前已生成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 补录该任务当前已生成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置补录该任务当前已生成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount 补录该任务当前已生成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取补录任务实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompletePercent 补录任务实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompletePercent() const;

                    /**
                     * 设置补录任务实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completePercent 补录任务实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompletePercent(const int64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取补录任务实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessPercent 补录任务实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessPercent() const;

                    /**
                     * 设置补录任务实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successPercent 补录任务实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessPercent(const int64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取预计生成的总实例个数，由于是异步生成，-1代表实例还未完完全生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTotalCount 预计生成的总实例个数，由于是异步生成，-1代表实例还未完完全生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceTotalCount() const;

                    /**
                     * 设置预计生成的总实例个数，由于是异步生成，-1代表实例还未完完全生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTotalCount 预计生成的总实例个数，由于是异步生成，-1代表实例还未完完全生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTotalCount(const int64_t& _instanceTotalCount);

                    /**
                     * 判断参数 InstanceTotalCount 是否已赋值
                     * @return InstanceTotalCount 是否已赋值
                     * 
                     */
                    bool InstanceTotalCountHasBeenSet() const;

                private:

                    /**
                     * 任务基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOpsDto m_taskBaseInfo;
                    bool m_taskBaseInfoHasBeenSet;

                    /**
                     * 补录该任务当前已生成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 补录任务实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * 补录任务实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * 预计生成的总实例个数，由于是异步生成，-1代表实例还未完完全生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceTotalCount;
                    bool m_instanceTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_
