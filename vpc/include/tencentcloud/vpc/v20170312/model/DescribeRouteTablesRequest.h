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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_

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
                * DescribeRouteTables请求参数结构体
                */
                class DescribeRouteTablesRequest : public AbstractModel
                {
                public:
                    DescribeRouteTablesRequest();
                    ~DescribeRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，参数不支持同时指定RouteTableIds和Filters。
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>route-table-name - String - （过滤条件）路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>association.main - String - （过滤条件）是否主路由表。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
LOCAL: 本地路由
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
CCN：云联网；
LOCAL_GATEWAY：本地网关。
</li>
                     * @return Filters 过滤条件，参数不支持同时指定RouteTableIds和Filters。
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>route-table-name - String - （过滤条件）路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>association.main - String - （过滤条件）是否主路由表。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
LOCAL: 本地路由
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
CCN：云联网；
LOCAL_GATEWAY：本地网关。
</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定RouteTableIds和Filters。
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>route-table-name - String - （过滤条件）路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>association.main - String - （过滤条件）是否主路由表。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
LOCAL: 本地路由
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
CCN：云联网；
LOCAL_GATEWAY：本地网关。
</li>
                     * @param _filters 过滤条件，参数不支持同时指定RouteTableIds和Filters。
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>route-table-name - String - （过滤条件）路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>association.main - String - （过滤条件）是否主路由表。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
LOCAL: 本地路由
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
CCN：云联网；
LOCAL_GATEWAY：本地网关。
</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取路由表实例ID，例如：rtb-azd4dt1c。
                     * @return RouteTableIds 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    std::vector<std::string> GetRouteTableIds() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-azd4dt1c。
                     * @param _routeTableIds 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    void SetRouteTableIds(const std::vector<std::string>& _routeTableIds);

                    /**
                     * 判断参数 RouteTableIds 是否已赋值
                     * @return RouteTableIds 是否已赋值
                     * 
                     */
                    bool RouteTableIdsHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否需要获取路由策略信息，默认获取，当控制台不需要拉取路由策略信息时，改为False。
                     * @return NeedRouterInfo 是否需要获取路由策略信息，默认获取，当控制台不需要拉取路由策略信息时，改为False。
                     * 
                     */
                    bool GetNeedRouterInfo() const;

                    /**
                     * 设置是否需要获取路由策略信息，默认获取，当控制台不需要拉取路由策略信息时，改为False。
                     * @param _needRouterInfo 是否需要获取路由策略信息，默认获取，当控制台不需要拉取路由策略信息时，改为False。
                     * 
                     */
                    void SetNeedRouterInfo(const bool& _needRouterInfo);

                    /**
                     * 判断参数 NeedRouterInfo 是否已赋值
                     * @return NeedRouterInfo 是否已赋值
                     * 
                     */
                    bool NeedRouterInfoHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，参数不支持同时指定RouteTableIds和Filters。
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>route-table-name - String - （过滤条件）路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>association.main - String - （过滤条件）是否主路由表。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
LOCAL: 本地路由
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
CCN：云联网；
LOCAL_GATEWAY：本地网关。
</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::vector<std::string> m_routeTableIds;
                    bool m_routeTableIdsHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否需要获取路由策略信息，默认获取，当控制台不需要拉取路由策略信息时，改为False。
                     */
                    bool m_needRouterInfo;
                    bool m_needRouterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_
