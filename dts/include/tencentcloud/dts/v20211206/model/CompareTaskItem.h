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
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>


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
                     * 获取任务id
                     * @return JobId 任务id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务id
                     * @param _jobId 任务id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取对比任务 Id
                     * @return CompareTaskId 对比任务 Id
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置对比任务 Id
                     * @param _compareTaskId 对比任务 Id
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取对比任务名称
                     * @return TaskName 对比任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置对比任务名称
                     * @param _taskName 对比任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * @return Status 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * @param _status 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取对比任务配置
                     * @return Config 对比任务配置
                     * 
                     */
                    CompareObject GetConfig() const;

                    /**
                     * 设置对比任务配置
                     * @param _config 对比任务配置
                     * 
                     */
                    void SetConfig(const CompareObject& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取对比任务校验详情
                     * @return CheckProcess 对比任务校验详情
                     * 
                     */
                    ProcessProgress GetCheckProcess() const;

                    /**
                     * 设置对比任务校验详情
                     * @param _checkProcess 对比任务校验详情
                     * 
                     */
                    void SetCheckProcess(const ProcessProgress& _checkProcess);

                    /**
                     * 判断参数 CheckProcess 是否已赋值
                     * @return CheckProcess 是否已赋值
                     * 
                     */
                    bool CheckProcessHasBeenSet() const;

                    /**
                     * 获取对比任务运行详情
                     * @return CompareProcess 对比任务运行详情
                     * 
                     */
                    ProcessProgress GetCompareProcess() const;

                    /**
                     * 设置对比任务运行详情
                     * @param _compareProcess 对比任务运行详情
                     * 
                     */
                    void SetCompareProcess(const ProcessProgress& _compareProcess);

                    /**
                     * 判断参数 CompareProcess 是否已赋值
                     * @return CompareProcess 是否已赋值
                     * 
                     */
                    bool CompareProcessHasBeenSet() const;

                    /**
                     * 获取对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
                     * @return Conclusion 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
                     * @param _conclusion 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
                     * 
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatedAt 任务创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务创建时间
                     * @param _createdAt 任务创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取任务启动时间
                     * @return StartedAt 任务启动时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置任务启动时间
                     * @param _startedAt 任务启动时间
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取对比结束时间
                     * @return FinishedAt 对比结束时间
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置对比结束时间
                     * @param _finishedAt 对比结束时间
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                    /**
                     * 获取对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)
                     * @return Method 对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)
                     * @param _method 对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取对比配置信息
                     * @return Options 对比配置信息
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置对比配置信息
                     * @param _options 对比配置信息
                     * 
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取一致性校验提示信息
                     * @return Message 一致性校验提示信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置一致性校验提示信息
                     * @param _message 一致性校验提示信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 对比任务 Id
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 对比任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对比任务配置
                     */
                    CompareObject m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 对比任务校验详情
                     */
                    ProcessProgress m_checkProcess;
                    bool m_checkProcessHasBeenSet;

                    /**
                     * 对比任务运行详情
                     */
                    ProcessProgress m_compareProcess;
                    bool m_compareProcessHasBeenSet;

                    /**
                     * 对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 任务启动时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 对比结束时间
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * 对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 对比配置信息
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 一致性校验提示信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
