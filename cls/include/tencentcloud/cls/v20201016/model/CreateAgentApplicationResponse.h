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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AgentTopicInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAgentApplication返回参数结构体
                */
                class CreateAgentApplicationResponse : public AbstractModel
                {
                public:
                    CreateAgentApplicationResponse();
                    ~CreateAgentApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return ApplicationId <p>应用id</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>日志主题列表</p>
                     * @return LogTopics <p>日志主题列表</p>
                     * 
                     */
                    std::vector<AgentTopicInfo> GetLogTopics() const;

                    /**
                     * 判断参数 LogTopics 是否已赋值
                     * @return LogTopics 是否已赋值
                     * 
                     */
                    bool LogTopicsHasBeenSet() const;

                    /**
                     * 获取<p>指标主题列表</p>
                     * @return MetricsTopics <p>指标主题列表</p>
                     * 
                     */
                    std::vector<AgentTopicInfo> GetMetricsTopics() const;

                    /**
                     * 判断参数 MetricsTopics 是否已赋值
                     * @return MetricsTopics 是否已赋值
                     * 
                     */
                    bool MetricsTopicsHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>日志主题列表</p>
                     */
                    std::vector<AgentTopicInfo> m_logTopics;
                    bool m_logTopicsHasBeenSet;

                    /**
                     * <p>指标主题列表</p>
                     */
                    std::vector<AgentTopicInfo> m_metricsTopics;
                    bool m_metricsTopicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEAGENTAPPLICATIONRESPONSE_H_
