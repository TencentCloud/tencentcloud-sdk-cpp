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
                     * 获取排序方式  desc  asc（必填）
                     * @return OrderBy 排序方式  desc  asc（必填）
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序方式  desc  asc（必填）
                     * @param _orderBy 排序方式  desc  asc（必填）
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
                     * 获取开始时间（必填）
                     * @return StartTime 开始时间（必填）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（必填）
                     * @param _startTime 开始时间（必填）
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
                     * 获取单次查询返回的原始日志条数，最大值为100（必填）
                     * @return Limit 单次查询返回的原始日志条数，最大值为100（必填）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的原始日志条数，最大值为100（必填）
                     * @param _limit 单次查询返回的原始日志条数，最大值为100（必填）
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
                     * 获取页数，第几页
                     * @return Page 页数，第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页数，第几页
                     * @param _page 页数，第几页
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
                     * 获取查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * @return Query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * @param _query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
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
                     * 获取结束时间（必填）
                     * @return EndTime 结束时间（必填）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（必填）
                     * @param _endTime 结束时间（必填）
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
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param _iD 项目ID（必填）
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
                     * 获取聚合字段
                     * @return GroupField 聚合字段
                     * 
                     */
                    std::string GetGroupField() const;

                    /**
                     * 设置聚合字段
                     * @param _groupField 聚合字段
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
                     * 排序方式  desc  asc（必填）
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 开始时间（必填）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页数，第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 结束时间（必填）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 聚合字段
                     */
                    std::string m_groupField;
                    bool m_groupFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGREQUEST_H_
