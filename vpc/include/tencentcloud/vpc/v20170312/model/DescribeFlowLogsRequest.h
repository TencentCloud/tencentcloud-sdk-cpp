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
#include <tencentcloud/vpc/v20170312/model/Filter.h>


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
                     * 获取流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建。
                     * @return FlowLogId 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建。
                     * 
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建。
                     * @param _flowLogId 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建。
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
                     * 获取流日志实例名称。长度不超过60个字符。
                     * @return FlowLogName 流日志实例名称。长度不超过60个字符。
                     * 
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名称。长度不超过60个字符。
                     * @param _flowLogName 流日志实例名称。长度不超过60个字符。
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
                     * 获取流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。

                     * @return ResourceType 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。

                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。

                     * @param _resourceType 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。

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
                     * 获取流日志存储ID状态。SUCCESS（成功），DELETED（删除）
                     * @return CloudLogState 流日志存储ID状态。SUCCESS（成功），DELETED（删除）
                     * 
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置流日志存储ID状态。SUCCESS（成功），DELETED（删除）
                     * @param _cloudLogState 流日志存储ID状态。SUCCESS（成功），DELETED（删除）
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
                     * 获取按某个字段排序,支持字段：flowLogName,createTime，默认按createTime。
                     * @return OrderField 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置按某个字段排序,支持字段：flowLogName,createTime，默认按createTime。
                     * @param _orderField 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取升序（ASC）还是降序（DESC）,默认：DESC。
                     * @return OrderDirection 升序（ASC）还是降序（DESC）,默认：DESC。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置升序（ASC）还是降序（DESC）,默认：DESC。
                     * @param _orderDirection 升序（ASC）还是降序（DESC）,默认：DESC。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页行数，默认为10。范围1-100。
                     * @return Limit 每页行数，默认为10。范围1-100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页行数，默认为10。范围1-100。
                     * @param _limit 每页行数，默认为10。范围1-100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定FlowLogId和Filters。
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
                     * @return Filters 过滤条件，参数不支持同时指定FlowLogId和Filters。
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定FlowLogId和Filters。
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
                     * @param _filters 过滤条件，参数不支持同时指定FlowLogId和Filters。
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

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
                     * 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建。
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * 流日志实例名称。长度不超过60个字符。
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * 流日志所属资源类型，VPC（私有网络），SUBNET（子网），NETWORKINTERFACE（网卡），CCN（云联网），NAT（网络地址转化），DCG（专线网关）。

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
                     * 流日志存储ID状态。SUCCESS（成功），DELETED（删除）
                     */
                    std::string m_cloudLogState;
                    bool m_cloudLogStateHasBeenSet;

                    /**
                     * 按某个字段排序,支持字段：flowLogName,createTime，默认按createTime。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 升序（ASC）还是降序（DESC）,默认：DESC。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页行数，默认为10。范围1-100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定FlowLogId和Filters。
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
