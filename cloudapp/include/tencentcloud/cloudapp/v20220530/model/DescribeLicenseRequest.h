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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_DESCRIBELICENSEREQUEST_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_DESCRIBELICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudapp/v20220530/model/Filter.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * DescribeLicense请求参数结构体
                */
                class DescribeLicenseRequest : public AbstractModel
                {
                public:
                    DescribeLicenseRequest();
                    ~DescribeLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可选过滤器
                     * @return Filters 可选过滤器
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置可选过滤器
                     * @param _filters 可选过滤器
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
                     * 可选过滤器
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_DESCRIBELICENSEREQUEST_H_
