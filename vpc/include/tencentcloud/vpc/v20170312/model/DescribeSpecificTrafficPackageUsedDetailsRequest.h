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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESPECIFICTRAFFICPACKAGEUSEDDETAILSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESPECIFICTRAFFICPACKAGEUSEDDETAILSREQUEST_H_

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
                * DescribeSpecificTrafficPackageUsedDetails请求参数结构体
                */
                class DescribeSpecificTrafficPackageUsedDetailsRequest : public AbstractModel
                {
                public:
                    DescribeSpecificTrafficPackageUsedDetailsRequest();
                    ~DescribeSpecificTrafficPackageUsedDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享流量包唯一ID。可以使用[DescribeTrafficPackages](https://cloud.tencent.com/document/product/215/80090?locationSource=from%3Ddoc-search%26scope%3Dcurrent%26keyword%3D%E6%B5%81%E9%87%8F%E5%8C%85)接口获取TrafficPackageId。
                     * @return TrafficPackageId 共享流量包唯一ID。可以使用[DescribeTrafficPackages](https://cloud.tencent.com/document/product/215/80090?locationSource=from%3Ddoc-search%26scope%3Dcurrent%26keyword%3D%E6%B5%81%E9%87%8F%E5%8C%85)接口获取TrafficPackageId。
                     * 
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置共享流量包唯一ID。可以使用[DescribeTrafficPackages](https://cloud.tencent.com/document/product/215/80090?locationSource=from%3Ddoc-search%26scope%3Dcurrent%26keyword%3D%E6%B5%81%E9%87%8F%E5%8C%85)接口获取TrafficPackageId。
                     * @param _trafficPackageId 共享流量包唯一ID。可以使用[DescribeTrafficPackages](https://cloud.tencent.com/document/product/215/80090?locationSource=from%3Ddoc-search%26scope%3Dcurrent%26keyword%3D%E6%B5%81%E9%87%8F%E5%8C%85)接口获取TrafficPackageId。
                     * 
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。详细的过滤条件如下：<ul style="margin:0"><li> resource-type - String - 是否必填：否 - （过滤条件）按照资源类型过滤，资源类型包括 EIP、BWP、LB。 </li>
<li> resource-id - String - 是否必填：否 - （过滤条件）按照抵扣流量资源的唯一 ID 过滤。以下补充资源ID获取方式：<ul><li>EIP：可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取资源ID。</li>
<li>BWP：可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口获取资源ID。</li>
<li>LB：可以使用[DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685)接口获取资源ID。</li></ul></li></ul>
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。详细的过滤条件如下：<ul style="margin:0"><li> resource-type - String - 是否必填：否 - （过滤条件）按照资源类型过滤，资源类型包括 EIP、BWP、LB。 </li>
<li> resource-id - String - 是否必填：否 - （过滤条件）按照抵扣流量资源的唯一 ID 过滤。以下补充资源ID获取方式：<ul><li>EIP：可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取资源ID。</li>
<li>BWP：可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口获取资源ID。</li>
<li>LB：可以使用[DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685)接口获取资源ID。</li></ul></li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。详细的过滤条件如下：<ul style="margin:0"><li> resource-type - String - 是否必填：否 - （过滤条件）按照资源类型过滤，资源类型包括 EIP、BWP、LB。 </li>
<li> resource-id - String - 是否必填：否 - （过滤条件）按照抵扣流量资源的唯一 ID 过滤。以下补充资源ID获取方式：<ul><li>EIP：可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取资源ID。</li>
<li>BWP：可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口获取资源ID。</li>
<li>LB：可以使用[DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685)接口获取资源ID。</li></ul></li></ul>
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。详细的过滤条件如下：<ul style="margin:0"><li> resource-type - String - 是否必填：否 - （过滤条件）按照资源类型过滤，资源类型包括 EIP、BWP、LB。 </li>
<li> resource-id - String - 是否必填：否 - （过滤条件）按照抵扣流量资源的唯一 ID 过滤。以下补充资源ID获取方式：<ul><li>EIP：可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取资源ID。</li>
<li>BWP：可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口获取资源ID。</li>
<li>LB：可以使用[DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685)接口获取资源ID。</li></ul></li></ul>
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
                     * 获取排序条件。该参数仅支持根据抵扣量排序，传值为 deduction
                     * @return OrderField 排序条件。该参数仅支持根据抵扣量排序，传值为 deduction
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序条件。该参数仅支持根据抵扣量排序，传值为 deduction
                     * @param _orderField 排序条件。该参数仅支持根据抵扣量排序，传值为 deduction
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
                     * 获取排序类型，仅支持0和1，0-降序，1-升序。不传默认为0
                     * @return OrderType 排序类型，仅支持0和1，0-降序，1-升序。不传默认为0
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序类型，仅支持0和1，0-降序，1-升序。不传默认为0
                     * @param _orderType 排序类型，仅支持0和1，0-降序，1-升序。不传默认为0
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取开始时间。待查询的共享流量包用量开始时间。不传默认为当前时间往前推30天。
时间格式：YYYY-MM-DD hh:mm:ss
                     * @return StartTime 开始时间。待查询的共享流量包用量开始时间。不传默认为当前时间往前推30天。
时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。待查询的共享流量包用量开始时间。不传默认为当前时间往前推30天。
时间格式：YYYY-MM-DD hh:mm:ss
                     * @param _startTime 开始时间。待查询的共享流量包用量开始时间。不传默认为当前时间往前推30天。
时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。待查询的共享流量包用量结束时间。不传默认为当前时间。
时间格式：YYYY-MM-DD hh:mm:ss
                     * @return EndTime 结束时间。待查询的共享流量包用量结束时间。不传默认为当前时间。
时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。待查询的共享流量包用量结束时间。不传默认为当前时间。
时间格式：YYYY-MM-DD hh:mm:ss
                     * @param _endTime 结束时间。待查询的共享流量包用量结束时间。不传默认为当前时间。
时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 中的相关小节
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 中的相关小节
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 中的相关小节
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 中的相关小节
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20。关于Limit的更进一步介绍请参考 API 中的相关小节。
                     * @return Limit 返回数量，默认为20。关于Limit的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20。关于Limit的更进一步介绍请参考 API 中的相关小节。
                     * @param _limit 返回数量，默认为20。关于Limit的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 共享流量包唯一ID。可以使用[DescribeTrafficPackages](https://cloud.tencent.com/document/product/215/80090?locationSource=from%3Ddoc-search%26scope%3Dcurrent%26keyword%3D%E6%B5%81%E9%87%8F%E5%8C%85)接口获取TrafficPackageId。
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。详细的过滤条件如下：<ul style="margin:0"><li> resource-type - String - 是否必填：否 - （过滤条件）按照资源类型过滤，资源类型包括 EIP、BWP、LB。 </li>
<li> resource-id - String - 是否必填：否 - （过滤条件）按照抵扣流量资源的唯一 ID 过滤。以下补充资源ID获取方式：<ul><li>EIP：可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取资源ID。</li>
<li>BWP：可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口获取资源ID。</li>
<li>LB：可以使用[DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685)接口获取资源ID。</li></ul></li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序条件。该参数仅支持根据抵扣量排序，传值为 deduction
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序类型，仅支持0和1，0-降序，1-升序。不传默认为0
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 开始时间。待查询的共享流量包用量开始时间。不传默认为当前时间往前推30天。
时间格式：YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。待查询的共享流量包用量结束时间。不传默认为当前时间。
时间格式：YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 中的相关小节
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20。关于Limit的更进一步介绍请参考 API 中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESPECIFICTRAFFICPACKAGEUSEDDETAILSREQUEST_H_
