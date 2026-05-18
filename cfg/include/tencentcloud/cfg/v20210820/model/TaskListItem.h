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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务列表信息
                */
                class TaskListItem : public AbstractModel
                {
                public:
                    TaskListItem();
                    ~TaskListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务标题</p>
                     * @return TaskTitle <p>任务标题</p>
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置<p>任务标题</p>
                     * @param _taskTitle <p>任务标题</p>
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取<p>任务描述</p>
                     * @return TaskDescription <p>任务描述</p>
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置<p>任务描述</p>
                     * @param _taskDescription <p>任务描述</p>
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>任务标签</p>
                     * @return TaskTag <p>任务标签</p>
                     * 
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置<p>任务标签</p>
                     * @param _taskTag <p>任务标签</p>
                     * 
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取<p>任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)</p>
                     * @return TaskStatus <p>任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)</p>
                     * @param _taskStatus <p>任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)</p>
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return TaskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _taskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务更新时间</p>
                     * @return TaskUpdateTime <p>任务更新时间</p>
                     * 
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置<p>任务更新时间</p>
                     * @param _taskUpdateTime <p>任务更新时间</p>
                     * 
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>0--未开始，1--进行中，2--已完成</p>
                     * @return TaskPreCheckStatus <p>0--未开始，1--进行中，2--已完成</p>
                     * 
                     */
                    int64_t GetTaskPreCheckStatus() const;

                    /**
                     * 设置<p>0--未开始，1--进行中，2--已完成</p>
                     * @param _taskPreCheckStatus <p>0--未开始，1--进行中，2--已完成</p>
                     * 
                     */
                    void SetTaskPreCheckStatus(const int64_t& _taskPreCheckStatus);

                    /**
                     * 判断参数 TaskPreCheckStatus 是否已赋值
                     * @return TaskPreCheckStatus 是否已赋值
                     * 
                     */
                    bool TaskPreCheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>环境检查是否通过</p>
                     * @return TaskPreCheckSuccess <p>环境检查是否通过</p>
                     * 
                     */
                    bool GetTaskPreCheckSuccess() const;

                    /**
                     * 设置<p>环境检查是否通过</p>
                     * @param _taskPreCheckSuccess <p>环境检查是否通过</p>
                     * 
                     */
                    void SetTaskPreCheckSuccess(const bool& _taskPreCheckSuccess);

                    /**
                     * 判断参数 TaskPreCheckSuccess 是否已赋值
                     * @return TaskPreCheckSuccess 是否已赋值
                     * 
                     */
                    bool TaskPreCheckSuccessHasBeenSet() const;

                    /**
                     * 获取<p>演练是否符合预期 1-符合预期 2-不符合预期</p>
                     * @return TaskExpect <p>演练是否符合预期 1-符合预期 2-不符合预期</p>
                     * 
                     */
                    int64_t GetTaskExpect() const;

                    /**
                     * 设置<p>演练是否符合预期 1-符合预期 2-不符合预期</p>
                     * @param _taskExpect <p>演练是否符合预期 1-符合预期 2-不符合预期</p>
                     * 
                     */
                    void SetTaskExpect(const int64_t& _taskExpect);

                    /**
                     * 判断参数 TaskExpect 是否已赋值
                     * @return TaskExpect 是否已赋值
                     * 
                     */
                    bool TaskExpectHasBeenSet() const;

                    /**
                     * 获取<p>关联应用ID</p>
                     * @return ApplicationId <p>关联应用ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>关联应用ID</p>
                     * @param _applicationId <p>关联应用ID</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>关联应用名称</p>
                     * @return ApplicationName <p>关联应用名称</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>关联应用名称</p>
                     * @param _applicationName <p>关联应用名称</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>验证项ID</p>
                     * @return VerifyId <p>验证项ID</p>
                     * 
                     */
                    uint64_t GetVerifyId() const;

                    /**
                     * 设置<p>验证项ID</p>
                     * @param _verifyId <p>验证项ID</p>
                     * 
                     */
                    void SetVerifyId(const uint64_t& _verifyId);

                    /**
                     * 判断参数 VerifyId 是否已赋值
                     * @return VerifyId 是否已赋值
                     * 
                     */
                    bool VerifyIdHasBeenSet() const;

                    /**
                     * 获取<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止</p>
                     * @return TaskStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止</p>
                     * 
                     */
                    uint64_t GetTaskStatusType() const;

                    /**
                     * 设置<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止</p>
                     * @param _taskStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止</p>
                     * 
                     */
                    void SetTaskStatusType(const uint64_t& _taskStatusType);

                    /**
                     * 判断参数 TaskStatusType 是否已赋值
                     * @return TaskStatusType 是否已赋值
                     * 
                     */
                    bool TaskStatusTypeHasBeenSet() const;

                    /**
                     * 获取<p>架构ID</p>
                     * @return ArchId <p>架构ID</p>
                     * 
                     */
                    std::string GetArchId() const;

                    /**
                     * 设置<p>架构ID</p>
                     * @param _archId <p>架构ID</p>
                     * 
                     */
                    void SetArchId(const std::string& _archId);

                    /**
                     * 判断参数 ArchId 是否已赋值
                     * @return ArchId 是否已赋值
                     * 
                     */
                    bool ArchIdHasBeenSet() const;

                    /**
                     * 获取<p>架构名称</p>
                     * @return ArchName <p>架构名称</p>
                     * 
                     */
                    std::string GetArchName() const;

                    /**
                     * 设置<p>架构名称</p>
                     * @param _archName <p>架构名称</p>
                     * 
                     */
                    void SetArchName(const std::string& _archName);

                    /**
                     * 判断参数 ArchName 是否已赋值
                     * @return ArchName 是否已赋值
                     * 
                     */
                    bool ArchNameHasBeenSet() const;

                    /**
                     * 获取<p>来源</p>
                     * @return TaskSource <p>来源</p>
                     * 
                     */
                    int64_t GetTaskSource() const;

                    /**
                     * 设置<p>来源</p>
                     * @param _taskSource <p>来源</p>
                     * 
                     */
                    void SetTaskSource(const int64_t& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                    /**
                     * 获取<p>云资源标签列表</p>
                     * @return Tags <p>云资源标签列表</p>
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置<p>云资源标签列表</p>
                     * @param _tags <p>云资源标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务标题</p>
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * <p>任务描述</p>
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * <p>任务标签</p>
                     */
                    std::string m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * <p>任务状态(1001 -- 未开始   1002 -- 进行中  1003 -- 暂停中   1004 -- 任务结束)</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * <p>任务更新时间</p>
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * <p>0--未开始，1--进行中，2--已完成</p>
                     */
                    int64_t m_taskPreCheckStatus;
                    bool m_taskPreCheckStatusHasBeenSet;

                    /**
                     * <p>环境检查是否通过</p>
                     */
                    bool m_taskPreCheckSuccess;
                    bool m_taskPreCheckSuccessHasBeenSet;

                    /**
                     * <p>演练是否符合预期 1-符合预期 2-不符合预期</p>
                     */
                    int64_t m_taskExpect;
                    bool m_taskExpectHasBeenSet;

                    /**
                     * <p>关联应用ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>关联应用名称</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>验证项ID</p>
                     */
                    uint64_t m_verifyId;
                    bool m_verifyIdHasBeenSet;

                    /**
                     * <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止</p>
                     */
                    uint64_t m_taskStatusType;
                    bool m_taskStatusTypeHasBeenSet;

                    /**
                     * <p>架构ID</p>
                     */
                    std::string m_archId;
                    bool m_archIdHasBeenSet;

                    /**
                     * <p>架构名称</p>
                     */
                    std::string m_archName;
                    bool m_archNameHasBeenSet;

                    /**
                     * <p>来源</p>
                     */
                    int64_t m_taskSource;
                    bool m_taskSourceHasBeenSet;

                    /**
                     * <p>云资源标签列表</p>
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKLISTITEM_H_
