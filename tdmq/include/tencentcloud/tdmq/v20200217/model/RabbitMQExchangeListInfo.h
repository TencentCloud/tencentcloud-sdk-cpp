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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ exchange列表成员信息
                */
                class RabbitMQExchangeListInfo : public AbstractModel
                {
                public:
                    RabbitMQExchangeListInfo();
                    ~RabbitMQExchangeListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取exchange 名称
                     * @return ExchangeName exchange 名称
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange 名称
                     * @param _exchangeName exchange 名称
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取exchange 类型, 支持 "fanout","direct","topic","headers"
                     * @return ExchangeType exchange 类型, 支持 "fanout","direct","topic","headers"
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 设置exchange 类型, 支持 "fanout","direct","topic","headers"
                     * @param _exchangeType exchange 类型, 支持 "fanout","direct","topic","headers"
                     * 
                     */
                    void SetExchangeType(const std::string& _exchangeType);

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取交换机所属 Virtual Host 名称
                     * @return VirtualHost 交换机所属 Virtual Host 名称
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置交换机所属 Virtual Host 名称
                     * @param _virtualHost 交换机所属 Virtual Host 名称
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
                     * 获取exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * @return ExchangeCreator exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * 
                     */
                    std::string GetExchangeCreator() const;

                    /**
                     * 设置exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * @param _exchangeCreator exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * 
                     */
                    void SetExchangeCreator(const std::string& _exchangeCreator);

                    /**
                     * 判断参数 ExchangeCreator 是否已赋值
                     * @return ExchangeCreator 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorHasBeenSet() const;

                    /**
                     * 获取exchange 创建时间
                     * @return CreateTimeStamp exchange 创建时间
                     * 
                     */
                    std::string GetCreateTimeStamp() const;

                    /**
                     * 设置exchange 创建时间
                     * @param _createTimeStamp exchange 创建时间
                     * 
                     */
                    void SetCreateTimeStamp(const std::string& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取exchange 修改时间
                     * @return ModTimeStamp exchange 修改时间
                     * 
                     */
                    std::string GetModTimeStamp() const;

                    /**
                     * 设置exchange 修改时间
                     * @param _modTimeStamp exchange 修改时间
                     * 
                     */
                    void SetModTimeStamp(const std::string& _modTimeStamp);

                    /**
                     * 判断参数 ModTimeStamp 是否已赋值
                     * @return ModTimeStamp 是否已赋值
                     * 
                     */
                    bool ModTimeStampHasBeenSet() const;

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

                    /**
                     * 获取是否为持久化交换机，true 为持久化，false 为非持久化
                     * @return Durable 是否为持久化交换机，true 为持久化，false 为非持久化
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置是否为持久化交换机，true 为持久化，false 为非持久化
                     * @param _durable 是否为持久化交换机，true 为持久化，false 为非持久化
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取是否为自动删除交换机，true 为自动删除，false 为非自动删除
                     * @return AutoDelete 是否为自动删除交换机，true 为自动删除，false 为非自动删除
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置是否为自动删除交换机，true 为自动删除，false 为非自动删除
                     * @param _autoDelete 是否为自动删除交换机，true 为自动删除，false 为非自动删除
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取是否为内部交换机，true 为内部交换机
                     * @return Internal 是否为内部交换机，true 为内部交换机
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置是否为内部交换机，true 为内部交换机
                     * @param _internal 是否为内部交换机，true 为内部交换机
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取交换机所属实例 ID
                     * @return InstanceId 交换机所属实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置交换机所属实例 ID
                     * @param _instanceId 交换机所属实例 ID
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
                     * 获取生效的策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Policy 生效的策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置生效的策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policy 生效的策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取扩展参数 key-value 对象
                     * @return Arguments 扩展参数 key-value 对象
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置扩展参数 key-value 对象
                     * @param _arguments 扩展参数 key-value 对象
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取未调度的延时消息数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessagesDelayed 未调度的延时消息数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMessagesDelayed() const;

                    /**
                     * 设置未调度的延时消息数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messagesDelayed 未调度的延时消息数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessagesDelayed(const uint64_t& _messagesDelayed);

                    /**
                     * 判断参数 MessagesDelayed 是否已赋值
                     * @return MessagesDelayed 是否已赋值
                     * 
                     */
                    bool MessagesDelayedHasBeenSet() const;

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
                     * exchange 名称
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * exchange 类型, 支持 "fanout","direct","topic","headers"
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * 交换机所属 Virtual Host 名称
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange 创建者, "system":"系统创建", "user":"用户创建"
                     */
                    std::string m_exchangeCreator;
                    bool m_exchangeCreatorHasBeenSet;

                    /**
                     * exchange 创建时间
                     */
                    std::string m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * exchange 修改时间
                     */
                    std::string m_modTimeStamp;
                    bool m_modTimeStampHasBeenSet;

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

                    /**
                     * 是否为持久化交换机，true 为持久化，false 为非持久化
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * 是否为自动删除交换机，true 为自动删除，false 为非自动删除
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 是否为内部交换机，true 为内部交换机
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * 交换机所属实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 生效的策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 扩展参数 key-value 对象
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * 未调度的延时消息数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_messagesDelayed;
                    bool m_messagesDelayedHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_
