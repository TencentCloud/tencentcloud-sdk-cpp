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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAgentConfigs请求参数结构体
                */
                class DescribeAgentConfigsRequest : public AbstractModel
                {
                public:
                    DescribeAgentConfigsRequest();
                    ~DescribeAgentConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>agent的版本号</p>
                     * @return AgentVersion <p>agent的版本号</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>agent的版本号</p>
                     * @param _agentVersion <p>agent的版本号</p>
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取<p>agent的IP地址</p>
                     * @return AgentIp <p>agent的IP地址</p>
                     * 
                     */
                    std::string GetAgentIp() const;

                    /**
                     * 设置<p>agent的IP地址</p>
                     * @param _agentIp <p>agent的IP地址</p>
                     * 
                     */
                    void SetAgentIp(const std::string& _agentIp);

                    /**
                     * 判断参数 AgentIp 是否已赋值
                     * @return AgentIp 是否已赋值
                     * 
                     */
                    bool AgentIpHasBeenSet() const;

                    /**
                     * 获取<p>机器组标签列表</p>
                     * @return Labels <p>机器组标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>机器组标签列表</p>
                     * @param _labels <p>机器组标签列表</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>agent的instance id</p>
                     * @return InstanceId <p>agent的instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>agent的instance id</p>
                     * @param _instanceId <p>agent的instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>agent的版本号</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>agent的IP地址</p>
                     */
                    std::string m_agentIp;
                    bool m_agentIpHasBeenSet;

                    /**
                     * <p>机器组标签列表</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>agent的instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSREQUEST_H_
