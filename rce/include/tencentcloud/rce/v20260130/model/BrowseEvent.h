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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 浏览事件详情
                */
                class BrowseEvent : public AbstractModel
                {
                public:
                    BrowseEvent();
                    ~BrowseEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前浏览网页的类型，例如主页、搜索页等</p>
                     * @return PageType <p>当前浏览网页的类型，例如主页、搜索页等</p>
                     * 
                     */
                    std::string GetPageType() const;

                    /**
                     * 设置<p>当前浏览网页的类型，例如主页、搜索页等</p>
                     * @param _pageType <p>当前浏览网页的类型，例如主页、搜索页等</p>
                     * 
                     */
                    void SetPageType(const std::string& _pageType);

                    /**
                     * 判断参数 PageType 是否已赋值
                     * @return PageType 是否已赋值
                     * 
                     */
                    bool PageTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前浏览的网页URL</p>
                     * @return PageUrl <p>当前浏览的网页URL</p>
                     * 
                     */
                    std::string GetPageUrl() const;

                    /**
                     * 设置<p>当前浏览的网页URL</p>
                     * @param _pageUrl <p>当前浏览的网页URL</p>
                     * 
                     */
                    void SetPageUrl(const std::string& _pageUrl);

                    /**
                     * 判断参数 PageUrl 是否已赋值
                     * @return PageUrl 是否已赋值
                     * 
                     */
                    bool PageUrlHasBeenSet() const;

                    /**
                     * 获取<p>浏览耗时</p><p>单位：毫秒</p>
                     * @return Duration <p>浏览耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>浏览耗时</p><p>单位：毫秒</p>
                     * @param _duration <p>浏览耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>网页内容类型，例如广告、视频、文章等</p>
                     * @return ContentType <p>网页内容类型，例如广告、视频、文章等</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>网页内容类型，例如广告、视频、文章等</p>
                     * @param _contentType <p>网页内容类型，例如广告、视频、文章等</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>网页内容ID</p>
                     * @return ContentId <p>网页内容ID</p>
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置<p>网页内容ID</p>
                     * @param _contentId <p>网页内容ID</p>
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取<p>上一个网页的类型，例如主页、搜索页等</p>
                     * @return ReferPageType <p>上一个网页的类型，例如主页、搜索页等</p>
                     * 
                     */
                    std::string GetReferPageType() const;

                    /**
                     * 设置<p>上一个网页的类型，例如主页、搜索页等</p>
                     * @param _referPageType <p>上一个网页的类型，例如主页、搜索页等</p>
                     * 
                     */
                    void SetReferPageType(const std::string& _referPageType);

                    /**
                     * 判断参数 ReferPageType 是否已赋值
                     * @return ReferPageType 是否已赋值
                     * 
                     */
                    bool ReferPageTypeHasBeenSet() const;

                    /**
                     * 获取<p>上一个网页URL</p>
                     * @return ReferPageUrl <p>上一个网页URL</p>
                     * 
                     */
                    std::string GetReferPageUrl() const;

                    /**
                     * 设置<p>上一个网页URL</p>
                     * @param _referPageUrl <p>上一个网页URL</p>
                     * 
                     */
                    void SetReferPageUrl(const std::string& _referPageUrl);

                    /**
                     * 判断参数 ReferPageUrl 是否已赋值
                     * @return ReferPageUrl 是否已赋值
                     * 
                     */
                    bool ReferPageUrlHasBeenSet() const;

                    /**
                     * 获取<p>游客账号ID</p>
                     * @return GuestId <p>游客账号ID</p>
                     * 
                     */
                    std::string GetGuestId() const;

                    /**
                     * 设置<p>游客账号ID</p>
                     * @param _guestId <p>游客账号ID</p>
                     * 
                     */
                    void SetGuestId(const std::string& _guestId);

                    /**
                     * 判断参数 GuestId 是否已赋值
                     * @return GuestId 是否已赋值
                     * 
                     */
                    bool GuestIdHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>当前浏览网页的类型，例如主页、搜索页等</p>
                     */
                    std::string m_pageType;
                    bool m_pageTypeHasBeenSet;

                    /**
                     * <p>当前浏览的网页URL</p>
                     */
                    std::string m_pageUrl;
                    bool m_pageUrlHasBeenSet;

                    /**
                     * <p>浏览耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>网页内容类型，例如广告、视频、文章等</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>网页内容ID</p>
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * <p>上一个网页的类型，例如主页、搜索页等</p>
                     */
                    std::string m_referPageType;
                    bool m_referPageTypeHasBeenSet;

                    /**
                     * <p>上一个网页URL</p>
                     */
                    std::string m_referPageUrl;
                    bool m_referPageUrlHasBeenSet;

                    /**
                     * <p>游客账号ID</p>
                     */
                    std::string m_guestId;
                    bool m_guestIdHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_
