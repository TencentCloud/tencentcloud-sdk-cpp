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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AGENTAPPLICATIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AGENTAPPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * agent 应用信息
                */
                class AgentApplicationInfo : public AbstractModel
                {
                public:
                    AgentApplicationInfo();
                    ~AgentApplicationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用id</p>
                     * @return ApplicationId <p>应用id</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _applicationId <p>应用id</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p>
                     * @return ApplicationName <p>应用名称</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _applicationName <p>应用名称</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>接入类型</p><p>枚举值：</p><ul><li>Langfuse：  Langfuse​ 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * @return AccessType <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse：  Langfuse​ 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型</p><p>枚举值：</p><ul><li>Langfuse：  Langfuse​ 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * @param _accessType <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse：  Langfuse​ 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>应用下资源所属地域</p><p>例如：ap-guangzhou</p>
                     * @return Region <p>应用下资源所属地域</p><p>例如：ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>应用下资源所属地域</p><p>例如：ap-guangzhou</p>
                     * @param _region <p>应用下资源所属地域</p><p>例如：ap-guangzhou</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>日志主题列表</p>
                     * @return LogTopics <p>日志主题列表</p>
                     * 
                     */
                    std::vector<AgentTopicInfo> GetLogTopics() const;

                    /**
                     * 设置<p>日志主题列表</p>
                     * @param _logTopics <p>日志主题列表</p>
                     * 
                     */
                    void SetLogTopics(const std::vector<AgentTopicInfo>& _logTopics);

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
                     * 设置<p>指标主题列表</p>
                     * @param _metricsTopics <p>指标主题列表</p>
                     * 
                     */
                    void SetMetricsTopics(const std::vector<AgentTopicInfo>& _metricsTopics);

                    /**
                     * 判断参数 MetricsTopics 是否已赋值
                     * @return MetricsTopics 是否已赋值
                     * 
                     */
                    bool MetricsTopicsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @return CreateTime <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @param _createTime <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @return UpdateTime <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @param _updateTime <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>接入类型</p><p>枚举值：</p><ul><li>Langfuse：  Langfuse​ 是一款开源的 LLM（大语言模型）工程与可观测性平台（LLMOps Tool）</li></ul>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>应用下资源所属地域</p><p>例如：ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

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

                    /**
                     * <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AGENTAPPLICATIONINFO_H_
