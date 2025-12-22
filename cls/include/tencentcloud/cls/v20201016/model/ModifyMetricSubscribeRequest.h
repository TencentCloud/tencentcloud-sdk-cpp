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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_

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
                * ModifyMetricSubscribe请求参数结构体
                */
                class ModifyMetricSubscribeRequest : public AbstractModel
                {
                public:
                    ModifyMetricSubscribeRequest();
                    ~ModifyMetricSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指标采集任务的日志主题id。必填字段
                     * @return TopicId 指标采集任务的日志主题id。必填字段
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置指标采集任务的日志主题id。必填字段
                     * @param _topicId 指标采集任务的日志主题id。必填字段
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
                     * 获取指标采集任务id。必填字段
                     * @return TaskId 指标采集任务id。必填字段
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置指标采集任务id。必填字段
                     * @param _taskId 指标采集任务id。必填字段
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * 获取指标配置信息。
                     * @return Metrics 指标配置信息。
                     * 
                     */
                    std::vector<MetricConfig> GetMetrics() const;

                    /**
                     * 设置指标配置信息。
                     * @param _metrics 指标配置信息。
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
                     * 获取实例配置信息。
                     * @return InstanceInfo 实例配置信息。
                     * 
                     */
                    InstanceConfig GetInstanceInfo() const;

                    /**
                     * 设置实例配置信息。
                     * @param _instanceInfo 实例配置信息。
                     * 
                     */
                    void SetInstanceInfo(const InstanceConfig& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取任务状态。

1： 未启用

2： 启用
                     * @return Enable 任务状态。

1： 未启用

2： 启用
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置任务状态。

1： 未启用

2： 启用
                     * @param _enable 任务状态。

1： 未启用

2： 启用
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 指标采集任务的日志主题id。必填字段
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 指标采集任务id。必填字段
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云产品命名空间。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标配置信息。
                     */
                    std::vector<MetricConfig> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 实例配置信息。
                     */
                    InstanceConfig m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * 任务状态。

1： 未启用

2： 启用
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMETRICSUBSCRIBEREQUEST_H_
