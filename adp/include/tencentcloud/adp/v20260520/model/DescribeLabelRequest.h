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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeLabel请求参数结构体
                */
                class DescribeLabelRequest : public AbstractModel
                {
                public:
                    DescribeLabelRequest();
                    ~DescribeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>标签 ID</p>
                     * @return LabelId <p>标签 ID</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>标签 ID</p>
                     * @param _labelId <p>标签 ID</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤</p>
                     * @return FilterList <p>通用过滤</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>通用过滤</p>
                     * @param _filterList <p>通用过滤</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>滚动加载游标的标准词 ID（首次请求传 0，后续传上一页最后一条的 TermId）</p>
                     * @return LastTermId <p>滚动加载游标的标准词 ID（首次请求传 0，后续传上一页最后一条的 TermId）</p>
                     * 
                     */
                    std::string GetLastTermId() const;

                    /**
                     * 设置<p>滚动加载游标的标准词 ID（首次请求传 0，后续传上一页最后一条的 TermId）</p>
                     * @param _lastTermId <p>滚动加载游标的标准词 ID（首次请求传 0，后续传上一页最后一条的 TermId）</p>
                     * 
                     */
                    void SetLastTermId(const std::string& _lastTermId);

                    /**
                     * 判断参数 LastTermId 是否已赋值
                     * @return LastTermId 是否已赋值
                     * 
                     */
                    bool LastTermIdHasBeenSet() const;

                    /**
                     * 获取<p>每次加载数量，默认 10，最大 100</p>
                     * @return Limit <p>每次加载数量，默认 10，最大 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每次加载数量，默认 10，最大 100</p>
                     * @param _limit <p>每次加载数量，默认 10，最大 100</p>
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
                     * 获取<p>关键词搜索</p>
                     * @return Query <p>关键词搜索</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>关键词搜索</p>
                     * @param _query <p>关键词搜索</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>标签 ID</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>通用过滤</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>滚动加载游标的标准词 ID（首次请求传 0，后续传上一页最后一条的 TermId）</p>
                     */
                    std::string m_lastTermId;
                    bool m_lastTermIdHasBeenSet;

                    /**
                     * <p>每次加载数量，默认 10，最大 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>关键词搜索</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_
