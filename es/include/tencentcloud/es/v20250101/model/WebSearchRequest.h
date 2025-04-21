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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * WebSearch请求参数结构体
                */
                class WebSearchRequest : public AbstractModel
                {
                public:
                    WebSearchRequest();
                    ~WebSearchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询
                     * @return Query 查询
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询
                     * @param _query 查询
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
                     * 获取搜索的网页数量，默认20
                     * @return Count 搜索的网页数量，默认20
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置搜索的网页数量，默认20
                     * @param _count 搜索的网页数量，默认20
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取指定域名，gov.cn 可匹配 *.gov.cn的域名。
                     * @return Site 指定域名，gov.cn 可匹配 *.gov.cn的域名。
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置指定域名，gov.cn 可匹配 *.gov.cn的域名。
                     * @param _site 指定域名，gov.cn 可匹配 *.gov.cn的域名。
                     * 
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取是否获取返回网页全文，默认 false。
                     * @return FetchContent 是否获取返回网页全文，默认 false。
                     * 
                     */
                    bool GetFetchContent() const;

                    /**
                     * 设置是否获取返回网页全文，默认 false。
                     * @param _fetchContent 是否获取返回网页全文，默认 false。
                     * 
                     */
                    void SetFetchContent(const bool& _fetchContent);

                    /**
                     * 判断参数 FetchContent 是否已赋值
                     * @return FetchContent 是否已赋值
                     * 
                     */
                    bool FetchContentHasBeenSet() const;

                    /**
                     * 获取域名白名单，在不指定 Site 时，只保存匹配白名单域名的网页。
                     * @return WhiteSites 域名白名单，在不指定 Site 时，只保存匹配白名单域名的网页。
                     * 
                     */
                    std::vector<std::string> GetWhiteSites() const;

                    /**
                     * 设置域名白名单，在不指定 Site 时，只保存匹配白名单域名的网页。
                     * @param _whiteSites 域名白名单，在不指定 Site 时，只保存匹配白名单域名的网页。
                     * 
                     */
                    void SetWhiteSites(const std::vector<std::string>& _whiteSites);

                    /**
                     * 判断参数 WhiteSites 是否已赋值
                     * @return WhiteSites 是否已赋值
                     * 
                     */
                    bool WhiteSitesHasBeenSet() const;

                    /**
                     * 获取域名黑名单，在不指定 Site 和白名单时，过滤黑名单中的域名。
                     * @return BlackSites 域名黑名单，在不指定 Site 和白名单时，过滤黑名单中的域名。
                     * 
                     */
                    std::vector<std::string> GetBlackSites() const;

                    /**
                     * 设置域名黑名单，在不指定 Site 和白名单时，过滤黑名单中的域名。
                     * @param _blackSites 域名黑名单，在不指定 Site 和白名单时，过滤黑名单中的域名。
                     * 
                     */
                    void SetBlackSites(const std::vector<std::string>& _blackSites);

                    /**
                     * 判断参数 BlackSites 是否已赋值
                     * @return BlackSites 是否已赋值
                     * 
                     */
                    bool BlackSitesHasBeenSet() const;

                    /**
                     * 获取秒级时间戳，搜索网页的开始时间，默认不限制开始时间。
                     * @return StartTime 秒级时间戳，搜索网页的开始时间，默认不限制开始时间。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置秒级时间戳，搜索网页的开始时间，默认不限制开始时间。
                     * @param _startTime 秒级时间戳，搜索网页的开始时间，默认不限制开始时间。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取秒级时间戳，搜索网页的结束时间，默认为现在。
                     * @return EndTime 秒级时间戳，搜索网页的结束时间，默认为现在。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置秒级时间戳，搜索网页的结束时间，默认为现在。
                     * @param _endTime 秒级时间戳，搜索网页的结束时间，默认为现在。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指定搜索引擎，可选混合搜索 mixed，或 bing, baidu, sogou, 默认为 sogou
                     * @return SearchEngine 指定搜索引擎，可选混合搜索 mixed，或 bing, baidu, sogou, 默认为 sogou
                     * 
                     */
                    std::string GetSearchEngine() const;

                    /**
                     * 设置指定搜索引擎，可选混合搜索 mixed，或 bing, baidu, sogou, 默认为 sogou
                     * @param _searchEngine 指定搜索引擎，可选混合搜索 mixed，或 bing, baidu, sogou, 默认为 sogou
                     * 
                     */
                    void SetSearchEngine(const std::string& _searchEngine);

                    /**
                     * 判断参数 SearchEngine 是否已赋值
                     * @return SearchEngine 是否已赋值
                     * 
                     */
                    bool SearchEngineHasBeenSet() const;

                private:

                    /**
                     * 查询
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 搜索的网页数量，默认20
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 指定域名，gov.cn 可匹配 *.gov.cn的域名。
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 是否获取返回网页全文，默认 false。
                     */
                    bool m_fetchContent;
                    bool m_fetchContentHasBeenSet;

                    /**
                     * 域名白名单，在不指定 Site 时，只保存匹配白名单域名的网页。
                     */
                    std::vector<std::string> m_whiteSites;
                    bool m_whiteSitesHasBeenSet;

                    /**
                     * 域名黑名单，在不指定 Site 和白名单时，过滤黑名单中的域名。
                     */
                    std::vector<std::string> m_blackSites;
                    bool m_blackSitesHasBeenSet;

                    /**
                     * 秒级时间戳，搜索网页的开始时间，默认不限制开始时间。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 秒级时间戳，搜索网页的结束时间，默认为现在。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定搜索引擎，可选混合搜索 mixed，或 bing, baidu, sogou, 默认为 sogou
                     */
                    std::string m_searchEngine;
                    bool m_searchEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_WEBSEARCHREQUEST_H_
