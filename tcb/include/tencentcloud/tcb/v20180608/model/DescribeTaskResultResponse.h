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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETASKRESULTRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ObjectKV.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeTaskResult返回参数结构体
                */
                class DescribeTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeTaskResultResponse();
                    ~DescribeTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p><p>枚举值：</p><ul><li>PGUserMigration： PG Migrate 任务</li></ul>
                     * @return TaskType <p>任务类型</p><p>枚举值：</p><ul><li>PGUserMigration： PG Migrate 任务</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>Failed： 失败</li><li>Succeed： 成功</li><li>Accepted： 已接收</li><li>Running： 运行中</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>Failed： 失败</li><li>Succeed： 成功</li><li>Accepted： 已接收</li><li>Running： 运行中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤</p>
                     * @return Phase <p>当前步骤</p>
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return Reason <p>失败原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     * @return CreatedAt <p>创建时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>最后更新时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     * @return UpdatedAt <p>最后更新时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>任务参数</p>
                     * @return Params <p>任务参数</p>
                     * 
                     */
                    std::vector<ObjectKV> GetParams() const;

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型</p><p>枚举值：</p><ul><li>PGUserMigration： PG Migrate 任务</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>Failed： 失败</li><li>Succeed： 成功</li><li>Accepted： 已接收</li><li>Running： 运行中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>当前步骤</p>
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>最后更新时间</p><p>参数格式：2026-05-26T11:26:14+08:00</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>任务参数</p>
                     */
                    std::vector<ObjectKV> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETASKRESULTRESPONSE_H_
