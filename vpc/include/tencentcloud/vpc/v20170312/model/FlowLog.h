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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/FlowLogStorage.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流日志
                */
                class FlowLog : public AbstractModel
                {
                public:
                    FlowLog();
                    ~FlowLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私用网络ID或者统一ID，建议使用统一ID。
                     * @return VpcId 私用网络ID或者统一ID，建议使用统一ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络ID或者统一ID，建议使用统一ID。
                     * @param VpcId 私用网络ID或者统一ID，建议使用统一ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取流日志唯一ID。
                     * @return FlowLogId 流日志唯一ID。
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID。
                     * @param FlowLogId 流日志唯一ID。
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取流日志实例名字。
                     * @return FlowLogName 流日志实例名字。
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名字。
                     * @param FlowLogName 流日志实例名字。
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE|CCN|NAT|DCG。
                     * @return ResourceType 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE|CCN|NAT|DCG。
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE|CCN|NAT|DCG。
                     * @param ResourceType 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE|CCN|NAT|DCG。
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源唯一ID。
                     * @return ResourceId 资源唯一ID。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一ID。
                     * @param ResourceId 资源唯一ID。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取流日志采集类型，ACCEPT|REJECT|ALL。
                     * @return TrafficType 流日志采集类型，ACCEPT|REJECT|ALL。
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流日志采集类型，ACCEPT|REJECT|ALL。
                     * @param TrafficType 流日志采集类型，ACCEPT|REJECT|ALL。
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取流日志存储ID。
                     * @return CloudLogId 流日志存储ID。
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置流日志存储ID。
                     * @param CloudLogId 流日志存储ID。
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取流日志存储ID状态。
                     * @return CloudLogState 流日志存储ID状态。
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置流日志存储ID状态。
                     * @param CloudLogState 流日志存储ID状态。
                     */
                    void SetCloudLogState(const std::string& _cloudLogState);

                    /**
                     * 判断参数 CloudLogState 是否已赋值
                     * @return CloudLogState 是否已赋值
                     */
                    bool CloudLogStateHasBeenSet() const;

                    /**
                     * 获取流日志描述信息。
                     * @return FlowLogDescription 流日志描述信息。
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置流日志描述信息。
                     * @param FlowLogDescription 流日志描述信息。
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                    /**
                     * 获取流日志创建时间。
                     * @return CreatedTime 流日志创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置流日志创建时间。
                     * @param CreatedTime 流日志创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return TagSet 标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param TagSet 标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取是否启用，true-启用，false-停用。
                     * @return Enable 是否启用，true-启用，false-停用。
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用，true-启用，false-停用。
                     * @param Enable 是否启用，true-启用，false-停用。
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取消费端类型：cls、ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 消费端类型：cls、ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置消费端类型：cls、ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 消费端类型：cls、ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取消费端信息，当消费端类型为ckafka时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowLogStorage 消费端信息，当消费端类型为ckafka时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FlowLogStorage GetFlowLogStorage() const;

                    /**
                     * 设置消费端信息，当消费端类型为ckafka时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowLogStorage 消费端信息，当消费端类型为ckafka时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowLogStorage(const FlowLogStorage& _flowLogStorage);

                    /**
                     * 判断参数 FlowLogStorage 是否已赋值
                     * @return FlowLogStorage 是否已赋值
                     */
                    bool FlowLogStorageHasBeenSet() const;

                private:

                    /**
                     * 私用网络ID或者统一ID，建议使用统一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流日志唯一ID。
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * 流日志实例名字。
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE|CCN|NAT|DCG。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源唯一ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 流日志采集类型，ACCEPT|REJECT|ALL。
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 流日志存储ID。
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * 流日志存储ID状态。
                     */
                    std::string m_cloudLogState;
                    bool m_cloudLogStateHasBeenSet;

                    /**
                     * 流日志描述信息。
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * 流日志创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 是否启用，true-启用，false-停用。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 消费端类型：cls、ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 消费端信息，当消费端类型为ckafka时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FlowLogStorage m_flowLogStorage;
                    bool m_flowLogStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_
