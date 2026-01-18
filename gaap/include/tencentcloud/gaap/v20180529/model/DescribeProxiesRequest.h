/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Filter.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxies请求参数结构体
                */
                class DescribeProxiesRequest : public AbstractModel
                {
                public:
                    DescribeProxiesRequest();
                    ~DescribeProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>（旧参数，请切换到ProxyIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * @return InstanceIds <p>（旧参数，请切换到ProxyIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>（旧参数，请切换到ProxyIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * @param _instanceIds <p>（旧参数，请切换到ProxyIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>过滤条件。 <br />每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定InstanceIds和Filters。 ProjectId - String - 是否必填：否 -（过滤条件）按照项目ID过滤。 <br />AccessRegion - String - 是否必填：否 - （过滤条件）按照接入地域过滤。  <br />RealServerRegion - String - 是否必填：否 - （过滤条件）按照源站地域过滤。GroupId - String - 是否必填：否 - （过滤条件）按照通道组ID过滤。IPAddressVersion - String - 是否必填：否 - （过滤条件）按照IP版本过滤。PackageType - String - 是否必填：否 - （过滤条件）按照通道套餐类型过滤。</p>
                     * @return Filters <p>过滤条件。 <br />每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定InstanceIds和Filters。 ProjectId - String - 是否必填：否 -（过滤条件）按照项目ID过滤。 <br />AccessRegion - String - 是否必填：否 - （过滤条件）按照接入地域过滤。  <br />RealServerRegion - String - 是否必填：否 - （过滤条件）按照源站地域过滤。GroupId - String - 是否必填：否 - （过滤条件）按照通道组ID过滤。IPAddressVersion - String - 是否必填：否 - （过滤条件）按照IP版本过滤。PackageType - String - 是否必填：否 - （过滤条件）按照通道套餐类型过滤。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。 <br />每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定InstanceIds和Filters。 ProjectId - String - 是否必填：否 -（过滤条件）按照项目ID过滤。 <br />AccessRegion - String - 是否必填：否 - （过滤条件）按照接入地域过滤。  <br />RealServerRegion - String - 是否必填：否 - （过滤条件）按照源站地域过滤。GroupId - String - 是否必填：否 - （过滤条件）按照通道组ID过滤。IPAddressVersion - String - 是否必填：否 - （过滤条件）按照IP版本过滤。PackageType - String - 是否必填：否 - （过滤条件）按照通道套餐类型过滤。</p>
                     * @param _filters <p>过滤条件。 <br />每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定InstanceIds和Filters。 ProjectId - String - 是否必填：否 -（过滤条件）按照项目ID过滤。 <br />AccessRegion - String - 是否必填：否 - （过滤条件）按照接入地域过滤。  <br />RealServerRegion - String - 是否必填：否 - （过滤条件）按照源站地域过滤。GroupId - String - 是否必填：否 - （过滤条件）按照通道组ID过滤。IPAddressVersion - String - 是否必填：否 - （过滤条件）按照IP版本过滤。PackageType - String - 是否必填：否 - （过滤条件）按照通道套餐类型过滤。</p>
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
                     * 获取<p>（新参数，替代InstanceIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * @return ProxyIds <p>（新参数，替代InstanceIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置<p>（新参数，替代InstanceIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * @param _proxyIds <p>（新参数，替代InstanceIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，通道会被拉取出来。</p>
                     * @return TagSet <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，通道会被拉取出来。</p>
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置<p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，通道会被拉取出来。</p>
                     * @param _tagSet <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，通道会被拉取出来。</p>
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取<p>当该字段为1时，仅拉取非通道组的通道，当该字段为0时，仅拉取通道组的通道，不存在该字段时，拉取所有通道，包括独立通道和通道组通道。</p>
                     * @return Independent <p>当该字段为1时，仅拉取非通道组的通道，当该字段为0时，仅拉取通道组的通道，不存在该字段时，拉取所有通道，包括独立通道和通道组通道。</p>
                     * 
                     */
                    int64_t GetIndependent() const;

                    /**
                     * 设置<p>当该字段为1时，仅拉取非通道组的通道，当该字段为0时，仅拉取通道组的通道，不存在该字段时，拉取所有通道，包括独立通道和通道组通道。</p>
                     * @param _independent <p>当该字段为1时，仅拉取非通道组的通道，当该字段为0时，仅拉取通道组的通道，不存在该字段时，拉取所有通道，包括独立通道和通道组通道。</p>
                     * 
                     */
                    void SetIndependent(const int64_t& _independent);

                    /**
                     * 判断参数 Independent 是否已赋值
                     * @return Independent 是否已赋值
                     * 
                     */
                    bool IndependentHasBeenSet() const;

                    /**
                     * 获取<p>输出通道列表的排列顺序。取值范围：asc：升序排列；desc：降序排列。默认为降序。</p>
                     * @return Order <p>输出通道列表的排列顺序。取值范围：asc：升序排列；desc：降序排列。默认为降序。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>输出通道列表的排列顺序。取值范围：asc：升序排列；desc：降序排列。默认为降序。</p>
                     * @param _order <p>输出通道列表的排列顺序。取值范围：asc：升序排列；desc：降序排列。默认为降序。</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>通道列表排序的依据字段。取值范围：create_time：依据通道的创建时间排序；proxy_id：依据通道的ID排序；bandwidth：依据通道带宽上限排序；concurrent_connections：依据通道并发排序；默认按通道创建时间排序。</p>
                     * @return OrderField <p>通道列表排序的依据字段。取值范围：create_time：依据通道的创建时间排序；proxy_id：依据通道的ID排序；bandwidth：依据通道带宽上限排序；concurrent_connections：依据通道并发排序；默认按通道创建时间排序。</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>通道列表排序的依据字段。取值范围：create_time：依据通道的创建时间排序；proxy_id：依据通道的ID排序；bandwidth：依据通道带宽上限排序；concurrent_connections：依据通道并发排序；默认按通道创建时间排序。</p>
                     * @param _orderField <p>通道列表排序的依据字段。取值范围：create_time：依据通道的创建时间排序；proxy_id：依据通道的ID排序；bandwidth：依据通道带宽上限排序；concurrent_connections：依据通道并发排序；默认按通道创建时间排序。</p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * <p>（旧参数，请切换到ProxyIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件。 <br />每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定InstanceIds和Filters。 ProjectId - String - 是否必填：否 -（过滤条件）按照项目ID过滤。 <br />AccessRegion - String - 是否必填：否 - （过滤条件）按照接入地域过滤。  <br />RealServerRegion - String - 是否必填：否 - （过滤条件）按照源站地域过滤。GroupId - String - 是否必填：否 - （过滤条件）按照通道组ID过滤。IPAddressVersion - String - 是否必填：否 - （过滤条件）按照IP版本过滤。PackageType - String - 是否必填：否 - （过滤条件）按照通道套餐类型过滤。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>（新参数，替代InstanceIds）按照一个或者多个实例ID查询。每次请求的实例的上限为100。参数不支持同时指定InstanceIds和Filters。</p>
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，通道会被拉取出来。</p>
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>当该字段为1时，仅拉取非通道组的通道，当该字段为0时，仅拉取通道组的通道，不存在该字段时，拉取所有通道，包括独立通道和通道组通道。</p>
                     */
                    int64_t m_independent;
                    bool m_independentHasBeenSet;

                    /**
                     * <p>输出通道列表的排列顺序。取值范围：asc：升序排列；desc：降序排列。默认为降序。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>通道列表排序的依据字段。取值范围：create_time：依据通道的创建时间排序；proxy_id：依据通道的ID排序；bandwidth：依据通道带宽上限排序；concurrent_connections：依据通道并发排序；默认按通道创建时间排序。</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_
