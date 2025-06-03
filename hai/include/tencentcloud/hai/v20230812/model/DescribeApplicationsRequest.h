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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/Filter.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeApplications请求参数结构体
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id列表。单次请求数量上限为100个。
                     * @return ApplicationIds 应用id列表。单次请求数量上限为100个。
                     * 
                     */
                    std::vector<std::string> GetApplicationIds() const;

                    /**
                     * 设置应用id列表。单次请求数量上限为100个。
                     * @param _applicationIds 应用id列表。单次请求数量上限为100个。
                     * 
                     */
                    void SetApplicationIds(const std::vector<std::string>& _applicationIds);

                    /**
                     * 判断参数 ApplicationIds 是否已赋值
                     * @return ApplicationIds 是否已赋值
                     * 
                     */
                    bool ApplicationIdsHasBeenSet() const;

                    /**
                     * 获取过滤器，跟ApplicationIds不能共用，支持的filter主要有：application-id: 精确匹配;scene-id: 精确匹配，通过调用接口 [DescribeScenes](https://cloud.tencent.com/document/api/1721/101608)获取;application-name: 模糊匹配;application-type: 精确匹配，枚举类型如下：PUBLIC_APPLICATION（公共应用）/ PRIVATE_APPLICATION（自定义应用）/ COMMUNITY_APPLICATION（社区应用）;
                     * @return Filters 过滤器，跟ApplicationIds不能共用，支持的filter主要有：application-id: 精确匹配;scene-id: 精确匹配，通过调用接口 [DescribeScenes](https://cloud.tencent.com/document/api/1721/101608)获取;application-name: 模糊匹配;application-type: 精确匹配，枚举类型如下：PUBLIC_APPLICATION（公共应用）/ PRIVATE_APPLICATION（自定义应用）/ COMMUNITY_APPLICATION（社区应用）;
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器，跟ApplicationIds不能共用，支持的filter主要有：application-id: 精确匹配;scene-id: 精确匹配，通过调用接口 [DescribeScenes](https://cloud.tencent.com/document/api/1721/101608)获取;application-name: 模糊匹配;application-type: 精确匹配，枚举类型如下：PUBLIC_APPLICATION（公共应用）/ PRIVATE_APPLICATION（自定义应用）/ COMMUNITY_APPLICATION（社区应用）;
                     * @param _filters 过滤器，跟ApplicationIds不能共用，支持的filter主要有：application-id: 精确匹配;scene-id: 精确匹配，通过调用接口 [DescribeScenes](https://cloud.tencent.com/document/api/1721/101608)获取;application-name: 模糊匹配;application-type: 精确匹配，枚举类型如下：PUBLIC_APPLICATION（公共应用）/ PRIVATE_APPLICATION（自定义应用）/ COMMUNITY_APPLICATION（社区应用）;
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
                     * 获取偏移量，不得小于0，默认为0
                     * @return Offset 偏移量，不得小于0，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，不得小于0，默认为0
                     * @param _offset 偏移量，不得小于0，默认为0
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
                     * 获取返回量，不得大于100，默认为20
                     * @return Limit 返回量，不得大于100，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回量，不得大于100，默认为20
                     * @param _limit 返回量，不得大于100，默认为20
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
                     * 获取应用列表排序的依据字段。取值范围："CREATED_TIME"：依据应用的创建时间排序。 "APPLICATION_SIZE"：依据应用的大小排序。默认按应用的创建时间排序。
                     * @return OrderField 应用列表排序的依据字段。取值范围："CREATED_TIME"：依据应用的创建时间排序。 "APPLICATION_SIZE"：依据应用的大小排序。默认按应用的创建时间排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置应用列表排序的依据字段。取值范围："CREATED_TIME"：依据应用的创建时间排序。 "APPLICATION_SIZE"：依据应用的大小排序。默认按应用的创建时间排序。
                     * @param _orderField 应用列表排序的依据字段。取值范围："CREATED_TIME"：依据应用的创建时间排序。 "APPLICATION_SIZE"：依据应用的大小排序。默认按应用的创建时间排序。
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
                     * 获取输出应用列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * @return Order 输出应用列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出应用列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * @param _order 输出应用列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
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
                     * 应用id列表。单次请求数量上限为100个。
                     */
                    std::vector<std::string> m_applicationIds;
                    bool m_applicationIdsHasBeenSet;

                    /**
                     * 过滤器，跟ApplicationIds不能共用，支持的filter主要有：application-id: 精确匹配;scene-id: 精确匹配，通过调用接口 [DescribeScenes](https://cloud.tencent.com/document/api/1721/101608)获取;application-name: 模糊匹配;application-type: 精确匹配，枚举类型如下：PUBLIC_APPLICATION（公共应用）/ PRIVATE_APPLICATION（自定义应用）/ COMMUNITY_APPLICATION（社区应用）;
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，不得小于0，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回量，不得大于100，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 应用列表排序的依据字段。取值范围："CREATED_TIME"：依据应用的创建时间排序。 "APPLICATION_SIZE"：依据应用的大小排序。默认按应用的创建时间排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 输出应用列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
