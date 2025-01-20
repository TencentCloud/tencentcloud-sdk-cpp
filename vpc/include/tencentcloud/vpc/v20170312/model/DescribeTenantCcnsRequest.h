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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSREQUEST_H_

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
                * DescribeTenantCcns请求参数结构体
                */
                class DescribeTenantCcnsRequest : public AbstractModel
                {
                public:
                    DescribeTenantCcnsRequest();
                    ~DescribeTenantCcnsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，目前`value`值个数只支持一个，允许可支持的字段有：
<li>`ccn-ids` 云联网ID数组，值形如：`["ccn-12345678"]`</li> 
<li>`user-account-id` 用户账号ID，值形如：`["12345678"]`</li><li>`is-security-lock` 是否锁定，值形如：`["true"]`</li>
                     * @return Filters 过滤条件，目前`value`值个数只支持一个，允许可支持的字段有：
<li>`ccn-ids` 云联网ID数组，值形如：`["ccn-12345678"]`</li> 
<li>`user-account-id` 用户账号ID，值形如：`["12345678"]`</li><li>`is-security-lock` 是否锁定，值形如：`["true"]`</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，目前`value`值个数只支持一个，允许可支持的字段有：
<li>`ccn-ids` 云联网ID数组，值形如：`["ccn-12345678"]`</li> 
<li>`user-account-id` 用户账号ID，值形如：`["12345678"]`</li><li>`is-security-lock` 是否锁定，值形如：`["true"]`</li>
                     * @param _filters 过滤条件，目前`value`值个数只支持一个，允许可支持的字段有：
<li>`ccn-ids` 云联网ID数组，值形如：`["ccn-12345678"]`</li> 
<li>`user-account-id` 用户账号ID，值形如：`["12345678"]`</li><li>`is-security-lock` 是否锁定，值形如：`["true"]`</li>
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
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取单页返回数据量，可选值0到100之间的整数，默认20。
                     * @return Limit 单页返回数据量，可选值0到100之间的整数，默认20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单页返回数据量，可选值0到100之间的整数，默认20。
                     * @param _limit 单页返回数据量，可选值0到100之间的整数，默认20。
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
                     * 过滤条件，目前`value`值个数只支持一个，允许可支持的字段有：
<li>`ccn-ids` 云联网ID数组，值形如：`["ccn-12345678"]`</li> 
<li>`user-account-id` 用户账号ID，值形如：`["12345678"]`</li><li>`is-security-lock` 是否锁定，值形如：`["true"]`</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页返回数据量，可选值0到100之间的整数，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSREQUEST_H_
