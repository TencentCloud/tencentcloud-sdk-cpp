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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_

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
                * DescribeLivePackageInfo请求参数结构体
                */
                class DescribeLivePackageInfoRequest : public AbstractModel
                {
                public:
                    DescribeLivePackageInfoRequest();
                    ~DescribeLivePackageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>包类型，可选值：<br>0：流量包<br>1：转码包<br>2: 连麦包。</p>
                     * @return PackageType <p>包类型，可选值：<br>0：流量包<br>1：转码包<br>2: 连麦包。</p>
                     * 
                     */
                    int64_t GetPackageType() const;

                    /**
                     * 设置<p>包类型，可选值：<br>0：流量包<br>1：转码包<br>2: 连麦包。</p>
                     * @param _packageType <p>包类型，可选值：<br>0：流量包<br>1：转码包<br>2: 连麦包。</p>
                     * 
                     */
                    void SetPackageType(const int64_t& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>排序规则:</p><ol><li>BuyTimeDesc： 最新购买的排在最前面</li><li>BuyTimeAsc： 最老购买的排在最前面</li><li>ExpireTimeDesc： 最后过期的排在最前面</li><li>ExpireTimeAsc：最先过期的排在最前面。</li></ol><p>注意：</p><ol><li>PackageType 为 2（连麦包） 的时候，不支持 3、4 排序。</li></ol>
                     * @return OrderBy <p>排序规则:</p><ol><li>BuyTimeDesc： 最新购买的排在最前面</li><li>BuyTimeAsc： 最老购买的排在最前面</li><li>ExpireTimeDesc： 最后过期的排在最前面</li><li>ExpireTimeAsc：最先过期的排在最前面。</li></ol><p>注意：</p><ol><li>PackageType 为 2（连麦包） 的时候，不支持 3、4 排序。</li></ol>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序规则:</p><ol><li>BuyTimeDesc： 最新购买的排在最前面</li><li>BuyTimeAsc： 最老购买的排在最前面</li><li>ExpireTimeDesc： 最后过期的排在最前面</li><li>ExpireTimeAsc：最先过期的排在最前面。</li></ol><p>注意：</p><ol><li>PackageType 为 2（连麦包） 的时候，不支持 3、4 排序。</li></ol>
                     * @param _orderBy <p>排序规则:</p><ol><li>BuyTimeDesc： 最新购买的排在最前面</li><li>BuyTimeAsc： 最老购买的排在最前面</li><li>ExpireTimeDesc： 最后过期的排在最前面</li><li>ExpireTimeAsc：最先过期的排在最前面。</li></ol><p>注意：</p><ol><li>PackageType 为 2（连麦包） 的时候，不支持 3、4 排序。</li></ol>
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
                     * 获取<p>取得第几页的数据，和 PageSize 同时传递才会生效。</p>
                     * @return PageNum <p>取得第几页的数据，和 PageSize 同时传递才会生效。</p>
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>取得第几页的数据，和 PageSize 同时传递才会生效。</p>
                     * @param _pageNum <p>取得第几页的数据，和 PageSize 同时传递才会生效。</p>
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取<p>分页大小，和 PageNum 同时传递才会生效。<br>取值：10 ～ 100 之间的任意整数。</p>
                     * @return PageSize <p>分页大小，和 PageNum 同时传递才会生效。<br>取值：10 ～ 100 之间的任意整数。</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小，和 PageNum 同时传递才会生效。<br>取值：10 ～ 100 之间的任意整数。</p>
                     * @param _pageSize <p>分页大小，和 PageNum 同时传递才会生效。<br>取值：10 ～ 100 之间的任意整数。</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>包类型，可选值：<br>0：流量包<br>1：转码包<br>2: 连麦包。</p>
                     */
                    int64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>排序规则:</p><ol><li>BuyTimeDesc： 最新购买的排在最前面</li><li>BuyTimeAsc： 最老购买的排在最前面</li><li>ExpireTimeDesc： 最后过期的排在最前面</li><li>ExpireTimeAsc：最先过期的排在最前面。</li></ol><p>注意：</p><ol><li>PackageType 为 2（连麦包） 的时候，不支持 3、4 排序。</li></ol>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>取得第几页的数据，和 PageSize 同时传递才会生效。</p>
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>分页大小，和 PageNum 同时传递才会生效。<br>取值：10 ～ 100 之间的任意整数。</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_
