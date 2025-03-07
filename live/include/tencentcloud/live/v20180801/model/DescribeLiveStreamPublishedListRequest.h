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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveStreamPublishedList请求参数结构体
                */
                class DescribeLiveStreamPublishedListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamPublishedListRequest();
                    ~DescribeLiveStreamPublishedListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取您的推流域名。
                     * @return DomainName 您的推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置您的推流域名。
                     * @param _domainName 您的推流域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取结束时间。UTC 格式，例如：2016-06-30T19:00:00Z。不超过当前时间。注意：EndTime和StartTime相差不可超过1个月。
                     * @return EndTime 结束时间。UTC 格式，例如：2016-06-30T19:00:00Z。不超过当前时间。注意：EndTime和StartTime相差不可超过1个月。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。UTC 格式，例如：2016-06-30T19:00:00Z。不超过当前时间。注意：EndTime和StartTime相差不可超过1个月。
                     * @param _endTime 结束时间。UTC 格式，例如：2016-06-30T19:00:00Z。不超过当前时间。注意：EndTime和StartTime相差不可超过1个月。
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
                     * 获取起始时间。 UTC 格式，例如：2016-06-29T19:00:00Z。最长支持查询2个月内数据。
                     * @return StartTime 起始时间。 UTC 格式，例如：2016-06-29T19:00:00Z。最长支持查询2个月内数据。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间。 UTC 格式，例如：2016-06-29T19:00:00Z。最长支持查询2个月内数据。
                     * @param _startTime 起始时间。 UTC 格式，例如：2016-06-29T19:00:00Z。最长支持查询2个月内数据。
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
                     * 获取推流路径，与推流和播放地址中的 AppName 保持一致，默认为 live。不支持模糊匹配。
                     * @return AppName 推流路径，与推流和播放地址中的 AppName 保持一致，默认为 live。不支持模糊匹配。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的 AppName 保持一致，默认为 live。不支持模糊匹配。
                     * @param _appName 推流路径，与推流和播放地址中的 AppName 保持一致，默认为 live。不支持模糊匹配。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取取得第几页。
默认值：1。
                     * @return PageNum 取得第几页。
默认值：1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取得第几页。
默认值：1。
                     * @param _pageNum 取得第几页。
默认值：1。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取分页大小。
最大值：100。
取值范围：10~100 之前的任意整数。
默认值：10。
                     * @return PageSize 分页大小。
最大值：100。
取值范围：10~100 之前的任意整数。
默认值：10。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小。
最大值：100。
取值范围：10~100 之前的任意整数。
默认值：10。
                     * @param _pageSize 分页大小。
最大值：100。
取值范围：10~100 之前的任意整数。
默认值：10。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取流名称，支持模糊匹配。
                     * @return StreamName 流名称，支持模糊匹配。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称，支持模糊匹配。
                     * @param _streamName 流名称，支持模糊匹配。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * 您的推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 结束时间。UTC 格式，例如：2016-06-30T19:00:00Z。不超过当前时间。注意：EndTime和StartTime相差不可超过1个月。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 起始时间。 UTC 格式，例如：2016-06-29T19:00:00Z。最长支持查询2个月内数据。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的 AppName 保持一致，默认为 live。不支持模糊匹配。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 取得第几页。
默认值：1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页大小。
最大值：100。
取值范围：10~100 之前的任意整数。
默认值：10。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 流名称，支持模糊匹配。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_
