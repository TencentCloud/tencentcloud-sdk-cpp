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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 指标订阅配置信息
                */
                class MetricSubscribeInfo : public AbstractModel
                {
                public:
                    MetricSubscribeInfo();
                    ~MetricSubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅任务id。
                     * @return TaskId 订阅任务id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置订阅任务id。
                     * @param _taskId 订阅任务id。
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
                     * 获取订阅任务名称。
                     * @return Name 订阅任务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置订阅任务名称。
                     * @param _name 订阅任务名称。
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
                     * 获取订阅任务开关。1:暂停 2:启用
                     * @return Enable 订阅任务开关。1:暂停 2:启用
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置订阅任务开关。1:暂停 2:启用
                     * @param _enable 订阅任务开关。1:暂停 2:启用
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取订阅任务运行状态。0:创建中 1:暂停 2:运行中 3:异常
                     * @return Status 订阅任务运行状态。0:创建中 1:暂停 2:运行中 3:异常
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置订阅任务运行状态。0:创建中 1:暂停 2:运行中 3:异常
                     * @param _status 订阅任务运行状态。0:创建中 1:暂停 2:运行中 3:异常
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取订阅任务运行异常时的错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 订阅任务运行异常时的错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置订阅任务运行异常时的错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 订阅任务运行异常时的错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取创建时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 订阅任务id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 日志主题id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 订阅任务名称。
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
                     * 订阅任务开关。1:暂停 2:启用
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 订阅任务运行状态。0:创建中 1:暂停 2:运行中 3:异常
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订阅任务运行异常时的错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 创建时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间（秒级时间戳）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICSUBSCRIBEINFO_H_
