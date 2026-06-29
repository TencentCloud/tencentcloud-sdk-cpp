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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OperatorFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRAssetIdentificationCursorList请求参数结构体
                */
                class DescribeNDRAssetIdentificationCursorListRequest : public AbstractModel
                {
                public:
                    DescribeNDRAssetIdentificationCursorListRequest();
                    ~DescribeNDRAssetIdentificationCursorListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页条数</p>
                     * @return Limit <p>每页条数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数</p>
                     * @param _limit <p>每页条数</p>
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
                     * 获取<p>分页游标</p><p>前一页返回的NextCursor</p>
                     * @return Cursor <p>分页游标</p><p>前一页返回的NextCursor</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>分页游标</p><p>前一页返回的NextCursor</p>
                     * @param _cursor <p>分页游标</p><p>前一页返回的NextCursor</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>查询过滤条件，多个条件之间为AND的关系</p>
                     * @return Filters <p>查询过滤条件，多个条件之间为AND的关系</p>
                     * 
                     */
                    std::vector<OperatorFilter> GetFilters() const;

                    /**
                     * 设置<p>查询过滤条件，多个条件之间为AND的关系</p>
                     * @param _filters <p>查询过滤条件，多个条件之间为AND的关系</p>
                     * 
                     */
                    void SetFilters(const std::vector<OperatorFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>每页条数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页游标</p><p>前一页返回的NextCursor</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>查询过滤条件，多个条件之间为AND的关系</p>
                     */
                    std::vector<OperatorFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONCURSORLISTREQUEST_H_
