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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_

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
                * RocketMQ消费组配置信息
                */
                class RocketMQGroupConfig : public AbstractModel
                {
                public:
                    RocketMQGroupConfig();
                    ~RocketMQGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取消费组名称
                     * @return GroupName 消费组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费组名称
                     * @param _groupName 消费组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取是否开启广播消费
                     * @return ConsumeBroadcastEnable 是否开启广播消费
                     * 
                     */
                    bool GetConsumeBroadcastEnable() const;

                    /**
                     * 设置是否开启广播消费
                     * @param _consumeBroadcastEnable 是否开启广播消费
                     * 
                     */
                    void SetConsumeBroadcastEnable(const bool& _consumeBroadcastEnable);

                    /**
                     * 判断参数 ConsumeBroadcastEnable 是否已赋值
                     * @return ConsumeBroadcastEnable 是否已赋值
                     * 
                     */
                    bool ConsumeBroadcastEnableHasBeenSet() const;

                    /**
                     * 获取是否开启消费
                     * @return ConsumeEnable 是否开启消费
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置是否开启消费
                     * @param _consumeEnable 是否开启消费
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 获取协议类型，支持以下枚举值
TCP;
HTTP;
                     * @return ConsumerGroupType 协议类型，支持以下枚举值
TCP;
HTTP;
                     * 
                     */
                    std::string GetConsumerGroupType() const;

                    /**
                     * 设置协议类型，支持以下枚举值
TCP;
HTTP;
                     * @param _consumerGroupType 协议类型，支持以下枚举值
TCP;
HTTP;
                     * 
                     */
                    void SetConsumerGroupType(const std::string& _consumerGroupType);

                    /**
                     * 判断参数 ConsumerGroupType 是否已赋值
                     * @return ConsumerGroupType 是否已赋值
                     * 
                     */
                    bool ConsumerGroupTypeHasBeenSet() const;

                private:

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 是否开启广播消费
                     */
                    bool m_consumeBroadcastEnable;
                    bool m_consumeBroadcastEnableHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 协议类型，支持以下枚举值
TCP;
HTTP;
                     */
                    std::string m_consumerGroupType;
                    bool m_consumerGroupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_
