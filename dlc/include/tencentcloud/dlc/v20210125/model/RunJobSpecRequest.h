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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RUNJOBSPECREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RUNJOBSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RunJobSpec请求参数结构体
                */
                class RunJobSpecRequest : public AbstractModel
                {
                public:
                    RunJobSpecRequest();
                    ~RunJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配置ID</p>
                     * @return SpecId <p>配置ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>配置ID</p>
                     * @param _specId <p>配置ID</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>外部工作流引擎业务键 flowId</p>
                     * @return FlowId <p>外部工作流引擎业务键 flowId</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>外部工作流引擎业务键 flowId</p>
                     * @param _flowId <p>外部工作流引擎业务键 flowId</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>外部工作流引擎业务键 executionId</p>
                     * @return ExecutionId <p>外部工作流引擎业务键 executionId</p>
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>外部工作流引擎业务键 executionId</p>
                     * @param _executionId <p>外部工作流引擎业务键 executionId</p>
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>业务来源标识（调用上下文，长度上限 64，禁止控制字符）</p>
                     * @return JobSource <p>业务来源标识（调用上下文，长度上限 64，禁止控制字符）</p>
                     * 
                     */
                    std::string GetJobSource() const;

                    /**
                     * 设置<p>业务来源标识（调用上下文，长度上限 64，禁止控制字符）</p>
                     * @param _jobSource <p>业务来源标识（调用上下文，长度上限 64，禁止控制字符）</p>
                     * 
                     */
                    void SetJobSource(const std::string& _jobSource);

                    /**
                     * 判断参数 JobSource 是否已赋值
                     * @return JobSource 是否已赋值
                     * 
                     */
                    bool JobSourceHasBeenSet() const;

                private:

                    /**
                     * <p>配置ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>外部工作流引擎业务键 flowId</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>外部工作流引擎业务键 executionId</p>
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>业务来源标识（调用上下文，长度上限 64，禁止控制字符）</p>
                     */
                    std::string m_jobSource;
                    bool m_jobSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RUNJOBSPECREQUEST_H_
