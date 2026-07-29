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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODETYPESREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Filter.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomNodeTypes请求参数结构体
                */
                class DescribeDBCustomNodeTypesRequest : public AbstractModel
                {
                public:
                    DescribeDBCustomNodeTypesRequest();
                    ~DescribeDBCustomNodeTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>支持通过地域，可用区，机型系列，机型标识进行过滤</p><p>入参限制：region、zone、node-family、node-type</p>
                     * @return Filters <p>支持通过地域，可用区，机型系列，机型标识进行过滤</p><p>入参限制：region、zone、node-family、node-type</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>支持通过地域，可用区，机型系列，机型标识进行过滤</p><p>入参限制：region、zone、node-family、node-type</p>
                     * @param _filters <p>支持通过地域，可用区，机型系列，机型标识进行过滤</p><p>入参限制：region、zone、node-family、node-type</p>
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
                     * <p>支持通过地域，可用区，机型系列，机型标识进行过滤</p><p>入参限制：region、zone、node-family、node-type</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODETYPESREQUEST_H_
