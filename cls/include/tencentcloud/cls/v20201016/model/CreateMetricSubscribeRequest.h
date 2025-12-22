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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricConfig.h>
#include <tencentcloud/cls/v20201016/model/InstanceConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateMetricSubscribe请求参数结构体
                */
                class CreateMetricSubscribeRequest : public AbstractModel
                {
                public:
                    CreateMetricSubscribeRequest();
                    ~CreateMetricSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     * @return Name 名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     * @param _name 名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志主题id。
                     * @return TopicId 日志主题id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id。
                     * @param _topicId 日志主题id。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取云产品命名空间。
                     * @return Namespace 云产品命名空间。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置云产品命名空间。
                     * @param _namespace 云产品命名空间。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取数据库配置信息。
                     * @return Metrics 数据库配置信息。
                     * 
                     */
                    std::vector<MetricConfig> GetMetrics() const;

                    /**
                     * 设置数据库配置信息。
                     * @param _metrics 数据库配置信息。
                     * 
                     */
                    void SetMetrics(const std::vector<MetricConfig>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取实例配置配置。
                     * @return InstanceInfo 实例配置配置。
                     * 
                     */
                    InstanceConfig GetInstanceInfo() const;

                    /**
                     * 设置实例配置配置。
                     * @param _instanceInfo 实例配置配置。
                     * 
                     */
                    void SetInstanceInfo(const InstanceConfig& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * 名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志主题id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 云产品命名空间。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 数据库配置信息。
                     */
                    std::vector<MetricConfig> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 实例配置配置。
                     */
                    InstanceConfig m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICSUBSCRIBEREQUEST_H_
