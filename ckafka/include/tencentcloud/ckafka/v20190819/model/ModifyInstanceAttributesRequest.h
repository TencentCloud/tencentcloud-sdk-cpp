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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttributes请求参数结构体
                */
                class ModifyInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesRequest();
                    ~ModifyInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例日志的最长保留时间，单位分钟，最大30天，0代表不开启日志保留时间回收策略
                     * @return MsgRetentionTime 实例日志的最长保留时间，单位分钟，最大30天，0代表不开启日志保留时间回收策略
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置实例日志的最长保留时间，单位分钟，最大30天，0代表不开启日志保留时间回收策略
                     * @param MsgRetentionTime 实例日志的最长保留时间，单位分钟，最大30天，0代表不开启日志保留时间回收策略
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @return InstanceName 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @param InstanceName 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例配置
                     * @return Config 实例配置
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置实例配置
                     * @param Config 实例配置
                     */
                    void SetConfig(const ModifyInstanceAttributesConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取动态消息保留策略配置
                     * @return DynamicRetentionConfig 动态消息保留策略配置
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置动态消息保留策略配置
                     * @param DynamicRetentionConfig 动态消息保留策略配置
                     */
                    void SetDynamicRetentionConfig(const DynamicRetentionTime& _dynamicRetentionConfig);

                    /**
                     * 判断参数 DynamicRetentionConfig 是否已赋值
                     * @return DynamicRetentionConfig 是否已赋值
                     */
                    bool DynamicRetentionConfigHasBeenSet() const;

                    /**
                     * 获取修改升配置rebalance时间
                     * @return RebalanceTime 修改升配置rebalance时间
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置修改升配置rebalance时间
                     * @param RebalanceTime 修改升配置rebalance时间
                     */
                    void SetRebalanceTime(const int64_t& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取公网带宽
                     * @return PublicNetwork 公网带宽
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置公网带宽
                     * @param PublicNetwork 公网带宽
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取动态硬盘扩容策略配置
                     * @return DynamicDiskConfig 动态硬盘扩容策略配置
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置动态硬盘扩容策略配置
                     * @param DynamicDiskConfig 动态硬盘扩容策略配置
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取实例级别单条消息大小（单位byte)
                     * @return MaxMessageByte 实例级别单条消息大小（单位byte)
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置实例级别单条消息大小（单位byte)
                     * @param MaxMessageByte 实例级别单条消息大小（单位byte)
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     */
                    bool MaxMessageByteHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例日志的最长保留时间，单位分钟，最大30天，0代表不开启日志保留时间回收策略
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例配置
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 动态消息保留策略配置
                     */
                    DynamicRetentionTime m_dynamicRetentionConfig;
                    bool m_dynamicRetentionConfigHasBeenSet;

                    /**
                     * 修改升配置rebalance时间
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * 公网带宽
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * 动态硬盘扩容策略配置
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * 实例级别单条消息大小（单位byte)
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
