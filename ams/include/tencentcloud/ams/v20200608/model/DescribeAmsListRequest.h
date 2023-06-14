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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/Filter.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeAmsList请求参数结构体
                */
                class DescribeAmsListRequest : public AbstractModel
                {
                public:
                    DescribeAmsListRequest();
                    ~DescribeAmsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageToken 页码
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置页码
                     * @param _pageToken 页码
                     * 
                     */
                    void SetPageToken(const std::string& _pageToken);

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     * 
                     */
                    bool PageTokenHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Limit 过滤条件
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置过滤条件
                     * @param _limit 过滤条件
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
                     * 获取查询方向
                     * @return PageDirection 查询方向
                     * 
                     */
                    std::string GetPageDirection() const;

                    /**
                     * 设置查询方向
                     * @param _pageDirection 查询方向
                     * 
                     */
                    void SetPageDirection(const std::string& _pageDirection);

                    /**
                     * 判断参数 PageDirection 是否已赋值
                     * @return PageDirection 是否已赋值
                     * 
                     */
                    bool PageDirectionHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
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
                     * 页码
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询方向
                     */
                    std::string m_pageDirection;
                    bool m_pageDirectionHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTREQUEST_H_
