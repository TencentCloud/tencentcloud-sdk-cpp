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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_BRANDREPORTARTICLE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_BRANDREPORTARTICLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * 文章信息
                */
                class BrandReportArticle : public AbstractModel
                {
                public:
                    BrandReportArticle();
                    ~BrandReportArticle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文章标题
                     * @return Title 文章标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置文章标题
                     * @param _title 文章标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取文章url地址
                     * @return Url 文章url地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文章url地址
                     * @param _url 文章url地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取文章来源
                     * @return FromSite 文章来源
                     * 
                     */
                    std::string GetFromSite() const;

                    /**
                     * 设置文章来源
                     * @param _fromSite 文章来源
                     * 
                     */
                    void SetFromSite(const std::string& _fromSite);

                    /**
                     * 判断参数 FromSite 是否已赋值
                     * @return FromSite 是否已赋值
                     * 
                     */
                    bool FromSiteHasBeenSet() const;

                    /**
                     * 获取文章发表日期
                     * @return PubTime 文章发表日期
                     * 
                     */
                    std::string GetPubTime() const;

                    /**
                     * 设置文章发表日期
                     * @param _pubTime 文章发表日期
                     * 
                     */
                    void SetPubTime(const std::string& _pubTime);

                    /**
                     * 判断参数 PubTime 是否已赋值
                     * @return PubTime 是否已赋值
                     * 
                     */
                    bool PubTimeHasBeenSet() const;

                    /**
                     * 获取文章标识
                     * @return Flag 文章标识
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置文章标识
                     * @param _flag 文章标识
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取文章热度值
                     * @return Hot 文章热度值
                     * 
                     */
                    uint64_t GetHot() const;

                    /**
                     * 设置文章热度值
                     * @param _hot 文章热度值
                     * 
                     */
                    void SetHot(const uint64_t& _hot);

                    /**
                     * 判断参数 Hot 是否已赋值
                     * @return Hot 是否已赋值
                     * 
                     */
                    bool HotHasBeenSet() const;

                    /**
                     * 获取文章来源等级
                     * @return Level 文章来源等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置文章来源等级
                     * @param _level 文章来源等级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取文章摘要
                     * @return Abstract 文章摘要
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置文章摘要
                     * @param _abstract 文章摘要
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取文章ID
                     * @return ArticleId 文章ID
                     * 
                     */
                    std::string GetArticleId() const;

                    /**
                     * 设置文章ID
                     * @param _articleId 文章ID
                     * 
                     */
                    void SetArticleId(const std::string& _articleId);

                    /**
                     * 判断参数 ArticleId 是否已赋值
                     * @return ArticleId 是否已赋值
                     * 
                     */
                    bool ArticleIdHasBeenSet() const;

                private:

                    /**
                     * 文章标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 文章url地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文章来源
                     */
                    std::string m_fromSite;
                    bool m_fromSiteHasBeenSet;

                    /**
                     * 文章发表日期
                     */
                    std::string m_pubTime;
                    bool m_pubTimeHasBeenSet;

                    /**
                     * 文章标识
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 文章热度值
                     */
                    uint64_t m_hot;
                    bool m_hotHasBeenSet;

                    /**
                     * 文章来源等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 文章摘要
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * 文章ID
                     */
                    std::string m_articleId;
                    bool m_articleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_BRANDREPORTARTICLE_H_
