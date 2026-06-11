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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKCONFIGQUOTAREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKCONFIGQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeRemoteDiskConfigQuota请求参数结构体
                */
                class DescribeRemoteDiskConfigQuotaRequest : public AbstractModel
                {
                public:
                    DescribeRemoteDiskConfigQuotaRequest();
                    ~DescribeRemoteDiskConfigQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤条件。支持的过滤条件如下：</p><ul><li>instance-family：按照机型族过滤。</li><li>instance-type：按照机型规格过滤。</li><li>zone：按照可用区过滤。</li><li>instance-charge-type：按照付费方式过滤。取值范围：PREPAID、POSTPAID_BY_HOUR、SPOTPAID、UNDERWRITE。</li></ul>
                     * @return Filters <p>过滤条件。支持的过滤条件如下：</p><ul><li>instance-family：按照机型族过滤。</li><li>instance-type：按照机型规格过滤。</li><li>zone：按照可用区过滤。</li><li>instance-charge-type：按照付费方式过滤。取值范围：PREPAID、POSTPAID_BY_HOUR、SPOTPAID、UNDERWRITE。</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持的过滤条件如下：</p><ul><li>instance-family：按照机型族过滤。</li><li>instance-type：按照机型规格过滤。</li><li>zone：按照可用区过滤。</li><li>instance-charge-type：按照付费方式过滤。取值范围：PREPAID、POSTPAID_BY_HOUR、SPOTPAID、UNDERWRITE。</li></ul>
                     * @param _filters <p>过滤条件。支持的过滤条件如下：</p><ul><li>instance-family：按照机型族过滤。</li><li>instance-type：按照机型规格过滤。</li><li>zone：按照可用区过滤。</li><li>instance-charge-type：按照付费方式过滤。取值范围：PREPAID、POSTPAID_BY_HOUR、SPOTPAID、UNDERWRITE。</li></ul>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件。支持的过滤条件如下：</p><ul><li>instance-family：按照机型族过滤。</li><li>instance-type：按照机型规格过滤。</li><li>zone：按照可用区过滤。</li><li>instance-charge-type：按照付费方式过滤。取值范围：PREPAID、POSTPAID_BY_HOUR、SPOTPAID、UNDERWRITE。</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKCONFIGQUOTAREQUEST_H_
