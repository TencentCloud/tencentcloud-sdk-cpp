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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQVirtualHostStatistics.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ的vhost详情
                */
                class RabbitMQVirtualHostInfo : public AbstractModel
                {
                public:
                    RabbitMQVirtualHostInfo();
                    ~RabbitMQVirtualHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群实例Id
                     * @return InstanceId 集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id
                     * @param _instanceId 集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取vhost名
                     * @return VirtualHost vhost名
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置vhost名
                     * @param _virtualHost vhost名
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取vhost描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description vhost描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置vhost描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description vhost描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取vhost标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags vhost标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置vhost标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags vhost标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取vhost概览统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualHostStatistics vhost概览统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RabbitMQVirtualHostStatistics GetVirtualHostStatistics() const;

                    /**
                     * 设置vhost概览统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualHostStatistics vhost概览统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualHostStatistics(const RabbitMQVirtualHostStatistics& _virtualHostStatistics);

                    /**
                     * 判断参数 VirtualHostStatistics 是否已赋值
                     * @return VirtualHostStatistics 是否已赋值
                     * 
                     */
                    bool VirtualHostStatisticsHasBeenSet() const;

                    /**
                     * 获取vhost状态，与原生控制台对应，有running、partial、stopped、unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status vhost状态，与原生控制台对应，有running、partial、stopped、unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置vhost状态，与原生控制台对应，有running、partial、stopped、unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status vhost状态，与原生控制台对应，有running、partial、stopped、unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageHeapCount 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageHeapCount 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageHeapCount(const int64_t& _messageHeapCount);

                    /**
                     * 判断参数 MessageHeapCount 是否已赋值
                     * @return MessageHeapCount 是否已赋值
                     * 
                     */
                    bool MessageHeapCountHasBeenSet() const;

                    /**
                     * 获取输入消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageRateIn 输入消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置输入消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageRateIn 输入消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageRateIn(const double& _messageRateIn);

                    /**
                     * 判断参数 MessageRateIn 是否已赋值
                     * @return MessageRateIn 是否已赋值
                     * 
                     */
                    bool MessageRateInHasBeenSet() const;

                    /**
                     * 获取输出消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageRateOut 输出消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置输出消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageRateOut 输出消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * vhost名
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * vhost描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * vhost标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * vhost概览统计信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RabbitMQVirtualHostStatistics m_virtualHostStatistics;
                    bool m_virtualHostStatisticsHasBeenSet;

                    /**
                     * vhost状态，与原生控制台对应，有running、partial、stopped、unknown
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * 输入消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * 输出消息速率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_
