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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/TaskStepInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstanceInitStatus返回参数结构体
                */
                class DescribePrometheusInstanceInitStatusResponse : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceInitStatusResponse();
                    ~DescribePrometheusInstanceInitStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例初始化状态，取值：
uninitialized 未初始化 
initializing 初始化中
running 初始化完成，运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例初始化状态，取值：
uninitialized 未初始化 
initializing 初始化中
running 初始化完成，运行中
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取初始化任务步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Steps 初始化任务步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskStepInfo> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取实例eks集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EksClusterId 实例eks集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEksClusterId() const;

                    /**
                     * 判断参数 EksClusterId 是否已赋值
                     * @return EksClusterId 是否已赋值
                     * 
                     */
                    bool EksClusterIdHasBeenSet() const;

                    /**
                     * 获取eks集群内pod的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupId eks集群内pod的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例初始化状态，取值：
uninitialized 未初始化 
initializing 初始化中
running 初始化完成，运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 初始化任务步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * 实例eks集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eksClusterId;
                    bool m_eksClusterIdHasBeenSet;

                    /**
                     * eks集群内pod的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_
