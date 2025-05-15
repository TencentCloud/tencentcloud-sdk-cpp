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
                     * 获取私用网络唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * @return VpcId 私用网络唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * @param _vpcId 私用网络唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取流日志唯一ID。
                     * @return FlowLogId 流日志唯一ID。
                     * 
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID。
                     * @param _flowLogId 流日志唯一ID。
                     * 
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     * 
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取流日志实例名字。
                     * @return FlowLogName 流日志实例名字。
                     * 
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名字。
                     * @param _flowLogName 流日志实例名字。
                     * 
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     * 
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取流日志所属资源类型：VPC(私有网络)，SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。
                     * @return ResourceType 流日志所属资源类型：VPC(私有网络)，SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置流日志所属资源类型：VPC(私有网络)，SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。
                     * @param _resourceType 流日志所属资源类型：VPC(私有网络)，SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源唯一ID。
                     * @return ResourceId 资源唯一ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一ID。
                     * @param _resourceId 资源唯一ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取流日志采集类型，ACCEPT（允许），REJECT（拒绝），ALL（全部）。
                     * @return TrafficType 流日志采集类型，ACCEPT（允许），REJECT（拒绝），ALL（全部）。
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流日志采集类型，ACCEPT（允许），REJECT（拒绝），ALL（全部）。
                     * @param _trafficType 流日志采集类型，ACCEPT（允许），REJECT（拒绝），ALL（全部）。
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取流日志存储ID。
                     * @return CloudLogId 流日志存储ID。
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置流日志存储ID。
                     * @param _cloudLogId 流日志存储ID。
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取流日志存储ID状态。SUCCESS（成功），DELETED（删除）。
                     * @return CloudLogState 流日志存储ID状态。SUCCESS（成功），DELETED（删除）。
                     * 
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置流日志存储ID状态。SUCCESS（成功），DELETED（删除）。
                     * @param _cloudLogState 流日志存储ID状态。SUCCESS（成功），DELETED（删除）。
                     * 
                     */
                    void SetCloudLogState(const std::string& _cloudLogState);

                    /**
                     * 判断参数 CloudLogState 是否已赋值
                     * @return CloudLogState 是否已赋值
                     * 
                     */
                    bool CloudLogStateHasBeenSet() const;

                    /**
                     * 获取流日志描述信息。
                     * @return FlowLogDescription 流日志描述信息。
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置流日志描述信息。
                     * @param _flowLogDescription 流日志描述信息。
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                    /**
                     * 获取流日志创建时间。
                     * @return CreatedTime 流日志创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置流日志创建时间。
                     * @param _createdTime 流日志创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return TagSet 标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tagSet 标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取是否启用，true-启用，false-停用。
                     * @return Enable 是否启用，true-启用，false-停用。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用，true-启用，false-停用。
                     * @param _enable 是否启用，true-启用，false-停用。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取消费端类型：cls、ckafka。
                     * @return StorageType 消费端类型：cls、ckafka。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置消费端类型：cls、ckafka。
                     * @param _storageType 消费端类型：cls、ckafka。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取消费端信息，当消费端类型为ckafka时返回。
                     * @return FlowLogStorage 消费端信息，当消费端类型为ckafka时返回。
                     * 
                     */
                    FlowLogStorage GetFlowLogStorage() const;

                    /**
                     * 设置消费端信息，当消费端类型为ckafka时返回。
                     * @param _flowLogStorage 消费端信息，当消费端类型为ckafka时返回。
                     * 
                     */
                    void SetFlowLogStorage(const FlowLogStorage& _flowLogStorage);

                    /**
                     * 判断参数 FlowLogStorage 是否已赋值
                     * @return FlowLogStorage 是否已赋值
                     * 
                     */
                    bool FlowLogStorageHasBeenSet() const;

                    /**
                     * 获取流日志存储ID对应的地域信息。
                     * @return CloudLogRegion 流日志存储ID对应的地域信息。
                     * 
                     */
                    std::string GetCloudLogRegion() const;

                    /**
                     * 设置流日志存储ID对应的地域信息。
                     * @param _cloudLogRegion 流日志存储ID对应的地域信息。
                     * 
                     */
                    void SetCloudLogRegion(const std::string& _cloudLogRegion);

                    /**
                     * 判断参数 CloudLogRegion 是否已赋值
                     * @return CloudLogRegion 是否已赋值
                     * 
                     */
                    bool CloudLogRegionHasBeenSet() const;

                private:

                    /**
                     * 私用网络唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
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
                     * 流日志所属资源类型：VPC(私有网络)，SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源唯一ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 流日志采集类型，ACCEPT（允许），REJECT（拒绝），ALL（全部）。
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 流日志存储ID。
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * 流日志存储ID状态。SUCCESS（成功），DELETED（删除）。
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
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 消费端信息，当消费端类型为ckafka时返回。
                     */
                    FlowLogStorage m_flowLogStorage;
                    bool m_flowLogStorageHasBeenSet;

                    /**
                     * 流日志存储ID对应的地域信息。
                     */
                    std::string m_cloudLogRegion;
                    bool m_cloudLogRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_
