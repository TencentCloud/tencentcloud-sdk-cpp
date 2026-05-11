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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/SearchFiltersProgram.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePrograms请求参数结构体
                */
                class DescribeProgramsRequest : public AbstractModel
                {
                public:
                    DescribeProgramsRequest();
                    ~DescribeProgramsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模糊查询数据集ID，数据集名称，不传入时查询全量</p>
                     * @return SearchWord <p>模糊查询数据集ID，数据集名称，不传入时查询全量</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>模糊查询数据集ID，数据集名称，不传入时查询全量</p>
                     * @param _searchWord <p>模糊查询数据集ID，数据集名称，不传入时查询全量</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认值20</p>
                     * @return Limit <p>每页数量，默认值20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认值20</p>
                     * @param _limit <p>每页数量，默认值20</p>
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
                     * 获取<p>起始偏移量，默认值0</p>
                     * @return Offset <p>起始偏移量，默认值0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>起始偏移量，默认值0</p>
                     * @param _offset <p>起始偏移量，默认值0</p>
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
                     * 获取<p>模糊查询，传递模糊查询字段和对应的值</p>
                     * @return SearchFilters <p>模糊查询，传递模糊查询字段和对应的值</p>
                     * 
                     */
                    SearchFiltersProgram GetSearchFilters() const;

                    /**
                     * 设置<p>模糊查询，传递模糊查询字段和对应的值</p>
                     * @param _searchFilters <p>模糊查询，传递模糊查询字段和对应的值</p>
                     * 
                     */
                    void SetSearchFilters(const SearchFiltersProgram& _searchFilters);

                    /**
                     * 判断参数 SearchFilters 是否已赋值
                     * @return SearchFilters 是否已赋值
                     * 
                     */
                    bool SearchFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>模糊查询数据集ID，数据集名称，不传入时查询全量</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>每页数量，默认值20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始偏移量，默认值0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>模糊查询，传递模糊查询字段和对应的值</p>
                     */
                    SearchFiltersProgram m_searchFilters;
                    bool m_searchFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_
