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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchInfo.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeMatches返回参数结构体
                */
                class DescribeMatchesResponse : public AbstractModel
                {
                public:
                    DescribeMatchesResponse();
                    ~DescribeMatchesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchInfoList 匹配信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MatchInfo> GetMatchInfoList() const;

                    /**
                     * 判断参数 MatchInfoList 是否已赋值
                     * @return MatchInfoList 是否已赋值
                     * 
                     */
                    bool MatchInfoListHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取当前页号，不填默认返回第一页
                     * @return PageNumber 当前页号，不填默认返回第一页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取单页大小，不填默认取 30，最大值不能超过 30
                     * @return PageSize 单页大小，不填默认取 30，最大值不能超过 30
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取查询类型（可选）：matchName表示匹配名称，matchCode表示匹配code，ruleName表示规则名称，tag表示标签Key/Value
                     * @return SearchType 查询类型（可选）：matchName表示匹配名称，matchCode表示匹配code，ruleName表示规则名称，tag表示标签Key/Value
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取查询关键词（可选）
                     * @return Keyword 查询关键词（可选）
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 匹配信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MatchInfo> m_matchInfoList;
                    bool m_matchInfoListHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前页号，不填默认返回第一页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 单页大小，不填默认取 30，最大值不能超过 30
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询类型（可选）：matchName表示匹配名称，matchCode表示匹配code，ruleName表示规则名称，tag表示标签Key/Value
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * 查询关键词（可选）
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHESRESPONSE_H_
