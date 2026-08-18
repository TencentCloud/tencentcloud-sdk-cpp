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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationTaskInfo.h>
#include <tencentcloud/wedata/v20210820/model/AgentStatus.h>
#include <tencentcloud/wedata/v20210820/model/TaskVersionInstance.h>
#include <tencentcloud/wedata/v20210820/model/RealtimeTaskInstanceVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationTask返回参数结构体
                */
                class DescribeIntegrationTaskResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationTaskResponse();
                    ~DescribeIntegrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntegrationTaskInfo GetTaskInfo() const;

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取<p>采集器统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentStatus <p>采集器统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentStatus GetAgentStatus() const;

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersion <p>任务版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskVersionInstance GetTaskVersion() const;

                    /**
                     * 判断参数 TaskVersion 是否已赋值
                     * @return TaskVersion 是否已赋值
                     * 
                     */
                    bool TaskVersionHasBeenSet() const;

                    /**
                     * 获取<p>历史实例信息</p>
                     * @return TaskVersionList <p>历史实例信息</p>
                     * 
                     */
                    std::vector<RealtimeTaskInstanceVO> GetTaskVersionList() const;

                    /**
                     * 判断参数 TaskVersionList 是否已赋值
                     * @return TaskVersionList 是否已赋值
                     * 
                     */
                    bool TaskVersionListHasBeenSet() const;

                private:

                    /**
                     * <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntegrationTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * <p>采集器统计信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentStatus m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>任务版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskVersionInstance m_taskVersion;
                    bool m_taskVersionHasBeenSet;

                    /**
                     * <p>历史实例信息</p>
                     */
                    std::vector<RealtimeTaskInstanceVO> m_taskVersionList;
                    bool m_taskVersionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONTASKRESPONSE_H_
