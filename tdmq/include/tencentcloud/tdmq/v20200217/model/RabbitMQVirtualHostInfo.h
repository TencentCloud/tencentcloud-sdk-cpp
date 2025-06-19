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
                     * @return Description vhost描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置vhost描述信息
                     * @param _description vhost描述信息
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
                     * @return Tags vhost标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置vhost标签
                     * @param _tags vhost标签
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
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
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
                     * @return VirtualHostStatistics vhost概览统计信息
                     * 
                     */
                    RabbitMQVirtualHostStatistics GetVirtualHostStatistics() const;

                    /**
                     * 设置vhost概览统计信息
                     * @param _virtualHostStatistics vhost概览统计信息
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
                     * 获取消息轨迹开关,true打开,false关闭
                     * @return TraceFlag 消息轨迹开关,true打开,false关闭
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置消息轨迹开关,true打开,false关闭
                     * @param _traceFlag 消息轨迹开关,true打开,false关闭
                     * 
                     */
                    void SetTraceFlag(const bool& _traceFlag);

                    /**
                     * 判断参数 TraceFlag 是否已赋值
                     * @return TraceFlag 是否已赋值
                     * 
                     */
                    bool TraceFlagHasBeenSet() const;

                    /**
                     * 获取vhost状态，与原生控制台对应，有running、partial、stopped、unknown
                     * @return Status vhost状态，与原生控制台对应，有running、partial、stopped、unknown
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置vhost状态，与原生控制台对应，有running、partial、stopped、unknown
                     * @param _status vhost状态，与原生控制台对应，有running、partial、stopped、unknown
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
                     * @return MessageHeapCount 消息堆积数
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置消息堆积数
                     * @param _messageHeapCount 消息堆积数
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
                     * @return MessageRateIn 输入消息速率
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置输入消息速率
                     * @param _messageRateIn 输入消息速率
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
                     * @return MessageRateOut 输出消息速率
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置输出消息速率
                     * @param _messageRateOut 输出消息速率
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                    /**
                     * 获取是否存在镜像队列策略，true 为存在，false 为不存
                     * @return MirrorQueuePolicyFlag 是否存在镜像队列策略，true 为存在，false 为不存
                     * 
                     */
                    bool GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置是否存在镜像队列策略，true 为存在，false 为不存
                     * @param _mirrorQueuePolicyFlag 是否存在镜像队列策略，true 为存在，false 为不存
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                    /**
                     * 获取创建时间时间戳
                     * @return CreateTs 创建时间时间戳
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置创建时间时间戳
                     * @param _createTs 创建时间时间戳
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取修改时间时间戳
                     * @return ModifyTs 修改时间时间戳
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置修改时间时间戳
                     * @param _modifyTs 修改时间时间戳
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

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
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * vhost标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * vhost概览统计信息
                     */
                    RabbitMQVirtualHostStatistics m_virtualHostStatistics;
                    bool m_virtualHostStatisticsHasBeenSet;

                    /**
                     * 消息轨迹开关,true打开,false关闭
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                    /**
                     * vhost状态，与原生控制台对应，有running、partial、stopped、unknown
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 消息堆积数
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * 输入消息速率
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * 输出消息速率
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * 是否存在镜像队列策略，true 为存在，false 为不存
                     */
                    bool m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * 创建时间时间戳
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * 修改时间时间戳
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_
