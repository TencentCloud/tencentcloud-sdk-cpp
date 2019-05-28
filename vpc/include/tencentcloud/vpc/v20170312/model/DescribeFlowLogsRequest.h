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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeFlowLogs请求参数结构体
                */
                class DescribeFlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeFlowLogsRequest();
                    ~DescribeFlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私用网络ID或者统一ID，建议使用统一ID
                     * @return VpcId 私用网络ID或者统一ID，建议使用统一ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络ID或者统一ID，建议使用统一ID
                     * @param VpcId 私用网络ID或者统一ID，建议使用统一ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取流日志唯一ID
                     * @return FlowLogId 流日志唯一ID
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID
                     * @param FlowLogId 流日志唯一ID
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取流日志实例名字
                     * @return FlowLogName 流日志实例名字
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名字
                     * @param FlowLogName 流日志实例名字
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE
                     * @return ResourceType 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE
                     * @param ResourceType 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源唯一ID
                     * @return ResourceId 资源唯一ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一ID
                     * @param ResourceId 资源唯一ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取流日志采集类型，ACCEPT|REJECT|ALL
                     * @return TrafficType 流日志采集类型，ACCEPT|REJECT|ALL
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流日志采集类型，ACCEPT|REJECT|ALL
                     * @param TrafficType 流日志采集类型，ACCEPT|REJECT|ALL
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取流日志存储ID
                     * @return CloudLogId 流日志存储ID
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置流日志存储ID
                     * @param CloudLogId 流日志存储ID
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取流日志存储ID状态
                     * @return CloudLogState 流日志存储ID状态
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置流日志存储ID状态
                     * @param CloudLogState 流日志存储ID状态
                     */
                    void SetCloudLogState(const std::string& _cloudLogState);

                    /**
                     * 判断参数 CloudLogState 是否已赋值
                     * @return CloudLogState 是否已赋值
                     */
                    bool CloudLogStateHasBeenSet() const;

                    /**
                     * 获取按某个字段排序,支持字段：flowLogName,createTime，默认按createTime
                     * @return OrderField 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置按某个字段排序,支持字段：flowLogName,createTime，默认按createTime
                     * @param OrderField 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取升序（asc）还是降序（desc）,默认：desc
                     * @return OrderDirection 升序（asc）还是降序（desc）,默认：desc
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置升序（asc）还是降序（desc）,默认：desc
                     * @param OrderDirection 升序（asc）还是降序（desc）,默认：desc
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页行数，默认为10
                     * @return Limit 每页行数，默认为10
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页行数，默认为10
                     * @param Limit 每页行数，默认为10
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 私用网络ID或者统一ID，建议使用统一ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流日志唯一ID
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * 流日志实例名字
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * 流日志所属资源类型，VPC|SUBNET|NETWORKINTERFACE
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源唯一ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 流日志采集类型，ACCEPT|REJECT|ALL
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 流日志存储ID
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * 流日志存储ID状态
                     */
                    std::string m_cloudLogState;
                    bool m_cloudLogStateHasBeenSet;

                    /**
                     * 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 升序（asc）还是降序（desc）,默认：desc
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页行数，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
