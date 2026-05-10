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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_

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
                * CreateRecordingRuleYamlTask请求参数结构体
                */
                class CreateRecordingRuleYamlTaskRequest : public AbstractModel
                {
                public:
                    CreateRecordingRuleYamlTaskRequest();
                    ~CreateRecordingRuleYamlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>源指标主题id</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">指标主题</a></li></ul>
                     * @return TopicId <p>源指标主题id</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">指标主题</a></li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>源指标主题id</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">指标主题</a></li></ul>
                     * @param _topicId <p>源指标主题id</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">指标主题</a></li></ul>
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
                     * 获取<p>目标指标主题id，可与 TopicId 相同</p>
                     * @return DstTopicId <p>目标指标主题id，可与 TopicId 相同</p>
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置<p>目标指标主题id，可与 TopicId 相同</p>
                     * @param _dstTopicId <p>目标指标主题id，可与 TopicId 相同</p>
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态； 1:开启；2:关闭</p>
                     * @return EnableFlag <p>任务状态； 1:开启；2:关闭</p>
                     * 
                     */
                    uint64_t GetEnableFlag() const;

                    /**
                     * 设置<p>任务状态； 1:开启；2:关闭</p>
                     * @param _enableFlag <p>任务状态； 1:开启；2:关闭</p>
                     * 
                     */
                    void SetEnableFlag(const uint64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取<p>任务执行开始时间 ,Unix时间戳</p><p>单位：ms</p>
                     * @return ProcessStartTime <p>任务执行开始时间 ,Unix时间戳</p><p>单位：ms</p>
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置<p>任务执行开始时间 ,Unix时间戳</p><p>单位：ms</p>
                     * @param _processStartTime <p>任务执行开始时间 ,Unix时间戳</p><p>单位：ms</p>
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>调度周期(分钟)，支持范围(0,1440]分钟。</p><p>单位：分钟</p><p>也可在YAML中使用 interval: duration 为每个group单独设置执行间隔</p>
                     * @return ProcessPeriod <p>调度周期(分钟)，支持范围(0,1440]分钟。</p><p>单位：分钟</p><p>也可在YAML中使用 interval: duration 为每个group单独设置执行间隔</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>调度周期(分钟)，支持范围(0,1440]分钟。</p><p>单位：分钟</p><p>也可在YAML中使用 interval: duration 为每个group单独设置执行间隔</p>
                     * @param _processPeriod <p>调度周期(分钟)，支持范围(0,1440]分钟。</p><p>单位：分钟</p><p>也可在YAML中使用 interval: duration 为每个group单独设置执行间隔</p>
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取<p>执行延迟，建议设置为30秒，避免指标上报延迟导致预聚合任务计算结果不精确</p><p>单位：秒</p>
                     * @return ProcessDelay <p>执行延迟，建议设置为30秒，避免指标上报延迟导致预聚合任务计算结果不精确</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>执行延迟，建议设置为30秒，避免指标上报延迟导致预聚合任务计算结果不精确</p><p>单位：秒</p>
                     * @param _processDelay <p>执行延迟，建议设置为30秒，避免指标上报延迟导致预聚合任务计算结果不精确</p><p>单位：秒</p>
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取<p>yaml配置名称</p>
                     * @return YamlConfigName <p>yaml配置名称</p>
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置<p>yaml配置名称</p>
                     * @param _yamlConfigName <p>yaml配置名称</p>
                     * 
                     */
                    void SetYamlConfigName(const std::string& _yamlConfigName);

                    /**
                     * 判断参数 YamlConfigName 是否已赋值
                     * @return YamlConfigName 是否已赋值
                     * 
                     */
                    bool YamlConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>yaml配置内容</p><p>兼容 Prometheus Recording Rules 配置文件，API调用时请注意字符串中的换行与缩进。</p>
                     * @return YamlContent <p>yaml配置内容</p><p>兼容 Prometheus Recording Rules 配置文件，API调用时请注意字符串中的换行与缩进。</p>
                     * 
                     */
                    std::string GetYamlContent() const;

                    /**
                     * 设置<p>yaml配置内容</p><p>兼容 Prometheus Recording Rules 配置文件，API调用时请注意字符串中的换行与缩进。</p>
                     * @param _yamlContent <p>yaml配置内容</p><p>兼容 Prometheus Recording Rules 配置文件，API调用时请注意字符串中的换行与缩进。</p>
                     * 
                     */
                    void SetYamlContent(const std::string& _yamlContent);

                    /**
                     * 判断参数 YamlContent 是否已赋值
                     * @return YamlContent 是否已赋值
                     * 
                     */
                    bool YamlContentHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>源指标主题id</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></li><li><a href="https://console.cloud.tencent.com/cls/metric">指标主题</a></li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>目标指标主题id，可与 TopicId 相同</p>
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * <p>任务状态； 1:开启；2:关闭</p>
                     */
                    uint64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>任务执行开始时间 ,Unix时间戳</p><p>单位：ms</p>
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>调度周期(分钟)，支持范围(0,1440]分钟。</p><p>单位：分钟</p><p>也可在YAML中使用 interval: duration 为每个group单独设置执行间隔</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>执行延迟，建议设置为30秒，避免指标上报延迟导致预聚合任务计算结果不精确</p><p>单位：秒</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>yaml配置名称</p>
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * <p>yaml配置内容</p><p>兼容 Prometheus Recording Rules 配置文件，API调用时请注意字符串中的换行与缩进。</p>
                     */
                    std::string m_yamlContent;
                    bool m_yamlContentHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKREQUEST_H_
