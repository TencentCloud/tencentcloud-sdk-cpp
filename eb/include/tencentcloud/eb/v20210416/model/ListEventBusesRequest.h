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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Filter.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ListEventBuses请求参数结构体
                */
                class ListEventBusesRequest : public AbstractModel
                {
                public:
                    ListEventBusesRequest();
                    ~ListEventBusesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>根据哪个字段进行返回结果排序</p><p>枚举值：</p><ul><li>created_at： 创建时间</li><li>updated_at： 修改时间</li><li>name： 事件集名称</li></ul><p>默认值：updated_at</p>
                     * @return OrderBy <p>根据哪个字段进行返回结果排序</p><p>枚举值：</p><ul><li>created_at： 创建时间</li><li>updated_at： 修改时间</li><li>name： 事件集名称</li></ul><p>默认值：updated_at</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>根据哪个字段进行返回结果排序</p><p>枚举值：</p><ul><li>created_at： 创建时间</li><li>updated_at： 修改时间</li><li>name： 事件集名称</li></ul><p>默认值：updated_at</p>
                     * @param _orderBy <p>根据哪个字段进行返回结果排序</p><p>枚举值：</p><ul><li>created_at： 创建时间</li><li>updated_at： 修改时间</li><li>name： 事件集名称</li></ul><p>默认值：updated_at</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * @return Order <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * @param _order <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
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
                     * 获取<p>过滤字段范围: EventBusName(事件集名称)/EventBusId(事件集Id)/Type(事件集类型:Cloud(云服务);Platform(平台型);Custom(自定义))/TagKey(标签键)。每次请求的Filters的上限为10，Filter.Values的上限为5。[{&quot;Name&quot;:&quot;Type&quot;,&quot;Values&quot;:[&quot;Cloud&quot;,&quot;Platform&quot;]}]</p>
                     * @return Filters <p>过滤字段范围: EventBusName(事件集名称)/EventBusId(事件集Id)/Type(事件集类型:Cloud(云服务);Platform(平台型);Custom(自定义))/TagKey(标签键)。每次请求的Filters的上限为10，Filter.Values的上限为5。[{&quot;Name&quot;:&quot;Type&quot;,&quot;Values&quot;:[&quot;Cloud&quot;,&quot;Platform&quot;]}]</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤字段范围: EventBusName(事件集名称)/EventBusId(事件集Id)/Type(事件集类型:Cloud(云服务);Platform(平台型);Custom(自定义))/TagKey(标签键)。每次请求的Filters的上限为10，Filter.Values的上限为5。[{&quot;Name&quot;:&quot;Type&quot;,&quot;Values&quot;:[&quot;Cloud&quot;,&quot;Platform&quot;]}]</p>
                     * @param _filters <p>过滤字段范围: EventBusName(事件集名称)/EventBusId(事件集Id)/Type(事件集类型:Cloud(云服务);Platform(平台型);Custom(自定义))/TagKey(标签键)。每次请求的Filters的上限为10，Filter.Values的上限为5。[{&quot;Name&quot;:&quot;Type&quot;,&quot;Values&quot;:[&quot;Cloud&quot;,&quot;Platform&quot;]}]</p>
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
                     * 获取<p>分页偏移量，默认为0。</p>
                     * @return Offset <p>分页偏移量，默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为0。</p>
                     * @param _offset <p>分页偏移量，默认为0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>根据哪个字段进行返回结果排序</p><p>枚举值：</p><ul><li>created_at： 创建时间</li><li>updated_at： 修改时间</li><li>name： 事件集名称</li></ul><p>默认值：updated_at</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>过滤字段范围: EventBusName(事件集名称)/EventBusId(事件集Id)/Type(事件集类型:Cloud(云服务);Platform(平台型);Custom(自定义))/TagKey(标签键)。每次请求的Filters的上限为10，Filter.Values的上限为5。[{&quot;Name&quot;:&quot;Type&quot;,&quot;Values&quot;:[&quot;Cloud&quot;,&quot;Platform&quot;]}]</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESREQUEST_H_
