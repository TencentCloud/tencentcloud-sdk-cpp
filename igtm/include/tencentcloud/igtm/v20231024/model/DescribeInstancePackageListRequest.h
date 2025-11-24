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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCEPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCEPACKAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/ResourceFilter.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeInstancePackageList请求参数结构体
                */
                class DescribeInstancePackageListRequest : public AbstractModel
                {
                public:
                    DescribeInstancePackageListRequest();
                    ~DescribeInstancePackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取InstanceId实例Id，InstanceName实例名称，ResourceId套餐Id，PackageType套餐类型 
                     * @return Filters InstanceId实例Id，InstanceName实例名称，ResourceId套餐Id，PackageType套餐类型 
                     * 
                     */
                    std::vector<ResourceFilter> GetFilters() const;

                    /**
                     * 设置InstanceId实例Id，InstanceName实例名称，ResourceId套餐Id，PackageType套餐类型 
                     * @param _filters InstanceId实例Id，InstanceName实例名称，ResourceId套餐Id，PackageType套餐类型 
                     * 
                     */
                    void SetFilters(const std::vector<ResourceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否使用：0未使用1已使用
                     * @return IsUsed 是否使用：0未使用1已使用
                     * 
                     */
                    uint64_t GetIsUsed() const;

                    /**
                     * 设置是否使用：0未使用1已使用
                     * @param _isUsed 是否使用：0未使用1已使用
                     * 
                     */
                    void SetIsUsed(const uint64_t& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * InstanceId实例Id，InstanceName实例名称，ResourceId套餐Id，PackageType套餐类型 
                     */
                    std::vector<ResourceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否使用：0未使用1已使用
                     */
                    uint64_t m_isUsed;
                    bool m_isUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCEPACKAGELISTREQUEST_H_
