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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_

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
                * RocketMQ命名空间信息
                */
                class RocketMQNamespace : public AbstractModel
                {
                public:
                    RocketMQNamespace();
                    ~RocketMQNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return NamespaceId 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param _namespaceId 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取已废弃，未消费消息的保留时间，以毫秒单位，范围60秒到15天
                     * @return Ttl 已废弃，未消费消息的保留时间，以毫秒单位，范围60秒到15天
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置已废弃，未消费消息的保留时间，以毫秒单位，范围60秒到15天
                     * @param _ttl 已废弃，未消费消息的保留时间，以毫秒单位，范围60秒到15天
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取消息持久化后保留的时间，以毫秒单位
                     * @return RetentionTime 消息持久化后保留的时间，以毫秒单位
                     * 
                     */
                    uint64_t GetRetentionTime() const;

                    /**
                     * 设置消息持久化后保留的时间，以毫秒单位
                     * @param _retentionTime 消息持久化后保留的时间，以毫秒单位
                     * 
                     */
                    void SetRetentionTime(const uint64_t& _retentionTime);

                    /**
                     * 判断参数 RetentionTime 是否已赋值
                     * @return RetentionTime 是否已赋值
                     * 
                     */
                    bool RetentionTimeHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明
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
                     * 获取公网接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicEndpoint 公网接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicEndpoint() const;

                    /**
                     * 设置公网接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicEndpoint 公网接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicEndpoint(const std::string& _publicEndpoint);

                    /**
                     * 判断参数 PublicEndpoint 是否已赋值
                     * @return PublicEndpoint 是否已赋值
                     * 
                     */
                    bool PublicEndpointHasBeenSet() const;

                    /**
                     * 获取VPC接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcEndpoint VPC接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置VPC接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcEndpoint VPC接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                    /**
                     * 获取内部接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalEndpoint 内部接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置内部接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalEndpoint 内部接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     * 
                     */
                    bool InternalEndpointHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 已废弃，未消费消息的保留时间，以毫秒单位，范围60秒到15天
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 消息持久化后保留的时间，以毫秒单位
                     */
                    uint64_t m_retentionTime;
                    bool m_retentionTimeHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 公网接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicEndpoint;
                    bool m_publicEndpointHasBeenSet;

                    /**
                     * VPC接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                    /**
                     * 内部接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_
