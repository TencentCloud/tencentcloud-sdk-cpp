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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEACCESSEXPORTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEACCESSEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateAccessExport请求参数结构体
                */
                class CreateAccessExportRequest : public AbstractModel
                {
                public:
                    CreateAccessExportRequest();
                    ~CreateAccessExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @return TopicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @param _topicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
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
                     * 获取要查询的日志的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的日志的起始时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的日志的起始时间，Unix时间戳，单位ms
                     * @param _from 要查询的日志的起始时间，Unix时间戳，单位ms
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
                     * 获取要查询的日志的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的日志的结束时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的日志的结束时间，Unix时间戳，单位ms
                     * @param _to 要查询的日志的结束时间，Unix时间戳，单位ms
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
                     * 获取日志导出检索语句
                     * @return Query 日志导出检索语句
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置日志导出检索语句
                     * @param _query 日志导出检索语句
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
                     * 获取日志导出数量，最大值100w
                     * @return Count 日志导出数量，最大值100w
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志导出数量，最大值100w
                     * @param _count 日志导出数量，最大值100w
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

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

                private:

                    /**
                     * 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 日志导出检索语句
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志导出数量，最大值100w
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 日志导出数据格式。json，csv，默认为json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 日志导出时间排序。desc，asc，默认为desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEACCESSEXPORTREQUEST_H_
