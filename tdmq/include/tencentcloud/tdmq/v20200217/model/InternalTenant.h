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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_INTERNALTENANT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_INTERNALTENANT_H_

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
                * 面向运营端的虚拟集群信息
                */
                class InternalTenant : public AbstractModel
                {
                public:
                    InternalTenant();
                    ~InternalTenant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取虚拟集群ID
                     * @return TenantId 虚拟集群ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置虚拟集群ID
                     * @param _tenantId 虚拟集群ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取虚拟集群名称
                     * @return TenantName 虚拟集群名称
                     * 
                     */
                    std::string GetTenantName() const;

                    /**
                     * 设置虚拟集群名称
                     * @param _tenantName 虚拟集群名称
                     * 
                     */
                    void SetTenantName(const std::string& _tenantName);

                    /**
                     * 判断参数 TenantName 是否已赋值
                     * @return TenantName 是否已赋值
                     * 
                     */
                    bool TenantNameHasBeenSet() const;

                    /**
                     * 获取客户UIN
                     * @return CustomerUin 客户UIN
                     * 
                     */
                    std::string GetCustomerUin() const;

                    /**
                     * 设置客户UIN
                     * @param _customerUin 客户UIN
                     * 
                     */
                    void SetCustomerUin(const std::string& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取客户的APPID
                     * @return CustomerAppId 客户的APPID
                     * 
                     */
                    std::string GetCustomerAppId() const;

                    /**
                     * 设置客户的APPID
                     * @param _customerAppId 客户的APPID
                     * 
                     */
                    void SetCustomerAppId(const std::string& _customerAppId);

                    /**
                     * 判断参数 CustomerAppId 是否已赋值
                     * @return CustomerAppId 是否已赋值
                     * 
                     */
                    bool CustomerAppIdHasBeenSet() const;

                    /**
                     * 获取物理集群名称
                     * @return ClusterName 物理集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置物理集群名称
                     * @param _clusterName 物理集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群协议类型，支持的值为TDMQ，ROCKETMQ，AMQP，CMQ
                     * @return Type 集群协议类型，支持的值为TDMQ，ROCKETMQ，AMQP，CMQ
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置集群协议类型，支持的值为TDMQ，ROCKETMQ，AMQP，CMQ
                     * @param _type 集群协议类型，支持的值为TDMQ，ROCKETMQ，AMQP，CMQ
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取命名空间配额
                     * @return MaxNamespaces 命名空间配额
                     * 
                     */
                    int64_t GetMaxNamespaces() const;

                    /**
                     * 设置命名空间配额
                     * @param _maxNamespaces 命名空间配额
                     * 
                     */
                    void SetMaxNamespaces(const int64_t& _maxNamespaces);

                    /**
                     * 判断参数 MaxNamespaces 是否已赋值
                     * @return MaxNamespaces 是否已赋值
                     * 
                     */
                    bool MaxNamespacesHasBeenSet() const;

                    /**
                     * 获取已使用命名空间配额
                     * @return UsedNamespaces 已使用命名空间配额
                     * 
                     */
                    int64_t GetUsedNamespaces() const;

                    /**
                     * 设置已使用命名空间配额
                     * @param _usedNamespaces 已使用命名空间配额
                     * 
                     */
                    void SetUsedNamespaces(const int64_t& _usedNamespaces);

                    /**
                     * 判断参数 UsedNamespaces 是否已赋值
                     * @return UsedNamespaces 是否已赋值
                     * 
                     */
                    bool UsedNamespacesHasBeenSet() const;

                    /**
                     * 获取Topic配额
                     * @return MaxTopics Topic配额
                     * 
                     */
                    int64_t GetMaxTopics() const;

                    /**
                     * 设置Topic配额
                     * @param _maxTopics Topic配额
                     * 
                     */
                    void SetMaxTopics(const int64_t& _maxTopics);

                    /**
                     * 判断参数 MaxTopics 是否已赋值
                     * @return MaxTopics 是否已赋值
                     * 
                     */
                    bool MaxTopicsHasBeenSet() const;

                    /**
                     * 获取已使用Topic配额
                     * @return UsedTopics 已使用Topic配额
                     * 
                     */
                    int64_t GetUsedTopics() const;

                    /**
                     * 设置已使用Topic配额
                     * @param _usedTopics 已使用Topic配额
                     * 
                     */
                    void SetUsedTopics(const int64_t& _usedTopics);

                    /**
                     * 判断参数 UsedTopics 是否已赋值
                     * @return UsedTopics 是否已赋值
                     * 
                     */
                    bool UsedTopicsHasBeenSet() const;

                    /**
                     * 获取Topic分区数配额
                     * @return MaxPartitions Topic分区数配额
                     * 
                     */
                    int64_t GetMaxPartitions() const;

                    /**
                     * 设置Topic分区数配额
                     * @param _maxPartitions Topic分区数配额
                     * 
                     */
                    void SetMaxPartitions(const int64_t& _maxPartitions);

                    /**
                     * 判断参数 MaxPartitions 是否已赋值
                     * @return MaxPartitions 是否已赋值
                     * 
                     */
                    bool MaxPartitionsHasBeenSet() const;

                    /**
                     * 获取已使用Topic分区数配额
                     * @return UsedPartitions 已使用Topic分区数配额
                     * 
                     */
                    int64_t GetUsedPartitions() const;

                    /**
                     * 设置已使用Topic分区数配额
                     * @param _usedPartitions 已使用Topic分区数配额
                     * 
                     */
                    void SetUsedPartitions(const int64_t& _usedPartitions);

                    /**
                     * 判断参数 UsedPartitions 是否已赋值
                     * @return UsedPartitions 是否已赋值
                     * 
                     */
                    bool UsedPartitionsHasBeenSet() const;

                    /**
                     * 获取存储配额, byte为单位
                     * @return MaxMsgBacklogSize 存储配额, byte为单位
                     * 
                     */
                    uint64_t GetMaxMsgBacklogSize() const;

                    /**
                     * 设置存储配额, byte为单位
                     * @param _maxMsgBacklogSize 存储配额, byte为单位
                     * 
                     */
                    void SetMaxMsgBacklogSize(const uint64_t& _maxMsgBacklogSize);

                    /**
                     * 判断参数 MaxMsgBacklogSize 是否已赋值
                     * @return MaxMsgBacklogSize 是否已赋值
                     * 
                     */
                    bool MaxMsgBacklogSizeHasBeenSet() const;

                    /**
                     * 获取命名空间最大生产TPS
                     * @return MaxPublishTps 命名空间最大生产TPS
                     * 
                     */
                    uint64_t GetMaxPublishTps() const;

                    /**
                     * 设置命名空间最大生产TPS
                     * @param _maxPublishTps 命名空间最大生产TPS
                     * 
                     */
                    void SetMaxPublishTps(const uint64_t& _maxPublishTps);

                    /**
                     * 判断参数 MaxPublishTps 是否已赋值
                     * @return MaxPublishTps 是否已赋值
                     * 
                     */
                    bool MaxPublishTpsHasBeenSet() const;

                    /**
                     * 获取消息最大保留时间，秒为单位
                     * @return MaxRetention 消息最大保留时间，秒为单位
                     * 
                     */
                    uint64_t GetMaxRetention() const;

                    /**
                     * 设置消息最大保留时间，秒为单位
                     * @param _maxRetention 消息最大保留时间，秒为单位
                     * 
                     */
                    void SetMaxRetention(const uint64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒为单位
                     * @return CreateTime 创建时间，毫秒为单位
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒为单位
                     * @param _createTime 创建时间，毫秒为单位
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间，毫秒为单位
                     * @return UpdateTime 修改时间，毫秒为单位
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间，毫秒为单位
                     * @param _updateTime 修改时间，毫秒为单位
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取命名空间最大消费TPS
                     * @return MaxDispatchTps 命名空间最大消费TPS
                     * 
                     */
                    uint64_t GetMaxDispatchTps() const;

                    /**
                     * 设置命名空间最大消费TPS
                     * @param _maxDispatchTps 命名空间最大消费TPS
                     * 
                     */
                    void SetMaxDispatchTps(const uint64_t& _maxDispatchTps);

                    /**
                     * 判断参数 MaxDispatchTps 是否已赋值
                     * @return MaxDispatchTps 是否已赋值
                     * 
                     */
                    bool MaxDispatchTpsHasBeenSet() const;

                    /**
                     * 获取命名空间最大消费带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDispatchRateInBytes 命名空间最大消费带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxDispatchRateInBytes() const;

                    /**
                     * 设置命名空间最大消费带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDispatchRateInBytes 命名空间最大消费带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDispatchRateInBytes(const uint64_t& _maxDispatchRateInBytes);

                    /**
                     * 判断参数 MaxDispatchRateInBytes 是否已赋值
                     * @return MaxDispatchRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxDispatchRateInBytesHasBeenSet() const;

                    /**
                     * 获取命名空间最大生产带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPublishRateInBytes 命名空间最大生产带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxPublishRateInBytes() const;

                    /**
                     * 设置命名空间最大生产带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPublishRateInBytes 命名空间最大生产带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPublishRateInBytes(const uint64_t& _maxPublishRateInBytes);

                    /**
                     * 判断参数 MaxPublishRateInBytes 是否已赋值
                     * @return MaxPublishRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxPublishRateInBytesHasBeenSet() const;

                    /**
                     * 获取消息最大保留空间，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetentionSizeInMB 消息最大保留空间，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxRetentionSizeInMB() const;

                    /**
                     * 设置消息最大保留空间，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetentionSizeInMB 消息最大保留空间，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetentionSizeInMB(const uint64_t& _maxRetentionSizeInMB);

                    /**
                     * 判断参数 MaxRetentionSizeInMB 是否已赋值
                     * @return MaxRetentionSizeInMB 是否已赋值
                     * 
                     */
                    bool MaxRetentionSizeInMBHasBeenSet() const;

                    /**
                     * 获取public Access Enabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccessEnabled public Access Enabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置public Access Enabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccessEnabled public Access Enabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * 虚拟集群ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 虚拟集群名称
                     */
                    std::string m_tenantName;
                    bool m_tenantNameHasBeenSet;

                    /**
                     * 客户UIN
                     */
                    std::string m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * 客户的APPID
                     */
                    std::string m_customerAppId;
                    bool m_customerAppIdHasBeenSet;

                    /**
                     * 物理集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群协议类型，支持的值为TDMQ，ROCKETMQ，AMQP，CMQ
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命名空间配额
                     */
                    int64_t m_maxNamespaces;
                    bool m_maxNamespacesHasBeenSet;

                    /**
                     * 已使用命名空间配额
                     */
                    int64_t m_usedNamespaces;
                    bool m_usedNamespacesHasBeenSet;

                    /**
                     * Topic配额
                     */
                    int64_t m_maxTopics;
                    bool m_maxTopicsHasBeenSet;

                    /**
                     * 已使用Topic配额
                     */
                    int64_t m_usedTopics;
                    bool m_usedTopicsHasBeenSet;

                    /**
                     * Topic分区数配额
                     */
                    int64_t m_maxPartitions;
                    bool m_maxPartitionsHasBeenSet;

                    /**
                     * 已使用Topic分区数配额
                     */
                    int64_t m_usedPartitions;
                    bool m_usedPartitionsHasBeenSet;

                    /**
                     * 存储配额, byte为单位
                     */
                    uint64_t m_maxMsgBacklogSize;
                    bool m_maxMsgBacklogSizeHasBeenSet;

                    /**
                     * 命名空间最大生产TPS
                     */
                    uint64_t m_maxPublishTps;
                    bool m_maxPublishTpsHasBeenSet;

                    /**
                     * 消息最大保留时间，秒为单位
                     */
                    uint64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * 创建时间，毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间，毫秒为单位
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 命名空间最大消费TPS
                     */
                    uint64_t m_maxDispatchTps;
                    bool m_maxDispatchTpsHasBeenSet;

                    /**
                     * 命名空间最大消费带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxDispatchRateInBytes;
                    bool m_maxDispatchRateInBytesHasBeenSet;

                    /**
                     * 命名空间最大生产带宽，byte为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxPublishRateInBytes;
                    bool m_maxPublishRateInBytesHasBeenSet;

                    /**
                     * 消息最大保留空间，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxRetentionSizeInMB;
                    bool m_maxRetentionSizeInMBHasBeenSet;

                    /**
                     * public Access Enabled
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_INTERNALTENANT_H_
