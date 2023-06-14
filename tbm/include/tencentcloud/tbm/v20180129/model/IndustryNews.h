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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_INDUSTRYNEWS_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_INDUSTRYNEWS_H_

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
                * 行业报道新闻
                */
                class IndustryNews : public AbstractModel
                {
                public:
                    IndustryNews();
                    ~IndustryNews() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行业报道ID
                     * @return IndustryId 行业报道ID
                     * 
                     */
                    std::string GetIndustryId() const;

                    /**
                     * 设置行业报道ID
                     * @param _industryId 行业报道ID
                     * 
                     */
                    void SetIndustryId(const std::string& _industryId);

                    /**
                     * 判断参数 IndustryId 是否已赋值
                     * @return IndustryId 是否已赋值
                     * 
                     */
                    bool IndustryIdHasBeenSet() const;

                    /**
                     * 获取报道发表时间
                     * @return PubTime 报道发表时间
                     * 
                     */
                    std::string GetPubTime() const;

                    /**
                     * 设置报道发表时间
                     * @param _pubTime 报道发表时间
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
                     * 获取报道来源
                     * @return FromSite 报道来源
                     * 
                     */
                    std::string GetFromSite() const;

                    /**
                     * 设置报道来源
                     * @param _fromSite 报道来源
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
                     * 获取报道标题
                     * @return Title 报道标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置报道标题
                     * @param _title 报道标题
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
                     * 获取报道来源url
                     * @return Url 报道来源url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置报道来源url
                     * @param _url 报道来源url
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
                     * 获取报道来源等级
                     * @return Level 报道来源等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置报道来源等级
                     * @param _level 报道来源等级
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
                     * 获取热度值
                     * @return Hot 热度值
                     * 
                     */
                    uint64_t GetHot() const;

                    /**
                     * 设置热度值
                     * @param _hot 热度值
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
                     * 获取报道标识
                     * @return Flag 报道标识
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置报道标识
                     * @param _flag 报道标识
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
                     * 获取报道摘要
                     * @return Abstract 报道摘要
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置报道摘要
                     * @param _abstract 报道摘要
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                private:

                    /**
                     * 行业报道ID
                     */
                    std::string m_industryId;
                    bool m_industryIdHasBeenSet;

                    /**
                     * 报道发表时间
                     */
                    std::string m_pubTime;
                    bool m_pubTimeHasBeenSet;

                    /**
                     * 报道来源
                     */
                    std::string m_fromSite;
                    bool m_fromSiteHasBeenSet;

                    /**
                     * 报道标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 报道来源url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 报道来源等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 热度值
                     */
                    uint64_t m_hot;
                    bool m_hotHasBeenSet;

                    /**
                     * 报道标识
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 报道摘要
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_INDUSTRYNEWS_H_
