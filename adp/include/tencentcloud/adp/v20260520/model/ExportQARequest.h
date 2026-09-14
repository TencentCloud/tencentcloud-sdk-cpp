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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/QAQuery.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ExportQA请求参数结构体
                */
                class ExportQARequest : public AbstractModel
                {
                public:
                    ExportQARequest();
                    ~ExportQARequest() = default;
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
                     * 获取<p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：Status-QA状态,枚举值,精确匹配; CategoryId-分类ID,精确匹配; SourceType-QA来源类型,枚举值,精确匹配; EffectiveDomain-生效作用域,精确匹配; DocId-关联文档ID,精确匹配; CreateTime-创建时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; UpdateTime-更新时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; QaId-QA ID列表,精确匹配,支持多值</p>
                     * @return FilterList <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：Status-QA状态,枚举值,精确匹配; CategoryId-分类ID,精确匹配; SourceType-QA来源类型,枚举值,精确匹配; EffectiveDomain-生效作用域,精确匹配; DocId-关联文档ID,精确匹配; CreateTime-创建时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; UpdateTime-更新时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; QaId-QA ID列表,精确匹配,支持多值</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：Status-QA状态,枚举值,精确匹配; CategoryId-分类ID,精确匹配; SourceType-QA来源类型,枚举值,精确匹配; EffectiveDomain-生效作用域,精确匹配; DocId-关联文档ID,精确匹配; CreateTime-创建时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; UpdateTime-更新时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; QaId-QA ID列表,精确匹配,支持多值</p>
                     * @param _filterList <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：Status-QA状态,枚举值,精确匹配; CategoryId-分类ID,精确匹配; SourceType-QA来源类型,枚举值,精确匹配; EffectiveDomain-生效作用域,精确匹配; DocId-关联文档ID,精确匹配; CreateTime-创建时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; UpdateTime-更新时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; QaId-QA ID列表,精确匹配,支持多值</p>
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
                     * 获取<p>查询条件（关键词 + 查询范围），与 DescribeQASummaryList 保持一致</p>
                     * @return Query <p>查询条件（关键词 + 查询范围），与 DescribeQASummaryList 保持一致</p>
                     * 
                     */
                    QAQuery GetQuery() const;

                    /**
                     * 设置<p>查询条件（关键词 + 查询范围），与 DescribeQASummaryList 保持一致</p>
                     * @param _query <p>查询条件（关键词 + 查询范围），与 DescribeQASummaryList 保持一致</p>
                     * 
                     */
                    void SetQuery(const QAQuery& _query);

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
                     * <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：Status-QA状态,枚举值,精确匹配; CategoryId-分类ID,精确匹配; SourceType-QA来源类型,枚举值,精确匹配; EffectiveDomain-生效作用域,精确匹配; DocId-关联文档ID,精确匹配; CreateTime-创建时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; UpdateTime-更新时间,Unix秒,BETWEEN 传 [起始秒,结束秒]; QaId-QA ID列表,精确匹配,支持多值</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>查询条件（关键词 + 查询范围），与 DescribeQASummaryList 保持一致</p>
                     */
                    QAQuery m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXPORTQAREQUEST_H_
