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
                     * 获取搜索词
                     * @return Query 搜索词
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置搜索词
                     * @param _query 搜索词
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
                     * 获取返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）
                     * @return Mode 返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）
                     * @param _mode 返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）
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
                     * 获取指定域名站内搜索（用于过滤自然检索结果）
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @return Site 指定域名站内搜索（用于过滤自然检索结果）
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置指定域名站内搜索（用于过滤自然检索结果）
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @param _site 指定域名站内搜索（用于过滤自然检索结果）
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
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
                     * 获取起始时间（用于过滤自然检索结果），精确到秒时间戳格式
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @return FromTime 起始时间（用于过滤自然检索结果），精确到秒时间戳格式
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * 
                     */
                    int64_t GetFromTime() const;

                    /**
                     * 设置起始时间（用于过滤自然检索结果），精确到秒时间戳格式
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @param _fromTime 起始时间（用于过滤自然检索结果），精确到秒时间戳格式
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
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
                     * 获取结束时间（用于过滤自然检索结果），精确到秒时间戳格式
注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @return ToTime 结束时间（用于过滤自然检索结果），精确到秒时间戳格式
注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * 
                     */
                    int64_t GetToTime() const;

                    /**
                     * 设置结束时间（用于过滤自然检索结果），精确到秒时间戳格式
注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     * @param _toTime 结束时间（用于过滤自然检索结果），精确到秒时间戳格式
注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
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
                     * 获取cnt=10/20/30/40/50，最多可支持返回50条搜索结果，**仅限尊享版使用**
                     * @return Cnt cnt=10/20/30/40/50，最多可支持返回50条搜索结果，**仅限尊享版使用**
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置cnt=10/20/30/40/50，最多可支持返回50条搜索结果，**仅限尊享版使用**
                     * @param _cnt cnt=10/20/30/40/50，最多可支持返回50条搜索结果，**仅限尊享版使用**
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
                     * 获取Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，**仅限尊享版使用**
                     * @return Industry Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，**仅限尊享版使用**
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，**仅限尊享版使用**
                     * @param _industry Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，**仅限尊享版使用**
                     * 
                     */
                    void SetIndustry(const std::string& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                private:

                    /**
                     * 搜索词
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 返回结果类型，0-自然检索结果(默认)，1-多模态VR结果，2-混合结果（多模态VR结果+自然检索结果）
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 指定域名站内搜索（用于过滤自然检索结果）
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 起始时间（用于过滤自然检索结果），精确到秒时间戳格式
注意： mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     */
                    int64_t m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 结束时间（用于过滤自然检索结果），精确到秒时间戳格式
注意：mode=1模式下，参数无效；mode=0模式下，对所有结果生效；mode=2模式下，对输出的自然结果生效
                     */
                    int64_t m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * cnt=10/20/30/40/50，最多可支持返回50条搜索结果，**仅限尊享版使用**
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * Industry=gov/news/acad/finance，对应党政机关、权威媒体、学术（英文）、金融，**仅限尊享版使用**
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPROREQUEST_H_
