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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeDispenseExternalRuleList请求参数结构体
                */
                class DescribeDispenseExternalRuleListRequest : public AbstractModel
                {
                public:
                    DescribeDispenseExternalRuleListRequest();
                    ~DescribeDispenseExternalRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页数
                     * @return Page 页数
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页数
                     * @param _page 页数
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取页面大小
                     * @return PageSize 页面大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页面大小
                     * @param _pageSize 页面大小
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
                     * 获取转发部署地域
                     * @return DispenseRegions 转发部署地域
                     * 
                     */
                    std::vector<std::string> GetDispenseRegions() const;

                    /**
                     * 设置转发部署地域
                     * @param _dispenseRegions 转发部署地域
                     * 
                     */
                    void SetDispenseRegions(const std::vector<std::string>& _dispenseRegions);

                    /**
                     * 判断参数 DispenseRegions 是否已赋值
                     * @return DispenseRegions 是否已赋值
                     * 
                     */
                    bool DispenseRegionsHasBeenSet() const;

                    /**
                     * 获取关键字搜索规则名
                     * @return Keyword 关键字搜索规则名
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字搜索规则名
                     * @param _keyword 关键字搜索规则名
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 页数
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页面大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 转发部署地域
                     */
                    std::vector<std::string> m_dispenseRegions;
                    bool m_dispenseRegionsHasBeenSet;

                    /**
                     * 关键字搜索规则名
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTREQUEST_H_
