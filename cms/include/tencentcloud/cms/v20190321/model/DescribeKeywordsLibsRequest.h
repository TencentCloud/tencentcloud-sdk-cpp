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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEKEYWORDSLIBSREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEKEYWORDSLIBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/Filters.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DescribeKeywordsLibs请求参数结构体
                */
                class DescribeKeywordsLibsRequest : public AbstractModel
                {
                public:
                    DescribeKeywordsLibsRequest();
                    ~DescribeKeywordsLibsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单页条数，最大为100条
                     * @return Limit 单页条数，最大为100条
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数，最大为100条
                     * @param _limit 单页条数，最大为100条
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
                     * 获取条数偏移量
                     * @return Offset 条数偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置条数偏移量
                     * @param _offset 条数偏移量
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
                     * 获取过滤器(支持LibName模糊查询,CustomLibIDs词库id列表过滤)
                     * @return Filters 过滤器(支持LibName模糊查询,CustomLibIDs词库id列表过滤)
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤器(支持LibName模糊查询,CustomLibIDs词库id列表过滤)
                     * @param _filters 过滤器(支持LibName模糊查询,CustomLibIDs词库id列表过滤)
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 单页条数，最大为100条
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 条数偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤器(支持LibName模糊查询,CustomLibIDs词库id列表过滤)
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEKEYWORDSLIBSREQUEST_H_
