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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 影子资产详情
                */
                class DisplaySuspiciousAsset : public AbstractModel
                {
                public:
                    DisplaySuspiciousAsset();
                    ~DisplaySuspiciousAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取<p>Url</p>
                     * @return Url <p>Url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Url</p>
                     * @param _url <p>Url</p>
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
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>标题</p>
                     * @param _title <p>标题</p>
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
                     * 获取<p>报文长度</p>
                     * @return ContentLength <p>报文长度</p>
                     * 
                     */
                    int64_t GetContentLength() const;

                    /**
                     * 设置<p>报文长度</p>
                     * @param _contentLength <p>报文长度</p>
                     * 
                     */
                    void SetContentLength(const int64_t& _contentLength);

                    /**
                     * 判断参数 ContentLength 是否已赋值
                     * @return ContentLength 是否已赋值
                     * 
                     */
                    bool ContentLengthHasBeenSet() const;

                    /**
                     * 获取<p>报文内容</p>
                     * @return Content <p>报文内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>报文内容</p>
                     * @param _content <p>报文内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>截图缩略图URL</p>
                     * @return ScreenshotThumbUrl <p>截图缩略图URL</p>
                     * 
                     */
                    std::string GetScreenshotThumbUrl() const;

                    /**
                     * 设置<p>截图缩略图URL</p>
                     * @param _screenshotThumbUrl <p>截图缩略图URL</p>
                     * 
                     */
                    void SetScreenshotThumbUrl(const std::string& _screenshotThumbUrl);

                    /**
                     * 判断参数 ScreenshotThumbUrl 是否已赋值
                     * @return ScreenshotThumbUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotThumbUrlHasBeenSet() const;

                    /**
                     * 获取<p>截图URL</p>
                     * @return ScreenshotUrl <p>截图URL</p>
                     * 
                     */
                    std::string GetScreenshotUrl() const;

                    /**
                     * 设置<p>截图URL</p>
                     * @param _screenshotUrl <p>截图URL</p>
                     * 
                     */
                    void SetScreenshotUrl(const std::string& _screenshotUrl);

                    /**
                     * 判断参数 ScreenshotUrl 是否已赋值
                     * @return ScreenshotUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotUrlHasBeenSet() const;

                    /**
                     * 获取<p>状态码</p>
                     * @return Code <p>状态码</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>状态码</p>
                     * @param _code <p>状态码</p>
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>Api</p>
                     * @return Api <p>Api</p>
                     * 
                     */
                    std::string GetApi() const;

                    /**
                     * 设置<p>Api</p>
                     * @param _api <p>Api</p>
                     * 
                     */
                    void SetApi(const std::string& _api);

                    /**
                     * 判断参数 Api 是否已赋值
                     * @return Api 是否已赋值
                     * 
                     */
                    bool ApiHasBeenSet() const;

                    /**
                     * 获取<p>解析的IP</p>
                     * @return Ip <p>解析的IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>解析的IP</p>
                     * @param _ip <p>解析的IP</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>证书信息</p>
                     * @return Ssl <p>证书信息</p>
                     * 
                     */
                    std::string GetSsl() const;

                    /**
                     * 设置<p>证书信息</p>
                     * @param _ssl <p>证书信息</p>
                     * 
                     */
                    void SetSsl(const std::string& _ssl);

                    /**
                     * 判断参数 Ssl 是否已赋值
                     * @return Ssl 是否已赋值
                     * 
                     */
                    bool SslHasBeenSet() const;

                    /**
                     * 获取<p>ssl证书过期时间</p>
                     * @return SslExpiredTime <p>ssl证书过期时间</p>
                     * 
                     */
                    std::string GetSslExpiredTime() const;

                    /**
                     * 设置<p>ssl证书过期时间</p>
                     * @param _sslExpiredTime <p>ssl证书过期时间</p>
                     * 
                     */
                    void SetSslExpiredTime(const std::string& _sslExpiredTime);

                    /**
                     * 判断参数 SslExpiredTime 是否已赋值
                     * @return SslExpiredTime 是否已赋值
                     * 
                     */
                    bool SslExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>来源类型</p>
                     * @return SourceType <p>来源类型</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>来源类型</p>
                     * @param _sourceType <p>来源类型</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>来源值</p>
                     * @return SourceValue <p>来源值</p>
                     * 
                     */
                    std::string GetSourceValue() const;

                    /**
                     * 设置<p>来源值</p>
                     * @param _sourceValue <p>来源值</p>
                     * 
                     */
                    void SetSourceValue(const std::string& _sourceValue);

                    /**
                     * 判断参数 SourceValue 是否已赋值
                     * @return SourceValue 是否已赋值
                     * 
                     */
                    bool SourceValueHasBeenSet() const;

                    /**
                     * 获取<p>是否信任</p>
                     * @return Trusted <p>是否信任</p>
                     * 
                     */
                    bool GetTrusted() const;

                    /**
                     * 设置<p>是否信任</p>
                     * @param _trusted <p>是否信任</p>
                     * 
                     */
                    void SetTrusted(const bool& _trusted);

                    /**
                     * 判断参数 Trusted 是否已赋值
                     * @return Trusted 是否已赋值
                     * 
                     */
                    bool TrustedHasBeenSet() const;

                    /**
                     * 获取<p>所属者</p>
                     * @return Owner <p>所属者</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>所属者</p>
                     * @param _owner <p>所属者</p>
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>根域名</p>
                     * @return RootDomain <p>根域名</p>
                     * 
                     */
                    std::string GetRootDomain() const;

                    /**
                     * 设置<p>根域名</p>
                     * @param _rootDomain <p>根域名</p>
                     * 
                     */
                    void SetRootDomain(const std::string& _rootDomain);

                    /**
                     * 判断参数 RootDomain 是否已赋值
                     * @return RootDomain 是否已赋值
                     * 
                     */
                    bool RootDomainHasBeenSet() const;

                    /**
                     * 获取<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @return AggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    int64_t GetAggregationCount() const;

                    /**
                     * 设置<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @param _aggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    void SetAggregationCount(const int64_t& _aggregationCount);

                    /**
                     * 判断参数 AggregationCount 是否已赋值
                     * @return AggregationCount 是否已赋值
                     * 
                     */
                    bool AggregationCountHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>Url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>报文长度</p>
                     */
                    int64_t m_contentLength;
                    bool m_contentLengthHasBeenSet;

                    /**
                     * <p>报文内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>截图缩略图URL</p>
                     */
                    std::string m_screenshotThumbUrl;
                    bool m_screenshotThumbUrlHasBeenSet;

                    /**
                     * <p>截图URL</p>
                     */
                    std::string m_screenshotUrl;
                    bool m_screenshotUrlHasBeenSet;

                    /**
                     * <p>状态码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Api</p>
                     */
                    std::string m_api;
                    bool m_apiHasBeenSet;

                    /**
                     * <p>解析的IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>证书信息</p>
                     */
                    std::string m_ssl;
                    bool m_sslHasBeenSet;

                    /**
                     * <p>ssl证书过期时间</p>
                     */
                    std::string m_sslExpiredTime;
                    bool m_sslExpiredTimeHasBeenSet;

                    /**
                     * <p>来源类型</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>来源值</p>
                     */
                    std::string m_sourceValue;
                    bool m_sourceValueHasBeenSet;

                    /**
                     * <p>是否信任</p>
                     */
                    bool m_trusted;
                    bool m_trustedHasBeenSet;

                    /**
                     * <p>所属者</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>根域名</p>
                     */
                    std::string m_rootDomain;
                    bool m_rootDomainHasBeenSet;

                    /**
                     * <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     */
                    int64_t m_aggregationCount;
                    bool m_aggregationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_
