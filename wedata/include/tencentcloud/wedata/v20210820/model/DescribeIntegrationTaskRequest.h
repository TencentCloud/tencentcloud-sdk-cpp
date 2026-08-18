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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKREQUEST_H_

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
                * DescribeIntegrationTask请求参数结构体
                */
                class DescribeIntegrationTaskRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationTaskRequest();
                    ~DescribeIntegrationTaskRequest() = default;
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
                     * 获取<p>任务类型，201: 实时集成任务,   202：离线集成任务，不传默认值为201 实时任务类型</p>
                     * @return TaskType <p>任务类型，201: 实时集成任务,   202：离线集成任务，不传默认值为201 实时任务类型</p>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型，201: 实时集成任务,   202：离线集成任务，不传默认值为201 实时任务类型</p>
                     * @param _taskType <p>任务类型，201: 实时集成任务,   202：离线集成任务，不传默认值为201 实时任务类型</p>
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
                     * <p>任务类型，201: 实时集成任务,   202：离线集成任务，不传默认值为201 实时任务类型</p>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>提交版本号</p>
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>额外参数</p>
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKREQUEST_H_
