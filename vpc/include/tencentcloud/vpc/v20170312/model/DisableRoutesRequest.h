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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_

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
                * DisableRoutes请求参数结构体
                */
                class DisableRoutesRequest : public AbstractModel
                {
                public:
                    DisableRoutesRequest();
                    ~DisableRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表唯一ID。
                     * @return RouteTableId 路由表唯一ID。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表唯一ID。
                     * @param _routeTableId 路由表唯一ID。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取路由策略ID。不能和RouteItemIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * @return RouteIds 路由策略ID。不能和RouteItemIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * 
                     */
                    std::vector<uint64_t> GetRouteIds() const;

                    /**
                     * 设置路由策略ID。不能和RouteItemIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * @param _routeIds 路由策略ID。不能和RouteItemIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * 
                     */
                    void SetRouteIds(const std::vector<uint64_t>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                    /**
                     * 获取路由策略唯一ID。不能和RouteIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * @return RouteItemIds 路由策略唯一ID。不能和RouteIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * 
                     */
                    std::vector<std::string> GetRouteItemIds() const;

                    /**
                     * 设置路由策略唯一ID。不能和RouteIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * @param _routeItemIds 路由策略唯一ID。不能和RouteIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     * 
                     */
                    void SetRouteItemIds(const std::vector<std::string>& _routeItemIds);

                    /**
                     * 判断参数 RouteItemIds 是否已赋值
                     * @return RouteItemIds 是否已赋值
                     * 
                     */
                    bool RouteItemIdsHasBeenSet() const;

                private:

                    /**
                     * 路由表唯一ID。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由策略ID。不能和RouteItemIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     */
                    std::vector<uint64_t> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                    /**
                     * 路由策略唯一ID。不能和RouteIds同时使用，但至少输入一个。该参数取值可通过查询路由列表（[DescribeRouteTables](https://cloud.tencent.com/document/product/215/15763)）获取。
                     */
                    std::vector<std::string> m_routeItemIds;
                    bool m_routeItemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_
