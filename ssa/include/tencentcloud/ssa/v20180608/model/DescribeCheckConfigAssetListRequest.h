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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGASSETLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGASSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/Filter.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCheckConfigAssetList请求参数结构体
                */
                class DescribeCheckConfigAssetListRequest : public AbstractModel
                {
                public:
                    DescribeCheckConfigAssetListRequest();
                    ~DescribeCheckConfigAssetListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检查项UUID
                     * @return Id 检查项UUID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项UUID
                     * @param _id 检查项UUID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Offset 页码
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页码
                     * @param _offset 页码
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
                     * 获取每页列表数
                     * @return Limit 每页列表数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页列表数
                     * @param _limit 每页列表数
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
                     * 获取db搜索条件
                     * @return Search db搜索条件
                     * 
                     */
                    std::vector<Filter> GetSearch() const;

                    /**
                     * 设置db搜索条件
                     * @param _search db搜索条件
                     * 
                     */
                    void SetSearch(const std::vector<Filter>& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                    /**
                     * 获取ES过滤条件
                     * @return Filter ES过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置ES过滤条件
                     * @param _filter ES过滤条件
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 检查项UUID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页列表数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * db搜索条件
                     */
                    std::vector<Filter> m_search;
                    bool m_searchHasBeenSet;

                    /**
                     * ES过滤条件
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGASSETLISTREQUEST_H_
