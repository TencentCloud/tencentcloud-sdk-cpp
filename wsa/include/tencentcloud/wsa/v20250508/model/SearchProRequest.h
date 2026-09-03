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

#ifndef TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPROREQUEST_H_
#define TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPROREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wsa
    {
        namespace V20250508
        {
            namespace Model
            {
                /**
                * SearchPro请求参数结构体
                */
                class SearchProRequest : public AbstractModel
                {
                public:
                    SearchProRequest();
                    ~SearchProRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索词</p>
                     * @return Query <p>搜索词</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>搜索词</p>
                     * @param _query <p>搜索词</p>
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
                     * 获取<p>返回结果类型，不传默认为0。（<strong>仅标准版、尊享版支持该参数</strong>）</p><p>枚举值：</p><ul><li>0： 公开网页信源结果（自然结果）</li><li>1： 优质权威垂直信源结果（VR 卡）</li><li>2： 混合结果（自然结果+VR卡）</li></ul>
                     * @return Mode <p>返回结果类型，不传默认为0。（<strong>仅标准版、尊享版支持该参数</strong>）</p><p>枚举值：</p><ul><li>0： 公开网页信源结果（自然结果）</li><li>1： 优质权威垂直信源结果（VR 卡）</li><li>2： 混合结果（自然结果+VR卡）</li></ul>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>返回结果类型，不传默认为0。（<strong>仅标准版、尊享版支持该参数</strong>）</p><p>枚举值：</p><ul><li>0： 公开网页信源结果（自然结果）</li><li>1： 优质权威垂直信源结果（VR 卡）</li><li>2： 混合结果（自然结果+VR卡）</li></ul>
                     * @param _mode <p>返回结果类型，不传默认为0。（<strong>仅标准版、尊享版支持该参数</strong>）</p><p>枚举值：</p><ul><li>0： 公开网页信源结果（自然结果）</li><li>1： 优质权威垂直信源结果（VR 卡）</li><li>2： 混合结果（自然结果+VR卡）</li></ul>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>指定网址搜索/过滤。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li>指定网址搜索：需要查询某个特定网址的内容时，传入&quot;Site=qq.com&quot;，实现只搜索qq.com的结果；每次搜索仅支持指定一个域名。</li><li>指定网址过滤：需要排除某个特定网址的内容时，传入&quot;Site=exclude:qq.com|sohu.com&quot;，实现过滤qq.com和sohu.com的结果；每次搜索最多支持过滤五个域名。</li></ul><p>注意： 该参数与mode参数共同使用时，仅对公开网页信源结果（自然结果）生效，对优质权威垂直信源结果（VR卡）不生效。</p>
                     * @return Site <p>指定网址搜索/过滤。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li>指定网址搜索：需要查询某个特定网址的内容时，传入&quot;Site=qq.com&quot;，实现只搜索qq.com的结果；每次搜索仅支持指定一个域名。</li><li>指定网址过滤：需要排除某个特定网址的内容时，传入&quot;Site=exclude:qq.com|sohu.com&quot;，实现过滤qq.com和sohu.com的结果；每次搜索最多支持过滤五个域名。</li></ul><p>注意： 该参数与mode参数共同使用时，仅对公开网页信源结果（自然结果）生效，对优质权威垂直信源结果（VR卡）不生效。</p>
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置<p>指定网址搜索/过滤。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li>指定网址搜索：需要查询某个特定网址的内容时，传入&quot;Site=qq.com&quot;，实现只搜索qq.com的结果；每次搜索仅支持指定一个域名。</li><li>指定网址过滤：需要排除某个特定网址的内容时，传入&quot;Site=exclude:qq.com|sohu.com&quot;，实现过滤qq.com和sohu.com的结果；每次搜索最多支持过滤五个域名。</li></ul><p>注意： 该参数与mode参数共同使用时，仅对公开网页信源结果（自然结果）生效，对优质权威垂直信源结果（VR卡）不生效。</p>
                     * @param _site <p>指定网址搜索/过滤。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li>指定网址搜索：需要查询某个特定网址的内容时，传入&quot;Site=qq.com&quot;，实现只搜索qq.com的结果；每次搜索仅支持指定一个域名。</li><li>指定网址过滤：需要排除某个特定网址的内容时，传入&quot;Site=exclude:qq.com|sohu.com&quot;，实现过滤qq.com和sohu.com的结果；每次搜索最多支持过滤五个域名。</li></ul><p>注意： 该参数与mode参数共同使用时，仅对公开网页信源结果（自然结果）生效，对优质权威垂直信源结果（VR卡）不生效。</p>
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
                     * 获取<p>控制返回结果条数，可取值：cnt=10/20/30/40/50。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>10： 返回10条结果</li><li>20： 返回20条结果</li><li>30： 返回30条结果</li><li>40： 返回40条结果</li><li>50： 返回50条结果</li></ul>
                     * @return Cnt <p>控制返回结果条数，可取值：cnt=10/20/30/40/50。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>10： 返回10条结果</li><li>20： 返回20条结果</li><li>30： 返回30条结果</li><li>40： 返回40条结果</li><li>50： 返回50条结果</li></ul>
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置<p>控制返回结果条数，可取值：cnt=10/20/30/40/50。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>10： 返回10条结果</li><li>20： 返回20条结果</li><li>30： 返回30条结果</li><li>40： 返回40条结果</li><li>50： 返回50条结果</li></ul>
                     * @param _cnt <p>控制返回结果条数，可取值：cnt=10/20/30/40/50。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>10： 返回10条结果</li><li>20： 返回20条结果</li><li>30： 返回30条结果</li><li>40： 返回40条结果</li><li>50： 返回50条结果</li></ul>
                     * 
                     */
                    void SetCnt(const uint64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                    /**
                     * 获取<p>垂直领域搜索。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>gov： 政府</li><li>news： 新闻</li><li>acad： 学术</li><li>finance： 财经</li></ul>
                     * @return Industry <p>垂直领域搜索。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>gov： 政府</li><li>news： 新闻</li><li>acad： 学术</li><li>finance： 财经</li></ul>
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置<p>垂直领域搜索。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>gov： 政府</li><li>news： 新闻</li><li>acad： 学术</li><li>finance： 财经</li></ul>
                     * @param _industry <p>垂直领域搜索。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>gov： 政府</li><li>news： 新闻</li><li>acad： 学术</li><li>finance： 财经</li></ul>
                     * 
                     */
                    void SetIndustry(const std::string& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                    /**
                     * 获取<p>搜索时效范围，以下五种入参形态不支持混合使用。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li><p>d[N]：最近N天，N取值1-30整数，N值为空时默认N=1。</p></li><li><p>m[N]：最近N月，N取值1-12整数，N值为空时默认N=1。</p></li><li><p>y[N]：最近N年，N取值1-5整数，N值为空时默认N=1。</p></li><li><p>yyyy-mm-dd：指定某一日。（不得早于1970-01-01，不得晚于请求当天日期）</p></li><li><p>yyyy-mm-dd,yyyy-mm-dd：从日期A至日期B，包含AB。（日期B不得晚于日期A；二者均不得早于1970-01-01，不得晚于请求当天日期）</p></li></ul><p>示例：2026.6.15分别传参d2/m2/y2进行搜索，则搜索结果的时间范围分别为“2026.6.15、2026.6.14”/“2026.6、2026.5”/“2026、2025”，以此类推。</p><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>2026-08-20： 2026-08-20当天</li><li>2026-08-20,2026-08-30： 2026-08-20至2026-08-30</li></ul>
                     * @return Freshness <p>搜索时效范围，以下五种入参形态不支持混合使用。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li><p>d[N]：最近N天，N取值1-30整数，N值为空时默认N=1。</p></li><li><p>m[N]：最近N月，N取值1-12整数，N值为空时默认N=1。</p></li><li><p>y[N]：最近N年，N取值1-5整数，N值为空时默认N=1。</p></li><li><p>yyyy-mm-dd：指定某一日。（不得早于1970-01-01，不得晚于请求当天日期）</p></li><li><p>yyyy-mm-dd,yyyy-mm-dd：从日期A至日期B，包含AB。（日期B不得晚于日期A；二者均不得早于1970-01-01，不得晚于请求当天日期）</p></li></ul><p>示例：2026.6.15分别传参d2/m2/y2进行搜索，则搜索结果的时间范围分别为“2026.6.15、2026.6.14”/“2026.6、2026.5”/“2026、2025”，以此类推。</p><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>2026-08-20： 2026-08-20当天</li><li>2026-08-20,2026-08-30： 2026-08-20至2026-08-30</li></ul>
                     * 
                     */
                    std::string GetFreshness() const;

                    /**
                     * 设置<p>搜索时效范围，以下五种入参形态不支持混合使用。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li><p>d[N]：最近N天，N取值1-30整数，N值为空时默认N=1。</p></li><li><p>m[N]：最近N月，N取值1-12整数，N值为空时默认N=1。</p></li><li><p>y[N]：最近N年，N取值1-5整数，N值为空时默认N=1。</p></li><li><p>yyyy-mm-dd：指定某一日。（不得早于1970-01-01，不得晚于请求当天日期）</p></li><li><p>yyyy-mm-dd,yyyy-mm-dd：从日期A至日期B，包含AB。（日期B不得晚于日期A；二者均不得早于1970-01-01，不得晚于请求当天日期）</p></li></ul><p>示例：2026.6.15分别传参d2/m2/y2进行搜索，则搜索结果的时间范围分别为“2026.6.15、2026.6.14”/“2026.6、2026.5”/“2026、2025”，以此类推。</p><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>2026-08-20： 2026-08-20当天</li><li>2026-08-20,2026-08-30： 2026-08-20至2026-08-30</li></ul>
                     * @param _freshness <p>搜索时效范围，以下五种入参形态不支持混合使用。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li><p>d[N]：最近N天，N取值1-30整数，N值为空时默认N=1。</p></li><li><p>m[N]：最近N月，N取值1-12整数，N值为空时默认N=1。</p></li><li><p>y[N]：最近N年，N取值1-5整数，N值为空时默认N=1。</p></li><li><p>yyyy-mm-dd：指定某一日。（不得早于1970-01-01，不得晚于请求当天日期）</p></li><li><p>yyyy-mm-dd,yyyy-mm-dd：从日期A至日期B，包含AB。（日期B不得晚于日期A；二者均不得早于1970-01-01，不得晚于请求当天日期）</p></li></ul><p>示例：2026.6.15分别传参d2/m2/y2进行搜索，则搜索结果的时间范围分别为“2026.6.15、2026.6.14”/“2026.6、2026.5”/“2026、2025”，以此类推。</p><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>2026-08-20： 2026-08-20当天</li><li>2026-08-20,2026-08-30： 2026-08-20至2026-08-30</li></ul>
                     * 
                     */
                    void SetFreshness(const std::string& _freshness);

                    /**
                     * 判断参数 Freshness 是否已赋值
                     * @return Freshness 是否已赋值
                     * 
                     */
                    bool FreshnessHasBeenSet() const;

                    /**
                     * 获取<p>返回附件子链信息（<strong>仅旗舰版支持该参数</strong>）</p><p>附件子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * @return Deeplinks <p>返回附件子链信息（<strong>仅旗舰版支持该参数</strong>）</p><p>附件子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * 
                     */
                    bool GetDeeplinks() const;

                    /**
                     * 设置<p>返回附件子链信息（<strong>仅旗舰版支持该参数</strong>）</p><p>附件子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * @param _deeplinks <p>返回附件子链信息（<strong>仅旗舰版支持该参数</strong>）</p><p>附件子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * 
                     */
                    void SetDeeplinks(const bool& _deeplinks);

                    /**
                     * 判断参数 Deeplinks 是否已赋值
                     * @return Deeplinks 是否已赋值
                     * 
                     */
                    bool DeeplinksHasBeenSet() const;

                private:

                    /**
                     * <p>搜索词</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>返回结果类型，不传默认为0。（<strong>仅标准版、尊享版支持该参数</strong>）</p><p>枚举值：</p><ul><li>0： 公开网页信源结果（自然结果）</li><li>1： 优质权威垂直信源结果（VR 卡）</li><li>2： 混合结果（自然结果+VR卡）</li></ul>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>指定网址搜索/过滤。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li>指定网址搜索：需要查询某个特定网址的内容时，传入&quot;Site=qq.com&quot;，实现只搜索qq.com的结果；每次搜索仅支持指定一个域名。</li><li>指定网址过滤：需要排除某个特定网址的内容时，传入&quot;Site=exclude:qq.com|sohu.com&quot;，实现过滤qq.com和sohu.com的结果；每次搜索最多支持过滤五个域名。</li></ul><p>注意： 该参数与mode参数共同使用时，仅对公开网页信源结果（自然结果）生效，对优质权威垂直信源结果（VR卡）不生效。</p>
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * <p>控制返回结果条数，可取值：cnt=10/20/30/40/50。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>10： 返回10条结果</li><li>20： 返回20条结果</li><li>30： 返回30条结果</li><li>40： 返回40条结果</li><li>50： 返回50条结果</li></ul>
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * <p>垂直领域搜索。（<strong>仅尊享版、旗舰版支持该参数</strong>）</p><p>枚举值：</p><ul><li>gov： 政府</li><li>news： 新闻</li><li>acad： 学术</li><li>finance： 财经</li></ul>
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * <p>搜索时效范围，以下五种入参形态不支持混合使用。（<strong>仅标准版、尊享版、旗舰版支持该参数</strong>）</p><ul><li><p>d[N]：最近N天，N取值1-30整数，N值为空时默认N=1。</p></li><li><p>m[N]：最近N月，N取值1-12整数，N值为空时默认N=1。</p></li><li><p>y[N]：最近N年，N取值1-5整数，N值为空时默认N=1。</p></li><li><p>yyyy-mm-dd：指定某一日。（不得早于1970-01-01，不得晚于请求当天日期）</p></li><li><p>yyyy-mm-dd,yyyy-mm-dd：从日期A至日期B，包含AB。（日期B不得晚于日期A；二者均不得早于1970-01-01，不得晚于请求当天日期）</p></li></ul><p>示例：2026.6.15分别传参d2/m2/y2进行搜索，则搜索结果的时间范围分别为“2026.6.15、2026.6.14”/“2026.6、2026.5”/“2026、2025”，以此类推。</p><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>2026-08-20： 2026-08-20当天</li><li>2026-08-20,2026-08-30： 2026-08-20至2026-08-30</li></ul>
                     */
                    std::string m_freshness;
                    bool m_freshnessHasBeenSet;

                    /**
                     * <p>返回附件子链信息（<strong>仅旗舰版支持该参数</strong>）</p><p>附件子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     */
                    bool m_deeplinks;
                    bool m_deeplinksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPROREQUEST_H_
