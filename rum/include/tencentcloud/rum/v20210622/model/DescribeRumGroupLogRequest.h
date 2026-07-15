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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumGroupLog请求参数结构体
                */
                class DescribeRumGroupLogRequest : public AbstractModel
                {
                public:
                    DescribeRumGroupLogRequest();
                    ~DescribeRumGroupLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>排序方式  desc  asc（必填）</p>
                     * @return OrderBy <p>排序方式  desc  asc（必填）</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式  desc  asc（必填）</p>
                     * @param _orderBy <p>排序方式  desc  asc（必填）</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>开始时间（必填）</p>
                     * @return StartTime <p>开始时间（必填）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间（必填）</p>
                     * @param _startTime <p>开始时间（必填）</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @return Limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @param _limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
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
                     * 获取<p>页数，第几页（注意：该字段已废弃！）</p>
                     * @return Page <p>页数，第几页（注意：该字段已废弃！）</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页数，第几页（注意：该字段已废弃！）</p>
                     * @param _page <p>页数，第几页（注意：该字段已废弃！）</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * @return Query <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * @param _query <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
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
                     * 获取<p>结束时间（必填）</p>
                     * @return EndTime <p>结束时间（必填）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间（必填）</p>
                     * @param _endTime <p>结束时间（必填）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID（必填）</p>
                     * @return ID <p>项目ID（必填）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID（必填）</p>
                     * @param _iD <p>项目ID（必填）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>聚合字段</p>
                     * @return GroupField <p>聚合字段</p>
                     * 
                     */
                    std::string GetGroupField() const;

                    /**
                     * 设置<p>聚合字段</p>
                     * @param _groupField <p>聚合字段</p>
                     * 
                     */
                    void SetGroupField(const std::string& _groupField);

                    /**
                     * 判断参数 GroupField 是否已赋值
                     * @return GroupField 是否已赋值
                     * 
                     */
                    bool GroupFieldHasBeenSet() const;

                private:

                    /**
                     * <p>排序方式  desc  asc（必填）</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>开始时间（必填）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>页数，第几页（注意：该字段已废弃！）</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>结束时间（必填）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID（必填）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>聚合字段</p>
                     */
                    std::string m_groupField;
                    bool m_groupFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGREQUEST_H_
