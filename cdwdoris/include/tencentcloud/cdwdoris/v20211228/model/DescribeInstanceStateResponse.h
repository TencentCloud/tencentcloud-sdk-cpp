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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceState返回参数结构体
                */
                class DescribeInstanceStateResponse : public AbstractModel
                {
                public:
                    DescribeInstanceStateResponse();
                    ~DescribeInstanceStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群状态，例如：Serving
                     * @return InstanceState 集群状态，例如：Serving
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取集群操作创建时间
                     * @return FlowCreateTime 集群操作创建时间
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取集群操作名称
                     * @return FlowName 集群操作名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取集群操作进度
                     * @return FlowProgress 集群操作进度
                     * 
                     */
                    double GetFlowProgress() const;

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取集群状态描述，例如：运行中
                     * @return InstanceStateDesc 集群状态描述，例如：运行中
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取集群流程错误信息，例如：“创建失败，资源不足”
                     * @return FlowMsg 集群流程错误信息，例如：“创建失败，资源不足”
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取流程ProcessId
                     * @return ProcessId 流程ProcessId
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取Job名称
                     * @return JobName Job名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                private:

                    /**
                     * 集群状态，例如：Serving
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 集群操作创建时间
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * 集群操作名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 集群操作进度
                     */
                    double m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * 集群状态描述，例如：运行中
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * 集群流程错误信息，例如：“创建失败，资源不足”
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * 流程ProcessId
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * Job名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
