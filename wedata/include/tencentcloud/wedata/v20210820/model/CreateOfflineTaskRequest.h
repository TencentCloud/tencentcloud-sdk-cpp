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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskImportInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateOfflineTask请求参数结构体
                */
                class CreateOfflineTaskRequest : public AbstractModel
                {
                public:
                    CreateOfflineTaskRequest();
                    ~CreateOfflineTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取间隔，可选，默认1。非空。默认 1
                     * @return CycleStep 间隔，可选，默认1。非空。默认 1
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置间隔，可选，默认1。非空。默认 1
                     * @param _cycleStep 间隔，可选，默认1。非空。默认 1
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取延时执行时间，单位分钟
                     * @return DelayTime 延时执行时间，单位分钟
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延时执行时间，单位分钟
                     * @param _delayTime 延时执行时间，单位分钟
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取任务结束数据时间。非空。默认当前时间
                     * @return EndTime 任务结束数据时间。非空。默认当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束数据时间。非空。默认当前时间
                     * @param _endTime 任务结束数据时间。非空。默认当前时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Notes 备注
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置备注
                     * @param _notes 备注
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取当前日期
                     * @return StartTime 当前日期
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置当前日期
                     * @param _startTime 当前日期
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取跟之前调用调度接口保持一致27
                     * @return TypeId 跟之前调用调度接口保持一致27
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置跟之前调用调度接口保持一致27
                     * @param _typeId 跟之前调用调度接口保持一致27
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取时间指定，如月任务指定1，3号，则填入 1，3。非空。默认 "" 月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
                     * @return TaskAction 时间指定，如月任务指定1，3号，则填入 1，3。非空。默认 "" 月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置时间指定，如月任务指定1，3号，则填入 1，3。非空。默认 "" 月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
                     * @param _taskAction 时间指定，如月任务指定1，3号，则填入 1，3。非空。默认 "" 月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取区分画布和表单
                     * @return TaskMode 区分画布和表单
                     * 
                     */
                    std::string GetTaskMode() const;

                    /**
                     * 设置区分画布和表单
                     * @param _taskMode 区分画布和表单
                     * 
                     */
                    void SetTaskMode(const std::string& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取导入编排空间配置
                     * @return TaskImportInfo 导入编排空间配置
                     * 
                     */
                    TaskImportInfo GetTaskImportInfo() const;

                    /**
                     * 设置导入编排空间配置
                     * @param _taskImportInfo 导入编排空间配置
                     * 
                     */
                    void SetTaskImportInfo(const TaskImportInfo& _taskImportInfo);

                    /**
                     * 判断参数 TaskImportInfo 是否已赋值
                     * @return TaskImportInfo 是否已赋值
                     * 
                     */
                    bool TaskImportInfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 间隔，可选，默认1。非空。默认 1
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 延时执行时间，单位分钟
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 任务结束数据时间。非空。默认当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 当前日期
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 跟之前调用调度接口保持一致27
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 时间指定，如月任务指定1，3号，则填入 1，3。非空。默认 "" 月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 区分画布和表单
                     */
                    std::string m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 导入编排空间配置
                     */
                    TaskImportInfo m_taskImportInfo;
                    bool m_taskImportInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_
