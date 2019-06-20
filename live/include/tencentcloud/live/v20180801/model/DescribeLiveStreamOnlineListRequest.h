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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_

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
                * DescribeLiveStreamOnlineList请求参数结构体
                */
                class DescribeLiveStreamOnlineListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamOnlineListRequest();
                    ~DescribeLiveStreamOnlineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param DomainName 推流域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @param AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取取得第几页，默认1。
                     * @return PageNum 取得第几页，默认1。
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取得第几页，默认1。
                     * @param PageNum 取得第几页，默认1。
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小，最大100。 
取值：10~100之间的任意整数。
默认值：10。
                     * @return PageSize 每页大小，最大100。 
取值：10~100之间的任意整数。
默认值：10。
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页大小，最大100。 
取值：10~100之间的任意整数。
默认值：10。
                     * @param PageSize 每页大小，最大100。 
取值：10~100之间的任意整数。
默认值：10。
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取流名称，用于精确查询。
                     * @return StreamName 流名称，用于精确查询。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称，用于精确查询。
                     * @param StreamName 流名称，用于精确查询。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 取得第几页，默认1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小，最大100。 
取值：10~100之间的任意整数。
默认值：10。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 流名称，用于精确查询。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_
