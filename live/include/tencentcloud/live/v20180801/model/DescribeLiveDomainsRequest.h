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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_

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
                * DescribeLiveDomains请求参数结构体
                */
                class DescribeLiveDomainsRequest : public AbstractModel
                {
                public:
                    DescribeLiveDomainsRequest();
                    ~DescribeLiveDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名状态过滤。0-停用，1-启用。
                     * @return DomainStatus 域名状态过滤。0-停用，1-启用。
                     * 
                     */
                    uint64_t GetDomainStatus() const;

                    /**
                     * 设置域名状态过滤。0-停用，1-启用。
                     * @param _domainStatus 域名状态过滤。0-停用，1-启用。
                     * 
                     */
                    void SetDomainStatus(const uint64_t& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取域名类型过滤。0-推流，1-播放。
                     * @return DomainType 域名类型过滤。0-推流，1-播放。
                     * 
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 设置域名类型过滤。0-推流，1-播放。
                     * @param _domainType 域名类型过滤。0-推流，1-播放。
                     * 
                     */
                    void SetDomainType(const uint64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取分页大小，范围：10~100。默认10。
                     * @return PageSize 分页大小，范围：10~100。默认10。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，范围：10~100。默认10。
                     * @param _pageSize 分页大小，范围：10~100。默认10。
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
                     * 获取取第几页，范围：1~100000。默认1。
                     * @return PageNum 取第几页，范围：1~100000。默认1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取第几页，范围：1~100000。默认1。
                     * @param _pageNum 取第几页，范围：1~100000。默认1。
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
                     * 获取0 普通直播 1慢直播 默认0。
                     * @return IsDelayLive 0 普通直播 1慢直播 默认0。
                     * 
                     */
                    uint64_t GetIsDelayLive() const;

                    /**
                     * 设置0 普通直播 1慢直播 默认0。
                     * @param _isDelayLive 0 普通直播 1慢直播 默认0。
                     * 
                     */
                    void SetIsDelayLive(const uint64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取域名前缀。
                     * @return DomainPrefix 域名前缀。
                     * 
                     */
                    std::string GetDomainPrefix() const;

                    /**
                     * 设置域名前缀。
                     * @param _domainPrefix 域名前缀。
                     * 
                     */
                    void SetDomainPrefix(const std::string& _domainPrefix);

                    /**
                     * 判断参数 DomainPrefix 是否已赋值
                     * @return DomainPrefix 是否已赋值
                     * 
                     */
                    bool DomainPrefixHasBeenSet() const;

                    /**
                     * 获取播放区域，只在 DomainType=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * @return PlayType 播放区域，只在 DomainType=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * 
                     */
                    uint64_t GetPlayType() const;

                    /**
                     * 设置播放区域，只在 DomainType=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * @param _playType 播放区域，只在 DomainType=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * 
                     */
                    void SetPlayType(const uint64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     * 
                     */
                    bool PlayTypeHasBeenSet() const;

                private:

                    /**
                     * 域名状态过滤。0-停用，1-启用。
                     */
                    uint64_t m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * 域名类型过滤。0-推流，1-播放。
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * 分页大小，范围：10~100。默认10。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 取第几页，范围：1~100000。默认1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 0 普通直播 1慢直播 默认0。
                     */
                    uint64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * 域名前缀。
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * 播放区域，只在 DomainType=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     */
                    uint64_t m_playType;
                    bool m_playTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_
