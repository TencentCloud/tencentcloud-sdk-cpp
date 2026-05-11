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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CommitIntegrationTask请求参数结构体
                */
                class CommitIntegrationTaskRequest : public AbstractModel
                {
                public:
                    CommitIntegrationTaskRequest();
                    ~CommitIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>0.仅提交，1.立即启动，2.停止线上作业，丢弃作业状态数据，重新启动运行，3.暂停线上作业，保留作业状态数据，继续运行，4.保留作业状态数据，继续运行</p>
                     * @return CommitType <p>0.仅提交，1.立即启动，2.停止线上作业，丢弃作业状态数据，重新启动运行，3.暂停线上作业，保留作业状态数据，继续运行，4.保留作业状态数据，继续运行</p>
                     * 
                     */
                    int64_t GetCommitType() const;

                    /**
                     * 设置<p>0.仅提交，1.立即启动，2.停止线上作业，丢弃作业状态数据，重新启动运行，3.暂停线上作业，保留作业状态数据，继续运行，4.保留作业状态数据，继续运行</p>
                     * @param _commitType <p>0.仅提交，1.立即启动，2.停止线上作业，丢弃作业状态数据，重新启动运行，3.暂停线上作业，保留作业状态数据，继续运行，4.保留作业状态数据，继续运行</p>
                     * 
                     */
                    void SetCommitType(const int64_t& _commitType);

                    /**
                     * 判断参数 CommitType 是否已赋值
                     * @return CommitType 是否已赋值
                     * 
                     */
                    bool CommitTypeHasBeenSet() const;

                    /**
                     * 获取<p>实时任务 201   离线任务 202  默认实时任务</p>
                     * @return TaskType <p>实时任务 201   离线任务 202  默认实时任务</p>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>实时任务 201   离线任务 202  默认实时任务</p>
                     * @param _taskType <p>实时任务 201   离线任务 202  默认实时任务</p>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>额外参数</p>
                     * @return ExtConfig <p>额外参数</p>
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置<p>额外参数</p>
                     * @param _extConfig <p>额外参数</p>
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取<p>提交版本描述</p>
                     * @return VersionDesc <p>提交版本描述</p>
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置<p>提交版本描述</p>
                     * @param _versionDesc <p>提交版本描述</p>
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取<p>提交版本号</p>
                     * @return InstanceVersion <p>提交版本号</p>
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置<p>提交版本号</p>
                     * @param _instanceVersion <p>提交版本号</p>
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>前端操作类型描述</p>
                     * @return EventDesc <p>前端操作类型描述</p>
                     * 
                     */
                    std::string GetEventDesc() const;

                    /**
                     * 设置<p>前端操作类型描述</p>
                     * @param _eventDesc <p>前端操作类型描述</p>
                     * 
                     */
                    void SetEventDesc(const std::string& _eventDesc);

                    /**
                     * 判断参数 EventDesc 是否已赋值
                     * @return EventDesc 是否已赋值
                     * 
                     */
                    bool EventDescHasBeenSet() const;

                    /**
                     * 获取<p>提交时任务状态</p><p>枚举值：</p><ul><li>3： 运行中</li></ul>
                     * @return CurrentStatus <p>提交时任务状态</p><p>枚举值：</p><ul><li>3： 运行中</li></ul>
                     * 
                     */
                    int64_t GetCurrentStatus() const;

                    /**
                     * 设置<p>提交时任务状态</p><p>枚举值：</p><ul><li>3： 运行中</li></ul>
                     * @param _currentStatus <p>提交时任务状态</p><p>枚举值：</p><ul><li>3： 运行中</li></ul>
                     * 
                     */
                    void SetCurrentStatus(const int64_t& _currentStatus);

                    /**
                     * 判断参数 CurrentStatus 是否已赋值
                     * @return CurrentStatus 是否已赋值
                     * 
                     */
                    bool CurrentStatusHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>0.仅提交，1.立即启动，2.停止线上作业，丢弃作业状态数据，重新启动运行，3.暂停线上作业，保留作业状态数据，继续运行，4.保留作业状态数据，继续运行</p>
                     */
                    int64_t m_commitType;
                    bool m_commitTypeHasBeenSet;

                    /**
                     * <p>实时任务 201   离线任务 202  默认实时任务</p>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>额外参数</p>
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * <p>提交版本描述</p>
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * <p>提交版本号</p>
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>前端操作类型描述</p>
                     */
                    std::string m_eventDesc;
                    bool m_eventDescHasBeenSet;

                    /**
                     * <p>提交时任务状态</p><p>枚举值：</p><ul><li>3： 运行中</li></ul>
                     */
                    int64_t m_currentStatus;
                    bool m_currentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITINTEGRATIONTASKREQUEST_H_
