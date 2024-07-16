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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_

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
                * DescribeHaVips请求参数结构体
                */
                class DescribeHaVipsRequest : public AbstractModel
                {
                public:
                    DescribeHaVipsRequest();
                    ~DescribeHaVipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`HAVIP`唯一`ID`，形如：`havip-9o233uri`。
                     * @return HaVipIds `HAVIP`唯一`ID`，形如：`havip-9o233uri`。
                     * 
                     */
                    std::vector<std::string> GetHaVipIds() const;

                    /**
                     * 设置`HAVIP`唯一`ID`，形如：`havip-9o233uri`。
                     * @param _haVipIds `HAVIP`唯一`ID`，形如：`havip-9o233uri`。
                     * 
                     */
                    void SetHaVipIds(const std::vector<std::string>& _haVipIds);

                    /**
                     * 判断参数 HaVipIds 是否已赋值
                     * @return HaVipIds 是否已赋值
                     * 
                     */
                    bool HaVipIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定`HaVipIds`和`Filters`。<li>havip-id - String - `HAVIP`唯一`ID`，形如：`havip-9o233uri`。</li><li>havip-name - String - `HAVIP`名称。</li><li>vpc-id - String - `HAVIP`所在私有网络`ID`。</li><li>subnet-id - String - `HAVIP`所在子网`ID`。</li><li>vip - String - `HAVIP`的地址`VIP`。</li><li>address-ip - String - `HAVIP`绑定的弹性公网`IP`。</li><li>havip-association.instance-id - String - `HAVIP`绑定的子机或网卡。</li><li>havip-association.instance-type - String - `HAVIP`绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li>
                     * @return Filters 过滤条件，参数不支持同时指定`HaVipIds`和`Filters`。<li>havip-id - String - `HAVIP`唯一`ID`，形如：`havip-9o233uri`。</li><li>havip-name - String - `HAVIP`名称。</li><li>vpc-id - String - `HAVIP`所在私有网络`ID`。</li><li>subnet-id - String - `HAVIP`所在子网`ID`。</li><li>vip - String - `HAVIP`的地址`VIP`。</li><li>address-ip - String - `HAVIP`绑定的弹性公网`IP`。</li><li>havip-association.instance-id - String - `HAVIP`绑定的子机或网卡。</li><li>havip-association.instance-type - String - `HAVIP`绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定`HaVipIds`和`Filters`。<li>havip-id - String - `HAVIP`唯一`ID`，形如：`havip-9o233uri`。</li><li>havip-name - String - `HAVIP`名称。</li><li>vpc-id - String - `HAVIP`所在私有网络`ID`。</li><li>subnet-id - String - `HAVIP`所在子网`ID`。</li><li>vip - String - `HAVIP`的地址`VIP`。</li><li>address-ip - String - `HAVIP`绑定的弹性公网`IP`。</li><li>havip-association.instance-id - String - `HAVIP`绑定的子机或网卡。</li><li>havip-association.instance-type - String - `HAVIP`绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li>
                     * @param _filters 过滤条件，参数不支持同时指定`HaVipIds`和`Filters`。<li>havip-id - String - `HAVIP`唯一`ID`，形如：`havip-9o233uri`。</li><li>havip-name - String - `HAVIP`名称。</li><li>vpc-id - String - `HAVIP`所在私有网络`ID`。</li><li>subnet-id - String - `HAVIP`所在子网`ID`。</li><li>vip - String - `HAVIP`的地址`VIP`。</li><li>address-ip - String - `HAVIP`绑定的弹性公网`IP`。</li><li>havip-association.instance-id - String - `HAVIP`绑定的子机或网卡。</li><li>havip-association.instance-type - String - `HAVIP`绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li>
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
                     * 获取返回数量，默认为20，最大值为100。

                     * @return Limit 返回数量，默认为20，最大值为100。

                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。

                     * @param _limit 返回数量，默认为20，最大值为100。

                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * `HAVIP`唯一`ID`，形如：`havip-9o233uri`。
                     */
                    std::vector<std::string> m_haVipIds;
                    bool m_haVipIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定`HaVipIds`和`Filters`。<li>havip-id - String - `HAVIP`唯一`ID`，形如：`havip-9o233uri`。</li><li>havip-name - String - `HAVIP`名称。</li><li>vpc-id - String - `HAVIP`所在私有网络`ID`。</li><li>subnet-id - String - `HAVIP`所在子网`ID`。</li><li>vip - String - `HAVIP`的地址`VIP`。</li><li>address-ip - String - `HAVIP`绑定的弹性公网`IP`。</li><li>havip-association.instance-id - String - `HAVIP`绑定的子机或网卡。</li><li>havip-association.instance-type - String - `HAVIP`绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。

                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_
