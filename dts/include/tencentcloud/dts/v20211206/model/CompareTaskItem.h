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
                     * 获取<p>任务id</p>
                     * @return JobId <p>任务id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _jobId <p>任务id</p>
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
                     * 获取<p>对比任务 Id</p>
                     * @return CompareTaskId <p>对比任务 Id</p>
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置<p>对比任务 Id</p>
                     * @param _compareTaskId <p>对比任务 Id</p>
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
                     * 获取<p>对比任务名称</p>
                     * @return TaskName <p>对比任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>对比任务名称</p>
                     * @param _taskName <p>对比任务名称</p>
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
                     * 获取<p>对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止</p>
                     * @return Status <p>对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止</p>
                     * @param _status <p>对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止</p>
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
                     * 获取<p>对比任务配置</p>
                     * @return Config <p>对比任务配置</p>
                     * 
                     */
                    CompareObject GetConfig() const;

                    /**
                     * 设置<p>对比任务配置</p>
                     * @param _config <p>对比任务配置</p>
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
                     * 获取<p>对比任务校验详情</p>
                     * @return CheckProcess <p>对比任务校验详情</p>
                     * 
                     */
                    ProcessProgress GetCheckProcess() const;

                    /**
                     * 设置<p>对比任务校验详情</p>
                     * @param _checkProcess <p>对比任务校验详情</p>
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
                     * 获取<p>对比任务运行详情</p>
                     * @return CompareProcess <p>对比任务运行详情</p>
                     * 
                     */
                    ProcessProgress GetCompareProcess() const;

                    /**
                     * 设置<p>对比任务运行详情</p>
                     * @param _compareProcess <p>对比任务运行详情</p>
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
                     * 获取<p>对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过</p>
                     * @return Conclusion <p>对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过</p>
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置<p>对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过</p>
                     * @param _conclusion <p>对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过</p>
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
                     * 获取<p>任务创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return CreatedAt <p>任务创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>任务创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _createdAt <p>任务创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>任务启动时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return StartedAt <p>任务启动时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置<p>任务启动时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _startedAt <p>任务启动时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>对比结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return FinishedAt <p>对比结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>对比结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _finishedAt <p>对比结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)</p>
                     * @return Method <p>对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)</p>
                     * @param _method <p>对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)</p>
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
                     * 获取<p>对比配置信息</p>
                     * @return Options <p>对比配置信息</p>
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置<p>对比配置信息</p>
                     * @param _options <p>对比配置信息</p>
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
                     * 获取<p>一致性校验提示信息</p>
                     * @return Message <p>一致性校验提示信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>一致性校验提示信息</p>
                     * @param _message <p>一致性校验提示信息</p>
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
                     * <p>任务id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>对比任务 Id</p>
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * <p>对比任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>对比任务状态, 可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>对比任务配置</p>
                     */
                    CompareObject m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>对比任务校验详情</p>
                     */
                    ProcessProgress m_checkProcess;
                    bool m_checkProcessHasBeenSet;

                    /**
                     * <p>对比任务运行详情</p>
                     */
                    ProcessProgress m_compareProcess;
                    bool m_compareProcessHasBeenSet;

                    /**
                     * <p>对比结果, 可能的值：same - 一致；different - 不一致；skipAll - 跳过</p>
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * <p>任务创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>任务启动时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * <p>对比结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * <p>对比类型，dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比)</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>对比配置信息</p>
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>一致性校验提示信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETASKITEM_H_
