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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECVMZONEINSTANCECONFIGINFOSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECVMZONEINSTANCECONFIGINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCvmZoneInstanceConfigInfos请求参数结构体
                */
                class DescribeCvmZoneInstanceConfigInfosRequest : public AbstractModel
                {
                public:
                    DescribeCvmZoneInstanceConfigInfosRequest();
                    ~DescribeCvmZoneInstanceConfigInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> instance-family String - 是否必填：否 -（过滤条件）按照[机型系列](https://cloud.tencent.com/document/product/213/15748)过滤。实例机型系列形如：S1、I1、M1等。</li>
<li> instance-type - String - 是否必填：否 - （过滤条件）按照[机型](https://cloud.tencent.com/document/product/213/15749)过滤。实例机型形如：：S5.12XLARGE128、S5.12XLARGE96等。</li>
<li> instance-charge-type - String - 是否必填：否 -（过滤条件）按照实例计费模式过滤。 ( POSTPAID_BY_HOUR：表示后付费，即按量计费机型 | SPOTPAID：表示竞价付费机型。 )  </li>
                     * @return Filters 过滤条件。
<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> instance-family String - 是否必填：否 -（过滤条件）按照[机型系列](https://cloud.tencent.com/document/product/213/15748)过滤。实例机型系列形如：S1、I1、M1等。</li>
<li> instance-type - String - 是否必填：否 - （过滤条件）按照[机型](https://cloud.tencent.com/document/product/213/15749)过滤。实例机型形如：：S5.12XLARGE128、S5.12XLARGE96等。</li>
<li> instance-charge-type - String - 是否必填：否 -（过滤条件）按照实例计费模式过滤。 ( POSTPAID_BY_HOUR：表示后付费，即按量计费机型 | SPOTPAID：表示竞价付费机型。 )  </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> instance-family String - 是否必填：否 -（过滤条件）按照[机型系列](https://cloud.tencent.com/document/product/213/15748)过滤。实例机型系列形如：S1、I1、M1等。</li>
<li> instance-type - String - 是否必填：否 - （过滤条件）按照[机型](https://cloud.tencent.com/document/product/213/15749)过滤。实例机型形如：：S5.12XLARGE128、S5.12XLARGE96等。</li>
<li> instance-charge-type - String - 是否必填：否 -（过滤条件）按照实例计费模式过滤。 ( POSTPAID_BY_HOUR：表示后付费，即按量计费机型 | SPOTPAID：表示竞价付费机型。 )  </li>
                     * @param _filters 过滤条件。
<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> instance-family String - 是否必填：否 -（过滤条件）按照[机型系列](https://cloud.tencent.com/document/product/213/15748)过滤。实例机型系列形如：S1、I1、M1等。</li>
<li> instance-type - String - 是否必填：否 - （过滤条件）按照[机型](https://cloud.tencent.com/document/product/213/15749)过滤。实例机型形如：：S5.12XLARGE128、S5.12XLARGE96等。</li>
<li> instance-charge-type - String - 是否必填：否 -（过滤条件）按照实例计费模式过滤。 ( POSTPAID_BY_HOUR：表示后付费，即按量计费机型 | SPOTPAID：表示竞价付费机型。 )  </li>
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
                     * 过滤条件。
<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> instance-family String - 是否必填：否 -（过滤条件）按照[机型系列](https://cloud.tencent.com/document/product/213/15748)过滤。实例机型系列形如：S1、I1、M1等。</li>
<li> instance-type - String - 是否必填：否 - （过滤条件）按照[机型](https://cloud.tencent.com/document/product/213/15749)过滤。实例机型形如：：S5.12XLARGE128、S5.12XLARGE96等。</li>
<li> instance-charge-type - String - 是否必填：否 -（过滤条件）按照实例计费模式过滤。 ( POSTPAID_BY_HOUR：表示后付费，即按量计费机型 | SPOTPAID：表示竞价付费机型。 )  </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECVMZONEINSTANCECONFIGINFOSREQUEST_H_
