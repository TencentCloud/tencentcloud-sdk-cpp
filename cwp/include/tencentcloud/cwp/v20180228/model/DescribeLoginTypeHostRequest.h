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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLoginTypeHost请求参数结构体
                */
                class DescribeLoginTypeHostRequest : public AbstractModel
                {
                public:
                    DescribeLoginTypeHostRequest();
                    ~DescribeLoginTypeHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>Name - string - 是否必填：否 - 主机名</li> <li>InstanceId - string - 是否必填：否 - 实例ID</li> <li>PublicIp - string - 是否必填：否 - 公网IP</li> <li>PrivateIp - string - 是否必填：否 - 私网IP</li>
                     * @return Filters <li>Name - string - 是否必填：否 - 主机名</li> <li>InstanceId - string - 是否必填：否 - 实例ID</li> <li>PublicIp - string - 是否必填：否 - 公网IP</li> <li>PrivateIp - string - 是否必填：否 - 私网IP</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>Name - string - 是否必填：否 - 主机名</li> <li>InstanceId - string - 是否必填：否 - 实例ID</li> <li>PublicIp - string - 是否必填：否 - 公网IP</li> <li>PrivateIp - string - 是否必填：否 - 私网IP</li>
                     * @param _filters <li>Name - string - 是否必填：否 - 主机名</li> <li>InstanceId - string - 是否必填：否 - 实例ID</li> <li>PublicIp - string - 是否必填：否 - 公网IP</li> <li>PrivateIp - string - 是否必填：否 - 私网IP</li>
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
                     * 获取<p>限制条数,默认10,最大100</p>
                     * @return Limit <p>限制条数,默认10,最大100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10,最大100</p>
                     * @param _limit <p>限制条数,默认10,最大100</p>
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
                     * 获取<p>偏移量,默认0</p>
                     * @return Offset <p>偏移量,默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0</p>
                     * @param _offset <p>偏移量,默认0</p>
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
                     * 获取<p>排序方式: [ASC:升序|DESC:降序]</p>
                     * @return Order <p>排序方式: [ASC:升序|DESC:降序]</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式: [ASC:升序|DESC:降序]</p>
                     * @param _order <p>排序方式: [ASC:升序|DESC:降序]</p>
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
                     * 获取<p>可选排序列: [Id]</p>
                     * @return By <p>可选排序列: [Id]</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>可选排序列: [Id]</p>
                     * @param _by <p>可选排序列: [Id]</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <li>Name - string - 是否必填：否 - 主机名</li> <li>InstanceId - string - 是否必填：否 - 实例ID</li> <li>PublicIp - string - 是否必填：否 - 公网IP</li> <li>PrivateIp - string - 是否必填：否 - 私网IP</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>限制条数,默认10,最大100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方式: [ASC:升序|DESC:降序]</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>可选排序列: [Id]</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_
