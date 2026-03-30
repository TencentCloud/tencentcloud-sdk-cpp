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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKTYPECONFIGSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKTYPECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeResourcePoolPackTypeConfigs请求参数结构体
                */
                class DescribeResourcePoolPackTypeConfigsRequest : public AbstractModel
                {
                public:
                    DescribeResourcePoolPackTypeConfigsRequest();
                    ~DescribeResourcePoolPackTypeConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：是</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例族</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
每次请求的`Filters`的上限为10。
                     * @return Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：是</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例族</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
每次请求的`Filters`的上限为10。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：是</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例族</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
每次请求的`Filters`的上限为10。
                     * @param _filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：是</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例族</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
每次请求的`Filters`的上限为10。
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
                     * <li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：是</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例族</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
每次请求的`Filters`的上限为10。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKTYPECONFIGSREQUEST_H_
