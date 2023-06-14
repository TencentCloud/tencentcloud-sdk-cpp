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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_

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
                * DescribeLiveStreamPushInfoList请求参数结构体
                */
                class DescribeLiveStreamPushInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamPushInfoListRequest();
                    ~DescribeLiveStreamPushInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
                     * @return PushDomain 推流域名。
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _pushDomain 推流域名。
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取推流路径，与推流和播放地址中的AppName保持一致，默认为live。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为live。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致，默认为live。
                     * @param _appName 推流路径，与推流和播放地址中的AppName保持一致，默认为live。
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
                     * 获取页数，
范围[1,10000]，
默认值：1。
                     * @return PageNum 页数，
范围[1,10000]，
默认值：1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页数，
范围[1,10000]，
默认值：1。
                     * @param _pageNum 页数，
范围[1,10000]，
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
                     * 获取每页个数，
范围：[1,1000]，
默认值： 200。
                     * @return PageSize 每页个数，
范围：[1,1000]，
默认值： 200。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数，
范围：[1,1000]，
默认值： 200。
                     * @param _pageSize 每页个数，
范围：[1,1000]，
默认值： 200。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致，默认为live。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 页数，
范围[1,10000]，
默认值：1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页个数，
范围：[1,1000]，
默认值： 200。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_
