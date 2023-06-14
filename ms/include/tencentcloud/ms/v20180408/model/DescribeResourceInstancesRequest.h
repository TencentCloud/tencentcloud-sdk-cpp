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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBERESOURCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBERESOURCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/Filter.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeResourceInstances请求参数结构体
                */
                class DescribeResourceInstancesRequest : public AbstractModel
                {
                public:
                    DescribeResourceInstancesRequest();
                    ~DescribeResourceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取支持CreateTime、ExpireTime、AppName、AppPkgName、BindValue、IsBind过滤
                     * @return Filters 支持CreateTime、ExpireTime、AppName、AppPkgName、BindValue、IsBind过滤
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置支持CreateTime、ExpireTime、AppName、AppPkgName、BindValue、IsBind过滤
                     * @param _filters 支持CreateTime、ExpireTime、AppName、AppPkgName、BindValue、IsBind过滤
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取数量限制，默认为20，最大值为100。
                     * @return Limit 数量限制，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量限制，默认为20，最大值为100。
                     * @param _limit 数量限制，默认为20，最大值为100。
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
                     * 获取资源类别id数组，13624：加固专业版，12750：企业版。空数组表示返回全部资源。
                     * @return Pids 资源类别id数组，13624：加固专业版，12750：企业版。空数组表示返回全部资源。
                     * 
                     */
                    std::vector<uint64_t> GetPids() const;

                    /**
                     * 设置资源类别id数组，13624：加固专业版，12750：企业版。空数组表示返回全部资源。
                     * @param _pids 资源类别id数组，13624：加固专业版，12750：企业版。空数组表示返回全部资源。
                     * 
                     */
                    void SetPids(const std::vector<uint64_t>& _pids);

                    /**
                     * 判断参数 Pids 是否已赋值
                     * @return Pids 是否已赋值
                     * 
                     */
                    bool PidsHasBeenSet() const;

                    /**
                     * 获取按某个字段排序，目前支持CreateTime、ExpireTime其中的一个排序。
                     * @return OrderField 按某个字段排序，目前支持CreateTime、ExpireTime其中的一个排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置按某个字段排序，目前支持CreateTime、ExpireTime其中的一个排序。
                     * @param _orderField 按某个字段排序，目前支持CreateTime、ExpireTime其中的一个排序。
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
                     * 获取升序（asc）还是降序（desc），默认：desc。
                     * @return OrderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置升序（asc）还是降序（desc），默认：desc。
                     * @param _orderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 支持CreateTime、ExpireTime、AppName、AppPkgName、BindValue、IsBind过滤
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数量限制，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源类别id数组，13624：加固专业版，12750：企业版。空数组表示返回全部资源。
                     */
                    std::vector<uint64_t> m_pids;
                    bool m_pidsHasBeenSet;

                    /**
                     * 按某个字段排序，目前支持CreateTime、ExpireTime其中的一个排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 升序（asc）还是降序（desc），默认：desc。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBERESOURCEINSTANCESREQUEST_H_
