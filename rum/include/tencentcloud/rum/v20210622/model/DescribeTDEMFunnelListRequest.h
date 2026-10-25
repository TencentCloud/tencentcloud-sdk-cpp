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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELLISTREQUEST_H_

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
                * DescribeTDEMFunnelList请求参数结构体
                */
                class DescribeTDEMFunnelListRequest : public AbstractModel
                {
                public:
                    DescribeTDEMFunnelListRequest();
                    ~DescribeTDEMFunnelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>关键字，用于过滤漏斗名</p>
                     * @return Keyword <p>关键字，用于过滤漏斗名</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字，用于过滤漏斗名</p>
                     * @param _keyword <p>关键字，用于过滤漏斗名</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>漏斗状态</p>
                     * @return Status <p>漏斗状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>漏斗状态</p>
                     * @param _status <p>漏斗状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>页面号</p>
                     * @return Page <p>页面号</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页面号</p>
                     * @param _page <p>页面号</p>
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
                     * 获取<p>页面数量</p>
                     * @return PageSize <p>页面数量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>页面数量</p>
                     * @param _pageSize <p>页面数量</p>
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
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>关键字，用于过滤漏斗名</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>漏斗状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>页面号</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>页面数量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELLISTREQUEST_H_
