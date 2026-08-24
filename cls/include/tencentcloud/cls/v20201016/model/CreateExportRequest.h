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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateExport请求参数结构体
                */
                class CreateExportRequest : public AbstractModel
                {
                public:
                    CreateExportRequest();
                    ~CreateExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题Id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题Id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题Id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题Id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>日志导出数量,  最大值5000万</p>
                     * @return Count <p>日志导出数量,  最大值5000万</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>日志导出数量,  最大值5000万</p>
                     * @param _count <p>日志导出数量,  最大值5000万</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a></p>
                     * @return Query <p>日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a></p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a></p>
                     * @param _query <p>日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a></p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>日志导出起始时间，毫秒时间戳</p>
                     * @return From <p>日志导出起始时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>日志导出起始时间，毫秒时间戳</p>
                     * @param _from <p>日志导出起始时间，毫秒时间戳</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>日志导出结束时间，毫秒时间戳</p>
                     * @return To <p>日志导出结束时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>日志导出结束时间，毫秒时间戳</p>
                     * @param _to <p>日志导出结束时间，毫秒时间戳</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取<p>日志导出时间排序。desc，asc，默认为desc</p>
                     * @return Order <p>日志导出时间排序。desc，asc，默认为desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>日志导出时间排序。desc，asc，默认为desc</p>
                     * @param _order <p>日志导出时间排序。desc，asc，默认为desc</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>日志导出数据格式。json，csv，默认为json</p>
                     * @return Format <p>日志导出数据格式。json，csv，默认为json</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>日志导出数据格式。json，csv，默认为json</p>
                     * @param _format <p>日志导出数据格式。json，csv，默认为json</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>检索语法规则，默认值为1，推荐使用1 。</p><ul><li>0：Lucene语法</li><li>1：CQL语法（CLS Query Language，日志服务专用检索语法）</li></ul><p>详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>。</p>
                     * @return SyntaxRule <p>检索语法规则，默认值为1，推荐使用1 。</p><ul><li>0：Lucene语法</li><li>1：CQL语法（CLS Query Language，日志服务专用检索语法）</li></ul><p>详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>。</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>检索语法规则，默认值为1，推荐使用1 。</p><ul><li>0：Lucene语法</li><li>1：CQL语法（CLS Query Language，日志服务专用检索语法）</li></ul><p>详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>。</p>
                     * @param _syntaxRule <p>检索语法规则，默认值为1，推荐使用1 。</p><ul><li>0：Lucene语法</li><li>1：CQL语法（CLS Query Language，日志服务专用检索语法）</li></ul><p>详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>。</p>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>导出字段</p>
                     * @return DerivedFields <p>导出字段</p>
                     * 
                     */
                    std::vector<std::string> GetDerivedFields() const;

                    /**
                     * 设置<p>导出字段</p>
                     * @param _derivedFields <p>导出字段</p>
                     * 
                     */
                    void SetDerivedFields(const std::vector<std::string>& _derivedFields);

                    /**
                     * 判断参数 DerivedFields 是否已赋值
                     * @return DerivedFields 是否已赋值
                     * 
                     */
                    bool DerivedFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题Id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志导出数量,  最大值5000万</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a></p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>日志导出起始时间，毫秒时间戳</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>日志导出结束时间，毫秒时间戳</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>日志导出时间排序。desc，asc，默认为desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>日志导出数据格式。json，csv，默认为json</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>检索语法规则，默认值为1，推荐使用1 。</p><ul><li>0：Lucene语法</li><li>1：CQL语法（CLS Query Language，日志服务专用检索语法）</li></ul><p>详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>。</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>导出字段</p>
                     */
                    std::vector<std::string> m_derivedFields;
                    bool m_derivedFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
