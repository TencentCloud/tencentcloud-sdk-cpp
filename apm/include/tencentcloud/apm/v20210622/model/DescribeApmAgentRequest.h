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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmAgent请求参数结构体
                */
                class DescribeApmAgentRequest : public AbstractModel
                {
                public:
                    DescribeApmAgentRequest();
                    ~DescribeApmAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取接入方式
                     * @return AgentType 接入方式
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置接入方式
                     * @param AgentType 接入方式
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取环境
                     * @return NetworkMode 环境
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 设置环境
                     * @param NetworkMode 环境
                     */
                    void SetNetworkMode(const std::string& _networkMode);

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     */
                    bool NetworkModeHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return LanguageEnvironment 语言
                     */
                    std::string GetLanguageEnvironment() const;

                    /**
                     * 设置语言
                     * @param LanguageEnvironment 语言
                     */
                    void SetLanguageEnvironment(const std::string& _languageEnvironment);

                    /**
                     * 判断参数 LanguageEnvironment 是否已赋值
                     * @return LanguageEnvironment 是否已赋值
                     */
                    bool LanguageEnvironmentHasBeenSet() const;

                    /**
                     * 获取上报方式
                     * @return ReportMethod 上报方式
                     */
                    std::string GetReportMethod() const;

                    /**
                     * 设置上报方式
                     * @param ReportMethod 上报方式
                     */
                    void SetReportMethod(const std::string& _reportMethod);

                    /**
                     * 判断参数 ReportMethod 是否已赋值
                     * @return ReportMethod 是否已赋值
                     */
                    bool ReportMethodHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 接入方式
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 环境
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                    /**
                     * 语言
                     */
                    std::string m_languageEnvironment;
                    bool m_languageEnvironmentHasBeenSet;

                    /**
                     * 上报方式
                     */
                    std::string m_reportMethod;
                    bool m_reportMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_
