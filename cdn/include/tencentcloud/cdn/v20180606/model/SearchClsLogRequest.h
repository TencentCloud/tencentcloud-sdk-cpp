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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SearchClsLog请求参数结构体
                */
                class SearchClsLogRequest : public AbstractModel
                {
                public:
                    SearchClsLogRequest();
                    ~SearchClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的日志集ID
                     * @return LogsetId 需要查询的日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置需要查询的日志集ID
                     * @param _logsetId 需要查询的日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取需要查询的日志主题ID组合，以逗号分隔
                     * @return TopicIds 需要查询的日志主题ID组合，以逗号分隔
                     * 
                     */
                    std::string GetTopicIds() const;

                    /**
                     * 设置需要查询的日志主题ID组合，以逗号分隔
                     * @param _topicIds 需要查询的日志主题ID组合，以逗号分隔
                     * 
                     */
                    void SetTopicIds(const std::string& _topicIds);

                    /**
                     * 判断参数 TopicIds 是否已赋值
                     * @return TopicIds 是否已赋值
                     * 
                     */
                    bool TopicIdsHasBeenSet() const;

                    /**
                     * 获取需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
                     * @return StartTime 需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
                     * @param _startTime 需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
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
                     * 获取需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS
                     * @return EndTime 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS
                     * @param _endTime 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS
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
                     * 获取单次要返回的日志条数，单次返回的最大条数为100
                     * @return Limit 单次要返回的日志条数，单次返回的最大条数为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次要返回的日志条数，单次返回的最大条数为100
                     * @param _limit 单次要返回的日志条数，单次返回的最大条数为100
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
                     * 获取接入渠道，cdn或者ecdn，默认值为cdn
                     * @return Channel 接入渠道，cdn或者ecdn，默认值为cdn
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置接入渠道，cdn或者ecdn，默认值为cdn
                     * @param _channel 接入渠道，cdn或者ecdn，默认值为cdn
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取需要查询的内容，详情请参考https://cloud.tencent.com/document/product/614/16982
                     * @return Query 需要查询的内容，详情请参考https://cloud.tencent.com/document/product/614/16982
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置需要查询的内容，详情请参考https://cloud.tencent.com/document/product/614/16982
                     * @param _query 需要查询的内容，详情请参考https://cloud.tencent.com/document/product/614/16982
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
                     * 获取加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * @return Context 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * @param _context 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取按日志时间排序， asc（升序）或者 desc（降序），默认为 desc
                     * @return Sort 按日志时间排序， asc（升序）或者 desc（降序），默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置按日志时间排序， asc（升序）或者 desc（降序），默认为 desc
                     * @param _sort 按日志时间排序， asc（升序）或者 desc（降序），默认为 desc
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 需要查询的日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 需要查询的日志主题ID组合，以逗号分隔
                     */
                    std::string m_topicIds;
                    bool m_topicIdsHasBeenSet;

                    /**
                     * 需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 单次要返回的日志条数，单次返回的最大条数为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 接入渠道，cdn或者ecdn，默认值为cdn
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 需要查询的内容，详情请参考https://cloud.tencent.com/document/product/614/16982
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 加载更多使用，透传上次返回的 context 值，获取后续的日志内容，通过游标最多可获取10000条，请尽可能缩小时间范围
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 按日志时间排序， asc（升序）或者 desc（降序），默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SEARCHCLSLOGREQUEST_H_
