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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>
#include <tencentcloud/dts/v20211206/model/ProcessProgress.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性校验对象信息
                */
                class CompareTaskItem : public AbstractModel
                {
                public:
                    CompareTaskItem();
                    ~CompareTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 迁移任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobId 迁移任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取对比任务 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareTaskId 对比任务 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置对比任务 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareTaskId 对比任务 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取对比任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 对比任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置对比任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskName 对比任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取对比任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 对比任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareObject GetConfig() const;

                    /**
                     * 设置对比任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Config 对比任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfig(const CompareObject& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取对比任务校验详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckProcess 对比任务校验详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessProgress GetCheckProcess() const;

                    /**
                     * 设置对比任务校验详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckProcess 对比任务校验详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckProcess(const ProcessProgress& _checkProcess);

                    /**
                     * 判断参数 CheckProcess 是否已赋值
                     * @return CheckProcess 是否已赋值
                     */
                    bool CheckProcessHasBeenSet() const;

                    /**
                     * 获取对比任务运行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareProcess 对比任务运行详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessProgress GetCompareProcess() const;

                    /**
                     * 设置对比任务运行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareProcess 对比任务运行详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareProcess(const ProcessProgress& _compareProcess);

                    /**
                     * 判断参数 CompareProcess 是否已赋值
                     * @return CompareProcess 是否已赋值
                     */
                    bool CompareProcessHasBeenSet() const;

                    /**
                     * 获取对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conclusion 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Conclusion 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedAt 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartedAt 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartedAt 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取对比结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedAt 对比结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置对比结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinishedAt 对比结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     */
                    bool FinishedAtHasBeenSet() const;

                private:

                    /**
                     * 迁移任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 对比任务 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 对比任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对比任务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareObject m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 对比任务校验详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessProgress m_checkProcess;
                    bool m_checkProcessHasBeenSet;

                    /**
                     * 对比任务运行详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessProgress m_compareProcess;
                    bool m_compareProcessHasBeenSet;

                    /**
                     * 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 对比结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
