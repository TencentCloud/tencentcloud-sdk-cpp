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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKATTRS_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKATTRS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/MetadataLoadAttrs.h>
#include <tencentcloud/goosefs/v20220519/model/DistributedLoadAttrs.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 预热任务参数
                */
                class LoadTaskAttrs : public AbstractModel
                {
                public:
                    LoadTaskAttrs();
                    ~LoadTaskAttrs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预热任务 ID
                     * @return TaskId 预热任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置预热任务 ID
                     * @param _taskId 预热任务 ID
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
                     * 获取预热任务类型，枚举值，MetadataLoad｜DistributedLoad
                     * @return TaskType 预热任务类型，枚举值，MetadataLoad｜DistributedLoad
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置预热任务类型，枚举值，MetadataLoad｜DistributedLoad
                     * @param _taskType 预热任务类型，枚举值，MetadataLoad｜DistributedLoad
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务描述，支持中文
                     * @return Description 任务描述，支持中文
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述，支持中文
                     * @param _description 任务描述，支持中文
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * @return Priority 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * @param _priority 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。
                     * @return MetadataLoadAttrs 元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。
                     * 
                     */
                    MetadataLoadAttrs GetMetadataLoadAttrs() const;

                    /**
                     * 设置元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。
                     * @param _metadataLoadAttrs 元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。
                     * 
                     */
                    void SetMetadataLoadAttrs(const MetadataLoadAttrs& _metadataLoadAttrs);

                    /**
                     * 判断参数 MetadataLoadAttrs 是否已赋值
                     * @return MetadataLoadAttrs 是否已赋值
                     * 
                     */
                    bool MetadataLoadAttrsHasBeenSet() const;

                    /**
                     * 获取数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。
                     * @return DistributedLoadAttrs 数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。
                     * 
                     */
                    DistributedLoadAttrs GetDistributedLoadAttrs() const;

                    /**
                     * 设置数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。
                     * @param _distributedLoadAttrs 数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。
                     * 
                     */
                    void SetDistributedLoadAttrs(const DistributedLoadAttrs& _distributedLoadAttrs);

                    /**
                     * 判断参数 DistributedLoadAttrs 是否已赋值
                     * @return DistributedLoadAttrs 是否已赋值
                     * 
                     */
                    bool DistributedLoadAttrsHasBeenSet() const;

                    /**
                     * 获取将任务执行报告写入 COS 的路径，如果不需要报告则入参空
                     * @return ReportPath 将任务执行报告写入 COS 的路径，如果不需要报告则入参空
                     * 
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置将任务执行报告写入 COS 的路径，如果不需要报告则入参空
                     * @param _reportPath 将任务执行报告写入 COS 的路径，如果不需要报告则入参空
                     * 
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     * 
                     */
                    bool ReportPathHasBeenSet() const;

                    /**
                     * 获取枚举，Completed，Running，Waiting，Cancelled
                     * @return State 枚举，Completed，Running，Waiting，Cancelled
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置枚举，Completed，Running，Waiting，Cancelled
                     * @param _state 枚举，Completed，Running，Waiting，Cancelled
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务执行信息，打印预热文件成功个数，失败个数，预热耗时信息 
                     * @return TaskMessage 任务执行信息，打印预热文件成功个数，失败个数，预热耗时信息 
                     * 
                     */
                    std::string GetTaskMessage() const;

                    /**
                     * 设置任务执行信息，打印预热文件成功个数，失败个数，预热耗时信息 
                     * @param _taskMessage 任务执行信息，打印预热文件成功个数，失败个数，预热耗时信息 
                     * 
                     */
                    void SetTaskMessage(const std::string& _taskMessage);

                    /**
                     * 判断参数 TaskMessage 是否已赋值
                     * @return TaskMessage 是否已赋值
                     * 
                     */
                    bool TaskMessageHasBeenSet() const;

                    /**
                     * 获取预热任务创建时间
                     * @return CreateTime 预热任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置预热任务创建时间
                     * @param _createTime 预热任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取预热任务变更时间
                     * @return ModifyTime 预热任务变更时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置预热任务变更时间
                     * @param _modifyTime 预热任务变更时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取任务提交账号，子账号或服务角色 ID
                     * @return Requester 任务提交账号，子账号或服务角色 ID
                     * 
                     */
                    std::string GetRequester() const;

                    /**
                     * 设置任务提交账号，子账号或服务角色 ID
                     * @param _requester 任务提交账号，子账号或服务角色 ID
                     * 
                     */
                    void SetRequester(const std::string& _requester);

                    /**
                     * 判断参数 Requester 是否已赋值
                     * @return Requester 是否已赋值
                     * 
                     */
                    bool RequesterHasBeenSet() const;

                private:

                    /**
                     * 预热任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 预热任务类型，枚举值，MetadataLoad｜DistributedLoad
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务描述，支持中文
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。
                     */
                    MetadataLoadAttrs m_metadataLoadAttrs;
                    bool m_metadataLoadAttrsHasBeenSet;

                    /**
                     * 数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。
                     */
                    DistributedLoadAttrs m_distributedLoadAttrs;
                    bool m_distributedLoadAttrsHasBeenSet;

                    /**
                     * 将任务执行报告写入 COS 的路径，如果不需要报告则入参空
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                    /**
                     * 枚举，Completed，Running，Waiting，Cancelled
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务执行信息，打印预热文件成功个数，失败个数，预热耗时信息 
                     */
                    std::string m_taskMessage;
                    bool m_taskMessageHasBeenSet;

                    /**
                     * 预热任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 预热任务变更时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 任务提交账号，子账号或服务角色 ID
                     */
                    std::string m_requester;
                    bool m_requesterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKATTRS_H_
