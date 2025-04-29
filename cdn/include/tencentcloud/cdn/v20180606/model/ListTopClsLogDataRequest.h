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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCLSLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCLSLOGDATAREQUEST_H_

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
                * ListTopClsLogData请求参数结构体
                */
                class ListTopClsLogDataRequest : public AbstractModel
                {
                public:
                    ListTopClsLogDataRequest();
                    ~ListTopClsLogDataRequest() = default;
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
                     * 获取需要查询的日志主题ID组合，多个以逗号分隔
                     * @return TopicIds 需要查询的日志主题ID组合，多个以逗号分隔
                     * 
                     */
                    std::string GetTopicIds() const;

                    /**
                     * 设置需要查询的日志主题ID组合，多个以逗号分隔
                     * @param _topicIds 需要查询的日志主题ID组合，多个以逗号分隔
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
                     * 获取需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS，时间跨度应小于10分钟
                     * @return EndTime 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS，时间跨度应小于10分钟
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS，时间跨度应小于10分钟
                     * @param _endTime 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS，时间跨度应小于10分钟
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
                     * 获取指定域名查询
                     * @return Domain 指定域名查询
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定域名查询
                     * @param _domain 指定域名查询
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取指定访问的URL查询，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * @return Url 指定访问的URL查询，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置指定访问的URL查询，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * @param _url 指定访问的URL查询，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

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
                     * 获取要查询的Top条数，建议最大值100，默认为10
                     * @return Limit 要查询的Top条数，建议最大值100，默认为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要查询的Top条数，建议最大值100，默认为10
                     * @param _limit 要查询的Top条数，建议最大值100，默认为10
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
                     * 获取按请求量排序， asc（升序）或者 desc（降序），默认为 desc
                     * @return Sort 按请求量排序， asc（升序）或者 desc（降序），默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置按请求量排序， asc（升序）或者 desc（降序），默认为 desc
                     * @param _sort 按请求量排序， asc（升序）或者 desc（降序），默认为 desc
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
                     * 需要查询的日志主题ID组合，多个以逗号分隔
                     */
                    std::string m_topicIds;
                    bool m_topicIdsHasBeenSet;

                    /**
                     * 需要查询的日志的起始时间，格式 YYYY-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 需要查询的日志的结束时间，格式 YYYY-mm-dd HH:MM:SS，时间跨度应小于10分钟
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定域名查询
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 指定访问的URL查询，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 接入渠道，cdn或者ecdn，默认值为cdn
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 要查询的Top条数，建议最大值100，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按请求量排序， asc（升序）或者 desc（降序），默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCLSLOGDATAREQUEST_H_
