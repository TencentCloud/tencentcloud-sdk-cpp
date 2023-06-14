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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTREQUEST_H_

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
                * DescribeComplianceAssetList请求参数结构体
                */
                class DescribeComplianceAssetListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceAssetListRequest();
                    ~DescribeComplianceAssetListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
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
                     * 获取检查项uuid
                     * @return Id 检查项uuid
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项uuid
                     * @param _id 检查项uuid
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
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return Search 查询条件
                     * 
                     */
                    std::vector<Filter> GetSearch() const;

                    /**
                     * 设置查询条件
                     * @param _search 查询条件
                     * 
                     */
                    void SetSearch(const std::vector<Filter>& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 检查项uuid
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::vector<Filter> m_search;
                    bool m_searchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTREQUEST_H_
