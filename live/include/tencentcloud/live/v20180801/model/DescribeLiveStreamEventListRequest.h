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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_

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
                * DescribeLiveStreamEventList请求参数结构体
                */
                class DescribeLiveStreamEventListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamEventListRequest();
                    ~DescribeLiveStreamEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间。 UTC 格式，例如：2018-12-29T19:00:00Z。支持查询2个月内的历史记录。
                     * @return StartTime 起始时间。 UTC 格式，例如：2018-12-29T19:00:00Z。支持查询2个月内的历史记录。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间。 UTC 格式，例如：2018-12-29T19:00:00Z。支持查询2个月内的历史记录。
                     * @param _startTime 起始时间。 UTC 格式，例如：2018-12-29T19:00:00Z。支持查询2个月内的历史记录。
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
                     * 获取结束时间。UTC 格式，例如：2018-12-29T20:00:00Z。不超过当前时间，且和起始时间相差不得超过1个月。
                     * @return EndTime 结束时间。UTC 格式，例如：2018-12-29T20:00:00Z。不超过当前时间，且和起始时间相差不得超过1个月。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。UTC 格式，例如：2018-12-29T20:00:00Z。不超过当前时间，且和起始时间相差不得超过1个月。
                     * @param _endTime 结束时间。UTC 格式，例如：2018-12-29T20:00:00Z。不超过当前时间，且和起始时间相差不得超过1个月。
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
                     * 获取推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @param _appName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
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
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
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
                     * 获取流名称，不支持通配符（*）查询，默认模糊匹配。
可使用IsStrict字段改为精确查询。
                     * @return StreamName 流名称，不支持通配符（*）查询，默认模糊匹配。
可使用IsStrict字段改为精确查询。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称，不支持通配符（*）查询，默认模糊匹配。
可使用IsStrict字段改为精确查询。
                     * @param _streamName 流名称，不支持通配符（*）查询，默认模糊匹配。
可使用IsStrict字段改为精确查询。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取取得第几页。
默认值：1。
注： 目前只支持10000条内的查询。
                     * @return PageNum 取得第几页。
默认值：1。
注： 目前只支持10000条内的查询。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取得第几页。
默认值：1。
注： 目前只支持10000条内的查询。
                     * @param _pageNum 取得第几页。
默认值：1。
注： 目前只支持10000条内的查询。
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
取值范围：1~100 之间的任意整数。
默认值：10。
注： 目前只支持10000条内的查询。
                     * @return PageSize 分页大小。
最大值：100。
取值范围：1~100 之间的任意整数。
默认值：10。
注： 目前只支持10000条内的查询。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小。
最大值：100。
取值范围：1~100 之间的任意整数。
默认值：10。
注： 目前只支持10000条内的查询。
                     * @param _pageSize 分页大小。
最大值：100。
取值范围：1~100 之间的任意整数。
默认值：10。
注： 目前只支持10000条内的查询。
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
                     * 获取是否过滤，默认不过滤。
0：不进行任何过滤。
1：过滤掉开播失败的，只返回开播成功的。
                     * @return IsFilter 是否过滤，默认不过滤。
0：不进行任何过滤。
1：过滤掉开播失败的，只返回开播成功的。
                     * 
                     */
                    int64_t GetIsFilter() const;

                    /**
                     * 设置是否过滤，默认不过滤。
0：不进行任何过滤。
1：过滤掉开播失败的，只返回开播成功的。
                     * @param _isFilter 是否过滤，默认不过滤。
0：不进行任何过滤。
1：过滤掉开播失败的，只返回开播成功的。
                     * 
                     */
                    void SetIsFilter(const int64_t& _isFilter);

                    /**
                     * 判断参数 IsFilter 是否已赋值
                     * @return IsFilter 是否已赋值
                     * 
                     */
                    bool IsFilterHasBeenSet() const;

                    /**
                     * 获取是否精确查询，默认模糊匹配。
0：模糊匹配。
1：精确查询。
注：使用StreamName时该参数生效。
                     * @return IsStrict 是否精确查询，默认模糊匹配。
0：模糊匹配。
1：精确查询。
注：使用StreamName时该参数生效。
                     * 
                     */
                    int64_t GetIsStrict() const;

                    /**
                     * 设置是否精确查询，默认模糊匹配。
0：模糊匹配。
1：精确查询。
注：使用StreamName时该参数生效。
                     * @param _isStrict 是否精确查询，默认模糊匹配。
0：模糊匹配。
1：精确查询。
注：使用StreamName时该参数生效。
                     * 
                     */
                    void SetIsStrict(const int64_t& _isStrict);

                    /**
                     * 判断参数 IsStrict 是否已赋值
                     * @return IsStrict 是否已赋值
                     * 
                     */
                    bool IsStrictHasBeenSet() const;

                    /**
                     * 获取是否按结束时间正序显示，默认逆序。
0：逆序。
1：正序。
                     * @return IsAsc 是否按结束时间正序显示，默认逆序。
0：逆序。
1：正序。
                     * 
                     */
                    int64_t GetIsAsc() const;

                    /**
                     * 设置是否按结束时间正序显示，默认逆序。
0：逆序。
1：正序。
                     * @param _isAsc 是否按结束时间正序显示，默认逆序。
0：逆序。
1：正序。
                     * 
                     */
                    void SetIsAsc(const int64_t& _isAsc);

                    /**
                     * 判断参数 IsAsc 是否已赋值
                     * @return IsAsc 是否已赋值
                     * 
                     */
                    bool IsAscHasBeenSet() const;

                private:

                    /**
                     * 起始时间。 UTC 格式，例如：2018-12-29T19:00:00Z。支持查询2个月内的历史记录。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。UTC 格式，例如：2018-12-29T20:00:00Z。不超过当前时间，且和起始时间相差不得超过1个月。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 流名称，不支持通配符（*）查询，默认模糊匹配。
可使用IsStrict字段改为精确查询。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 取得第几页。
默认值：1。
注： 目前只支持10000条内的查询。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页大小。
最大值：100。
取值范围：1~100 之间的任意整数。
默认值：10。
注： 目前只支持10000条内的查询。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 是否过滤，默认不过滤。
0：不进行任何过滤。
1：过滤掉开播失败的，只返回开播成功的。
                     */
                    int64_t m_isFilter;
                    bool m_isFilterHasBeenSet;

                    /**
                     * 是否精确查询，默认模糊匹配。
0：模糊匹配。
1：精确查询。
注：使用StreamName时该参数生效。
                     */
                    int64_t m_isStrict;
                    bool m_isStrictHasBeenSet;

                    /**
                     * 是否按结束时间正序显示，默认逆序。
0：逆序。
1：正序。
                     */
                    int64_t m_isAsc;
                    bool m_isAscHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_
