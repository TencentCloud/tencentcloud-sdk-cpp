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
                     * 获取<p>返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）</p>
                     * @return Mode <p>返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）</p>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）</p>
                     * @param _mode <p>返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）</p>
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
                     * 获取<p>指定域名站内搜索（用于过滤自然检索结果）<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @return Site <p>指定域名站内搜索（用于过滤自然检索结果）<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置<p>指定域名站内搜索（用于过滤自然检索结果）<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @param _site <p>指定域名站内搜索（用于过滤自然检索结果）<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
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
                     * 获取<p>起始时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @return FromTime <p>起始时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * 
                     */
                    int64_t GetFromTime() const;

                    /**
                     * 设置<p>起始时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @param _fromTime <p>起始时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * 
                     */
                    void SetFromTime(const int64_t& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @return ToTime <p>结束时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * 
                     */
                    int64_t GetToTime() const;

                    /**
                     * 设置<p>结束时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * @param _toTime <p>结束时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     * 
                     */
                    void SetToTime(const int64_t& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取<p>cnt=10/20/30/40/50，最多可支持返回50条搜索结果，<strong>仅限尊享版使用</strong></p>
                     * @return Cnt <p>cnt=10/20/30/40/50，最多可支持返回50条搜索结果，<strong>仅限尊享版使用</strong></p>
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置<p>cnt=10/20/30/40/50，最多可支持返回50条搜索结果，<strong>仅限尊享版使用</strong></p>
                     * @param _cnt <p>cnt=10/20/30/40/50，最多可支持返回50条搜索结果，<strong>仅限尊享版使用</strong></p>
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
                     * 获取<p>Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，<strong>仅限尊享版使用</strong></p>
                     * @return Industry <p>Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，<strong>仅限尊享版使用</strong></p>
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置<p>Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，<strong>仅限尊享版使用</strong></p>
                     * @param _industry <p>Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，<strong>仅限尊享版使用</strong></p>
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
                     * 获取<p>搜索实效范围（仅旗舰版参数）</p><ul><li>d[N]：最近N天，N取值1-30整数。</li><li>m[N]：最近N月，N取值1-12整数。</li><li>y[N]：最近N年，N取值1-5整数。</li></ul><p>示例说明：</p><ul><li>d1/m1/y1：当天/当月/当年。<br>例如，2026.6.15分别传参d1/m1/y1进行搜索，则搜索结果的时间范围分别为“2026.6.15”/“2026.6”/“2026”，以此类推。</li><li>d/m/y：N值为空时，默认N=1，即等效入参d1/m1/y1。</li><li>未传参时，默认不生效。</li></ul><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>d： 当天</li><li>m： 当月</li><li>y： 当年</li></ul>
                     * @return Freshness <p>搜索实效范围（仅旗舰版参数）</p><ul><li>d[N]：最近N天，N取值1-30整数。</li><li>m[N]：最近N月，N取值1-12整数。</li><li>y[N]：最近N年，N取值1-5整数。</li></ul><p>示例说明：</p><ul><li>d1/m1/y1：当天/当月/当年。<br>例如，2026.6.15分别传参d1/m1/y1进行搜索，则搜索结果的时间范围分别为“2026.6.15”/“2026.6”/“2026”，以此类推。</li><li>d/m/y：N值为空时，默认N=1，即等效入参d1/m1/y1。</li><li>未传参时，默认不生效。</li></ul><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>d： 当天</li><li>m： 当月</li><li>y： 当年</li></ul>
                     * 
                     */
                    std::string GetFreshness() const;

                    /**
                     * 设置<p>搜索实效范围（仅旗舰版参数）</p><ul><li>d[N]：最近N天，N取值1-30整数。</li><li>m[N]：最近N月，N取值1-12整数。</li><li>y[N]：最近N年，N取值1-5整数。</li></ul><p>示例说明：</p><ul><li>d1/m1/y1：当天/当月/当年。<br>例如，2026.6.15分别传参d1/m1/y1进行搜索，则搜索结果的时间范围分别为“2026.6.15”/“2026.6”/“2026”，以此类推。</li><li>d/m/y：N值为空时，默认N=1，即等效入参d1/m1/y1。</li><li>未传参时，默认不生效。</li></ul><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>d： 当天</li><li>m： 当月</li><li>y： 当年</li></ul>
                     * @param _freshness <p>搜索实效范围（仅旗舰版参数）</p><ul><li>d[N]：最近N天，N取值1-30整数。</li><li>m[N]：最近N月，N取值1-12整数。</li><li>y[N]：最近N年，N取值1-5整数。</li></ul><p>示例说明：</p><ul><li>d1/m1/y1：当天/当月/当年。<br>例如，2026.6.15分别传参d1/m1/y1进行搜索，则搜索结果的时间范围分别为“2026.6.15”/“2026.6”/“2026”，以此类推。</li><li>d/m/y：N值为空时，默认N=1，即等效入参d1/m1/y1。</li><li>未传参时，默认不生效。</li></ul><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>d： 当天</li><li>m： 当月</li><li>y： 当年</li></ul>
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
                     * 获取<p>返回子链信息（仅旗舰版参数）</p><p>子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * @return Deeplinks <p>返回子链信息（仅旗舰版参数）</p><p>子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * 
                     */
                    bool GetDeeplinks() const;

                    /**
                     * 设置<p>返回子链信息（仅旗舰版参数）</p><p>子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     * @param _deeplinks <p>返回子链信息（仅旗舰版参数）</p><p>子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
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
                     * <p>返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）</p>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>指定域名站内搜索（用于过滤自然检索结果）<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * <p>起始时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     */
                    int64_t m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * <p>结束时间（用于过滤自然检索结果），精确到秒时间戳格式<br>注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效</p>
                     */
                    int64_t m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * <p>cnt=10/20/30/40/50，最多可支持返回50条搜索结果，<strong>仅限尊享版使用</strong></p>
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * <p>Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，<strong>仅限尊享版使用</strong></p>
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * <p>搜索实效范围（仅旗舰版参数）</p><ul><li>d[N]：最近N天，N取值1-30整数。</li><li>m[N]：最近N月，N取值1-12整数。</li><li>y[N]：最近N年，N取值1-5整数。</li></ul><p>示例说明：</p><ul><li>d1/m1/y1：当天/当月/当年。<br>例如，2026.6.15分别传参d1/m1/y1进行搜索，则搜索结果的时间范围分别为“2026.6.15”/“2026.6”/“2026”，以此类推。</li><li>d/m/y：N值为空时，默认N=1，即等效入参d1/m1/y1。</li><li>未传参时，默认不生效。</li></ul><p>枚举值：</p><ul><li>d7： 最近七天</li><li>m3： 最近三月</li><li>y2： 最近两年</li><li>d： 当天</li><li>m： 当月</li><li>y： 当年</li></ul>
                     */
                    std::string m_freshness;
                    bool m_freshnessHasBeenSet;

                    /**
                     * <p>返回子链信息（仅旗舰版参数）</p><p>子链信息包括&quot;子链标题&quot;和&quot;子链URL&quot;，单个doc最多返回10条子链信息。</p><ul><li>true：返回</li><li>false：不返回</li><li>未传参时默认不返回</li></ul>
                     */
                    bool m_deeplinks;
                    bool m_deeplinksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPROREQUEST_H_
