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
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
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
                     * 获取日志导出数量,  最大值5000万
                     * @return Count 日志导出数量,  最大值5000万
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置日志导出数量,  最大值5000万
                     * @param _count 日志导出数量,  最大值5000万
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
                     * 获取日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>
                     * @return Query 日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>
                     * @param _query 日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>
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
                     * 获取日志导出起始时间，毫秒时间戳
                     * @return From 日志导出起始时间，毫秒时间戳
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置日志导出起始时间，毫秒时间戳
                     * @param _from 日志导出起始时间，毫秒时间戳
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
                     * 获取日志导出结束时间，毫秒时间戳
                     * @return To 日志导出结束时间，毫秒时间戳
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置日志导出结束时间，毫秒时间戳
                     * @param _to 日志导出结束时间，毫秒时间戳
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
                     * 获取日志导出时间排序。desc，asc，默认为desc
                     * @return Order 日志导出时间排序。desc，asc，默认为desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置日志导出时间排序。desc，asc，默认为desc
                     * @param _order 日志导出时间排序。desc，asc，默认为desc
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
                     * 获取日志导出数据格式。json，csv，默认为json
                     * @return Format 日志导出数据格式。json，csv，默认为json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志导出数据格式。json，csv，默认为json
                     * @param _format 日志导出数据格式。json，csv，默认为json
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
                     * 获取语法规则,  默认值为0。
0：Lucene语法，1：CQL语法。
                     * @return SyntaxRule 语法规则,  默认值为0。
0：Lucene语法，1：CQL语法。
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置语法规则,  默认值为0。
0：Lucene语法，1：CQL语法。
                     * @param _syntaxRule 语法规则,  默认值为0。
0：Lucene语法，1：CQL语法。
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
                     * 获取导出字段
                     * @return DerivedFields 导出字段
                     * 
                     */
                    std::vector<std::string> GetDerivedFields() const;

                    /**
                     * 设置导出字段
                     * @param _derivedFields 导出字段
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
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志导出数量,  最大值5000万
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 日志导出检索语句，不支持<a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志导出起始时间，毫秒时间戳
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 日志导出结束时间，毫秒时间戳
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 日志导出时间排序。desc，asc，默认为desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 日志导出数据格式。json，csv，默认为json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 语法规则,  默认值为0。
0：Lucene语法，1：CQL语法。
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_derivedFields;
                    bool m_derivedFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
