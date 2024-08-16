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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceIds 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceIds 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取过滤器列表。
<li>instance-name</li>按照【实例名称】进行过滤。
类型：String
必选：否
<li>private-ip-address</li>按照【实例主网卡的内网 IP】进行过滤。
类型：String
必选：否
<li>public-ip-address</li>按照【实例主网卡的公网 IP】进行过滤。
类型：String
必选：否
<li>zone</li>按照【可用区】进行过滤。
类型：String
必选：否
<li>instance-state</li>按照【实例状态】进行过滤。
类型：String
必选：否
<li>tag-key</li>按照【标签键】进行过滤。
类型：String
必选：否
<li>tag-value</li>按照【标签值】进行过滤。
类型：String
必选：否
<li> tag:tag-key</li>按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 InstanceIds 和 Filters。
                     * @return Filters 过滤器列表。
<li>instance-name</li>按照【实例名称】进行过滤。
类型：String
必选：否
<li>private-ip-address</li>按照【实例主网卡的内网 IP】进行过滤。
类型：String
必选：否
<li>public-ip-address</li>按照【实例主网卡的公网 IP】进行过滤。
类型：String
必选：否
<li>zone</li>按照【可用区】进行过滤。
类型：String
必选：否
<li>instance-state</li>按照【实例状态】进行过滤。
类型：String
必选：否
<li>tag-key</li>按照【标签键】进行过滤。
类型：String
必选：否
<li>tag-value</li>按照【标签值】进行过滤。
类型：String
必选：否
<li> tag:tag-key</li>按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 InstanceIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>instance-name</li>按照【实例名称】进行过滤。
类型：String
必选：否
<li>private-ip-address</li>按照【实例主网卡的内网 IP】进行过滤。
类型：String
必选：否
<li>public-ip-address</li>按照【实例主网卡的公网 IP】进行过滤。
类型：String
必选：否
<li>zone</li>按照【可用区】进行过滤。
类型：String
必选：否
<li>instance-state</li>按照【实例状态】进行过滤。
类型：String
必选：否
<li>tag-key</li>按照【标签键】进行过滤。
类型：String
必选：否
<li>tag-value</li>按照【标签值】进行过滤。
类型：String
必选：否
<li> tag:tag-key</li>按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 InstanceIds 和 Filters。
                     * @param _filters 过滤器列表。
<li>instance-name</li>按照【实例名称】进行过滤。
类型：String
必选：否
<li>private-ip-address</li>按照【实例主网卡的内网 IP】进行过滤。
类型：String
必选：否
<li>public-ip-address</li>按照【实例主网卡的公网 IP】进行过滤。
类型：String
必选：否
<li>zone</li>按照【可用区】进行过滤。
类型：String
必选：否
<li>instance-state</li>按照【实例状态】进行过滤。
类型：String
必选：否
<li>tag-key</li>按照【标签键】进行过滤。
类型：String
必选：否
<li>tag-value</li>按照【标签值】进行过滤。
类型：String
必选：否
<li> tag:tag-key</li>按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 InstanceIds 和 Filters。
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
                     * 获取偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
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
                     * 获取返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取指定排序字段 。取值范围： "EXPIRED_TIME"：依据实例的到期时间排序。 
 不传入此字段时, 优先返回实例状态为“待回收”的实例, 其余实例以“创建时间”倒序返回。
                     * @return OrderField 指定排序字段 。取值范围： "EXPIRED_TIME"：依据实例的到期时间排序。 
 不传入此字段时, 优先返回实例状态为“待回收”的实例, 其余实例以“创建时间”倒序返回。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置指定排序字段 。取值范围： "EXPIRED_TIME"：依据实例的到期时间排序。 
 不传入此字段时, 优先返回实例状态为“待回收”的实例, 其余实例以“创建时间”倒序返回。
                     * @param _orderField 指定排序字段 。取值范围： "EXPIRED_TIME"：依据实例的到期时间排序。 
 不传入此字段时, 优先返回实例状态为“待回收”的实例, 其余实例以“创建时间”倒序返回。
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
                     * 获取输出实例列表的排列顺序。取值范围：
"ASC"：升序排列。
"DESC"：降序排列。
默认按升序排序。当传入该字段时，必须指定OrderField。
                     * @return Order 输出实例列表的排列顺序。取值范围：
"ASC"：升序排列。
"DESC"：降序排列。
默认按升序排序。当传入该字段时，必须指定OrderField。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出实例列表的排列顺序。取值范围：
"ASC"：升序排列。
"DESC"：降序排列。
默认按升序排序。当传入该字段时，必须指定OrderField。
                     * @param _order 输出实例列表的排列顺序。取值范围：
"ASC"：升序排列。
"DESC"：降序排列。
默认按升序排序。当传入该字段时，必须指定OrderField。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 过滤器列表。
<li>instance-name</li>按照【实例名称】进行过滤。
类型：String
必选：否
<li>private-ip-address</li>按照【实例主网卡的内网 IP】进行过滤。
类型：String
必选：否
<li>public-ip-address</li>按照【实例主网卡的公网 IP】进行过滤。
类型：String
必选：否
<li>zone</li>按照【可用区】进行过滤。
类型：String
必选：否
<li>instance-state</li>按照【实例状态】进行过滤。
类型：String
必选：否
<li>tag-key</li>按照【标签键】进行过滤。
类型：String
必选：否
<li>tag-value</li>按照【标签值】进行过滤。
类型：String
必选：否
<li> tag:tag-key</li>按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 InstanceIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定排序字段 。取值范围： "EXPIRED_TIME"：依据实例的到期时间排序。 
 不传入此字段时, 优先返回实例状态为“待回收”的实例, 其余实例以“创建时间”倒序返回。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 输出实例列表的排列顺序。取值范围：
"ASC"：升序排列。
"DESC"：降序排列。
默认按升序排序。当传入该字段时，必须指定OrderField。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_
