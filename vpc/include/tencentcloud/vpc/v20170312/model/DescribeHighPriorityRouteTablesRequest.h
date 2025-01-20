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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTETABLESREQUEST_H_

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
                * DescribeHighPriorityRouteTables请求参数结构体
                */
                class DescribeHighPriorityRouteTablesRequest : public AbstractModel
                {
                public:
                    DescribeHighPriorityRouteTablesRequest();
                    ~DescribeHighPriorityRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，参数不支持同时指定HighPriorityRouteTableIds和Filters。
<li>high-priority-route-table-id - String - （过滤条件）高优路由表实例ID。</li>
<li>name - String - （过滤条件）高优路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
HAVIP：高可用虚拟IP；
NORMAL_CVM：普通云服务器；
</li>
                     * @return Filters 过滤条件，参数不支持同时指定HighPriorityRouteTableIds和Filters。
<li>high-priority-route-table-id - String - （过滤条件）高优路由表实例ID。</li>
<li>name - String - （过滤条件）高优路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
HAVIP：高可用虚拟IP；
NORMAL_CVM：普通云服务器；
</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定HighPriorityRouteTableIds和Filters。
<li>high-priority-route-table-id - String - （过滤条件）高优路由表实例ID。</li>
<li>name - String - （过滤条件）高优路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
HAVIP：高可用虚拟IP；
NORMAL_CVM：普通云服务器；
</li>
                     * @param _filters 过滤条件，参数不支持同时指定HighPriorityRouteTableIds和Filters。
<li>high-priority-route-table-id - String - （过滤条件）高优路由表实例ID。</li>
<li>name - String - （过滤条件）高优路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
HAVIP：高可用虚拟IP；
NORMAL_CVM：普通云服务器；
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
                     * 获取高优路由表实例ID，例如：hprtb-18mot1fm。
                     * @return HighPriorityRouteTableIds 高优路由表实例ID，例如：hprtb-18mot1fm。
                     * 
                     */
                    std::vector<std::string> GetHighPriorityRouteTableIds() const;

                    /**
                     * 设置高优路由表实例ID，例如：hprtb-18mot1fm。
                     * @param _highPriorityRouteTableIds 高优路由表实例ID，例如：hprtb-18mot1fm。
                     * 
                     */
                    void SetHighPriorityRouteTableIds(const std::vector<std::string>& _highPriorityRouteTableIds);

                    /**
                     * 判断参数 HighPriorityRouteTableIds 是否已赋值
                     * @return HighPriorityRouteTableIds 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableIdsHasBeenSet() const;

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
                     * 过滤条件，参数不支持同时指定HighPriorityRouteTableIds和Filters。
<li>high-priority-route-table-id - String - （过滤条件）高优路由表实例ID。</li>
<li>name - String - （过滤条件）高优路由表名称。</li>
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>tag-key - String -是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li>next-hop-type - String - 是否必填：否 - （过滤条件）按下一跳类型进行过滤。使用next-hop-type进行过滤时，必须同时携带route-table-id与vpc-id。
目前我们支持的类型有：
HAVIP：高可用虚拟IP；
NORMAL_CVM：普通云服务器；
</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 高优路由表实例ID，例如：hprtb-18mot1fm。
                     */
                    std::vector<std::string> m_highPriorityRouteTableIds;
                    bool m_highPriorityRouteTableIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTETABLESREQUEST_H_
