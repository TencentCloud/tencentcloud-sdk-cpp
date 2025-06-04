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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateFlowLog请求参数结构体
                */
                class CreateFlowLogRequest : public AbstractModel
                {
                public:
                    CreateFlowLogRequest();
                    ~CreateFlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流日志实例名称。长度为不超过60个字符。
                     * @return FlowLogName 流日志实例名称。长度为不超过60个字符。
                     * 
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名称。长度为不超过60个字符。
                     * @param _flowLogName 流日志实例名称。长度为不超过60个字符。
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
                     * 获取流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。当选择VPC，SUBNET，CCN，DCG时，请通过工单加入白名单。
                     * @return ResourceType 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。当选择VPC，SUBNET，CCN，DCG时，请通过工单加入白名单。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。当选择VPC，SUBNET，CCN，DCG时，请通过工单加入白名单。
                     * @param _resourceType 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。当选择VPC，SUBNET，CCN，DCG时，请通过工单加入白名单。
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
                     * 获取私用网络唯一ID。当ResourceType为CCN时不填，其他类型必填。
                     * @return VpcId 私用网络唯一ID。当ResourceType为CCN时不填，其他类型必填。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络唯一ID。当ResourceType为CCN时不填，其他类型必填。
                     * @param _vpcId 私用网络唯一ID。当ResourceType为CCN时不填，其他类型必填。
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
                     * 获取流日志实例描述。长度不超过512个字符。
                     * @return FlowLogDescription 流日志实例描述。长度不超过512个字符。
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置流日志实例描述。长度不超过512个字符。
                     * @param _flowLogDescription 流日志实例描述。长度不超过512个字符。
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
                     * 获取流日志存储ID（cls的日志主题ID，
可通过[DescribeTopics](https://cloud.tencent.com/document/product/614/56454)接口获取）。当StorageType为cls时，CloudLogId为必选。
                     * @return CloudLogId 流日志存储ID（cls的日志主题ID，
可通过[DescribeTopics](https://cloud.tencent.com/document/product/614/56454)接口获取）。当StorageType为cls时，CloudLogId为必选。
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置流日志存储ID（cls的日志主题ID，
可通过[DescribeTopics](https://cloud.tencent.com/document/product/614/56454)接口获取）。当StorageType为cls时，CloudLogId为必选。
                     * @param _cloudLogId 流日志存储ID（cls的日志主题ID，
可通过[DescribeTopics](https://cloud.tencent.com/document/product/614/56454)接口获取）。当StorageType为cls时，CloudLogId为必选。
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
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取消费端类型：cls、ckafka。默认值cls。当选择ckafka时，请通过工单加入白名单。
                     * @return StorageType 消费端类型：cls、ckafka。默认值cls。当选择ckafka时，请通过工单加入白名单。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置消费端类型：cls、ckafka。默认值cls。当选择ckafka时，请通过工单加入白名单。
                     * @param _storageType 消费端类型：cls、ckafka。默认值cls。当选择ckafka时，请通过工单加入白名单。
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
                     * 获取流日志消费端信息，当消费端类型为ckafka时，必填。
                     * @return FlowLogStorage 流日志消费端信息，当消费端类型为ckafka时，必填。
                     * 
                     */
                    FlowLogStorage GetFlowLogStorage() const;

                    /**
                     * 设置流日志消费端信息，当消费端类型为ckafka时，必填。
                     * @param _flowLogStorage 流日志消费端信息，当消费端类型为ckafka时，必填。
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
                     * 获取流日志存储ID对应的地域，不传递默认为本地域。
                     * @return CloudLogRegion 流日志存储ID对应的地域，不传递默认为本地域。
                     * 
                     */
                    std::string GetCloudLogRegion() const;

                    /**
                     * 设置流日志存储ID对应的地域，不传递默认为本地域。
                     * @param _cloudLogRegion 流日志存储ID对应的地域，不传递默认为本地域。
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
                     * 流日志实例名称。长度为不超过60个字符。
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。当选择VPC，SUBNET，CCN，DCG时，请通过工单加入白名单。
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
                     * 私用网络唯一ID。当ResourceType为CCN时不填，其他类型必填。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流日志实例描述。长度不超过512个字符。
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * 流日志存储ID（cls的日志主题ID，
可通过[DescribeTopics](https://cloud.tencent.com/document/product/614/56454)接口获取）。当StorageType为cls时，CloudLogId为必选。
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消费端类型：cls、ckafka。默认值cls。当选择ckafka时，请通过工单加入白名单。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 流日志消费端信息，当消费端类型为ckafka时，必填。
                     */
                    FlowLogStorage m_flowLogStorage;
                    bool m_flowLogStorageHasBeenSet;

                    /**
                     * 流日志存储ID对应的地域，不传递默认为本地域。
                     */
                    std::string m_cloudLogRegion;
                    bool m_cloudLogRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
